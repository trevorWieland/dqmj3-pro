import hashlib
import json
from pathlib import Path
import re

ROOT = Path.cwd().resolve()


def read(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data),
                sha256=hashlib.sha256(data).hexdigest())


raw_path = ROOT / 'evidence/verification/stream056-isolated-9d86b4a.json'
raw = read(raw_path)
assert raw['status'] == 'passed'
assert raw['sourceRevision'] == '9d86b4acd5e2c634be8a80413b3659a06cfb8469'
assert raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
assert all(row['returncode'] == 0 for row in raw['steps'])
fresh = Path(raw['replayRoot']).resolve()
assert fresh == ROOT / 'work/clean-replay/stream056-9d86b4a'
base = ROOT / 'evidence/lanes/native-stream056/stage-v1'
ready = read(base / 'ready.json')
assert pin(base / 'ready.json')['sha256'] == 'd8f6f2790426d221bad007762dd651ff405ab0019200ed751d2e35e5f1681146'
for row in ready['ownedFiles'] + ready['runtimeInputs']:
    assert pin(ROOT / row['path']) == row
    data = (fresh / row['path']).read_bytes()
    assert len(data) == row['bytes'] and hashlib.sha256(data).hexdigest() == row['sha256']
verification = read(base / 'verification.json')
reports = {}
report_pairs = []
for row in verification['reports']:
    primary = ROOT / row['primary']['path']
    assert pin(primary) == row['primary']
    part = 'root-positive' if row['kind'] == 'positive' else 'root-controls'
    independent = fresh / 'work/native-stream056/public-stage-v1' / part / 'report.json'
    assert primary.read_bytes() == independent.read_bytes()
    reports[row['kind']] = read(primary)
    report_pairs.append(dict(kind=row['kind'], primary=pin(primary), independent=pin(independent), byteIdentical=True))
artifacts = []
for row in verification['artifacts']:
    path = row['primary']['path']
    first = ROOT / path
    assert pin(first) == row['primary']
    assert '/final-v2/' in path or '/controls-v2/' in path
    other = path.replace('/final-v2/', '/root-positive/').replace('/controls-v2/', '/root-controls/')
    second = fresh / other
    assert first.read_bytes() == second.read_bytes()
    artifacts.append(dict(primary=row['primary'], independent=pin(second), byteIdentical=True))
assert len(artifacts) == 121
positive, controls = reports['positive'], reports['controls']
assert positive['caseSets'] == len(positive['observations']) == 732
assert positive['fourTargetObservations'] == 2928
for row in positive['observations']:
    assert set(row['targets']) == {'original', 'arm', 'windows', 'a64'}
    for value in row['targets'].values():
        assert value['normalReturn'] and value['fullInitializedArenaMatchedIndependentModel']
assert positive['comparisons']['rawArenasNeverModifiedForComparison']
assert positive['comparisons']['inputTablesHistoryAndAllUntouchedBytesPreserved']
proof_path = base / 'static-unreachable-proof.json'
proof = read(proof_path)
independent_proof = fresh / 'work/native-stream056/public-stage-v1/static-unreachable-proof.json'
assert proof_path.read_bytes() == independent_proof.read_bytes()
assert [(row['instructionPcs'], row['visited']) for row in positive['coverage']] == [(452, 413), (451, 412)]
for coverage, function in zip(positive['coverage'], proof['functions']):
    excluded = {pc for row in function['ranges'] for pc in range(row['start'], row['endExclusive'], 4)}
    assert len(excluded) == function['unreachableInstructionPcs'] == 39
    assert set(coverage['unvisited']) == excluded
assert controls['controls'] == len(controls['results']) == 10 and controls['targetSymbolChecks'] == 60
for row in controls['results']:
    assert len(row['checks']) == 6
    for check in row['checks']:
        assert check['normalReturn'] and check['rejectedByWholeArenaSemanticMismatch']
tests = 0
for step in raw['steps']:
    if step['name'].endswith('-tests'):
        log = (fresh / step['log']).read_text(encoding='utf-8')
        found = re.search(r'Ran (\d+) tests', log)
        assert found and log.strip().endswith('OK')
        tests += int(found[1])
assert tests == 102, tests
compiled = read(fresh / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
assert compiled['unitCount'] == 430 and len(compiled['results']) == 1220
assert all(row['status'] == 'compiled' for row in compiled['results'])
cleanup = read(fresh / 'intake-cleanup.json')
assert cleanup['status'] == 'removed-verified-replay-input-copies'
receipt = dict(schemaVersion=1, status='qualified-independent-stream056-valid-table-backed-memory-domain',
               sourceRevision=raw['sourceRevision'], rawReplay=pin(raw_path), ready=pin(base / 'ready.json'),
               reports=report_pairs, artifacts=artifacts, byteIdenticalArtifactCount=121,
               noBinaryOrReportNormalizationUsed=True, tests=tests, caseSets=732, fourTargetObservations=2928,
               returningControls=10, returningTargetSymbolChecks=60,
               observedOriginalPcs=[413, 412], domainUnreachablePcsPerRoutine=39,
               staticDomainProof=pin(proof_path), publicUnits=430, publicCompilations=1220,
               instructionFootprintBytes=3612, windowsCalleeSavedRegistersDirectlyObserved=False,
               arbitraryMalformedAliasMemorySdkInitializerGameOrUniversalClaimed=False,
               androidOsOrDeviceExecuted=False, sourceAdmissionGranted=False, exactMatchingCreditGranted=0,
               priorRejectedOutputPlan=pin(ROOT / 'evidence/verification/stream056-af19775-output-restart.json'),
               producer=pin(Path(__file__).resolve()))
output = ROOT / 'evidence/verification/stream056-coordinator-9d86b4a.json'
output.write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
print(json.dumps(dict(passed=True, tests=tests, exactArtifacts=121, exactReports=2)))
