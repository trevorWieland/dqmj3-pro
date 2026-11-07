import bisect
import ctypes
import hashlib
import random

import unicorn
from unicorn.arm_const import UC_ARM_REG_PC, UC_ARM_REG_CPSR, UC_CPU_ARM_1176

from native_wave012_arena_oracle import REGISTERS, RETURN, STACK
from native_wave012_ctor_runtime import intervals, immutable_equal
import native_wave013_lexer_memory as model


class SemanticMismatch(RuntimeError):
    def __init__(self, actual, expected, memory, reference, platform):
        self.details = {'platform': platform, 'returnedNormally': True, 'immutableMemoryPreserved': True,
                        'actualReturn': actual, 'expectedReturn': expected,
                        'actualMemorySha256': hashlib.sha256(memory).hexdigest(),
                        'expectedMemorySha256': hashlib.sha256(reference).hexdigest()}
        super().__init__('Lexer returned normally with different defined state')


def execute_arm(graph, entry, specification, seed=0, thumb=False, flags=0):
    layout = model.encode(specification, 0x3000000 + seed % 4 * 0x100000, 4, seed)
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(UC_CPU_ARM_1176)
    pages = set()
    readonly = []
    for address, raw in graph['blocks']:
        for page in range(address & ~4095, (address + len(raw) + 4095) & ~4095, 4096):
            if page not in pages:
                cpu.mem_map(page, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
                pages.add(page)
        cpu.mem_write(address, raw)
        readonly.append((address, address + len(raw)))
    cpu.mem_map(RETURN, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_map(STACK, 8192, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    rng = random.Random(seed + 13000)
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
    code_ranges = intervals(graph['executableRanges'])
    frame = (initial[-2] - 512, initial[-2])
    allowed_writes = intervals([frame, *layout['mutable']])
    allowed_reads = intervals([frame, *readonly, *layout['readable']])
    starts = {id(ranges): [low for low, high in ranges] for ranges in [code_ranges, allowed_reads, allowed_writes]}
    def contains(ranges, address, size):
        index = bisect.bisect_right(starts[id(ranges)], address) - 1
        return index >= 0 and ranges[index][0] <= address < address + size <= ranges[index][1]
    def executed(uc, address, size, user):
        if not contains(code_ranges, address, size):
            raise RuntimeError('Lexer execution escaped source/original owned code')
        path.append(address)
    def read(uc, access, address, size, value, user):
        if not contains(allowed_reads, address, size):
            raise RuntimeError('Lexer read outside declared objects/buffers/immutable data')
        reads.append((address, size))
    def write(uc, access, address, size, value, user):
        if not contains(allowed_writes, address, size):
            raise RuntimeError('Lexer wrote outside declared fields/private frame')
        writes.append((address, size))
    cpu.hook_add(unicorn.UC_HOOK_CODE, executed)
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, read)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, write)
    cpu.emu_start(entry, RETURN, count=2000000)
    if cpu.reg_read(UC_ARM_REG_PC) != RETURN or bool(cpu.reg_read(UC_ARM_REG_CPSR) & 0x20) != thumb:
        raise RuntimeError('Lexer failed bounded return/interworking')
    final = [cpu.reg_read(register) for register in REGISTERS]
    if final[4:12] != initial[4:12] or final[-2] != initial[-2]:
        raise RuntimeError('Lexer changed callee-saved registers or SP')
    after = bytes(cpu.mem_read(layout['base'], model.SIZE))
    if not immutable_equal(layout['before'], after, layout['base'], layout['mutable']):
        raise RuntimeError('Lexer changed immutable storage/padding/guards')
    stack_after = bytes(cpu.mem_read(STACK, 8192))
    if stack_after[:3584] != stack_before[:3584] or stack_after[4096:] != stack_before[4096:]:
        raise RuntimeError('Lexer changed stack outside private frame')
    answer = None if layout['returnKind'] == 'void' else ctypes.c_int(final[0]).value if layout['returnKind'] == 'int' else final[0]
    return {'layout': layout, 'after': after, 'result': answer, 'writes': writes, 'codePath': sorted(set(path)),
            'memorySha256': hashlib.sha256(after).hexdigest(), 'returnedNormally': True,
            'immutableMemoryPreserved': True, 'calleeSavedAndSpPreserved': True}


def compare_arm(source, reference):
    if source['result'] != reference['result'] or source['after'] != reference['after']:
        raise SemanticMismatch(source['result'], reference['result'], source['after'], reference['after'], 'arm-cpu')


def execute_windows(library, specification, reference, seed=0):
    buffer = ctypes.create_string_buffer(model.SIZE + 128)
    ctypes.memset(buffer, 0x5a, ctypes.sizeof(buffer))
    base = ctypes.addressof(buffer) + 64
    if ctypes.sizeof(ctypes.c_void_p) != 8 or base <= 0xffffffff:
        raise RuntimeError('Lexer did not exercise full-width host pointers')
    layout = model.encode(specification, base, 8, seed)
    expected, mutable = model.translate_reference(reference['layout'], reference['after'], reference['writes'], layout)
    ctypes.memmove(base, layout['before'], model.SIZE)
    function = getattr(library, 'fn_' + format(layout['canonicalEntry'], '08x'))
    function.argtypes = [ctypes.c_void_p if kind == 'pointer' else ctypes.c_uint for kind in layout['argumentKinds']]
    function.restype = None if layout['returnKind'] == 'void' else ctypes.c_void_p if layout['returnKind'] == 'pointer' else ctypes.c_int if layout['returnKind'] == 'int' else ctypes.c_uint
    answer = function(*layout['arguments'])
    after = ctypes.string_at(base, model.SIZE)
    guards = bytes(buffer)
    if guards[:64] != bytes([0x5a]) * 64 or guards[-64:] != bytes([0x5a]) * 64:
        raise RuntimeError('Native lexer changed outer guards')
    if not immutable_equal(layout['before'], after, base, mutable):
        raise RuntimeError('Native lexer changed bytes outside original-written typed fields')
    expected_return = model.translate_pointer(reference['result'], reference['layout'], layout) if layout['returnKind'] == 'pointer' else reference['result']
    if answer != expected_return or after != expected:
        raise SemanticMismatch(answer, expected_return, after, expected, 'native-windows')
    return {'returnedNormally': True, 'immutableMemoryPreserved': True, 'truePointersAbove32Bits': True,
            'memorySha256': hashlib.sha256(after).hexdigest()}
