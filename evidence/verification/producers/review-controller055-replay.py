import hashlib
import json
from pathlib import Path
import re

ROOT = Path.cwd().resolve()
REVISION = 'f0b7e73f37393a576f20bdac45822a9fedf4e019'
FRESH = ROOT / 'work/clean-replay/controller055-f0b7e73'
PUBLIC = ROOT / 'evidence/lanes/native-state055/controller-v5-public'
PRIVATE = ROOT / 'work/native-state055/controller-v5'
STAGE = FRESH / 'work/native-state055/controller-v5'


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


if __name__ == '__main__':
    raw_path = ROOT / 'evidence/verification/controller055-isolated-f0b7e73.json'
    raw = read(raw_path)
    assert raw['status'] == 'passed' and raw['sourceRevision'] == REVISION
    assert raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
    assert all(row['returncode'] == 0 for row in raw['steps'])
    worker = read(PUBLIC / 'private-frozen-origin.json')
    assert pin(ROOT / worker['primary']['path']) == worker['primary']
    assert pin(ROOT / worker['copied']['path']) == worker['copied']
    manifest = read(PUBLIC / 'stage-inputs.json')
    assert len(manifest['files']) == 62
    for row in manifest['files']:
        expected = row['publicInput']
        source = ROOT / expected['path']
        staged = FRESH / 'work/native-state055' / row['stagedRelativePath']
        assert pin(source) == expected
        assert source.read_bytes() == (FRESH / expected['path']).read_bytes() == staged.read_bytes()
    original = read(PRIVATE / 'execution.json')
    primary = read(STAGE / 'execution.json')
    copied = read(STAGE / 'replay-v1/execution.json')
    assert original['cases'] == primary['cases'] == copied['cases']
    assert all(row['caseSets'] == 569 and row['observations'] == 2276 for row in [original, primary, copied])
    assert all(row['originalExecutedInstructions'] == 3633 and row['canonicalInstructions'] == 3650
               and row['provedUnreachableInstructions'] == 17 for row in [original, primary, copied])
    artifacts = []
    assert len(original['artifacts']) == len(primary['artifacts']) == len(copied['artifacts']) == 4
    for old, fresh, repeated in zip(original['artifacts'], primary['artifacts'], copied['artifacts']):
        a, b, c = ROOT / old['path'], FRESH / fresh['path'], FRESH / repeated['path']
        assert pin(a) == old and (b.stat().st_size, hashlib.sha256(b.read_bytes()).hexdigest()) == (fresh['bytes'], fresh['sha256'])
        assert a.read_bytes() == b.read_bytes() == c.read_bytes()
        artifacts.append(dict(worker=old, independent=pin(b), repeated=pin(c), byteIdentical=True))
    controls = [read(path) for path in [PRIVATE / 'returning-controls.json', STAGE / 'returning-controls.json',
                                       STAGE / 'replay-v1/returning-controls.json']]
    compared = []
    for group in zip(*(row['controls'] for row in controls)):
        keys = set(group[0]) - {'build'}
        assert all({k: row[k] for k in keys} == {k: group[0][k] for k in keys} for row in group[1:])
        assert all(row['allThreeSourceExecutionsReturned'] for row in group)
        assert [(row['bytes'], row['sha256']) for row in group[0]['build']] == [
            (row['bytes'], row['sha256']) for row in group[1]['build']] == [
            (row['bytes'], row['sha256']) for row in group[2]['build']]
        compared.append(dict(name=group[0]['name'], allReturned=True,
            rawRuntimeRowsIdentical=True, artifactHashesIdentical=True,
            armExpectedPointerWidthIdentity=group[0]['armExpectedPointerWidthIdentity'],
            armFinalArenaPreserved=group[0]['armFinalArenaPreserved']))
    assert len(compared) == 10 and sum(row['armFinalArenaPreserved'] for row in compared) == 4
    assert sum(row['armExpectedPointerWidthIdentity'] for row in compared) == 1
    claim = read(PUBLIC / 'claim.json')
    invariant = read(PUBLIC / 'control-invariants.json')
    canonical = {pc for part in claim['instructionRanges'] for pc in range(part['start'], part['endExclusive'], 4)}
    visited = set().union(*(set(row['original']['visitedPcs']) for row in primary['cases'])) & canonical
    proved = set()
    for kind in ['sortedInsert', 'paddingLoop']:
        span = invariant[kind]['unexecuted']
        proved.update(range(span['start'], span['endExclusive'], 4))
    assert len(canonical) == 3650 and len(visited) == 3633 and len(proved) == 17
    assert not visited & proved and visited | proved == canonical
    pairs = invariant['paddingLoop']['finiteAdmittedPairs']
    assert len(pairs) == 276
    for group, words, aligned in pairs:
        assert 1 <= group <= 12 and 0 <= words <= 4 * (12 - group) and aligned == words & ~3
        assert aligned + 0x80000001 < 2 ** 32
    padding = read(STAGE / 'caller-padding-audit.json')
    assert len(padding['cases']) == 6 and not padding['rawWholeArenaEqualityClaimedForTheseCases']
    assert all(row['differences'] and row['completePacketParametersEqual']
               and not row['executedMemoryRegistersCodeAndLiteralsChanged'] for row in padding['cases'])
    tests = 0
    for step in raw['steps']:
        if step['name'].endswith('-tests'):
            text = (FRESH / step['log']).read_text(encoding='utf-8')
            match = re.search(r'Ran (\d+) tests?', text)
            assert match and text.strip().endswith('OK')
            tests += int(match[1])
    assert tests == 93
    native_tests = (FRESH / 'work/controller055-public/v1/checks/run.log').read_text(encoding='utf-8')
    assert 'Ran 15 tests' in native_tests and native_tests.strip().endswith('OK')
    compiled = read(FRESH / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
    assert compiled['unitCount'] == 493 and len(compiled['results']) == 1407
    assert all(row['status'] == 'compiled' for row in compiled['results'])
    report = read(FRESH / 'build/update-content0/report.json')
    assert int(report['measures']['total_code']) == 7051280 and int(report['measures']['matched_code']) == 5128
    assert int(report['measures']['total_functions']) == 26628
    assert len(read(FRESH / 'build/update-content0/functional.json')['functions']) == 366
    result = dict(schemaVersion=1, status='independently-replayed-bounded-complete-controller055-candidate',
        sourceRevision=REVISION, rawReplay=pin(raw_path), sourceManifest=pin(PUBLIC / 'stage-inputs.json'),
        frozenWorkerReceipt=pin(PUBLIC / 'private-frozen-origin.json'),
        runtimeRowsIdenticalToFrozenWorker=True, runtimeRowsIdenticalInCopiedReplay=True,
        wholeJsonEnvelopeByteIdentityClaimed=False, executedMemoryOrCodeOrReturnedObservationsNormalized=False,
        artifacts=artifacts, byteIdenticalRuntimeArtifacts=4, caseSets=569, observationsPerRun=2276,
        returningControls=compared, sourceControlExecutionsPerRun=30,
        originalInstructionPcs=3650, originalInstructionPcsExecuted=3633,
        invariantProvedUnexecutedPcs=sorted(proved), unexecutedPcsNeverClaimedExecuted=True,
        invariantReview=pin(PUBLIC / 'control-invariants.json'),
        rawPaddingAudit=pin(STAGE / 'caller-padding-audit.json'),
        storageAndFloatingContract=pin(PUBLIC / 'controller-contract.json'),
        runnerTests=93, producerTests=15, publicUnits=493, publicCompilations=1407,
        canonicalInstructionBytes=14600, inlinePoolsExcluded=True,
        originalProductionInitializationOrAllocatorOrCompleteOwnerLayoutQualified=False,
        physicalAndroidGpuOrWholeGameClaimed=False, overallSourceOrExactMatchCreditGranted=0,
        producer=pin(Path(__file__).resolve()))
    (ROOT / 'evidence/verification/controller055-coordinator-f0b7e73.json').write_text(
        json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(passed=True, artifacts=4, runnerTests=93, candidateBytes=14600)))
