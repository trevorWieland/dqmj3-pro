import hashlib
import random
import struct

import unicorn
from unicorn.arm_const import UC_ARM_REG_CPSR, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12, UC_ARM_REG_SP


HEAP = 0x2000000
HEAP_BYTES = 0x20000
STACK = 0x1100000
END = 0x1200000
VECTOR = HEAP + 0x200
FILL = HEAP + 0x500
VALUES = HEAP + 0x1000
NODES = [HEAP + 0x3000, HEAP + 0x3100, HEAP + 0x3200]
STATE = HEAP + 0x6000
OBSERVATION = HEAP + 0x8000
VTABLE = HEAP + 0x9000
CALLBACK = 0xa10000
ARRAY_VTABLE = 0x850d74
REF = 0x08000040
INTEGER = 0x05000002
NULL = 0x01000001
REGISTERS = [UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11]


def sha(data):
    return hashlib.sha256(data).hexdigest()


def get(data, address):
    return struct.unpack_from('<I', data, address - HEAP)[0]


def put(data, address, *values):
    struct.pack_into('<' + 'I' * len(values), data, address - HEAP, *values)


def prepare(case):
    arena = bytearray(random.Random(case['seed']).randbytes(HEAP_BYTES))
    size, capacity = case.get('size', 0), case.get('capacity', 0)
    put(arena, VECTOR, VALUES if capacity else 0, size, capacity)
    put(arena, FILL, REF if case.get('referenceFill') else INTEGER, NODES[2] if case.get('referenceFill') else 0x13579)
    occurrences = [0, 0]
    for index in range(size):
        if case.get('oldReferences') and index % 2 == 0:
            node = index % 4 // 2
            put(arena, VALUES + index * 8, REF, NODES[node])
            occurrences[node] += 1
        else:
            put(arena, VALUES + index * 8, INTEGER, index * 19 + 3)
    for index, node in enumerate(NODES):
        references = occurrences[index] + case.get('externalReferences', 0) if index < 2 else 7
        put(arena, node, VTABLE, references, OBSERVATION, 0, 0)
    chain = [HEAP + 0x4000 + index * 0x100 for index in range(case.get('chainLength', 0))]
    for index, node in enumerate(chain):
        put(arena, node, VTABLE, 3, OBSERVATION, chain[index + 1] if index + 1 < len(chain) else 0,
            chain[index - 1] if index else 0)
    put(arena, STATE + 68, chain[0] if chain else 0)
    put(arena, OBSERVATION, 0, 0, 0, VECTOR)
    put(arena, VTABLE, 0, 0, CALLBACK)
    return arena


def model(case, arena):
    arena = bytearray(arena)
    services = []
    cursor = HEAP + 0x10000

    def allocate(size):
        nonlocal cursor
        pointer = cursor
        cursor += (max(size, 16) + 15) & ~15
        if cursor >= HEAP + HEAP_BYTES:
            raise ValueError('Model allocator exceeded fixture arena')
        return pointer

    def resize(vector, requested, fill):
        capacity = get(arena, vector + 8)
        if capacity < requested:
            old = get(arena, vector)
            pointer = allocate(requested * 8)
            services.append({'operation': 'reallocate', 'oldBytes': capacity * 8, 'newBytes': requested * 8})
            if old:
                arena[pointer - HEAP:pointer - HEAP + capacity * 8] = arena[old - HEAP:old - HEAP + capacity * 8]
            put(arena, vector, pointer)
            put(arena, vector + 8, requested)
        size = get(arena, vector + 4)
        pointer = get(arena, vector)
        if size < requested:
            for index in range(size, requested):
                tag, value = fill
                put(arena, pointer + index * 8, tag, value)
                if tag & 0x08000000:
                    put(arena, value + 4, (get(arena, value + 4) + 1) & 0xffffffff)
                put(arena, vector + 4, index + 1)
        else:
            for index in range(requested, size):
                tag, value = get(arena, pointer + index * 8), get(arena, pointer + index * 8 + 4)
                if tag & 0x08000000:
                    references = (get(arena, value + 4) - 1) & 0xffffffff
                    put(arena, value + 4, references)
                    if references == 0:
                        put(arena, OBSERVATION, get(arena, OBSERVATION) + 1, references, size)
            put(arena, vector + 4, requested)

    if case['root'] == 'resize':
        resize(VECTOR, case['requested'], (get(arena, FILL), get(arena, FILL + 4)))
        result = None
    else:
        services.append({'operation': 'allocate', 'bytes': 36})
        if case.get('allocationFails'):
            result = 0
        else:
            result = allocate(36)
            put(arena, result, ARRAY_VTABLE, 0, 0)
            put(arena, result + 24, 0, 0, 0)
            resize(result + 24, case['requested'], (NULL, 0))
            put(arena, result + 20, STATE)
            previous = get(arena, STATE + 68)
            put(arena, result + 12, previous, 0)
            if previous:
                put(arena, previous + 16, result)
            put(arena, STATE + 68, result)
    return {'arenaSha256': sha(arena), 'services': services, 'return': result}, arena


