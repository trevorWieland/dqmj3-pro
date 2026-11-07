import argparse
import hashlib
import json
import os
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
PUBLIC = ROOT / 'evidence/lanes/native-state055/controller-v5-public'
LANE = ROOT / 'work/native-state055'
STAGE = LANE / 'controller-v5'
BASE = ROOT / 'work/controller055-public/v1'


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def write(path, value):
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def contract():
    manifest = read(PUBLIC / 'stage-inputs.json')
    if len(manifest['files']) != 62 or pin(ROOT / manifest['publicFrozenOrigin']['path']) != manifest['publicFrozenOrigin']:
        raise ValueError('055 frozen source roster or origin changed')
    origin = read(ROOT / manifest['publicFrozenOrigin']['path'])
    frozen = {row['path']: row for row in origin['files']}
    records, destinations = [], set()
    for row in manifest['files']:
        source_path = ROOT / row['publicInput']['path']
        source = source_path.resolve()
        relative = Path(row['stagedRelativePath'])
        destination = (LANE / relative).resolve()
        if (relative.is_absolute() or not destination.is_relative_to(LANE.resolve())
                or destination in destinations or not source.is_relative_to(ROOT)
                or source_path.is_symlink() or pin(source) != row['publicInput']):
            raise ValueError('Invalid 055 staged path or changed public input')
        if (frozen.get(row['privateFrozen']['path']) != row['privateFrozen']
                or not row['byteIdentical'] or row['privateFrozen']['sha256'] != row['publicInput']['sha256']
                or row['privateFrozen']['bytes'] != row['publicInput']['bytes']):
            raise ValueError('055 promotion changed frozen source')
        records.append((source, destination, row['publicInput']))
        destinations.add(destination)
    return records


def verify(records):
    for source, destination, expected in records:
        if pin(source) != expected:
            raise ValueError('055 public source changed during replay')
        actual = pin(destination)
        if (actual['bytes'], actual['sha256']) != (expected['bytes'], expected['sha256']):
            raise ValueError('055 staged source changed: ' + str(destination))


def prepare():
    records = contract()
    if LANE.exists() or BASE.exists():
        raise ValueError('055 bootstrap requires a fresh replay; private frozen work is never overwritten')
    BASE.mkdir(parents=True, exist_ok=False)
    LANE.mkdir(exist_ok=False)
    for source, destination, expected in records:
        destination.parent.mkdir(parents=True, exist_ok=True)
        destination.write_bytes(source.read_bytes())
    verify(records)
    write(BASE / 'staged-inputs.json', dict(status='byte-identical-public-controller055-source-stage',
        files=[dict(publicInput=expected, stagedInput=pin(destination)) for source, destination, expected in records],
        repositoryToolsOrOriginalInputsCopied=False, sourceCreditGranted=0))


def run_phase(phase):
    records = contract()
    verify(records)
    producer = pin(Path(__file__))
    output = BASE / phase
    output.mkdir(exist_ok=False)
    copied = STAGE / 'replay-v1'
    if phase == 'positive':
        arguments = [LANE / 'controller5_execution.py']
    elif phase == 'controls':
        arguments = [LANE / 'controller5_controls.py']
    elif phase == 'copy':
        arguments = [LANE / 'controller5_copy.py']
    elif phase == 'repeat':
        arguments = [LANE / 'controller5_execution.py', '--stage', copied, '--dependencies', copied / 'dependency-source']
    elif phase == 'copy-controls':
        code = 'import sys;from pathlib import Path;from controller5_controls import run;run(Path(sys.argv[1]),Path(sys.argv[1]))'
        arguments = ['-c', code, copied]
    elif phase == 'padding':
        arguments = [LANE / 'controller5_padding_audit.py']
    elif phase == 'verify':
        arguments = [LANE / 'controller5_verify.py']
    elif phase == 'checks':
        arguments = ['-m', 'unittest', 'discover', '-s', LANE, '-p', 'test_controller5.py', '-v']
    else:
        raise ValueError('Unknown 055 replay phase')
    environment = dict(os.environ)
    environment['PYTHONPATH'] = os.pathsep.join([str(ROOT / 'toolscripts'), str(LANE)])
    result = subprocess.run([sys.executable, *map(str, arguments)], cwd=ROOT, env=environment, capture_output=True)
    (output / 'run.log').write_bytes(result.stdout + result.stderr)
    if result.returncode:
        raise ValueError('055 phase failed; retained diagnostics: ' + phase)
    if phase == 'checks' and (b'Ran 15 tests' not in result.stderr or not result.stderr.strip().endswith(b'OK')):
        raise ValueError('055 verification tests were skipped')
    verify(records)
    contract()
    if pin(Path(__file__)) != producer:
        raise ValueError('055 bootstrap changed during replay')
    write(output / 'public-input-guard.json', dict(unchanged=True, producer=producer,
        files=[dict(publicInput=expected, stagedInput=pin(destination)) for source, destination, expected in records],
        sourceOrMatchingCreditGranted=0))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('phase', choices=['check', 'prepare', 'positive', 'controls', 'copy', 'repeat',
                                        'copy-controls', 'padding', 'verify', 'checks'])
    phase = parser.parse_args().phase
    if phase == 'check':
        contract()
    elif phase == 'prepare':
        prepare()
    else:
        run_phase(phase)
    print(json.dumps(dict(phase=phase, completed=True, sourceCreditGranted=0)))
