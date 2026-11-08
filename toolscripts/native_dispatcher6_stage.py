import argparse
import json
import os
from pathlib import Path
import subprocess
import sys

import native_stream061_stage as common

ROOT=Path(__file__).resolve().parents[1]
LANE=ROOT/'work/native-state055'
FAMILY=LANE/'dispatcher-v6'
BASE=ROOT/'work/dispatcher6-public/v1'
PUBLIC=ROOT/'evidence/lanes/native-state055/dispatcher-v6-public'


def contract():
    value=common.read(PUBLIC/'stage-inputs.json')
    if len(value['files'])!=54 or common.pin(ROOT/value['publicFrozenOrigin']['path'])!=value['publicFrozenOrigin']:
        raise ValueError('Dispatcher frozen source roster or origin changed')
    frozen={x['path']:x for x in common.read(ROOT/value['publicFrozenOrigin']['path'])['files']}
    records=[];seen=set()
    for row in value['files']:
        source=(ROOT/row['publicInput']['path']).resolve()
        relative=Path(row['stagedPath']);destination=(ROOT/relative).resolve()
        if (relative.is_absolute() or not source.is_relative_to(ROOT) or not destination.is_relative_to(ROOT)
                or destination in seen or common.pin(source)!=row['publicInput']):
            raise ValueError('Dispatcher public or staged input changed')
        if (frozen.get(row['privateFrozen']['path'])!=row['privateFrozen'] or
                not row['byteIdentical'] or row['privateFrozen']['sha256']!=row['publicInput']['sha256']
                or row['privateFrozen']['bytes']!=row['publicInput']['bytes']):
            raise ValueError('Dispatcher promotion changed frozen input bytes')
        if relative.parts[0]=='work' and not destination.is_relative_to(LANE):
            raise ValueError('Dispatcher private input outside its owned namespace')
        if not relative.parts[0]in ['src','toolscripts','work']:
            raise ValueError('Dispatcher staged input outside declared source/work namespaces')
        records.append((source,destination,row['publicInput']))
        seen.add(destination)
    return records


def prepare():
    records=contract()
    if LANE.exists()or BASE.exists():
        raise ValueError('Dispatcher bootstrap refuses existing private/replay namespaces')
    BASE.mkdir(parents=True,exist_ok=False);LANE.mkdir(exist_ok=False)
    for source,destination,expected in records:
        if destination.is_relative_to(LANE):
            if destination.exists():raise ValueError('Dispatcher staged destination already exists')
            destination.parent.mkdir(parents=True,exist_ok=True);destination.write_bytes(source.read_bytes())
        elif common.pin(destination)!=expected:
            raise ValueError('Dispatcher existing shared source differs')
    common.verify(records)
    common.write(BASE/'staged-inputs.json',dict(status='byte-identical-minimal-dispatcher-bootstrap',
        declaredInputs=54,repositoryToolsOrOriginalArchivesCopied=False,sourceCreditGranted=0))


def proof():
    records=contract();common.verify(records);producer=common.pin(Path(__file__))
    commands=[('source-audit',['controller6_source_audit.py']),('build',['controller6_build.py']),
        ('positive',['controller6_execution.py']),('copy',['controller6_copy.py']),
        ('copied-positive',['controller6_execution.py','--stage',FAMILY/'replay-v1']),
        ('controls',['controller6_controls.py','--stage',FAMILY/'controls-primary-v2']),
        ('copied-controls',['controller6_controls.py','--stage',FAMILY/'replay-v1']),
        ('supplement',['controller6_final_paths.py']),('wrapper',['controller6_wrapper_probe.py']),
        ('invariants',['controller6_invariants.py']),('verify',['controller6_verify.py']),
        ('producer-tests',['-m','unittest','work/native-state055/test_controller6.py','-v'])]
    environment=dict(os.environ);environment['PYTHONPATH']=os.pathsep.join([str(ROOT/'toolscripts'),str(LANE)])
    for name,arguments in commands:
        if not str(arguments[0]).startswith('-'):arguments=[LANE/arguments[0],*arguments[1:]]
        result=subprocess.run([sys.executable,*map(str,arguments)],cwd=ROOT,env=environment,capture_output=True)
        (BASE/(name+'.log')).write_bytes(result.stdout+result.stderr)
        if result.returncode:raise ValueError('Dispatcher complete proof failed; retained '+name+'.log')
    value=common.read(FAMILY/'source-replay-comparison.json')
    expected=dict(caseSets=3086,observations=12344,rawRuntimeRowsExactlyEqual=True,
        sourceSnapshotFiles=21,sourceSnapshotBytes=48229,originalInstructionCount=4574,
        finalObservedOriginalInstructions=4569,invariantAccountedInstructions=5,
        finalCoverageCompletelyAccounted=True,executionEnvelopeBytesEqual=True)
    if any(value.get(k)!=v for k,v in expected.items()):raise ValueError('Dispatcher complete scope differs')
    common.verify(records);contract()
    if common.pin(Path(__file__))!=producer:raise ValueError('Dispatcher bootstrap changed during proof')
    common.write(BASE/'public-input-guard.json',dict(unchanged=True,producer=producer,
        files=[dict(publicInput=expected,stagedInput=common.pin(destination))for source,destination,expected in records],
        sourceCreditGranted=0,wholeGameClaim=False))


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('phase',choices=['check','prepare','proof'])
    phase=parser.parse_args().phase
    if phase=='prepare':prepare()
    elif phase=='proof':proof()
    else:contract()
    print(json.dumps(dict(phase=phase,completed=True,sourceCreditGranted=0)))
