import hashlib
import json
import random
import struct
import time

import native_effect065_build as common
import native_effect065_resource_conditions as conditions
from native_effect065_resource_texture_oracle import Machine, Native


ROOT = common.ROOT
FORMATS = {100: (32, 0), 101: (24, 1), 102: (16, 2), 103: (16, 3), 104: (16, 4), 105: (16, 5),
    106: (8, 7), 107: (8, 8), 108: (8, 9), 109: (4, 10), 110: (4, 11), 111: (16, 6)}


def put(raw, at, value):
    struct.pack_into('<I', raw, at, value & 0xffffffff)


def model(spec, pixels, layout):
    caller = bytearray(bytes([0xc7]) * 0x8000)
    caller[0x100:0x100 + len(pixels)] = pixels
    state = bytearray(bytes([0xa5]) * layout['stateBytes'])
    state[:16] = bytes(16)
    put(state, 16, spec.get('fail', 0))
    allocations, releases, reports = [], [], []
    def allocate(size):
        if not spec.get('allocate', True):
            return None
        index = len(allocations)
        returned = spec.get('fail', 0) != index + 1
        allocations.append((size, returned))
        return index if returned else None
    def release(index):
        if index is not None and spec.get('release', True):
            releases.append(index)
    def finish(status, map_only=False):
        if not map_only and status & 0x80000000 and spec.get('report', True):
            reports.append(status)
        put(state, 0, len(allocations))
        put(state, 4, len(releases))
        put(state, 8, len(reports))
        for index, (size, returned) in enumerate(allocations):
            at = layout['requests'] + index * layout['requestBytes']
            for offset, value in enumerate([0x10000, 0x100, 0, size, int(returned and index not in releases)]):
                put(state, at + offset * 4, value)
        for index, allocation in enumerate(releases):
            put(state, 20 + index * 4, allocation)
        if reports:
            put(state, 28, reports[-1])
            put(state, 32, 0)
        if spec.get('method') == 'wrapper':
            status = int(status & 0x80000000 == 0)
        return {'result': status, 'callerHex': caller.hex(), 'providerHex': state.hex()}
    format = spec['format']
    if spec.get('method') == 'map':
        return finish(101 if format == 1 else 100 if format == 2 else 0xffffffff, True)
    if spec.get('method') == 'wrapper' and (format == 0xffffffff or spec.get('null_source') or spec.get('null_destination')):
        result = finish(0, True)
        result['result'] = 0
        return result
    if spec.get('null_source') or spec.get('null_destination'):
        return finish(0xe0e13002)
    width, height = spec['width'], spec['height']
    if not width or not height or width % 8 or height % 8:
        return finish(0xe0e1300a)
    if format not in FORMATS:
        return finish(0xe0e1300c)
    bits, mapped = FORMATS[format]
    if not spec.get('null_format') and spec.get('method') != 'wrapper':
        put(caller, 0x7000, mapped)
    bytes_per_pixel = bits // 8
    requested = width * height * bytes_per_pixel
    output_slot = allocate(requested) if spec.get('inplace') else None
    if spec.get('inplace') and output_slot is None:
        return finish(0xd8613004)
    reversed_slot = None
    if format in [100, 101, 105]:
        reversed_slot = allocate(requested)
        if reversed_slot is None:
            release(output_slot)
            return finish(0xd8613004)
    source = bytes(caller[0x100:0x100 + max(requested, width * height // 2)])
    if reversed_slot is not None:
        source = b''.join(source[index:index + bytes_per_pixel][::-1] for index in range(0, requested, bytes_per_pixel))
        at = layout['storage'] + reversed_slot * layout['storageStride']
        state[at:at + requested] = source
    output = bytearray(bytes([0xa5 if output_slot is not None else 0xc7]) * max(requested, width * height // 2))
    def coordinate(cell, odd):
        return sum(((cell >> (bit * 2 + odd)) & 1) << bit for bit in range(3))
    for tile_y in range(height // 8):
        for tile_x in range(width // 8):
            for cell in range(64):
                x = tile_x * 8 + coordinate(cell, 0)
                y = height - 1 - (tile_y * 8 + coordinate(cell, 1))
                linear = y * width + x
                tiled = (tile_y * (width // 8) + tile_x) * 64 + cell
                if bits == 4:
                    nibble = source[linear // 2] >> (linear % 2 * 4) & 15
                    shift = tiled % 2 * 4
                    output[tiled // 2] = (output[tiled // 2] & ~(15 << shift)) | nibble << shift
                else:
                    output[tiled * bytes_per_pixel:(tiled + 1) * bytes_per_pixel] = source[linear * bytes_per_pixel:(linear + 1) * bytes_per_pixel]
    if output_slot is not None:
        at = layout['storage'] + output_slot * layout['storageStride']
        state[at:at + len(output)] = output
        caller[0x100:0x100 + requested] = output[:requested]
    else:
        caller[0x4000:0x4000 + len(output)] = output
    release(output_slot)
    release(reversed_slot)
    return finish(0x13000)


def cases():
    for format in range(100, 112):
        for width, height in [(8, 8), (16, 8), (8, 16), (16, 16), (24, 8), (32, 32)]:
            for inplace in [False, True]:
                yield {'format': format, 'width': width, 'height': height, 'inplace': inplace}
        for inplace in [False, True]:
            for fail in [1, 2]:
                yield {'format': format, 'width': 8, 'height': 8, 'inplace': inplace, 'fail': fail}
            for option in ['allocate', 'release', 'report']:
                yield {'format': format, 'width': 8, 'height': 8, 'inplace': inplace, option: False}
        yield {'format': format, 'width': 8, 'height': 8, 'null_format': True}
        yield {'format': format, 'width': 8, 'height': 8, 'method': 'wrapper'}
    for format in [0, 99, 100, 111, 112, 0xffffffff]:
        for width, height in [(0, 8), (8, 0), (1, 8), (7, 8), (8, 7), (9, 16), (8, 8)]:
            for kind in ['valid', 'null_source', 'null_destination']:
                yield {'format': format, 'width': width, 'height': height, **({kind: True} if kind != 'valid' else {})}
    for format in [0, 1, 2, 3, 100, 101, 0x80000000, 0xffffffff]:
        yield {'method': 'map', 'format': format, 'width': 8, 'height': 8}
    for format in [0xffffffff, 100, 101, 112]:
        for kind in ['valid', 'null_source', 'null_destination']:
            yield {'method': 'wrapper', 'format': format, 'width': 8, 'height': 8, **({kind: True} if kind != 'valid' else {})}


def run(output, folder=None):
    if output.exists():
        raise ValueError('Preserve texture converter/error/ownership corpus')
    output.mkdir(parents=True)
    folder = folder or ROOT / 'work/native-effect065/resource/texture-build-v1'
    machines = [Machine('original', folder / 'arm/effect_vertex.elf'), Machine('arm', folder / 'arm/effect_vertex.elf'),
        Native(folder / 'windows/effect_vertex.dll'), Machine('a64', folder / 'a64/effect_vertex.elf')]
    started, count = time.monotonic(), 0
    with (output / 'rows.jsonl').open('w', encoding='utf-8') as stream:
        for spec in cases():
            bits = FORMATS.get(spec['format'], (32, 0))[0]
            size = max(32, spec['width'] * spec['height'] * bits // 8)
            pixels = random.Random(655000 + count).randbytes(size)
            expected = model(spec, pixels, machines[0].layout)
            results = []
            try:
                results = [machine.call(spec, pixels) for machine in machines]
                if any(result != expected for result in results):
                    raise ValueError('Original/source/independent inverse-tile model caller/provider/status differs')
            except Exception as error:
                (output / 'failure.json').write_text(json.dumps({'case': count, 'spec': spec, 'pixelsHex': pixels.hex(),
                    'expected': expected, 'results': results, 'error': str(error), 'sourceCreditGranted': 0}, indent=2) + '\n')
                raise
            row = {'case': count, 'spec': spec, 'inputSha256': hashlib.sha256(pixels).hexdigest(), 'result': expected['result'],
                'callerSha256': hashlib.sha256(bytes.fromhex(expected['callerHex'])).hexdigest(),
                'providerSha256': hashlib.sha256(bytes.fromhex(expected['providerHex'])).hexdigest()}
            stream.write(json.dumps(row, separators=(',', ':')) + '\n')
            count += 1
            if count % 50 == 0:
                print(json.dumps({'sets': count, 'elapsedSeconds': time.monotonic() - started}), flush=True)
    report = {'status': 'bounded-texture-conversion-errors-cleanup-and-inverse-tile-model-four-target-proof',
        'sets': count, 'elapsedSeconds': time.monotonic() - started, 'rows': common.pin(output / 'rows.jsonl'),
        'sourceCreditGranted': 0, 'allCallerAndPointerFreeProviderBytesCompared': True,
        'limits': ['Dimensions through32x32 with complete backing; API invalid-input/status paths are sampled.',
            'The supplied scratch allocator returns4096usable bytes even for zero requests; no generic zero-allocation safety claim.',
            'Original in-place four-bit conversion requests/copies zero bytes while writing packed temporary data; that behavior is preserved.',
            'No underlying SDK allocator, actual startup, GPU execution or complete ResourceCtor qualification.']}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    (output / 'condition-outcomes.json').write_text(json.dumps(conditions.serializable(machines[0].condition_outcomes), indent=2) + '\n')
    (output / 'reference-instructions.json').write_text(json.dumps(sorted(machines[0].witnesses.values(), key=lambda row: row['address']), indent=2) + '\n')
    print(json.dumps(report))


if __name__ == '__main__':
    run(ROOT / 'work/native-effect065/resource/texture-corpus-v1')
