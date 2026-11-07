import copy
import hashlib
import json
from pathlib import Path
import shutil
import sys


ROOT = Path.cwd()
sys.path.insert(0, str(ROOT / 'toolscripts'))
import squirrel_table_helpers021_model as model


def read(path):
    return json.loads(Path(path).read_text())


def pin(path):
    path = Path(path)
    raw = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'sha256': hashlib.sha256(raw).hexdigest(), 'bytes': len(raw)}


def normalize(packet):
    result = copy.deepcopy(packet)
    output = []
    assert len(result['native']['observations']) == 29
    for case, row in zip(model.cases(), result['native']['observations']):
        semantic = model.validate(row['words'], case)
        semantic.pop('nativePointerBucket')
        words = row['words']
        events = words[31 + words[7]:]
        output.append({'case': case, 'semantic': semantic, 'orderedEvents': events})
    result['native']['observations'] = output
    result['native'].pop('commands')
    return result


raw_path = ROOT / 'evidence/verification/table-helpers021-isolated-639f420.json'
raw = read(raw_path)
assert raw['status'] == 'passed' and all(row['returncode'] == 0 for row in raw['steps'])
fresh = Path(raw['replayRoot'])
compiled = read(fresh / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
assert compiled['unitCount'] == 202 and len(compiled['results']) == 556
assert all(row['status'] == 'compiled' for row in compiled['results'])
public_path = ROOT / 'evidence/lanes/squirrel-table-helpers021/report.json'
public = read(public_path)
primary_path = ROOT / 'work/squirrel-table-helpers021/qualification-29-final/report.json'
assert pin(primary_path)['sha256'] == public['privateReportSha256']
secondary_path = fresh / 'work/squirrel-table-helpers021/committed-root/report.json'
a, b = read(primary_path), read(secondary_path)
assert normalize(a) == normalize(b)
assert a['originalReturns'] == a['sourceReturns'] == a['nativeReturns'] == a['androidModelReturns'] == 29
assert a['baselineOriginalReturns'] == a['baselineSourceReturns'] == 120
assert not public['baseline019ReplayRecountsNewProgress'] and not a['immutable019EngineChanged']
assert a['completeHelperInstructionBytesProposedForIndependentReview'] == 1788
assert len(a['domainUnvisitedInstructionAddresses']) == 6
assert len(a['boundaries']) == 8 and sum(row['totalInstructions'] for row in a['boundaries']) == 447
assert sum(row['visitedInstructions'] for row in a['boundaries']) == 441
assert a['originalRemainingRehashKeyReferences'] and all(v >= 1 for v in a['originalRemainingRehashKeyReferences'])
assert a['completeOwnedArmHeapCompared'] and a['independentOwnershipAndNativeTopologyCompared']
assert not a['sourceOriginalModuleMapped'] and not a['unrecoveredErrorHelper146590OutcomeClaimed']
assert not a['fpscrExceptionStatusUniversallyEqual'] and not a['fullTransitiveGraphClosed']
proof_path = ROOT / 'evidence/lanes/squirrel-table-helpers021/domain-proof.json'
proof = read(proof_path)
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
for section in ['newSlotUnqualifiedErrorTransfer', 'rehashUnreachableKeyFinalizer']:
    for row in proof[section]['unvisitedInstructions']:
        offset = row['address'] - 0x100000
        assert hashlib.sha256(image[offset:offset + 4]).hexdigest() == row['instructionSha256']
ready_path = ROOT / 'evidence/lanes/squirrel-table-helpers021/ready.json'
assert pin(ready_path)['sha256'] == '2965c1caeaea4c47480f1945e1c47f5136897e576d1fa0bce725a17e1064192a'
for row in read(ready_path)['ownedFiles'] + read(ready_path)['pins']:
    assert pin(ROOT / row['path']) == row
driver = ROOT / 'evidence/verification/producers/table-helpers021-639f420-replay.py'
shutil.copyfile(ROOT / 'work/replay-table-helpers021.py', driver)
assert pin(driver)['sha256'] == raw['replayDriverSha256']
receipt = {'schemaVersion': 1, 'status': 'qualified-independent-immutable-table-helper-provider',
    'sourceRevision': raw['sourceRevision'], 'completeUnmodifiedBatchReplayPassed': True,
    'rawReplay': pin(raw_path), 'executedDriver': pin(driver), 'publicPacket': pin(public_path),
    'privatePrimary': pin(primary_path), 'privateIndependent': pin(secondary_path),
    'domainProof': pin(proof_path), 'tests': 65, 'publicUnits': 202, 'publicCompilations': 556,
    'newCases': 29, 'newComparisonsAgainstOriginal': 87, 'repeated019OriginalAndSourceCases': 120,
    'repeatedBaselineNewCredit': 0, 'completeHelpersProposed': 8, 'instructionBytes': 1788,
    'instructionsVisited': 441, 'instructions': 447, 'unvisitedExplicitDomainPaths': 6,
    'allOtherPacketFieldsIncludingArmA64BaselinesControlsAndArtifactHashesIdentical': True,
    'nativeSemanticResultsDisposalSetsAndOrderedEventsIdentical': True,
    'nativePointerHomeAndFreeCountsIndependentlyValidatedForEachRunsPointers': True,
    'nativeRawPointerWordsNotClaimedIdenticalAcrossRuns': True,
    'actualOriginalRehashKeyDecrementsRemainPositive': True,
    'nullOrCorruptChainErrorOutcomeAndUniversalMachineStateUnqualified': True,
    'sourceEngine019Changed': False, 'sourceAdmissionGranted': False,
    'wholeVmGameOrAndroidDeviceClaimed': False, 'producer': pin(Path(__file__))}
(ROOT / 'evidence/verification/table-helpers021-coordinator-639f420.json').write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
print(json.dumps({'tests': 65, 'publicCompilations': 556, 'helpers': 8, 'bytesProposed': 1788}))
