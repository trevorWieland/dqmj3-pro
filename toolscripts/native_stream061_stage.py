import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
BASE = ROOT / 'work/native-stream061-public/v1'


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def write(path, value):
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def contract(number):
    public = ROOT / f'evidence/lanes/native-stream{number}/stage-v1'
    lane = ROOT / f'work/native-stream{number}'
    manifest = read(public / 'stage-inputs.json')
    if len(manifest['files']) != {'059': 40, '061': 22}[number]:
        raise ValueError('Frozen source roster changed')
    records, destinations = [], set()
    for row in manifest['files']:
        source = (ROOT / row['publicInput']['path']).resolve()
        relative = Path(row['stagedRelativePath'])
        destination = (lane / relative).resolve()
        if (relative.is_absolute() or not destination.is_relative_to(lane.resolve())
                or destination in destinations or not source.is_relative_to(ROOT)
                or source.is_symlink() or pin(source) != row['publicInput']):
            raise ValueError('Invalid staged path or changed public input')
        if (not row['byteIdentical'] or row['privateFrozen']['sha256'] != row['publicInput']['sha256']
                or row['privateFrozen']['bytes'] != row['publicInput']['bytes']):
            raise ValueError('Public promotion changed a frozen source input')
        records.append((source, destination, row['publicInput']))
        destinations.add(destination)
    origin = manifest['publicFrozenOrigin']
    if pin(ROOT / origin['path']) != origin:
        raise ValueError('Frozen origin changed')
    if number == '059':
        records.append((ROOT / origin['path'], lane / 'ready.json', origin))
    return lane, records


def contracts():
    return [contract(number) for number in ['059', '061']]


def verify(records):
    for source, destination, expected in records:
        if pin(source) != expected:
            raise ValueError('Public source changed during replay')
        actual = pin(destination)
        if (actual['sha256'], actual['bytes']) != (expected['sha256'], expected['bytes']):
            raise ValueError('Staged source changed: ' + str(destination))


def prepare():
    groups = contracts()
    if BASE.exists() or any(lane.exists() for lane, records in groups):
        raise ValueError('061 bootstrap requires a fresh replay; existing private lanes are never overwritten')
    BASE.mkdir(parents=True, exist_ok=False)
    for lane, records in groups:
        lane.mkdir(exist_ok=False)
        for source, destination, expected in records:
            destination.parent.mkdir(parents=True, exist_ok=True)
            destination.write_bytes(source.read_bytes())
        verify(records)
    write(BASE / 'staged-inputs.json', dict(status='byte-identical-public-source-only-bootstrap',
        files=[dict(publicInput=expected, stagedInput=pin(destination))
               for lane, records in groups for source, destination, expected in records],
        repositoryToolsOrOriginalInputsCopied=False, sourceCreditGranted=0))


def proof():
    groups = contracts()
    for lane, records in groups:
        verify(records)
    producer = pin(Path(__file__))
    output = BASE / 'proof'
    output.mkdir(exist_ok=False)
    result = subprocess.run([sys.executable, ROOT / 'work/native-stream061/verify061.py'],
                            cwd=ROOT, capture_output=True)
    (output / 'proof.log').write_bytes(result.stdout + result.stderr)
    if result.returncode:
        raise ValueError('061 full fresh/copy replay failed; diagnostics retained')
    report = read(ROOT / 'work/native-stream061/verification.json')
    if (report['status'] != 'own-source-copy-full-semantic-and-artifact-replay-passed'
            or report['sets'] != 380 or report['observations'] != 1520 or report['artifactPairs'] != 371
            or report['returningControlChecks'] != 18 or report['freshTests'] != 10 or report['copiedTests'] != 10
            or not report['allSemanticReportBytesIdentical'] or not report['allObjectLinkedBytesIdentical']):
        raise ValueError('061 replay did not meet the complete frozen scope')
    for lane, records in groups:
        verify(records)
    contracts()
    if pin(Path(__file__)) != producer:
        raise ValueError('061 bootstrap producer changed during proof')
    write(output / 'public-input-guard.json', dict(unchanged=True, producer=producer,
        files=[dict(publicInput=expected, stagedInput=pin(destination))
               for lane, records in groups for source, destination, expected in records], sourceCreditGranted=0))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('phase', choices=['check', 'prepare', 'proof'])
    phase = parser.parse_args().phase
    if phase == 'prepare':
        prepare()
    elif phase == 'proof':
        proof()
    else:
        contracts()
    print(json.dumps(dict(phase=phase, completed=True, sourceCreditGranted=0)))
