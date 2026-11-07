import collections
import json
import subprocess
import sys

import native_wave014_android as a64
from native_wave014_build import ROOT, SOURCE, WORK, android, arm, pin, save, sha, windows
from native_wave014_controls import run as controls
from native_wave014_conversion import run as conversion
from native_wave014_oracle import Arm, Windows, compare, original
from native_wave014_vectors import cases


OUT = ROOT / 'evidence/lanes/wave014'


def check(oracle, candidate, vectors, label, filename):
    result = compare(oracle, candidate, vectors, label)
    save(WORK / filename, result)
    if not result['passed']:
        raise ValueError('Original/source math differs: ' + json.dumps(result))
    return result


def seal():
    patterns = ['toolscripts/native_wave014*.py', 'tests/test_native_wave014*.py']
    files = sorted([*SOURCE.rglob('*'), *(path for pattern in patterns for path in ROOT.glob(pattern)),
        *(path for path in OUT.glob('*.json') if path.name != 'ready.json')])
    files = [path for path in files if path.is_file()]
    for path in files:
        if path.suffix in ['.c', '.h', '.inc', '.py'] and len(path.read_text().splitlines()) > 500:
            raise ValueError('Authored source exceeds line limit: ' + str(path))
    receipt = {'schemaVersion': 1, 'status': 'frozen-complete-uv-projection-math-functional-candidate',
        'files': [pin(path) for path in files], 'measuredCompleteInstructionBytes': 1856,
        'requestedExactBytes': 0, 'coordinatorAdmissionRequired': True,
        'sourceOnlyClosure': True, 'derivedNumericDataBytesNotCodeCredit': 4096,
        'originalPaneConstructionDrawAndGpuUploadRecovered': False, 'originalPayloadsPublished': False,
        'androidDeviceExecuted': False, 'aynThorExecuted': False, 'nativeGameBuild': False}
    save(OUT / 'ready.json', receipt)
    return sha((OUT / 'ready.json').read_bytes())


def main():
    vectors = cases()
    blocks, executable, symbols, receipt = arm(WORK / 'build')
    dll = windows(WORK / 'windows')
    apk_math = android(WORK / 'android')
    oracle = original()
    source = Arm(blocks, symbols, executable)
    arm_result = check(oracle, source, vectors, 'source ARM closed math family', 'arm-comparisons.json')
    save(WORK / 'arm-coverage.json', {'originalInstructionAddresses': sorted(oracle.coverage),
        'sourceInstructionAddresses': sorted(source.coverage)})
    native_result = check(original(), Windows(dll), vectors, 'real Windows closed math family', 'windows-comparisons.json')
    sections, a64_symbols, a64_receipt = a64.link()
    android_result = check(original(), a64.Android(sections, a64_symbols), vectors,
        'actual Android math objects Cortex-A72 model', 'android-comparisons.json')
    save(WORK / 'android-model-build.json', a64_receipt)
    negative, sanitized = controls(), conversion()
    claim = json.loads((OUT / 'claim.json').read_text())
    coverage = []
    for row in claim['functions']:
        span = row['instructionRange']
        expected = set(range(span['start'], span['endExclusive'], 4))
        coverage.append({'entry': row['address'], 'role': row['role'], 'instructionBytes': span['bytes'],
            'instructionAddresses': len(expected), 'visitedOriginalInstructionAddresses': len(expected & oracle.coverage),
            'missingOriginalInstructionAddresses': sorted(expected - oracle.coverage)})
    if any(row['missingOriginalInstructionAddresses'] for row in coverage):
        raise ValueError('Final cases no longer cover the full measured bodies')
    digests = [row['outputSha256'] for row in [arm_result, native_result, android_result]]
    if len(set(digests)) != 1:
        raise ValueError('Architecture result digests differ')
    summary = {'schemaVersion': 1, 'status': 'complete-family-source-only-original-qualified',
        'syntheticFixtureCount': len(vectors), 'caseCounts': dict(collections.Counter(row['operation'] for row in vectors)),
        'fixtureSha256': sha(json.dumps(vectors, sort_keys=True, allow_nan=False).encode()),
        'allThreeOutputSha256': digests[0], 'allBytewiseEqual': True, 'allCallsReturnedNormally': True,
        'boundedWritesAndCalleeSavedState': True, 'allOriginalInstructionCoverage': coverage,
        'originalLargeAngleWrapperEntered': 0x1a23a8 in oracle.coverage,
        'originalGenericModulusCoreEntered': 0x1a2990 in oracle.coverage,
        'genericModulusHelperCodeCredit': 0, 'armBuild': receipt, 'windowsDll': pin(dll),
        'androidBuild': apk_math, 'androidModel': a64_receipt,
        'androidCpuModel': 'Cortex-A72', 'androidOperatingSystemExecuted': False, 'androidDeviceExecuted': False,
        'sourceArmOrAndroidMapsOriginalImage': False, 'sourceArmOrAndroidCallsOriginalCode': False,
        'originalNonfiniteErrorPathsClaimed': False, 'originalPayloadsPublished': False,
        'syntheticMathResultsPublishedOnlyAsDigests': True, 'requestedExactBytes': 0,
        'coordinatorAdmissionRequired': True}
    save(OUT / 'execution.json', summary)
    save(OUT / 'semantic-controls.json', negative)
    save(OUT / 'conversion-sanitizer.json', sanitized)
    tests = subprocess.run([sys.executable, '-m', 'unittest', 'discover', '-s', 'tests', '-p', 'test_native_wave014.py', '-v'],
        cwd=ROOT, capture_output=True, text=True, timeout=120)
    save(OUT / 'tests.json', {'exitCode': tests.returncode, 'stdout': tests.stdout, 'stderr': tests.stderr})
    if tests.returncode:
        raise ValueError('Projection contract tests failed')
    print(json.dumps({'status': summary['status'], 'casesPerArchitecture': len(vectors),
        'completeOriginalInstructionBytes': 1856, 'allOriginalInstructionsVisited': True,
        'returningSemanticControlsRejected': 5, 'readySha256': seal()}))


if __name__ == '__main__':
    main()
