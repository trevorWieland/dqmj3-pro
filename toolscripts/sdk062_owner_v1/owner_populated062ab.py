import json
from build062ab import WORK,build
from runtime062ab import ConfigRuntime
from owner_proof062ab import program

def run(folder):
    for target in ['arm','windows','a64']:build(folder/'build'/target,target)
    rows=[];coverage=set()
    cases=[([],0),([1],1),(list(range(80)),0),(list(range(80,0,-1)),45),([0,0xffffffff,0x80000000,0x7fffffff,0,0xffffffff,1,1,2],8)]
    for target in ['original','arm','windows','a64']:
        runtime=ConfigRuntime(target,folder/'build')
        try:
            for deleting in [False,True]:
                for keys,timers in cases:rows.append(dict(profile=target,**program(runtime,keys=keys,destroy=True,timer_steps=timers,deleting=deleting)))
            if target=='original':coverage.update(runtime.original.coverage)
            print('062ab populated owner',target,'passed',flush=True)
        finally:runtime.close()
    result=dict(status='bounded-real-owner-init-insert88-destroy-passed',observations=rows,sets=len(rows),originalCoverage=sorted(coverage),sourceCreditGranted=0)
    (folder/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    return result
if __name__=='__main__':run(WORK/'populated-attempt007')
