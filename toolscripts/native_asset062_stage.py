import argparse
import json
from pathlib import Path
import subprocess
import sys

import native_stream061_stage as predecessor

ROOT = Path(__file__).resolve().parents[1]
BASE = ROOT / 'work/native-asset062-public/v1'
PUBLIC = ROOT / 'evidence/lanes/native-asset062/stage-v1'
LANE = ROOT / 'work/native-asset062'
read = predecessor.read
pin = predecessor.pin
write = predecessor.write
verify = predecessor.verify


def contracts():
    groups = predecessor.contracts()
    old = read(ROOT / 'evidence/lanes/native-stream061/stage-v1/stage-inputs.json')
    origin = old['publicFrozenOrigin']
    if pin(ROOT / origin['path']) != origin:
        raise ValueError('061 frozen origin changed')
    groups[1][1].append((ROOT / origin['path'], groups[1][0] / 'ready.json', origin))
    manifest = read(PUBLIC / 'stage-inputs.json')
    if len(manifest['files']) != 45:
        raise ValueError('062 frozen source roster changed')
    records, destinations = [], set()
    for row in manifest['files']:
        source = (ROOT / row['publicInput']['path']).resolve()
        relative = Path(row['stagedRelativePath'])
        destination = (LANE / relative).resolve()
        if (relative.is_absolute() or not destination.is_relative_to(LANE.resolve())
                or destination in destinations or not source.is_relative_to(ROOT)
                or source.is_symlink() or pin(source) != row['publicInput']):
            raise ValueError('062 invalid public source or staged destination')
        if (not row['byteIdentical'] or row['privateFrozen']['sha256'] != row['publicInput']['sha256']
                or row['privateFrozen']['bytes'] != row['publicInput']['bytes']):
            raise ValueError('062 public promotion changed a frozen source input')
        records.append((source, destination, row['publicInput']))
        destinations.add(destination)
    origin = manifest['publicFrozenOrigin']
    if pin(ROOT / origin['path']) != origin:
        raise ValueError('062 frozen origin changed')
    groups.append((LANE, records))
    return groups


def prepare():
    groups = contracts()
    if BASE.exists() or any(lane.exists() for lane, records in groups):
        raise ValueError('062 bootstrap requires a fresh replay; private lanes are never overwritten')
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


def run(arguments, logfile):
    result = subprocess.run([sys.executable, *map(str, arguments)], cwd=ROOT, capture_output=True)
    logfile.write_bytes(result.stdout + result.stderr)
    if result.returncode:
        raise ValueError('062 public replay failed; retained ' + str(logfile))


def proof():
    groups = contracts()
    for lane, records in groups:
        verify(records)
    producer = pin(Path(__file__))
    output = BASE / 'proof'
    output.mkdir(exist_ok=False)
    code = ('import sys;from pathlib import Path;sys.path.insert(0,sys.argv[1]);'
            'from build061 import build;build(Path(sys.argv[2]),"arm")')
    run(['-c', code, ROOT / 'work/native-stream061',
         ROOT / 'work/native-stream061/final-attempt002/build/arm'], output / 'prerequisite-build.log')
    run([LANE / 'verify062.py'], output / 'proof.log')
    report = read(LANE / 'verification.json')
    expected = dict(status='all-six-provider-reports-controls-artifacts-and-tests-replayed-from-own-source',
                    setCount=681, fourProfileObservations=2724, returningControls=13,
                    returningControlChecks=39, freshTests=17, copiedTests=17,
                    identicalArtifactPairs=580, allSemanticReportBytesIdentical=True,
                    allObjectLinkedArtifactBytesIdentical=True, wholeResourceCallerClaim=False)
    if any(report.get(key) != value for key, value in expected.items()):
        raise ValueError('062 replay did not meet the complete frozen provider scope')
    for lane, records in groups:
        verify(records)
    contracts()
    if pin(Path(__file__)) != producer:
        raise ValueError('062 bootstrap changed during proof')
    write(output / 'public-input-guard.json', dict(unchanged=True, producer=producer,
        files=[dict(publicInput=expected, stagedInput=pin(destination))
               for lane, records in groups for source, destination, expected in records],
        sourceCreditGranted=0, wholeResourceCallerClaim=False))


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
