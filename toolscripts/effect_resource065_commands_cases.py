import hashlib
import json
import random
import struct
import time

import native_effect065_build as common
import effect_resource065_conditions as conditions
from effect_resource065_commands_oracle import Machine, Native
from effect_resource065_vertex_cases import FORMATS, base_input, put


ROOT = common.ROOT
FLOAT_BITS = [0, 0x80000000, 1, 0x7fffff, 0x800000, 0x1f800000, 0x20000000, 0x3f800000,
    0xbf800000, 0x7f7fffff, 0x7f800000, 0xff800000, 0x7fc12345, 0x7fa12345]


def group(raw, slot, base_units, entries):
    start = 0x160 + slot * 112
    put(raw, start, (base_units * 8 + 0x100 + slot * 64) & 0xffffffff)
    raw[start + 4:start + 16] = bytes(12)
    for item in range(12):
        put(raw, start + 16 + item * 4, 0)
        put(raw, start + 64 + item * 4, 0xffffffff)
    for item, (format, index, stride) in enumerate(entries):
        raw[start + 4 + item] = format
        put(raw, start + 16 + item * 4, stride)
        put(raw, start + 64 + item * 4, index)


def cases():
    serial = 0
    for base_units in [0, 1, 0x123456, 0x80000000, 0xffffffff]:
        for pattern in [0, 0x5a, 0xa5, 255]:
            yield {'family': 'empty', 'raw': bytes(base_input(65001)), 'base': base_units, 'pattern': pattern}
    for format in range(16):
        for slot in [0, 5, 11]:
            for padded in [False, True]:
                raw = base_input(65002 + format)
                entries = [(format, 7, FORMATS[format])]
                if padded:
                    entries += [(3, 0xffffffff, 8)]
                group(raw, slot, 0x123456, entries)
                yield {'family': 'format', 'format': format, 'slot': slot, 'padded': padded,
                    'raw': bytes(raw), 'base': 0x123456, 'pattern': 0xa5}
    for count in range(1, 13):
        for packed in [False, True]:
            raw = base_input(65003 + count)
            entries = [(index % 16, index, FORMATS[index % 16]) for index in range(count)]
            if packed:
                group(raw, 11, 0xffffffff, entries)
            else:
                for slot, entry in enumerate(entries):
                    group(raw, slot, 0xffffffff, [entry])
            yield {'family': 'binding-count', 'count': count, 'packed': packed, 'raw': bytes(raw), 'base': 0xffffffff, 'pattern': 255}
    for index in range(12):
        for pattern_index in range(len(FLOAT_BITS)):
            raw = base_input(65004 + index)
            at = 0x6a0 + index * 20
            raw[at] = [1, 4, 128, 255][pattern_index % 4]
            struct.pack_into('<4I', raw, at + 4, *[FLOAT_BITS[(pattern_index + item) % len(FLOAT_BITS)] for item in range(4)])
            yield {'family': 'constant-bits', 'index': index, 'bitsIndex': pattern_index, 'raw': bytes(raw),
                'base': 0x80000000, 'pattern': [0, 0x5a, 0xa5, 255][pattern_index % 4]}
    for seed in range(120):
        randomizer = random.Random(65050 + seed)
        raw = base_input(65050 + seed)
        attributes = list(range(12))
        randomizer.shuffle(attributes)
        mapped = seed % 13
        for slot, index in enumerate(attributes[:mapped]):
            format = randomizer.randrange(16)
            group(raw, slot, seed * 0x10001, [(format, index, FORMATS[format])])
        for index in attributes[mapped:]:
            raw[0x6a0 + index * 20] = 4
            struct.pack_into('<4I', raw, 0x6a4 + index * 20, *[randomizer.getrandbits(32) for item in range(4)])
        yield {'family': 'mixed', 'seed': seed, 'raw': bytes(raw), 'base': seed * 0x10001, 'pattern': seed & 255}
    for base_units in [0, 1, 0x123456, 0x80000000, 0xffffffff]:
        for flag in [0, 1, 2, 128, 255]:
            for count in [0, 1, 0xffffffff]:
                for buffer_word in [0, 1, 0x80000000, 0xffffffff]:
                    descriptor = struct.pack('<IIB3s', buffer_word, count, flag, bytes([0xa5]) * 3)
                    yield {'family': 'indices', 'raw': bytes(base_input(65005)), 'descriptor': descriptor,
                        'base': base_units, 'pattern': 0x5a, 'flag': flag, 'count': count, 'bufferWord': buffer_word}


def run(output, build_folder=None):
    if output.exists():
        raise ValueError('Preserve complete command-generator corpus')
    output.mkdir(parents=True)
    folder = build_folder or ROOT / 'work/native-effect065/resource/commands-build-v1'
    machines = [Machine('original'), Machine('arm', folder / 'arm/effect_vertex.elf'), Native(folder / 'windows/effect_vertex.dll'),
        Machine('a64', folder / 'a64/effect_vertex.elf')]
    count, started = 0, time.monotonic()
    with (output / 'rows.jsonl').open('w', encoding='utf-8') as stream:
        for case in cases():
            observations = []
            try:
                for machine in machines:
                    observations.append(machine.commands(case['raw'], case['base'], case['pattern'], case.get('descriptor')))
                if any(row != observations[0] for row in observations[1:]):
                    raise ValueError('Original/source complete command backing or caller-used return differs')
            except Exception as error:
                (output / 'failure.json').write_text(json.dumps({'case': {key: value for key, value in case.items() if key not in ['raw', 'descriptor']},
                    'inputHex': case['raw'].hex(), 'descriptorHex': case.get('descriptor', b'').hex(),
                    'observations': observations, 'error': str(error), 'completed': count, 'sourceCreditGranted': 0}, indent=2) + '\n')
                raise
            row = {key: value for key, value in case.items() if key not in ['raw', 'descriptor']}
            row.update(inputSha256=hashlib.sha256(case['raw']).hexdigest(), words=observations[0]['words'],
                outputSha256=hashlib.sha256(bytes.fromhex(observations[0]['completeOutputHex'])).hexdigest())
            if 'descriptor' in case:
                row['descriptorHex'] = case['descriptor'].hex()
            stream.write(json.dumps(row, separators=(',', ':')) + '\n')
            count += 1
            if count % 200 == 0:
                print(json.dumps({'sets': count, 'elapsedSeconds': time.monotonic() - started}), flush=True)
    record = {'status': 'bounded-complete-word-command-generator-four-target-corpus', 'sets': count,
        'elapsedSeconds': time.monotonic() - started, 'rows': common.pin(output / 'rows.jsonl'),
        'all512OutputBackingBytesCompared': True, 'callerUsedReturnCompared': True,
        'inputDescriptorGlobalAndCallerGuardsEnforced': True, 'sourceCreditGranted': 0,
        'GPUExecutionQualified': False, 'completeResourceConstructorQualified': False}
    (output / 'report.json').write_text(json.dumps(record, indent=2) + '\n')
    (output / 'reference-instructions.json').write_text(json.dumps(sorted(machines[0].witnesses.values(), key=lambda row: row['address']), indent=2) + '\n')
    (output / 'condition-outcomes.json').write_text(json.dumps(conditions.serializable(machines[0].condition_outcomes), indent=2) + '\n')
    print(json.dumps(record))


if __name__ == '__main__':
    run(ROOT / 'work/native-effect065/resource/commands-corpus-v1')
