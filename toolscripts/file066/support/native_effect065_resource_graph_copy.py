import json
import shutil
from pathlib import Path

import native_effect065_resource_graph_build as builder
import native_effect065_resource_graph_oracle as oracle
from native_effect065_resource_graph_observation import Observation, logical
from native_effect065_resource_graph_cases import cases, fixture


def run(base, corpus, output):
    root = builder.ROOT
    output = Path(output).resolve()
    if output.exists():
        raise ValueError('Preserve source-only resource graph copy')
    tiny = output / 'source-only'
    tiny.mkdir(parents=True)
    sources = [builder.SOURCE_ROOT / (name + '.c') for name in builder.NAMES]
    sources += list(builder.SOURCE_ROOT.glob('*.h'))
    sources += [root / 'src/native/wave065/effect_shader.c', root / 'src/native/wave065/effect_shader.h',
        root / 'src/native/wave065/effect_services.h', root / 'toolscripts/native_effect065_resource_graph_fixture.c',
        root / 'toolscripts/native_effect065_resource_runtime.c']
    copied = []
    for source in sources:
        destination = tiny / source.relative_to(root)
        destination.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(source, destination)
        copied.append(builder.common.pin(source))
    if any(path.suffix not in ['.c', '.h'] for path in tiny.rglob('*') if path.is_file()):
        raise ValueError('Source-only resource copy contains something other than authored C/H')
    original_report = json.loads((base / 'build.json').read_text())
    builder.ROOT = tiny
    builder.SOURCE_ROOT = tiny / 'src/native/wave065-resource'
    builder.common.ROOT = tiny
    build = tiny / 'build'
    artifact_comparison = []
    try:
        builder.build(build, tiny / 'toolscripts/native_effect065_resource_graph_fixture.c')
        produced = json.loads((build / 'build.json').read_text())
        for profile in ['arm', 'windows', 'a64']:
            before = original_report['artifacts'][profile]
            after = produced['artifacts'][profile]
            for old, new in zip(before['objects'] + [before['linked']], after['objects'] + [after['linked']], strict=True):
                if old['bytes'] != new['bytes'] or old['sha256'] != new['sha256']:
                    raise ValueError('Source-only graph artifact differs: ' + new['path'])
                artifact_comparison.append({'profile': profile, 'before': old, 'after': new, 'byteIdentical': True})
        machines = {profile: oracle.Native(build / 'windows/effect_resource.dll') if profile == 'windows' else
            oracle.Machine(profile, build / profile / 'effect_resource.elf') for profile in ['arm', 'windows', 'a64']}
        expected = {row['name']: logical(row['snapshot']) for row in json.loads(corpus.read_text())['rows'] if row['profile'] == 'original'}
        rows = []
        for index, (name, specification, options) in enumerate(cases()):
            raw = fixture(**specification)
            for profile, machine in machines.items():
                machine.prepare(raw, [0, 0x5a, 0xa5, 0xff][index % 4], **options)
                machine.construct(options=index % 2 == 1)
                actual = logical(Observation(machine).snapshot())
                if actual != expected[name]:
                    raise ValueError('Source-only graph differs from frozen original caller observation: ' + name + '/' + profile)
                rows.append({'name': name, 'profile': profile, 'matchesOriginalCallerObservation': True})
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'error': str(error), 'copied': copied,
            'artifactComparison': artifact_comparison, 'sourceCreditGranted': 0}, indent=2) + '\n')
        raise
    finally:
        builder.ROOT = root
        builder.SOURCE_ROOT = root / 'src/native/wave065-resource'
        builder.common.ROOT = root
    report = {'status': 'tiny-authored-source-only-resource-build-and-caller-replay', 'copied': copied,
        'sourceBytes': sum(row['bytes'] for row in copied), 'artifactComparison': artifact_comparison, 'rows': rows,
        'sourceCreditGranted': 0, 'originalImageMappedBySourceExecution': False,
        'limits': ['Existing pinned compiler and Python verification runtime reused outside the tiny C/H copy.',
            'Fresh-file CPU storage0 qualification only; no GPU or whole-game execution claim.']}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'files': len(copied), 'sourceBytes': report['sourceBytes'], 'identicalArtifacts': len(artifact_comparison),
        'sourceTargetObservations': len(rows), 'sourceCreditGranted': 0}))


if __name__ == '__main__':
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('corpus', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.corpus.resolve(), args.output)
