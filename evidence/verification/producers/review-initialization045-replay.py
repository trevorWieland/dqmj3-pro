import hashlib
import json
from pathlib import Path
import re
import sys

ROOT = Path.cwd().resolve()
sys.path.insert(0, str(ROOT / 'toolscripts'))
from replay_packet_compare import PacketComparison

PRIMARY = 'evidence/lanes/squirrel-state040/initialization045-v1'
INDEPENDENT = 'work/squirrel-state040/initialization045/coordinator-output'


def read(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def pin(path):
    path = Path(path)
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def pinned(row, base=ROOT):
    path = base / row['path']
    data = path.read_bytes()
    assert len(data) == row['bytes'] and hashlib.sha256(data).hexdigest() == row['sha256'], row['path']
    return path


class Comparison(PacketComparison):
    def text(self, value, base):
        value = super().text(value, base)
        return value.replace(PRIMARY, '<OUTPUT>').replace(INDEPENDENT, '<OUTPUT>')


raw_path = ROOT / 'evidence/verification/initialization045-isolated-77bc997.json'
raw = read(raw_path)
assert raw['status'] == 'passed'
assert raw['sourceRevision'] == '77bc99741c58111877b9fa283fdced56349d49e0'
assert all(row['returncode'] == 0 for row in raw['steps'])
assert raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
fresh = Path(raw['replayRoot'])
assert fresh.resolve() == ROOT / 'work/clean-replay/initialization045-77bc997'
assert pin(fresh / 'toolscripts/isolated_component_replay.py')['sha256'] == raw['replayDriverSha256']
for row in raw['packets']:
    pinned(row, fresh)

primary_packet_path = ROOT / PRIMARY / 'packet.json'
secondary_packet_path = fresh / INDEPENDENT / 'packet.json'
primary_verification_path = ROOT / PRIMARY / 'verification.json'
secondary_verification_path = fresh / INDEPENDENT / 'verification.json'
packet, secondary = read(primary_packet_path), read(secondary_packet_path)
assert pin(primary_packet_path)['sha256'] == '376e965916a08917f9789e4167051c13b6ae7da0373551ca19f58e68d4b4e5c5'
assert packet['status'] == 'frozen-bounded-complete-shared-initialization-candidates-not-admission'
assert packet['candidateFunctions'] == 4 and packet['candidateInstructionBytes'] == 8556
assert packet['actualWindowsExecution'] and not packet['sourceMapsOriginalImageOrSdk']
assert not packet['referenceExecutesAuthoredAllocatorOrHelper']
for key in ['wholeMemoryEquivalenceClaimed', 'universalEquivalenceClaimed', 'factoryQualified',
            'vmInitializationQualified', 'completeInterpreterOrGameQualified', 'allocationFailureQualified',
            'arbitraryRepeatedSharedInitializationQualified', 'androidOsOrDeviceExecuted']:
    assert packet[key] is False
assert packet['armSourceGraph']['retainedOriginalExecutableBytes'] == 0
assert packet['highAarch64SourceGraph']['retainedOriginalExecutableBytes'] == 0
assert packet['unresolvedUninvokedEngineCallbacks'] == 56

comparison = Comparison(ROOT, fresh)
comparison.compare(packet, secondary, 'packet.json')
comparison.compare(read(primary_verification_path), read(secondary_verification_path), 'verification.json')
allowed_paths = {PRIMARY + '/returning-controls.json', PRIMARY + '/packet.json',
                 'work/squirrel-state040/initialization045/sealing-v1/tests.log'}
assert len(comparison.variants) == 5
assert all(row['path'] in allowed_paths and row['kind'] in
           ['recursively-compared-json', 'verified-root-output-paths-or-unittest-timing-text']
           for row in comparison.variants)
earlier_comparison_path = ROOT / 'work/initialization045-comparison.json'
earlier_comparison = read(earlier_comparison_path)
assert earlier_comparison['status'] == 'passed' and earlier_comparison['variants'] == comparison.variants

shared_path = pinned(packet['sharedRows'])
mask_path = pinned(packet['maskRows'])
controls_path = pinned(packet['negativeControls'])
shared, masks, controls = read(shared_path), read(mask_path), read(controls_path)
assert isinstance(shared, list) and len(shared) == 16
assert isinstance(masks, list) and len(masks) == 560
assert all(row['allQualifiedProfilesAgree'] for row in shared + masks)
for row in shared:
    assert row['originalLiveSdkBlockCount'] == 227
    assert set(row['profiles']) == {'arm', 'windows', 'a64'}
    for profile in row['profiles'].values():
        assert profile['returnedNormally'] and profile['callerGuardsPreserved'] and profile['sourceOnlyExecution']
        assert profile['stateSha256'] == row['originalStateSha256'] and profile['liveAllocationRoles'] == 227
for row in masks:
    assert set(row['profiles']) == {'arm', 'windows', 'a64'}
    for profile in row['profiles'].values():
        assert profile['returnedNormally'] and profile['callerGuardsPreserved']
        assert profile['returned'] == row['originalReturn'] and profile['state'] == row['originalState']
assert controls['status'] == 'normally-returning-incorrect-shared-graphs-rejected'
assert controls['controls'] == 7 and controls['platformExecutions'] == 21 and len(controls['rows']) == 7
assert sum(len(row['profiles']) for row in controls['rows']) == 21
for row in controls['rows']:
    assert {profile['platform'] for profile in row['profiles']} == {'arm', 'windows', 'a64'}
    for profile in row['profiles']:
        assert profile['returnedNormally'] and profile['callerGuardsPreserved'] and profile['sourceOnlyExecution']
        assert profile['semanticMismatchDetected'] or profile['typedObserverRejection']
verification = read(primary_verification_path)
assert verification['sharedCases'] == 16 and verification['maskCases'] == 560
assert verification['returningControls'] == 7 and verification['returningControlPlatformExecutions'] == 21
assert verification['fileIdentityChecks'] == 123

core_path = pinned(packet['coreAbiManifest'])
for row in read(core_path)['files']:
    pinned(row)
    pinned(row, fresh)
for row in packet['inputs']:
    pinned(row)
    pinned(row, fresh)
for key in ['pythonExecutable', 'clang', 'lld']:
    pinned(packet['tools'][key])
    pinned(secondary['tools'][key], fresh)
test_counts = []
for step in raw['steps']:
    log = fresh / step['log']
    assert pin(log)['sha256'] == step['logSha256']
    if step['name'].endswith('-tests'):
        text = log.read_text(encoding='utf-8')
        assert text.strip().endswith('OK')
        test_counts.append(int(re.search(r'Ran (\d+) tests', text)[1]))
assert sorted(test_counts) == [11, 15, 21, 24]
inner_tests = [row for row in secondary['compilerAndTestReceipts'] if 'actualWindowsTestsPassed' in row]
assert len(inner_tests) == 1 and inner_tests[0]['actualWindowsTestsPassed'] == 12
inner_log = pinned(inner_tests[0]['privateLog'], fresh).read_text(encoding='utf-8')
assert inner_log.strip().endswith('OK') and int(re.search(r'Ran (\d+) tests', inner_log)[1]) == 12
assert sum(test_counts) + 12 == 83
compiled_path = fresh / 'work/source-compile-ci/committed-replay/manifests/compilation.json'
compiled = read(compiled_path)
assert compiled['unitCount'] == 413 and len(compiled['results']) == 1169
assert all(row['status'] == 'compiled' for row in compiled['results'])

restoration_path = ROOT / 'work/artifact-restoration045049/receipt.json'
restoration = read(restoration_path)
assert restoration['status'] == 'restored-derived-artifacts-from-frozen-sources'
assert restoration['sourcePacketsUnchanged'] and restoration['graphPicklesUnchanged']
assert not restoration['behaviorRerun'] and not restoration['replayCopyCreated']
assert {row['lane'] for row in restoration['lanes']} == {'045', '049'}
restored = 0
missing_before = 0
for lane in restoration['lanes']:
    assert lane['allRestoredDeterministicArtifactsMatchRecordedBytes']
    assert lane['windowsOriginalWholeFileHashesAvailable'] is False
    pinned(lane['packet'])
    pinned(lane['graph'])
    for row in lane['deterministicArtifacts']:
        pinned(row)
    restored += len(lane['deterministicArtifacts'])
    missing_before += sum(not row['present'] for row in lane['before'])
assert restored == 241 and missing_before == 190
pinned(restoration['producer'])

receipt = dict(schemaVersion=1, status='qualified-independent-initialization045-bounded-shared-initialization',
    sourceRevision=raw['sourceRevision'], completeUnmodifiedBatchReplayPassed=True,
    rawReplay=pin(raw_path), primaryPacket=pin(primary_packet_path), independentPacket=pin(secondary_packet_path),
    primaryVerification=pin(primary_verification_path), independentVerification=pin(secondary_verification_path),
    sharedRows=pin(shared_path), maskRows=pin(mask_path), returningControls=pin(controls_path),
    coreAbiManifest=pin(core_path), frozenInputFiles=len(packet['inputs']), tools=packet['tools'],
    recursiveComparisonPassed=True, comparisonVariants=comparison.variants,
    originalComparison=pin(earlier_comparison_path), originalReviewProducer=pin(ROOT / 'work/review_initialization045.py'),
    recursiveComparator=pin(ROOT / 'toolscripts/replay_packet_compare.py'),
    artifactRestoration=pin(restoration_path), restorationProducer=restoration['producer'],
    restoredDeterministicArtifactPinsVerified=241, missingDerivedArtifactsBeforeRestoration=190,
    restorationLanes=[dict(lane=row['lane'], deterministicArtifactPinsVerified=len(row['deterministicArtifacts']),
                           missingBefore=sum(not item['present'] for item in row['before']))
                      for row in restoration['lanes']],
    restorationDoesNotRerunBehavior=True, sourcePacketsAndGraphsUnchanged=True,
    windowsExecutionCompared=True, windowsHistoricalWholeFileIdentityEstablished=False,
    allArtifactWholeFileIdentityClaimed=False,
    provenance='Original passed 77bc997 replay and per-file missing/present restoration history retained; comparison rerun only after derived-artifact restoration. Windows rebuilds remain separate and lack historical whole-file pins.',
    sharedCases=16, sharedAuthoredPlatformObservations=48, maskCases=560, maskAuthoredPlatformObservations=1680,
    returningControlCount=7, returningControlPlatformExecutions=21, tests=83,
    publicCompilation=pin(compiled_path), publicUnits=413, publicCompilations=1169,
    candidateFunctions=4, candidateInstructionBytes=8556, unresolvedUninvokedEngineCallbacks=56,
    sourceAdmissionGranted=False, sourceCreditGranted=0, matchingCreditGranted=0, sdkCreditGranted=0,
    universalEquivalenceClaimed=False, wholeMemoryEquivalenceClaimed=False,
    fullFactoryVmInitializationInterpreterGameAndroidOsOrDeviceClaimed=False,
    allocationFailureOrArbitraryRepeatedInitializationQualified=False,
    producer=pin(Path(__file__).resolve()))
destination = ROOT / 'evidence/verification/initialization045-coordinator-77bc997.json'
destination.write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
print(json.dumps(dict(receipt=pin(destination), sharedCases=16, maskCases=560, controls=7,
                      tests=83, publicUnits=413, publicCompilations=1169)))
