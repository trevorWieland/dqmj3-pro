import ctypes
import hashlib

import native_wave012_arena_model as model


STRIDE = 4 * ctypes.sizeof(ctypes.c_void_p)


class NativeArena(ctypes.Structure):
    _fields_ = [('occupied', ctypes.POINTER(ctypes.c_ubyte)), ('storage', ctypes.c_void_p), ('next', ctypes.c_uint)]


class SemanticMismatch(RuntimeError):
    def __init__(self, actual, expected):
        self.details = {'actual': actual, 'expected': expected, 'nativeWindowsReturnedNormally': True,
                        'immutableMemoryAndGuardsPreserved': True}
        super().__init__('Native arena returned normally with different logical state')


def create(specification):
    bitmap = ctypes.create_string_buffer(model.CAPACITY + 128)
    storage = ctypes.create_string_buffer(model.CAPACITY * STRIDE + 128)
    descriptor = ctypes.create_string_buffer(ctypes.sizeof(NativeArena) + 128)
    for buffer in [bitmap, storage, descriptor]:
        ctypes.memset(buffer, 0x5a, ctypes.sizeof(buffer))
    arena = NativeArena.from_buffer(descriptor, 64)
    arena.occupied = ctypes.cast(ctypes.byref(bitmap, 64), ctypes.POINTER(ctypes.c_ubyte))
    arena.storage = ctypes.addressof(storage) + 64
    arena.next = specification['next']
    ctypes.memmove(arena.occupied, model.bitmap(specification), model.CAPACITY)
    if STRIDE != 32 or arena.storage <= 0xffffffff or ctypes.addressof(bitmap) <= 0xffffffff:
        raise RuntimeError('Native arena did not use true host64 pointers')
    return {'descriptor': descriptor, 'bitmap': bitmap, 'storage': storage, 'arena': arena}


def execute(library, graph, specification):
    arena = graph['arena']
    occupied = ctypes.string_at(arena.occupied, model.CAPACITY)
    operation = specification['operation']
    answer = model.apply(occupied, arena.next, specification['blocks'], operation, specification.get('start', 0))
    before = {name: bytes(graph[name]) for name in ['descriptor', 'bitmap', 'storage']}
    if operation == 'allocate':
        function = library.fn_004c39c8
        function.argtypes, function.restype = [ctypes.POINTER(NativeArena), ctypes.c_uint], ctypes.c_void_p
        pointer = function(ctypes.byref(arena), specification['blocks'])
        expected_pointer = None if answer['slot'] is None else arena.storage + answer['slot'] * STRIDE
    else:
        function = library.fn_004c3994
        function.argtypes, function.restype = [ctypes.POINTER(NativeArena), ctypes.c_void_p, ctypes.c_uint], None
        pointer = function(ctypes.byref(arena), arena.storage + specification.get('start', 0) * STRIDE, specification['blocks'])
        expected_pointer = None
    after = {name: bytes(graph[name]) for name in before}
    offset = 64 + NativeArena.next.offset
    immutable_before, immutable_after = before['descriptor'], after['descriptor']
    if operation == 'allocate':
        immutable_before = immutable_before[:offset] + immutable_before[offset + 4:]
        immutable_after = immutable_after[:offset] + immutable_after[offset + 4:]
    if immutable_before != immutable_after or before['storage'] != after['storage']:
        raise RuntimeError('Native arena changed immutable descriptor/payload/guards')
    if before['bitmap'][:64] != after['bitmap'][:64] or before['bitmap'][-64:] != after['bitmap'][-64:]:
        raise RuntimeError('Native arena changed bitmap guards')
    actual = {'pointer': pointer, 'next': arena.next,
              'occupiedSha256': hashlib.sha256(ctypes.string_at(arena.occupied, model.CAPACITY)).hexdigest()}
    expected = {'pointer': expected_pointer, 'next': answer['next'],
                'occupiedSha256': hashlib.sha256(answer['occupied']).hexdigest()}
    if actual != expected:
        raise SemanticMismatch(actual, expected)
    return {**model.summary(answer), 'nativeWindowsReturnedNormally': True,
            'immutableMemoryAndGuardsPreserved': True, 'truePointersAbove32Bits': True,
            'targetLogicalBlockBytes': 16, 'nativePhysicalBlockBytes': STRIDE}
