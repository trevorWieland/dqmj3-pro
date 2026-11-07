import hashlib
import json
from pathlib import Path
import re


ROOT = Path.cwd()


def read(path):
    return json.loads((ROOT / path).read_text())


def pin(path):
    data = (ROOT / path).read_bytes()
    return {'path': path, 'sha256': hashlib.sha256(data).hexdigest(), 'bytes': len(data)}


ready_path = 'evidence/lanes/squirrel-frozen-functional/ready.json'
assert pin(ready_path)['sha256'] == '4afb550dfa52993a1d7ee60acdee696ae1d097d7752d724ca47a537cc463bc08'
for item in read(ready_path)['pins']:
    assert pin(item['path']) == item
replay_path = 'evidence/verification/source-components-420bcff.json'
replay = read(replay_path)
assert replay['status'] == 'passed' and replay['skippedTests'] == 0
replay_root = Path(replay['replayRoot'])
packet = read('evidence/lanes/squirrel-frozen-functional/proof.json')
assert len(packet['functions']) == 7
headers = set()
for row in packet['functions']:
    assert pin(row['source']['path']) == row['source']
    pending = [ROOT / row['source']['path']]
    while pending:
        path = pending.pop()
        relative = path.relative_to(ROOT).as_posix()
        assert path.read_bytes() == (replay_root / relative).read_bytes()
        for name in re.findall(r'^#include "([^"\n]+)"', path.read_text(), re.M):
            header = (path.parent / name).resolve()
            assert header.is_relative_to(ROOT)
            relative = header.relative_to(ROOT).as_posix()
            if relative not in headers:
                headers.add(relative)
                pending.append(header)
packet['headers'] = [pin(path) for path in sorted(headers)]
packet.update({'status': 'coordinator-reviewed-bounded-functional-squirrel-components',
    'coordinatorFrozenProposal': pin(ready_path), 'independentReplay': pin(replay_path),
    'allTransitiveHeadersIdenticalToCommittedReplay': True,
    'producer': pin(Path(__file__).relative_to(ROOT).as_posix()), 'matchingSourceCreditGranted': 0})
(ROOT / 'evidence/functional/squirrel002-005.json').write_text(json.dumps(packet, indent=2) + '\n')
print(json.dumps({'reviewedFunctions': 7, 'boundedInstructionBytes': 3220,
                  'transitiveHeaderPins': len(headers), 'matchingSourceCreditGranted': 0}))
