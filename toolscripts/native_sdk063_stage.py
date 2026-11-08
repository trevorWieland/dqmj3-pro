import argparse
import json
from pathlib import Path
import subprocess
import sys

import native_stream061_stage as common

ROOT = Path(__file__).resolve().parents[1]
LANE = ROOT / 'work/native-sdk063'
BASE = ROOT / 'work/native-sdk063-public/v1'
MANIFEST = ROOT / 'evidence/lanes/native-sdk063/stage-v1/stage-inputs.json'


def contract():
    data = common.read(MANIFEST)
    if len(data['files']) != 5:
        raise ValueError('063 declared source roster changed')
    records, seen = [], set()
    for row in data['files']:
        source = (ROOT / row['publicInput']['path']).resolve()
        relative = Path(row['stagedRelativePath'])
        destination = (LANE / relative).resolve()
        if (relative.is_absolute() or not destination.is_relative_to(LANE.resolve())
                or destination in seen or not source.is_relative_to(ROOT)
                or common.pin(source) != row['publicInput']):
            raise ValueError('063 public source or staged path differs')
        records.append((source, destination, row['publicInput']))
        seen.add(destination)
    return records


def prepare():
    records = contract()
    if LANE.exists() or BASE.exists():
        raise ValueError('063 bootstrap refuses existing private or public replay namespaces')
    BASE.mkdir(parents=True, exist_ok=False)
    LANE.mkdir(exist_ok=False)
    for source, destination, expected in records:
        destination.parent.mkdir(parents=True, exist_ok=True)
        destination.write_bytes(source.read_bytes())
    common.verify(records)
    common.write(BASE / 'staged-inputs.json', dict(sourceOnly=True, copiedInputs=5,
        repositoryToolsOrOriginalArchivesCopied=False, sourceCreditGranted=0))


def proof():
    records = contract()
    common.verify(records)
    sys.path.insert(0, str(ROOT / 'work/native-asset062'))
    from inputs062 import inputs as prerequisite_inputs
    frozen_before = prerequisite_inputs()
    producer = common.pin(Path(__file__))
    for name, arguments in [('positive', [LANE / 'qualify063.py', LANE / 'attempt004']),
                            ('copy-and-controls', [LANE / 'verify063.py'])]:
        result = subprocess.run([sys.executable, *map(str, arguments)], cwd=ROOT, capture_output=True)
        (BASE / (name + '.log')).write_bytes(result.stdout + result.stderr)
        if result.returncode:
            raise ValueError('063 complete positive/source-copy/control replay failed: ' + name)
    value = common.read(LANE / 'verification.json')
    expected = dict(status='standalone-sdk-words-full-source-copy-and-returning-controls-passed',
        sets=408, observations=1632, originalThumbInstructions=22,
        completeReportBytesIdentical=True, identicalArtifactPairs=10, returningControlChecks=9)
    if any(value.get(k) != v for k,v in expected.items()):
        raise ValueError('063 replay did not meet the complete standalone entry scope')
    common.verify(records)
    contract()
    if prerequisite_inputs() != frozen_before:
        raise ValueError('063 inherited loader/runtime/header prerequisites changed')
    if common.pin(Path(__file__)) != producer:
        raise ValueError('063 bootstrap changed during proof')
    common.write(BASE / 'public-input-guard.json', dict(unchanged=True, producer=producer,
        inheritedPrerequisiteInputs=frozen_before,
        copiedFilesAreNotTheCompleteDependencyClosure=True,
        files=[dict(publicInput=expected, stagedInput=common.pin(destination))
               for source,destination,expected in records], sourceCreditGranted=0))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('phase', choices=['check', 'prepare', 'proof'])
    phase = parser.parse_args().phase
    if phase == 'prepare': prepare()
    elif phase == 'proof': proof()
    else: contract()
    print(json.dumps(dict(phase=phase, completed=True, sourceCreditGranted=0)))
