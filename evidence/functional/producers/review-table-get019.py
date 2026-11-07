import hashlib
import json
from pathlib import Path
import sys


ROOT = Path.cwd()
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_census_overlay


def read(path):
    return json.loads((ROOT / path).read_text())


def pin(path):
    raw = (ROOT / path).read_bytes()
    return {'path': path, 'sha256': hashlib.sha256(raw).hexdigest(), 'bytes': len(raw)}


ready_path = 'evidence/lanes/squirrel-table-lookup019/ready.json'
assert pin(ready_path)['sha256'] == 'fbb50eb434cdb2e81276ba160b6ae04f076d5fb4e992253d0eda735cb0b5ac56'
ready = read(ready_path)
for item in ready['ownedFiles'] + ready['pins']:
    assert pin(item['path']) == item
coordinator_path = 'evidence/verification/object-integration-coordinator-60a1c0c.json'
coordinator = read(coordinator_path)
assert coordinator['completeCorrectedBundleReplayPassed'] and coordinator['tests'] == 85
assert coordinator['table019']['getInstructionsVisited'] == coordinator['table019']['getInstructions'] == 72
execution_path = 'evidence/lanes/squirrel-table-lookup019/report.json'
execution = read(execution_path)
assert execution['originalReturns'] == execution['sourceReturns'] == execution['nativeReturns'] == execution['androidModelReturns'] == 120
assert not execution['sourceOriginalModuleMapped'] and not execution['nativeOriginalBucketsCopied']
assert not execution['fpscrExceptionStatusUniversallyEqual']
transition_path = 'evidence/verification/legacy006-get-name-transition.json'
transition = read(transition_path)
assert all(transition['checks'].values())
for item in transition['sourceFiles']:
    assert pin(item['path']) == item
registry = read('config/functional-functions.json')
census, overlays = native_census_overlay.compose(ROOT, read(registry['census']['path']))
address = 0x1a1dc8
original = next(row for row in census['functions'] if row['address'] == address)
body = next(row for row in execution['boundaries'] if row['entry'] == address)
assert original['textBodyBytes'] == body['instructionBytes'] == 288
assert original['ranges'] == body['instructionRanges']
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
assert hashlib.sha256(image[address-0x100000:address+288-0x100000]).hexdigest() == body['bodySha256']
source = 'source/squirrel-wave019/table_get.c'
headers, pending = set(), [ROOT / source]
import re
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
row = {'symbol': 'fn_001a1dc8', 'canonicalIdentity': {'address': address, 'mode': 'ARM',
    'moduleSha256': inventory['codeSha256'], 'programId': inventory['programId']},
    'source': pin(source), 'sourceName': 'sq_table_get019', 'symbolNames': pin('include/bytematch_names.h'),
    'functionalConfidence': 'medium', 'exactObjectSpan': False, 'exactLinkedSpan': False,
    'originalInstructionBytes': 288, 'originalInstructionRanges': original['ranges'], 'reportEntryBytes': 288,
    'behavior': {'allPassed': True, 'boundedNotUniversalEquivalence': True,
        'execution': pin(execution_path), 'independentSourceComponentReplay': pin(coordinator_path),
        'legacySourceNameTransition': pin(transition_path), 'cases': 120,
        'comparisonsAgainstOriginal': 360, 'originalGetInstructionsVisited': 72,
        'originalGetInstructions': 72, 'armWholeArenaBytes': 262144,
        'actualWindowsAndAarch64Model': True, 'nativeTopologyIndependentlyValidated': True,
        'originalBucketsTransplantedToNative': False, 'mandatoryVfpControlAndCalleeSavedPreserved': True,
        'fpscrStickyExceptionStatusUniversallyEqual': False,
        'quietNanInfinityAndOutOfRangeIocDifferenceRemainsExplicit': True,
        'threeSlotVtableAndSuccessfulAlignedAllocationOnly': True,
        'otherTableHelperBodyOrFullVmMetamethodGcOrDeviceCreditGranted': 0,
        'limits': execution['limits']}}
dependencies = {item['path']: item for item in ready['ownedFiles'] + ready['pins']}
for item in execution['inputs']:
    if item['path'].startswith(('source/', 'src/native/')):
        dependencies[item['path']] = item
packet = {'schemaVersion': 1, 'status': 'coordinator-reviewed-bounded-actual-table-get',
    'moduleSha256': inventory['codeSha256'], 'acceptedSourceCreditGranted': 0,
    'functions': [row], 'headers': [pin(path) for path in sorted(headers)],
    'sourceDependencies': list(dependencies.values()), 'frozenReady': pin(ready_path),
    'additionalHelperOrInventoryCredit': 0, 'wholeVmRootCreditGranted': 0,
    'producer': pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT / 'evidence/functional/table-get019.json').write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
print(json.dumps({'reviewedFunctions': 1, 'boundedInstructionBytes': 288, 'matchingSourceCreditGranted': 0}))
