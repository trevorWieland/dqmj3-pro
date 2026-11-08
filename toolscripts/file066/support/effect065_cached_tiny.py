import argparse
import json
import re
import shutil
from pathlib import Path

import effect065_cached_build as builder
import effect065_cached_oracle as oracle


ROOT = builder.ROOT


def closure(build):
    report = json.loads((build / 'build.json').read_text())
    pending = [(ROOT / row['path']).resolve() for row in report['sources']]
    pending.append(ROOT / 'toolscripts/native_effect065_resource_runtime.c')
    files = set()
    while pending:
        path = pending.pop()
        if path in files:
            continue
        path.relative_to(ROOT)
        files.add(path)
        for name in re.findall(r'^\s*#include\s+"([^"]+)"', path.read_text(), re.M):
            candidate = (path.parent / name).resolve()
            if not candidate.is_file():
                candidate = (ROOT / 'src/native/wave065-resource' / name).resolve()
            if not candidate.is_file():
                raise ValueError('Copied source dependency cannot be resolved')
            pending.append(candidate)
    return sorted(files)


def run(build, observations, output):
    if output.exists():
        raise ValueError('Preserve tiny cached source-only replay')
    copied = output / 'source'
    copied.mkdir(parents=True)
    inputs = []
    for path in closure(build):
        target = copied / path.relative_to(ROOT)
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(path, target)
        if path.read_bytes() != target.read_bytes():
            raise ValueError('Tiny source copy bytes differ')
        inputs.append(builder.common.pin(path))
    recipe = builder.build(output / 'build', source_root=copied)
    original = json.loads((build / 'build.json').read_text())
    artifacts = []
    for profile, row in recipe['artifacts'].items():
        before = original['artifacts'][profile]
        pairs = list(zip(before['objects'], row['objects'], strict=True)) + [(before['linked'], row['linked'])]
        for old, new in pairs:
            if (old['bytes'], old['sha256']) != (new['bytes'], new['sha256']):
                raise ValueError('Copied source changed genuine compiler/linker artifact bytes')
            artifacts.append({'profile': profile, 'name': Path(old['path']).name, 'byteIdentical': True})
    baseline = [oracle.logical(row) for row in json.loads((observations / 'original.json').read_text())]
    for profile in ['arm', 'windows', 'a64']:
        machine = oracle.Native(output / 'build/windows') if profile == 'windows' else oracle.Machine(
            output / ('build/' + profile + '/effect_resource.elf'), profile)
        if hasattr(machine, 'reference') or machine.original:
            raise ValueError('Source-only composition instantiated original executable mapping')
        machine.setup()
        actual = [oracle.observe(machine, machine.execute()) for unused in range(3)]
        if [oracle.logical(row) for row in actual] != baseline:
            raise ValueError('Tiny source-only runtime differs from actual original composed witness')
        (output / (profile + '.json')).write_text(json.dumps(actual, indent=2) + '\n')
    report = {'status': 'tiny-authored-source-copy-artifacts-and-composed-runtime-match', 'inputs': inputs,
        'copiedBytes': sum(row['bytes'] for row in inputs), 'artifacts': artifacts,
        'sourceOnlyProfiles': ['arm', 'windows', 'a64'], 'sourceCreditGranted': 0}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'copiedFiles': len(inputs), 'copiedBytes': report['copiedBytes'],
        'exactArtifacts': len(artifacts), 'sourceCreditGranted': 0}))
    return report


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('observations', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.observations.resolve(), args.output.resolve())
