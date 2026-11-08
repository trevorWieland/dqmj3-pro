import json
from pathlib import Path
from build062u import build,WORK
from proof062u import TaskSession
from clock_proof062u import ClockSession,MASK
from constructor_math_proof062u import constructors,divide
from clock_runtime062u import ClockRuntime

def clock_cases():
    result=[]
    for tick in [0,1,268111855,268111856,268111857,(1<<32)-1,1<<63,MASK//1000,MASK]:
        for initialized in [0,1]:
            for monotonic in [0,1]:result.append(dict(real=False,tick=tick,initialized=initialized,monotonic=monotonic,guard=1))
    for field in ['initialized','monotonic','alternate']:
        for value in range(256):
            profile=dict(real=False,backend=1,initialized=1,monotonic=1,guard=1,last=200,backend_value=100);profile[field]=value;result.append(profile)
    for value in [0,1,100,1<<63,MASK]:
        for offset,last in [(0,0),(0,200),(0,MASK),(MASK-1000,0),(MASK-1000,MASK),(1<<63,1)]:
            for guard in [0,1,2,0xffffffff]:result.append(dict(real=False,backend=1,initialized=1,monotonic=1,guard=guard,offset=offset,last=last,backend_value=value))
    result += [dict(backend=1,initialized=a,monotonic=m,guard=1,last=200,change_initialized=1,initialized_value=v)for a,m,v in [(0,0,0),(0,0,255),(1,0,0),(1,1,0),(0,1,255)]]
    result += [dict(real=False,initialized=a,monotonic=m,backend=b,alternate=z,guard=1)for a in [0,1]for m in [0,1]for b in [0,1]for z in [0,1]]
    result += [{},dict(initialized=1),dict(initialized=1,monotonic=1,guard=1,last=1<<62)]
    return result

def run(folder=None):
    folder=folder or WORK/'final-stage-v1';folder.mkdir(exist_ok=True,parents=True)
    for target in ['arm','windows','a64']:build(folder/'build'/target,target)
    task_rows=[];clock_rows=[];coverage=[];clock_profiles=clock_cases()
    for target in ['original','arm','windows','a64']:
        task=TaskSession(target,folder/'build')
        try:
            for extended in [False,True]:
                for tag in range(256):task_rows.append(task.initialize(0x80000103,tag,extended))
                for flag in [0,1,255,256,0xffffffff]:
                    for alias in ['refs','capture','tag','state']:task_rows.append(task.initialize(flag,167,extended,alias))
            for value in list(range(256))+[261,0xffffffff,0x80000005]:
                for callback in [0,1]:task_rows.append(task.transition(value,callback,1))
            for method in ['sdk_task_complete062u','sdk_task_state_four062u','sdk_task_state_two062u','sdk_task_state_three062u']:task_rows.append(task.transition(0,1,0,method))
            for delay in [-(1<<31),-1,0,1,(1<<31)-1]:task_rows.append(task.simple('sdk_task_set_delay062u',delay))
            task_rows.append(task.simple('sdk_task_dispatch062u'))
            if target=='original':
                for row in json.loads((WORK/'task-core-pre-c-claim.json').read_bytes())['functions']:
                    pcs=set(range(row['address'],row['endExclusive'],4));coverage.append(dict(address=row['address'],mode='ARM',pcVisits=len(pcs&task.r.original.coverage),totalPcs=len(pcs),unvisitedPcs=sorted(pcs-task.r.original.coverage),instructionSha256=row['sha256']))
        finally:task.close()
        clock=ClockSession(target,folder/'build')
        try:
            for index,profile in enumerate(clock_profiles):
                method=['sdk_clock_current062u','sdk_clock_raw062u','sdk_clock_monotonic062u','sdk_clock_locked062u'][index%4];force=0 if index%3 else 0x80000001;clock_rows.append(clock.run(profile,method,force))
                if index%256==0:print('062u',target,'clock',index,'/',len(clock_profiles),flush=True)
            for profile in [dict(real=False,initialized=a,monotonic=m,backend=b,alternate=z,guard=1)for a in [0,1]for m in [0,1]for b in [0,1]for z in [0,1]]:
                for method in ['sdk_clock_current062u','sdk_clock_raw062u','sdk_clock_monotonic062u','sdk_clock_locked062u']:clock_rows.append(clock.run(profile,method))
            if target=='original':
                selected=json.loads((WORK/'clock-pre-c-claim.json').read_bytes())['functions']
                for row in selected:
                    step=2 if row['mode']=='Thumb' else 4;pcs=set(range(row['address'],row['endExclusive'],step));coverage.append(dict(address=row['address'],mode=row['mode'],pcVisits=len(pcs&clock.r.original.coverage),totalPcs=len(pcs),unvisitedPcs=sorted(pcs-clock.r.original.coverage),instructionSha256=row['sha256']))
        finally:clock.close()
        print('062u',target,'task/clock owned state programs passed',flush=True)
    report=dict(status='passed-bounded-task-clock-prerequisite-stage',taskProgramSets=len(task_rows)//4,clockProgramSets=len(clock_rows)//4,fourProfileObservations=len(task_rows)+len(clock_rows),task=task_rows,clock=clock_rows,clockOriginalPcAccounting=coverage,sourceCreditGranted=0,fullFactoryTaskOrStartupCredit=0)
    (folder/'report.json').write_text(json.dumps(report,separators=(',',':'))+'\n',encoding='utf-8');return report

if __name__=='__main__':run()
