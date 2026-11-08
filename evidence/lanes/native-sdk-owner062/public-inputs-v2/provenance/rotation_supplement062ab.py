import hashlib
import json
from pathlib import Path
import random
import sys
W=Path(__file__).resolve().parent
SNAPSHOT=W/'copied-source-v1'
sys.dont_write_bytecode=True
sys.pycache_prefix=str(W/'rotation-entry-unwritten')
sys.path.insert(0,str(SNAPSHOT))
from build062ab import ROOT,build
from runtime062ab import ConfigRuntime
from owner_proof062ab import program
from guard062ab import audited,require_clean

def pin(path):
    data=Path(path).read_bytes();return dict(bytes=len(data),sha256=hashlib.sha256(data).hexdigest())

def run():
    output=W/'rotation-supplement-v3'
    if output.exists():raise ValueError('exclusive rotation supplement required')
    output.mkdir();sys.pycache_prefix=str(output/'unwritten-bytecode')
    original=json.loads((W/'copied-source-v1/qualified-v1/qualification.json').read_text())
    declared={Path(p):expected for p,expected in original['inputs'].items()}
    for root in [W/'final-attempt001',SNAPSHOT/'qualified-v1']:
        for p in root.rglob('*'):
            if p.is_file()and p.suffix in ['.o','.elf','.dll','.lib']:declared[p]=pin(p)
    declared[Path(__file__).resolve()]=pin(Path(__file__))
    primary_qualification=json.loads((W/'final-attempt001/qualification.json').read_text());primary_report=W/'final-attempt001/owner/report.json'
    if pin(primary_report)!=primary_qualification['owner']:raise ValueError('primary coverage report no longer matches qualification')
    declared[primary_report]=pin(primary_report)
    if any(pin(p)!=expected for p,expected in declared.items()):raise ValueError('rotation supplement changed frozen input')
    reads,libraries,rejected=audited(ROOT,output,declared)
    rng=random.Random(62062062)
    cases=[('left-inner',[3,1,2]),('right-inner',[1,3,2]),('zigzag',[n//2 if n%2==0 else 200-n//2 for n in range(80)]),('shuffled',rng.sample(range(1000),90))]
    rows=[];primary_seen=set(json.loads((W/'final-attempt001/owner/report.json').read_text())['originalCoverage']);seen=set(primary_seen);additional_seen=set()
    for name,folder in [('primary',W/'final-attempt001/owner/build'),('copied',SNAPSHOT/'qualified-v1/owner/build')]:
        for target in ['original','arm','windows','a64']:
            runtime=ConfigRuntime(target,folder)
            try:
                for label,keys in cases:rows.append(dict(build=name,profile=target,label=label,**program(runtime,keys=keys,timer_steps=7,destroy=True,deleting=True)))
                if target=='original':seen.update(runtime.original.coverage);additional_seen.update(runtime.original.coverage)
            finally:runtime.close()
    selected=set(range(0x76fd78,0x770150,4));missing=sorted(selected-seen)
    if missing:raise ValueError('remaining original insertion PCs '+str(missing))
    source=SNAPSHOT/'source/owner_insert88062ab.c';text=source.read_text();old='owner_left062ab(map, current);'
    if text.count(old)!=1:raise ValueError('inner-rotation control source drift')
    mutant=output/'control/owner_insert88062ab.c';mutant.parent.mkdir();mutant.write_text(text.replace(old,old+' current->black = 1;'),encoding='utf-8')
    for target in ['arm','windows','a64']:build(output/'control/build'/target,target,{source.name:mutant})
    controls=[]
    for target in ['arm','windows','a64']:
        runtime=ConfigRuntime(target,output/'control/build')
        try:
            error=None
            try:program(runtime,keys=[3,1,2],destroy=True)
            except ValueError as exc:error=str(exc)
            observed=getattr(runtime,'last_comparison',{})
            if not error or not observed.get('normallyReturned'):raise ValueError('inner-rotation control did not return and reject '+str(error))
            controls.append(dict(profile=target,error=error,observation=observed,returnedAndRejected=True))
        finally:runtime.close()
    require_clean(rejected)
    if any(pin(p)!=expected for p,expected in declared.items()):raise ValueError('frozen rotation input changed')
    result=dict(status='immutable-provider-inner-rotation-supplement-passed',inputs={str(p):v for p,v in declared.items()},programs=rows,originalInsertionPcVisits=len(selected),primaryInsertionPcVisits=len(selected&primary_seen),additionalCohortInsertionPcVisits=len(selected&additional_seen),newInstructionAddresses=sorted((selected&additional_seen)-primary_seen),unvisitedInsertionPcs=[],controls=controls,sourceProductChanges=False,sourceCreditGranted=0,blockedHistoricalReads=rejected)
    (output/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print('062ab rotation supplement passed',len(rows),'observations',flush=True);return result
if __name__=='__main__':run()
