import math
import random
import struct


ENTRIES = {'multiply': 'fn_001ad06c', 'inverse': 'fn_001ad184', 'trig': 'fn_0052534c',
    'srt': 'fn_0055492c', 'projection': 'fn_0054befc'}
ADDRESSES = {'multiply': 0x1ad06c, 'inverse': 0x1ad184, 'trig': 0x52534c,
    'srt': 0x55492c, 'projection': 0x54befc}
IDENTITY = [1., 0., 0., 0., 0., 1., 0., 0., 0., 0., 1., 0.]


def f32(value):
    return struct.unpack('<f', struct.pack('<f', value))[0]


def rounded_determinant(matrix):
    a, b, c, _, d, e, f, _, g, h, i, _ = matrix
    products = [(a, e, i, g, e, c), (b, f, g, d, b, i), (c, d, h, a, h, f)]
    terms = [f32(f32(f32(x * y) * z) - f32(f32(u * v) * w)) for x, y, z, u, v, w in products]
    return f32(f32(terms[0] + terms[1]) + terms[2])


def validate(case):
    def visit(value):
        if isinstance(value, float) and not math.isfinite(value):
            raise ValueError('Recovered math admission requires finite floating inputs')
        if isinstance(value, list):
            for item in value:
                visit(item)
        if isinstance(value, dict):
            for item in value.values():
                visit(item)
    visit(case)
    if case['operation'] == 'projection':
        if any(case[name] <= 0 for name in ['width', 'height', 'viewportWidth', 'viewportHeight']):
            raise ValueError('Projection dimensions must be positive')
        if case['projection'][2] == 0 or case['projection'][3] == 0:
            raise ValueError('Projection scales must be nonzero')
        if case['coordinateSource'] == 4 and case['flags'] & 4:
            determinant = rounded_determinant(case['world'])
            if not math.isfinite(determinant) or determinant == 0:
                raise ValueError('Original projection does not define inverse-failure output')


def memory(case, base, pointer_bytes=4):
    validate(case)
    data = bytearray(b'\xa5' * 0x20000)
    out = 0x1000
    args, s0, size = [], None, 0
    def write(offset, value):
        data[offset:offset + len(value)] = value
    def floats(offset, values):
        write(offset, struct.pack('<' + 'f' * len(values), *values))
    def pointer(offset, value):
        write(offset, value.to_bytes(pointer_bytes, 'little'))
    operation = case['operation']
    if operation in ['multiply', 'inverse']:
        floats(0x2000, case['left'])
        if operation == 'multiply':
            floats(0x3000, case['right'])
        alias = case.get('alias', 'none')
        out = {'none': 0x1000, 'left': 0x2000, 'right': 0x3000, 'partial-left': 0x2004}[alias]
        args = [base + out, base + 0x2000]
        if operation == 'multiply':
            args.append(base + 0x3000)
        size = 48
    elif operation == 'trig':
        args = [base + out, base + out + (0 if case.get('alias') else 4)]
        s0, size = struct.unpack('<I', struct.pack('<f', case['angle']))[0], 8
    elif operation == 'srt':
        floats(0x2000, case['transform'])
        args, size = [base + out, base + 0x2000, base + 0x3000], 24
    elif operation == 'projection':
        texture_count, transform_count, generator_count, detailed = case['textures'], case['transformCount'], case['generators'], case['detailed']
        capacity = texture_count | (transform_count << 2) | (generator_count << 4) | (case['stages'] << 6)
        capacity |= case['alpha'] << 9 | case['blend'] << 10 | detailed << 12 | case['projections'] << 13 | case['shadow'] << 15
        header = 0x4000
        write(header, bytes(144))
        cap_offset = pointer_bytes + 112
        write(header + cap_offset, struct.pack('<HH', capacity, 0))
        pointer(header + cap_offset + 4, base + 0x6000)
        for index in range(texture_count):
            write(0x6000 + 32 * index + 4, struct.pack('<HH', *case['textureDimensions'][index]))
        for index in range(transform_count):
            floats(0x6000 + 32 * texture_count + 20 * index, case['transforms'][index])
        projection_offset = 0x6000 + 32 * texture_count + 20 * transform_count + (4 + pointer_bytes) * generator_count
        projection_offset += 8 * case['alpha'] + 4 * case['blend'] + (12 if detailed else 4) * case['stages']
        for index in range(case['projections']):
            floats(projection_offset + 20 * index, case['projection'])
            write(projection_offset + 20 * index + 16, struct.pack('<I', case['flags']))
        write(0x8000, bytes(184))
        floats(0x8000 + 116, case['view'])
        pointer(0x8000 + 176, base + 0xa000)
        write(0x9000, bytes(120))
        floats(0x9000 + 60, [case['width'], case['height']])
        floats(0x9000 + 72, case['world'])
        write(0xa000, bytes(32))
        floats(0xa000 + 24, [case['viewportWidth'], case['viewportHeight']])
        args, size = [base + out, base + 0x8000, base + 0x9000, base + header,
            case['textureIndex'], case['coordinateSource'], case['projectionIndex']], 32
    else:
        raise ValueError(operation)
    return data, args, s0, out, size


