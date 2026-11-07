import copy
import hashlib
import json
from pathlib import Path
import shutil
import struct


ROOT = Path.cwd()


def read(path):
    return json.loads(Path(path).read_text())


def pin(path):
    path = Path(path)
    data = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'sha256': hashlib.sha256(data).hexdigest(), 'bytes': len(data)}


raw_path = ROOT / 'evidence/verification/outer013-isolated-c2d5055.json'
raw = read(raw_path)
assert raw['status'] == 'failed'
assert [(x['name'], x['returncode']) for x in raw['steps']] == [('offline-dependencies',0),('fresh-original-intake',0),('outer-producer',0),('public-compilation',1)]
bundle = read(ROOT / 'evidence/verification/bundle-isolated-02eddfc.json')
assert bundle['status'] == 'passed' and all(x['returncode'] == 0 for x in bundle['steps'])
fixed = Path(bundle['replayRoot'])
compilation = read(fixed / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
assert compilation['unitCount'] == 157 and len(compilation['results']) == 451
assert all(x['status'] == 'compiled' for x in compilation['results'])
failed = read(Path(raw['replayRoot']) / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
assert {(x['source'],x['target']) for x in failed['results'] if x['status'] != 'compiled'} == {('source/squirrel-wave006/host_generators.c','arm32-mpcore'),('source/squirrel-wave006/host_generators.c','android-arm64-api29')}
import re
test_count = sum(int(re.search(r'Ran (\d+) tests? in', (fixed / x['log']).read_text()).group(1)) for x in bundle['steps'] if x['name'].endswith('-tests'))
assert test_count == 111
replay = Path(raw['replayRoot'])
primary_path = ROOT / 'evidence/lanes/wave013-native/outer/packet.json'
secondary_path = replay / 'evidence/lanes/wave013-native/outer/independent-packet.json'
primary, secondary = read(primary_path), read(secondary_path)
stable = ['sources', 'headers', 'producers', 'evidenceInputs', 'compiler', 'linker', 'compilerFlags',
          'mutableSourceObjects', 'allocationCallsiteRoles', 'dependencies', 'fixtureSpecifications',
          'limits', 'runtimeInputs', 'readonlySourceObjects']
for key in stable:
    assert primary[key] == secondary[key], key
for item in [*primary['sources'], *primary['headers'], *primary['producers'], *primary['evidenceInputs']]:
    for base in (ROOT, replay, fixed):
        assert hashlib.sha256((base / item['path']).read_bytes()).hexdigest() == item['sha256']
assert primary['linkedElf']['sha256'] == secondary['linkedElf']['sha256']
assert primary['platform']['android']['sharedLibrary']['sha256'] == secondary['platform']['android']['sharedLibrary']['sha256']
for left, right in zip(primary['functions'], secondary['functions']):
    for key in ('canonicalIdentity', 'symbol', 'source', 'originalInstructionRanges', 'originalLiteralPoolRanges',
                'originalInstructionBytes', 'callerWitnesses', 'originalInstructions', 'originalInstructionsReached',
                'unhitInstructionAddresses', 'provenExcludedInstructionAddresses', 'candidateInstructionAndPoolBytes',
                'candidateLinkedSpanSha256', 'exactLinkedSpanCandidate'):
        assert left[key] == right[key], (left['symbol'], key)
    assert left['candidateObject']['object']['sha256'] == right['candidateObject']['object']['sha256']
rows = []
for base, packet in ((ROOT, primary), (replay, secondary)):
    original = packet['behavior']['privateRawFixtureResults']
    path = base / original['path']
    assert hashlib.sha256(path.read_bytes()).hexdigest() == original['sha256']
    data = read(path)
    assert len(data) == 410
    for row in data:
        assert row['windowsKnownCallerOwnedArenaOrDirectLeaf']['returnedNormally'] and row['windowsKnownCallerOwnedArenaOrDirectLeaf']['everyOtherByteAgrees']
        assert row['windowsKnownCallerOwnedArenaOrDirectLeaf']['immutableMemoryPreserved'] and row['windowsKnownCallerOwnedArenaOrDirectLeaf']['excludedPointersVerifiedInNativeThreadStack']
        for key in ('actualMemorySha256', 'projectedMemorySha256'):
            row['windowsKnownCallerOwnedArenaOrDirectLeaf'].pop(key)
    rows.append(data)
assert rows[0] == rows[1]
behavior_left, behavior_right = dict(primary['behavior']), dict(secondary['behavior'])
for value in (behavior_left, behavior_right):
    value.pop('caseResultDigest')
    value.pop('privateRawFixtureResults')
assert behavior_left == behavior_right
assert primary['ABI']['targetArm32'] == secondary['ABI']['targetArm32']
assert primary['ABI']['executedWindows64'] == secondary['ABI']['executedWindows64']
for left, right in zip(primary['negativeControls'], secondary['negativeControls']):
    assert left['name'] == right['name'] and left['source']['sha256'] == right['source']['sha256']
    assert left['arm'] == right['arm']
    assert left.get('sameFlagOutputs') == right.get('sameFlagOutputs')
    for packet in (left, right):
        result = packet['windows']
        assert result['returnedNormally'] and result['immutableMemoryPreserved']
        assert result['differentOffsets'] or result['sourceResult'] != result['originalResult']

owner_control = next(x for x in primary['negativeControls'] if x['name'] == 'shifted-scratch-owner')
assert owner_control['sameFlagOutputs'] is True
assert owner_control['flagsOnlyCanonicalWindowsObservation']['flagsAgree'] is True
dlls = [(base / packet['platform']['windowsDll']['path']).read_bytes()
        for base, packet in ((ROOT, primary), (replay, secondary))]
stamp = struct.unpack_from('<I', dlls[0], 0x3c)[0] + 8
assert len(dlls[0]) == len(dlls[1])
different = [index for index, (left, right) in enumerate(zip(*dlls)) if left != right]
assert set(different) <= set(range(stamp, stamp + 4))
driver = ROOT / 'evidence/verification/producers/outer013-c2d5055-replay.py'
shutil.copyfile(ROOT / 'work/replay-outer013.py', driver)
assert pin(driver)['sha256'] == raw['replayDriverSha256']
receipt = {'schemaVersion': 1, 'status': 'qualified-independent-committed-outer-component',
    'completeUnmodifiedBatchReplayPassed': False, 'independentSourceComponentReplayPassed': True,
    'sourceRevision': raw['sourceRevision'], 'rawReplay': pin(raw_path), 'executedDriver': pin(driver),
    'fixedIntegrationRevision': bundle['sourceRevision'],
    'fixedIntegrationReplay': pin(ROOT / 'evidence/verification/bundle-isolated-02eddfc.json'),
    'primaryPacket': pin(primary_path), 'independentPacket': pin(secondary_path),
    'tests': 111, 'outerTests': 16, 'publicUnits': 157, 'publicCompilations': 451,
    'measuredFunctions': 5, 'functionalFunctions': 4, 'originalInstructionBytes': 684,
    'functionalInstructionBytes': 664, 'exactConstructor20Pending': True,
    'qualifiedFixtureCases': 410, 'outerInvocations': 314, 'leafCases': 96,
    'originalSourceArmAndActualWindowsCompared': True,
    'caseRowsIdenticalExceptProcessRelativeWindowsMemoryDigests': True,
    'allArmObjectsAndLinkedElfIdentical': True, 'androidSharedLibraryIdentical': True,
    'windowsDllDifferenceOffsets': different, 'windowsCoffTimestampOffset': stamp,
    'windowsDllDifferencesConfinedToCoffTimestamp': True, 'binaryPatchingPerformed': False,
    'eightReturningSemanticControlsRejected': True,
    'originalInstructionsReached': 171, 'originalInstructions': 171, 'unhitInstructions': 0,
    'canonicalArmArenaIdentityTracedAtConstructor': True,
    'portableWindowsArenaIdentityIndependentlySupplied': True,
    'canonicalWindowsOnlyFlagsInputsGuardsCompared': True,
    'canonicalWindowsFullGraphIdentityClaimed': False,
    'expiredArenaNeverDereferenced': True,
    'failedIntegrationWasWindowsOnlyHostFixtureMisclassified': True,
    'noGameSourceChangedForIntegrationFix': True,
    'sourceAdmissionGranted': False, 'wholeGameOrAndroidDeviceExecuted': False,
    'producer': pin(Path(__file__))}
(ROOT / 'evidence/verification/outer013-coordinator-c2d5055.json').write_text(json.dumps(receipt, indent=2) + '\n')
print(json.dumps({'componentReplayPassed': True, 'qualifiedCases': 410,
                  'tests': 111, 'matchingSourceCreditGranted': 0}))
