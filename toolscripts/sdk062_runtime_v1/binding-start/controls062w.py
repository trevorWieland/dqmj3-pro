import hashlib
import json
from build062w import build,WORK
from runtime062w import BindingStartRuntime
from proof062w import program

CONTROLS=[
('skip-state64','binding_start062w.c','state == 1 || state == 64','state == 1',dict(name='sdk_binding_start062w',state=64,count=0,null=False)),
('wrong-final-state','binding_start062w.c','binding->state = 4;','binding->state = 8;',dict(name='sdk_binding_start062w',state=2,count=0,null=False)),
('truncate-controller-result','binding_start062w.c','    return state;','    return (SdkByte062s)state;',dict(name='sdk_binding_start062w',state=0xff80,count=0,null=False)),
('poll-provider-false','binding_providers062w.c','sdk_binding_poll_ready062w(SdkBinding062v *binding)\n{\n    (void)binding;\n    return 1;','sdk_binding_poll_ready062w(SdkBinding062v *binding)\n{\n    (void)binding;\n    return 0;',dict(name='sdk_binding_start062w',state=2,count=0,null=False)),
('start-provider-false','binding_providers062w.c','sdk_binding_start_ready062w(SdkBinding062v *binding)\n{\n    (void)binding;\n    return 1;','sdk_binding_start_ready062w(SdkBinding062v *binding)\n{\n    (void)binding;\n    return 0;',dict(name='sdk_binding_start062w',state=1,count=0,null=False)),
('query-count-instead-of-state','binding_providers062w.c','    return methods->state(binding);','    (void)methods;\n    return binding->dependents;',dict(name='sdk_binding_query062w',state=7,count=9,null=False)),
('getter-truncates-state','binding_providers062w.c','    return binding->state;','    return (SdkByte062s)binding->state;',dict(name='sdk_binding_state062w',state=0xff80,count=9,null=False)),
('unexpected-dependent-change','binding_start062w.c','    methods(binding)->query(binding);','    methods(binding)->query(binding);\n    ++binding->dependents;',dict(name='sdk_binding_start062w',state=4,count=0,null=False)),
]

def controls(folder):
    records=[]
    for label,name,old,new,case in CONTROLS:
        source=WORK/'source'/name;text=source.read_text(encoding='utf-8');expected=2 if label=='wrong-final-state'else 1
        if text.count(old)!=expected:raise ValueError('062w negative mutation count mismatch '+label)
        out=folder/label;out.mkdir(parents=True,exist_ok=True);mutant=out/name;mutant.write_text(text.replace(old,new),encoding='utf-8');rows=[]
        for target in ['arm','windows','a64']:
            build(out/'build'/target,target,{name:mutant});r=BindingStartRuntime(target,out/'build')
            try:
                try:program(r,case)
                except ValueError as e:
                    message=str(e)
                    if not(message.startswith('062w normally-returning scalar mismatch')or message.startswith('062w normally-returning full-arena mismatch')):raise
                    rows.append(dict(target=target,normalReturnBeforeRejection=True,reason=message,sameFinalArena=label in ['truncate-controller-result','query-count-instead-of-state','getter-truncates-state']))
                else:raise ValueError('062w wrong source accepted '+label)
            finally:r.close()
        records.append(dict(label=label,case=case,sourceSha256=hashlib.sha256(mutant.read_bytes()).hexdigest(),observations=rows));print('062w rejected genuine returning control',label,'on three targets',flush=True)
    result=dict(status='returning-controls-rejected',checks=sum(len(r['observations'])for r in records),sameFinalArenaChecks=sum(o['sameFinalArena']for r in records for o in r['observations']),controls=records,sourceCreditGranted=0)
    (folder/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result
if __name__=='__main__':controls(WORK/'attempt001/controls')
