import hashlib
import json
from pathlib import Path
from build062t import build,WORK
from proof062t import Session
CONTROLS=[
    ('wrong-ready-state','connection062t.c','return connection->state == 2;','return connection->state == 4;','operation',{}),
    ('inverted-closed-state','connection062t.c','return connection->state == 4;','return connection->state != 4;','operation',{}),
    ('canonicalize-raw-state','connection062t.c','SdkWord062s old = connection->state;','state = (SdkByte062s)state;\n    SdkWord062s old = connection->state;','setter',(1,258,1,1,0)),
    ('callback-before-clear','connection062t.c','connection->callback_owner = 0;\n        connection->callback_flags = 0;\n        connection->callback = 0;\n        callback(connection, &result, connection->capture);','callback(connection, &result, connection->capture);\n        connection->callback_owner = 0;\n        connection->callback_flags = 0;\n        connection->callback = 0;','setter',(1,2,1,1,0)),
    ('wrong-transition-result','connection062t.c','(old == 1 && state == 2) || (old == 3 && state == 0)','old == 1','setter',(1,4,1,1,0)),
    ('omit-address-retain','reference062t.c','sdk_reference_retain062t(replacement);','(void)replacement;','replacement',({},1)),
    ('omit-derived-prepare','reference062t.c','sdk_address_replace062t(&derived->address,\n        replacement ? &replacement->common : 0);','(void)derived;\n    (void)replacement;','replacement',({},1)),
    ('use-old-context','result062t.c','sdk_wrapper_replace062t(wrapper, peer);','void *old_context = wrapper->current->context;\n            sdk_wrapper_replace062t(wrapper, peer);','operation',{'context':0}),
    ('truthy-result','result062t.c','return (result->code & 0x80000000u) == 0;','return result->code != 0;','predicate',0x800300d2),
    ('skip-nested-lock','wrapper062t.c','mutex->methods->acquire(mutex);','(void)mutex;','operation',{})
]

def main(folder=None):
    folder=folder or WORK/'attempt002-controls';folder.mkdir(parents=True,exist_ok=True);rows=[]
    for name,file,old,new,kind,arguments in CONTROLS:
        text=(WORK/'source'/file).read_text(encoding='utf-8')
        if text.count(old)!=1:raise ValueError('062t control replacement ambiguous '+name)
        text=text.replace(old,new)
        if name=='use-old-context':text=text.replace('wrapper->current->context) {','old_context) {')
        if name=='skip-nested-lock':text=text.replace('mutex->methods->release(mutex);','(void)mutex;')
        source=folder/name/file;source.parent.mkdir(parents=True,exist_ok=True);source.write_text(text,encoding='utf-8')
        for target in ['arm','windows','a64']:
            build(folder/name/'build'/target,target,{file:source});session=Session(target,folder/name/'build');returned=[];call=session.r.call
            def traced(method,args):
                value=call(method,args);returned.append(method);return value
            session.r.call=traced
            try:
                try:
                    if kind=='operation':session.operation(arguments)
                    elif kind=='setter':session.setter(*arguments)
                    elif kind=='replacement':session.replacement(*arguments)
                    else:session.predicate(arguments)
                except ValueError as error:
                    if not returned or not any(s in str(error)for s in ['full arena mismatch','TLS call order/count mismatch','result sign predicate differs']):raise
                    rows.append(dict(name=name,target=target,sourceSha256=hashlib.sha256(source.read_bytes()).hexdigest(),normallyReturned=True,rejection=str(error),sameFinalArena=str(error).endswith('TLS call order/count mismatch')))
                else:raise ValueError('062t returning wrong-source control escaped '+name+' '+target)
            finally:session.close()
        print('062t rejected normally returning control',name,'on three source profiles',flush=True)
    result=dict(status='passed',controls=rows,checks=len(rows),sourceCreditGranted=0)
    (folder/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result

if __name__=='__main__':main()
