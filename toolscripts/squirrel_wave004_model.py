import hashlib
import random
import struct

from squirrel_wave002_oracle import HEAP, HEAP_BYTES, NODES, STATE, VTABLE, ARRAY_VTABLE, INTEGER, NULL, REF, get, put as put_raw, prepare as prepare_array


VM = HEAP + 0xa000
SLOTS = HEAP + 0xb000
CLOSURE = HEAP + 0x7000
MASKS = HEAP + 0x7200
OUTERS = HEAP + 0x7300
WEAK = HEAP + 0x7400
FRAMES = HEAP + 0xc000
FIXTURE = HEAP + 0x8000
RESULT = HEAP + 0x8500
SUSPEND = HEAP + 0x8600
NATIVE = 0xa10000
RELEASE = 0xa11000
NATIVE_TAG = 0x08000200
INACTIVE_OFFSETS = (0, 4, 32, 40)


def put(arena, address, *values):
    put_raw(arena, address, *[value & 0xffffffff for value in values])


def sha(data):
    return hashlib.sha256(data).hexdigest()


def validate(case):
    if not 0 <= case.get('arguments', 2) <= 5 or not 0 <= case.get('base', 5) <= 8:
        raise ValueError('Outside bounded nonnegative argument/frame contract')
    if not 0 <= case.get('oldBase', 3) <= 8 or not 0 <= case.get('calls', 0) <= 4:
        raise ValueError('Outside bounded previous-frame contract')
    if not 0 <= case.get('outers', 0) <= 2 or not 0 <= case.get('length', 4) <= 16:
        raise ValueError('Outside bounded outer/array-length contract')
    if not -2147483647 <= case.get('parameterCheck', -2) <= 2147483647 or not 0 <= case.get('nativeDepth', 1) <= 100:
        raise ValueError('Invalid signed arity/depth domain')
    if case.get('handler', 'fixture') == 'array' and (case.get('arguments', 2) != 2 or case.get('outers', 0)):
        raise ValueError('Array handler corpus requires its measured two-argument registration')


def prepare(case):
    validate(case)
    arena = prepare_array({'root': 'create', 'seed': case['seed'], 'chainLength': case.get('chainLength', 0)})
    base, arguments = case.get('base', 5), case.get('arguments', 2)
    stack_size = 12 if case.get('growStack') else 64
    put(arena, VM + 24, SLOTS, stack_size, stack_size)
    put(arena, VM + 48, 10, case.get('oldBase', 3))
    for offset in (56, 64, 72, 80, 88):
        put(arena, VM + offset, NULL, 0)
    calls = case.get('calls', 0)
    put(arena, VM + 96, FRAMES, calls, 4, FRAMES, 4, 4)
    put(arena, VM + 132, FRAMES + (calls - 1) * 48 if calls else 0, FIXTURE, STATE, case.get('nativeDepth', 1))
    for index in range(4):
        put(arena, FRAMES + index * 48 + 8, NATIVE_TAG if index < calls else NULL,
            CLOSURE if index < calls else 0)
    put(arena, CLOSURE, VTABLE, 7, 0, 0, 0, STATE)
    put(arena, CLOSURE + 24, case.get('parameterCheck', -2) & 0xffffffff, MASKS, 2, 2, OUTERS, case.get('outers', 0), 2)
    put(arena, CLOSURE + 52, 0x08010000 if case.get('weakEnvironment') else NULL,
        WEAK if case.get('weakEnvironment') else 0, 0x1b33dc if case.get('handler') == 'array' else NATIVE)
    put(arena, MASKS, 0xffffffff, case.get('typeMask', 6))
    put(arena, OUTERS, INTEGER, 0x338, REF, NODES[2])
    put(arena, WEAK, VTABLE, 3, 0, INTEGER, 0x6622)
    for index in range(stack_size):
        put(arena, SLOTS + index * 8, NULL, 0)
    put(arena, SLOTS + base * 8, REF if case.get('weakEnvironment') else INTEGER,
        NODES[1] if case.get('weakEnvironment') else 0x3355)
    put(arena, SLOTS + (base + 1) * 8, case.get('argumentType', INTEGER), case.get('length', 4))
    put(arena, RESULT, REF if case.get('oldResultReference') else INTEGER,
        NODES[0] if case.get('oldResultReference') else 0x7799)
    put(arena, NODES[0] + 4, 1)
    put(arena, NODES[1] + 4, 1)
    for node in NODES:
        put(arena, node + 8, FIXTURE)
    arena[SUSPEND - HEAP] = 1
    arena[FIXTURE - HEAP:FIXTURE - HEAP + 300] = bytes(300)
    put(arena, FIXTURE, VM, RESULT, case.get('returnCode', 1) & 0xffffffff,
        REF if case.get('referenceResult') else INTEGER, NODES[2] if case.get('referenceResult') else 0x2244)
    put(arena, VTABLE + 8, RELEASE)
    return arena


