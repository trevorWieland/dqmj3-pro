import hashlib
import math
import random
import struct

import unicorn
from unicorn import arm_const as arm

from squirrel_wave002_oracle import HEAP, HEAP_BYTES, STATE, OBSERVATION, VTABLE, CALLBACK, ARRAY_VTABLE, NODES, STACK, END, REF, INTEGER, NULL, get, put, prepare as prepare_array


VM = HEAP + 0xa000
SLOTS = HEAP + 0xb040
ENTRY = 0x1b33dc
FLOAT = 0x05000004
ORIGINAL_RANGES = [(0x1b33dc, 0x1b3530), (0x19d320, 0x19d408), (0x665a44, 0x665af8),
                   (0x19e8c4, 0x19e8e8), (0x157ff4, 0x158004), (0x173d40, 0x173d4c),
                   (0x173d1c, 0x173d40), (0x19e864, 0x19e8c4)]


def sha(data):
    return hashlib.sha256(data).hexdigest()


def requested(case):
    value = case['length']
    if not math.isfinite(value) or not 0 <= value <= 32:
        raise ValueError('Outside finite bounded array-length contract')
    return int(value)


def prepare(case):
    requested(case)
    arena = prepare_array({'root': 'create', 'seed': case['seed'], 'chainLength': case.get('chainLength', 0)})
    base, count = case['base'], case['count']
    if count < 2 or not -4 <= base <= 7 or base + count > 24:
        raise ValueError('Outside owned VM stack-index contract')
    put(arena, VM + 24, SLOTS)
    put(arena, VM + 48, (base + count) & 0xffffffff, base & 0xffffffff)
    put(arena, VM + 140, STATE)
    for index in range(-4, 25):
        put(arena, SLOTS + index * 8, NULL, 0)
    bits = struct.unpack('<I', struct.pack('<f', case['length']))[0] if case.get('floating') else int(case['length'])
    put(arena, SLOTS + (base + 1) * 8, FLOAT if case.get('floating') else INTEGER, bits)
    if count > 2:
        put(arena, SLOTS + (base + 2) * 8, REF if case.get('referenceFill') else INTEGER,
            NODES[2] if case.get('referenceFill') else 0x13957)
    destination = SLOTS + (base + count) * 8
    if case.get('oldResultReference'):
        put(arena, destination, REF, NODES[0])
        put(arena, NODES[0] + 4, 1)
    put(arena, OBSERVATION, 0, 0, 0, 0, 0, VM, destination)
    return arena


def model(case, initial):
    arena = bytearray(initial)
    length = requested(case)
    cursor = HEAP + 0x10000
    services = [{'operation': 'allocate', 'bytes': 36}]
    if case.get('allocationFails'):
        return {'arenaSha256': sha(arena), 'services': services, 'return': None,
                'terminal': 'assertion' if case['count'] == 2 else 'unsupported-memory-fault',
                'assertion': {'condition': 0, 'type': REF, 'value': 0} if case['count'] == 2 else None}, arena
    array = cursor
    cursor += 48
    put(arena, array, ARRAY_VTABLE, 0, 0)
    values = 0
    if length:
        values = cursor
        services.append({'operation': 'reallocate', 'oldBytes': 0, 'newBytes': length * 8})
    fill = SLOTS + (case['base'] + 2) * 8
    tag, value = (get(arena, fill), get(arena, fill + 4)) if case['count'] > 2 else (NULL, 0)
    for index in range(length):
        put(arena, values + index * 8, tag, value)
    if tag & 0x08000000:
        put(arena, value + 4, get(arena, value + 4) + length)
    put(arena, array + 24, values, length, length)
    previous = get(arena, STATE + 68)
    put(arena, array + 12, previous, 0, STATE)
    if previous:
        put(arena, previous + 16, array)
    put(arena, STATE + 68, array)
    top = case['base'] + case['count']
    destination = SLOTS + top * 8
    old_tag, old_value = get(arena, destination), get(arena, destination + 4)
    put(arena, array + 4, 2)
    put(arena, VM + 48, (top + 1) & 0xffffffff)
    put(arena, destination, REF, array)
    if old_tag & 0x08000000:
        remaining = get(arena, old_value + 4) - 1
        put(arena, old_value + 4, remaining)
        if remaining == 0:
            put(arena, OBSERVATION, get(arena, OBSERVATION) + 1, 0, (top + 1) & 0xffffffff, REF, 2)
    put(arena, array + 4, 1)
    return {'arenaSha256': sha(arena), 'services': services, 'return': 1, 'terminal': 'returned', 'assertion': None}, arena


