import struct

import squirrel_wave004_model as previous
from squirrel_wave004_model import HEAP, HEAP_BYTES, VM, SLOTS, CLOSURE, FRAMES, FIXTURE, RESULT, NODES, STATE, VTABLE, ARRAY_VTABLE, NULL, REF, INTEGER, get, put, sha, INACTIVE_OFFSETS


CALLABLE = HEAP + 0x8700
CLASS = HEAP + 0x7600
INSTANCE = HEAP + 0x7800
SCRIPT = HEAP + 0x7900
EXTRA = FIXTURE + 300
SCRIPT_TAG = 0x08000100
NATIVE_TAG = 0x08000200
CLASS_TAG = 0x08004000
INSTANCE_TAG = 0x0a008000


def prepare(case):
    previous.validate(case)
    if case.get('kind', 'native') not in ('native', 'script', 'class', 'invalid'):
        raise ValueError('Unsupported callable class')
    if case.get('constructor', 'native') not in ('native', 'script', 'invalid', 'none'):
        raise ValueError('Unsupported or recursively unbounded constructor')
    if case.get('kind') == 'class' and case.get('handler') == 'array':
        raise ValueError('Final-owner array destructor is unreconstructed, not an admitted constructor fixture')
    arena = previous.prepare(case)
    kind = case.get('kind', 'native')
    tag, reference = {'native': (NATIVE_TAG, CLOSURE), 'script': (SCRIPT_TAG, SCRIPT),
                      'class': (CLASS_TAG, CLASS), 'invalid': (INTEGER, 0x1144)}[kind]
    put(arena, CALLABLE, tag, reference)
    for address, references in ((CLASS, 3), (INSTANCE, 0), (SCRIPT, 5)):
        put(arena, address, VTABLE, references, FIXTURE, 0, 0)
    arena[EXTRA - HEAP:EXTRA - HEAP + 84] = bytes(84)
    constructor = case.get('constructor', 'native')
    ctor_tag, ctor_value = {'native': (NATIVE_TAG, CLOSURE), 'script': (SCRIPT_TAG, SCRIPT),
                           'none': (NULL, 0), 'invalid': (INTEGER, 0x5511)}[constructor]
    references = case.get('returnedReferences', 7)
    if not 0 <= references <= 8:
        raise ValueError('Outside bounded callback result ownership')
    put(arena, NODES[2] + 4, references)
    put(arena, EXTRA, REF if case.get('referenceResult') else INTEGER,
        NODES[2] if case.get('referenceResult') else 0x2244,
        ctor_tag, ctor_value, INSTANCE_TAG, INSTANCE, case.get('executeSuccess', 1))
    return arena


