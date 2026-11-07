import hashlib
import json
import sys
from pathlib import Path

WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'work/native-stream061'))
from inputs061 import inputs as frozen_inputs
from native_stream058_inputs import environment


def pin(path):
    raw=path.read_bytes();return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(raw),sha256=hashlib.sha256(raw).hexdigest())


def owned():
    fixed=['README.md','claim.json','seed-reference-claim.json','manager-query-claim.json','caller-provider-status.json','development-attempts.json','metadata-stack-review.json','baseline-preservation.json','lifetime-reference-claim.json']
    return sorted(set(WORK.glob('*.py'))|set((WORK/'source').glob('*'))|{WORK/name for name in fixed})


def inputs():
    path=ROOT/'work/native-stream061/ready.json';ready=json.loads(path.read_text(encoding='utf-8'))
    if pin(path)['sha256']!='8bfa87711531123918c3006a2a99dd0ec2cc8d76d676935c17c5fa045a577f1a':raise ValueError('062 frozen061 receipt changed')
    for row in ready['ownedFiles']+ready['runtimeInputs']:
        actual=pin(ROOT/row['path'])
        if actual['sha256']!=row['sha256']or('bytes'in row and actual['bytes']!=row['bytes']):raise ValueError('062 frozen prerequisite changed: '+row['path'])
    rows={r['path']:r for r in frozen_inputs()}
    rows[path.relative_to(ROOT).as_posix()]=pin(path)
    for path in owned():rows[path.relative_to(ROOT).as_posix()]=pin(path)
    return [rows[key]for key in sorted(rows)]


def guard(before,folder):
    after=inputs()
    if before!=after:raise ValueError('062 owned or prerequisite inputs changed during proof')
    (folder/'input-guard.json').write_text(json.dumps(dict(unchanged=True,before=before,after=after,environment=environment()),indent=2)+'\n',encoding='utf-8')
