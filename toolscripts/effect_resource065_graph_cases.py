import json
import struct
import time
from pathlib import Path

import effect_resource065_graph_oracle as oracle
from effect_resource065_graph_observation import Observation, logical
import effect_resource065_conditions as conditions


def fixture(sets=1, emitters=0, aliases=False, texture=None, third=False, user=False, material=True,
            shaders=0, vertices=None, color=None, default_uv=False):
    raw = bytearray(0x6000)
    def word(offset, value):
        struct.pack_into('<I', raw, offset, value & 0xffffffff)
    for offset, value in [(8, sets), (0x10, 0x2f00), (0x14, 0x3000), (0x1c, 0x2000),
                          (0x24, 0x2800), (0x2c, 0x2100), (0x40, 0x2400)]:
        word(offset, value)
    raw[0x2f00:0x2f10] = b'set\0emitter\0text'
    for index in range(sets):
        at = 0x48 + index * 28
        word(at, 0x6500 + index)
        word(at + 8, 0)
        count = emitters if not aliases else [2, 1, 1][index]
        reference = (0x200 + index * 32) if not aliases else [0x200, 0x208, 0x200][index]
        word(at + 0x10, count)
        word(at + 0x14, reference if count else 0)
        for item in range(count):
            word(reference + item * 8, 0x400 + item * 0x800 if not aliases or index == 0 else (0xc00 if index == 1 else 0x400))
    for emitter in range(max(emitters, 2 if aliases else 0)):
        at = 0x400 + emitter * 0x800
        word(at + 0x38, 4)
        if user:
            word(at + 0x13c, 0x20 + emitter * 16)
            word(at + 0x140, 16)
        word(at + 0x158, emitter * 0x100)
        material_at = 0x2400 + emitter * 0x100
        if material:
            raw[material_at:material_at + 4] = b'MATC'
            raw[material_at + 4] = 4
            raw[material_at + 8] = 8
        if third:
            word(at, 1)
            word(at + 0x548, 1)
            word(at + 0x714, emitter * 0x100 + 0x80)
            raw[material_at + 0x80:material_at + 0x84] = b'MATC'
            raw[material_at + 0x84] = 4
        for slot, dimensions, format_at in [(0, 0x40, 0xa0), (1, 0xbc, 0x11c)] + ([(2, 0x5b0, 0x610)] if third else []):
            if texture is None:
                continue
            texture_offset = emitter * 0x600 + slot * 0x200
            if texture == 'borrowed':
                word(at + format_at + 0x10, 256)
                word(at + format_at + 0x14, texture_offset)
            else:
                struct.pack_into('<HH', raw, at + dimensions, 8 if texture != 'invalid-dimensions' else 7, 8)
                word(at + format_at, 2 if texture != 'invalid-format' else 9)
                word(at + format_at + 4, texture_offset)
                word(at + format_at + 8, 256)
            for byte in range(256):
                raw[0x3000 + texture_offset + byte] = (byte * 37 + slot * 11 + emitter * 53) & 255
    word(0x2000, shaders)
    word(0x2010, 32)
    for index in range(shaders):
        keys = [index + (index % 3 << 16), index & 3, 0x61, 0x62, 0x63, 0x64]
        struct.pack_into('<6I', raw, 0x2020 + index * 44, *keys)
    if vertices is not None:
        word(0x2100, 1)
        word(0x2108, 16)
        record, data = 0x2110, 0x2160
        for offset, value in [(0, vertices * 3), (4, 3), (8, 0), (12, vertices * 12),
                              (40, 0x200), (44, 0 if default_uv else vertices * 8), (64, vertices), (72, 0x300), (76, vertices * 4)]:
            word(record + offset, value)
        if color:
            for offset, value in [(16, 4 if color == 'repeat' else vertices * 4), (20, 4), (24, 0x100),
                                  (28, 16 if color == 'repeat' else vertices * 16)]:
                word(record + offset, value)
        for vertex in range(vertices):
            struct.pack_into('<3f', raw, data + vertex * 12, vertex * .5, 1 - vertex, -2)
            struct.pack_into('<4f', raw, data + 0x100 + vertex * 16, .25, .5, .75, 1)
            struct.pack_into('<2f', raw, data + 0x200 + vertex * 8, vertex * .125, .75)
            word(data + 0x300 + vertex * 4, vertex | 0xabcd0000)
    return bytes(raw)


