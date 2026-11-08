import json
from pathlib import Path

import native_shader_inventory as predecessor
from native_sdk_inventory import decode, span, word

legacy = predecessor.legacy
CONFIG = 'config/native-heap-overlays.json'


def require(value, reason):
    if not value:
        raise ValueError(reason)


def checked_span(image, origin, row):
    converted = dict(row, start=int(row['start'], 16), endExclusive=int(row['endExclusive'], 16))
    return span(image, origin, converted)


def validate(base, composed, witness, image):
    from capstone.arm_const import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC
    require(legacy.sha(image) == base['codeSha256'] == witness['moduleSha256']
            and witness['status'] == 'frozen-metadata-only-inventory-repair-proposal',
            'Heap inventory original identity or proposal scope differs')
    origin, low, high = base['initializedTextStart'], 0x10b980, 0x10ba20
    current = {row['address']: row for row in composed['functions']}
    require(low not in current and 0x105408 in current, 'Heap split entry/owner already changed')
    owner, old = current[0x105408], witness['currentOwner']
    detached = dict(start=low, endExclusive=high, bytes=160)
    retained = [row for row in owner['ranges'] if row != detached]
    require(old['address'] == '0x105408' and old['mode'] == owner['mode'] == 'ARM'
            and owner['ranges'] == old['ranges'] and owner['textBodyBytes'] == old['instructionBytes'] == 364
            and owner['calledFunctionAddresses'] == old['calledFunctionAddresses']
            and owner['acceptedSourceBytes'] == 0 and len(retained) == 2
            and sum(row['bytes'] for row in retained) == 204
            and witness['retainedOwner']['ranges'] == retained
            and witness['retainedOwner']['instructionBytes'] == 204,
            'Heap historical owner or retained instruction bytes differ')
    new = witness['newEntry']
    require(new['address'] == '0x10b980' and new['mode'] == 'ARM' and new['instructionBytes'] == 160
            and new['range']['start'] == '0x10b980' and new['range']['endExclusive'] == '0x10ba20'
            and new['range']['bytes'] == 160 and new['callees'] == ['0x114128', '0x13c500']
            and witness['retainedOwner']['removeAttributedCallees'] == new['callees']
            and witness['retainedOwner']['addTailCallDependency'] == '0x10b980',
            'Heap complete new body or explicit caller/callee partition differs')
    checked_span(image, origin, new['range'])
    pool = witness['literalPool']
    require((pool['start'], pool['endExclusive'], pool['bytes']) == ('0x10ba20', '0x10ba30', 16),
            'Heap excluded literal-pool extent differs')
    checked_span(image, origin, pool)
    others = [(part['start'], part['endExclusive']) for row in current.values() for part in row['ranges']
              if not (row['address'] == 0x105408 and part == detached)]
    require(not legacy.overlap(others, low, high + 16), 'Heap body/pool overlaps another instruction owner')
    instructions = decode(image, origin, low, 160)
    require(len(instructions) == 40 and instructions[0].mnemonic == 'sub'
            and instructions[0].op_str == 'r2, r0, #1' and instructions[1].mnemonic == 'push'
            and instructions[1].op_str == '{r4, r5, r6, lr}'
            and instructions[-1].mnemonic == 'pop' and instructions[-1].op_str == '{r4, r5, r6, pc}',
            'Heap original entry frame or complete returning body differs')
    calls = sorted(ins.operands[0].imm for ins in instructions if ins.mnemonic == 'bl')
    require(calls == [0x114128, 0x13c500], 'Heap new entry callees differ')
    readers = witness['literalReaders']
    require([(int(row['reader'], 16), int(row['literalAddress'], 16)) for row in readers]
            == [(0x10b9e0, high), (0x10b9f8, high + 4), (0x10b9fc, high + 8), (0x10ba00, high + 12)],
            'Heap literal-reader roster differs')
    for row in readers:
        address, literal = int(row['reader'], 16), int(row['literalAddress'], 16)
        ins = next(ins for ins in instructions if ins.address == address)
        require(legacy.sha(image[address - origin:address - origin + 4]) == row['readerSha256']
                and ins.mnemonic == 'ldr' and ins.operands[1].type == ARM_OP_MEM
                and ins.operands[1].mem.base == ARM_REG_PC and address + 8 + ins.operands[1].mem.disp == literal
                and word(image, origin, literal) == int(row['value'], 16), 'Heap original literal witness differs')
    tail = witness['realTailCall']
    for row in [tail['retainedCallerRange'], tail['frameRestoration'], tail['ancestryTailBranch'], *witness['boundaryWitnesses']]:
        checked_span(image, origin, row)
    call = decode(image, origin, 0x106bc0, 8)
    require(call[0].mnemonic == 'pop' and call[0].op_str == '{r4, lr}'
            and call[1].mnemonic == 'b' and call[1].operands[0].type == ARM_OP_IMM
            and call[1].operands[0].imm == low, 'Heap actual restored-frame tail branch differs')
    edges = []
    for row in current.values():
        if row['mode'] != 'ARM':
            continue
        for part in row['ranges']:
            for address in range((part['start'] + 3) & ~3, part['endExclusive'], 4):
                opcode = word(image, origin, address)
                if opcode >> 28 == 15 or opcode & 0x0e000000 != 0x0a000000:
                    continue
                delta = opcode & 0xffffff
                if delta & 0x800000:
                    delta -= 0x1000000
                if (address + 8 + 4 * delta) & 0xffffffff == low:
                    edges.append((address, opcode >> 28, bool(opcode & 0x1000000)))
    require(edges == [(0x106bc4, 14, False)] and len(tail['edges']) == 1
            and tail['edges'][0]['address'] == '0x106bc4' and tail['edges'][0]['target'] == '0x10b980'
            and tail['edges'][0]['kind'] == 'B' and tail['edges'][0]['condition'] == 14
            and legacy.sha(image[0x106bc4 - origin:0x106bc8 - origin]) == tail['edges'][0]['instructionSha256'],
            'Heap whole owned-ARM incoming branch scan differs')
    observations = witness['observations']
    require(len(observations) == 16 and len({(row['skew'], row['size']) for row in observations}) == 16
            and all(row['answer'] == '0x8e36a0' and row['fullArenaBytes'] == 131072
                    and row['fullGlobalsBytes'] == 471024 and row['directAndActualTailInstructionIdentical'] is True
                    and row['calleeSavedRegistersStackAndFpscrChecked'] is True for row in observations)
            and witness['newEntryPcsObserved'] == list(range(low, high, 4)), 'Heap actual direct/tail ABI corpus differs')
    accounting = witness['byteAccounting']
    require(accounting == dict(before=364, retained=204, newEntry=160, after=364,
            grossInitializedTextBytes=7051280, grossDenominatorChange=0,
            overlappingInstructionBytes=0, sourceCreditGranted=0), 'Heap split byte/source accounting differs')
    updated = dict(owner, ranges=retained, textBodyBytes=204,
        calledFunctionAddresses=sorted((set(owner['calledFunctionAddresses']) - {0x114128, 0x13c500}) | {low}),
        boundaryStatus='reviewed-retained-startup-fragments-with-explicit-heap-tail-dependency')
    added = dict(address=low, mode='ARM', ranges=[detached], textBodyBytes=160,
        bodyBytesOutsideInitializedText=0, entryInstructionDefined=True, isThunk=False,
        calledFunctionAddresses=[0x114128, 0x13c500], acceptedSourceBytes=0,
        boundaryStatus='reviewed-heap-initializer-entry-detached-from-startup-tail-attribution')
    result = dict(composed)
    result['functions'] = sorted([updated if row['address'] == 0x105408 else row
                                  for row in composed['functions']] + [added], key=lambda row: row['address'])
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
            'Heap inventory registry differs')
    entry = config['overlays'][0]
    witness, review = legacy.checked(root, entry['packet']), legacy.checked(root, entry['coordinatorReview'])
    require(entry['approvedForFunctionInventory'] is True and entry['sourceCreditGranted'] == 0
            and review['overlay'] == entry['packet'] and review['sourceCreditGranted'] == 0
            and review['moduleSha256'] == base['codeSha256'] and review['addedDiscoveredEntries'] == 1
            and review['resultingDiscoveredEntries'] == result['functionCount'] + 1,
            'Heap inventory coordinator approval differs')
    for value in [entry['referenceProducer'], review['producer'], review['validator']]:
        legacy.checked_file(root, value)
    result = validate(base, result, witness, (root / 'generated/update-content0/code.bin').read_bytes())
    result['supplementalInventory'] = [*references, entry['packet']]
    result['historicalFunctionCompletenessClaim'] = False
    return result, result['supplementalInventory']
