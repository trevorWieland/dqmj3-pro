import ctypes
import hashlib
import random
import struct

import unicorn
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_CPSR, UC_CPU_ARM_1176


REGISTERS = [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4,
             UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9,
             UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR]
RETURN, STACK, OBJECTS = 0x1000000, 0x2000000, 0x3000000


class ResultMismatch(RuntimeError):
    def __init__(self, actual, expected):
        self.details = {'actual': actual, 'expected': expected, 'returnedToSentinel': True,
                        'allMemoryPreserved': True, 'calleeSavedSpLrPreserved': True}
        super().__init__('Returned normally with a different membership result')


def expected(case):
    if not 0 <= case['kind'] <= 255 or not 0 <= case['value'] <= 65535 or not 0 <= case['query'] <= 0xffffffff:
        raise ValueError('Membership fixture outside declared integer domain')
    if len(case['ranges']) > 128 or any(not 0 <= low <= 65535 or not 0 <= high <= 65535 for low, high in case['ranges']):
        raise ValueError('Membership list outside declared fixture domain')
    if case['kind'] == 2:
        return int(case['query'] == case['value'])
    if case['kind'] == 3:
        return int(any(low <= case['query'] <= high for low, high in case['ranges']))
    return 0


def fixtures():
    result = []
    queries = [0, 1, 2, 7, 8, 32767, 32768, 65534, 65535, 65536, 0x80000000, 0xffffffff]
    lists = [[], [(0, 0)], [(65535, 65535)], [(0, 65535)], [(7, 2)], [(1, 7)],
             [(8, 10), (1, 7)], [(0, 4), (3, 9)], [(400, 500), (0, 0), (65535, 65535)]]
    for kind in [0, 1, 2, 3, 4, 127, 255]:
        for query in queries:
            for ranges in lists:
                result.append({'kind': kind, 'value': query & 65535, 'query': query, 'ranges': ranges})
    rng = random.Random(9009)
    for _ in range(384):
        ranges = [(rng.randrange(65536), rng.randrange(65536)) for _ in range(rng.randrange(33))]
        result.append({'kind': rng.choice([2, 3, rng.randrange(256)]), 'value': rng.randrange(65536),
                       'query': rng.choice([rng.getrandbits(32), rng.randrange(65536)]), 'ranges': ranges})
    result.append({'kind': 3, 'value': 0, 'query': 65535, 'ranges': [(0, 0)] * 127 + [(65535, 65535)]})
    return result


def execute(raw, address, case, seed, return_thumb=False, flags=0):
    answer = expected(case)
    rng = random.Random(seed)
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(UC_CPU_ARM_1176)
    page = address & ~4095
    cpu.mem_map(page, ((address + len(raw) - page + 4095) // 4096) * 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_write(address, raw)
    cpu.mem_map(RETURN, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_map(STACK, 8192, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    cpu.mem_map(OBJECTS, 16384, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    object_address = OBJECTS + rng.randrange(16) * 4
    sentinel = object_address + 8
    memory = bytearray(rng.randbytes(16384))
    at = object_address - OBJECTS
    memory[at + 4] = case['kind']
    struct.pack_into('<H', memory, at + 6, case['value'])
    nodes = [OBJECTS + 1024 + index * 24 for index in range(len(case['ranges']))]
    struct.pack_into('<II', memory, at + 8, nodes[-1] if nodes else sentinel, nodes[0] if nodes else sentinel)
    permitted_reads = {(object_address + 4, 1), (object_address + 6, 2), (object_address + 12, 4)}
    for index, ((low, high), node) in enumerate(zip(case['ranges'], nodes)):
        following = nodes[index + 1] if index + 1 < len(nodes) else sentinel
        struct.pack_into('<IIHH', memory, node - OBJECTS, rng.getrandbits(32), following, low, high)
        permitted_reads.update({(node + 4, 4), (node + 8, 2), (node + 10, 2)})
    snapshots = {OBJECTS: bytes(memory), STACK: rng.randbytes(8192)}
    for base, content in snapshots.items():
        cpu.mem_write(base, content)
    cpu.mem_protect(OBJECTS, 16384, unicorn.UC_PROT_READ)
    initial = [rng.getrandbits(32) for _ in REGISTERS]
    initial[0:2] = [object_address, case['query']]
    initial[-2:] = [STACK + 4096, RETURN | int(return_thumb)]
    cpu.reg_write(UC_ARM_REG_CPSR, 0x10 | flags << 28)
    for register, value in zip(REGISTERS, initial):
        cpu.reg_write(register, value)
    reads, writes, steps = [], [], []
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, lambda uc, access, a, n, value, user: reads.append((a, n)))
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, lambda uc, access, a, n, value, user: writes.append((a, n)))
    cpu.hook_add(unicorn.UC_HOOK_CODE, lambda uc, a, n, user: steps.append(a))
    cpu.emu_start(address, RETURN, count=4096)
    if cpu.reg_read(UC_ARM_REG_PC) != RETURN:
        raise RuntimeError('Membership function did not return within instruction bound')
    final = [cpu.reg_read(register) for register in REGISTERS]
    if final[4:12] != initial[4:12] or final[-2:] != initial[-2:]:
        raise RuntimeError('Callee-saved registers, SP or LR changed')
    if writes or any(bytes(cpu.mem_read(base, len(content))) != content for base, content in snapshots.items()):
        raise RuntimeError('Read-only membership query changed memory')
    if not set(reads) <= permitted_reads:
        raise RuntimeError('Membership query read outside the typed fields')
    if bool(cpu.reg_read(UC_ARM_REG_CPSR) & 0x20) != return_thumb:
        raise RuntimeError('Return interworking mode differs')
    if final[0] != answer:
        raise ResultMismatch(final[0], answer)
    return {'result': answer, 'steps': len(steps), 'readCount': len(reads),
            'path': sorted(set(steps)), 'returnedToSentinel': True, 'allMemoryPreserved': True,
            'calleeSavedSpLrPreserved': True, 'typedReadFootprintOnly': True}


class NativeNode(ctypes.Structure):
    pass


NativeNode._fields_ = [('unknown_00', ctypes.c_uint), ('next', ctypes.POINTER(NativeNode)),
                       ('first', ctypes.c_ushort), ('last', ctypes.c_ushort)]


class NativeSet(ctypes.Structure):
    _fields_ = [('unknown_00', ctypes.c_uint), ('kind', ctypes.c_ubyte), ('value', ctypes.c_ushort), ('intervals', NativeNode)]


def execute_windows(function, case):
    model = expected(case)
    instance = NativeSet()
    instance.kind, instance.value = case['kind'], case['value']
    sentinel = ctypes.pointer(instance.intervals)
    nodes = [NativeNode() for _ in case['ranges']]
    instance.intervals.next = ctypes.pointer(nodes[0]) if nodes else sentinel
    for index, (node, bounds) in enumerate(zip(nodes, case['ranges'])):
        node.first, node.last = bounds
        node.next = ctypes.pointer(nodes[index + 1]) if index + 1 < len(nodes) else sentinel
    objects = [instance, *nodes]
    before = [ctypes.string_at(ctypes.addressof(item), ctypes.sizeof(item)) for item in objects]
    answer = function(ctypes.byref(instance), case['query'])
    if answer != model:
        raise ResultMismatch(answer, model)
    if before != [ctypes.string_at(ctypes.addressof(item), ctypes.sizeof(item)) for item in objects]:
        raise RuntimeError('Native Windows membership query changed memory')
    return answer
