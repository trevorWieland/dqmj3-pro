import random
import struct

import unicorn
from unicorn import arm_const as arm

import squirrel_reference_records012_model as model
from squirrel_reference_prefix012_oracle import HEAP, HEAP_BYTES, STACK, END, VECTOR, FILL, DESTINATION, VALUES, NODES, put, get
from squirrel_source_wave002 import sha


ROOTS = ((0x19d408, 336, 'sq_prefix_call_resize012'), (0x1a51e0, 296, 'sq_prefix_member_resize012'))


def object_bits(value):
    tag, logical = value
    return tag, NODES[logical - 1] if tag & 0x08000000 else logical


def initial(case, index, component):
    arena = bytearray(random.Random(0x120700 + index).randbytes(HEAP_BYTES))
    stride = 16 if case['group'] else 48
    object_offsets = (0, 8) if case['group'] else (8,)
    put(arena, VECTOR, VALUES if case['capacity'] else 0, case['size'], case['capacity'])
    put(arena, DESTINATION, model.TAGS[0], 17)
    for offset, value in zip(object_offsets, model.fill_record(case['group'], case['fill_kind'])):
        put(arena, FILL + offset, *object_bits(value))
    counts = [0, 0, 7, 7]
    for position in range(case['size']):
        for offset, value in zip(object_offsets, model.old_record(case['group'], position)):
            put(arena, VALUES + position * stride + offset, *object_bits(value))
            if value[0] & 0x08000000:
                counts[value[1] - 1] += 1
    for number, node in enumerate(NODES):
        weak = number in (0, 2)
        table = component['symbols']['sq_prefix_weak_vtable012' if weak else 'sq_prefix_full_vtable012']['address']
        put(arena, node - 4, 0x13579bdf)
        put(arena, node, table, counts[number], 0)
        if not weak:
            put(arena, node + 12, 0, 0)
        put(arena, node + (12 if weak else 20), 0x2468ace0)
    primary = model.fill_record(case['group'], case['fill_kind'])[0]
    incoming = NODES[primary[1] - 1] if primary[0] & 0x08000000 else 0
    observation = struct.pack('<11I', 0, 0, 0, 0, 0, DESTINATION, incoming, VECTOR, 0, 0, 0)
    return arena, observation


def expected(case, index, component):
    arena, observation = initial(case, index, component)
    logical = model.model(case, index)
    stride = 16 if case['group'] else 48
    pointer = VALUES if case['capacity'] else 0
    if case['requested'] > case['capacity']:
        pointer = HEAP + 0x10000
        if case['capacity']:
            arena[pointer - HEAP:pointer - HEAP + case['capacity'] * stride] = arena[VALUES - HEAP:VALUES - HEAP + case['capacity'] * stride]
    for position in range(case['size'], case['requested']):
        arena[pointer - HEAP + position * stride:pointer - HEAP + (position + 1) * stride] = arena[FILL - HEAP:FILL - HEAP + stride]
    put(arena, VECTOR, pointer, logical['size'], logical['capacity'])
    for node, count in zip(NODES, logical['counts']):
        put(arena, node + 4, count)
    observation = struct.pack('<5I', *logical['callback']) + observation[20:]
    return {'arenaSha256': sha(arena), 'observerSha256': sha(observation), 'services': logical['services'], 'returned': True}, arena


