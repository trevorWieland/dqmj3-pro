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


ready_path = 'evidence/lanes/squirrel-native-closure-release013/ready.json'
assert pin(ready_path)['sha256'] == '4ea663042fca72d9b6fa158e478247cd7de9786341cf92e65024b1860f89aae1'
for item in read(ready_path)['files']:
    assert pin(item['path']) == item
replay_path = 'evidence/verification/native-closure013-isolated-93d55b8.json'
replay = read(replay_path)
assert replay['status'] == 'passed' and replay['coordinatorComparison']['tests'] == 57
execution_path = 'evidence/lanes/squirrel-native-closure-release013/execution.json'
primary = read(execution_path)
secondary = json.loads((Path(replay['replayRoot']) / execution_path).read_text())
for packet in (primary, secondary):
    packet['nativeTests'].pop('log')
assert primary == secondary and primary['all71OriginalInstructionsVisited']
assert primary['cases'] == 48 and primary['allSharedPrefixesAreSameNamedTypes']
assert not primary['prototypeCastToCollectableOrInsertedInChain']
assert not primary['legacySqRefCallbacksOrVtableReinterpretationQualified']
registry = read('config/functional-functions.json')
census, overlays = native_census_overlay.compose(ROOT, read(registry['census']['path']))
canonical = {row['address']: row for row in census['functions']}
inventory = read('evidence/inventory/update-content0.json')
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
source = 'source/squirrel-wave013/native_closure_release.c'
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
for body in primary['completeBodies']:
    address = body['entry']
    original = canonical[address]
    assert original['textBodyBytes'] == body['instructionBytes']
    raw = b''.join(image[part['start'] - 0x100000:part['endExclusive'] - 0x100000]
                   for part in original['ranges'])
    assert hashlib.sha256(raw).hexdigest() == body['instructionSha256']
    symbol = 'fn_' + format(address, '08x')
    assert primary['armBuild']['functions'][symbol]['sectionSha256'] != body['instructionSha256']
    functions.append({'symbol': symbol, 'canonicalIdentity': {'address': address, 'mode': 'ARM',
        'moduleSha256': inventory['codeSha256'], 'programId': inventory['programId']},
        'source': pin(source), 'functionalConfidence': 'medium', 'exactObjectSpan': False, 'exactLinkedSpan': False,
        'originalInstructionBytes': body['instructionBytes'], 'originalInstructionRanges': original['ranges'],
        'reportEntryBytes': next(part['endExclusive'] - address for part in original['ranges']
                                if part['start'] <= address < part['endExclusive']),
        'behavior': {'allPassed': True, 'boundedNotUniversalEquivalence': True,
            'execution': pin(execution_path), 'independentReplay': pin(replay_path),
            'familyCases': 48, 'comparisonsAgainstOriginal': 144, 'normallyReturningControlsRejected': 8,
            'sameFinalHeapControlsRejected': 5, 'actualSmallDeclaredPrefixObjects': True,
            'storedCallableNeverInvoked': True,
            'opaqueVtableExactCallbackTypesAndNativeAlignmentQualified': True,
            'excludedDomains': ['legacy collectable callback reinterpretation', 'constructor/compiler recovery',
                'original allocator recovery', 'GC', 'whole VM or game', 'Android OS or physical device']}})
packet = {'schemaVersion': 1, 'status': 'coordinator-reviewed-bounded-functional-native-closure-lifetime',
    'moduleSha256': inventory['codeSha256'], 'acceptedSourceCreditGranted': 0,
    'functions': functions, 'headers': [pin(path) for path in sorted(headers)], 'frozenReady': pin(ready_path),
    'sharedBaseTailOrRuntimeAdditionalCredit': 0,
    'producer': pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT / 'evidence/functional/native-closure013.json').write_text(json.dumps(packet, indent=2) + '\n')
print(json.dumps({'reviewedFunctions': 2, 'boundedInstructionBytes': 284, 'matchingSourceCreditGranted': 0}))
