import argparse
import hashlib
import json
from pathlib import Path
import sys
from controller5_measure import ROOT,WORK,pin,original_image
from controller5_program_build import build
from controller5_storage_build import build as storage_build
from controller5_program_target_probe import source
from controller5_program_native import Windows,machine
from controller5_reference import execute


def selected_inputs(stage,dependencies):
    paths=list((stage/'source').glob('*.c'))+list((stage/'source').glob('*.h'))
    paths += [dependencies/name for name in ['state055.c','state055.h','selector055.h','address055.h','controller-deps-v1/helpers055.c','controller-deps-v1/helpers055.h','controller-deps-v1/resource055.c','controller-deps-v1/resource055.h']]
    paths += [stage/'inputs.json',stage/'claim.json',ROOT/'evidence/lanes/native-state055/controller-deps-public-v1/writers-claim.json',ROOT/'evidence/lanes/native-state055/controller-deps-public-v1/ready.json',ROOT/'work/native-state055/controller-v5/control-invariants.json']
    for module in list(sys.modules.values()):
        filename=getattr(module,'__file__',None)
        if filename:
            path=Path(filename).resolve()
            if path.is_file()and path.suffix=='.py'and(ROOT/'toolscripts'in path.parents or ROOT/'work/native-state055'in path.parents):paths.append(path)
    return [pin(path)for path in sorted(set(paths))]


def run(stage=WORK,dependencies=None,rebuild=True):
    stage=Path(stage);dependencies=Path(dependencies)if dependencies else ROOT/'src/native/wave055'
    before=selected_inputs(stage,dependencies)
    if rebuild:
        storage_build(stage,dependencies);build(stage,dependencies)
    inputs=json.loads((stage/'inputs.json').read_text())['inputs'];claim=json.loads((stage/'claim.json').read_text())
    image=original_image();windows=Windows(stage);rows=[]
    try:
        for index,case in enumerate(inputs):
            a=execute(case,image,claim,stage);assert a['returned'],(case['label'],a)
            b=source(case,stage)
            keys=['finalArenaSha256','finalControlSha256','finalPair','finalStageMode']
            if case.get('storage_provider'):keys+=['storageProviderObservationsSha256','storageProviderCursor','allocationCacheObservations']
            different=[key for key in keys if a.get(key)!=b.get(key)]
            assert not different,(case['label'],different)
            raw=json.dumps(a.pop('writes'),separators=(',',':')).encode();a['writeTraceSha256']=hashlib.sha256(raw).hexdigest()
            rows.append(dict(inputLabel=case['label'],original=a,authoredArm=b,actualWindows=windows.execute(case),highAarch64=machine(case,stage=stage)))
            if index%64==0:print(index+1,len(inputs),case['label'],flush=True)
    finally:windows.close()
    after=selected_inputs(stage,dependencies);assert before==after,'Guarded source/tool/data drift'
    expected={pc for span in claim['instructionRanges']for pc in range(span['start'],span['endExclusive'],4)}
    seen=set().union(*(set(row['original']['visitedPcs'])for row in rows))&expected
    invariant=json.loads((WORK/'control-invariants.json').read_text());proved=set()
    for name in ['sortedInsert','paddingLoop']:
        span=invariant[name]['unexecuted'];proved.update(range(span['start'],span['endExclusive'],4))
    assert not seen&proved and seen|proved==expected
    result=dict(schemaVersion=1,status='complete-controller-algorithm-bounded-domain-four-target-qualified',cases=rows,caseSets=len(rows),observations=4*len(rows),
                originalExecutedInstructions=len(seen),canonicalInstructions=len(expected),provedUnreachableInstructions=len(proved),
                pins=before,artifacts=[pin(stage/'program-build'/name)for name in ['arm.elf','a64.elf','program055.dll']]+[pin(stage/'storage-build/arm.elf')],
                originalImageInAuthoredExecution=False,wholeGameOrHardwareClaimed=False,universalRawCallerStackEqualityClaimed=False,
                originalProductionInitializationAllocatorOrCompleteOwnerLayoutClaimed=False,sourceCreditGranted=0)
    out=stage/'execution.json';out.write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(report=pin(out),caseSets=len(rows),observations=result['observations'],executed=len(seen),provedUnreachable=len(proved))),flush=True)
    return result


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--stage',type=Path,default=WORK);parser.add_argument('--dependencies',type=Path);parser.add_argument('--no-build',action='store_true');args=parser.parse_args()
    run(args.stage,args.dependencies,not args.no_build)
