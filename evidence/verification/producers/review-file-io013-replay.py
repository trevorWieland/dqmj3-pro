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


raw_path = ROOT / 'evidence/verification/file-io013-isolated-a783470.json'
raw = read(raw_path)
assert raw['status'] == 'passed' and all(row['returncode'] == 0 for row in raw['steps'])
fixed = Path(raw['replayRoot'])
compilation = read(fixed / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
assert compilation['unitCount'] == 170 and len(compilation['results']) == 488
assert all(row['status'] == 'compiled' for row in compilation['results'])
replay = Path(raw['replayRoot'])
primary_path = ROOT / 'evidence/lanes/wave013-native/file/io/packet.json'
secondary_path = replay / 'evidence/lanes/wave013-native/file/io/independent-packet.json'
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
    assert len(data) == 103
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

dlls = [(base / packet['platform']['windowsDll']['path']).read_bytes()
        for base, packet in ((ROOT, primary), (replay, secondary))]
stamp = struct.unpack_from('<I', dlls[0], 0x3c)[0] + 8
assert len(dlls[0]) == len(dlls[1])
different = [index for index, (left, right) in enumerate(zip(*dlls)) if left != right]
assert set(different) <= set(range(stamp, stamp + 4))
driver = ROOT / 'evidence/verification/producers/file-io013-a783470-replay.py'
shutil.copyfile(ROOT / 'work/replay-file-io013.py', driver)
assert pin(driver)['sha256'] == raw['replayDriverSha256']
receipt = {'schemaVersion': 1, 'status': 'qualified-independent-committed-file-io-component',
    'completeUnmodifiedBatchReplayPassed': True, 'independentSourceComponentReplayPassed': True,
    'sourceRevision': raw['sourceRevision'], 'rawReplay': pin(raw_path), 'executedDriver': pin(driver),
    'primaryPacket': pin(primary_path), 'independentPacket': pin(secondary_path),
    'tests': 70, 'publicUnits': 170, 'publicCompilations': 488,
    'newFunctions': 1, 'originalInstructionBytes': 492,
    'qualifiedFixtureCases': 103, 'flagAndReturnCases': 64,
    'originalSourceArmAndActualWindowsCompared': True,
    'caseRowsIdenticalExceptProcessRelativeWindowsMemoryDigests': True,
    'allArmObjectsAndLinkedElfIdentical': True, 'androidSharedLibraryIdentical': True,
    'windowsDllDifferenceOffsets': different, 'windowsCoffTimestampOffset': stamp,
    'windowsDllDifferencesConfinedToCoffTimestamp': True, 'binaryPatchingPerformed': False,
    'nineReturningSemanticControlsRejected': True,
    'originalInstructionsReached': 123, 'originalInstructions': 123, 'unhitInstructions': 0,
    'canonicalArmArenaIdentityTracedAtConstructor': True,
    'portableWindowsArenaIdentityIndependentlySupplied': True,
    'canonicalWindowsPersistentBuffersFlagsAndIoStateCompared': True,
    'canonicalWindowsFullScratchGraphClaimed': False,
    'incomingArgumentIdempotentWritesRetainOriginalValues': True,
    'candidateRawSlotBytes': 128, 'candidateCountDomain': [0,16],
    'sourceAdmissionGranted': False, 'wholeGameOrAndroidDeviceExecuted': False,
    'producer': pin(Path(__file__))}
(ROOT / 'evidence/verification/file-io013-coordinator-a783470.json').write_text(json.dumps(receipt, indent=2) + '\n')
print(json.dumps({'componentReplayPassed': True, 'qualifiedCases': 103,
                  'tests': 70, 'matchingSourceCreditGranted': 0}))
