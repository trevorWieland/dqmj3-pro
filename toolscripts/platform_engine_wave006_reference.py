import math
import struct

from native_material_wave011_helpers_native import normalize
from platform_engine_wave006_original import matrix as original_matrix
from native_wave014_oracle import original as original_math_machine
from native_wave014_vectors import f32


def materials(originals):
    result = []
    for original in originals:
        blob = original['object']
        capacity, used = struct.unpack_from('<HH', blob, 116)
        refs = used & 3
        item = {'black': list(blob[108:112]), 'white': list(blob[112:116]), 'refs': refs,
            'detailed': bool(used & 0x1000), 'textures': [], 'srt': [], 'mapping': [], 'projection': []}
        if refs:
            state = normalize(original['storage'], capacity, 4, 0x12004000)
            for index in range(refs):
                words = struct.unpack_from('<8I', state['textureAndTransforms'], index * 32)
                config = words[2]
                item['textures'].append({'index': words[0] - 1, 's': (config & 3) | ((config >> 4) & 7) << 2,
                    't': ((config >> 2) & 3) | ((config >> 7) & 1) << 2})
                item['srt'].append(struct.unpack_from('<5f', state['textureAndTransforms'], refs * 32 + index * 20))
                item['mapping'].append(state['generators'][index][1])
            if state['projections']:
                item['projection'] = struct.unpack_from('<4fI', state['projections'])
            if item['detailed']:
                item['header'] = struct.unpack('<7I', state['detailedHeader'])
                item['stage'] = struct.unpack('<3I', state['stages'])
        result.append(item)
    return result


def layout(owner, np, original_math=False, binary32=False):
    pane_tags = {b'pan1': 1, b'pic1': 2, b'txt1': 3, b'prt1': 4, b'bnd1': 5, b'wnd1': 6}
    size = next(block for tag, block in owner['sections'] if tag == b'lyt1')
    width, height = struct.unpack_from('<2f', size, 12)
    panes, pictures, stack, last = [], [], [], None
    oracle = original_math_machine() if original_math else None
    for tag, block in owner['sections']:
        if tag == b'pas1':
            if last is None:
                raise ValueError('Independent hierarchy has no parent')
            stack.append(last)
        elif tag == b'pae1':
            stack.pop()
        elif tag in pane_tags:
            x, y, z, rx, ry, rotation, sx, sy, w, h = struct.unpack_from('<10f', block, 44)
            if block[9] or any([z, rx, ry]) or not all(math.isfinite(value) for value in [x, y, rotation, sx, sy, w, h]):
                raise ValueError('Independent planar layout profile unsupported')
            radians = math.radians(rotation)
            sine, cosine = math.sin(radians), math.cos(radians)
            local = np.array([[cosine * sx, -sine * sy, x], [sine * sx, cosine * sy, y], [0, 0, 1]], dtype=np.float64)
            world = panes[stack[-1]]['matrix'] @ local if stack else local
            raw_world = None
            if oracle is not None:
                raw, _, _ = oracle.execute({'id': 'layout-trig', 'operation': 'trig', 'angle': f32(rotation * f32(256 / 360))})
                sine, cosine = struct.unpack('<2f', raw)
                local_world = [f32(cosine * sx), f32(-sine * sy), 0., x, f32(sine * sx), f32(cosine * sy), 0., y, 0., 0., 1., 0.]
                if stack:
                    raw, _, _ = oracle.execute({'id': 'layout-multiply', 'operation': 'multiply',
                        'left': panes[stack[-1]]['originalWorld'], 'right': local_world})
                    raw_world = list(struct.unpack('<12f', raw))
                else:
                    raw_world = local_world
                world = np.array([[raw_world[0], raw_world[1], raw_world[3]], [raw_world[4], raw_world[5], raw_world[7]], [0, 0, 1]], dtype=np.float64)
            offsets = np.array([[-w / 2, w / 2, w / 2, -w / 2], [h / 2, h / 2, -h / 2, -h / 2], [1, 1, 1, 1]])
            if binary32:
                operands, positions = world.astype(np.float32), offsets.astype(np.float32)
                corners = (operands[:, 0, None] * positions[0] + operands[:, 1, None] * positions[1]) + operands[:, 2, None]
            else:
                corners = world @ offsets
            corners[0] += width / 2
            corners[1] = height / 2 - corners[1]
            visible = bool(block[8] & 1 and block[10] and (not stack or panes[stack[-1]]['visible']))
            pane = {'matrix': world, 'originalWorld': raw_world, 'width': w, 'height': h, 'corners': corners[:2].T.copy(), 'visible': visible, 'alpha': block[10], 'kind': pane_tags[tag]}
            panes.append(pane)
            last = len(panes) - 1
            if tag == b'pic1':
                if block[102] != 1 or any(panes[index]['alpha'] != 255 for index in stack):
                    raise ValueError('Independent picture hierarchy/UV set unsupported')
                pictures.append({'pane': last, 'material': struct.unpack_from('<H', block, 100)[0],
                    'width': w, 'height': h, 'alpha': block[10], 'colors': np.frombuffer(block[84:100], dtype=np.uint8).reshape(4, 4).astype(np.int64),
                    'uv': np.array(struct.unpack_from('<8f', block, 104)).reshape(4, 2)})
        else:
            last = None
    return panes, pictures


