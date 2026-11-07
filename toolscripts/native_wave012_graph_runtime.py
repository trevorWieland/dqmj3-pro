import ctypes
import hashlib
import random

import unicorn
from unicorn.arm_const import UC_ARM_REG_PC, UC_ARM_REG_CPSR, UC_CPU_ARM_1176

from native_wave012_arena_oracle import REGISTERS, RETURN, STACK
import native_wave012_graph_model as model


def intervals(ranges):
    merged = []
    for start, end in sorted(ranges):
        if start == end:
            continue
        if merged and start <= merged[-1][1]:
            merged[-1] = (merged[-1][0], max(end, merged[-1][1]))
        else:
            merged.append((start, end))
    return merged


def immutable_equal(before, after, base, mutable):
    cursor = 0
    for start, end in intervals(mutable):
        if before[cursor:start - base] != after[cursor:start - base]:
            return False
        cursor = end - base
    return before[cursor:] == after[cursor:]


class SemanticMismatch(RuntimeError):
    def __init__(self, actual_return, expected_return, actual, expected, platform):
        self.details = {'platform': platform, 'returnedNormally': True, 'immutableMemoryPreserved': True,
                        'actualReturn': actual_return, 'expectedReturn': expected_return,
                        'actualMemorySha256': hashlib.sha256(actual).hexdigest(),
                        'expectedMemorySha256': hashlib.sha256(expected).hexdigest()}
        super().__init__('Graph returned normally with different defined state')


def execute_arm(blocks, entry, specification, seed=0, thumb=False, flags=0, executable_ranges=None):
    layout = model.encode(specification, 0x3000000 + seed % 4 * 0x100000, 4, seed)
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
    rng = random.Random(seed + 12000)
    stack_before = rng.randbytes(8192)
    cpu.mem_write(STACK, stack_before)
    cpu.mem_map(layout['base'], model.SIZE, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    cpu.mem_write(layout['base'], layout['before'])
    initial = [rng.getrandbits(32) for _ in REGISTERS]
    initial[:len(layout['arguments'])] = layout['arguments']
    initial[-2:] = [STACK + 4096, RETURN | int(thumb)]
    cpu.reg_write(UC_ARM_REG_CPSR, 0x10 | flags << 28)
    for register, value in zip(REGISTERS, initial):
        cpu.reg_write(register, value)
    path, reads, writes = [], [], []
    def executed(uc, address, size, user):
        if not any(low <= address < address + size <= high for low, high in (executable_ranges or code_ranges)):
            raise RuntimeError('Execution escaped source/dependency bodies')
        path.append(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE, executed)
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, lambda uc, access, address, size, value, user: reads.append((address, size)))
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, lambda uc, access, address, size, value, user: writes.append((address, size)))
    cpu.emu_start(entry, RETURN, count=2000000)
    if cpu.reg_read(UC_ARM_REG_PC) != RETURN or bool(cpu.reg_read(UC_ARM_REG_CPSR) & 0x20) != thumb:
        raise RuntimeError('Graph failed bounded return/interworking')
    final = [cpu.reg_read(register) for register in REGISTERS]
    if final[4:12] != initial[4:12] or final[-2] != initial[-2]:
        raise RuntimeError('Graph changed callee-saved registers or SP')
    frame = (initial[-2] - 512, initial[-2])
    allowed = intervals([*layout['mutable'], frame])
    for address, size in writes:
        if not any(low <= address < address + size <= high for low, high in allowed):
            raise RuntimeError('Graph wrote outside declared fields/private frame')
    for address, size in reads:
        if not any(low <= address and address + size <= high for low, high in [*layout['readable'], frame, *code_ranges]):
            raise RuntimeError('Graph read outside typed input/dependency fields')
    after = bytes(cpu.mem_read(layout['base'], model.SIZE))
    if not immutable_equal(layout['before'], after, layout['base'], layout['mutable']):
        raise RuntimeError('Graph changed immutable storage/padding/guards')
    stack_after = bytes(cpu.mem_read(STACK, 8192))
    if stack_after[:3584] != stack_before[:3584] or stack_after[4096:] != stack_before[4096:]:
        raise RuntimeError('Graph changed stack outside private frame')
    expected = layout['expectedReturn']
    actual = (ctypes.c_int(final[0]).value if layout['returnKind'] == 'int' else final[0]) if expected is not None else None
    if actual != expected or after != layout['after']:
        raise SemanticMismatch(actual, expected, after, layout['after'], 'arm-cpu')
    return {'result': expected, 'memorySha256': hashlib.sha256(after).hexdigest(), 'returnedNormally': True,
            'immutableMemoryPreserved': True, 'calleeSavedAndSpPreserved': True, 'codePath': sorted(set(path)),
            'rawR0': final[0], 'privateStackFrameBytesExcluded': 512}


def execute_windows(library, specification, seed=0):
    storage = ctypes.create_string_buffer(model.SIZE + 128)
    ctypes.memset(storage, 0x5a, ctypes.sizeof(storage))
    base = ctypes.addressof(storage) + 64
    if ctypes.sizeof(ctypes.c_void_p) != 8 or base <= 0xffffffff:
        raise RuntimeError('Graph host did not exercise full-width pointers')
    layout = model.encode(specification, base, 8, seed)
    ctypes.memmove(base, layout['before'], model.SIZE)
    operation = specification['operation']
    function = getattr(library, 'fn_' + format(layout['canonicalEntry'], '08x'))
    function.argtypes = [ctypes.c_void_p if kind == 'pointer' else ctypes.c_uint for kind in layout['argumentKinds']]
    function.restype = ctypes.c_void_p if layout['returnKind'] == 'pointer' else ctypes.c_int if layout['returnKind'] == 'int' else None
    answer = function(*layout['arguments'])
    after = ctypes.string_at(base, model.SIZE)
    guards = bytes(storage)
    if guards[:64] != bytes([0x5a]) * 64 or guards[-64:] != bytes([0x5a]) * 64:
        raise RuntimeError('Native graph changed outer guards')
    if not immutable_equal(layout['before'], after, base, layout['mutable']):
        raise RuntimeError('Native graph changed immutable fields/payload/padding')
    if answer != layout['expectedReturn'] or after != layout['after']:
        raise SemanticMismatch(answer, layout['expectedReturn'], after, layout['after'], 'native-windows')
    return {'returnedNormally': True, 'immutableMemoryPreserved': True, 'truePointersAbove32Bits': True}
