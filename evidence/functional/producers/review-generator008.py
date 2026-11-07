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


ready_path = 'evidence/lanes/squirrel-generator-release008/ready.json'
assert pin(ready_path)['sha256'] == 'b01a7f74775289ff41f27c3a273111a1fb34d7ac162992b3f75cffa07801d6ce'
for item in read(ready_path)['files']:
    assert pin(item['path']) == item
replay_path = 'evidence/verification/generator008-isolated-439de91.json'
replay = read(replay_path)
assert replay['status'] == 'passed' and replay['coordinatorComparison']['tests'] == 74
execution_path = 'evidence/lanes/squirrel-generator-release008/execution.json'
primary = read(execution_path)
secondary = json.loads((Path(replay['replayRoot']) / execution_path).read_text())
for packet in (primary, secondary):
    packet['nativeTests'].pop('log')
assert primary == secondary
assert primary['cases'] == 48 and primary['all76OriginalInstructionsVisited']
registry = read('config/functional-functions.json')
census, overlays = native_census_overlay.compose(ROOT, read(registry['census']['path']))
canonical = {row['address']: row for row in census['functions']}
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
packet = read('evidence/lanes/squirrel-generator-release008-functional/proof.json')
for row in packet['functions']:
    address = row['canonicalIdentity']['address']
    body = next(item for item in primary['completeBodies'] if item['entry'] == address)
    owned = canonical[address]
    assert owned['mode'] == 'ARM' and owned['textBodyBytes'] == row['originalInstructionBytes']
    raw = b''.join(image[part['start'] - 0x100000:part['endExclusive'] - 0x100000]
                   for part in owned['ranges'])
    assert hashlib.sha256(raw).hexdigest() == body['instructionSha256']
    assert primary['armBuild']['functions'][row['symbol']]['sectionSha256'] != body['instructionSha256']
    row['originalInstructionRanges'] = owned['ranges']
    row['reportEntryBytes'] = next(part['endExclusive'] - address for part in owned['ranges']
                                 if part['start'] <= address < part['endExclusive'])
    row['behavior']['independentReplay'] = pin(replay_path)
    assert pin(row['source']['path']) == row['source']
for item in packet['headers']:
    assert pin(item['path']) == item
packet.update({'status': 'coordinator-reviewed-bounded-functional-generator-lifetime',
    'producer': pin(Path(__file__).relative_to(ROOT).as_posix()), 'matchingSourceCreditGranted': 0})
(ROOT / 'evidence/functional/generator008.json').write_text(json.dumps(packet, indent=2) + '\n')
print(json.dumps({'reviewedFunctions': 2, 'boundedInstructionBytes': 304, 'matchingSourceCreditGranted': 0}))
