import json

import capstone
from capstone.arm import ARM_INS_B, ARM_INS_BL, ARM_INS_BLX, ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC

from native_wave013_common import ROOT, MODULE_SHA, record, sha


NEW = [0x4c281c, 0x755584]


def qualify(image, sizes):
    path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = json.loads(path.read_text())
    if sha(image) != MODULE_SHA or census['codeSha256'] != MODULE_SHA:
        raise ValueError('Canonical original module/census differs')
    known = {row['address']: row for row in census['functions']}
    decoders = {}
    for mode in ['ARM', 'Thumb']:
        decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM if mode == 'ARM' else capstone.CS_MODE_THUMB)
        decoder.detail = True
        decoders[mode] = decoder
    qualified, owned = {}, set()
    for address in NEW:
        size, mode = sizes[address], 'Thumb' if address == 0x1010c8 else 'ARM'
        if known[address]['ranges'] != [{'start': address, 'bytes': size, 'endExclusive': address + size}] or known[address]['mode'] != mode:
            raise ValueError('Original graph extent/mode differs')
        raw = image[address - 0x100000:address - 0x100000 + size]
        instructions = list(decoders[mode].disasm(raw, address))
        if sum(item.size for item in instructions) != size:
            raise ValueError('Original graph span contains undecoded bytes')
        calls, tails = [], []
        for instruction in instructions:
            owned.add(instruction.address)
            if any(operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC for operand in instruction.operands):
                raise ValueError('Unqualified original PC-relative data reference')
            if instruction.id in [ARM_INS_B, ARM_INS_BL, ARM_INS_BLX]:
                operand = instruction.operands[0]
                if operand.type != ARM_OP_IMM:
                    raise ValueError('Unqualified indirect original graph transfer')
                target = operand.imm & ~1
                if address <= target < address + size and instruction.id == ARM_INS_B:
                    continue
                if target not in sizes:
                    raise ValueError('Original graph leaves closed source dependencies')
                row = {'callsite': instruction.address, 'target': target, 'targetMode': known[target]['mode'],
                       'instructionBytes': instruction.size,
                       'sha256': sha(image[instruction.address - 0x100000:instruction.address - 0x100000 + instruction.size])}
                (tails if instruction.id == ARM_INS_B else calls).append(row)
        witnesses = []
        for caller in census['functions']:
            if address not in caller['calledFunctionAddresses']:
                continue
            for extent in caller['ranges']:
                for instruction in decoders[caller['mode']].disasm(image[extent['start'] - 0x100000:extent['endExclusive'] - 0x100000], extent['start']):
                    if instruction.id in [ARM_INS_BL, ARM_INS_BLX] and instruction.operands[0].type == ARM_OP_IMM and instruction.operands[0].imm & ~1 == address:
                        witnesses.append({'callerFunction': caller['address'], 'callerMode': caller['mode'],
                                          'callsite': instruction.address, 'instructionBytes': instruction.size,
                                          'sha256': sha(image[instruction.address - 0x100000:instruction.address - 0x100000 + instruction.size])})
        if address == 0x17821c:
            witness = image[0x301ad4 - 0x100000:0x301ad8 - 0x100000]
            branch = list(decoders['ARM'].disasm(witness, 0x301ad4))
            if len(branch) != 1 or branch[0].id != ARM_INS_B or branch[0].operands[0].imm != address:
                raise ValueError('Aligned-copy tail entry witness differs')
            witnesses.append({'callerFunction': 0x301a9c, 'callerMode': 'ARM', 'callsite': 0x301ad4,
                              'instructionBytes': 4, 'kind': 'conditional-direct-tail', 'sha256': sha(witness)})
        if not witnesses:
            raise ValueError('Original graph entry lacks actual incoming witness')
        qualified[address] = {'originalMode': mode, 'originalCalls': calls, 'originalDirectTails': tails,
                              'originalInstructionCount': len(instructions), 'callerWitnesses': witnesses,
                              'originalPoolBytes': 0}
    return qualified, owned, record(path)
