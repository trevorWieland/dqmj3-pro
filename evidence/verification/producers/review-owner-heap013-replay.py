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
    raw = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'sha256': hashlib.sha256(raw).hexdigest(), 'bytes': len(raw)}


def coff_equal(a, b):
    stamp = struct.unpack_from('<I', a, 0x3c)[0] + 8 if a[:2] == b'MZ' else 4
    assert len(a) == len(b)
    offsets = [i for i, (x, y) in enumerate(zip(a, b)) if x != y]
    assert set(offsets) <= set(range(stamp, stamp + 4))
    return {'differenceOffsets': offsets, 'timestampOffset': stamp, 'onlyCoffTimestampVaries': True}


raw_path = ROOT / 'evidence/verification/owner-heap013-isolated-fbed140.json'
raw = read(raw_path)
assert raw['status'] == 'passed' and all(row['returncode'] == 0 for row in raw['steps'])
replay = Path(raw['replayRoot'])
compilation = read(replay / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
assert compilation['unitCount'] == 181 and len(compilation['results']) == 519
assert all(row['status'] == 'compiled' for row in compilation['results'])
primary_path = ROOT / 'evidence/lanes/wave013-native/file/owner/heap/packet.json'
secondary_path = replay / 'evidence/lanes/wave013-native/file/owner/heap/independent-packet.json'
a, b = read(primary_path), read(secondary_path)
for key in ['sources', 'headers', 'producers', 'evidenceInputs', 'compiler', 'linker', 'compilerFlags',
            'mutableSourceObjects', 'readonlySourceObjects', 'dependencies', 'fixtureSpecifications', 'limits', 'runtimeInputs']:
    assert a[key] == b[key], key
for item in [*a['sources'], *a['headers'], *a['producers'], *a['evidenceInputs']]:
    for base in (ROOT, replay):
        assert hashlib.sha256((base / item['path']).read_bytes()).hexdigest() == item['sha256']
assert a['linkedElf']['sha256'] == b['linkedElf']['sha256']
assert a['platform']['android']['sharedLibrary']['sha256'] == b['platform']['android']['sharedLibrary']['sha256']
for x, y in zip(a['functions'], b['functions']):
    for key in ['canonicalIdentity', 'symbol', 'source', 'originalInstructionRanges', 'originalLiteralPoolRanges',
                'originalInstructionBytes', 'callerWitnesses', 'originalInstructions', 'originalInstructionsReached',
                'unhitInstructionAddresses', 'provenExcludedInstructionAddresses', 'candidateInstructionAndPoolBytes',
                'candidateLinkedSpanSha256', 'exactLinkedSpanCandidate']:
        assert x[key] == y[key], key
    assert x['candidateObject']['object']['sha256'] == y['candidateObject']['object']['sha256']
results = []
for base, packet in ((ROOT, a), (replay, b)):
    record = packet['behavior']['privateRawFixtureResults']
    assert hashlib.sha256((base / record['path']).read_bytes()).hexdigest() == record['sha256']
    rows = read(base / record['path'])
    assert len(rows) == 617
    for row in rows:
        assert row['arm']['allBytesAgree'] and row['windows']['allBytesAgree']
        assert row['windows']['returnedNormally'] and row['windows']['immutableMemoryPreserved']
        assert row['arm']['noPrivatePointerMasks'] and row['windows']['noPrivatePointerMasks']
    results.append(rows)
assert results[0] == results[1]
x, y = dict(a['behavior']), dict(b['behavior'])
x.pop('privateRawFixtureResults'); y.pop('privateRawFixtureResults')
assert x == y
assert x['originalInstructionsReached'] == 120 and x['newOriginalInstructions'] == 134
assert len(x['unhitNotProvenExcludedInstructions']) == 14 and x['provenExcludedInstructions'] == 0
assert not x['allReachableInstructionsClaimedCovered'] and not x['privatePointerMasksRequired']
assert a['ABI']['targetArm32'] == b['ABI']['targetArm32']
assert a['ABI']['executedWindows64'] == b['ABI']['executedWindows64']
controls = []
for x, y in zip(a['negativeControls'], b['negativeControls']):
    assert x['name'] == y['name'] and x['source']['sha256'] == y['source']['sha256']
    assert x['specification'] == y['specification'] and x['arm'] == y['arm']
    for z in (x, y):
        w = z['windows']
        assert w['returnedNormally'] and w['immutableMemoryPreserved']
        assert w['actual']['offsets'] or w['actual']['results'] != w['expected']['results']
    assert x['windows']['actual']['offsets'] == y['windows']['actual']['offsets']
    for kind in ['actual', 'expected']:
        assert [v == 0 for v in x['windows'][kind]['results']] == [v == 0 for v in y['windows'][kind]['results']]
    controls.append(x['name'])
assert len(controls) == 9
binaries = {}
for key, container in [('dll', 'platform'), ('object', 'ABI')]:
    entry = 'windowsDll' if key == 'dll' else 'windowsObject'
    binaries[key] = coff_equal((ROOT / a[container][entry]['path']).read_bytes(), (replay / b[container][entry]['path']).read_bytes())
driver = ROOT / 'evidence/verification/producers/owner-heap013-fbed140-replay.py'
shutil.copyfile(ROOT / 'work/replay-owner-heap013.py', driver)
assert pin(driver)['sha256'] == raw['replayDriverSha256']
receipt = {'schemaVersion': 1, 'status': 'qualified-independent-owner-heap-component',
    'completeUnmodifiedBatchReplayPassed': True, 'sourceRevision': raw['sourceRevision'],
    'rawReplay': pin(raw_path), 'executedDriver': pin(driver), 'primaryPacket': pin(primary_path),
    'independentPacket': pin(secondary_path), 'tests': 68, 'publicUnits': 181, 'publicCompilations': 519,
    'qualifiedFixtureCases': 617, 'flagAndReturnCases': 64, 'raw617CaseRowsIdentical': True,
    'allArmObjectsAndLinkedElfIdentical': True, 'androidSharedLibraryIdentical': True,
    'windowsBinaryComparisons': binaries, 'returningControls': controls,
    'controlArmResultsAndWindowsDifferenceOffsetsAndZeroPatternsIdentical': True,
    'processRelativeWindowsControlReturnValuesAndExpectedMemoryHashesNotComparedAcrossRuns': True,
    'originalInstructionsReached': 120, 'originalInstructions': 134, 'unhitUnprovedInstructions': 14,
    'synchronizationDomain': 'Preheld current-thread recursive mutex, depth 1..8; no kernel slow path or contention',
    'nonzeroMarginUnderflowMetadataOnlyNoPayloadConsumptionOrAllocationSafetyClaim': True,
    'matchingSourceCreditGranted': 0, 'wholeGameOrAndroidDeviceExecuted': False,
    'producer': pin(Path(__file__))}
(ROOT / 'evidence/verification/owner-heap013-coordinator-fbed140.json').write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
print(json.dumps({'qualifiedCases': 617, 'tests': 68, 'unhitUnprovedInstructions': 14}))
