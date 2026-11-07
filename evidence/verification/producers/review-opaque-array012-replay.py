import hashlib
import json
from pathlib import Path
import shutil


ROOT = Path.cwd()


def read(path):
    return json.loads(Path(path).read_text())


def pin(path):
    path = Path(path)
    raw = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'sha256': hashlib.sha256(raw).hexdigest(), 'bytes': len(raw)}


raw_path = ROOT / 'evidence/verification/opaque-array012-isolated-a700ca6.json'
raw = read(raw_path)
assert raw['status'] == 'passed' and all(row['returncode'] == 0 for row in raw['steps'])
replay = Path(raw['replayRoot'])
compilation = read(replay / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
assert compilation['unitCount'] == 179 and len(compilation['results']) == 513
assert all(row['status'] == 'compiled' for row in compilation['results'])
summary_path = ROOT / 'evidence/lanes/squirrel-reference-prefix012/array-report.json'
summary = read(summary_path)
primary_path = ROOT / summary['privateReport']['path']
assert hashlib.sha256(primary_path.read_bytes()).hexdigest() == summary['privateReport']['sha256']
secondary_path = replay / 'work/squirrel-reference-prefix012/committed-array/report.json'
a, b = read(primary_path), read(secondary_path)
a['native'].pop('commands'); b['native'].pop('commands')
assert a == b
assert a['originalReturns'] == a['sourceReturns'] == a['nativeReturns'] == a['androidModelReturns'] == 120
assert a['completeOwnedArmHeapCompared'] and a['independentOwnershipModelCompared']
assert not a['sourceOriginalModuleMapped'] and not a['vtableNormalization']
assert not a['legacyVtableReinterpretation'] and not a['fullTransitiveGraphClosed']
assert a['newCanonicalInstructionBytesClaimed'] == a['duplicateCanonicalCreditGranted'] == a['wholeVmCreditGranted'] == 0
ready_path = ROOT / 'evidence/lanes/squirrel-reference-prefix012/array-ready.json'
assert pin(ready_path)['sha256'] == '69693ebbab8f59e4886de43a737e7d7002a3899a57e5814fef43b33a2feb5ebc'
ready = read(ready_path)
for item in ready['ownedFiles'] + ready['pins']:
    assert pin(ROOT / item['path']) == item
assert ready['testsPassed'] == 8 and ready['returningControls'] == 3 and ready['sameFinalHeapControls'] == 2
driver = ROOT / 'evidence/verification/producers/opaque-array012-a700ca6-replay.py'
shutil.copyfile(ROOT / 'work/replay-opaque-array012.py', driver)
assert pin(driver)['sha256'] == raw['replayDriverSha256']
receipt = {'schemaVersion': 1, 'status': 'qualified-opaque-array-prefix-integration',
    'completeUnmodifiedBatchReplayPassed': True, 'sourceRevision': raw['sourceRevision'],
    'rawReplay': pin(raw_path), 'executedDriver': pin(driver), 'primarySummary': pin(summary_path),
    'privatePrimaryPacket': pin(primary_path), 'privateIndependentPacket': pin(secondary_path),
    'allPacketFieldsIncluding120CasesAndWindowsExecutableIdenticalExceptNativeCommands': True,
    'tests': 58, 'publicUnits': 179, 'publicCompilations': 513, 'comparisonSets': 120,
    'actualWindowsAndAarch64ModelExecuted': True, 'returningControls': 3, 'sameFinalHeapControls': 2,
    'fullTransitiveGraphClosed': False, 'newPhysicalInstructionCredit': 0,
    'matchingSourceCreditGranted': 0, 'wholeVmGameOrDeviceClaimed': False,
    'producer': pin(Path(__file__))}
(ROOT / 'evidence/verification/opaque-array012-coordinator-a700ca6.json').write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
print(json.dumps({'comparisonSets': 120, 'tests': 58, 'newPhysicalCredit': 0}))