def stack_bytes(case):
    return random.Random(case.get('stackSeed', case['seed'] ^ 0x4417)).randbytes(0x10000)


def model(case, source=False):
    arena = prepare(case)
    services = []
    cursor = HEAP + 0x10000
    base, arguments = case.get('base', 5), case.get('arguments', 2)
    old_calls, old_depth = case.get('calls', 0), case.get('nativeDepth', 1)
    frame = None
    terminal = 'returned'
    returned = 1

    def assign(destination, tag, value):
        old_tag, old_value = get(arena, destination), get(arena, destination + 4)
        put(arena, destination, tag, value)
        if tag & 0x08000000:
            put(arena, value + 4, get(arena, value + 4) + 1)
        if old_tag & 0x08000000:
            count = get(arena, old_value + 4) - 1
            put(arena, old_value + 4, count)
            if not count:
                events = get(arena, FIXTURE + 72)
                result_tag, result_value = get(arena, RESULT), get(arena, RESULT + 4)
                put(arena, FIXTURE + 76 + events * 28, old_value, get(arena, VM + 48), get(arena, VM + 52),
                    get(arena, VM + 100), get(arena, VM + 144), result_tag,
                    get(arena, result_value + 4) if result_tag & 0x08000000 else 0)
                put(arena, FIXTURE + 72, events + 1)

    def allocate(size):
        nonlocal cursor
        result = cursor
        cursor += (max(size, 16) + 15) & ~15
        return result

    def resize(pointer, size, stride, old_size, initialize):
        result = allocate(size * stride)
        services.append({'operation': 'reallocate', 'oldBytes': old_size * stride, 'newBytes': size * stride})
        arena[result - HEAP:result - HEAP + old_size * stride] = arena[pointer - HEAP:pointer - HEAP + old_size * stride]
        for index in range(old_size, size):
            initialize(result + index * stride)
        return result

    check = case.get('parameterCheck', -2)
    if old_depth > 99:
        services.append({'operation': 'error', 'message': 'Native stack overflow'})
        returned = 0
    elif (check > 0 and check != arguments) or (check < 0 and arguments < -check):
        services.append({'operation': 'error', 'message': 'wrong number of parameters'})
        returned = 0
    elif arguments > 1 and case.get('typeMask', 6) != -1 and not case.get('argumentType', INTEGER) & case.get('typeMask', 6):
        services.append({'operation': 'type-error', 'index': 1, 'mask': case.get('typeMask', 6), 'type': case.get('argumentType', INTEGER)})
        returned = 0
    else:
        put(arena, VM + 144, old_depth + 1)
        stack = SLOTS
        if case.get('growStack'):
            stack = resize(SLOTS, 32, 8, 12, lambda address: put(arena, address, NULL, 0))
            put(arena, VM + 24, stack, 32, 32)
        put(arena, VM + 48, base + arguments)
        put(arena, CLOSURE + 4, 8)
        frames = FRAMES
        if old_calls == 4:
            def initialize(address):
                arena[address - HEAP:address - HEAP + 48] = bytes(48)
                put(arena, address + 8, NULL, 0)
            frames = resize(FRAMES, 8, 48, 4, initialize)
            put(arena, VM + 96, frames, old_calls, 8, frames, 8, 8)
        frame = frames + old_calls * 48
        arena[frame - HEAP:frame - HEAP + 48] = bytes(48)
        if not source:
            original_stack = stack_bytes(case)
            for offset, stack_offset in ((0, -96), (4, -92), (32, -64), (40, -56)):
                value = struct.unpack_from('<I', original_stack, 0xff00 + stack_offset)[0]
                put(arena, frame + offset, value)
        put(arena, frame + 8, NATIVE_TAG, CLOSURE, 0, 0, base - case.get('oldBase', 3), 10 - case.get('oldBase', 3))
        put(arena, frame + 36, 1)
        put(arena, CLOSURE + 4, 9)
        put(arena, VM + 100, old_calls + 1)
        put(arena, VM + 132, frame)
        put(arena, VM + 52, base)
        for index in range(case.get('outers', 0)):
            top = get(arena, VM + 48)
            put(arena, VM + 48, top + 1)
            assign(stack + top * 8, get(arena, OUTERS + index * 8), get(arena, OUTERS + index * 8 + 4))
        if case.get('weakEnvironment'):
            assign(stack + base * 8, INTEGER, 0x6622)
        if case.get('handler') == 'array':
            services.append({'operation': 'allocate', 'bytes': 36})
            if case.get('allocationFails'):
                terminal, returned = 'assertion', None
            else:
                array = allocate(36)
                put(arena, array, ARRAY_VTABLE, 0, 0, 0, 0, STATE, 0, 0, 0)
                length = case.get('length', 4)
                values = 0
                if length:
                    values = allocate(length * 8)
                    services.append({'operation': 'reallocate', 'oldBytes': 0, 'newBytes': length * 8})
                    for index in range(length):
                        put(arena, values + index * 8, NULL, 0)
                put(arena, array + 24, values, length, length)
                head = get(arena, STATE + 68)
                put(arena, array + 12, head, 0)
                if head:
                    put(arena, head + 16, array)
                put(arena, STATE + 68, array)
                put(arena, array + 4, 1)
                top = get(arena, VM + 48)
                put(arena, VM + 48, top + 1)
                assign(stack + top * 8, REF, array)
                put(arena, array + 4, 1)
                ret = 1
        else:
            top = get(arena, VM + 48)
            put(arena, FIXTURE + 20, 1, top, base, old_calls + 1, old_depth + 1, 9,
                (base - case.get('oldBase', 3)) & 0xffffffff, (10 - case.get('oldBase', 3)) & 0xffffffff, 1,
                get(arena, stack + base * 8), get(arena, stack + base * 8 + 4),
                get(arena, stack + (top - 1) * 8), get(arena, stack + (top - 1) * 8 + 4))
            ret = case.get('returnCode', 1)
            if ret > 0 or ret == -666:
                put(arena, VM + 48, top + 1)
                assign(stack + top * 8, get(arena, FIXTURE + 12), get(arena, FIXTURE + 16))
        if terminal == 'returned':
            put(arena, VM + 144, old_depth)
            arena[SUSPEND - HEAP] = int(ret == -666)
            returned = int(ret >= 0 or ret == -666)
            if returned:
                if ret:
                    top_address = stack + (get(arena, VM + 48) - 1) * 8
                    assign(RESULT, get(arena, top_address), get(arena, top_address + 4))
                    assign(top_address, NULL, 0)
                else:
                    assign(RESULT, NULL, 0)
            put(arena, VM + 48, 10, case.get('oldBase', 3))
            put(arena, VM + 100, old_calls)
            assign(frame + 8, NULL, 0)
            put(arena, VM + 132, frames + (old_calls - 1) * 48 if old_calls else 0)
            put(arena, CLOSURE + 4, 7)
    canonical = bytearray(arena)
    if frame is not None:
        for offset in INACTIVE_OFFSETS:
            put(canonical, frame + offset, 0)
    return {'arenaSha256': sha(arena), 'semanticArenaSha256': sha(canonical), 'services': services,
            'return': returned, 'terminal': terminal, 'frameAddress': frame,
            'excludedInactiveBytes': 16 if frame is not None else 0}, arena
