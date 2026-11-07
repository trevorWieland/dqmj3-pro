import ctypes as c
import random
import struct

from native_material_wave011_build import sha


class Packed(c.Structure):
    _pack_ = 4


class Color(Packed):
    _fields_ = [('rgba', c.c_uint)]


class Material(Packed):
    _fields_ = [('vtable', c.c_void_p), ('reserved', c.c_uint * 26), ('colors', Color * 2),
        ('capacity', c.c_ushort), ('used', c.c_ushort), ('storage', c.c_void_p),
        ('flags', c.c_ubyte), ('reserved7d', c.c_ubyte * 3), ('wire', c.c_void_p)]


class Resolver(Packed):
    _fields_ = [('names', c.c_void_p), ('reserved', c.c_uint * 2), ('accessor', c.c_void_p)]


class Context(Packed):
    _fields_ = [('reserved', c.c_ubyte * 32), ('primary', c.c_void_p), ('alternate', c.c_void_p),
        ('usePrimary', c.c_ushort), ('reserved2a', c.c_ushort), ('flags', c.c_ushort)]


class Resource(Packed):
    _fields_ = [('image', c.c_uint), ('width', c.c_ushort), ('height', c.c_ushort),
        ('format', c.c_ubyte), ('layout', c.c_ubyte), ('reserved', c.c_ushort),
        ('originalWidth', c.c_ushort), ('originalHeight', c.c_ushort), ('alternateImage', c.c_uint)]


Allocate = c.CFUNCTYPE(c.c_void_p, c.c_void_p, c.c_uint, c.c_uint)
Release = c.CFUNCTYPE(None, c.c_void_p, c.c_void_p)
Resolve = c.CFUNCTYPE(c.c_void_p, c.c_void_p, c.c_void_p)


class HeapVtable(Packed):
    _fields_ = [('reserved', c.c_void_p * 2), ('allocate', Allocate), ('release', Release)]


class AccessorVtable(Packed):
    _fields_ = [('reserved', c.c_void_p * 5), ('resolve', Resolve)]


class Object(Packed):
    _fields_ = [('vtable', c.c_void_p)]


def normalize(storage, capacity, pointer_bytes, base):
    tex, srt, gen, stage = capacity & 3, capacity >> 2 & 3, capacity >> 4 & 3, capacity >> 6 & 7
    alpha, blends, detailed = capacity >> 9 & 1, capacity >> 10 & 3, capacity >> 12 & 1
    projection, shadow = capacity >> 13 & 3, capacity >> 15 & 1
    gen_bytes = 4 + pointer_bytes
    gen_offset = tex * 32 + srt * 20
    alpha_offset = gen_offset + gen * gen_bytes
    blend_offset = alpha_offset + alpha * 8
    stage_offset = blend_offset + blends * 4
    projection_offset = stage_offset + stage * (12 if detailed else 4)
    shadow_offset = projection_offset + projection * 20
    header_offset = shadow_offset + shadow * 8
    expected_bytes = header_offset + (28 if detailed else 0)
    if len(storage) != expected_bytes:
        raise ValueError('Normalized complete native storage length differs')
    generators = []
    for index in range(gen):
        start = gen_offset + index * gen_bytes
        kind, source, reserved = struct.unpack_from('<BBH', storage, start)
        pointer = int.from_bytes(storage[start + 4:start + gen_bytes], 'little')
        relative = None if not pointer else pointer - base - projection_offset
        if relative is not None and (relative < 0 or relative % 20):
            raise ValueError('Native projection pointer relation differs')
        generators.append((kind, source, reserved, relative))
    return {'textureAndTransforms': storage[:gen_offset], 'generators': generators,
        'alpha': storage[alpha_offset:blend_offset], 'blend': storage[blend_offset:stage_offset],
        'stages': storage[stage_offset:projection_offset], 'projections': storage[projection_offset:shadow_offset],
        'shadow': storage[shadow_offset:header_offset], 'detailedHeader': storage[header_offset:]}


def original_state(result):
    capacity, used = struct.unpack_from('<HH', result['object'], 116)
    wire = struct.unpack_from('<I', result['object'], 128)[0]
    return {'reserved': result['object'][4:108], 'colors': result['object'][108:116],
        'capacity': capacity, 'used': used, 'flags': result['object'][124],
        'reserved7d': result['object'][125:128], 'wire': 'primary' if wire == 0x10000000 else 'replacement',
        'storage': normalize(result['storage'], capacity, 4, 0x12004000) if result['storage'] else None,
        'lookupNames': [(int(accessor == 0x1000b240), digest) for accessor, pointer, digest in result['lookups']]}


