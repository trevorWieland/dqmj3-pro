import hashlib
import json
from pathlib import Path
import re

ROOT = Path.cwd().resolve()
REVISION = 'ac27445edb7d39324fae0c3c482806ad80e785e8'
FRESH = ROOT / 'work/clean-replay/stream059-ac27445'
BASE = FRESH / 'work/native-stream059-public/v1'
PUBLIC = ROOT / 'evidence/lanes/native-stream059/stage-v1'


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def independent_path(path):
    positive = 'work/native-stream059/final-attempt001/'
    controls = 'work/native-stream059/controls-final/'
    if path.startswith(positive): return BASE / 'positive' / path[len(positive):]
    if path.startswith(controls): return BASE / 'controls' / path[len(controls):]
    raise ValueError('Unreviewed059 artifact prefix: ' + path)


if __name__ == '__main__':
    raw_path = ROOT / 'evidence/verification/stream059-isolated-ac27445.json'
    raw = read(raw_path)
    assert raw['status'] == 'passed' and raw['sourceRevision'] == REVISION
    assert raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
    assert all(row['returncode'] == 0 for row in raw['steps'])
    manifest = read(PUBLIC / 'stage-inputs.json')
    assert len(manifest['files']) == 40
    for row in manifest['files']:
        expected = row['publicInput']
        assert pin(ROOT / expected['path']) == expected
        public = (FRESH / expected['path']).read_bytes()
        staged = (BASE / 'lane' / row['stagedRelativePath']).read_bytes()
        assert public == staged == (ROOT / expected['path']).read_bytes()
    verification = read(PUBLIC / 'verification.json')
    reports = []
    for row, phase in zip(verification['reports'], ['positive', 'controls', 'tail']):
        primary = ROOT / row['primary']['path']
        independent = BASE / phase / 'report.json'
        assert pin(primary) == row['primary'] and primary.read_bytes() == independent.read_bytes()
        reports.append(dict(phase=phase, primary=row['primary'], independent=pin(independent), byteIdentical=True))
    artifacts = []
    assert verification['strictArtifactPairs'] == len(verification['artifacts']) == 583
    for row in verification['artifacts']:
        primary = ROOT / row['primary']['path']
        independent = independent_path(row['primary']['path'])
        assert pin(primary) == row['primary'] and primary.read_bytes() == independent.read_bytes()
        artifacts.append(dict(primary=row['primary'], independent=pin(independent), byteIdentical=True))
    positive, controls, tail = [read(BASE / phase / 'report.json') for phase in ['positive', 'controls', 'tail']]
    expected_cohorts = dict(flatPrograms=577, streamingPrograms=24, borrowedHeaderPrograms=130,
        windowPrograms=18, customAllocatorPrograms=5, terminalPrograms=5, checksumCases=183, tableCases=204)
    assert {key: len(positive[key]) for key in expected_cohorts} == expected_cohorts
    assert len(positive['predecessors']['canonicalCases']) == 273
    assert len(positive['predecessors']['callerPrograms']) == 13
    assert not positive['predecessors']['unsupportedSyntheticFixtures']
    assert controls['compiledControls'] == 10 and controls['returningChecks'] == len(controls['checks']) == 30
    assert all(row['normalReturn'] and row['rejected'] for row in controls['checks'])
    aggregate = {row['address']: set(row['visitedPcs']) for row in positive['coverage']}
    for row in tail['coverage']: aggregate[row['address']].update(row['visitedPcs'])
    claim = read(PUBLIC / 'claim.json')
    coverage = []
    for function in claim['functions']:
        expected = {pc for part in function['ranges'] for pc in range(part['start'], part['endExclusive'], 4)}
        visited = aggregate[function['address']]
        assert visited <= expected
        coverage.append(dict(address=function['address'], instructionBytes=function['instructionBytes'],
            instructionPcs=len(expected), visitedPcs=len(visited), unvisitedPcs=sorted(expected - visited)))
    domain_path = PUBLIC / 'closed-domain-review.json'
    domain = read(domain_path)
    root = next(row for row in coverage if row['address'] == 0x7321e4)
    assert root['instructionPcs'] == 1489 and root['visitedPcs'] == 1479
    assert root['unvisitedPcs'] == domain['unvisitedPcs'] and not domain['universalMachineStateProof']
    assert sum(row['visitedPcs'] for row in coverage if row['address'] != 0x7321e4) == 665
    tests = 0
    for step in raw['steps']:
        if step['name'].endswith('-tests'):
            text = (FRESH / step['log']).read_text(encoding='utf-8')
            match = re.search(r'Ran (\d+) tests?', text)
            assert match and text.strip().endswith('OK')
            tests += int(match[1])
    assert tests == 103
    native_tests = (BASE / 'tests/tests.log').read_text(encoding='utf-8')
    assert 'Ran 10 tests' in native_tests and native_tests.strip().endswith('OK')
    compiled = read(FRESH / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
    assert compiled['unitCount'] == 475 and len(compiled['results']) == 1353
    assert all(row['status'] == 'compiled' for row in compiled['results'])
    result = dict(schemaVersion=1, status='independently-replayed-bounded-inflater059-candidate',
        sourceRevision=REVISION, rawReplay=pin(raw_path), publicSourceManifest=pin(PUBLIC / 'stage-inputs.json'),
        reports=reports, artifacts=artifacts, byteIdenticalArtifacts=583,
        coordinatorAppliedBinaryOrReportNormalization=False, cohorts=expected_cohorts,
        predecessorCanonicalCases=273, predecessorFixedGzipPrograms=13,
        returningControls=10, sourceControlExecutions=30, runnerTests=103, producerNativeTests=10,
        publicUnits=475, publicCompilations=1353, canonicalInstructionBytes=8616, inlineDataExcludedBytes=644,
        coverage=coverage, tenUnvisitedPcsNeverClaimedExecuted=True, conditionalDomainReview=pin(domain_path),
        presetDictionarySyncProductionAllocatorOrWholeLibraryApiQualified=False,
        authoredExtraWorkspaceArguments=2, identicalOriginalFunctionAbiClaimed=False,
        physicalAndroidOrWholeGameClaimed=False, overallSourceOrExactMatchCreditGranted=0,
        producer=pin(Path(__file__).resolve()))
    (ROOT / 'evidence/verification/stream059-coordinator-ac27445.json').write_text(
        json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(passed=True, artifacts=583, runnerTests=103, nativeTests=10, candidateBytes=8616)))
