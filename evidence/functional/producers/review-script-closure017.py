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


ready_path = 'evidence/lanes/squirrel-script-closure017/ready.json'
assert pin(ready_path)['sha256'] == 'ab060f71e2783a6c879ea5d82d06644f20674df9a0e875d9e62117805ec9ee15'
for item in read(ready_path)['files']:
    assert pin(item['path']) == item
coordinator_path = 'evidence/verification/script-closure017-coordinator-0940286.json'
coordinator = read(coordinator_path)
assert coordinator['allPrimaryFieldsIdenticalExceptNativeTestLog'] and coordinator['tests'] == 64
execution_path = 'evidence/lanes/squirrel-script-closure017/execution.json'
execution = read(execution_path)
assert execution['cases'] == 72 and execution['comparisonsAgainstOriginal'] == 216
assert execution['all64OriginalInstructionAddressesVisited'] and execution['nativeTests']['passed'] == 14
assert execution['normalOwnedDagFullyFinalizedAndUnlinked'] and execution['bothClosureAndPrototypeWeakOrdersQualified']
assert not execution['sourceModeOriginalImageCodeDataOrServicesMapped'] and not execution['legacy010Or006CodeOrCallbacksConsumed']
assert not execution['prototypeCastToFullCollectable'] and not execution['generic017AccessBeyondActualPrototypePrefixAllowed']
assert not execution['weakReadOfLogicallyDisposedOwnerAllowed']
transition_path = 'evidence/verification/legacy010-name-transition-binaries.json'
transition = read(transition_path)
assert len(transition['checks']) == 4 and all(transition['checks'].values())
for item in transition['sourceFiles']:
    assert pin(item['path']) == item
registry = read('config/functional-functions.json')
census, unused = native_census_overlay.compose(ROOT, read(registry['census']['path']))
source = 'source/squirrel-wave017/script_closure.c'
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
rows = []
aliases = {'fn_006a7610': 'sq_script_closure_release017', 'fn_006a769c': 'sq_script_closure_destroy017'}
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
for body in execution['completeExistingBodies']:
    original = next(row for row in census['functions'] if row['address'] == body['entry'])
    size = body['instructionBytes']
    assert original['ranges'] == [{'start': body['entry'], 'endExclusive': body['endExclusive'], 'bytes': size}]
    assert original['textBodyBytes'] == size
    raw = image[body['entry']-0x100000:body['endExclusive']-0x100000]
    assert hashlib.sha256(raw).hexdigest() == body['instructionSha256']
    symbol = 'fn_' + format(body['entry'], '08x')
    rows.append({'symbol': symbol, 'canonicalIdentity': {'address': body['entry'], 'mode': 'ARM',
        'moduleSha256': inventory['codeSha256'], 'programId': inventory['programId']},
        'source': pin(source), 'sourceName': aliases[symbol], 'symbolNames': pin('include/bytematch_names.h'),
        'functionalConfidence': 'medium', 'exactObjectSpan': False, 'exactLinkedSpan': False,
        'originalInstructionBytes': size, 'originalInstructionRanges': original['ranges'], 'reportEntryBytes': size,
        'behavior': {'allPassed': True, 'boundedNotUniversalEquivalence': True,
            'execution': pin(execution_path), 'independentSourceComponentReplay': pin(coordinator_path),
            'legacySourceNameTransition': pin(transition_path), 'cases': 72, 'comparisonsAgainstOriginal': 216,
            'all64OriginalInstructionAddressesVisited': True, 'actualWindowsAndAarch64Model': True,
            'actualPayloads': execution['realComposedPayloads'], 'registeredInternStringsOnly': True,
            'normalAcyclicOwnedDag': True, 'legacy010LayoutConsumed': False,
            'fullVmGcCyclesRacesReentrantDestructionOrDeviceQualified': False}})
assert sum(row['originalInstructionBytes'] for row in rows) == 256
packet = {'schemaVersion': 1, 'status': 'coordinator-reviewed-bounded-actual-script-closure-lifetime',
    'moduleSha256': inventory['codeSha256'], 'acceptedSourceCreditGranted': 0,
    'functions': rows, 'headers': [pin(path) for path in sorted(headers)], 'frozenReady': pin(ready_path), 'sourceDependencies': read(ready_path)['files'],
    'additionalHelperOrInitializerPrefixCredit': 0,
    'producer': pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT / 'evidence/functional/script-closure017.json').write_text(json.dumps(packet, indent=2) + '\n')
print(json.dumps({'reviewedFunctions': 2, 'boundedInstructionBytes': 256, 'matchingSourceCreditGranted': 0}))
