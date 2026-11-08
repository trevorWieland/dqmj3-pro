import argparse
import hashlib
import json
import subprocess
import time
from pathlib import Path

import native_effect065_build as shader_build
import native_effect065_shader_cases as shader_cases
import native_effect065_shader_lifetime as shader_lifetime
import native_effect065_shader_negative as shader_negative
import native_effect065_preview_build as preview_build
import native_effect065_preview_cases as preview_cases
import native_effect065_preview_reuse as preview_reuse
import native_effect065_preview_negative as preview_negative
import native_effect065_preview_source_only as source_only


ROOT = shader_build.ROOT


def run(output):
    if output.exists():
        raise ValueError('Preserve the existing effect foundation stage')
    output.mkdir(parents=True)
    started = time.monotonic()
    input_paths = sorted((ROOT / 'src/native/wave065').glob('*.[ch]'))
    input_paths += sorted((ROOT / 'toolscripts').glob('native_effect065*'))
    input_paths += [ROOT / 'tests/test_native_effect065.py']
    before = [shader_build.pin(path) for path in input_paths]
    (output / 'input-manifest.json').write_text(json.dumps(before, indent=2) + '\n')
    try:
        shader_build.build(output / 'shader-build', fixture=True)
        shader_cases.main(output / 'shader-corpus', output / 'shader-build')
        shader_lifetime.main(output / 'shader-lifetime.json', output / 'shader-build')
        shader_negative.main(output / 'shader-negative')
        preview_build.build(output / 'preview-build')
        previous_folders = preview_cases.FOLDER, preview_reuse.FOLDER, preview_negative.FOLDER
        preview_cases.FOLDER = preview_reuse.FOLDER = preview_negative.FOLDER = output / 'preview-build'
        try:
            preview_cases.run(output / 'preview-corpus')
            preview_reuse.run(output / 'preview-reuse', output / 'preview-corpus/reference-instructions.json')
            preview_negative.run(output / 'preview-negative')
            source_only.run(output / 'preview-source-only', output / 'preview-corpus/rows.json')
        finally:
            preview_cases.FOLDER, preview_reuse.FOLDER, preview_negative.FOLDER = previous_folders
        tests = subprocess.run([ROOT / 'tools/python/Scripts/python.exe', '-m', 'unittest', 'discover', '-s', 'tests',
            '-p', 'test_native_effect065.py'], cwd=ROOT, capture_output=True)
        (output / 'tests.log').write_bytes(tests.stdout + tests.stderr)
        if tests.returncode:
            raise ValueError('Effect foundation observer regressions failed')
        after = [shader_build.pin(path) for path in input_paths]
        if before != after:
            raise ValueError('Effect foundation owned inputs changed during the stage')
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'status': 'preserved-effect-foundation-stage-failure',
            'error': str(error), 'elapsedSeconds': time.monotonic() - started, 'sourceCreditGranted': 0}, indent=2) + '\n')
        raise
    reports = [output / name for name in ['shader-corpus/report.json', 'shader-lifetime.json', 'shader-negative/report.json',
        'preview-corpus/report.json', 'preview-reuse/report.json', 'preview-negative/report.json',
        'preview-source-only/report.json', 'preview-corpus/reference-inputs.json', 'tests.log', 'input-manifest.json']]
    packet = {'status': 'bounded-effect-CPU-foundation-review-candidate', 'ownedInputsUnchanged': True,
        'inputs': before, 'reports': [shader_build.pin(path) for path in reports],
        'elapsedSeconds': time.monotonic() - started, 'authoredOriginalBodies': 6, 'originalInstructionBytes': 1144,
        'canonicalEntries': [0x53a688, 0x53e2c4, 0x17db84, 0x2a41c4, 0x5e6a68, 0x5e7318],
        'sourceCreditGranted': 0, 'matchingCreditGranted': 0,
        'fullEffectFamilyQualified': False, 'GPUExecutionQualified': False,
        'limits': ['Only the declared finite CPU selector, release and preview/vector domains are qualified.',
            'Source allocator APIs preserve logical target budgets while adapting native pointer storage.',
            'Real SDK allocation/copy runs only in the original oracle; source maps authored code and typed providers.',
            'Preview allocation failures, invalid vector triples, huge counts and general floating regimes remain unqualified.',
            'File-task/resource replacement, the complete resource constructor/finalizer and device services remain open.']}
    (output / 'packet.json').write_text(json.dumps(packet, indent=2) + '\n')
    ready = {'status': packet['status'], 'packet': shader_build.pin(output / 'packet.json'),
        'sourceCreditGranted': 0, 'fullEffectFamilyQualified': False}
    (output / 'ready.json').write_text(json.dumps(ready, indent=2) + '\n')
    print(json.dumps(ready))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', default='work/native-effect065/stage-v1')
    args = parser.parse_args()
    destination = (ROOT / args.output).resolve()
    destination.relative_to(ROOT / 'work/native-effect065')
    run(destination)
