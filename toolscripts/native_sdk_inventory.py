import copy
import json
from pathlib import Path

import native_provider_inventory as predecessor

legacy = predecessor.legacy
CONFIG = 'config/native-sdk-overlays.json'
ENTRIES = {0x13c48c: ('ARM', 80), 0x474598: ('ARM', 28), 0x4745b8: ('ARM', 28),
    0x46028c: ('ARM', 20), 0x4657f4: ('ARM', 20), 0x4712ac: ('ARM', 28),
    0x47166c: ('ARM', 28), 0x495168: ('ARM', 8), 0x4b2fdc: ('ARM', 8),
    0x4b2f14: ('ARM', 12), 0x10414a: ('Thumb', 10)}
VIRTUAL = {0x46028c: (0x852dc4, 11), 0x4657f4: (0x852dc4, 10),
    0x4712ac: (0x853204, 11), 0x47166c: (0x853204, 10),
    0x474598: (0x8533fc, 2), 0x4745b8: (0x8533fc, 3),
    0x4b2fdc: (0x85588c, 7), 0x4b2f14: (0x85588c, 2), 0x495168: (0x8544cc, 8)}


def span(image, origin, row):
    start, end = row['start'], row['endExclusive']
    if (not origin <= start < end <= origin + len(image) or end - start != row['bytes']
            or legacy.sha(image[start - origin:end - origin]) != row['sha256']):
        raise ValueError('SDK original instruction/data witness changed')
    return image[start - origin:end - origin]


def word(image, origin, address):
    if address % 4 or not origin <= address <= origin + len(image) - 4:
        raise ValueError('SDK word witness escaped original image')
    return int.from_bytes(image[address - origin:address - origin + 4], 'little')


def decode(image, origin, start, size, mode='ARM'):
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB
    decoder = Cs(CS_ARCH_ARM, CS_MODE_THUMB if mode == 'Thumb' else CS_MODE_ARM)
    decoder.detail = True
    rows = list(decoder.disasm(image[start - origin:start - origin + size], start))
    if sum(row.size for row in rows) != size:
        raise ValueError('SDK witness has undecoded instructions')
    return rows


def virtual_witness(image, origin, address, evidence):
    from capstone.arm_const import ARM_OP_MEM, ARM_OP_REG, ARM_REG_PC
    table, slot = VIRTUAL[address]
    witness = evidence['vtableWitness']
    if (witness['table'] != table or witness['slot'] != slot
            or witness['slotAddress'] != table + slot * 4 or witness['target'] != address
            or witness['mode'] != 'ARM' or witness['rawTarget'] != address
            or word(image, origin, table + slot * 4) != address
            or legacy.sha(image[table + slot * 4 - origin:table + slot * 4 - origin + 4])
                != witness['slotSha256']):
        raise ValueError('SDK actual vtable entry changed')
    constructor = evidence.get('constructorInstructionWitness')
    literal = evidence.get('constructorVtableLiteral')
    if constructor is None:
        alternative = evidence['factoryConstructorVtableWitnesses']
        if len(alternative) != 1:
            raise ValueError('SDK derived vtable constructor missing')
        constructor = alternative[0]['instructions']
        literal = dict(reader=alternative[0]['reader'], address=alternative[0]['literal'],
                       target=alternative[0]['target'])
    span(image, origin, constructor)
    instructions = decode(image, origin, constructor['start'], constructor['bytes'])
    load = next((row for row in instructions if row.address == literal['reader']), None)
    if load is None or load.mnemonic != 'ldr' or literal['target'] != table:
        raise ValueError('SDK constructor does not load its actual vtable')
    memories = [op.mem for op in load.operands if op.type == ARM_OP_MEM and op.mem.base == ARM_REG_PC]
    destination = load.operands[0].reg
    stores = [row for row in instructions if row.mnemonic in ('str', 'stm')
              and any(op.type == ARM_OP_REG and op.reg == destination for op in row.operands)]
    if (len(memories) != 1 or load.address + 8 + memories[0].disp != literal['address']
            or word(image, origin, literal['address']) != table or not stores):
        raise ValueError('SDK constructor literal/store provenance changed')
    caller = evidence.get('actualIndirectCallerWitness')
    if caller is not None:
        span(image, origin, caller)
        code = decode(image, origin, caller['start'], caller['bytes'])
        loads = [row for row in code if row.mnemonic == 'ldr' and len(row.operands) == 2
                 and row.operands[1].type == ARM_OP_MEM and row.operands[1].mem.disp == slot * 4]
        if not any(row.mnemonic in ('bx', 'blx') for row in code) or not loads:
            raise ValueError('SDK actual indirect caller slot changed')


