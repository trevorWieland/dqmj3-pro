from pathlib import Path
import hashlib
import json
import re

ROOT = Path.cwd().resolve()


def read(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data),
                sha256=hashlib.sha256(data).hexdigest())


raw_path = ROOT / 'evidence/verification/stream058-isolated-63bceb3.json'
raw = read(raw_path)
assert raw['status'] == 'passed' and raw['sourceRevision'] == '63bceb30b5d4a783750c61815cb1cf5657289699'
assert raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
assert all(row['returncode'] == 0 for row in raw['steps'])
fresh = Path(raw['replayRoot']).resolve()
assert fresh == ROOT / 'work/clean-replay/stream058-63bceb3'
base = ROOT / 'evidence/lanes/native-stream058/stage-v1'
ready_path = base / 'ready.json'
assert pin(ready_path)['sha256'] == 'ecee2e9dc33619711579a9154a7118e936fad1db522e7862210df073533e0822'
ready = read(ready_path)
for row in ready['ownedFiles'] + ready['runtimeInputs']:
    assert pin(ROOT / row['path']) == row
    data = (fresh / row['path']).read_bytes()
    assert len(data) == row['bytes'] and hashlib.sha256(data).hexdigest() == row['sha256']
verification = read(base / 'verification.json')
reports, pairs = {}, []
for row in verification['reports']:
    primary = ROOT / row['primary']['path']
    assert pin(primary) == row['primary']
    part = 'root-positive' if row['name'] == 'canonical-and-caller' else 'root-controls'
    independent = fresh / 'work/native-stream058/public-stage-v1' / part / 'report.json'
    assert primary.read_bytes() == independent.read_bytes()
    reports[row['name']] = read(primary)
    pairs.append(dict(name=row['name'], primary=pin(primary), independent=pin(independent), byteIdentical=True))
artifacts = []
for row in verification['artifacts']:
    name = row['primary']['path']
    assert '/final/' in name or '/controls-final/' in name
    other = name.replace('/final/', '/root-positive/').replace('/controls-final/', '/root-controls/')
    assert pin(ROOT / name) == row['primary']
    assert (ROOT / name).read_bytes() == (fresh / other).read_bytes()
    artifacts.append(dict(primary=row['primary'], independent=pin(fresh / other), byteIdentical=True))
assert len(artifacts) == 253
positive, controls = reports['canonical-and-caller'], reports['controls']
assert positive['canonicalCases'] == len(positive['observations']) == 273
assert positive['canonicalObservations'] == 1092
for row in positive['observations']:
    assert set(row['observations']) == {'original', 'arm', 'windows', 'a64'}
    for value in row['observations'].values():
        assert value['fullArenaExpected'] and value['normalReturn']
assert positive['realInputPrograms'] == len(positive['programs']) == 13
assert positive['realInputObservations'] == 52 and not positive['unsupportedFixturePrograms']
assert positive['canonicalInstructionBytes'] == 636 and not positive['wholeOuterInflaterRecovered']
proof_path = base / 'static-proof.json'
proof = read(proof_path)
assert proof_path.read_bytes() == (fresh / 'work/native-stream058/public-stage-v1/static-proof.json').read_bytes()
missing = [pc for row in positive['coverage'] for pc in row['missing']]
assert missing == list(range(0x733d0c, 0x733d1c, 4))
assert sum(row['visitedPcs'] for row in positive['coverage']) == 155
assert controls['controls'] == len(controls['results']) == 10 and controls['normalReturningChecks'] == 30
assert all(len(row['checks']) == 3 and all(v['normalReturn'] and v['rejectedBySemanticMismatch']
           for v in row['checks']) for row in controls['results'])
tests = 0
for step in raw['steps']:
    if step['name'].endswith('-tests'):
        log = (fresh / step['log']).read_text(encoding='utf-8')
        found = re.search(r'Ran (\d+) tests', log)
        assert found and log.strip().endswith('OK')
        tests += int(found[1])
assert tests == 111, tests
compiled = read(fresh / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
assert compiled['unitCount'] == 440 and len(compiled['results']) == 1250
assert all(row['status'] == 'compiled' for row in compiled['results'])
receipt = dict(schemaVersion=1, status='qualified-independent-stream058-initialization-reset-end-family',
    sourceRevision=raw['sourceRevision'], rawReplay=pin(raw_path), ready=pin(ready_path),
    reports=pairs, artifacts=artifacts, byteIdenticalArtifactCount=253,
    coordinatorAppliedBinaryOrReportNormalization=False, tests=tests,
    canonicalCaseSets=273, canonicalFourTargetObservations=1092,
    fixedGzipPrograms=13, fixedGzipFourTargetObservations=52,
    returningControls=10, returningSourceExecutions=30,
    visitedOriginalPcs=155, freshZeroWindowExcludedPcs=4, staticDomainProof=pin(proof_path),
    candidateFunctions=6, instructionFootprintBytes=636, publicUnits=440, publicCompilations=1250,
    wholeOuterInflaterGameDeviceOrUniversalEquivalenceClaimed=False,
    windowsCalleeSavedRegistersDirectlyObserved=False, sourceAdmissionGranted=False,
    exactMatchingCreditGranted=0, producer=pin(Path(__file__).resolve()))
(ROOT / 'evidence/verification/stream058-coordinator-63bceb3.json').write_text(
    json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
print(json.dumps(dict(passed=True, tests=tests, exactArtifacts=253, canonicalCases=273, realPrograms=13)))
