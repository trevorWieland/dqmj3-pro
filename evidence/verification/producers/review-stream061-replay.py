import hashlib
import json
from pathlib import Path
import re

ROOT = Path.cwd().resolve()
REVISION = '787ca244fcbb4eb1b5d4f18732f0d65cdd25ce45'
FRESH = ROOT / 'work/clean-replay/stream061-787ca24'
PUBLIC = ROOT / 'evidence/lanes/native-stream061/stage-v1'
PRIMARY = ROOT / 'work/native-stream061/final-attempt002'
INDEPENDENT = FRESH / 'work/native-stream061/final-attempt002'


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


if __name__ == '__main__':
    raw_path = ROOT / 'evidence/verification/stream061-isolated-787ca24.json'
    raw = read(raw_path)
    assert raw['status'] == 'passed' and raw['sourceRevision'] == REVISION
    assert raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
    assert all(row['returncode'] == 0 for row in raw['steps'])
    inputs = []
    for number, count in [('059', 40), ('061', 22)]:
        manifest_path = ROOT / f'evidence/lanes/native-stream{number}/stage-v1/stage-inputs.json'
        manifest = read(manifest_path)
        assert len(manifest['files']) == count
        for row in manifest['files']:
            expected = row['publicInput']
            source = ROOT / expected['path']
            staged = FRESH / f'work/native-stream{number}' / row['stagedRelativePath']
            assert pin(source) == expected
            assert source.read_bytes() == (FRESH / expected['path']).read_bytes() == staged.read_bytes()
        inputs.append(pin(manifest_path))
    verification = read(PUBLIC / 'verification.json')
    reports = []
    for key, relative in [('report', 'report.json'), ('controls', 'controls/report.json')]:
        original, independent = PRIMARY / relative, INDEPENDENT / relative
        assert pin(original) == verification[key] and original.read_bytes() == independent.read_bytes()
        reports.append(dict(primary=verification[key], independent=pin(independent), byteIdentical=True))
    artifacts = []
    assert verification['artifactPairs'] == len(verification['artifacts']) == 371
    for relative, expected in verification['artifacts'].items():
        original, independent = PRIMARY / relative, INDEPENDENT / relative
        assert hashlib.sha256(original.read_bytes()).hexdigest() == expected
        assert original.read_bytes() == independent.read_bytes()
        artifacts.append(dict(primary=pin(original), independent=pin(independent), byteIdentical=True))
    positive = read(INDEPENDENT / 'report.json')
    controls = read(INDEPENDENT / 'controls/report.json')
    assert positive['sets'] == 380 and positive['observations'] == 1520
    assert controls['checks'] == 18 and len(controls['controls']) == 6
    assert all(row['returnedNormally'] and row['rejected']
               for control in controls['controls'] for row in control['observations'])
    scope = read(PUBLIC / 'scope-review.json')
    claim = read(PUBLIC / 'asset-boundary-claim.json')
    functions = {row['address']: row for row in claim['functions']}
    coverage = []
    for row in positive['coverage']:
        function = functions[row['address']]
        expected = {pc for part in function['ranges'] for pc in range(part['start'], part['endExclusive'], 4)}
        visited = set(row['visitedPcs'])
        assert visited <= expected and len(expected) == row['instructionPcs']
        assert sorted(expected - visited) == row['missingPcs']
        coverage.append(dict(address=row['address'], instructionPcs=len(expected),
            executedPcs=len(visited), unexecutedPcs=sorted(expected - visited)))
    assert sum(row['instructionPcs'] for row in coverage) == 69
    assert sum(row['executedPcs'] for row in coverage) == 65
    assert sorted(pc for row in coverage for pc in row['unexecutedPcs']) == scope['unvisitedInstructions']
    tests = 0
    for step in raw['steps']:
        if step['name'].endswith('-tests'):
            text = (FRESH / step['log']).read_text(encoding='utf-8')
            match = re.search(r'Ran (\d+) tests?', text)
            assert match and text.strip().endswith('OK')
            tests += int(match[1])
    assert tests == 90
    for relative in ['work/native-stream061/final-attempt002/tests.log', 'work/native-stream061/copied-tests.log']:
        text = (FRESH / relative).read_text(encoding='utf-8')
        assert 'Ran 10 tests' in text and text.strip().endswith('OK')
    compiled = read(FRESH / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
    assert compiled['unitCount'] == 477 and len(compiled['results']) == 1359
    assert all(row['status'] == 'compiled' for row in compiled['results'])
    report = read(FRESH / 'build/update-content0/report.json')
    assert int(report['measures']['total_code']) == 7051280
    assert int(report['measures']['matched_code']) == 5128 and int(report['measures']['total_functions']) == 26628
    assert len(read(FRESH / 'build/update-content0/functional.json')['functions']) == 362
    result = dict(schemaVersion=1, status='independently-replayed-bounded-asset061-candidate',
        sourceRevision=REVISION, rawReplay=pin(raw_path), publicSourceManifests=inputs,
        reports=reports, artifacts=artifacts, byteIdenticalArtifacts=371,
        coordinatorAppliedBinaryOrReportNormalization=False, caseSets=380, originalSourceObservations=1520,
        returningControls=6, sourceControlExecutions=18, runnerTests=90, freshProducerTests=10, copiedProducerTests=10,
        publicUnits=477, publicCompilations=1359, canonicalInstructionBytes=276, coverage=coverage,
        fourUnexecutedPcsNeverClaimedExecuted=True, conditionalDomainReview=pin(PUBLIC / 'scope-review.json'),
        laterCallerAnnotationErratum=pin(ROOT / 'docs/native-stream061-public-replay.md'),
        discoveredFunctionEntries=26628, initializedTextGrossBytes=7051280,
        physicalAndroidWholeCallerOrWholeGameClaimed=False, overallSourceOrExactMatchCreditGranted=0,
        producer=pin(Path(__file__).resolve()))
    (ROOT / 'evidence/verification/stream061-coordinator-787ca24.json').write_text(
        json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(passed=True, artifacts=371, runnerTests=90, candidateBytes=276)))