def execute(image, component, case, index, source):
    machine = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    machine.mem_map(0x100000, 0x800000)
    machine.mem_write(0x100000, image)
    machine.mem_map(0xa10000, 0x40000)
    for section in component['sections']:
        machine.mem_write(section['address'], section['data'])
    machine.mem_map(HEAP, HEAP_BYTES)
    arena, observation = initial(case, index, component)
    machine.mem_write(HEAP, bytes(arena))
    observed = component['symbols']['sq_prefix_observer012']['address']
    machine.mem_write(observed, observation)
    machine.mem_map(STACK, 0x10000)
    machine.mem_write(STACK, random.Random(index ^ 0x12579).randbytes(0x10000))
    machine.mem_map(END, 4096)
    stack = STACK + 0xff00
    machine.reg_write(arm.UC_ARM_REG_CPSR, 0x10)
    machine.reg_write(arm.UC_ARM_REG_SP, stack)
    machine.reg_write(arm.UC_ARM_REG_LR, END)
    for register, value in ((arm.UC_ARM_REG_R0, VECTOR), (arm.UC_ARM_REG_R1, case['requested']), (arm.UC_ARM_REG_R2, FILL)):
        machine.reg_write(register, value)
    protected = {getattr(arm, 'UC_ARM_REG_R' + str(number)): 0x76120000 + number * 0x471 for number in range(4, 12)}
    for register, value in protected.items():
        machine.reg_write(register, value)
    observer_names = ('sq_prefix_weak_bridge012', 'sq_prefix_full_bridge012', 'sq_prefix_count', 'observe')
    originals = [(address, address + size) for address, size, unused in ROOTS] + [(0x19e864, 0x19e8c4)]
    allowed = list(component['functions'].values()) if source else [
        {'address': start, 'bytes': end - start} for start, end in originals] + [
        row for name, row in component['functions'].items() if name in observer_names]
    state = {'returned': False, 'services': [0, 0, 0], 'visited': set()}
    stride = 16 if case['group'] else 48

    def instruction(uc, address, size, unused):
        if address == END:
            state['returned'] = True
            uc.emu_stop()
            return
        if address == 0x18388c:
            old, previous, replacement = (uc.reg_read(register) for register in (arm.UC_ARM_REG_R0, arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2))
            if replacement != case['requested'] * stride or previous != case['capacity'] * stride:
                raise ValueError('Record allocator byte accounting differs')
            pointer = HEAP + 0x10000
            if previous:
                if not HEAP <= old < old + previous <= HEAP + HEAP_BYTES:
                    raise ValueError('Record allocator input escaped valid storage')
                uc.mem_write(pointer, bytes(uc.mem_read(old, previous)))
            state['services'] = [state['services'][0] + 1, previous // stride, replacement // stride]
            uc.reg_write(arm.UC_ARM_REG_R0, pointer)
            for number, register in enumerate((arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2, arm.UC_ARM_REG_R3, arm.UC_ARM_REG_R12)):
                uc.reg_write(register, (0x63120000 + index * 0x161 + number * 0x97) & 0xffffffff)
            uc.reg_write(arm.UC_ARM_REG_PC, uc.reg_read(arm.UC_ARM_REG_LR))
            return
        if not any(row['address'] <= address < row['address'] + row['bytes'] for row in allowed):
            raise ValueError('Record execution left measured source/original functions: ' + hex(address))
        state['visited'].add(address)

    def access(uc, kind, address, size, value, unused):
        mutable = (HEAP <= address < address + size <= HEAP + HEAP_BYTES or
                   STACK <= address < address + size <= STACK + 0x10000 or observed <= address < address + size <= observed + 44)
        if kind == unicorn.UC_MEM_WRITE and not mutable:
            raise ValueError('Record write escaped its private arena')
        original_literal = not source and 0x1a5308 <= address < address + size <= 0x1a530c
        if kind == unicorn.UC_MEM_READ and not mutable and not original_literal and not any(
                section['address'] <= address < address + size <= section['address'] + section['size'] for section in component['sections']):
            raise ValueError('Record read escaped declared storage: ' + hex(address))

    machine.hook_add(unicorn.UC_HOOK_CODE, instruction)
    machine.hook_add(unicorn.UC_HOOK_MEM_READ | unicorn.UC_HOOK_MEM_WRITE, access)
    address, unused, name = ROOTS[case['group']]
    machine.emu_start(component['functions'][name]['address'] if source else address, END + 4, timeout=3000000, count=100000)
    if not state['returned'] or machine.reg_read(arm.UC_ARM_REG_SP) != stack or any(machine.reg_read(register) != value for register, value in protected.items()):
        raise ValueError('Record helper failed its normal return or callee-saved ABI')
    memory = bytes(machine.mem_read(HEAP, HEAP_BYTES))
    observer = bytes(machine.mem_read(observed, 44))
    return {'arenaSha256': sha(memory), 'observerSha256': sha(observer), 'services': state['services'], 'returned': True}, {
        'returned': True, 'visited': sorted(state['visited'])}, memory
