import argparse
import hashlib
import json
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[3]
REVISION = '873f53b824f1aa8b336344b664f5407b29792e57'
READY_SHA = 'f1d9ed04e0a459200f4f70457ce512f8721e917a3a68104256e39d446a20b90c'
REPORTS = ['first-packet-proof.json', 'records-proof.json', 'seed-proof.json',
           'metadata-proof.json', 'manager-proof.json', 'lifetime-proof.json', 'controls/report.json']


def read(path):
    return json.loads(path.read_bytes())


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def pin(path):
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=path.stat().st_size, sha256=digest(path))


def review(replay, worker):
    raw_path = ROOT / 'evidence/verification/asset062-sdk063-isolated-873f53b.json'
    raw = read(raw_path)
    if (raw['status'] != 'passed' or raw['sourceRevision'] != REVISION
            or not raw['freshEnvironment'] or raw['sharedGeneratedOrWorkInputs']
            or Path(raw['replayRoot']).resolve() != replay.resolve()):
        raise ValueError('Independent committed-source pipeline identity changed')
    tests = 0
    for step in raw['steps']:
        log = replay / step['log']
        if step['returncode'] != 0 or digest(log) != step['logSha256']:
            raise ValueError('Pipeline phase or retained log changed')
        if step['name'].endswith('-tests'):
            match = re.search(r'Ran (\d+) tests?', log.read_text(encoding='utf-8'))
            if not match:
                raise ValueError('Pipeline test count absent')
            tests += int(match.group(1))
    if tests != 114:
        raise ValueError('Complete pipeline tests changed')
    for packet in raw['packets']:
        path = replay / packet['path']
        if digest(path) != packet['sha256'] or path.stat().st_size != packet['bytes']:
            raise ValueError('Retained pipeline packet changed')
    public = ROOT / 'evidence/lanes/native-asset062/stage-v1'
    origin = public / 'private-frozen-origin.json'
    if digest(origin) != READY_SHA or digest(worker / 'ready.json') != READY_SHA:
        raise ValueError('Frozen provider origin changed')
    frozen = read(origin)
    for row in frozen['ownedFiles'] + frozen['runtimeInputs']:
        path = ROOT / row['path']
        if digest(path) != row['sha256'] or path.stat().st_size != row['bytes']:
            raise ValueError('Frozen provider input changed: ' + row['path'])
    manifest = read(public / 'stage-inputs.json')
    if len(manifest['files']) != 45:
        raise ValueError('Public source roster changed')
    for row in manifest['files']:
        before = row['privateFrozen']
        after = row['publicInput']
        if (not row['byteIdentical'] or before['sha256'] != after['sha256']
                or before['bytes'] != after['bytes'] or pin(ROOT / after['path']) != after):
            raise ValueError('Public source promotion changed')
    lane = replay / 'work/native-asset062'
    verification = read(lane / 'verification.json')
    expected = dict(status='all-six-provider-reports-controls-artifacts-and-tests-replayed-from-own-source',
                    setCount=681, fourProfileObservations=2724, returningControlChecks=39,
                    freshTests=17, copiedTests=17, identicalArtifactPairs=580,
                    allSemanticReportBytesIdentical=True, allObjectLinkedArtifactBytesIdentical=True,
                    wholeResourceCallerClaim=False)
    if any(verification.get(key) != value for key, value in expected.items()):
        raise ValueError('Provider source-copy proof incomplete')
    if verification['artifacts'] != read(worker / 'verification.json')['artifacts']:
        raise ValueError('Coordinator and worker object/linked artifact bytes differ')
    reports = []
    for name in REPORTS:
        path = lane / 'qualification-attempt002' / name
        if path.read_bytes() != (worker / 'qualification-attempt002' / name).read_bytes():
            raise ValueError('Complete coordinator/worker semantic report differs: ' + name)
        reports.append(dict(path=name, bytes=path.stat().st_size, sha256=digest(path)))
    sdk = replay / 'work/native-sdk063'
    sdk_value = read(sdk / 'verification.json')
    if (sdk_value['sets'] != 408 or sdk_value['observations'] != 1632
            or sdk_value['originalThumbInstructions'] != 22 or sdk_value['missingOriginalPcs']
            or not sdk_value['completeReportBytesIdentical'] or sdk_value['identicalArtifactPairs'] != 10
            or sdk_value['returningControlChecks'] != 9 or not all(
                x['normallyReturned'] and x['rejected'] for x in sdk_value['controls'])):
        raise ValueError('Standalone SDK words proof incomplete')
    sdk_private = ROOT / 'work/native-sdk063'
    if ((sdk / 'attempt004/report.json').read_bytes() != (sdk_private / 'attempt004/report.json').read_bytes()
            or sdk_value['artifacts'] != read(sdk_private / 'verification.json')['artifacts']):
        raise ValueError('Fresh SDK original/source observations or compiled artifacts differ')
    guard = read(replay / 'work/native-sdk063-public/v1/public-input-guard.json')
    if (not guard['unchanged'] or len(guard['files']) != 5
            or len(guard['inheritedPrerequisiteInputs']) != 153):
        raise ValueError('SDK owned/inherited dependency guard differs')
    return dict(schemaVersion=1, status='complete-public-provider-replay-reviewed-by-coordinator',
                sourceRevision=REVISION, rawReplay=pin(raw_path), frozenOrigin=pin(origin),
                publicPromotionFiles=45, frozenInputPinsChecked=153, providerCases=681,
                fourProfileObservations=2724, returningControlChecks=39, freshTests=17,
                copiedTests=17, pipelineTests=tests, completeSemanticReports=reports,
                identicalArtifactPairs=580, coordinatorWorkerArtifactMapSha256=hashlib.sha256(
                    json.dumps(verification['artifacts'], sort_keys=True).encode()).hexdigest(),
                wholeResourceCallerClaim=False, sourceCreditGranted=0,
                exactMatchingClaimed=False, functionalAdmissionPending=True,
                standaloneSdk=dict(cases=408, observations=1632, originalThumbInstructions=22,
                    returningControls=9, identicalArtifactPairs=10, fullCallerArenasChecked=True,
                    explicitStatePortableApi=True, volatileReturnEqualityClaimed=False,
                    copiedOwnedFilesAreNotCompleteDependencyClosure=True,
                    inheritedPrerequisiteInputs=153, peerReview=pin(ROOT / 'evidence/verification/sdk063-peer-review.json')))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--replay', type=Path, default=ROOT / 'work/clean-replay/asset062-sdk063-873f53b')
    parser.add_argument('--worker', type=Path, default=ROOT / 'work/native-asset062')
    parser.add_argument('--output', type=Path,
                        default=ROOT / 'evidence/verification/asset062-sdk063-coordinator-873f53b.json')
    args = parser.parse_args()
    result = review(args.replay, args.worker)
    args.output.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(status=result['status'], pipelineTests=result['pipelineTests'],
                          sourceCreditGranted=0)))
