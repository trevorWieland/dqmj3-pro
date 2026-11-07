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
    raw = (ROOT / path).read_bytes()
    return {'path': path, 'sha256': hashlib.sha256(raw).hexdigest(), 'bytes': len(raw)}


replay = read('evidence/verification/wave013-isolated-a9c62a1.json')
assert replay['status'] == 'passed' and replay['coordinatorComparison']['tests'] == 62
registry = read('config/functional-functions.json')
census, overlays = native_census_overlay.compose(ROOT, read(registry['census']['path']))
canonical = {row['address']: row for row in census['functions']}
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
functions, headers, packets = [], {}, []
for folder in ['control-graph', 'tokenizer']:
    path = 'evidence/lanes/wave013-native/' + folder + '/packet.json'
    packet = read(path)
    reproduced = json.loads((Path(replay['replayRoot']) / 'evidence/lanes/wave013-native' / folder / 'independent-packet.json').read_text())
    assert packet['behavior'] == reproduced['behavior']
    packets.append(pin(path))
    for item in packet['headers']:
        assert pin(item['path']) == item
        headers[item['path']] = item
    for original in packet['functions']:
        if original['symbol'] == 'fn_004bfcbc':
            continue
        proof = copy.deepcopy(original)
        proof['exactObjectSpan'] = False
        proof['exactLinkedSpan'] = False
        proof['functionalConfidence'] = 'medium'
        address = proof['canonicalIdentity']['address']
        owned = canonical[address]
        assert owned['textBodyBytes'] == proof['originalInstructionBytes']
        if 'originalInstructionRanges' not in proof:
            assert len(owned['ranges']) == 1
            part = owned['ranges'][0]
            assert hashlib.sha256(image[part['start'] - 0x100000:part['endExclusive'] - 0x100000]).hexdigest() == proof['originalSpanSha256']
        ranges = [{'start': part['start'], 'endExclusive': part['endExclusive'], 'bytes': part['bytes']}
                  for part in proof.get('originalInstructionRanges', owned['ranges'])]
        assert ranges == owned['ranges']
        proof['originalInstructionRanges'] = ranges
        entry = next(part for part in ranges if part['start'] <= address < part['endExclusive'])
        proof['reportEntryBytes'] = entry['endExclusive'] - address
        proof['behavior'] = {'allPassed': True, 'boundedNotUniversalEquivalence': True,
            'packetBehavior': packet['behavior'], 'independentSourceRevision': replay['sourceRevision'],
            'limits': packet['limits'], 'logicalPointerAdaptation': True,
            'immutableMethodTablesAndNoVirtualAdjustmentContract': folder == 'tokenizer'}
        functions.append(proof)
assert len(functions) == 46
packet = {'schemaVersion': 1, 'programId': '0004000e001acb00',
    'moduleSha256': functions[0]['canonicalIdentity']['moduleSha256'],
    'acceptedSourceCreditGranted': 0, 'functions': functions, 'headers': list(headers.values()),
    'originalPackets': packets, 'independentReplay': pin('evidence/verification/wave013-isolated-a9c62a1.json'),
    'supplementalInventory': pin('config/native-function-overlays.json'),
    'exactCandidateExcludedPendingSeparateAdmission': 'fn_004bfcbc',
    'originalInstructionBytes': sum(row['originalInstructionBytes'] for row in functions)}
(ROOT / 'evidence/functional/pattern013.json').write_text(json.dumps(packet, indent=2) + '\n')
print(json.dumps({'reviewedFunctions': len(functions), 'originalInstructionBytes': packet['originalInstructionBytes'],
                  'exactSourceCredit': 0}))
