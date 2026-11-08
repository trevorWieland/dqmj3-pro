import argparse
import json
from pathlib import Path

import native_effect065_build as common
import effect_resource065_graph_build as builder
import effect_resource065_graph_oracle as oracle
from effect_resource065_graph_cases import cases, fixture
from effect_resource065_graph_observation import Observation, logical
from effect_resource065_checkpoint import checked


ROOT = common.ROOT
FIELDS = ['identity', 'system', 'identifier', 'serialized', 'names', 'textures', 'sets', 'allocator', 'shaders',
    'shader_count', 'primitives', 'primitive_count', 'texture_storage', 'primitive_storage', 'transfer_context', 'materials']
EXPECTED = {4: [0, 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 49, 52, 56],
    8: [0, 8, 16, 24, 32, 40, 48, 56, 64, 72, 80, 88, 92, 93, 96, 104]}


def assert_header_padding(raw_hex, layout, pattern):
    pointer = layout['pointerBytes']
    if pointer not in EXPECTED or layout['resourceBytes'] != (60 if pointer == 4 else 112):
        raise ValueError('Resource header ABI size differs from measured target/native layouts')
    if [layout['r_' + name] for name in FIELDS] != EXPECTED[pointer]:
        raise ValueError('Resource header ABI offsets differ from independently bound layout')
    mutable = set()
    for name in FIELDS:
        size = 1 if name in ['texture_storage', 'primitive_storage'] else 4 if name in ['identifier', 'shader_count', 'primitive_count'] else pointer
        start = layout['r_' + name]
        mutable.update(range(start, start + size))
    raw = bytes.fromhex(raw_hex)
    if len(raw) != layout['resourceBytes']:
        raise ValueError('Retained raw resource header has wrong extent')
    untouched = [offset for offset in range(len(raw)) if offset not in mutable]
    if any(raw[offset] != pattern for offset in untouched):
        raise ValueError('Unknown resource header or native ABI padding byte changed')
    return untouched


def run(stage, output):
    if output.exists():
        raise ValueError('Preserve separate resource header verifier successor')
    output.mkdir(parents=True)
    packet = json.loads(checked(json.loads((stage / 'ready.json').read_text())['packet']).read_text())
    for row in packet['inputs'] + packet['reports']:
        checked(row)
    build = stage / 'graph-build'
    machines = {profile: oracle.Native(build / 'windows/effect_resource.dll') if profile == 'windows' else
        oracle.Machine(profile, build / ('arm' if profile == 'original' else profile) / 'effect_resource.elf')
        for profile in ['original', 'arm', 'windows', 'a64']}
    index = {name: number for number, (name, spec, options) in enumerate(cases())}
    rows = []
    for row in json.loads((stage / 'graph/report.json').read_text())['rows']:
        pattern = [0, 0x5a, 0xa5, 0xff][index[row['name']] % 4]
        offsets = assert_header_padding(row['snapshot']['resourceRawHex'], machines[row['profile']].layout, pattern)
        rows.append({'case': row['name'], 'profile': row['profile'], 'phase': 'construction', 'checkedOffsets': offsets})
    for line in (stage / 'lifecycle/rows.jsonl').read_text().splitlines():
        row = json.loads(line)
        pattern = [0, 0x5a, 0xa5, 0xff][index[row['name']] % 4]
        for phase in ['created', 'released']:
            offsets = assert_header_padding(row[phase]['resourceRawHex'], machines[row['profile']].layout, pattern)
            rows.append({'case': row['name'], 'profile': row['profile'], 'phase': phase, 'checkedOffsets': offsets})
    path = ROOT / 'src/native/wave065-resource/effect_resource.c'
    source = path.read_text()
    marker = 'resource->identifier = identifier;'
    if source.count(marker) != 1:
        raise ValueError('Header-write control no longer has one source location')
    mutant = output / 'effect_resource.c'
    mutant.write_text(source.replace(marker, marker + '\n    resource->unknown_32[0] = 0;'))
    builder.build(output / 'build', ROOT / 'toolscripts/effect_resource065_graph_fixture.c', {path: mutant})
    raw = fixture(emitters=1)
    reference = machines['original']
    reference.prepare(raw)
    reference.construct()
    expected = logical(Observation(reference).snapshot())
    controls = []
    for profile in ['arm', 'windows', 'a64']:
        machine = oracle.Native(output / 'build/windows/effect_resource.dll') if profile == 'windows' else oracle.Machine(profile, output / 'build' / profile / 'effect_resource.elf')
        machine.prepare(raw)
        machine.construct()
        snapshot = Observation(machine).snapshot()
        if not machine.returned or logical(snapshot) != expected:
            raise ValueError('Header-only control did not genuinely return while retaining the earlier logical projection')
        try:
            assert_header_padding(snapshot['resourceRawHex'], machine.layout, 0xa5)
        except ValueError as error:
            controls.append({'profile': profile, 'actualReturnedNormally': True, 'v1LogicalProjectionStillEqual': True,
                'rejectedByHeaderSuccessor': True, 'detail': str(error)})
        else:
            raise ValueError('Returning header-write control was not rejected by successor')
    report = {'status': 'separate-resource-header-observer-successor-qualification',
        'frozenStageReady': common.pin(stage / 'ready.json'), 'retainedHeaderObservations': len(rows), 'rows': rows, 'controls': controls,
        'originalV1InputsOrReportsRewritten': False, 'sourceRuntimeCorrected': False, 'sourceCreditGranted': 0,
        'limits': ['Unknown header bytes and extra header ABI padding are checked here, separately from the immutable v1 logical projection.',
            'No whole-memory, extra constructor-path, factory, GPU or game qualification follows.']}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'retainedHeaderObservations': len(rows), 'returningControls': len(controls), 'sourceCreditGranted': 0}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('stage', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.stage.resolve(), args.output.resolve())
