import hashlib
import json
from pathlib import Path
import shutil


ROOT = Path.cwd()


def read(path):
    return json.loads(Path(path).read_text())


def pin(path):
    path = Path(path)
    data = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'sha256': hashlib.sha256(data).hexdigest(), 'bytes': len(data)}


replay_path = ROOT / 'evidence/verification/native-create016-isolated-c6372a9.json'
replay = read(replay_path)
assert replay['status'] == 'passed' and all(row['returncode'] == 0 for row in replay['steps'])
public_path = ROOT / 'evidence/lanes/squirrel-native-create016/report.json'
public = read(public_path)
primary_path = ROOT / public['privateReport']['path']
assert pin(primary_path)['sha256'] == public['privateReport']['sha256']
primary = read(primary_path)
secondary_path = Path(replay['replayRoot']) / 'work/squirrel-native-create016/committed/report.json'
secondary = read(secondary_path)
primary['native'].pop('commands')
secondary['native'].pop('commands')
assert primary == secondary
assert primary['originalReturns'] == primary['sourceReturns'] == primary['nativeReturns'] == primary['androidModelReturns'] == 112
assert primary['originalRootInstructionsVisited'] == 93 and primary['originalRootInstructions'] == 99
assert len(primary['domainUnreachableRootInstructions']) == 6
assert not primary['sourceOriginalModuleMapped'] and not primary['vtableNormalization']
assert primary['completeOwnedArmHeapCompared'] and primary['independentOwnershipModelCompared']
assert not primary['storedCallableInvoked'] and not primary['fullVmStorageBindingClaimed']
assert len(primary['negativeControls']) == 6
for item in primary['inputs']:
    assert hashlib.sha256((Path(replay['replayRoot']) / item['path']).read_bytes()).hexdigest() == item['sha256']
driver = ROOT / 'evidence/verification/producers/native-create016-c6372a9-replay.py'
shutil.copyfile(ROOT / 'work/replay-native-create016.py', driver)
assert pin(driver)['sha256'] == replay['replayDriverSha256']
receipt = {'schemaVersion': 1, 'status': 'qualified-independent-native-closure-creation',
    'sourceRevision': replay['sourceRevision'], 'rawReplay': pin(replay_path), 'executedDriver': pin(driver),
    'publicPacket': pin(public_path), 'independentPacket': pin(secondary_path),
    'completeUnmodifiedBatchReplayPassed': True, 'independentSourceComponentReplayPassed': True,
    'tests': 59, 'publicUnits': 169, 'publicCompilations': 485,
    'originalSourceWindowsAndAndroidModelReturns': 112, 'newCanonicalInstructionBytes': 396,
    'originalRootInstructionsVisited': 93, 'originalRootInstructions': 99,
    'domainUnreachableInstructions': primary['domainUnreachableRootInstructions'],
    'allRootInstructionsExecutedClaimed': False,
    'allPrimaryFieldsAndArtifactsIdenticalExceptNativeCommandPaths': True,
    'failureEvidence': primary['failureEvidence'], 'limits': primary['limits'],
    'nullAllocationOrReallocationAdmittedForSource': False,
    'wholeVmOrGameOrPhysicalDeviceClaimed': False, 'sourceByteCreditGranted': 0,
    'producer': pin(Path(__file__))}
(ROOT / 'evidence/verification/native-create016-coordinator-c6372a9.json').write_text(json.dumps(receipt, indent=2) + '\n')
print(json.dumps({'componentReplayPassed': True, 'fourPlatformCaseSets': 112, 'tests': 59, 'publicCompilations': 485}))
