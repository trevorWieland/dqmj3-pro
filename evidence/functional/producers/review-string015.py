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


ready_path = 'evidence/lanes/squirrel-string-lifetime015/ready.json'
assert pin(ready_path)['sha256'] == '82e86302072925742becef9de94ccbc62cfd5fd76cfe51a6daa5fe62706f4ee4'
for item in read(ready_path)['files']:
    assert pin(item['path']) == item
replay_path = 'evidence/verification/string015-isolated-efb32b8.json'
replay = read(replay_path)
assert replay['status'] == 'passed' and replay['coordinatorComparison']['tests'] == 64
execution_path = 'evidence/lanes/squirrel-string-lifetime015/execution.json'
primary = read(execution_path)
secondary = json.loads((Path(replay['replayRoot']) / execution_path).read_text())
for packet in (primary, secondary):
    packet['nativeTests'].pop('log')
assert primary == secondary and not primary['allOriginalInstructionsExecutedClaimed'] and primary['executedNewInstructionBytes'] == 708
assert primary['cases'] == 112 and primary['exactFrozenPrefixAndOpaqueVtableCallbacks']
assert not primary['sourceModeOriginalCodeDataOrServicesMapped']
assert not primary['legacySqRefVtableReinterpretationQualified']
assert primary['independentRegisteredMembershipChecks'] == {'originalArm': 80, 'sourceArm': 80}
assert not primary['registeredTargetProof']['originalMissingTargetAbortOrReturnBehaviorQualified']
assert not primary['fullSharedStateOrFutureAdjacentOpaqueFieldNonoverlapQualified']
assert not primary['weakApiAccessBeyondStringPrefixOrAfterLogicalStringDisposalAllowed']
registry = read('config/functional-functions.json')
census, overlays = native_census_overlay.compose(ROOT, read(registry['census']['path']))
canonical = {row['address']: row for row in census['functions']}
inventory = read('evidence/inventory/update-content0.json')
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
source = 'source/squirrel-wave015/string.c'
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
functions = []
for body in primary['completeMeasuredBodies']:
    address = body['entry']
    original = canonical[address]
    owned_bytes = original['textBodyBytes']
    raw = b''.join(image[part['start'] - 0x100000:part['endExclusive'] - 0x100000]
                   for part in original['ranges'])
    owned_sha = hashlib.sha256(raw).hexdigest()
    if address == 0x24d9cc:
        assert owned_bytes == 20 and body['instructionBytes'] == 164
        assert canonical[0x24d9e0]['textBodyBytes'] == 144
        logical = image[address - 0x100000:address - 0x100000 + 164]
        assert hashlib.sha256(logical).hexdigest() == body['instructionSha256']
    else:
        assert owned_bytes == body['instructionBytes'] and owned_sha == body['instructionSha256']
    symbol = 'fn_' + format(address, '08x')
    assert primary['armBuild']['functions'][symbol]['sectionSha256'] != owned_sha
    functions.append({'symbol': symbol, 'canonicalIdentity': {'address': address, 'mode': 'ARM',
        'moduleSha256': inventory['codeSha256'], 'programId': inventory['programId']},
        'source': pin(source), 'functionalConfidence': 'medium', 'exactObjectSpan': False, 'exactLinkedSpan': False,
        'originalInstructionBytes': owned_bytes, 'logicalOriginalInstructionBytes': body['instructionBytes'], 'originalInstructionRanges': original['ranges'],
        'reportEntryBytes': next(part['endExclusive'] - address for part in original['ranges']
                                if part['start'] <= address < part['endExclusive']),
        'behavior': {'allPassed': True, 'boundedNotUniversalEquivalence': True,
            'execution': pin(execution_path), 'independentReplay': pin(replay_path),
            'familyCases': 112, 'comparisonsAgainstOriginal': 336, 'normallyReturningControlsRejected': 11,
            'sameFinalHeapControlsRejected': 5, 'actualSmallDeclaredPrefixObjects': True,
            'lengthReadBeforeVirtualDestructor': True, 'physicalSharedTailCountedOnce': True,
            'registeredMembershipPrecondition': primary['registeredTargetProof'],
            'independentMembershipChecks': primary['independentRegisteredMembershipChecks'],
            'fullSharedStateOrAdjacentFieldNonoverlapQualified': False,
            'opaqueVtableExactCallbackTypesAndNativeAlignmentQualified': True,
            'excludedDomains': ['legacy collectable callback reinterpretation', 'original missing-registration escape behavior', 'allocation failure', 'full shared-state layout',
                'original allocator recovery', 'GC', 'whole VM or game', 'Android OS or physical device']}})
packet = {'schemaVersion': 1, 'status': 'coordinator-reviewed-bounded-functional-registered-byte-string-lifetime',
    'moduleSha256': inventory['codeSha256'], 'acceptedSourceCreditGranted': 0,
    'functions': functions, 'headers': [pin(path) for path in sorted(headers)], 'frozenReady': pin(ready_path),
    'sharedBaseTailOrRuntimeAdditionalCredit': 0,
    'producer': pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT / 'evidence/functional/string015.json').write_text(json.dumps(packet, indent=2) + '\n')
print(json.dumps({'reviewedFunctions': 5, 'boundedInstructionBytes': 716, 'matchingSourceCreditGranted': 0}))
