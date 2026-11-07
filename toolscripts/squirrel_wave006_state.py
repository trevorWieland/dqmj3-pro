import struct

import squirrel_wave005_model as prior
from squirrel_wave004_model import put, get, HEAP, HEAP_BYTES, VM, SLOTS, FRAMES, FIXTURE, RESULT, NODES, STATE, VTABLE, NULL, REF, INTEGER, CLOSURE, OUTERS, sha
from squirrel_wave006_programs import program, encode


SCRIPT = prior.SCRIPT
FUNCTION = HEAP + 0xe000
CODE = FUNCTION + 96
LITERALS = HEAP + 0x7d00
CAPTURES = HEAP + 0x7b00
DEFAULTS = HEAP + 0x7c00
VARARGS = HEAP + 0x9800
TRAPS = HEAP + 0x9a00
CHILD_SCRIPT = HEAP + 0x7e00
CHILD_FUNCTION = HEAP + 0xe400
CHILD_CODE = CHILD_FUNCTION + 96
CHILD_LITERALS = HEAP + 0x7f00
FUNCTION_LIST = HEAP + 0x9b00
OUTER_DESCRIPTORS = HEAP + 0x9c00
DEFAULT_INDICES = HEAP + 0x9d00
WEAK_VALUE = HEAP + 0x9f00
CALLABLE = prior.CALLABLE
EXTRA = FIXTURE + 300
RELEASE_VARARGS = FIXTURE + 696


