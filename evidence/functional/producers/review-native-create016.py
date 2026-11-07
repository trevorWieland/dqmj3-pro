import hashlib
import json
from pathlib import Path
import re
import sys


ROOT = Path.cwd()
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_census_overlay


def read(path):
    return json.loads((ROOT / path).read_text())


def pin(path):
    raw = (ROOT / path).read_bytes()
    return {'path': path, 'sha256': hashlib.sha256(raw).hexdigest(), 'bytes': len(raw)}


ready_path = 'evidence/lanes/squirrel-native-create016/ready.json'
assert pin(ready_path)['sha256'] == '1e068cd99000f572a91935331e01f48a47993598534fbc93cf40d2015c93b45d'
for item in read(ready_path)['ownedFiles'] + read(ready_path)['pins']:
    assert pin(item['path']) == item
coordinator_path = 'evidence/verification/native-create016-coordinator-c6372a9.json'
coordinator = read(coordinator_path)
assert coordinator['completeUnmodifiedBatchReplayPassed'] and coordinator['tests'] == 59
execution_path = 'evidence/lanes/squirrel-native-create016/report.json'
execution = read(execution_path)
assert execution['sourceReturns'] == execution['nativeReturns'] == execution['androidModelReturns'] == 112
assert not execution['sourceOriginalModuleMapped'] and not execution['vtableNormalization']
assert not execution['storedCallableInvoked'] and not execution['fullVmStorageBindingClaimed']
registry = read('config/functional-functions.json')
census, unused = native_census_overlay.compose(ROOT, read(registry['census']['path']))
body = execution['boundary']
original = next(row for row in census['functions'] if row['address'] == body['entry'])
assert original['ranges'] == body['instructionRanges'] and original['textBodyBytes'] == 396
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
raw = b''.join(image[part['start'] - 0x100000:part['endExclusive'] - 0x100000] for part in original['ranges'])
assert hashlib.sha256(raw).hexdigest() == body['bodySha256']
source = 'source/squirrel-wave016/native_create.c'
headers, pending = set(), [ROOT / source]
while pending:
    path = pending.pop()
    for name in re.findall(r'^#include "([^"\n]+)"', path.read_text(), re.M):
        header = (path.parent / name).resolve()
        assert header.is_relative_to(ROOT)
        relative = header.relative_to(ROOT).as_posix()
        if relative not in headers:
            headers.add(relative)
            pending.append(header)
inventory = read('evidence/inventory/update-content0.json')
row = {'symbol': 'fn_00176fc8', 'canonicalIdentity': {'address': body['entry'], 'mode': 'ARM',
    'moduleSha256': inventory['codeSha256'], 'programId': inventory['programId']},
    'source': pin(source), 'functionalConfidence': 'medium', 'exactObjectSpan': False, 'exactLinkedSpan': False,
    'originalInstructionBytes': 396, 'originalInstructionRanges': original['ranges'], 'reportEntryBytes': 396,
    'behavior': {'allPassed': True, 'boundedNotUniversalEquivalence': True,
        'execution': pin(execution_path), 'independentSourceComponentReplay': pin(coordinator_path),
        'originalSourceWindowsAndroidModelReturns': 112, 'normallyReturningControlsRejected': 6,
        'originalRootInstructionsVisited': 93, 'originalRootInstructions': 99,
        'domainUnreachableRootInstructions': execution['domainUnreachableRootInstructions'],
        'allRootInstructionsExecutedClaimed': False,
        'successfulAlignedNonoverflowAllocationRequired': True, 'retainingPushRequired': True,
        'exactOpaquePrefixAndCallbackTypes': True, 'actualNativeAndCompactPrototypeLifetime': True,
        'vmBindingIsExplicitMeasuredFieldsOnly': True, 'fullVmStorageBindingClaimed': False,
        'storedCallableInvoked': False, 'failureEvidence': execution['failureEvidence'],
        'limits': execution['limits'], 'wholeVmGameOrPhysicalDeviceClaimed': False}}
packet = {'schemaVersion': 1, 'status': 'coordinator-reviewed-bounded-functional-native-closure-creation',
    'moduleSha256': inventory['codeSha256'], 'acceptedSourceCreditGranted': 0,
    'functions': [row], 'headers': [pin(path) for path in sorted(headers)], 'frozenReady': pin(ready_path),
    'additionalHelperOrInitializerPrefixCredit': 0,
    'producer': pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT / 'evidence/functional/native-create016.json').write_text(json.dumps(packet, indent=2) + '\n')
print(json.dumps({'reviewedFunctions': 1, 'boundedInstructionBytes': 396, 'matchingSourceCreditGranted': 0}))
