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


coordinator_path = 'evidence/verification/dfa013-coordinator-2e4afbe.json'
coordinator = read(coordinator_path)
assert coordinator['independentSourceComponentReplayPassed']
assert coordinator['completeUnmodifiedBatchReplayPassed']
assert coordinator['tests'] == 63 and coordinator['qualifiedFixtureCases'] == 916
proposal_path = 'evidence/lanes/wave013-native/dfa/functional-proof-proposal.json'
assert pin(proposal_path)['sha256'] == '238656483d80e0cdc1f195f6ff8454319d6f70c1cfd01807b03c780420c76ac7'
packet = read(proposal_path)
registry = read('config/functional-functions.json')
census, overlays = native_census_overlay.compose(ROOT, read(registry['census']['path']))
canonical = {row['address']: row for row in census['functions']}
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
for row in packet['functions']:
    address = row['canonicalIdentity']['address']
    owned = canonical[address]
    assert owned['ranges'] == row['originalInstructionRanges']
    assert owned['textBodyBytes'] == row['originalInstructionBytes']
    raw = b''.join(image[part['start'] - 0x100000:part['endExclusive'] - 0x100000]
                   for part in owned['ranges'])
    assert hashlib.sha256(raw).hexdigest() == row['originalSpanSha256']
    assert pin(row['source']['path']) == row['source']
    row['behavior']['independentSourceComponentReplay'] = pin(coordinator_path)
    row['behavior']['completeUnmodifiedBatchReplayPassed'] = True
    row['behavior']['independentCleanReplayClaimed'] = True
for header in packet['headers']:
    assert pin(header['path']) == header
assert len(packet['functions']) == 6 and packet['originalInstructionBytes'] == 2376
packet.update({'status': 'coordinator-reviewed-bounded-functional-dfa',
    'proposalProducer': packet['producer'], 'producer': pin(Path(__file__).relative_to(ROOT).as_posix()),
    'coordinatorReplay': pin(coordinator_path), 'matchingSourceCreditGranted': 0})
(ROOT / 'evidence/functional/dfa013.json').write_text(json.dumps(packet, indent=2) + '\n')
print(json.dumps({'reviewedFunctions': 6, 'boundedInstructionBytes': 2376, 'matchingSourceCreditGranted': 0}))
