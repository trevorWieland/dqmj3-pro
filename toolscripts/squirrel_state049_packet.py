import argparse
import importlib.metadata
import json
import pickle
import platform
import subprocess
import sys
import time
from pathlib import Path

import capstone
import unicorn
from native_archive032_gzip_reference import ReferenceImage
from native_wave013_common import ROOT, record, save
from squirrel_state040_inputs import input_records
from squirrel_state040_constructor_packet import graph_record
import squirrel_state049_build as build
from squirrel_state049_cases import run as positives
from squirrel_state049_controls import run as negatives
from squirrel_state049_android import build as android
from squirrel_state049_extents import measure
from squirrel_state049_verify import verify


def nested_pins(value):
    rows = []
    if isinstance(value, dict):
        if all(key in value for key in ['path', 'bytes', 'sha256']):
            rows.append({key: value[key] for key in ['path', 'bytes', 'sha256']})
        else:
            for item in value.values():
                rows.extend(nested_pins(item))
    elif isinstance(value, list):
        for item in value:
            rows.extend(nested_pins(item))
    return rows


def run(work, output):
    work.mkdir(parents=True, exist_ok=True)
    output.mkdir(parents=True, exist_ok=True)
    started = time.monotonic()
    measure()
    extent_path = ROOT / 'evidence/lanes/squirrel-state049/complete-extents.json'
    extents = json.loads(extent_path.read_text())
    reference = ReferenceImage()
    inputs = input_records(build.SOURCES, [Path(__file__), ROOT / 'tests/test_squirrel_state049.py'])
    metadata = [ROOT / 'docs/squirrel-startup049.md', extent_path,
        ROOT / 'evidence/lanes/squirrel-state049/claim.json',
        ROOT / 'evidence/lanes/squirrel-state049/source-registry-snapshot.json',
        ROOT / 'evidence/lanes/squirrel-state040/registration-tables.json',
        ROOT / 'evidence/lanes/squirrel-state040/initialization045-table-bindings.json',
        ROOT / 'evidence/lanes/squirrel-state040/initialization045-v1/coordinator-handoff-manifest.json',
        ROOT / 'evidence/lanes/squirrel-state040/core-abi-v1/frozen-manifest.json']
    inputs.extend(record(path) for path in metadata)
    inputs.extend(nested_pins(reference.pins))
    inputs = list({row['path']: row for row in inputs}.values())
    receipts = []
    arm = build.arm(work / 'arm', receipts)
    dll = build.windows(work / 'windows', receipts)
    high = build.a64(work / 'a64', receipts)
    graphs = work / 'graphs.private.pkl'
    graphs.write_bytes(pickle.dumps((arm, dll, high, receipts)))
    positives(graphs, work / 'cases')
    negatives(work / 'controls', work / 'cases/cold-64-0-arm-state.json')
    component = android(work / 'android-pic', receipts)
    argv = [sys.executable, '-m', 'unittest', 'discover', '-s', 'tests', '-p', 'test_squirrel_state049.py', '-v']
    result = subprocess.run(argv, cwd=ROOT, capture_output=True, timeout=180)
    log = work / 'tests.log'
    log.write_bytes(result.stdout + result.stderr)
    if result.returncode or b'Ran 15 tests' not in result.stdout + result.stderr or b'skipped=' in result.stdout + result.stderr:
        raise ValueError('049 actual Windows tests did not all execute and pass')
    receipts.append({'argv': argv, 'exitCode': result.returncode,
        'privateLog': record(log), 'actualWindowsTestsPassed': 15})
    paths = set(json.loads((work / 'cases/receipt.json').read_text())['originalCodePath'])
    functions = []
    for row in extents['functions']:
        expected = {at for span in row['instructionRanges'] for at in range(span['start'], span['endExclusive'], 4)}
        source = {key: value for key, value in arm['functions'][row['sourceSymbol']].items() if key != 'raw'}
        source['canonicalOriginalAddress'] = row['entry']
        functions.append({**row, 'observedInstructionAddresses': sorted(expected & paths),
            'unobservedInstructionAddresses': sorted(expected - paths), 'source': source})
    for row in inputs:
        if record(ROOT / row['path']) != row:
            raise ValueError('049 source, producer or metadata changed during sealing: ' + row['path'])
    outputs = {}
    for key, source, name in [('caseRows', work / 'cases/rows.json', 'case-rows.json'),
        ('negativeControls', work / 'controls/controls.json', 'returning-controls.json'),
        ('referenceTrace', work / 'cases/receipt.json', 'reference-trace.json')]:
        target = output / name
        target.write_bytes(source.read_bytes())
        outputs[key] = record(target)
    packet = {'schemaVersion': 1, 'status': 'frozen-bounded-root-factory-and-caller-candidates-not-admission',
        'producer': record(Path(__file__)), 'inputs': inputs, **outputs,
        'moduleSha256': extents['moduleSha256'], 'candidateFunctions': 13,
        'candidateInstructionBytes': 2508, 'functions': functions, 'completeExtents': record(extent_path),
        'coreAbiManifest': record(metadata[-1]), 'sharedInitializationManifest': record(metadata[-2]),
        'originalInputIdentity': record(ROOT / 'generated/update-content0/code.bin'),
        'originalExheaderIdentity': record(ROOT / 'generated/update-content0/exheader.bin'),
        'armSourceGraph': graph_record(arm), 'highAarch64SourceGraph': graph_record(high),
        'androidPicComponent': component, 'compilerAndTestReceipts': receipts,
        'tools': {'python': platform.python_version(), 'pythonExecutable': record(Path(sys.executable)),
            'clang': record(ROOT / 'tools/clang-21/clang.exe'), 'lld': record(ROOT / 'tools/clang-21/ld.lld.exe'),
            'unicorn': {'distribution': importlib.metadata.version('unicorn'), 'interface': unicorn.__version__, 'runtime': unicorn.uc_version()},
            'capstone': {'distribution': importlib.metadata.version('capstone'), 'interface': capstone.__version__, 'runtime': capstone.cs_version()}},
        'actualWindowsExecution': True, 'windowsCalleeSavedRegistersDirectlyObserved': False,
        'sourceMapsOriginalImageOrSdk': False, 'referenceExecutesAuthoredAllocatorOrHelper': False,
        'declaredDomain': 'Fresh root factory, successful bounded allocation, measured immutable registration tables, one uncontended thread, and declared caller scenarios.',
        'coldLiveAllocationRoles': 276, 'coldInternedStrings': 92, 'coldTables': 14,
        'coldClosures': 83, 'coldGcMembers': 98, 'unresolvedUninvokedEngineCallbacks': 56,
        'classMetamethodFormattedErrorDependenciesInvoked': False,
        'sdkPrivateHeapRepresentationForcedEqual': False, 'wholeMemoryEquivalenceClaimed': False,
        'universalEquivalenceClaimed': False, 'parentVmInitializationQualified': False,
        'allocationFailureQualified': False, 'arbitraryRepeatedInitializationQualified': False,
        'vmDestructionQualified': False, 'completeInterpreterOrGameQualified': False,
        'androidOsOrDeviceExecuted': False, 'sourceCreditGranted': 0,
        'matchingCreditGranted': 0, 'sdkCreditGranted': 0, 'elapsedSeconds': time.monotonic()-started}
    save(output / 'packet.json', packet)
    save(output / 'verification.json', verify(ROOT, output / 'packet.json'))
    owned = [*ROOT.joinpath('source/squirrel-wave049').glob('*'),
        *ROOT.joinpath('toolscripts').glob('squirrel_state049*.py'),
        ROOT / 'tests/test_squirrel_state049.py', ROOT / 'docs/squirrel-startup049.md',
        *ROOT.joinpath('evidence/lanes/squirrel-state049').glob('*.json'), *output.glob('*.json')]
    save(output / 'frozen-manifest.json', {'schemaVersion': 1,
        'status': 'frozen-worker-candidate-stage-not-admission',
        'files': [record(path) for path in sorted(set(owned)) if path.is_file()], 'producer': record(Path(__file__))})
    print(json.dumps({'packet': record(output / 'packet.json'), 'verification': record(output / 'verification.json'),
        'manifest': record(output / 'frozen-manifest.json'), 'elapsedSeconds': time.monotonic()-started}), flush=True)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--work', type=Path, default=ROOT / 'work/squirrel-state049/sealing-v1')
    parser.add_argument('--output', type=Path, default=ROOT / 'evidence/lanes/squirrel-state049/stage-v1')
    args = parser.parse_args()
    run(args.work.resolve(), args.output.resolve())
