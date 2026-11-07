import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_REG_R6, ARM_REG_R8
from native_wave014_oracle import original_image


BLOCKS = [(0x665f60, 0x665f64, 0x665f68, 0x665f94, 'local pair secondary at sp+8'),
    (0x665f94, 0x665f98, 0x665f9c, 0x665fc8, 'local pair primary at sp'),
    (0x665fe8, 0x665fec, 0x665ff0, 0x66601c, 'second local pair secondary at sp+8'),
    (0x66601c, 0x666020, 0x666024, 0x666050, 'second local pair primary at sp'),
    (None, 0x6660a8, 0x6660b0, 0x6660d4, 'callee-saved constant null tag in r8')]


def verify(image, coverage):
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    instructions = {row.address: row for row in decoder.disasm(image[0x665f20 - 0x100000:0x66613c - 0x100000], 0x665f20)}
    tag = struct.unpack_from('<I', image, 0x666140 - 0x100000)[0]
    if tag != 0x01000001 or tag & 0x08000000:
        raise ValueError('Temporary null tag is not a non-reference constant')
    if instructions[0x665f38].mnemonic != 'ldr' or instructions[0x665f38].op_str != 'r8, [pc, #0x200]':
        raise ValueError('Null tag origin is no longer the measured pool load')
    expected = {0x665f3c: ('add', 'r1, sp, #4'), 0x665f40: ('mov', 'r6, #0'), 0x665f44: ('str', 'r8, [sp]'),
        0x665f48: ('stm', 'r1, {r6, r8}'), 0x665f58: ('str', 'r6, [sp, #0xc]'),
        0x665f50: ('mov', 'r1, r6'), 0x665fd8: ('mov', 'r1, #0'),
        0x665fc8: ('add', 'r0, sp, #4'), 0x665fcc: ('str', 'r8, [sp]'),
        0x665fd0: ('stm', 'r0, {r6, r8}'), 0x665fe0: ('str', 'r6, [sp, #0xc]')}
    for address, pair in expected.items():
        instruction = instructions[address]
        if (instruction.mnemonic, instruction.op_str) != pair:
            raise ValueError('Null temporary construction differs')
    for instruction in instructions.values():
        if 0x665f40 < instruction.address < 0x666138 and instruction.regs_access()[1] and any(
                register in instruction.regs_access()[1] for register in [ARM_REG_R6, ARM_REG_R8]):
            raise ValueError('A local instruction overwrites the saved null constants')
    resize = {row.address: row for row in decoder.disasm(image[0x1a51e0 - 0x100000:0x1a5308 - 0x100000], 0x1a51e0)}
    for address, pair in {0x1a51e8: ('mov', 'r7, r1'), 0x1a51ec: ('mov', 'r5, r2'),
            0x1a51f4: ('cmp', 'r1, r7'), 0x1a51f8: ('bhs', '#0x1a521c'),
            0x1a5220: ('cmp', 'r0, r7'), 0x1a522c: ('movhs', 'r5, r7'),
            0x1a5230: ('bhs', '#0x1a527c')}.items():
        if (resize[address].mnemonic, resize[address].op_str) != pair:
            raise ValueError('Requested-zero shrink path no longer discards unexposed fill storage')
    unreachable, proofs = set(), []
    for load, guard, branch, target, origin in BLOCKS:
        check, jump = instructions[guard], instructions[branch]
        if check.mnemonic != 'tst' or '#0x8000000' not in check.op_str or jump.mnemonic != 'beq' or int(jump.op_str[1:], 16) != target:
            raise ValueError('Temporary cleanup guard differs')
        if load is not None and instructions[load].mnemonic != 'ldr':
            raise ValueError('Temporary cleanup no longer reads its local tag')
        addresses = set(range(branch + 4, target, 4))
        if addresses & coverage:
            raise ValueError('A claimed constant-dead cleanup instruction executed')
        unreachable.update(addresses)
        proofs.append({'guard': guard, 'branch': branch, 'endExclusive': target,
            'start': branch + 4, 'bytes': target - branch - 4, 'tagOrigin': origin,
            'constantTag': tag, 'referenceFlag': 0x08000000, 'referenceCondition': False})
    return {'schemaVersion': 1, 'constantDeadInstructionCount': len(unreachable),
        'constantDeadBytes': len(unreachable) * 4, 'blocks': proofs,
        'contracts': ['Member resize is called with requested0; its unsigned growth/reallocation paths are impossible',
            'The shrink path discards fill in r5 and never forwards a pointer to the caller-local null pair',
            'Typed callbacks may mutate declared heap state and preserve the ABI; unexposed caller stack is inaccessible',
            'The null tag in r8 and zero in r6 remain callee-saved constants'],
        'requestedZeroResizeFillDiscardAndSavedConstantWritesVerified': True,
        'patchedOriginalCodeOrConstants': False}, unreachable


if __name__ == '__main__':
    import json
    report, unused = verify(original_image(), set())
    print(json.dumps(report))
