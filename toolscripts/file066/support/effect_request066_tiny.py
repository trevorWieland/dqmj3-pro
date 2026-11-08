import argparse
import json
import shutil
from pathlib import Path

import effect_request066_build as builder
import effect_request066_errors as errors
import effect_request066_cache_session as cached
from effect065_cached_tiny import closure


ROOT = builder.ROOT


def run(build, observations, cache_observations, output):
    if output.exists():
        raise ValueError('Preserve tiny request source-only replay')
    copied = output / 'source'
    copied.mkdir(parents=True)
    inputs = []
    for path in closure(build):
        destination = copied / path.relative_to(ROOT)
        destination.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(path, destination)
        if path.read_bytes() != destination.read_bytes():
            raise ValueError('Copied request dependency bytes differ')
        inputs.append(builder.cached.common.pin(path))
    recipe = builder.build(output / 'build', source_root=copied)
    original = json.loads((build / 'build.json').read_text())
    artifacts = []
    for profile, row in recipe['artifacts'].items():
        old = original['artifacts'][profile]
        for before, after in list(zip(old['objects'], row['objects'], strict=True)) + [(old['linked'], row['linked'])]:
            if (before['bytes'], before['sha256']) != (after['bytes'], after['sha256']):
                raise ValueError('Own-source copy changed actual compiler/linker artifact bytes')
            artifacts.append({'profile': profile, 'name': Path(before['path']).name, 'byteIdentical': True})
    baseline = [row for row in map(json.loads, (observations / 'rows.jsonl').read_text().splitlines()) if row['profile'] == 'original']
    expected_cache = [cached.logical(row) for row in json.loads((cache_observations / 'original.json').read_text())]
    for profile in ['arm', 'windows', 'a64']:
        folder = output / 'build' / profile
        machine = errors.Native(folder) if profile == 'windows' else errors.Machine(profile, folder / 'effect_resource.elf')
        if hasattr(machine, 'reference') or machine.original:
            raise ValueError('Source-only replay instantiated an original image/helper mapping')
        rows = []
        for case, expected in zip(errors.CASES, baseline, strict=True):
            machine.prepare_case(case)
            before = errors.observe(machine, case)
            machine.delete_case()
            after = errors.observe(machine, case, True)
            if {'before': before, 'after': after} != {key: value for key, value in expected.items() if key != 'profile'}:
                raise ValueError('Copied source-only request session differs from actual original observation')
            rows.append({'profile': profile, 'before': before, 'after': after})
        (output / (profile + '-requests.json')).write_text(json.dumps(rows, indent=2) + '\n')
        cache_machine = cached.Native(folder) if profile == 'windows' else cached.Machine(profile, folder / 'effect_resource.elf')
        if hasattr(cache_machine, 'reference') or cache_machine.original:
            raise ValueError('Copied source-only game caller instantiated an original executable mapping')
        cache_machine.prepare_cache()
        actual = [cached.observe(cache_machine, cached.execute(cache_machine), call) for call in range(1, 4)]
        if [cached.logical(row) for row in actual] != expected_cache:
            raise ValueError('Copied source-only game cache session differs from genuine original caller')
        (output / (profile + '-cache.json')).write_text(json.dumps(actual, indent=2) + '\n')
        print(json.dumps({'profile': profile, 'requestSets': len(rows), 'cacheCalls': len(actual)}), flush=True)
    report = {'status': 'tiny-owned-source-copy-exact-artifacts-and-source-only-runtime-match', 'inputs': inputs,
        'copiedBytes': sum(row['bytes'] for row in inputs), 'artifacts': artifacts, 'sourceCreditGranted': 0,
        'originalImagesOrAssetsCopied': False, 'fullRepositoryOrToolsCopied': False}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'copiedFiles': len(inputs), 'copiedBytes': report['copiedBytes'], 'exactArtifacts': len(artifacts)}))
    return report


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('observations', type=Path)
    parser.add_argument('cache_observations', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.observations.resolve(), args.cache_observations.resolve(), args.output.resolve())
