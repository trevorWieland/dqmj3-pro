import random
import struct

import unicorn
from unicorn import arm_const as arm

import squirrel_reference_prefix012_model as model
from squirrel_source_wave002 import sha


HEAP, HEAP_BYTES, STACK, END = 0x2000000, 0x20000, 0x1100000, 0x1200000
SPARE = HEAP + 0x2000
VECTOR, FILL, DESTINATION, VALUES = HEAP + 0x200, HEAP + 0x500, HEAP + 0x600, HEAP + 0x1000
NODES = [HEAP + 0x3000 + index * 0x100 for index in range(4)]
ORIGINAL = {'sq_prefix_assign': (0x19e864, 96), 'sq_prefix_vector_resize': (0x19d320, 232),
            'sq_prefix_vector_destroy': (0x77f3f8, 128)}


def put(data, address, *values):
    struct.pack_into('<' + 'I' * len(values), data, address - HEAP, *values)


def get(data, address):
    return struct.unpack_from('<I', data, address - HEAP)[0]


def object_value(kind, incoming=False):
    return (model.TAGS[kind], NODES[(2 if incoming else 0) + (kind == 2)] if kind else 17)


def prepare(case, index, component):
    arena = bytearray(random.Random(0x12000 + index).randbytes(HEAP_BYTES))
    put(arena, VECTOR, VALUES if case['capacity'] else 0, case['size'], case['capacity'])
    put(arena, DESTINATION, *object_value(case['old_kind']))
    put(arena, FILL, *object_value(case['new_kind'], True))
    counts = [case['initial_count'] if case['old_kind'] == 1 else 0,
              case['initial_count'] if case['old_kind'] == 2 else 0, 7, 7]
    if case['operation']:
        counts[:2] = [0, 0]
        for position in range(case['size']):
            kind = 1 if position % 3 == 0 else 2 if position % 3 == 1 else 0
            put(arena, VALUES + position * 8, *object_value(kind))
            if kind:
                counts[kind - 1] += 1
    for number, node in enumerate(NODES):
        weak = number in (0, 2)
        vtable = component['symbols']['sq_prefix_weak_vtable012' if weak else 'sq_prefix_full_vtable012']['address']
        put(arena, node - 4, 0x13579bdf)
        put(arena, node, vtable, counts[number], 0)
        if not weak:
            put(arena, node + 12, 0, 0)
        put(arena, node + (12 if weak else 20), 0x2468ace0)
    incoming = NODES[case['old_kind'] == 2] if case['alias'] else NODES[2 + (case['new_kind'] == 2)] if case['new_kind'] else 0
    put(arena, SPARE, *object_value(0), *object_value(0), *object_value(2, True), *object_value(0))
    observer = struct.pack('<11I', 0, 0, 0, 0, 0, DESTINATION, incoming, VECTOR, case['callback_action'], SPARE, 8)
    return arena, observer


def expected(case, index, component):
    arena, observer = prepare(case, index, component)
    logical = model.model(case, index)
    if case['operation'] == 0:
        value = logical['destinationValue']
        put(arena, DESTINATION, logical['destinationType'], NODES[value - 1] if logical['destinationType'] & 0x08000000 else value)
    elif case['operation'] == 1:
        pointer = VALUES if case['capacity'] else 0
        if logical['capacity'] > case['capacity']:
            pointer = HEAP + 0x10000
            if case['capacity']:
                arena[pointer - HEAP:pointer - HEAP + case['capacity'] * 8] = arena[VALUES - HEAP:VALUES - HEAP + case['capacity'] * 8]
        for position in range(case['size'], case['requested']):
            put(arena, pointer + position * 8, *object_value(case['new_kind'], True))
        put(arena, VECTOR, pointer, logical['size'], logical['capacity'])
    if case['operation'] == 2 and case['callback_action']:
        put(arena, VECTOR, SPARE if case['callback_action'] == 2 else VALUES, logical['size'], logical['capacity'])
    for node, count in zip(NODES, logical['counts']):
        put(arena, node + 4, count)
    observer = bytearray(struct.pack('<5I', *logical['callback']) + observer[20:])
    if case['callback_action']: struct.pack_into('<I', observer, 32, 0)
    return {'arenaSha256': sha(arena), 'observerSha256': sha(observer), 'services': logical['services'], 'returned': True}, arena


