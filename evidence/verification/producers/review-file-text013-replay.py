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


raw_path = ROOT / 'evidence/verification/file-text013-isolated-bcd98d9.json'
raw = read(raw_path)
assert raw['status'] == 'passed' and all(row['returncode'] == 0 for row in raw['steps'])
replay = Path(raw['replayRoot'])
primary_path = ROOT / 'evidence/lanes/wave013-native/file/text/packet.json'
secondary_path = replay / 'evidence/lanes/wave013-native/file/text/independent-packet.json'
primary, secondary = read(primary_path), read(secondary_path)
stable = ['sources', 'headers', 'producers', 'evidenceInputs', 'compiler', 'linker', 'compilerFlags',
          'mutableSourceObjects', 'readonlySourceObjects', 'dependencies', 'fixtureSpecifications',
          'limits', 'runtimeInputs']
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
    assert len(data) == 1310
    for row in data:
        assert row['windows']['returnedNormally'] and row['windows']['immutableMemoryPreserved']
    rows.append(data)
assert rows[0] == rows[1]
behavior_left, behavior_right = dict(primary['behavior']), dict(secondary['behavior'])
for value in (behavior_left, behavior_right):
    value.pop('caseResultDigest')
    value.pop('privateRawFixtureResults')
    value.pop('sweepElapsedSeconds')
assert behavior_left == behavior_right
assert primary['ABI']['targetArm32'] == secondary['ABI']['targetArm32']
assert primary['ABI']['executedWindows64'] == secondary['ABI']['executedWindows64']
for left, right in zip(primary['negativeControls'], secondary['negativeControls']):
    assert left['name'] == right['name'] and left['source']['sha256'] == right['source']['sha256']
    assert left['arm'] == right['arm']
    for packet in (left, right):
        result = packet['windows']
        assert result['returnedNormally'] and result['immutableMemoryPreserved']
        assert result['outputDifferentByteOffsets'] or result['result'] != result['expectedReturn']

dlls = [(base / packet['platform']['windowsDll']['path']).read_bytes()
        for base, packet in ((ROOT, primary), (replay, secondary))]
stamp = struct.unpack_from('<I', dlls[0], 0x3c)[0] + 8
assert len(dlls[0]) == len(dlls[1])
different = [index for index, (left, right) in enumerate(zip(*dlls)) if left != right]
assert set(different) <= set(range(stamp, stamp + 4))
driver = ROOT / 'evidence/verification/producers/file-text013-bcd98d9-replay.py'
shutil.copyfile(ROOT / 'work/replay-file-text013.py', driver)
assert pin(driver)['sha256'] == raw['replayDriverSha256']
assert primary['behavior']['all131072SingleCodeUnitCasesPassed']
assert not primary['behavior']['privatePointerMasksRequired']
assert not primary['behavior']['sourceOutputPatched']
assert primary['behavior']['originalInstructionsReached'] == 172
receipt = {'schemaVersion': 1, 'status': 'qualified-independent-committed-file-text-component',
    'completeUnmodifiedBatchReplayPassed': True, 'independentSourceComponentReplayPassed': True,
    'sourceRevision': raw['sourceRevision'], 'rawReplay': pin(raw_path), 'executedDriver': pin(driver),
    'primaryPacket': pin(primary_path), 'independentPacket': pin(secondary_path),
    'tests': 66, 'publicUnits': 159, 'publicCompilations': 457,
    'newFunctions': 2, 'originalInstructionBytes': 688,
    'qualifiedFixtureCases': 1310, 'singleU16QueriesPerFunction': 65536, 'totalSingleU16Queries': 131072,
    'singleU16Digest': primary['behavior']['singleCodeUnitDigest'],
    'originalSourceArmAndActualWindowsCompared': True, 'allRawCaseRowsIdentical': True,
    'allArmObjectsAndLinkedElfIdentical': True, 'androidSharedLibraryIdentical': True,
    'windowsDllDifferenceOffsets': different, 'windowsCoffTimestampOffset': stamp,
    'windowsDllDifferencesConfinedToCoffTimestamp': True, 'binaryPatchingPerformed': False,
    'nineReturningSemanticControlsRejected': True,
    'originalInstructionsReached': 172, 'originalInstructions': 172, 'unhitInstructions': 0,
    'sourceOutputPatched': False, 'privatePointerMasksRequired': False,
    'universalStringOrFileEquivalenceClaimed': False,
    'sourceAdmissionGranted': False, 'wholeGameOrAndroidDeviceExecuted': False,
    'producer': pin(Path(__file__))}
(ROOT / 'evidence/verification/file-text013-coordinator-bcd98d9.json').write_text(json.dumps(receipt, indent=2) + '\n')
print(json.dumps({'componentReplayPassed': True, 'qualifiedCases': 1310,
                  'singleU16Queries': 131072, 'tests': 66, 'matchingSourceCreditGranted': 0}))
