import json
from pathlib import Path

import native_binding_inventory as predecessor
from native_sdk_inventory import decode, span, word

legacy = predecessor.legacy
CONFIG = 'config/native-file-overlays.json'
ENTRIES = {
    0x11b74c: ((0x11b74c, 16),),
    0x11b75c: ((0x11b75c, 12),),
    0x11b768: ((0x11b768, 4),),
    0x5f3324: ((0x5f3324, 44),),
    0x5f35bc: ((0x5f35bc, 40), (0x5f35f8, 60)),
    0x6ec748: ((0x6ec748, 12),),
    0x6ec754: ((0x6ec754, 12),),
    0x6ec778: ((0x6ec778, 8),),
    0x6ec780: ((0x6ec780, 16),),
}
INSTALLS = {
    (0x153cdc, 0x153ce4, 0x153d24, 0x858ed8, 'r0', 0),
    (0x153cec, 0x153cf8, 0x153d28, 0x858eb4, 'r1', 0),
    (0x10c5d8, 0x10c5e4, 0x10c670, 0x11b74c, 'sp', 0x24),
    (0x10c5e8, 0x10c5f4, 0x10c674, 0x11b768, 'sp', 0x28),
    (0x10c5f8, 0x10c604, 0x10c678, 0x11b75c, 'sp', 0x2c),
}
TABLES = {0x858ed8: (0, 0x5f3634, 0x5f35bc),
          0x858eb4: (0x5f3584, 0, 0x5f3350, 0x5f3324, 0x6ec778, 0x6ec780)}
ROUTES = {
    (0x127ed4, 0x127edc, 0x858ed8, 2, 0x5f35bc),
    (0x5f3608, 0x5f3614, 0x858eb4, 2, 0x5f3350),
    (0x5f3624, 0x5f3630, 0x858eb4, 3, 0x5f3324),
    (0x145ac8, 0x145acc, 0x858eb4, 4, 0x6ec778),
}
DIRECT_CALLS = {(0x5f35c8, 0x6ec748), (0x5f35d4, 0x6ec754)}


def require(value, reason):
    if not value:
        raise ValueError(reason)


def unchanged_register(code, register):
    for instruction in code:
        _, written = instruction.regs_access()
        require(register not in written and instruction.mnemonic not in ('bl', 'blx'),
                'Callable pointer register changes before its installation or transfer')


def installed_pointer(image, origin, row):
    from capstone.arm_const import ARM_OP_MEM, ARM_REG_PC
    identity = tuple(row[key] for key in ('load', 'store', 'literal', 'value', 'baseRegister', 'offset'))
    require(identity in INSTALLS, 'Unmeasured constructor callable installation')
    span(image, origin, row['instructions'])
    require(row['instructions']['start'] == row['load']
            and row['instructions']['endExclusive'] == row['store'] + 4,
            'Callable constructor span omits the measured load or store')
    code = decode(image, origin, row['load'], row['store'] - row['load'] + 4)
    load, store = code[0], code[-1]
    require(load.mnemonic == 'ldr' and load.operands[1].type == ARM_OP_MEM
            and load.operands[1].mem.base == ARM_REG_PC
            and not load.operands[1].mem.index
            and load.address + 8 + load.operands[1].mem.disp == row['literal']
            and word(image, origin, row['literal']) == row['value'],
            'Callable constructor literal load differs')
    require(store.mnemonic == 'str' and store.operands[1].type == ARM_OP_MEM
            and store.operands[0].reg == load.operands[0].reg
            and store.reg_name(store.operands[1].mem.base) == row['baseRegister']
            and store.operands[1].mem.disp == row['offset']
            and not store.operands[1].mem.index, 'Callable constructor store differs')
    unchanged_register(code[1:-1], load.operands[0].reg)


