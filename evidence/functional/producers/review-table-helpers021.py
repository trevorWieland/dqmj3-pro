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
    data = (ROOT / path).read_bytes()
    return {'path': path, 'sha256': hashlib.sha256(data).hexdigest(), 'bytes': len(data)}


ready_path = 'evidence/lanes/squirrel-table-helpers021/ready.json'
assert pin(ready_path)['sha256'] == '2965c1caeaea4c47480f1945e1c47f5136897e576d1fa0bce725a17e1064192a'
ready = read(ready_path)
for item in ready['ownedFiles'] + ready['pins']:
    assert pin(item['path']) == item
coordinator_path = 'evidence/verification/table-helpers021-coordinator-639f420.json'
coordinator = read(coordinator_path)
assert coordinator['completeUnmodifiedBatchReplayPassed'] and coordinator['tests'] == 65
assert coordinator['instructionsVisited'] == 441 and coordinator['instructions'] == 447
execution_path = 'evidence/lanes/squirrel-table-helpers021/report.json'
execution = read(execution_path)
assert execution['originalReturns'] == execution['sourceReturns'] == execution['nativeReturns'] == execution['androidModelReturns'] == 29
assert not execution['baseline019ReplayRecountsNewProgress'] and not execution['immutable019EngineChanged']
assert not execution['sourceOriginalModuleMapped'] and not execution['fpscrExceptionStatusUniversallyEqual']
transition_path = 'evidence/verification/legacy006-get-name-transition.json'
transition = read(transition_path)
assert all(transition['checks'].values())
for item in transition['sourceFiles']:
    assert pin(item['path']) == item
registry = read('config/functional-functions.json')
census, overlays = native_census_overlay.compose(ROOT, read(registry['census']['path']))
canonical = {row['address']: row for row in census['functions']}
mappings = {row['symbol']: row for row in read('config/source-names.json')['mappings']}
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
inventory = read('evidence/inventory/update-content0.json')
rows, headers = [], set()
for body in execution['boundaries']:
    address, size = body['entry'], body['instructionBytes']
    original = canonical[address]
    assert original['textBodyBytes'] == size and original['ranges'] == body['instructionRanges']
    assert hashlib.sha256(image[address-0x100000:address+size-0x100000]).hexdigest() == body['bodySha256']
    symbol = 'fn_' + format(address, '08x')
    mapping = mappings[symbol]
    source = mapping['sourcePath']
    pending = [ROOT / source]
    while pending:
        path = pending.pop()
        for name in re.findall(r'^#include "([^"\n]+)"', path.read_text(), re.M):
            header = (path.parent / name).resolve()
            assert header.is_relative_to(ROOT)
            relative = header.relative_to(ROOT).as_posix()
            if relative not in headers:
                headers.add(relative)
                pending.append(header)
    rows.append({'symbol': symbol, 'canonicalIdentity': {'address': address, 'mode': 'ARM',
        'moduleSha256': inventory['codeSha256'], 'programId': inventory['programId']},
        'source': pin(source), 'sourceName': mapping['sourceName'], 'symbolNames': pin('include/bytematch_names.h'),
        'functionalConfidence': 'medium', 'exactObjectSpan': False, 'exactLinkedSpan': False,
        'originalInstructionBytes': size, 'originalInstructionRanges': original['ranges'], 'reportEntryBytes': size,
        'behavior': {'allPassed': True, 'boundedNotUniversalEquivalence': True,
            'execution': pin(execution_path), 'independentSourceComponentReplay': pin(coordinator_path),
            'legacySourceNameTransition': pin(transition_path), 'newCases': 29,
            'newComparisonsAgainstOriginal': 87, 'repeated019OriginalAndSourceCases': 120,
            'repeatedBaselineNewCredit': 0, 'originalInstructionsVisited': body['visitedInstructions'],
            'originalInstructions': body['totalInstructions'],
            'domainUnvisitedInstructionAddresses': body['domainUnvisitedInstructionAddresses'],
            'explicitDomainProof': pin('evidence/lanes/squirrel-table-helpers021/domain-proof.json'),
            'actualOriginalRehashKeyReferencesPositive': True,
            'armWholeArenaBytes': 262144, 'actualWindowsAndAarch64Model': True,
            'nativePointerBucketAndFreeStateIndependentlyValidated': True,
            'fpscrStickyExceptionStatusUniversallyEqual': False,
            'noReentrantMutationOverflowAllocationFailureOrGeneralGcClaim': True,
            'broadVtableLookupVmOrDeviceQualified': False, 'limits': execution['limits']}})
assert len(rows) == 8 and sum(row['originalInstructionBytes'] for row in rows) == 1788
dependencies = {item['path']: item for item in ready['ownedFiles'] + ready['pins']}
for item in execution['inputs']:
    if item['path'].startswith(('source/', 'src/native/')):
        dependencies[item['path']] = item
packet = {'schemaVersion': 1, 'status': 'coordinator-reviewed-bounded-immutable-table-helpers',
    'moduleSha256': inventory['codeSha256'], 'acceptedSourceCreditGranted': 0,
    'functions': rows, 'headers': [pin(path) for path in sorted(headers)],
    'sourceDependencies': list(dependencies.values()), 'frozenReady': pin(ready_path),
    'newPhysicalInventoryCredit': 0, 'repeatedGetBodyCreditGranted': 0, 'wholeVmRootCreditGranted': 0,
    'producer': pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT / 'evidence/functional/table-helpers021.json').write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
print(json.dumps({'reviewedFunctions': 8, 'boundedInstructionBytes': 1788, 'matchingSourceCreditGranted': 0}))