def execute(library, case, original, seed):
    library.material_abi.argtypes = [c.c_uint]
    library.material_abi.restype = c.c_uint
    if [library.material_abi(index) for index in range(7)] != [c.sizeof(Material), 12, 4,
            Material.storage.offset, Material.wire.offset, Context.flags.offset, c.sizeof(Resource)]:
        raise ValueError('Native packed pointer-width ABI differs')
    expected = original_state(original)
    guards, inputs, allocations, lookups, errors = [], [], [], [], []
    def guarded(data):
        buffer = c.create_string_buffer(b'\xa5' * 64 + data + b'\xa5' * 64)
        guards.append((buffer, len(data)))
        return buffer, c.addressof(buffer) + 64
    wire_buffer, wire = guarded(case['wire'])
    replacement_buffer, replacement = guarded(case['replacement'] or b'\0' * 40)
    names_buffer, names = guarded(case['names'])
    resources = [Resource(0x40000000 + index * 256, 32 + index, 64 + index, index % 14,
        index % 4, 0, 32 + index, 64 + index, 0x40000000 + index * 512) for index in range(16)]
    resource_before = [bytes(resource) for resource in resources]
    rng = random.Random(seed)
    rng.randbytes(0x10000)
    region = rng.randbytes(0x10000)
    @Allocate
    def allocate(heap, amount, alignment):
        if alignment != 4 or not 0 < amount <= 4096 or allocations:
            errors.append('Native allocation interface differs')
            return 0
        if case['allocationFails']:
            allocations.append((None, 0, amount))
            return 0
        buffer, address = guarded(region[0x4000:0x4000 + amount])
        allocations.append((buffer, address, amount))
        return address
    @Release
    def release(heap, allocation):
        errors.append('Fresh constructor unexpectedly released an allocation')
    primary_accessor, alternate_accessor = Object(), Object()
    @Resolve
    def resolve(accessor, name):
        if accessor not in [c.addressof(primary_accessor), c.addressof(alternate_accessor)] or not names <= name < names + len(case['names']):
            errors.append('Native resource accessor interface differs')
            return 0
        text = c.string_at(name, min(128, names + len(case['names']) - name))
        if b'\0' not in text:
            errors.append('Native bounded resource string failed')
            return 0
        value = text.split(b'\0', 1)[0]
        alternate = int(accessor == c.addressof(alternate_accessor))
        lookups.append((alternate, sha(value)))
        index = (sum(value) + alternate * 3) % 16
        return 0 if case['resourceNull'] else c.addressof(resources[index])
    heap_vtable = HeapVtable((c.c_void_p * 2)(), allocate, release)
    heap = Object(c.addressof(heap_vtable))
    accessor_vtable = AccessorVtable((c.c_void_p * 5)(), resolve)
    primary_accessor.vtable = alternate_accessor.vtable = c.addressof(accessor_vtable)
    primary = Resolver(names, (c.c_uint * 2)(), c.addressof(primary_accessor))
    alternate = Resolver(names, (c.c_uint * 2)(), c.addressof(alternate_accessor))
    context = Context((c.c_ubyte * 32)(), c.addressof(primary), c.addressof(alternate),
        int(case['mode'] == 3), 0, int(case['mode'] == 1))
    material_buffer, address = guarded(b'\xa5' * c.sizeof(Material))
    material = Material.from_address(address)
    c.memmove(address + Material.reserved.offset, expected['reserved'], 104)
    c.memmove(address + Material.reserved7d.offset, expected['reserved7d'], 3)
    for buffer, size in guards[:-1]:
        inputs.append((buffer, bytes(buffer)))
    immutable = [bytes(context), bytes(primary), bytes(alternate), bytes(heap_vtable), bytes(accessor_vtable)]
    library.material_set_heap.argtypes = [c.c_void_p]
    library.material_set_heap(c.addressof(heap))
    library.fn_00554a30.argtypes = [c.c_void_p] * 4
    library.fn_00554a30.restype = c.c_void_p
    result = library.fn_00554a30(address, wire, replacement if case['replacement'] else 0, c.addressof(context))
    if result != address or errors:
        raise ValueError('Native constructor return/service failure: ' + repr(errors))
    if [bytes(context), bytes(primary), bytes(alternate), bytes(heap_vtable), bytes(accessor_vtable)] != immutable:
        raise ValueError('Native constructor changed immutable context/service descriptors')
    if [bytes(resource) for resource in resources] != resource_before or any(bytes(buffer) != before for buffer, before in inputs):
        raise ValueError('Native constructor changed immutable wire/name/resource inputs')
    for buffer, size in guards:
        if bytes(buffer)[:64] != b'\xa5' * 64 or bytes(buffer)[64 + size:64 + size + 64] != b'\xa5' * 64:
            raise ValueError('Native constructor changed guarded allocation bounds')
    if not material.vtable or c.c_uint.from_address(material.vtable).value != 0x4d41544c:
        raise ValueError('Owned constructor-component identity differs')
    storage = None
    if material.storage:
        if not allocations or material.storage != allocations[0][1]:
            raise ValueError('Native constructor used an unowned allocation')
        storage = normalize(c.string_at(material.storage, allocations[0][2]), material.capacity, c.sizeof(c.c_void_p), material.storage)
    actual = {'reserved': c.string_at(address + Material.reserved.offset, 104),
        'colors': c.string_at(address + Material.colors.offset, 8), 'capacity': material.capacity,
        'used': material.used, 'flags': material.flags, 'reserved7d': bytes(material.reserved7d),
        'wire': 'primary' if material.wire == wire else 'replacement', 'storage': storage, 'lookupNames': lookups}
    differences = [key for key in expected if expected[key] != actual[key]]
    if differences:
        raise ValueError('Native returning semantic mismatch: ' + ','.join(differences))
    return {'returnedNormally': True, 'nativePointerBytes': c.sizeof(c.c_void_p), 'nativeStructAlignment': 4,
        'nativeObjectBytes': c.sizeof(Material), 'normalizedCompleteStateMatches': True,
        'privateNativeAllocationBytes': allocations[0][2] if allocations and allocations[0][1] else 0,
        'readonlyInputsAndGuardsPreserved': True}