def validate(base, composed, packet, image):
    from capstone.arm_const import ARM_REG_R0
    if (legacy.sha(image) != base['codeSha256'] or packet['moduleSha256'] != base['codeSha256']
            or packet['sourceCreditGranted'] != 0 or packet['initializedTextByteDenominatorChanged'] is not False
            or packet['newCandidateFunctions'] != 11 or packet['newInstructionUnionBytes'] != 190):
        raise ValueError('SDK inventory identity, denominator or totals changed')
    origin = base['initializedTextStart']
    current = {row['address']: copy.deepcopy(row) for row in composed['functions']}
    parent = current.get(0x13c428)
    if (parent is None or parent['mode'] != 'ARM' or parent['textBodyBytes'] != 180
            or parent['ranges'] != [dict(start=0x13c428, endExclusive=0x13c4dc, bytes=180)]
            or parent.get('acceptedSourceBytes', 0) != 0):
        raise ValueError('SDK shared-tail predecessor ownership differs')
    correction = packet['sharedTailReview']
    if (correction['originalCandidateParent']['address'] != 0x13c428
            or correction['proposedExclusiveOwnership']['parentOwnedInstructionBytes'] != 100
            or correction['proposedExclusiveOwnership']['releaseEntry'] != 0x13c48c
            or correction['proposedExclusiveOwnership']['releaseInstructionBytes'] != 80
            or not correction['parentFallthrough']['fullParentBehaviorRequiresTailDependency']):
        raise ValueError('SDK shared-tail dependency omitted')
    for row in correction['spanWitnesses']:
        span(image, origin, row)
    if (word(image, origin, 0x13c484) != 0xe8bd4070
            or word(image, origin, 0x13c488) != 0xe1a00000):
        raise ValueError('SDK parent does not restore its caller before fallthrough')
    tail = decode(image, origin, 0x1707cc, 4)[0]
    if tail.mnemonic != 'b' or tail.operands[0].imm != 0x13c48c:
        raise ValueError('SDK standalone release entry lacks its real external tail caller')
    parent.update(ranges=[dict(start=0x13c428, endExclusive=0x13c48c, bytes=100)], textBodyBytes=100,
        calledFunctionAddresses=[0x14ddec, 0x13c48c], fallthroughDependencies=[0x13c48c],
        boundaryStatus='reviewed-exclusive-parent-prefix-with-required-shared-release-tail')
    owners = legacy.merge((part['start'], part['endExclusive'])
        for row in current.values() for part in row['ranges'])
    additions = []
    seen = set()
    for row in packet['functions']:
        address, mode = row['address'], row['mode']
        if address not in ENTRIES or address in current or address in seen:
            raise ValueError('Duplicate or unsupported SDK entry')
        wanted_mode, size = ENTRIES[address]
        part = row['instructionRange']
        if (mode != wanted_mode or part['start'] != address or part['endExclusive'] != address + size
                or part['bytes'] != size or address + size > origin + base['initializedTextGrossBytes']
                or legacy.overlap(owners, address, address + size)):
            raise ValueError('SDK complete entry extent, mode or exclusive ownership differs')
        span(image, origin, part)
        code = decode(image, origin, address, size, mode)
        if address in VIRTUAL:
            virtual_witness(image, origin, address, row['entryWitness'])
        elif address == 0x10414a:
            if (word(image, origin, 0x855898) != 0x10414b or code[0].mnemonic != 'movs'
                    or code[0].operands[0].reg != ARM_REG_R0 or code[0].operands[1].imm != 0
                    or code[2].mnemonic != 'bl' or code[2].operands[0].imm != 0x103540
                    or code[-1].mnemonic != 'pop'):
                raise ValueError('SDK default-work Thumb vtable/call/return changed')
        calls = sorted({instruction.operands[0].imm & ~1 for instruction in code
                        if instruction.mnemonic in ('b', 'bl', 'blx') and instruction.operands
                        and instruction.operands[0].type == 2
                        and instruction.operands[0].imm & ~1 != address
                        and not address <= instruction.operands[0].imm & ~1 < address + size})
        additions.append(dict(address=address, mode=mode,
            ranges=[dict(start=address, endExclusive=address + size, bytes=size)], textBodyBytes=size,
            bodyBytesOutsideInitializedText=0, entryInstructionDefined=True, isThunk=False,
            calledFunctionAddresses=calls, acceptedSourceBytes=0,
            boundaryStatus='reviewed-original-SDK-vtable-or-direct-entry-with-exclusive-instruction-ownership'))
        seen.add(address)
    if seen != set(ENTRIES) or sum(row['textBodyBytes'] for row in additions) != 270:
        raise ValueError('SDK entry roster incomplete')
    result = dict(composed)
    result['functions'] = sorted([*current.values(), *additions], key=lambda row: row['address'])
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
        raise ValueError('SDK inventory registry differs')
    entry = config['overlays'][0]
    packet = legacy.checked(root, entry['packet'])
    review = legacy.checked(root, entry['coordinatorReview'])
    if (entry['approvedForFunctionInventory'] is not True or entry['sourceCreditGranted'] != 0
            or review['overlay'] != entry['packet'] or review['moduleSha256'] != base['codeSha256']
            or review['sourceCreditGranted'] != 0 or review['addedDiscoveredEntries'] != 11
            or review['resultingDiscoveredEntries'] != result['functionCount'] + 11):
        raise ValueError('SDK coordinator approval differs')
    for pin in [packet['producer'], review['producer'], review['validator'], *packet['sourceEvidence']]:
        legacy.checked_file(root, pin)
    result = validate(base, result, packet, (root / 'generated/update-content0/code.bin').read_bytes())
    references = [*references, entry['packet']]
    result['supplementalInventory'] = references
    result['historicalFunctionCompletenessClaim'] = False
    return result, references