def cases():
    yield 'two-shaders', {'shaders': 2}, {}
    yield 'plain-emitter', {'emitters': 1}, {}
    yield 'three-sets-aliases', {'sets': 3, 'aliases': True, 'user': True}, {}
    yield 'decoded-three-textures', {'emitters': 1, 'texture': 'decoded', 'third': True, 'user': True}, {}
    yield 'borrowed-three-textures', {'emitters': 1, 'texture': 'borrowed', 'third': True}, {}
    yield 'decoded-invalid-format', {'emitters': 1, 'texture': 'invalid-format'}, {}
    yield 'decoded-invalid-dimensions', {'emitters': 1, 'texture': 'invalid-dimensions'}, {}
    yield 'decoded-scratch-oom', {'emitters': 1, 'texture': 'decoded'}, {'fail': 4}
    yield 'one-vertex-default-color', {'vertices': 1}, {}
    yield 'three-vertices-repeated-color', {'vertices': 3, 'color': 'repeat'}, {}
    yield 'five-vertices-direct-color-default-uv', {'vertices': 5, 'color': 'direct', 'default_uv': True}, {}
    yield 'zero-vertices', {'vertices': 0}, {}
    yield 'joined-all', {'sets': 3, 'aliases': True, 'texture': 'decoded', 'third': True, 'user': True,
        'shaders': 2, 'vertices': 3, 'color': 'repeat'}, {}


def run(build, output):
    output = Path(output).resolve()
    if output.exists():
        raise ValueError('Preserve resource graph corpus attempt')
    output.mkdir(parents=True)
    machines = {profile: oracle.Native(build / 'windows/effect_resource.dll') if profile == 'windows' else
        oracle.Machine(profile, build / ('arm' if profile == 'original' else profile) / 'effect_resource.elf')
        for profile in ['original', 'arm', 'windows', 'a64']}
    rows = []
    started = time.monotonic()
    try:
        for index, (name, specification, options) in enumerate(cases()):
            raw = fixture(**specification)
            for profile, machine in machines.items():
                machine.prepare(raw, [0, 0x5a, 0xa5, 0xff][index % 4], **options)
                machine.construct(options=index % 2 == 1)
                rows.append({'name': name, 'profile': profile, 'specification': specification, 'options': options,
                    'snapshot': Observation(machine).snapshot()})
            expected = logical(rows[-4]['snapshot'])
            for row in rows[-3:]:
                if logical(row['snapshot']) != expected:
                    raise ValueError('Actual resource graph differs: ' + name + '/' + row['profile'])
            with (output / 'rows.jsonl').open('a', encoding='utf-8') as stream:
                for row in rows[-4:]:
                    stream.write(json.dumps(row, separators=(',', ':')) + '\n')
            print(json.dumps({'case': name, 'sets': len(rows) // 4}), flush=True)
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'error': str(error), 'rows': rows,
            'originalPc': machines['original'].cpu.reg_read(oracle.ar.UC_ARM_REG_PC), 'sourceCreditGranted': 0}, indent=2) + '\n')
        raise
    original = machines['original']
    report = {'status': 'bounded-joined-resource-graph-corpus', 'sets': len(rows) // 4, 'rows': rows,
        'elapsedSeconds': time.monotonic() - started, 'originalInstructionWitnesses': sorted(original.witnesses.values(), key=lambda row: row['address']),
        'originalConditions': conditions.serializable(original.condition_outcomes), 'kernelEvents': original.kernel_events,
        'sourceCreditGranted': 0, 'limits': ['Synthetic valid fresh offset tables; storage0 CPU buffers and explicit reference cache-flush service.',
            'Source-authored typed platform services; no native GPU transfer/rendering or SDK allocator startup qualification.']}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'sets': report['sets'], 'elapsedSeconds': report['elapsedSeconds'], 'sourceCreditGranted': 0}))


if __name__ == '__main__':
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output)