def prepare(case):
    mode = case.get('mode', 2)
    if mode not in (0, 2): raise ValueError('Entry branch remains outside the admitted execution corpus')
    arguments = case.get('arguments', 1)
    base = case.get('frameBase', 4)
    window = case.get('window', 8)
    if not 0 <= arguments <= 5 or not 2 <= base <= 8 or not 5 <= window <= 16:
        raise ValueError('Outside bounded script call/frame contract')
    rows = program(case)
    code = encode(rows, window)
    fixture_case = {'seed': case['seed'], 'kind': 'native', 'handler': 'array' if case.get('nativeArray') else 'fixture',
                    'arguments': 2, 'length': case.get('length', 5)}
    arena = prior.prepare(fixture_case)
    arena[FIXTURE - HEAP:FIXTURE - HEAP + 740] = bytes(740)
    probe = SLOTS + (base + case.get('probeRegister', 1)) * 8
    put(arena, FIXTURE, VM, probe, case.get('nativeReturn', 1) & 0xffffffff, INTEGER, 0x2244)
    size = 16 if case.get('growStack') else 64
    put(arena, VM + 24, SLOTS, size, size, VARARGS, case.get('varargs', 0), 4)
    put(arena, VM + 48, base + window if mode == 2 else base + arguments, base if mode == 2 else 1)
    put(arena, VM + 56, REF if case.get('referenceRoot') else INTEGER, NODES[2] if case.get('referenceRoot') else 0x4455)
    put(arena, VM + 80, prior.NATIVE_TAG if case.get('debug') else NULL, CLOSURE if case.get('debug') else 0)
    put(arena, VM + 88, NULL, 0)
    put(arena, VM + 96, FRAMES, 1 if mode == 2 else 0, 4, FRAMES, 4, 4)
    if not 0 <= case.get('trapCapacity', 4) <= 8: raise ValueError('Trap capacity escaped fixture storage')
    put(arena, VM + 120, TRAPS, 0, case.get('trapCapacity', 4))
    put(arena, VM + 132, FRAMES if mode == 2 else 0, FIXTURE, STATE, case.get('nativeDepth', 1))
    count = case.get('varargs', 0)
    if not 0 <= count <= 2: raise ValueError('Outside bounded variable-argument fixture')
    put(arena, VM + 148, 1 if mode == 2 else 0, 1, 0, 0, count)
    arena[STATE - HEAP + 169] = int(case.get('notifyAll', False))
    for index in range(4):
        arena[FRAMES - HEAP + index * 48:FRAMES - HEAP + (index + 1) * 48] = bytes(48)
        put(arena, FRAMES + index * 48 + 8, NULL, 0)
    if mode == 2:
        put(arena, FRAMES, CODE, LITERALS, prior.SCRIPT_TAG, SCRIPT, 0, 0,
            base - 1, base + arguments - 1, 0xffffffff, 1, 1, count)
    for index in range(size): put(arena, SLOTS + index * 8, NULL, 0)
    put(arena, SLOTS + base * 8, INTEGER, 0x3355)
    if case.get('oldReference'):
        put(arena, probe, REF, NODES[1])
    put(arena, NODES[0] + 4, 1 if count else 0)
    put(arena, NODES[1] + 4, 1 if case.get('oldReference') else 0)
    put(arena, NODES[2] + 4, 7)
    put(arena, VARARGS, REF if count else INTEGER, NODES[0] if count else 0, INTEGER, 0x6677)
    put(arena, SCRIPT, VTABLE, 7, FIXTURE, 0, 0, STATE, NULL, 0, 0x08002000, FUNCTION,
        CAPTURES, 4, 4, DEFAULTS, 2, 2)
    for index, value in enumerate(((prior.NATIVE_TAG, CLOSURE), (REF, NODES[2]), (INTEGER, 0x1122), (NULL, 0))):
        put(arena, LITERALS + index * 8, *value)
        put(arena, CAPTURES + index * 8, *value)
    for index, value in case.get('literalIntegers', {}).items():
        index = int(index)
        if not 0 <= index < 4: raise ValueError('Integer literal override escaped fixture')
        put(arena, LITERALS + index * 8, INTEGER, value & 0xffffffff)
    if case.get('weakLiteral'):
        put(arena, LITERALS + 24, 0x08010000, WEAK_VALUE)
        put(arena, WEAK_VALUE, VTABLE, 7, 0, REF, NODES[2])
    put(arena, DEFAULTS, INTEGER, 17, INTEGER, 19)
    arena[FUNCTION - HEAP:CODE - HEAP + len(code)] = bytes(96 + len(code))
    put(arena, FUNCTION, VTABLE, 3, 0, NULL, 0, NULL, 0, window)
    arena[FUNCTION - HEAP + 33] = int(case.get('variableParameters', False))
    put(arena, FUNCTION + 52, 4, LITERALS, case.get('parameters', arguments), 0, 0, 0, 0, 0, case.get('defaults', 0), 0, len(rows))
    arena[CODE - HEAP:CODE - HEAP + len(code)] = code
    if case.get('childProgram'):
        child = encode(case['childProgram'], case.get('childWindow', 8))
        arena[CHILD_FUNCTION - HEAP:CHILD_CODE - HEAP + len(child)] = bytes(96 + len(child))
        put(arena, CHILD_FUNCTION, VTABLE, 3, 0, NULL, 0, NULL, 0, case.get('childWindow', 8))
        put(arena, CHILD_FUNCTION + 52, 4, CHILD_LITERALS, case.get('childParameters', 1), 0, 0, 0, 0, 0,
            case.get('childDefaults', 0), 0, len(case['childProgram']))
        arena[CHILD_FUNCTION - HEAP + 33] = int(case.get('childVariableParameters', False))
        arena[CHILD_CODE - HEAP:CHILD_CODE - HEAP + len(child)] = child
        put(arena, CHILD_SCRIPT, VTABLE, 7, FIXTURE, 0, 0, STATE, NULL, 0, 0x08002000, CHILD_FUNCTION,
            CAPTURES, 4, 4, DEFAULTS, 2, 2)
        arena[CHILD_LITERALS - HEAP:CHILD_LITERALS - HEAP + 32] = arena[LITERALS - HEAP:LITERALS - HEAP + 32]
        if not case.get('createClosure'): put(arena, LITERALS, prior.SCRIPT_TAG, CHILD_SCRIPT)
        else:
            descriptors = case.get('outerDescriptors', [])
            indices = case.get('defaultIndices', [])
            if len(descriptors) > 4 or len(indices) > 4 or any(not 0 <= index < window for index in indices):
                raise ValueError('Closure captured values escaped fixture')
            put(arena, FUNCTION + 68, 1, FUNCTION_LIST)
            put(arena, FUNCTION_LIST, 0x08002000, CHILD_FUNCTION)
            put(arena, CHILD_FUNCTION + 76, len(descriptors), OUTER_DESCRIPTORS, len(indices), DEFAULT_INDICES)
            for index, descriptor in enumerate(descriptors):
                kind, source = descriptor
                if kind & 255 not in (0, 1, 2) or kind & 255 != 1 and not 0 <= source < (window if kind & 255 == 0 else 4):
                    raise ValueError('Named outer or invalid capture is not admitted yet')
                put(arena, OUTER_DESCRIPTORS + index * 20, kind, NULL, 0, 0x05000002, source)
            for index, value in enumerate(indices): put(arena, DEFAULT_INDICES + index * 4, value)
    put(arena, CALLABLE, prior.SCRIPT_TAG, SCRIPT)
    put(arena, RESULT, INTEGER, 0x9999)
    return arena


