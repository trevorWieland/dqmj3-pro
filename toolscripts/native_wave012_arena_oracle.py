import hashlib
import random
import struct

import unicorn
from unicorn.arm_const import UC_ARM_REG_PC, UC_ARM_REG_CPSR, UC_CPU_ARM_1176

import native_wave012_arena_model as model
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR


REGISTERS = [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4, UC_ARM_REG_R5,
             UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11,
             UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR]
RETURN, STACK = 0x1000000, 0x2000000


class SemanticMismatch(RuntimeError):
    def __init__(self, actual, expected):
        self.details = {'actual': actual, 'expected': expected, 'returnedToSentinel': True,
                        'immutableMemoryPreserved': True, 'writesStayedInDeclaredMutableFields': True,
                        'calleeSavedAndSpPreserved': True}
        super().__init__('Arena returned normally with a different pointer, cursor or bitmap')


def execute(blocks, entry, specification, seed=0, thumb=False, flags=0):
    occupied = model.bitmap(specification)
    operation = specification['operation']
    answer = model.apply(occupied, specification['next'], specification['blocks'], operation, specification.get('start', 0))
    base = 0x3000000 + (seed % 4) * 0x100000
    arena, bitmap, storage = base + 0x100, base + 0x1000, base + 0x4000
    rng = random.Random(seed)
    before = bytearray(rng.randbytes(0x10000))
    struct.pack_into('<III', before, 0x100, bitmap, storage, specification['next'])
    before[0x1000:0x1000 + model.CAPACITY] = occupied
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(UC_CPU_ARM_1176)
    code_ranges, pages = [], set()
    for address, raw in blocks:
        for page in range(address & ~4095, (address + len(raw) + 4095) & ~4095, 4096):
            if page not in pages:
                cpu.mem_map(page, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
                pages.add(page)
        cpu.mem_write(address, raw)
        code_ranges.append((address, address + len(raw)))
    cpu.mem_map(RETURN, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_map(STACK, 8192, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    stack_before = rng.randbytes(8192)
    cpu.mem_write(STACK, stack_before)
    cpu.mem_map(base, 0x10000, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    cpu.mem_write(base, bytes(before))
    cpu.mem_protect(base + 0x2000, 0xe000, unicorn.UC_PROT_READ)
    initial = [rng.getrandbits(32) for _ in REGISTERS]
    initial[0] = arena
    initial[1] = specification['blocks'] if operation == 'allocate' else storage + specification.get('start', 0) * 16
    if operation == 'free':
        initial[2] = specification['blocks']
    initial[-2:] = [STACK + 4096, RETURN | int(thumb)]
    cpu.reg_write(UC_ARM_REG_CPSR, 0x10 | flags << 28)
    for register, value in zip(REGISTERS, initial):
        cpu.reg_write(register, value)
    reads, writes, path = [], [], []
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, lambda uc, kind, address, size, value, user: reads.append((address, size)))
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, lambda uc, kind, address, size, value, user: writes.append((address, size)))
    def executed(uc, address, size, user):
        if not any(low <= address < address + size <= high for low, high in code_ranges):
            raise RuntimeError('Execution escaped declared complete arena body')
        path.append(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE, executed)
    cpu.emu_start(entry, RETURN, count=200000)
    if cpu.reg_read(UC_ARM_REG_PC) != RETURN or bool(cpu.reg_read(UC_ARM_REG_CPSR) & 0x20) != thumb:
        raise RuntimeError('Arena failed bounded return or interworking')
    final = [cpu.reg_read(register) for register in REGISTERS]
    if final[4:12] != initial[4:12] or final[-2] != initial[-2]:
        raise RuntimeError('Arena violated callee-saved registers or SP')
    frame = (initial[-2] - 512, initial[-2])
    mutable = [(bitmap, bitmap + model.CAPACITY)]
    if operation == 'allocate':
        mutable.append((arena + 8, arena + 12))
    for address, size in writes:
        if not any(low <= address < address + size <= high for low, high in [*mutable, frame]):
            raise RuntimeError('Arena wrote outside occupancy/cursor/private frame')
    after = bytes(cpu.mem_read(base, 0x10000))
    for low, high in [(0, 0x108), (0x10c, 0x1000), (0x1000 + model.CAPACITY, 0x10000)]:
        if after[low:high] != before[low:high]:
            raise RuntimeError('Arena modified immutable metadata, storage or guards')
    stack_after = bytes(cpu.mem_read(STACK, 8192))
    if stack_after[:3584] != stack_before[:3584] or stack_after[4096:] != stack_before[4096:]:
        raise RuntimeError('Arena modified stack outside declared private frame')
    readable = [(arena, arena + 12), (bitmap, bitmap + model.CAPACITY), frame, *code_ranges]
    for address, size in reads:
        if not any(low <= address and address + size <= high for low, high in readable):
            raise RuntimeError('Arena read outside declared metadata/bitmap/code/frame')
    raw_pointer = final[0] if operation == 'allocate' else None
    expected_pointer = None if operation == 'free' else 0 if answer['slot'] is None else storage + answer['slot'] * 16
    actual = {'pointer': raw_pointer, 'next': struct.unpack_from('<I', after, 0x108)[0],
              'occupiedSha256': hashlib.sha256(after[0x1000:0x1000 + model.CAPACITY]).hexdigest()}
    expected = {'pointer': expected_pointer, 'next': answer['next'],
                'occupiedSha256': hashlib.sha256(answer['occupied']).hexdigest()}
    if actual != expected:
        raise SemanticMismatch(actual, expected)
    return {**model.summary(answer), 'returnedToSentinel': True, 'immutableMemoryPreserved': True,
            'calleeSavedAndSpPreserved': True, 'writesStayedInDeclaredMutableFields': True,
            'steps': len(path), 'codePath': sorted(set(path)), 'privateFrameBytesExcluded': 512}
