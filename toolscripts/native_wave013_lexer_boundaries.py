import json

import capstone
from capstone.arm import ARM_INS_B, ARM_INS_BL, ARM_INS_BLX, ARM_INS_LDR, ARM_INS_TST, ARM_CC_EQ, ARM_OP_IMM, ARM_REG_R3

from native_wave013_common import ROOT, MODULE_SHA, sha


def unreachable_abi_arms(original, overlay):
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if sha(image) != MODULE_SHA:
        raise ValueError('Canonical module differs')
    decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    decoder.detail = True
    rows, excluded = [], set()
    for address, name, load, test, branch_address, target in [
            (0x4befe0, 'tokenizer', 0x4bf1a8, 0x4bf1ac, 0x4bf1b8, 0x4bf1c8),
            (0x4bf974, 'escape', 0x4bf9ac, 0x4bf9b4, 0x4bf9bc, 0x4bf9c8)]:
        table = next(row for row in overlay['tables'] if row['name'] == name)
        raw = image[table['start'] - 0x100000:table['start'] - 0x100000 + table['bytes']]
        if sha(raw) != table['sha256'] or any(int.from_bytes(raw[index + 4:index + 8], 'little') != 0 for index in range(0, len(raw), 8)):
            raise ValueError('Virtual-member guard table is not immutable zero-adjustment data')
        code = image[load - 0x100000:target - 0x100000]
        instructions = {item.address: item for item in decoder.disasm(code, load)}
        loading, testing, branch = instructions[load], instructions[test], instructions[branch_address]
        if loading.id != ARM_INS_LDR or loading.operands[0].reg != ARM_REG_R3 or loading.operands[1].mem.disp != -252:
            raise ValueError('Member adjustment load differs')
        if testing.id != ARM_INS_TST or testing.operands[0].reg != ARM_REG_R3 or testing.operands[1].type != ARM_OP_IMM or testing.operands[1].imm != 1:
            raise ValueError('Member virtual-bit test differs')
        if branch.id != ARM_INS_B or branch.cc != ARM_CC_EQ or branch.operands[0].imm != target:
            raise ValueError('Member branch no longer bypasses the virtual arm')
        if any(item.update_flags for location, item in instructions.items() if test < location < branch_address):
            raise ValueError('Flags change before virtual-member bypass')
        unreachable = list(range(branch_address + 4, target, 4))
        if not set(unreachable) <= set(original['functions'][address]['instructionAddresses']):
            raise ValueError('Unreachable-arm extent leaves its original function')
        excluded.update(unreachable)
        rows.append({'function': address, 'table': name, 'tableStart': table['start'], 'tableSha256': table['sha256'],
                     'entryCount': len(table['entries']), 'everyAdjustmentWordIsZero': True,
                     'load': load, 'test': test, 'branch': branch_address, 'branchTarget': target,
                     'guardSpanStart': load, 'guardSpanBytes': len(code), 'guardSpanSha256': sha(code),
                     'unreachableInstructionAddresses': unreachable, 'unreachableBytes': len(unreachable) * 4,
                     'claim': 'Unreachable from valid canonical entries with this module immutable dispatch tables; no altered-table or corrupted-object equivalence claimed'})
    return rows, excluded


def incoming_witnesses(original, overlay, addresses):
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    census = json.loads((ROOT / original['census']['path']).read_text())
    decoders = {}
    for mode in ['ARM', 'Thumb']:
        decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM if mode == 'ARM' else capstone.CS_MODE_THUMB)
        decoder.detail = True
        decoders[mode] = decoder
    result = {}
    for address in addresses:
        witnesses = [{'kind': 'unadjusted-method-table', 'table': table['name'], 'tableStart': table['start'],
                      'tableSha256': table['sha256'], **entry}
                     for table in overlay['tables'] if table['name'] != 'nfa-primary-and-continuation'
                     for entry in table['entries'] if entry['target'] == address]
        for caller in census['functions']:
            if address not in caller['calledFunctionAddresses']:
                continue
            for extent in caller['ranges']:
                for instruction in decoders[caller['mode']].disasm(image[extent['start'] - 0x100000:extent['endExclusive'] - 0x100000], extent['start']):
                    if instruction.id in [ARM_INS_BL, ARM_INS_BLX] and instruction.operands[0].type == ARM_OP_IMM and instruction.operands[0].imm & ~1 == address:
                        witnesses.append({'kind': 'actual-direct-call', 'caller': caller['address'],
                                          'address': instruction.address, 'bytes': instruction.size,
                                          'sha256': sha(image[instruction.address - 0x100000:instruction.address - 0x100000 + instruction.size])})
        if not witnesses:
            raise ValueError('New lexer function has no actual caller/table witness')
        result[address] = witnesses
    return result
