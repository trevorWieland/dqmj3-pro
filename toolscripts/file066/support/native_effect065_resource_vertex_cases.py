import hashlib
import json
import random
import struct
import time

from native_effect065_resource_vertex_oracle import ROOT, Machine, Native, SIZES
import native_effect065_resource_conditions as conditions
import native_effect065_build as common


FORMATS = [1, 1, 2, 4, 2, 2, 4, 8, 3, 3, 6, 12, 4, 4, 8, 16]


def word(raw, at):
    return struct.unpack_from('<I', raw, at)[0]


def put(raw, at, value):
    struct.pack_into('<I', raw, at, value & 0xffffffff)


def base_input(seed):
    raw = bytearray(random.Random(seed).randbytes(0x790))
    raw[0x154:0x160] = bytes(12)
    for slot in range(12):
        put(raw, 0x160 + slot * 112, 0)
        raw[0x6a0 + slot * 20] = 0
        for index in range(12):
            put(raw, 0x160 + slot * 112 + 64 + index * 4, 0xffffffff)
    return raw


def remove_model(initial, index):
    raw = bytearray(initial)
    if raw[0x154 + index] == 0:
        return bytes(raw)
    put(raw, 0, 0)
    constant = 0x6a0 + index * 20
    if raw[constant]:
        raw[constant] = raw[0x154 + index] = 0
        return bytes(raw)
    pairs = [(slot, item) for slot in range(12) if word(raw, 0x160 + slot * 112)
             for item in range(12) if word(raw, 0x160 + slot * 112 + 64 + item * 4) == index]
    if pairs:
        slot, item = pairs[0]
        start = 0x160 + slot * 112
        put(raw, start + 64 + item * 4, 0xffffffff)
        raw[0x154 + index] = 0
        if all(word(raw, start + 64 + item * 4) == 0xffffffff for item in range(12)):
            put(raw, start, 0)
            raw[start + 16:start + 64] = bytes(48)
    return bytes(raw)


def model(name, raw, index, format, buffer_word):
    if name in ['fn_0016771c', 'fn_0015d210', 'fn_0015d258']:
        changed = {'fn_0016771c': 0, 'fn_0015d210': 1, 'fn_0015d258': 4}[name]
        return bytes(changed) + raw[changed:]
    if name == 'fn_0015d21c':
        return bytes(64) + bytes([255]) * 48
    result = remove_model(raw, index)
    if name == 'fn_0014db24':
        return result
    result = bytearray(result)
    available = next((slot for slot in range(12) if word(result, 0x160 + slot * 112) == 0), None)
    if available is None:
        raise ValueError('Generated setter fixture has no available binding; original failure remains unsupported')
    at = 0x160 + available * 112
    result[0x154 + index] = 1
    put(result, at, buffer_word)
    result[at + 4] = format & 255
    result[at + 16:at + 64] = bytes(48)
    put(result, at + 16, FORMATS[format] if format < 16 else 0)
    result[at + 64:at + 112] = bytes([255]) * 48
    put(result, at + 64, index)
    put(result, 0, 0)
    return bytes(result)


