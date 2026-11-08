import argparse
import json
import os
from pathlib import Path
import subprocess
import sys
import native_stream061_stage as common

ROOT = Path(__file__).resolve().parents[1]
LANE = ROOT / 'work/native-state055'
BASE = ROOT / 'work/init78-public/v1'
PUBLIC = ROOT / 'evidence/lanes/native-state055/init78-public'


def contract():
    value = common.read(PUBLIC / 'stage-inputs.json')
    if len(value['files']) != 56 or len(value['frozenOrigins']) != 2:
        raise ValueError('Initialization78 complete source/origin roster differs')
    frozen = {}
    for row in value['frozenOrigins']:
        source = (ROOT / row['publicInput']['path']).resolve()
        if not source.is_relative_to(PUBLIC) or common.pin(source) != row['publicInput']:
            raise ValueError('Initialization78 public frozen origin changed')
        before, after = row['privateFrozen'], row['publicInput']
        if (before['bytes'], before['sha256']) != (after['bytes'], after['sha256']):
            raise ValueError('Initialization78 frozen origin bytes differ')
        frozen[before['path']] = before
        for item in common.read(source)['files']:
            if item['path'] in frozen and frozen[item['path']] != item:
                raise ValueError('Initialization78 frozen dependency identities conflict')
            frozen[item['path']] = item
    records, seen = [], set()
    for row in value['files']:
        source = (ROOT / row['publicInput']['path']).resolve()
        relative = Path(row['stagedPath'])
        destination = (ROOT / relative).resolve()
        before, after = row['privateFrozen'], row['publicInput']
        if (relative.is_absolute() or row['stagedPath'] != before['path']
                or not source.is_relative_to(ROOT) or not destination.is_relative_to(ROOT)
                or destination in seen or common.pin(source) != after):
            raise ValueError('Initialization78 public/staged source identity or path differs')
        if source.relative_to(ROOT).parts[0] not in ['src', 'toolscripts', 'evidence']:
            raise ValueError('Initialization78 public input lies outside public source/metadata namespaces')
        if (frozen.get(before['path']) != before or not row['byteIdentical']
                or (before['bytes'], before['sha256']) != (after['bytes'], after['sha256'])):
            raise ValueError('Initialization78 promoted source is not a frozen input')
        if relative.parts[0] not in ['src', 'toolscripts', 'work'] or (
                relative.parts[0] == 'work' and not destination.is_relative_to(LANE)):
            raise ValueError('Initialization78 staged input escapes declared namespaces')
        records.append((source, destination, after))
        seen.add(destination)
    return records


def prepare():
    records = contract()
    if LANE.exists() or BASE.exists():
        raise ValueError('Initialization78 refuses existing private/replay namespaces')
    BASE.mkdir(parents=True, exist_ok=False)
    LANE.mkdir(exist_ok=False)
    for source, destination, expected in records:
        if destination.is_relative_to(LANE):
            if destination.exists():
                raise ValueError('Initialization78 staged destination already exists')
            destination.parent.mkdir(parents=True, exist_ok=True)
            destination.write_bytes(source.read_bytes())
        elif common.pin(destination) != expected:
            raise ValueError('Initialization78 existing shared source differs')
    common.verify(records)
    common.write(BASE / 'staged-inputs.json', dict(status='byte-identical-minimal-initialization78-bootstrap',
        declaredInputs=56, repositoryToolsOrOriginalArchivesCopied=False, sourceCreditGranted=0))


def proof():
    records = contract()
    common.verify(records)
    producer = common.pin(Path(__file__))
    commands = [(name, [name + '.py']) for name in [
        'controller7_context_reference', 'controller7_context_replay', 'controller7_context_coverage',
        'controller7_resource_reference', 'controller7_resource_replay', 'controller7_resource_arm_replay',
        'controller7_resource_coverage']]
    commands.append(('controller7-tests', ['-m', 'unittest', 'work/native-state055/test_controller7_context.py',
        'work/native-state055/test_controller7_resource.py', '-v']))
    commands += [(name, [name + '.py']) for name in ['controller7_cache_reference', 'controller8_measure',
        'controller8_replay_v2', 'controller8_high_a64', 'controller8_data_comparison_v2']]
    commands.append(('controller8-tests', ['-m', 'unittest', 'work/native-state055/test_controller8.py', '-v']))
    environment = dict(os.environ)
    environment['PYTHONPATH'] = os.pathsep.join([str(ROOT / 'toolscripts'), str(LANE)])
    for name, arguments in commands:
        if not arguments[0].startswith('-'):
            arguments = [LANE / arguments[0], *arguments[1:]]
        result = subprocess.run([sys.executable, *map(str, arguments)], cwd=ROOT, env=environment, capture_output=True)
        (BASE / (name + '.log')).write_bytes(result.stdout + result.stderr)
        if result.returncode:
            raise ValueError('Complete initialization78 proof failed; retained ' + name + '.log')
    expected = {
        'controller-init-v7/context-replay-comparison-v1.json': ('allRawExecutionRowsEqual', True),
        'controller-init-v7/resource-replay-comparison-v1.json': ('rawExecutionRowsEqual', True),
        'controller-init-v7/resource-arm-replay-comparison-v1.json': ('artifactByteIdentical', True),
        'controller-init-v8/descriptor-data-comparison-v2.json': ('normalizationAffectedExecutedState', False),
        'controller-init-v8/high-a64-comparison-v2.json': ('artifactByteIdentical', True),
    }
    for relative, (key, value) in expected.items():
        if common.read(LANE / relative).get(key) is not value:
            raise ValueError('Initialization78 declared source-copy/data boundary differs')
    common.verify(records)
    contract()
    if common.pin(Path(__file__)) != producer:
        raise ValueError('Initialization78 bootstrap changed during proof')
    common.write(BASE / 'public-input-guard.json', dict(unchanged=True, producer=producer,
        files=[dict(publicInput=expected, stagedInput=common.pin(destination)) for source, destination, expected in records],
        sourceCreditGranted=0, wholeOwnerHardwareOrGameClaim=False))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('phase', choices=['check', 'prepare', 'proof'])
    phase = parser.parse_args().phase
    if phase == 'prepare':
        prepare()
    elif phase == 'proof':
        proof()
    else:
        contract()
    print(json.dumps(dict(phase=phase, completed=True, sourceCreditGranted=0)))
