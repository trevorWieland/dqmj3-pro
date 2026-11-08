import hashlib
import json
from pathlib import Path
from proof062v import program
from runtime062v import BindingRuntime,WORK
from build062v import build

CONTROLS=[
('truncate-request','binding_policy062v.c','    if (requested == 128','    requested = (unsigned short)requested;\n    if (requested == 128',dict(name='sdk_binding_can_transition062v',state=0,count=0,requested=0x10080,null=False)),
('invert-dependent-count','binding_policy062v.c','binding->dependents == 0','binding->dependents != 0',dict(name='sdk_binding_can_transition062v',state=32,count=1,requested=16,null=False)),
('deny-terminal-origin','binding_policy062v.c','    case 256:\n        return 1;','    case 256:\n        return 0;',dict(name='sdk_binding_can_transition062v',state=128,count=0,requested=3,null=False)),
('require-object-before-early-success','binding_policy062v.c','    if (requested == 128 || requested == 256) {\n        return 1;','    if (requested == 128 || requested == 256) {\n        return binding != 0;',dict(name='sdk_binding_can_transition062v',state=0,count=0,requested=128,null=True)),
('drop-active-eight','binding_active062v.c','binding->state == 4 || binding->state == 8','binding->state == 4',dict(name='sdk_binding_active062v',state=8,count=0,requested=0,null=False)),
('notification-mutates-count','binding_active062v.c','    (void)binding;','    ++binding->dependents;',dict(name='sdk_binding_notify062v',state=1,count=0,requested=0,null=False)),
]

def controls(folder):
    rows=[]
    for label,name,old,new,case in CONTROLS:
        path=WORK/'source'/name;text=path.read_text(encoding='utf-8')
        if text.count(old)!=1:raise ValueError('062v control edit is not unique '+label)
        output=folder/label;output.mkdir(parents=True,exist_ok=True);mutant=output/name;mutant.write_text(text.replace(old,new),encoding='utf-8')
        observations=[]
        for target in ['arm','windows','a64']:
            build(output/'build'/target,target,{name:mutant});runtime=BindingRuntime(target,output/'build')
            try:
                try:program(runtime,case)
                except ValueError as error:
                    message=str(error)
                    if not(message.startswith('062v genuine returning scalar mismatch')or message.startswith('062v independently modeled whole arena mismatch')):raise
                    observations.append(dict(target=target,normalReturnBeforeRejection=True,reason=message,sameFinalArena='scalar mismatch'in message))
                else:raise ValueError('062v wrong source was not rejected '+label+' '+target)
            finally:runtime.close()
        rows.append(dict(label=label,case=case,sourceSha256=hashlib.sha256(mutant.read_bytes()).hexdigest(),observations=observations));print('062v rejected returning control',label,'on three source targets',flush=True)
    record=dict(status='all-returning-wrong-source-controls-rejected',checks=sum(len(r['observations'])for r in rows),sameFinalArenaChecks=sum(o['sameFinalArena']for r in rows for o in r['observations']),controls=rows,sourceCreditGranted=0)
    (folder/'report.json').write_text(json.dumps(record,indent=2)+'\n',encoding='utf-8');return record
if __name__=='__main__':controls(WORK/'policy-attempt001/controls')