def code_regions(case):
    return [(CODE, program(case)), *([(CHILD_CODE, case['childProgram'])] if case.get('childProgram') else [])]


class State(prior.State):
    def __init__(self, case, source, witnesses=None):
        self.case, self.source = case, source
        self.arena = prepare(case)
        self.services, self.frames = [], []
        self.cursor = HEAP + 0x10000
        self.terminal = 'returned'
        self.witnesses = witnesses
        self.native_index = 0
        self.steps = []

    def release(self, tag, value):
        if not tag & 0x08000000: return
        count = get(self.arena, value + 4) - 1
        put(self.arena, value + 4, count)
        if count: return
        if get(self.arena, value) == 0x8516d0:
            self.destroy_closure(value)
            return
        if get(self.arena, value) == 0x850dac:
            self.destroy_table(value)
            return
        event = get(self.arena, FIXTURE + 72)
        probe = get(self.arena, FIXTURE + 4)
        kind, payload = self.read(probe)
        put(self.arena, FIXTURE + 76 + event * 28, value, get(self.arena, VM + 48), get(self.arena, VM + 52),
            get(self.arena, VM + 100), get(self.arena, VM + 144), kind,
            get(self.arena, payload + 4) if kind & 0x08000000 else 0)
        put(self.arena, FIXTURE + 72, event + 1)
        put(self.arena, RELEASE_VARARGS + event * 4, get(self.arena, VM + 40))

    def scalar(self, destination, kind, bits):
        self.release(*self.read(destination))
        self.write(destination, kind, bits)

    def debug(self, event, line):
        count = get(self.arena, EXTRA + 8)
        put(self.arena, EXTRA + 8, count + 1)
        put(self.arena, EXTRA + 12 + count * 24, event, line, get(self.arena, VM + 48), get(self.arena, VM + 52),
            get(self.arena, VM + 144), get(self.arena, VM + 100))

    def clear_stack(self, old_top):
        while old_top >= get(self.arena, VM + 48):
            self.clear(get(self.arena, VM + 24) + old_top * 8)
            old_top -= 1

    def vararg_pop(self, frame):
        count = struct.unpack_from('<H', self.arena, frame - HEAP + 44)[0]
        for unused in range(count):
            size = get(self.arena, VM + 40) - 1
            put(self.arena, VM + 40, size)
            self.release(*self.read(get(self.arena, VM + 36) + size * 8))

    def return_frame(self, argument0, argument1):
        frame = get(self.arena, VM + 132)
        if self.case.get('debug'):
            for unused in range(get(self.arena, frame + 36)): self.debug(ord('r'), 0)
        old_base, old_top = get(self.arena, VM + 52), get(self.arena, VM + 48)
        target, root = get(self.arena, frame + 32), get(self.arena, frame + 40)
        new_base = old_base - get(self.arena, frame + 24)
        put(self.arena, VM + 48, new_base + get(self.arena, frame + 28), new_base)
        self.vararg_pop(frame)
        count = get(self.arena, VM + 100) - 1
        put(self.arena, VM + 100, count)
        self.clear(frame + 8)
        put(self.arena, VM + 132, get(self.arena, VM + 96) + (count - 1) * 48 if count else 0)
        value = (NULL, 0) if argument0 == 255 else self.read(get(self.arena, VM + 24) + (old_base + argument1) * 8)
        if root: self.assign(VM + 88, *value)
        elif target != 0xffffffff: self.assign(get(self.arena, VM + 24) + (new_base + target) * 8, *value)
        self.clear_stack(old_top)
        return root != 0