def bilinear(values, u, v):
    return values[0] * (1 - u) * (1 - v) + values[1] * u * (1 - v) + values[2] * (1 - u) * v + values[3] * u * v


def rounded_bilinear(values, u, v):
    top = values[0] * (1 - u) + values[1] * u
    bottom = values[2] * (1 - u) + values[3] * u
    return top * (1 - v) + bottom * v


def mapped_rows(matrix, coordinates):
    return ((matrix[:, 0, None] * coordinates[0] + matrix[:, 1, None] * coordinates[1]) +
        matrix[:, 2, None] * coordinates[2]) + matrix[:, 3, None] * coordinates[3]


def indices(values, extent, mode, np):
    if mode == 0:
        return np.clip(values, 0, extent - 1)
    if mode == 1:
        return values % extent
    period = values % (extent * 2)
    return np.where(period >= extent, extent * 2 - period - 1, period)


def sample(image, u, v, s, t, np, binary32=False):
    height, width = image.shape[:2]
    if np.all(image == image[0, 0]):
        return np.broadcast_to(image[0, 0], (*u.shape, 4)).astype(np.int64)
    u = np.clip(u, 0, 1) if s & 3 == 0 else u % (2 if s & 3 == 2 else 1)
    v = np.clip(v, 0, 1) if t & 3 == 0 else v % (2 if t & 3 == 2 else 1)
    x, y = u * width - (0.5 if s & 4 else 0), v * height - (0.5 if t & 4 else 0)
    ix, iy = np.floor(x).astype(np.int64), np.floor(y).astype(np.int64)
    dtype = np.float32 if binary32 else np.float64
    fx, fy = (x - ix.astype(dtype) if s & 4 else np.zeros_like(x))[..., None], (y - iy.astype(dtype) if t & 4 else np.zeros_like(y))[..., None]
    colors = [image[indices(iy + dy, height, t & 3, np), indices(ix + dx, width, s & 3, np)].astype(dtype)
        for dy, dx in [(0, 0), (0, 1), (1, 0), (1, 1)]]
    return np.floor((rounded_bilinear if binary32 else bilinear)(colors, fx, fy) + 0.5).astype(np.int64)


def constant(material, selector, np):
    if selector < 2:
        return np.array(material['black'] if selector == 0 else material['white'], dtype=np.int64)
    value = material['header'][selector - 1]
    return np.array([(value >> shift) & 255 for shift in [0, 8, 16, 24]], dtype=np.int64)


