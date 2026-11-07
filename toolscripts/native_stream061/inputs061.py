import hashlib
import json
import sys
from pathlib import Path

WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'work/native-stream059'))
from inputs059 import inputs as frozen_inputs
from native_stream058_inputs import environment


def pin(path):
    raw=path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())


def owned():
    return sorted(set(WORK.glob('*.py'))|set((WORK/'source').glob('*'))|{WORK/name for name in ['README.md','asset-boundary-claim.json','api-frontier.json','development-attempts.json','allocator-wrap-attempt.json','first-proof.json']})


def inputs():
    expected='332f20fb69b11ea09ee7c69c27404f49225aa7caf8ee0b226a754a9284d6e762'
    if pin(ROOT/'work/native-stream059/ready.json')['sha256']!=expected:raise ValueError('061 frozen059 receipt changed')
    receipt=json.loads((ROOT/'work/native-stream059/ready.json').read_text(encoding='utf-8'))
    for row in receipt['ownedFiles']+receipt['runtimeInputs']:
        actual=pin(ROOT/row['path'])
        if actual['sha256']!=row['sha256']or('bytes'in row and actual['bytes']!=row['bytes']):raise ValueError('061 frozen059 source/runtime pin changed: '+row['path'])
    rows={r['path']:r for r in frozen_inputs()}
    for path in owned():rows[path.relative_to(ROOT).as_posix()]=pin(path)
    rows['work/native-stream059/ready.json']=pin(ROOT/'work/native-stream059/ready.json')
    return [rows[key]for key in sorted(rows)]


def guard(before,folder):
    after=inputs()
    if before!=after:raise ValueError('061 own or prerequisite inputs changed during proof')
    (folder/'input-guard.json').write_text(json.dumps(dict(unchanged=True,before=before,after=after,environment=environment()),indent=2)+'\n',encoding='utf-8')
