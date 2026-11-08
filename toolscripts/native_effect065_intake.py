import argparse
import hashlib
import json
from pathlib import Path

import native_effect065_build as common


ROOT = common.ROOT


def checked(row):
    path = Path(row['path'])
    path = path if path.is_absolute() else ROOT / path
    if not path.is_file() or path.stat().st_size != row['bytes'] or hashlib.sha256(path.read_bytes()).hexdigest() != row['sha256']:
        raise ValueError('Effect intake file differs: ' + str(path))
    return path


def nested_pins(value):
    if isinstance(value, dict):
        if set(['path', 'bytes', 'sha256']).issubset(value):
            yield value
        for item in value.values():
            yield from nested_pins(item)
    elif isinstance(value, list):
        for item in value:
            yield from nested_pins(item)


def run(stage, foundation, output):
    if output.exists():
        raise ValueError('Preserve the separate effect intake sidecar')
    output.mkdir(parents=True)
    ready = json.loads((foundation / 'ready.json').read_text())
    manifest = json.loads(checked(ready['manifest']).read_text())
    for row in manifest['files']:
        checked(row)
    for row in json.loads(checked(manifest['stageArtifacts']).read_text()):
        checked(row)
    inputs_path = stage / 'preview-corpus/reference-inputs.json'
    inputs = json.loads(inputs_path.read_text())
    for row in nested_pins(inputs):
        checked(row)
    tiny_root = stage / 'preview-source-only/source-only'
    tiny_report = json.loads((stage / 'preview-source-only/report.json').read_text())
    dependencies = []
    for row in tiny_report['copiedFiles']:
        copied = checked(row)
        original = ROOT / copied.relative_to(tiny_root)
        actual = common.pin(original)
        if actual['bytes'] != row['bytes'] or actual['sha256'] != row['sha256']:
            raise ValueError('Reused effect C/header differs from the consumed tiny source copy')
        dependencies.append(actual)
    comparisons = []
    for profile in ['arm', 'windows', 'a64']:
        left = stage / 'preview-build' / profile
        right = stage / 'preview-source-only/build' / profile
        for path in sorted(left.iterdir()):
            if path.suffix not in ['.o', '.dll', '.elf']:
                continue
            candidate = right / path.name
            if not candidate.is_file():
                raise ValueError('Copied-source derived artifact is missing')
            baseline, copied = common.pin(path), common.pin(candidate)
            same = baseline['bytes'] == copied['bytes'] and baseline['sha256'] == copied['sha256']
            comparisons.append({'profile': profile, 'baseline': baseline, 'copied': copied, 'byteIdentical': same})
    (output / 'source-dependency-closure.json').write_text(json.dumps(dependencies, indent=2) + '\n')
    (output / 'source-copy-artifact-comparison.json').write_text(json.dumps(comparisons, indent=2) + '\n')
    original_inputs = [common.pin(ROOT / path) for path in ['generated/update-content0/code.bin',
        'generated/update-content0/exheader.bin']]
    scope = json.loads((ROOT / 'evidence/lanes/executable-scope/scope.json').read_text())
    measured = next(row['mainImage'] for row in scope['versions'] if row['version'] == 'update-content0')
    if original_inputs[0]['sha256'] != measured['codeSha256'] or original_inputs[1]['sha256'] != measured['exheaderSha256']:
        raise ValueError('Minimal original intake identities differ from the measured module')
    tool_inputs = []
    for name in ['runtime-closure-during-stage-v1.json', 'loaded-runtime-closure-v1.json']:
        path = ROOT / 'work/native-effect065' / name
        value = json.loads(path.read_text())
        for row in value['files']:
            checked(row)
        tool_inputs.append(common.pin(path))
    for name in ['preview-abi-measurement-v1.json', 'preview-static-exclusions-v1.json']:
        tool_inputs.append(common.pin(ROOT / 'work/native-effect065' / name))
    report = {'status': 'minimal-effect-foundation-coordinator-intake', 'foundationReady': common.pin(foundation / 'ready.json'),
        'producer': common.pin(Path(__file__)), 'stage': common.pin(stage / 'ready.json'),
        'replayArgv': ['tools/python/Scripts/python.exe', 'toolscripts/native_effect065_stage.py',
            '--output', 'work/native-effect065/coordinator-replay-v1'],
        'requiredPrivateOriginalInputs': original_inputs, 'originalInputsCopiedByThisSidecar': False,
        'codeExheaderOnlyIntakeEligible': True, 'fullArchivesRomfsAssetsOrToolCopiesRequired': False,
        'referenceEvidence': common.pin(inputs_path), 'sourceDependencyClosure': common.pin(output / 'source-dependency-closure.json'),
        'runtimeAndInvariantEvidence': tool_inputs,
        'sourceCopyComparison': common.pin(output / 'source-copy-artifact-comparison.json'),
        'allComparedSourceCopyArtifactsByteIdentical': all(row['byteIdentical'] for row in comparisons),
        'allFrozenFoundationAndStageArtifactPinsReverified': True,
        'publicCompileTargets': {'src/native/wave065/effect_shader.c': ['arm-none-eabi', 'x86_64-pc-windows-msvc', 'aarch64-linux-gnu'],
            'src/native/wave065/effect_preview.c': ['arm-none-eabi', 'x86_64-pc-windows-msvc', 'aarch64-linux-gnu']},
        'behaviorARMFloatFlags': ['-mcpu=mpcore', '-marm', '-mfpu=vfp', '-mfloat-abi=softfp'],
        'referenceHeapPreconditions': {'signature32': [{'address': 0x89a670, 'value': 0xf531},
            {'address': 0x8bfb54, 'value': 0x531}], 'heapBindingAddress': 0x89a688,
            'readyByteAddress': 0x89a508, 'readyByteValue': 1,
            'description': 'Explicit supplied typed heap and readiness preconditions; no actual SDK/OS heap startup claim.'},
        'immutableSources': 'src/native/wave065', 'mutableSuccessorSourceRoot': 'src/native/wave065-resource',
        'sourceCreditGranted': 0, 'matchingCreditGranted': 0, 'fullEffectGraphQualified': False}
    (output / 'intake.json').write_text(json.dumps(report, indent=2) + '\n')
    files = [Path(__file__), output / 'intake.json', output / 'source-dependency-closure.json',
        output / 'source-copy-artifact-comparison.json']
    result = {'status': report['status'], 'files': [common.pin(path) for path in files], 'sourceCreditGranted': 0}
    (output / 'ready.json').write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps({'ready': common.pin(output / 'ready.json'), 'dependencyFiles': len(dependencies),
        'comparedArtifacts': len(comparisons), 'allArtifactBytesIdentical': report['allComparedSourceCopyArtifactsByteIdentical']}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--stage', default='work/native-effect065/stage-v1')
    parser.add_argument('--foundation', default='evidence/lanes/native-effect065/foundation-v1')
    parser.add_argument('--output', default='evidence/lanes/native-effect065/foundation-intake-v1')
    args = parser.parse_args()
    run(ROOT / args.stage, ROOT / args.foundation, ROOT / args.output)
