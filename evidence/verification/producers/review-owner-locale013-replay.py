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


raw_path = ROOT / 'evidence/verification/owner-locale013-isolated-0926b16.json'
raw = read(raw_path)
assert raw['status'] == 'passed' and all(row['returncode'] == 0 for row in raw['steps'])
replay = Path(raw['replayRoot'])
compilation = read(replay / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
assert compilation['unitCount'] == 182 and len(compilation['results']) == 522
assert all(row['status'] == 'compiled' for row in compilation['results'])
primary_path = ROOT / 'evidence/lanes/wave013-native/file/owner/locale/packet.json'
secondary_path = replay / 'evidence/lanes/wave013-native/file/owner/locale/independent-packet.json'
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
    assert len(rows) == 7345
    for row in rows:
        assert row['arm']['allBytesAgree'] and row['windows']['allBytesAgree']
        assert row['windows']['returnedNormally'] and row['windows']['immutableMemoryPreserved']
        assert row['arm']['fullFixtureBytesCompared'] == row['windows']['fullFixtureBytesCompared'] == 8192
    results.append(rows)
assert results[0] == results[1]
x, y = dict(a['behavior']), dict(b['behavior'])
x.pop('privateRawFixtureResults'); y.pop('privateRawFixtureResults')
assert x == y
assert x['originalInstructionsReached'] == 191 and x['newOriginalInstructions'] == 192
assert len(x['unhitNotProvenExcludedInstructions']) == 1 and x['provenExcludedInstructions'] == 0
assert not x['allReachableInstructionsClaimedCovered'] and not x['privatePointerMasksRequired']
assert a['ABI']['targetArm32'] == b['ABI']['targetArm32']
assert a['ABI']['executedWindows64'] == b['ABI']['executedWindows64']
controls = []
for x, y in zip(a['negativeControls'], b['negativeControls']):
    assert x['name'] == y['name'] and x['source']['sha256'] == y['source']['sha256']
    assert x['specification'] == y['specification'] and x['arm'] == y['arm']
    assert x['windows'] == y['windows']
    for z in (x, y):
        w = z['windows']
        assert w['returnedNormally'] and w['immutableMemoryPreserved']
        assert w['differentOffsets'] or w['actualReturn'] != w['expectedReturn']
    controls.append(x['name'])
assert len(controls) == 9
binaries = {}
for key, container in [('dll', 'platform'), ('object', 'ABI')]:
    entry = 'windowsDll' if key == 'dll' else 'windowsObject'
    binaries[key] = coff_equal((ROOT / a[container][entry]['path']).read_bytes(), (replay / b[container][entry]['path']).read_bytes())
driver = ROOT / 'evidence/verification/producers/owner-locale013-0926b16-replay.py'
shutil.copyfile(ROOT / 'work/replay-owner-locale013.py', driver)
assert pin(driver)['sha256'] == raw['replayDriverSha256']
receipt = {'schemaVersion': 1, 'status': 'qualified-independent-owner-locale-component',
    'completeUnmodifiedBatchReplayPassed': True, 'sourceRevision': raw['sourceRevision'],
    'rawReplay': pin(raw_path), 'executedDriver': pin(driver), 'primaryPacket': pin(primary_path),
    'independentPacket': pin(secondary_path), 'tests': 73, 'publicUnits': 182, 'publicCompilations': 522,
    'qualifiedFixtureCases': 7345, 'flagAndReturnCases': 64, 'raw7345CaseRowsIdentical': True,
    'allArmObjectsAndLinkedElfIdentical': True, 'androidSharedLibraryIdentical': True,
    'windowsBinaryComparisons': binaries, 'returningControls': controls,
    'allControlArmAndWindowsResultsIdentical': True,
    'originalInstructionsReached': 191, 'originalInstructions': 192, 'unhitUnprovedInstructions': 1,
    'serviceDomain': 'Successful CFG replies; stable and synthetic changing regions separately labeled',
    'countWriteOrderObservedAtEveryActualOriginalSvc': True,
    'fourIndexedDispatchTablesBytesExcludedFromCodeCredit': 128,
    'newPhysicalInventoryCredit': 0,
    'matchingSourceCreditGranted': 0, 'wholeGameOrAndroidDeviceExecuted': False,
    'producer': pin(Path(__file__))}
(ROOT / 'evidence/verification/owner-locale013-coordinator-0926b16.json').write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
print(json.dumps({'qualifiedCases': 7345, 'tests': 73, 'unhitUnprovedInstructions': 1}))