def indirect_route(image, origin, row, owners):
    from capstone.arm_const import ARM_OP_MEM, ARM_OP_REG
    identity = tuple(row[key] for key in ('load', 'transfer', 'table', 'slot', 'target'))
    require(identity in ROUTES, 'Unmeasured task/provider indirect call')
    part = row['instructions']
    span(image, origin, part)
    require(any(low <= part['start'] < part['endExclusive'] <= high for low, high in owners),
            'Task/provider call lies outside instruction ownership')
    code = decode(image, origin, part['start'], part['bytes'])
    load = next((ins for ins in code if ins.address == row['load']), None)
    transfer = next((ins for ins in code if ins.address == row['transfer']), None)
    require(load is not None and transfer is not None and load.address < transfer.address
            and load.mnemonic == 'ldr' and load.operands[1].type == ARM_OP_MEM
            and load.operands[1].mem.disp == row['slot'] * 4
            and not load.operands[1].mem.index
            and transfer.mnemonic in ('bx', 'blx') and transfer.operands[0].type == ARM_OP_REG
            and transfer.operands[0].reg == load.operands[0].reg
            and word(image, origin, row['table'] + row['slot'] * 4) == row['target'],
            'Task/provider method slot or transfer differs')
    unchanged_register([ins for ins in code if load.address < ins.address < transfer.address],
                       load.operands[0].reg)


def dispatch_table(image, origin, row, owners):
    from capstone.arm_const import ARM_CC_LO, ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC, ARM_SFT_LSL
    part = row['data']
    require((part['start'], part['endExclusive'], part['bytes']) == (0x5f35e4, 0x5f35f8, 20)
            and not legacy.overlap(owners, part['start'], part['endExclusive']),
            'Indexed task dispatch data has instruction ownership or a wrong extent')
    span(image, origin, part)
    span(image, origin, row['guard'])
    require((row['guard']['start'], row['guard']['endExclusive']) == (0x5f35d8, 0x5f35e0),
            'Indexed dispatch guard extent differs')
    compare, load = decode(image, origin, 0x5f35d8, 8)
    require(compare.mnemonic == 'cmp' and compare.operands[1].type == ARM_OP_IMM
            and compare.operands[1].imm == 5 and load.cc == ARM_CC_LO
            and load.mnemonic == 'ldrlo' and load.operands[0].reg == ARM_REG_PC
            and load.operands[1].type == ARM_OP_MEM
            and load.operands[1].mem.base == ARM_REG_PC
            and load.operands[1].mem.index == compare.operands[0].reg
            and load.operands[1].shift.type == ARM_SFT_LSL
            and load.operands[1].shift.value == 2
            and load.address + 8 + load.operands[1].mem.disp == part['start'],
            'Unsigned task dispatch guard/index differs')
    require([word(image, origin, part['start'] + 4 * index) for index in range(5)]
            == [0x5f35f8, 0x5f35f8, 0x5f35f8, 0x5f3618, 0x5f35f8],
            'Task indexed dispatch targets differ')


