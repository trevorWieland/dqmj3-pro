import json
from pathlib import Path

import native_effect065_resource_graph_build as builder
import native_effect065_resource_graph_oracle as oracle
from native_effect065_resource_graph_observation import Observation, logical
from native_effect065_resource_graph_cases import fixture


def mutations():
    yield ('set-name-offset', 'effect_resource_sets.c',
        'set->name = resource->names + effect_read_u32_065(record + 8);',
        'set->name = resource->names + effect_read_u32_065(record + 8) + 1;', {'emitters': 1}, False)
    yield ('material-device-word-units', 'effect_resource_sets.c',
        'effect_device_word065(emitter->textures[0].memory) >> 3',
        'effect_device_word065(emitter->textures[0].memory) >> 2', {'emitters': 1, 'texture': 'borrowed'}, False)
    yield ('native-set-budget', 'effect_resource_sets.c',
        'EFFECT_RESOURCE_SETS065, count * 60, physical, 128',
        'EFFECT_RESOURCE_SETS065, count * 60, count * 60 + physical * 0, 128', {'emitters': 1}, False)
    yield ('decoded-texture-release-route', 'effect_resource_release.c',
        'if (converted_bytes == 0)', 'if (converted_bytes != 0)', {'emitters': 1, 'texture': 'decoded'}, True)


def run(base, output):
    output = Path(output).resolve()
    if output.exists():
        raise ValueError('Preserve resource returning-control attempt')
    output.mkdir(parents=True)
    rows = []
    try:
        for name, filename, before, after, specification, release in mutations():
            directory = output / name
            directory.mkdir()
            path = builder.SOURCE_ROOT / filename
            source = path.read_text()
            if source.count(before) != 1:
                raise ValueError('Returning control is not a unique ordinary C source mutation')
            changed = directory / filename
            changed.write_text(source.replace(before, after))
            build = directory / 'build'
            builder.build(build, builder.ROOT / 'toolscripts/native_effect065_resource_graph_fixture.c', {path: changed})
            raw = fixture(**specification)
            reference = oracle.Machine('original', base / 'arm/effect_resource.elf')
            reference.prepare(raw)
            reference.construct()
            if release:
                reference.release()
            expected = logical(Observation(reference).snapshot(released=release))
            for profile in ['arm', 'windows', 'a64']:
                machine = (oracle.Native(build / 'windows/effect_resource.dll') if profile == 'windows' else
                    oracle.Machine(profile, build / profile / 'effect_resource.elf'))
                machine.prepare(raw)
                machine.construct()
                if release:
                    machine.release()
                if not machine.returned:
                    raise ValueError('Wrong source did not genuinely return before semantic observation')
                detail = None
                try:
                    actual = logical(Observation(machine).snapshot(released=release))
                    if actual != expected:
                        detail = 'complete observed caller graph, payload, allocation or ordered-service state differs'
                except ValueError as error:
                    detail = str(error)
                if detail is None:
                    raise ValueError('Returning wrong-source control was not rejected')
                rows.append({'control': name, 'profile': profile, 'actualReturnedNormally': True,
                    'rejectedBySemanticObserver': True, 'detail': detail})
            print(json.dumps({'control': name, 'checks': len(rows)}), flush=True)
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'error': str(error), 'rows': rows, 'sourceCreditGranted': 0}, indent=2) + '\n')
        raise
    report = {'status': 'returning-wrong-source-resource-graph-controls', 'checks': len(rows), 'rows': rows, 'sourceCreditGranted': 0}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'checks': len(rows), 'sourceCreditGranted': 0}))


if __name__ == '__main__':
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output)