class State:
    def __init__(self, case, source):
        self.case, self.source = case, source
        self.arena = prepare(case)
        self.services = []
        self.cursor = HEAP + 0x10000
        self.frames = []
        self.terminal = 'returned'

    def read(self, object):
        return (get(self.arena, object), get(self.arena, object + 4)) if isinstance(object, int) else tuple(object)

    def write(self, object, tag, value):
        if isinstance(object, int):
            put(self.arena, object, tag, value)
        else:
            object[:] = tag, value

    def retain(self, tag, value):
        if tag & 0x08000000:
            put(self.arena, value + 4, get(self.arena, value + 4) + 1)

    def release(self, tag, value):
        if not tag & 0x08000000:
            return
        count = get(self.arena, value + 4) - 1
        put(self.arena, value + 4, count)
        if not count:
            event = get(self.arena, FIXTURE + 72)
            result_tag, result_value = self.read(RESULT)
            put(self.arena, FIXTURE + 76 + event * 28, value, get(self.arena, VM + 48), get(self.arena, VM + 52),
                get(self.arena, VM + 100), get(self.arena, VM + 144), result_tag,
                get(self.arena, result_value + 4) if result_tag & 0x08000000 else 0)
            put(self.arena, FIXTURE + 72, event + 1)

    def assign(self, destination, tag, value):
        old = self.read(destination)
        self.write(destination, tag, value)
        self.retain(tag, value)
        self.release(*old)

    def clear(self, object):
        old = self.read(object)
        self.write(object, NULL, 0)
        self.release(*old)

    def allocate(self, size):
        pointer = self.cursor
        self.cursor += (max(size, 16) + 15) & ~15
        return pointer

    def resize(self, pointer, size, stride, old_size, initialize):
        result = self.allocate(size * stride)
        self.services.append({'operation': 'reallocate', 'oldBytes': old_size * stride, 'newBytes': size * stride})
        self.arena[result - HEAP:result - HEAP + old_size * stride] = self.arena[pointer - HEAP:pointer - HEAP + old_size * stride]
        for index in range(old_size, size):
            initialize(result + index * stride)
        return result

    def execute_service(self, callable, output):
        case, arena = self.case, self.arena
        tag, value = self.read(callable)
        put(arena, EXTRA + 28, get(arena, EXTRA + 28) + 1)
        put(arena, EXTRA + 36, get(arena, VM + 48) - case.get('arguments', 2), case.get('arguments', 2),
            case.get('base', 5), case.get('raiseError', 1), 0, tag, value,
            get(arena, VM + 144), get(arena, VM + 48), get(arena, VM + 52), int(output == RESULT))
        self.assign(output, *self.read(EXTRA))
        return int(case.get('executeSuccess', 1) != 0)

    def native(self, output, generic_depth):
        case, arena = self.case, self.arena
        base, arguments = case.get('base', 5), case.get('arguments', 2)
        old_depth, old_count = get(arena, VM + 144), get(arena, VM + 100)
        check = case.get('parameterCheck', -2)
        if old_depth > 99:
            self.services.append({'operation': 'error', 'message': 'Native stack overflow'})
            return 0
        if (check > 0 and check != arguments) or (check < 0 and arguments < -check):
            self.services.append({'operation': 'error', 'message': 'wrong number of parameters'})
            return 0
        if arguments > 1 and case.get('typeMask', 6) != -1 and not get(arena, get(arena, VM + 24) + (base + 1) * 8) & case.get('typeMask', 6):
            self.services.append({'operation': 'type-error', 'index': 1, 'mask': case.get('typeMask', 6),
                                  'type': get(arena, get(arena, VM + 24) + (base + 1) * 8)})
            return 0
        put(arena, VM + 144, old_depth + 1)
        stack = get(arena, VM + 24)
        size = get(arena, VM + 28)
        if get(arena, VM + 48) + 10 > size:
            stack = self.resize(stack, size + 20, 8, size, lambda address: put(arena, address, NULL, 0))
            put(arena, VM + 24, stack, size + 20, size + 20)
        old_top, old_base = get(arena, VM + 48), get(arena, VM + 52)
        put(arena, VM + 48, base + arguments)
        self.retain(NATIVE_TAG, CLOSURE)
        frames, allocated = get(arena, VM + 96), get(arena, VM + 104)
        if old_count == allocated:
            def initialize(address):
                arena[address - HEAP:address - HEAP + 48] = bytes(48)
                put(arena, address + 8, NULL, 0)
            frames = self.resize(frames, allocated * 2, 48, allocated, initialize)
            put(arena, VM + 96, frames, old_count, allocated * 2, frames, allocated * 2, allocated * 2)
        frame = frames + old_count * 48
        self.frames.append(frame)
        arena[frame - HEAP:frame - HEAP + 48] = bytes(48)
        if not self.source:
            dead_stack = previous.stack_bytes(case)
            for field, offset in ((0, -96), (4, -92), (32, -64), (40, -56)):
                put(arena, frame + field, struct.unpack_from('<I', dead_stack, 0xff00 - generic_depth * 56 + offset)[0])
        put(arena, frame + 8, NATIVE_TAG, CLOSURE, 0, 0, base - old_base, old_top - old_base)
        put(arena, frame + 36, 1)
        self.retain(NATIVE_TAG, CLOSURE)
        put(arena, VM + 100, old_count + 1)
        put(arena, VM + 132, frame)
        put(arena, VM + 52, base)
        for index in range(case.get('outers', 0)):
            top = get(arena, VM + 48)
            put(arena, VM + 48, top + 1)
            self.assign(stack + top * 8, *self.read(previous.OUTERS + index * 8))
        if case.get('weakEnvironment'):
            self.assign(stack + base * 8, INTEGER, 0x6622)
        if case.get('handler') == 'array':
            self.services.append({'operation': 'allocate', 'bytes': 36})
            if case.get('allocationFails'):
                self.terminal = 'assertion'
                return None
            array = self.allocate(36)
            put(arena, array, ARRAY_VTABLE, 0, 0, 0, 0, STATE, 0, 0, 0)
            length = case.get('length', 4)
            values = 0
            if length:
                values = self.allocate(length * 8)
                self.services.append({'operation': 'reallocate', 'oldBytes': 0, 'newBytes': length * 8})
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
            self.assign(stack + top * 8, REF, array)
            self.release(REF, array)
            returned = 1
        else:
            top = get(arena, VM + 48)
            put(arena, FIXTURE + 20, get(arena, FIXTURE + 20) + 1, top, base, old_count + 1, old_depth + 1,
                get(arena, CLOSURE + 4), base - old_base, old_top - old_base, 1,
                *self.read(stack + base * 8), *self.read(stack + (top - 1) * 8))
            returned = case.get('returnCode', 1)
            if returned > 0 or returned == -666:
                put(arena, VM + 48, top + 1)
                self.assign(stack + top * 8, *self.read(FIXTURE + 12))
        put(arena, VM + 144, old_depth)
        passed = int(returned >= 0 or returned == -666)
        if passed:
            if returned:
                top = stack + (get(arena, VM + 48) - 1) * 8
                self.assign(output, *self.read(top))
                self.clear(top)
            else:
                self.assign(output, NULL, 0)
        put(arena, VM + 48, old_top, old_base)
        put(arena, VM + 100, old_count)
        self.clear(frame + 8)
        put(arena, VM + 132, frames + (old_count - 1) * 48 if old_count else 0)
        self.release(NATIVE_TAG, CLOSURE)
        return passed

    def dispatch(self, callable, output, depth=1):
        tag, value = self.read(callable)
        if tag == NATIVE_TAG:
            return self.native(output, depth)
        if tag == SCRIPT_TAG:
            return self.execute_service(callable, output)
        if tag != CLASS_TAG:
            return 0
        put(self.arena, EXTRA + 32, get(self.arena, EXTRA + 32) + 1)
        put(self.arena, EXTRA + 80, value)
        self.assign(output, *self.read(EXTRA + 16))
        constructor, discarded = [NULL, 0], [NULL, 0]
        self.assign(constructor, *self.read(EXTRA + 8))
        passed = 1
        if constructor[0] != NULL:
            self.assign(get(self.arena, VM + 24) + self.case.get('base', 5) * 8, *self.read(output))
            passed = self.dispatch(constructor, discarded, depth + 1)
        self.release(*discarded)
        self.release(*constructor)
        return passed


def model(case, source=False):
    state = State(case, source)
    returned = state.dispatch(CALLABLE, RESULT)
    canonical = bytearray(state.arena)
    for frame in state.frames:
        for offset in INACTIVE_OFFSETS:
            put(canonical, frame + offset, 0)
    return {'arenaSha256': sha(state.arena), 'semanticArenaSha256': sha(canonical), 'services': state.services,
            'return': returned, 'terminal': state.terminal, 'frameAddresses': state.frames,
            'excludedInactiveBytes': len(state.frames) * 16}, state.arena