def execute(original, component, case, source):
    machine = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    machine.mem_map(0x100000, 0x800000)
    machine.mem_write(0x100000, original)
    machine.mem_map(0xa10000, 0x10000)
    for section in component['sections']:
        if source or section['address'] == CALLBACK:
            machine.mem_write(section['address'], section['data'])
    machine.mem_map(HEAP, HEAP_BYTES)
    initial = prepare(case)
    machine.mem_write(HEAP, bytes(initial))
    machine.mem_map(STACK, 0x10000)
    stack = random.Random(case['seed'] ^ 0x4100).randbytes(0x10000)
    machine.mem_write(STACK, stack)
    machine.mem_map(END, 4096)
    machine.mem_write(ARRAY_VTABLE + 8, struct.pack('<I', CALLBACK))
    sp = STACK + 0xff00
    machine.reg_write(UC_ARM_REG_CPSR, 0x10)
    machine.reg_write(UC_ARM_REG_SP, sp)
    machine.reg_write(UC_ARM_REG_LR, END)
    machine.reg_write(UC_ARM_REG_R0, VECTOR if case['root'] == 'resize' else STATE)
    machine.reg_write(UC_ARM_REG_R1, case['requested'])
    machine.reg_write(UC_ARM_REG_R2, FILL)
    protected = {register: 0x53910000 + index * 771 for index, register in enumerate(REGISTERS)}
    for register, value in protected.items():
        machine.reg_write(register, value)
    entry = 0x19d320 if case['root'] == 'resize' else 0x665a44
    state = {'cursor': HEAP + 0x10000, 'services': [], 'returned': False, 'visited': set(), 'callbacks': 0}
    allowed = component['functionRanges'] if source else [(0x19d320, 0x19d408), (0x665a44, 0x665af8), (0x19e8c4, 0x19e8e8), component['callbackRange']]

    def allocate(size):
        pointer = state['cursor']
        state['cursor'] += (max(size, 16) + 15) & ~15
        if not 0 < size <= 4096 or state['cursor'] >= HEAP + HEAP_BYTES:
            raise ValueError('Unsupported allocator fixture request')
        return pointer

    def instruction(uc, address, size, unused):
        if address == END:
            state['returned'] = True
            uc.emu_stop()
            return
        if address in (0x2fece8, 0x18388c):
            r0, r1, r2 = [uc.reg_read(register) for register in (UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2)]
            if address == 0x2fece8:
                result = 0 if case.get('allocationFails') else allocate(r0)
                state['services'].append({'operation': 'allocate', 'bytes': r0})
            else:
                result = allocate(r2)
                if r0:
                    if not HEAP <= r0 < r0 + r1 <= HEAP + HEAP_BYTES:
                        raise ValueError('Reallocation source escapes fixture heap')
                    uc.mem_write(result, bytes(uc.mem_read(r0, min(r1, r2))))
                state['services'].append({'operation': 'reallocate', 'oldBytes': r1, 'newBytes': r2})
            uc.reg_write(UC_ARM_REG_R0, result)
            for index, register in enumerate((UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R12)):
                uc.reg_write(register, (case['seed'] * 0x1949 + index * 0x1957) & 0xffffffff)
            uc.reg_write(UC_ARM_REG_CPSR, (uc.reg_read(UC_ARM_REG_CPSR) & 0x0fffffff) | ((case['seed'] & 15) << 28))
            uc.reg_write(UC_ARM_REG_PC, uc.reg_read(UC_ARM_REG_LR))
            return
        if not any(low <= address < high for low, high in allowed):
            raise ValueError('Execution escaped owned source/original component: ' + hex(address))
        state['visited'].add(address)
        if address == CALLBACK:
            state['callbacks'] += 1

    def write(uc, access, address, size, value, unused):
        if not (HEAP <= address < address + size <= HEAP + HEAP_BYTES or sp - 128 <= address < address + size <= sp):
            raise ValueError('Write escapes declared heap and bounded dead stack')

    def read(uc, access, address, size, value, unused):
        arena = HEAP <= address < address + size <= HEAP + HEAP_BYTES
        frame = sp - 128 <= address < address + size <= sp
        literals = (any(section['address'] <= address and address + size <= section['address'] + len(section['data'])
                        for section in component['sections']) if source else 0x665af8 <= address < address + size <= 0x665b00)
        if not (arena or frame or literals):
            raise ValueError('Read escapes declared heap, stack and owned literal pools: ' + hex(address))

    machine.hook_add(unicorn.UC_HOOK_CODE, instruction)
    machine.hook_add(unicorn.UC_HOOK_MEM_WRITE, write)
    machine.hook_add(unicorn.UC_HOOK_MEM_READ, read)
    machine.emu_start(entry, END + 4, timeout=2000000, count=30000)
    if not state['returned'] or machine.reg_read(UC_ARM_REG_SP) != sp:
        raise ValueError('No genuine return or SP mismatch')
    if any(machine.reg_read(register) != value for register, value in protected.items()):
        raise ValueError('Callee-save register mismatch')
    final_stack = bytes(machine.mem_read(STACK, 0x10000))
    if final_stack[:0xfe80] != stack[:0xfe80] or final_stack[0xff00:] != stack[0xff00:]:
        raise ValueError('Live stack or guard changed')
    observation = {'arenaSha256': sha(bytes(machine.mem_read(HEAP, HEAP_BYTES))), 'services': state['services'],
                   'return': machine.reg_read(UC_ARM_REG_R0) if case['root'] == 'create' else None}
    return observation, {'returned': True, 'callbacks': state['callbacks'], 'visited': sorted(state['visited']),
                         'instructionsObserved': len(state['visited']), 'sourceOnlyOwnedCodeExecuted': source}
