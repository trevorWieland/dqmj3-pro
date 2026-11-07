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


coordinator_path = 'evidence/verification/owner-heap013-coordinator-fbed140.json'
coordinator = read(coordinator_path)
assert coordinator['completeUnmodifiedBatchReplayPassed']
assert coordinator['tests'] == 68 and coordinator['qualifiedFixtureCases'] == 617
proposal_path = 'evidence/lanes/wave013-native/file/owner/heap/functional-proof-proposal.json'
assert pin(proposal_path)['sha256'] == '1fd480b4a246ff6b933f76e68d9e32c786af0f6f871d3453808f1a2a1f009033'
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
assert len(packet['functions']) == 2 and packet['originalInstructionBytes'] == 536
primary = read('evidence/lanes/wave013-native/file/owner/heap/packet.json')
packet['sourceDependencies'] = primary['sources'] + primary['headers']
packet.update({'status': 'coordinator-reviewed-bounded-functional-owner-heap',
    'proposalProducer': packet['producer'], 'producer': pin(Path(__file__).relative_to(ROOT).as_posix()),
    'coordinatorReplay': pin(coordinator_path), 'matchingSourceCreditGranted': 0})
(ROOT / 'evidence/functional/owner-heap013.json').write_text(json.dumps(packet, indent=2) + '\n')
print(json.dumps({'reviewedFunctions': 2, 'boundedInstructionBytes': 536, 'matchingSourceCreditGranted': 0}))
