import copy
import hashlib
import json
from pathlib import Path
import re
import shutil


ROOT = Path.cwd()


def read(path):
    return json.loads(Path(path).read_text())


def pin(path):
    path = Path(path)
    raw = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'sha256': hashlib.sha256(raw).hexdigest(), 'bytes': len(raw)}


def without_commands(value):
    if isinstance(value, dict):
        return {key: without_commands(item) for key, item in value.items() if key != 'commands'}
    if isinstance(value, list):
        return [without_commands(item) for item in value]
    return value


bundle_path = ROOT / 'evidence/verification/bundle-isolated-02eddfc.json'
bundle = read(bundle_path)
assert bundle['status'] == 'passed' and all(row['returncode'] == 0 for row in bundle['steps'])
fixed = Path(bundle['replayRoot'])
compilation = read(fixed / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
assert compilation['unitCount'] == 157 and len(compilation['results']) == 451
assert all(row['status'] == 'compiled' for row in compilation['results'])
tests = sum(int(re.search(r'Ran (\d+) tests? in', (fixed / row['log']).read_text()).group(1))
            for row in bundle['steps'] if row['name'].endswith('-tests'))
assert tests == 111
checkpoint_path = ROOT / 'evidence/lanes/squirrel-source-wave006/checkpoint-legacy-rename-1001.json'
checkpoint = read(checkpoint_path)
vm_path = ROOT / 'evidence/verification/squirrel006-isolated-6d80f2c.json'
vm = read(vm_path)
assert vm['status'] == 'failed'
assert [(row['name'], row['returncode']) for row in vm['steps']] == [
    ('offline-dependencies', 0), ('fresh-original-intake', 0), ('vm1001-producer', 0), ('public-compilation', 1)]
vm_root = Path(vm['replayRoot'])
for name in checkpoint['ownedPaths']:
    expected = next(row for row in checkpoint['snapshotFiles'] if row['path'] == name)
    for base in (Path(checkpoint['savedCopyRoot']), vm_root, fixed):
        assert hashlib.sha256((base / name).read_bytes()).hexdigest() == expected['sha256'], name
old_path = ROOT / checkpoint['savedPrimaryPacket'] / 'report.json'
assert pin(old_path)['sha256'] == checkpoint['primaryReportSha256']
old = read(old_path)
current = read(vm_root / 'work/squirrel-source-wave006/committed1001/report.json')
assert without_commands(old) == without_commands(current)
assert current['originalReturns'] == current['sourceReturns'] == 1001
assert len(current['negativeControls']) == 31
assert current['platform']['windowsObservation']['cases'] == 41
assert len(current['platform']['androidArm64Objects']) == 40
assert not current['wholeRootComplete'] and current['wholeRootSourceCreditGranted'] == 0
components = []
for name, dirname, returns in [('record', 'committed-records', 288), ('mixed', 'committed-mixed', 12)]:
    public_path = ROOT / ('evidence/lanes/squirrel-reference-prefix012/' + name + '-report.json')
    public = read(public_path)
    old_path = ROOT / public['privateReport']['path']
    assert pin(old_path)['sha256'] == public['privateReport']['sha256']
    old = read(old_path)
    new_path = fixed / ('work/squirrel-reference-prefix012/' + dirname + '/report.json')
    current = read(new_path)
    assert without_commands(old) == without_commands(current), name
    assert current['originalReturns'] == current['sourceReturns'] == current['nativeReturns'] == returns
    assert current['wholeVmCreditGranted'] == current['duplicateCanonicalCreditGranted'] == 0
    if name == 'mixed':
        assert not current['sourceOriginalModuleMapped'] and not current['vtableNormalization']
        assert current['completeOwnedHeapCompared'] and current['originalVtablesPreserved']
    components.append({'name': name, 'publishedPacket': pin(public_path), 'independentPacket': pin(new_path),
        'originalSourceWindowsReturns': returns, 'allArtifactsCasesAndControlsIdenticalExceptCommandPaths': True})
archives = []
for source, target, receipt in [
    ('work/replay-squirrel006-1001.py', 'squirrel006-6d80f2c-replay.py', vm),
    ('work/replay-records-mixed012.py', 'records-mixed012-a0de34b-replay.py', read(ROOT / 'evidence/verification/records-mixed012-isolated-a0de34b.json')),
    ('work/replay-records-mixed012-fixed.py', 'records-mixed012-c2d5055-replay.py', read(ROOT / 'evidence/verification/records-mixed012-isolated-c2d5055.json')),
    ('work/replay-bundle-02eddfc.py', 'bundle-02eddfc-replay.py', bundle)]:
    destination = ROOT / 'evidence/verification/producers' / target
    shutil.copyfile(ROOT / source, destination)
    assert pin(destination)['sha256'] == receipt['replayDriverSha256']
    archives.append(pin(destination))
receipt = {'schemaVersion': 1, 'status': 'qualified-committed-vm-and-record-mixed-integration',
    'completeUnmodifiedVmBatchReplayPassed': False,
    'independentVmRuntimeComponentPassed': True, 'correctedSourceIntegrationReplayPassed': True,
    'vmSourceRevision': vm['sourceRevision'], 'integrationSourceRevision': bundle['sourceRevision'],
    'vmReplay': pin(vm_path), 'fixedIntegrationReplay': pin(bundle_path), 'checkpoint': pin(checkpoint_path),
    'archivedExecutedDrivers': archives, 'vmOriginalAndSourceReturns': 1001, 'vmReturningControlsRejected': 31,
    'vmAllPrimaryFieldsIdenticalExceptCommandPaths': True,
    'vmArmElfIdentical': True, 'vmWindowsExecutableIdentical': True,
    'vmWindowsCases': 41, 'vmAndroidObjectsCompiled': 40,
    'tests': tests, 'publicUnits': 157, 'publicCompilations': 451, 'components': components,
    'failedHeaderAttempt': pin(ROOT / 'evidence/verification/records-mixed012-isolated-a0de34b.json'),
    'failedHostFixturePlatformAttempt': pin(ROOT / 'evidence/verification/records-mixed012-isolated-c2d5055.json'),
    'integrationFixesChangedGameC': False, 'originalCodeByteCreditGranted': 0,
    'wholeVmGameOrAndroidDeviceClaimed': False, 'producer': pin(Path(__file__))}
(ROOT / 'evidence/verification/vm-record-mixed-coordinator-02eddfc.json').write_text(json.dumps(receipt, indent=2) + '\n')
print(json.dumps({'vmReturns': 1001, 'recordReturns': 288, 'mixedReturns': 12, 'tests': tests, 'publicCompilations': 451}))