def cases():
    for name in ['fn_0016771c', 'fn_0015d210', 'fn_0015d258', 'fn_0015d21c']:
        for pattern in range(256):
            yield {'family': 'constructor-reset', 'name': name, 'raw': bytes([pattern]) * SIZES[name], 'index': 0,
                'format': 0, 'buffer': 0, 'pattern': pattern}
    serial = 0
    for index in range(12):
        for variant in ['disabled', 'constant', 'absent', 'single', 'packed']:
            positions = [(0, 0)] if variant in ['disabled', 'constant', 'absent'] else [(0, 0), (5, 6), (11, 11)]
            for slot, item in positions:
                serial += 1
                raw = base_input(651000 + serial)
                raw[0x154 + index] = 0 if variant == 'disabled' else [1, 128, 255][index % 3]
                if variant in ['constant', 'disabled']:
                    raw[0x6a0 + index * 20] = 128
                if variant == 'absent':
                    for group in range(12):
                        put(raw, 0x160 + group * 112, 0x81000000 + group)
                if variant in ['single', 'packed']:
                    start = 0x160 + slot * 112
                    put(raw, start, 0xf1234567)
                    put(raw, start + 64 + item * 4, index)
                    if variant == 'packed':
                        put(raw, start + 64 + ((item + 1) % 12) * 4, (index + 1) % 12)
                yield {'family': 'remove-' + variant, 'name': 'fn_0014db24', 'raw': bytes(raw), 'index': index,
                    'format': 0, 'buffer': 0, 'seed': 651000 + serial, 'slot': slot, 'item': item}
    for index in range(12):
        for format in list(range(16)) + [16, 255, 256, 0xffffffff]:
            for variant in ['fresh', 'replace-packed', 'replace-constant']:
                serial += 1
                raw = base_input(652000 + serial)
                if variant != 'fresh':
                    raw[0x154 + index] = 1
                    if variant == 'replace-constant':
                        raw[0x6a0 + index * 20] = 1
                    else:
                        start = 0x160 + 5 * 112
                        put(raw, start, 0xe1234567)
                        put(raw, start + 64 + 6 * 4, index)
                        put(raw, start + 64 + 8 * 4, (index + 1) % 12)
                for group in [0, 1, 2]:
                    put(raw, 0x160 + group * 112, 0x71000000 + group)
                yield {'family': 'set-' + variant, 'name': 'fn_0015d0e0', 'raw': bytes(raw), 'index': index,
                    'format': format, 'buffer': [0, 1, 0x80000000, 0xffffffff][(index + format) % 4], 'seed': 652000 + serial}


def run(output, folder=None):
    if output.exists():
        raise ValueError('Preserve vertex constructor/edit corpus')
    output.mkdir(parents=True)
    folder = folder or ROOT / 'work/native-effect065/resource/vertex-build-v1'
    machines = [Machine('original'), Machine('arm', folder / 'arm/effect_vertex.elf'), Native(folder / 'windows/effect_vertex.dll'),
        Machine('a64', folder / 'a64/effect_vertex.elf')]
    started, count = time.monotonic(), 0
    with (output / 'rows.jsonl').open('w', encoding='utf-8') as stream:
        for case in cases():
            expected = model(case['name'], case['raw'], case['index'], case['format'], case['buffer'])
            observations = []
            try:
                for machine in machines:
                    observations.append(machine.call(case['name'], case['raw'], case['index'], case['format'], case['buffer']))
                if any(raw != expected for raw in observations):
                    raise ValueError('Actual original/source/model complete vertex storage differs')
            except Exception as error:
                failure = {'case': {key: value for key, value in case.items() if key != 'raw'}, 'error': str(error),
                    'inputHex': case['raw'].hex(), 'expectedHex': expected.hex(), 'observedHex': [raw.hex() for raw in observations],
                    'completed': count, 'sourceCreditGranted': 0}
                (output / 'failure.json').write_text(json.dumps(failure, indent=2) + '\n')
                raise
            record = {key: value for key, value in case.items() if key != 'raw'}
            record.update(inputSha256=hashlib.sha256(case['raw']).hexdigest(), outputSha256=hashlib.sha256(expected).hexdigest())
            stream.write(json.dumps(record, separators=(',', ':')) + '\n')
            count += 1
            if count % 300 == 0:
                print(json.dumps({'sets': count, 'elapsedSeconds': time.monotonic() - started}), flush=True)
    report = {'status': 'bounded-original-source-model-complete-vertex-state-comparison', 'sets': count,
        'elapsedSeconds': time.monotonic() - started, 'rows': common.pin(output / 'rows.jsonl'),
        'targets': ['actual-original-ARM', 'source-ARM', 'native-Windows', 'high-AArch64'],
        'sourceCreditGranted': 0, 'fullResourceConstructorQualified': False, 'GPUExecutionQualified': False,
        'limits': ['Attribute indices0..11; setter fixtures retain an available binding after removal.',
            'All device words are U32 data; no host pointer is encoded into a device word.',
            'Constant float words are opaque preserved data; no floating arithmetic or rendering claim.']}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    (output / 'reference-instructions.json').write_text(json.dumps(sorted(machines[0].witnesses.values(), key=lambda row: row['address']), indent=2) + '\n')
    (output / 'condition-outcomes.json').write_text(json.dumps(conditions.serializable(machines[0].condition_outcomes), indent=2) + '\n')
    print(json.dumps(report))


if __name__ == '__main__':
    run(ROOT / 'work/native-effect065/resource/vertex-corpus-v1')
