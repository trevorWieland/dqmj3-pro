import argparse
import json
from pathlib import Path
import subprocess
import sys

P = argparse.ArgumentParser()
P.add_argument('--out', type=Path, required=True)
P.add_argument('--root', type=Path)
P.add_argument('--manifest', type=Path)
P.add_argument('--inputs', type=Path)
P.add_argument('--source-only', action='store_true')
P.add_argument('--guard-control')
A = P.parse_args()
W = Path(__file__).resolve().parent
command = [sys.executable, '-I', '-B', str(W/'run.py'), '--out', str(A.out)]
if A.root:
    command += ['--root',str(A.root)]
if A.manifest:
    command += ['--manifest',str(A.manifest)]
if A.inputs:
    command += ['--inputs', str(A.inputs)]
if A.source_only:
    command += ['--source-only']
if A.guard_control:
    command += ['--guard-control', A.guard_control]
if A.out.exists():
    raise ValueError('exclusive registry replay output already exists')
log = A.out.parent / (A.out.name + '.process.log')
with log.open('w') as stream:
    result = subprocess.run(command, stdout=stream, stderr=subprocess.STDOUT)
rejected = []
for name in ['audit-rejections.json', 'late-rejections.json']:
    path = A.out / name
    if path.is_file():
        rejected.extend(json.loads(path.read_text()))
report = A.out / 'report.json'
passed = result.returncode == 0 and not rejected and report.is_file()
if passed:
    passed = json.loads(report.read_text()).get('status') == 'passed'
completion = dict(status='passed' if passed else 'failed', returnCode=result.returncode,
                  rejectedAfterChildExit=rejected, command=command)
if A.out.is_dir():
    (A.out / 'process-completion.json').write_text(json.dumps(completion, indent=2) + '\n')
print(json.dumps(completion))
raise SystemExit(0 if passed else 1)