def cases():
    rng = random.Random(140054)
    result = []
    def matrix():
        return [f32(rng.uniform(-1, 1) + (2.5 if column == row else 0)) if column < 3 else
            f32(rng.uniform(-100, 100)) for row in range(3) for column in range(4)]
    for index in range(64):
        for operation in ['multiply', 'inverse']:
            left = matrix()
            if operation == 'inverse' and index % 8 == 0:
                left[4:8] = left[:4]
            result.append({'id': operation + '-' + str(index), 'operation': operation, 'left': left,
                'right': matrix(), 'alias': ['none', 'left', 'partial-left', 'right'][index % (4 if operation == 'multiply' else 3)]})
    angles = [0., -0., 0.25, -0.25, 63.999996, 64., 128., 192., 255.99998, 256., 65535.996,
        65536., 65536.0078125, 65536.5, 65537., 16777215., 16777216., 2.**38, 2.**39,
        struct.unpack('<f', bytes.fromhex('ffff7f7f'))[0], struct.unpack('<f', b'\x01\0\0\0')[0]]
    angles += [f32(rng.uniform(-100000, 100000)) for _ in range(128)]
    for bits in range(1, 255):
        angles.append(struct.unpack('<f', struct.pack('<I', (bits << 23) | rng.getrandbits(23)))[0])
    angles += [-value for value in angles]
    for index, angle in enumerate(angles):
        result.append({'id': 'trig-' + str(index), 'operation': 'trig', 'angle': f32(angle), 'alias': index % 19 == 0})
    for index in range(96):
        result.append({'id': 'srt-' + str(index), 'operation': 'srt', 'transform':
            [f32(rng.uniform(-5, 5)), f32(rng.uniform(-5, 5)), f32(rng.uniform(-100000, 100000)),
                f32(rng.uniform(-4, 4)), f32(rng.uniform(-4, 4))]})
    for index in range(192):
        texture_count = index % 3 + 1
        transform_count = (index // 3) % 3 + 1
        result.append({'id': 'projection-' + str(index), 'operation': 'projection',
            'textures': texture_count, 'transformCount': transform_count, 'generators': index % 4, 'detailed': index % 2, 'stages': index % 7,
            'blend': index % 3, 'alpha': index % 2, 'shadow': (index >> 1) % 2, 'projections': index % 3 + 1,
            'textureIndex': index % min(texture_count, transform_count), 'projectionIndex': index % (index % 3 + 1),
            'coordinateSource': [3, 4, 5][index % 3], 'flags': index % 8,
            'textureDimensions': [[rng.randrange(1, 65536), rng.randrange(1, 65536)] for _ in range(texture_count)],
            'transforms': [[f32(rng.uniform(-1, 1)), f32(rng.uniform(-1, 1)), f32(rng.uniform(-100000, 100000)),
                f32(rng.uniform(.125, 4)), f32(rng.uniform(.125, 4))] for _ in range(transform_count)],
            'projection': [f32(rng.uniform(-50, 50)), f32(rng.uniform(-50, 50)),
                f32(rng.uniform(.125, 4)), f32(rng.uniform(.125, 4))],
            'width': f32(rng.uniform(.125, 1000)), 'height': f32(rng.uniform(.125, 1000)),
            'viewportWidth': f32(rng.uniform(1, 2000)), 'viewportHeight': f32(rng.uniform(1, 2000)),
            'world': matrix(), 'view': matrix()})
    return result
