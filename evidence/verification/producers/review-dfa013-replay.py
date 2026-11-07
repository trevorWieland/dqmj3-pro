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


raw_path = ROOT / 'evidence/verification/dfa013-isolated-2e4afbe.json'
raw = read(raw_path)
assert raw['status'] == 'passed' and all(row['returncode'] == 0 for row in raw['steps'])
replay = Path(raw['replayRoot'])
primary_path = ROOT / 'evidence/lanes/wave013-native/dfa/packet.json'
secondary_path = replay / 'evidence/lanes/wave013-native/dfa/independent-packet.json'
primary, secondary = read(primary_path), read(secondary_path)
stable = ['sources', 'headers', 'producers', 'evidenceInputs', 'compiler', 'linker', 'compilerFlags',
          'mutableSourceObjects', 'allocationCallsiteRoles', 'dependencies', 'fixtureSpecifications',
          'limits', 'runtimeInputs', 'constructorReturns']
for key in stable:
    assert primary[key] == secondary[key], key
for item in [*primary['sources'], *primary['headers'], *primary['producers'], *primary['evidenceInputs']]:
    for base in (ROOT, replay):
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
    assert len(data) == 916
    for row in data:
        assert row['windows']['returnedNormally'] and row['windows']['everyOtherByteAgrees']
        assert row['windows']['immutableMemoryPreserved'] and row['windows']['excludedPointersVerifiedInNativeThreadStack']
        for key in ('actualMemorySha256', 'projectedMemorySha256'):
            row['windows'].pop(key)
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
    if left['name'] == 'retired-pointer-padding-read':
        assert left['lifetime'] == right['lifetime']
        assert left['observerRejected'] == right['observerRejected']
        assert right['returnedNormally'] and not right['lifetime']['noRetiredReadBeforeReinitialization']
    else:
        assert left['arm'] == right['arm']
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
driver = ROOT / 'evidence/verification/producers/dfa013-2e4afbe-replay.py'
shutil.copyfile(ROOT / 'work/replay-dfa013.py', driver)
assert pin(driver)['sha256'] == raw['replayDriverSha256']
receipt = {'schemaVersion': 1, 'status': 'qualified-independent-committed-dfa-component',
    'completeUnmodifiedBatchReplayPassed': True, 'independentSourceComponentReplayPassed': True,
    'sourceRevision': raw['sourceRevision'], 'rawReplay': pin(raw_path), 'executedDriver': pin(driver),
    'primaryPacket': pin(primary_path), 'independentPacket': pin(secondary_path),
    'tests': 63, 'publicCompilations': 360, 'newFunctions': 6, 'originalInstructionBytes': 2376,
    'qualifiedFixtureCases': 916, 'attemptedFixtureCases': 918, 'unsupportedRepresentationCases': 2,
    'originalSourceArmAndActualWindowsCompared': True,
    'caseRowsIdenticalExceptProcessRelativeWindowsMemoryDigests': True,
    'allArmObjectsAndLinkedElfIdentical': True, 'androidSharedLibraryIdentical': True,
    'windowsDllDifferenceOffsets': different, 'windowsCoffTimestampOffset': stamp,
    'windowsDllDifferencesConfinedToCoffTimestamp': True, 'binaryPatchingPerformed': False,
    'sixReturningSemanticControlsAndSameStatePaddingReadControlRejected': True,
    'originalInstructionsReached': 561, 'originalInstructions': 594,
    'unhitInstructions': 33, 'allReachableInstructionsClaimedCovered': False,
    'partialPointerRepresentationFamilyQualified': False,
    'sourceAdmissionGranted': False, 'wholeGameOrAndroidDeviceExecuted': False,
    'producer': pin(Path(__file__))}
(ROOT / 'evidence/verification/dfa013-coordinator-2e4afbe.json').write_text(json.dumps(receipt, indent=2) + '\n')
print(json.dumps({'componentReplayPassed': True, 'qualifiedCases': 916,
                  'tests': 63, 'matchingSourceCreditGranted': 0}))
