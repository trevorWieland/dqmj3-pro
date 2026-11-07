import copy
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
    data = (ROOT / path).read_bytes()
    return {'path': path, 'sha256': hashlib.sha256(data).hexdigest(), 'bytes': len(data)}


ready_path = 'evidence/lanes/squirrel-array-release007/ready.json'
assert pin(ready_path)['sha256'] == 'b398aa788374c97994be97e6ea40bfed6ed4ab7461585c140f0c103adcd0adce'
for item in read(ready_path)['files']:
    assert pin(item['path']) == item
replay_path = 'evidence/verification/array007-isolated-c54ab3c.json'
replay = read(replay_path)
assert replay['status'] == 'passed' and replay['coordinatorComparison']['tests'] == 51
execution_path = 'evidence/lanes/squirrel-array-release007/execution.json'
execution = read(execution_path)
reproduced = json.loads((Path(replay['replayRoot']) / execution_path).read_text())
primary, secondary = copy.deepcopy(execution), copy.deepcopy(reproduced)
primary['nativeTests'].pop('log')
secondary['nativeTests'].pop('log')
assert primary == secondary
assert execution['cases'] == 48 and execution['all78OriginalInstructionsVisited']
assert execution['comparisonsAgainstOriginal'] == 144 and not execution['allocatorRecovered']
registry = read('config/functional-functions.json')
census, overlays = native_census_overlay.compose(ROOT, read(registry['census']['path']))
canonical = {row['address']: row for row in census['functions']}
inventory = read('evidence/inventory/update-content0.json')
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
sources = {0x665bd4: 'array_release.c', 0x665c60: 'array_release.c',
           0x77f3f8: 'vector_destroy.c', 0x24d73c: 'chain_unlink.c'}
functions = []
for body in execution['completeBodies']:
    address = body['entry']
    original = canonical[address]
    assert original['textBodyBytes'] == body['instructionBytes']
    data = b''.join(image[part['start'] - 0x100000:part['endExclusive'] - 0x100000]
                    for part in original['ranges'])
    assert hashlib.sha256(data).hexdigest() == body['instructionSha256']
    symbol = 'fn_' + format(address, '08x')
    candidate = execution['armBuild']['functions'][symbol]
    assert candidate['sectionSha256'] != body['instructionSha256']
    functions.append({'symbol': symbol, 'canonicalIdentity': {'address': address, 'mode': 'ARM',
        'moduleSha256': inventory['codeSha256'], 'programId': inventory['programId']},
        'source': pin('source/squirrel-wave007/' + sources[address]),
        'functionalConfidence': 'medium', 'exactObjectSpan': False, 'exactLinkedSpan': False,
        'originalInstructionBytes': body['instructionBytes'], 'originalInstructionRanges': original['ranges'],
        'reportEntryBytes': next(part['endExclusive'] - address for part in original['ranges']
                                if part['start'] <= address < part['endExclusive']),
        'behavior': {'allPassed': True, 'boundedNotUniversalEquivalence': True,
            'familyCases': 48, 'comparisonsAgainstOriginal': 144, 'directCasesPerRoot': 12,
            'execution': pin(execution_path), 'independentReplay': pin(replay_path),
            'wholeNormalizedArmHeapAndOrderedObserversEqual': True,
            'normallyReturningCompiledControlsRejected': 6,
            'sameFinalHeapWrongReadOrderControlRejected': True,
            'sourceServices': 'typed C logical deallocation over retained foreign storage',
            'excludedDomains': ['allocator recovery', 'invalid or racing ownership', 'arbitrary GC',
                'weak-reference methods', 'whole VM or game', 'Android OS or physical device']}})
headers = ['source/squirrel-wave007/array_release.h', 'source/squirrel-wave002/array_views.h',
           'src/native/wave005/vm_views.h']
packet = {'schemaVersion': 1, 'status': 'coordinator-reviewed-bounded-functional-array-lifetime',
    'moduleSha256': inventory['codeSha256'], 'acceptedSourceCreditGranted': 0,
    'functions': functions, 'headers': [pin(path) for path in headers],
    'frozenReady': pin(ready_path), 'producer': pin(Path(__file__).relative_to(ROOT).as_posix()),
    'sharedBaseResetFragmentAdditionalCredit': 0, 'completeVmOrGameClaim': False}
(ROOT / 'evidence/functional/array007.json').write_text(json.dumps(packet, indent=2) + '\n')
print(json.dumps({'reviewedFunctions': len(functions), 'boundedInstructionBytes': 312,
                  'matchingSourceCreditGranted': 0}))