def validate(base, composed, packet, image):
    require(legacy.sha(image) == base['codeSha256'] == packet['moduleSha256']
            and packet['sourceCreditGranted'] == 0
            and packet['initializedTextByteDenominatorChanged'] is False
            and packet['newCandidateFunctions'] == 9 and packet['newInstructionUnionBytes'] == 224,
            'File callable identity, totals or source credit differ')
    origin = base['initializedTextStart']
    current = {row['address']: row for row in composed['functions']}
    owners = legacy.merge((part['start'], part['endExclusive'])
                          for row in current.values() for part in row['ranges'])
    seen, additions, planned = set(), [], []
    for row in packet['functions']:
        address = row['address']
        require(address in ENTRIES and address not in current and address not in seen
                and row['mode'] == 'ARM', 'File callable entry is duplicate, unknown or not ARM')
        expected = [(start, start + size, size) for start, size in ENTRIES[address]]
        actual = [tuple(part[key] for key in ('start', 'endExclusive', 'bytes'))
                  for part in row['instructionRanges']]
        require(actual == expected, 'Complete file callable instruction ranges differ')
        calls = set()
        for part in row['instructionRanges']:
            require(origin <= part['start'] < part['endExclusive'] <= origin + base['initializedTextGrossBytes']
                    and not legacy.overlap([*owners, *planned], part['start'], part['endExclusive']),
                    'File callable reuses instruction ownership or leaves initialized text')
            span(image, origin, part)
            code = decode(image, origin, part['start'], part['bytes'])
            require(all(ins.size == 4 for ins in code), 'File callable ARM instruction width differs')
            calls.update(ins.operands[0].imm & ~1 for ins in code
                         if ins.mnemonic in ('b', 'bl', 'blx') and ins.operands
                         and ins.operands[0].type == 2)
            planned.append((part['start'], part['endExclusive']))
        calls = sorted(value for value in calls if not any(low <= value < high
                       for low, high, _ in expected))
        ranges = [{key: part[key] for key in ('start', 'endExclusive', 'bytes')}
                  for part in row['instructionRanges']]
        additions.append(dict(address=address, mode='ARM', ranges=ranges,
            textBodyBytes=sum(part['bytes'] for part in ranges), bodyBytesOutsideInitializedText=0,
            entryInstructionDefined=True, isThunk=False, calledFunctionAddresses=calls,
            acceptedSourceBytes=0, boundaryStatus='reviewed-original-file-task-provider-descriptor-callable'))
        seen.add(address)
    require(seen == set(ENTRIES), 'File callable roster is incomplete')
    installs = set()
    for row in packet['constructors']:
        installed_pointer(image, origin, row)
        installs.add(tuple(row[key] for key in ('load', 'store', 'literal', 'value', 'baseRegister', 'offset')))
    require(installs == INSTALLS and len(packet['constructors']) == len(INSTALLS),
            'File callable constructor installation evidence is incomplete')
    for row in packet['tables']:
        address = row['instructionsOrData']['start']
        require(address in TABLES, 'Unknown file method table')
        part = row['instructionsOrData']
        span(image, origin, part)
        values = TABLES[address]
        require(part['bytes'] == len(values) * 4
                and [word(image, origin, address + 4 * index) for index in range(len(values))] == list(values),
                'File task/provider table extent or targets differ')
    require({row['instructionsOrData']['start'] for row in packet['tables']} == set(TABLES)
            and len(packet['tables']) == len(TABLES), 'File task/provider table evidence is incomplete')
    for row in packet['routes']:
        indirect_route(image, origin, row, [*owners, *planned])
    require({tuple(row[key] for key in ('load', 'transfer', 'table', 'slot', 'target'))
             for row in packet['routes']} == ROUTES and len(packet['routes']) == len(ROUTES),
            'File task/provider indirect routes are incomplete')
    calls = set()
    for row in packet['directCalls']:
        require((row['address'], row['target']) in DIRECT_CALLS, 'Unknown file direct-call witness')
        span(image, origin, row['instructions'])
        require(row['instructions']['start'] == row['address'] and row['instructions']['bytes'] == 4,
                'File direct-call witness extent differs')
        code = decode(image, origin, row['address'], 4)
        require(code[0].mnemonic == 'bl' and code[0].operands[0].type == 2
                and code[0].operands[0].imm == row['target'], 'File direct-call target differs')
        calls.add((row['address'], row['target']))
    require(calls == DIRECT_CALLS and len(packet['directCalls']) == len(DIRECT_CALLS),
            'File direct-call evidence is incomplete')
    dispatch_table(image, origin, packet['dispatch'], [*owners, *planned])
    result = dict(composed)
    result['functions'] = sorted([*composed['functions'], *additions], key=lambda row: row['address'])
    result['functionCount'] = len(result['functions'])
    return result


def compose(root, base):
    root = Path(root)
    result, references = predecessor.compose(root, base)
    path = root / CONFIG
    if not path.exists():
        return result, references
    config = json.loads(path.read_bytes())
    require(config['schemaVersion'] == 1 and config['moduleSha256'] == base['codeSha256']
            and legacy.checked(root, config['baseCensus']) == base and len(config['overlays']) == 1,
            'File callable inventory registry differs')
    entry = config['overlays'][0]
    packet = legacy.checked(root, entry['packet'])
    review = legacy.checked(root, entry['coordinatorReview'])
    require(entry['approvedForFunctionInventory'] is True and entry['sourceCreditGranted'] == 0
            and review['overlay'] == entry['packet'] and review['moduleSha256'] == base['codeSha256']
            and review['sourceCreditGranted'] == 0 and review['addedDiscoveredEntries'] == 9
            and review['resultingDiscoveredEntries'] == result['functionCount'] + 9,
            'File callable coordinator approval differs')
    for pin in [packet['producer'], review['producer'], review['validator'], *packet['sourceEvidence']]:
        legacy.checked_file(root, pin)
    result = validate(base, result, packet, (root / 'generated/update-content0/code.bin').read_bytes())
    references = [*references, entry['packet']]
    result['supplementalInventory'] = references
    result['historicalFunctionCompletenessClaim'] = False
    return result, references
