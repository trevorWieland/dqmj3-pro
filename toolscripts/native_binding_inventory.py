import json
from pathlib import Path

import native_sdk_inventory as predecessor

legacy = predecessor.legacy
CONFIG = 'config/native-binding-overlays.json'
ENTRIES = {0x47a008: (24, 13), 0x47a028: (4, 5), 0x47a02c: (236, 12),
           0x479ffc: (12, 6), 0x47a120: (8, 9), 0x47a128: (8, 8), 0x47a49c: (8, 14)}
TABLE = 0x853064
CONSTRUCTORS = {(0x47a4bc, 0x47a4c8, 0x47a4f4, 0x85355c),
                (0x48198c, 0x481994, 0x481bd0, 0x85355c),
                (0x4819b0, 0x4819b8, 0x481bd4, TABLE)}


def witness(image, origin, row):
    part = dict(start=row['address'], endExclusive=row['address'] + row['bytes'],
                bytes=row['bytes'], sha256=row['sha256'])
    return predecessor.span(image, origin, part)


def constructor(image, origin, row):
    from capstone.arm_const import ARM_OP_MEM, ARM_REG_PC
    identity = (row['load']['address'], row['store']['address'], row['literal'], row['table'])
    if identity not in CONSTRUCTORS:
        raise ValueError('Binding table has no measured constructor route')
    for item in (row['load'], row['store']):
        witness(image, origin, item)
    code = predecessor.decode(image, origin, row['load']['address'], row['store']['address'] - row['load']['address'] + 4)
    load, store = code[0], code[-1]
    if (load.mnemonic != 'ldr' or load.operands[1].type != ARM_OP_MEM
            or load.operands[1].mem.base != ARM_REG_PC
            or load.address + 8 + load.operands[1].mem.disp != row['literal']
            or predecessor.word(image, origin, row['literal']) != row['table']
            or store.mnemonic != 'str' or store.operands[0].reg != load.operands[0].reg
            or store.operands[1].type != ARM_OP_MEM or store.operands[1].mem.disp != 0):
        raise ValueError('Binding constructor does not install the measured table')
    for instruction in code[1:-1]:
        _, written = instruction.regs_access()
        if load.operands[0].reg in written:
            raise ValueError('Binding constructor overwrites the loaded table register')


def route(image, origin, row, owners):
    from capstone.arm_const import ARM_OP_MEM, ARM_OP_REG
    part = row['instructions']
    predecessor.span(image, origin, part)
    if not any(low <= part['start'] < part['endExclusive'] <= high for low, high in owners):
        raise ValueError('Binding virtual call is outside actual caller instruction ownership')
    code = predecessor.decode(image, origin, part['start'], part['bytes'])
    load = next((ins for ins in code if ins.address == row['load']), None)
    transfer = next((ins for ins in code if ins.address == row['transfer']), None)
    if (load is None or transfer is None or load.address >= transfer.address
            or load.mnemonic != 'ldr' or load.operands[1].type != ARM_OP_MEM
            or load.operands[1].mem.disp != row['slot'] * 4
            or transfer.mnemonic not in ('bx', 'blx') or transfer.operands[0].type != ARM_OP_REG
            or transfer.operands[0].reg != load.operands[0].reg
            or predecessor.word(image, origin, TABLE + row['slot'] * 4) != row['target']):
        raise ValueError('Binding virtual slot/transfer provenance differs')
    for instruction in code:
        if load.address < instruction.address < transfer.address:
            _, written = instruction.regs_access()
            if load.operands[0].reg in written:
                raise ValueError('Binding virtual target register was overwritten')


def validate(base, composed, packet, image):
    if (legacy.sha(image) != base['codeSha256'] or packet['moduleSha256'] != base['codeSha256']
            or packet['sourceCreditGranted'] != 0 or packet['initializedTextByteDenominatorChanged'] is not False
            or packet['newCandidateFunctions'] != 7 or packet['newInstructionUnionBytes'] != 300):
        raise ValueError('Binding inventory identity, totals or credit differ')
    origin = base['initializedTextStart']
    current = {row['address']: row for row in composed['functions']}
    owners = legacy.merge((part['start'], part['endExclusive']) for row in current.values() for part in row['ranges'])
    additions, seen = [], set()
    for row in packet['constructors']:
        constructor(image, origin, row)
    identities = {(row['load']['address'], row['store']['address'], row['literal'], row['table']) for row in packet['constructors']}
    if identities != CONSTRUCTORS:
        raise ValueError('Binding constructor evidence is incomplete')
    planned = [(row['address'], row['address'] + row['instructionRange']['bytes']) for row in packet['functions']]
    for row in packet['routes']:
        route(image, origin, row, [*owners, *planned])
    targets = {row['target'] for row in packet['routes']}
    for row in packet['functions']:
        address = row['address']
        if address not in ENTRIES or address in current or address in seen or address not in targets:
            raise ValueError('Duplicate binding entry or missing actual call route')
        size, slot = ENTRIES[address]
        part = row['instructionRange']
        if (row['mode'] != 'ARM' or part['start'] != address or part['endExclusive'] != address + size
                or part['bytes'] != size or part['endExclusive'] > origin + base['initializedTextGrossBytes']
                or legacy.overlap(owners, address, address + size)
                or row['slot'] != slot or predecessor.word(image, origin, TABLE + slot * 4) != address):
            raise ValueError('Binding entry extent, table slot, mode or exclusive ownership differs')
        predecessor.span(image, origin, part)
        code = predecessor.decode(image, origin, address, size)
        if any(item.size != 4 for item in code):
            raise ValueError('Binding entry contains a non-ARM instruction width')
        calls = sorted({item.operands[0].imm & ~1 for item in code
                        if item.mnemonic in ('b', 'bl', 'blx') and item.operands and item.operands[0].type == 2
                        and not address <= item.operands[0].imm & ~1 < address + size})
        additions.append(dict(address=address, mode='ARM', ranges=[dict(start=address, endExclusive=address + size, bytes=size)],
            textBodyBytes=size, bodyBytesOutsideInitializedText=0, entryInstructionDefined=True, isThunk=False,
            calledFunctionAddresses=calls, acceptedSourceBytes=0,
            boundaryStatus='reviewed-original-binding-vtable-entry-constructor-and-real-indirect-caller'))
        seen.add(address)
    if seen != set(ENTRIES):
        raise ValueError('Binding entry roster incomplete')
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
    if (config['schemaVersion'] != 1 or config['moduleSha256'] != base['codeSha256']
            or legacy.checked(root, config['baseCensus']) != base or len(config['overlays']) != 1):
        raise ValueError('Binding inventory registry differs')
    entry = config['overlays'][0]
    packet, review = legacy.checked(root, entry['packet']), legacy.checked(root, entry['coordinatorReview'])
    if (entry['approvedForFunctionInventory'] is not True or entry['sourceCreditGranted'] != 0
            or review['overlay'] != entry['packet'] or review['moduleSha256'] != base['codeSha256']
            or review['sourceCreditGranted'] != 0 or review['addedDiscoveredEntries'] != 7
            or review['resultingDiscoveredEntries'] != result['functionCount'] + 7):
        raise ValueError('Binding coordinator approval differs')
    for pin in [packet['producer'], review['producer'], review['validator'], *packet['sourceEvidence']]:
        legacy.checked_file(root, pin)
    result = validate(base, result, packet, (root / 'generated/update-content0/code.bin').read_bytes())
    references = [*references, entry['packet']]
    result['supplementalInventory'] = references
    result['historicalFunctionCompletenessClaim'] = False
    return result, references
