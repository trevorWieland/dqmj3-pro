import copy
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


ready_path = 'evidence/lanes/squirrel-class-release009/ready.json'
assert pin(ready_path)['sha256'] == 'c602393119f062652df26834d3ba7b5833fcd5074c4cc25a2b3a3242c123f983'
for item in read(ready_path)['files']:
    assert pin(item['path']) == item
replay_path = 'evidence/verification/class009-isolated-d6a6567.json'
replay = read(replay_path)
assert replay['status'] == 'passed' and replay['coordinatorComparison']['tests'] == 56
execution_path = 'evidence/lanes/squirrel-class-release009/execution.json'
primary = read(execution_path)
secondary = json.loads((Path(replay['replayRoot']) / execution_path).read_text())
for packet in (primary, secondary):
    packet['nativeTests'].pop('log')
assert primary == secondary
assert primary['cases'] == 108 and primary['comparisonsAgainstOriginal'] == 324
assert primary['originalInstructionAddressesVisited'] == 320
assert primary['staticReachabilityProof']['constantDeadInstructionCount'] == 48
assert not primary['allOriginalInstructionsExecuted'] and not primary['allocatorRecovered']
registry = read('config/functional-functions.json')
census, overlays = native_census_overlay.compose(ROOT, read(registry['census']['path']))
canonical = {row['address']: row for row in census['functions']}
inventory = read('evidence/inventory/update-content0.json')
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
sources = {0x665ee0: 'class_release.c', 0x666144: 'class_release.c',
           0x665f20: 'class_finalize.c', 0x1a51e0: 'member_resize.c'}
functions, headers = [], set()
for body in primary['completeBodies']:
    address = body['entry']
    original = canonical[address]
    assert original['textBodyBytes'] == body['instructionBytes']
    raw = b''.join(image[part['start'] - 0x100000:part['endExclusive'] - 0x100000]
                   for part in original['ranges'])
    assert hashlib.sha256(raw).hexdigest() == body['instructionSha256']
    symbol = 'fn_' + format(address, '08x')
    assert primary['armBuild']['functions'][symbol]['sectionSha256'] != body['instructionSha256']
    source = 'source/squirrel-wave009/' + sources[address]
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
    functions.append({'symbol': symbol, 'canonicalIdentity': {'address': address, 'mode': 'ARM',
        'moduleSha256': inventory['codeSha256'], 'programId': inventory['programId']},
        'source': pin(source), 'functionalConfidence': 'medium', 'exactObjectSpan': False, 'exactLinkedSpan': False,
        'originalInstructionBytes': body['instructionBytes'], 'originalInstructionRanges': original['ranges'],
        'reportEntryBytes': next(part['endExclusive'] - address for part in original['ranges']
                                if part['start'] <= address < part['endExclusive']),
        'behavior': {'allPassed': True, 'boundedNotUniversalEquivalence': True,
            'execution': pin(execution_path), 'independentReplay': pin(replay_path),
            'familyCases': 108, 'comparisonsAgainstOriginal': 324,
            'staticCleanupReachabilityProof': primary['staticReachabilityProof'],
            'normallyReturningCompiledControlsRejected': 9, 'sameFinalHeapControlsRejected': 6,
            'globalNullEstablishedByActualOriginalStartup': True,
            'sourceServices': 'typed bounded successful nonnull reallocation, logical free and returning hook',
            'excludedDomains': ['invalid or aliased relocated fill', 'actual short-prefix prototype references',
                'other incompatible reference layouts', 'original allocator recovery', 'GC',
                'constructor or VM class operations', 'whole game', 'Android OS or physical device']}})
packet = {'schemaVersion': 1, 'status': 'coordinator-reviewed-bounded-functional-class-lifetime',
    'moduleSha256': inventory['codeSha256'], 'acceptedSourceCreditGranted': 0,
    'functions': functions, 'headers': [pin(path) for path in sorted(headers)], 'frozenReady': pin(ready_path),
    'borrowedHelpersOrStartupAdditionalCredit': 0,
    'producer': pin(Path(__file__).relative_to(ROOT).as_posix())}
(ROOT / 'evidence/functional/class009.json').write_text(json.dumps(packet, indent=2) + '\n')
print(json.dumps({'reviewedFunctions': 4, 'boundedInstructionBytes': 1472, 'matchingSourceCreditGranted': 0}))
