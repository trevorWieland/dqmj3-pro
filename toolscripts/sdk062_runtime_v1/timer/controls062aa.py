import hashlib
import json
from build062aa import build,WORK
from runtime062aa import TimerRuntime
from proof062aa import program,endpoint
A=endpoint(0x01020304,1000,1);B=endpoint(0x11111111,2000,2);C=endpoint(0x22222222,3000,3)
CONTROLS=[
('set-success-return-zero','timer_set062aa.c','    return 1;','    return 0;',(1000,0,[('set',A,B,1)],1)),
('constructor-address-tag','timer_initialize062aa.c','    map->address_tag = (SdkByte062s)(__UINTPTR_TYPE__)timer;','    map->address_tag = (SdkByte062s)(__UINTPTR_TYPE__)timer ^ 1;',(1000,0,[],1)),
('constructor-truncates-timeout','timer_initialize062aa.c','    timer->timeout = timeout;','    timer->timeout = (SdkByte062s)timeout;',(0x80000100,0,[],1)),
('endpoint-loses-last-word','endpoint062aa.c','i < 7','i < 6',(1000,0,[('set',A,B,1)],1)),
('endpoint-unsigned-comparison','endpoint062aa.c','return first < second ? -1 : 1;','return (SdkWord062s)first < (SdkWord062s)second ? -1 : 1;',(1000,0,[('set',endpoint(0x80000000,1),B,1),('set',endpoint(0x7fffffff,1),B,1)],1)),
('replacement-requires-one','timer_set062aa.c','    if (replace == 0)','    if (replace != 1)',(1000,0,[('set',A,B,0),('set',A,C,0x80000000)],1)),
('update-threshold-off-by-one','timer_update062aa.c','    if (elapsed < 1000)','    if (elapsed <= 1000)',(1000,0,[('set',A,B,1),('tick',1000)],1)),
('update-signed-elapsed','timer_update062aa.c','    if (elapsed < 1000)','    if ((SdkSigned062s)elapsed < 1000)',(0x80000100,1000,[('set',A,B,1),('tick',999)],1)),
('expiry-retains-zero-counter','timer_update062aa.c','current_node->pair.remaining > elapsed','current_node->pair.remaining >= elapsed',(1000,0,[('set',A,B,1),('tick',1000)],1)),
('update-uses-full64-delta','timer_update062aa.c','    SdkWord062s elapsed = current.low - timer->last.low;','    SdkWide062u elapsed = sdk_clock_pair_read062u(&current) - sdk_clock_pair_read062u(&timer->last);',(1000,0,[('set',A,B,1),('tick',1<<32)],1)),
('update-stores-clock-too-early','timer_update062aa.c','    if (elapsed < 1000)\n        return;','    if (elapsed < 1000) { timer->last = current; return; }',(1000,100,[('set',A,B,1),('tick',999)],1)),
]

def controls(folder):
    rows=[]
    for label,name,old,new,case in CONTROLS:
        text=(WORK/'source'/name).read_text(encoding='utf-8')
        if text.count(old)!=(2 if label=='set-success-return-zero'else 1):raise ValueError('062aa negative mutation uniqueness failed '+label)
        out=folder/label;out.mkdir(parents=True,exist_ok=True);mutant=out/name;mutant.write_text(text.replace(old,new),encoding='utf-8');observations=[]
        for target in ['arm','windows','a64']:
            build(out/'build'/target,target,{name:mutant});r=TimerRuntime(target,out/'build')
            try:
                try:program(r,*case)
                except ValueError as error:
                    if not str(error).startswith('062aa normally-returning'):raise
                    comparison=r.last_comparison
                    if not comparison['normallyReturned']:raise ValueError('062aa negative did not return')
                    observations.append(dict(profile=target,normalReturnBeforeRejection=True,sameFinalArena=comparison['wholeArenaEqual'],reason=str(error)))
                else:raise ValueError('062aa wrong source accepted '+label)
            finally:r.close()
        rows.append(dict(label=label,case=case,sourceSha256=hashlib.sha256(mutant.read_bytes()).hexdigest(),observations=observations));print('062aa rejected returning control',label,'on three targets',flush=True)
    result=dict(status='returning-wrong-source-controls-rejected',checks=sum(len(x['observations'])for x in rows),sameFinalArenaChecks=sum(o['sameFinalArena']for x in rows for o in x['observations']),controls=rows,sourceCreditGranted=0)
    (folder/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result
if __name__=='__main__':controls(WORK/'attempt001/controls')