def execute(original, component, case, source):
    initial = prepare(case)
    machine = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    machine.ctl_set_cpu_model(arm.UC_CPU_ARM_1176)
    machine.reg_write(arm.UC_ARM_REG_C1_C0_2, 0xf00000)
    machine.reg_write(arm.UC_ARM_REG_FPEXC, 0x40000000)
    machine.mem_map(0x100000, 0x800000)
    machine.mem_write(0x100000, original)
    machine.mem_map(CALLBACK, 0x10000)
    for section in component['sections']:
        if source or section['address'] == CALLBACK:
            machine.mem_write(section['address'], section['data'])
    machine.mem_map(HEAP, HEAP_BYTES)
    machine.mem_write(HEAP, bytes(initial))
    machine.mem_map(STACK, 0x10000)
    stack = random.Random(case['seed'] ^ 0x7717).randbytes(0x10000)
    machine.mem_write(STACK, stack)
    machine.mem_map(END, 4096)
    machine.mem_write(ARRAY_VTABLE + 8, struct.pack('<I', CALLBACK))
    sp = STACK + 0xff00
    machine.reg_write(arm.UC_ARM_REG_CPSR, 0x10)
    machine.reg_write(arm.UC_ARM_REG_SP, sp)
    machine.reg_write(arm.UC_ARM_REG_LR, END)
    machine.reg_write(arm.UC_ARM_REG_R0, VM)
    registers = [getattr(arm, 'UC_ARM_REG_R' + str(index)) for index in range(4, 12)]
    protected = {register: 0x53110000 + index * 0x113 for index, register in enumerate(registers)}
    floating = {getattr(arm, 'UC_ARM_REG_D' + str(index)): 0x5197799933110000 + index for index in range(8, 16)}
    for register, value in {**protected, **floating}.items():
        machine.reg_write(register, value)
    state = {'cursor': HEAP + 0x10000, 'services': [], 'terminal': None, 'assertion': None, 'visited': set(), 'callbacks': 0}
    allowed = component['functionRanges'] if source else ORIGINAL_RANGES + [component['callbackRange']]

    def allocate(size):
        pointer = state['cursor']
        state['cursor'] += (max(size, 16) + 15) & ~15
        if not 0 < size <= 4096 or state['cursor'] >= HEAP + HEAP_BYTES:
            raise ValueError('Outside deterministic allocation contract')
        return pointer

    def instruction(uc, address, size, unused):
        if address == END:
            state['terminal'] = 'returned'
            uc.emu_stop()
            return
        if address == 0x146590:
            pointer = uc.reg_read(arm.UC_ARM_REG_R1)
            tag, value = struct.unpack('<II', uc.mem_read(pointer, 8))
            state['terminal'] = 'assertion'
            state['assertion'] = {'condition': uc.reg_read(arm.UC_ARM_REG_R0), 'type': tag, 'value': value}
            uc.emu_stop()
            return
        if address in (0x2fece8, 0x18388c):
            r0, r1, r2 = [uc.reg_read(register) for register in (arm.UC_ARM_REG_R0, arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2)]
            if address == 0x2fece8:
                result = 0 if case.get('allocationFails') else allocate(r0)
                state['services'].append({'operation': 'allocate', 'bytes': r0})
            else:
                result = allocate(r2)
                if r0:
                    if not HEAP <= r0 < r0 + r1 <= HEAP + HEAP_BYTES:
                        raise ValueError('Reallocation escaped declared heap')
                    uc.mem_write(result, bytes(uc.mem_read(r0, min(r1, r2))))
                state['services'].append({'operation': 'reallocate', 'oldBytes': r1, 'newBytes': r2})
            uc.reg_write(arm.UC_ARM_REG_R0, result)
            for index, register in enumerate((arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2, arm.UC_ARM_REG_R3, arm.UC_ARM_REG_R12)):
                uc.reg_write(register, (case['seed'] * 0x3157 + index * 0x691) & 0xffffffff)
            for index in range(8):
                uc.reg_write(getattr(arm, 'UC_ARM_REG_D' + str(index)), 0x7ff1000000000000 + case['seed'] + index)
            uc.reg_write(arm.UC_ARM_REG_CPSR, (uc.reg_read(arm.UC_ARM_REG_CPSR) & 0x0fffffff) | ((case['seed'] & 15) << 28))
            uc.reg_write(arm.UC_ARM_REG_PC, uc.reg_read(arm.UC_ARM_REG_LR))
            return
        if not any(low <= address < high for low, high in allowed):
            raise ValueError('Source/original execution escaped owned call closure: ' + hex(address))
        state['visited'].add(address)
        if address == CALLBACK:
            state['callbacks'] += 1

    def access(uc, kind, address, size, value, unused):
        arena = HEAP <= address < address + size <= HEAP + HEAP_BYTES
        frame = sp - 192 <= address < address + size <= sp
        pools = any(section['address'] <= address and address + size <= section['address'] + len(section['data'])
                    for section in component['sections']) if source else (
                    0x665af8 <= address < address + size <= 0x665b00 or 0x1b3530 <= address < address + size <= 0x1b3538)
        if not (arena or frame or kind == unicorn.UC_MEM_READ and pools):
            raise ValueError('Access escaped heap, bounded dead stack or owned literal pools: ' + hex(address))

    machine.hook_add(unicorn.UC_HOOK_CODE, instruction)
    machine.hook_add(unicorn.UC_HOOK_MEM_READ | unicorn.UC_HOOK_MEM_WRITE, access)
    try:
        machine.emu_start(ENTRY, END + 4, timeout=2000000, count=50000)
    except unicorn.UcError:
        if not case.get('allocationFails') or case['count'] <= 2:
            raise
        state['terminal'] = 'unsupported-memory-fault'
    if state['terminal'] is None:
        raise ValueError('No genuine return or declared terminal assertion/fault')
    if state['terminal'] == 'returned':
        if machine.reg_read(arm.UC_ARM_REG_SP) != sp:
            raise ValueError('Returned stack pointer changed')
        if any(machine.reg_read(register) != value for register, value in {**protected, **floating}.items()):
            raise ValueError('Callee-saved integer/VFP register changed')
    final_stack = bytes(machine.mem_read(STACK, 0x10000))
    if final_stack[:0xfe40] != stack[:0xfe40] or final_stack[0xff00:] != stack[0xff00:]:
        raise ValueError('Live stack or guard changed')
    result = {'arenaSha256': sha(bytes(machine.mem_read(HEAP, HEAP_BYTES))), 'services': state['services'],
              'return': machine.reg_read(arm.UC_ARM_REG_R0) if state['terminal'] == 'returned' else None,
              'terminal': state['terminal'], 'assertion': state['assertion']}
    return result, {'returned': state['terminal'] == 'returned', 'terminal': state['terminal'],
                    'callbacks': state['callbacks'], 'visited': sorted(state['visited']), 'sourceOnlyOwnedCodeExecuted': source}
