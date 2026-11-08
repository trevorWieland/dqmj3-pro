import argparse
import hashlib
import json
import subprocess
import sys
import time
from pathlib import Path

import effect_request066_build as builder
import effect_request066_oracle as constructor
import effect_request066_session as session
import effect_request066_errors as errors
import effect_request066_dispatch as dispatch
import effect_request066_cache_session as cached
import effect_request066_negative as negative
import effect_request066_tiny as tiny
from native_effect065_resource_stage import runtime_inputs
from native_wave013_file_owner_reference_image import ReferenceImage
from effect065_resource_checkpoint import checked, all_pins, original_data_spans


ROOT = builder.ROOT
COMMON = builder.cached.common
METHODS = [(0x127e6c, 'request_factory.c'), (0x1529b0, 'request_factory.c'), (0x156b34, 'request_factory.c'),
    (0x153cc8, 'request_task.c'), (0x153bfc, 'request_task.c'), (0x163724, 'request_control.c'),
    (0x145aac, 'request_control.c'), (0x145ac0, 'request_control.c'), (0x5f11cc, 'request_control.c'),
    (0x5f1264, 'request_task.c'), (0x5f3350, 'request_provider.c'), (0x5f3584, 'request_provider.c'),
    (0x5f3634, 'request_task.c'), (0x1433d8, 'request_lower.c'), (0x12f208, 'request_lower.c')]


def run(output):
    if output.exists():
        raise ValueError('Preserve guarded request composition checkpoint')
    output.mkdir(parents=True)
    started = time.monotonic()
    paths = tiny.closure(ROOT / 'work/native-effect065/request066/errors-build-v3')
    paths += list((ROOT / 'toolscripts').glob('effect_request066*'))
    paths += [ROOT / 'tests/test_effect_request066.py', ROOT / 'docs/native-effect-request066.md']
    paths += [Path(module.__file__).resolve() for module in list(sys.modules.values())
        if getattr(module, '__file__', None) and str(Path(module.__file__).resolve()).startswith(str(ROOT / 'toolscripts'))]
    before = [COMMON.pin(path) for path in sorted(set(paths))]
    reference = ReferenceImage()
    supplemental = [ROOT / 'work/native-effect065/request-frontier-v1/measurement.json',
        ROOT / 'work/native-effect065/request066/getter-supplements-v1.json']
    references = {'evidence': reference.pins, 'privateOriginals': [COMMON.pin(ROOT / 'generated/update-content0/code.bin'),
        COMMON.pin(ROOT / 'generated/update-content0/exheader.bin')], 'privateInstructionViews': [COMMON.pin(path) for path in supplemental],
        'sdkInstructionExchange': COMMON.pin(ROOT / 'evidence/lanes/squirrel-lookup020/reference-sdk-exchange.json')}
    runtime = runtime_inputs()
    (output / 'input-manifest.json').write_text(json.dumps(before, indent=2) + '\n')
    (output / 'runtime-before.json').write_text(json.dumps(runtime, indent=2) + '\n')
    (output / 'reference-inputs.json').write_text(json.dumps(references, indent=2) + '\n')
    try:
        builder.build(output / 'build')
        constructor.run(output / 'build', output / 'constructors')
        session.run(output / 'build', output / 'sessions')
        errors.run(output / 'build', output / 'errors')
        dispatch.run(output / 'build', output / 'dispatch')
        cached.run(output / 'build', output / 'cache')
        negative.run(output / 'negative')
        tiny.run(output / 'build', output / 'errors', output / 'cache', output / 'source-only')
        tests = subprocess.run([sys.executable, '-m', 'unittest', 'discover', '-s', 'tests', '-p', 'test_effect_request066.py'],
            cwd=ROOT, capture_output=True)
        (output / 'tests.log').write_bytes(tests.stdout + tests.stderr)
        if tests.returncode:
            raise ValueError('Request pointer/layout/fixture regressions failed')
        for row in before + list(all_pins(references)) + runtime['files']:
            checked(row)
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'error': str(error), 'elapsedSeconds': time.monotonic() - started,
            'sourceCreditGranted': 0}, indent=2) + '\n')
        raise
    counts = {}
    report_names = ['constructors', 'sessions', 'errors', 'dispatch', 'cache']
    for name in report_names:
        for row in json.loads((output / name / 'report.json').read_text()).get('originalConditions', []):
            entry = counts.setdefault(row['address'], {'visited': 0, 'satisfied': 0})
            entry['visited'] += row['hookEncounters']
            entry['satisfied'] += row['conditionSatisfied']
    functions = []
    for address, source in METHODS:
        row = reference.functions[address]
        pcs = [pc for span in row['ranges'] for pc in range(span['start'], span['endExclusive'], 4)]
        functions.append({'entry': address, 'mode': row['mode'], 'sourcePath': 'src/native/wave066-request/' + source,
            'instructionBytes': row['textBodyBytes'], 'instructionRanges': reference.dependency(address)['instructionRanges'],
            'dataExtentWitnesses': original_data_spans(reference, row['ranges']),
            'visitedPCs': sum(pc in counts for pc in pcs), 'conditionSatisfiedPCs': sum(counts.get(pc, {}).get('satisfied', 0) > 0 for pc in pcs),
            'unvisitedPCs': [pc for pc in pcs if pc not in counts], 'wholeFunctionQualified': False})
    reports = [output / path for path in ['build/build.json', *[name + '/report.json' for name in report_names],
        'negative/report.json', 'source-only/report.json', 'tests.log', 'runtime-before.json', 'reference-inputs.json']]
    packet = {'status': 'bounded-synchronous-file-task-real-game-cache-miss-composition', 'inputs': before,
        'reports': [COMMON.pin(path) for path in reports], 'functions': functions,
        'moduleSha256': hashlib.sha256(reference.image).hexdigest(), 'privateMethodMetadata': references['privateInstructionViews'],
        'elapsedSeconds': time.monotonic() - started, 'inputsAndReferencePinsUnchanged': True,
        'sourceInputsIncludeWorkingTree': True, 'sourceCreditGranted': 0, 'matchingCreditGranted': 0,
        'limits': ['Path-source selector5 only; other resolver source paths and async worker queue unqualified.',
            'Stateful memory filesystem provider, not Nintendo FS/OS/application-manager startup.',
            'Nonfatal read-error buffer leak preserved; no allocation-safety claim.',
            'ROM/PATCH fatal reporter, populated lower graphs, full cache teardown and native GPU/game remain unqualified.']}
    (output / 'packet.json').write_text(json.dumps(packet, indent=2) + '\n')
    ready = {'status': packet['status'], 'packet': COMMON.pin(output / 'packet.json'), 'sourceCreditGranted': 0}
    (output / 'ready.json').write_text(json.dumps(ready, indent=2) + '\n')
    print(json.dumps({'ready': COMMON.pin(output / 'ready.json'), 'elapsedSeconds': packet['elapsedSeconds']}))
    return ready


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    destination = args.output.resolve()
    destination.relative_to(ROOT / 'work/native-effect065/request066')
    run(destination)