def fragment(material, picture, textures, u, v, np, binary32=False, sample32=None):
    samples = []
    for index, binding in enumerate(material['textures']):
        image = textures[binding['index']]
        height, width = image.shape[:2]
        if material['mapping'][index] == 4:
            local = np.stack(((u - 0.5) * picture['width'], (0.5 - v) * picture['height'], np.ones_like(u)))
            world = picture['world'].astype(np.float32) if binary32 else picture['world']
            mapped = ((world[:, 0, None] * local[0].reshape(-1) + world[:, 1, None] * local[1].reshape(-1)) +
                world[:, 2, None]) if binary32 else world @ local.reshape(3, -1)
            coordinates = np.stack((mapped[0].reshape(u.shape), mapped[1].reshape(u.shape), np.zeros_like(u), np.ones_like(u)))
        else:
            blend = rounded_bilinear if binary32 else bilinear
            uv = picture['uv'].astype(np.float32) if binary32 else picture['uv']
            coordinates = np.stack((blend(uv[:, 0], u, v), blend(uv[:, 1], u, v), np.zeros_like(u), np.ones_like(u)))
        matrix = picture['coordinateMatrices'][index].astype(np.float32) if binary32 else picture['coordinateMatrices'][index]
        transformed = mapped_rows(matrix, coordinates.reshape(4, -1)) if binary32 else matrix @ coordinates.reshape(4, -1)
        tu, tv = transformed.reshape(2, *u.shape)
        samples.append(sample(image, tu, 1 - tv, binding['s'], binding['t'], np, binary32 if sample32 is None else sample32))
    if not material['detailed']:
        return samples[0]
    color_flags, alpha_flags, selectors = material['stage']
    output = np.zeros_like(samples[0])
    for channel in range(4):
        flags = alpha_flags if channel == 3 else color_flags
        selected = selectors >> 4 if channel == 3 else selectors & 15
        chosen = constant(material, selected, np)[channel]
        def source(slot):
            value = flags >> (slot * 4) & 15
            if value == 3:
                return samples[0][..., channel]
            if value == 4:
                return samples[1][..., channel]
            if value == 14:
                return chosen
            raise ValueError('Independent combiner source unsupported')
        value = source(0)
        operation = flags >> 24 & 15
        if operation == 1:
            value = (value * source(1) + 127) // 255
        elif operation != 0:
            raise ValueError('Independent combiner operation unsupported')
        output[..., channel] = value
    return output


def render(owner, originals, textures, np, coordinate_inputs=None, binary32=False, sample32=None, original_math=False):
    panes, pictures = layout(owner, np, original_math, binary32)
    material_states = materials(originals)
    output = np.empty((240, 320, 4), dtype=np.int64)
    output[:] = [32, 36, 44, 255]
    yy, xx = np.mgrid[0:240, 0:320]
    for picture_index, picture in enumerate(pictures):
        pane = panes[picture['pane']]
        if not pane['visible']:
            continue
        points = np.trunc(pane['corners'] * 1000) / 1000
        if binary32:
            points = points.astype(np.float32)
        transform = np.column_stack((points[1] - points[0], points[3] - points[0]))
        if binary32:
            delta = np.stack((xx.astype(np.float32) + 0.5 - points[0, 0], yy.astype(np.float32) + 0.5 - points[0, 1]))
            determinant = transform[0, 0] * transform[1, 1] - transform[1, 0] * transform[0, 1]
            u = (delta[0] * transform[1, 1] - delta[1] * transform[0, 1]) / determinant
            v = (delta[1] * transform[0, 0] - delta[0] * transform[1, 0]) / determinant
        else:
            uv = np.linalg.inv(transform) @ np.stack((xx + 0.5 - points[0, 0], yy + 0.5 - points[0, 1])).reshape(2, -1)
            u, v = uv.reshape(2, 240, 320)
        active = (u >= 0) & (v >= 0) & (u < 1) & (v < 1)
        material = material_states[picture['material']]
        picture['world'] = pane['matrix']
        world = coordinate_inputs[picture_index] if coordinate_inputs is not None else [pane['matrix'][0, 0], pane['matrix'][0, 1], 0., pane['matrix'][0, 2],
            pane['matrix'][1, 0], pane['matrix'][1, 1], 0., pane['matrix'][1, 2], 0., 0., 1., 0.]
        picture['coordinateMatrices'] = [np.array(original_matrix(originals[picture['material']], world, picture['width'], picture['height'], reference, material['mapping'][reference])).reshape(2, 4)
            for reference in range(material['refs'])]
        rgba = fragment(material, picture, textures, u, v, np, binary32, sample32)
        blend = rounded_bilinear if binary32 else bilinear
        colors = picture['colors'].astype(np.float32) if binary32 else picture['colors']
        tint = np.floor(blend(colors, u[..., None], v[..., None]) + 0.5).astype(np.int64)
        if not material['detailed']:
            black, white = np.array(material['black']), np.array(material['white'])
            rgba = (black * (255 - rgba) + white * rgba + 127) // 255
        rgba = (rgba * tint + 127) // 255
        alpha = (rgba[..., 3] * picture['alpha'] + 127) // 255
        combined = (rgba[..., :3] * alpha[..., None] + output[..., :3] * (255 - alpha[..., None]) + 127) // 255
        output[..., :3][active] = combined[active]
    return output.astype(np.uint8), panes, pictures