def execute(image, component, case, index, source, binding='core'):
    if binding not in ('core', 'legacy'):
        raise ValueError('Unknown portable reference provider selection')
    machine = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    machine.mem_map(0x100000, 0x800000)
    machine.mem_write(0x100000, image)
    machine.mem_map(0xa10000, 0x40000)
    for section in component['sections']:
        machine.mem_write(section['address'], section['data'])
    machine.mem_map(HEAP, HEAP_BYTES)
    initial, observer = prepare(case, index, component)
    machine.mem_write(HEAP, bytes(initial))
    observation_address = component['symbols']['sq_prefix_observer012']['address']
    machine.mem_write(observation_address, observer)
    machine.mem_map(STACK, 0x10000)
    machine.mem_write(STACK, random.Random(index ^ 0x12051).randbytes(0x10000))
    machine.mem_map(END, 4096)
    stack = STACK + 0xff00
    machine.reg_write(arm.UC_ARM_REG_CPSR, 0x10)
    machine.reg_write(arm.UC_ARM_REG_SP, stack)
    machine.reg_write(arm.UC_ARM_REG_LR, END)
    name = ('sq_prefix_assign', 'sq_prefix_vector_resize', 'sq_prefix_vector_destroy')[case['operation']]
    for register, value in ((arm.UC_ARM_REG_R0, DESTINATION if case['operation'] == 0 else VECTOR),
                            (arm.UC_ARM_REG_R1, DESTINATION if case['alias'] else FILL if case['operation'] == 0 else case['requested']),
                            (arm.UC_ARM_REG_R2, FILL)):
        machine.reg_write(register, value)
    protected = {getattr(arm, 'UC_ARM_REG_R' + str(number)): 0x69120000 + number * 0x591 for number in range(4, 12)}
    for register, value in protected.items():
        machine.reg_write(register, value)
    observer_names = ('sq_prefix_weak_bridge012', 'sq_prefix_full_bridge012', 'sq_prefix_count', 'observe')
    allowed = list(component['functions'].values()) if source else [
        {'address': address, 'bytes': size} for address, size in ORIGINAL.values()] + [
        row for symbol, row in component['functions'].items() if symbol in observer_names]
    state = {'returned': False, 'services': [0] * 5, 'visited': set()}

    def instruction(uc, address, size, unused):
        if address == END:
            state['returned'] = True
            uc.emu_stop()
            return
        if address in (0x18388c, 0x19d680):
            r0, r1, r2 = (uc.reg_read(register) for register in (arm.UC_ARM_REG_R0, arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2))
            if address == 0x18388c:
                if not 0 < r2 <= 4096 or r1 > r2:
                    raise ValueError('Unsupported prefix allocator request')
                pointer = HEAP + 0x10000
                if r1:
                    if not HEAP <= r0 < r0 + r1 <= HEAP + HEAP_BYTES:
                        raise ValueError('Prefix reallocation input escaped its arena')
                    uc.mem_write(pointer, bytes(uc.mem_read(r0, r1)))
                state['services'][:3] = [state['services'][0] + 1, r1 // 8, r2 // 8]
                uc.reg_write(arm.UC_ARM_REG_R0, pointer)
            else:
                if r0 != struct.unpack('<I', uc.mem_read(VECTOR, 4))[0] or r1 != model.model(case, index)['services'][4] * 8:
                    raise ValueError('Unexpected prefix vector disposal')
                state['services'][3:] = [state['services'][3] + 1, r1 // 8]
            for number, register in enumerate((arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2, arm.UC_ARM_REG_R3, arm.UC_ARM_REG_R12)):
                uc.reg_write(register, (0x55120000 + index * 0x177 + number * 0x91) & 0xffffffff)
            uc.reg_write(arm.UC_ARM_REG_PC, uc.reg_read(arm.UC_ARM_REG_LR))
            return
        if not any(row['address'] <= address < row['address'] + row['bytes'] for row in allowed):
            raise ValueError('Prefix execution left its source/original contract: ' + hex(address))
        state['visited'].add(address)

    def access(uc, kind, address, size, value, unused):
        mutable = (HEAP <= address < address + size <= HEAP + HEAP_BYTES or
                   STACK <= address < address + size <= STACK + 0x10000 or
                   observation_address <= address < address + size <= observation_address + 44)
        if kind == unicorn.UC_MEM_WRITE and not mutable:
            raise ValueError('Prefix write escaped typed fixture storage')
        if kind == unicorn.UC_MEM_READ and not mutable and not any(
                section['address'] <= address < address + size <= section['address'] + section['size']
                for section in component['sections']):
            raise ValueError('Prefix read escaped declared source/vtable storage')

    machine.hook_add(unicorn.UC_HOOK_CODE, instruction)
    machine.hook_add(unicorn.UC_HOOK_MEM_READ | unicorn.UC_HOOK_MEM_WRITE, access)
    entry = component['functions'][name + ('_legacy' if binding == 'legacy' else '')]['address'] if source else ORIGINAL[name][0]
    machine.emu_start(entry, END + 4, timeout=3000000, count=100000)
    if not state['returned'] or machine.reg_read(arm.UC_ARM_REG_SP) != stack or any(machine.reg_read(register) != value for register, value in protected.items()):
        raise ValueError('Prefix component did not preserve a normally returning ARM ABI')
    if case['operation'] != 1 and machine.reg_read(arm.UC_ARM_REG_R0) != (DESTINATION if case['operation'] == 0 else VECTOR):
        raise ValueError('Prefix component returned the wrong object pointer')
    arena = bytes(machine.mem_read(HEAP, HEAP_BYTES))
    observation = bytes(machine.mem_read(observation_address, 44))
    return {'arenaSha256': sha(arena), 'observerSha256': sha(observation), 'services': state['services'], 'returned': True}, {
        'returned': True, 'instructions': len(state['visited']), 'visited': sorted(state['visited'])}, arena
