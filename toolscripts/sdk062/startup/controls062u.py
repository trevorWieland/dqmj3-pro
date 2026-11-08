import json
from pathlib import Path
from build062u import build,WORK
from clock_proof062u import ClockSession
from proof062u import TaskSession
CONTROLS=[
('wrong-tick-scale','clock_read062u.c','SdkWide062u product = ticks * 1000;','SdkWide062u product = ticks;','clock',({},'sdk_clock_raw062u',0)),
('initialize-after-callback','clock_read062u.c','sdk_clock062u.initialized = 1;\n        sdk_clock_raw062u(&raw);','sdk_clock_raw062u(&raw);\n        sdk_clock062u.initialized = 1;','clock',({'backend':1},'sdk_clock_current062u',0)),
('rebase-without-progress','clock_monotonic062u.c','SdkWide062u value = last + 1;','SdkWide062u value = last;','clock',({'backend':1,'initialized':1,'monotonic':1,'guard':1,'last':200},'sdk_clock_monotonic062u',1)),
('forget-current-cache','clock_read062u.c','sdk_clock062u.current = sdk_clock_pair_read062u(output);','(void)output;','clock',({},'sdk_clock_current062u',0)),
('drop-negative-offset-check','clock_monotonic062u.c','if ((offset >> 63) && raw < (SdkWide062u)0 - offset) {','if (0) {','clock',({'backend':1,'initialized':1,'monotonic':1,'guard':1,'offset':(1<<64)-1000,'last':0},'sdk_clock_monotonic062u',1)),
('guard-bit-instead-of-word','clock_math062u.c','if (*guard != 0)','if ((*guard & 1) != 0)','clock',({'backend':1,'initialized':1,'monotonic':1,'guard':2,'last':200},'sdk_clock_monotonic062u',1)),
('mask-completion-state','task_state062u.c','task->state = (SdkByte062s)state;','state = (SdkByte062s)state;\n    task->state = (SdkByte062s)state;','task',(261,1,0)),
('publish-after-completion','task_state062u.c','task->state = (SdkByte062s)state;','SdkByte062s next = (SdkByte062s)state;','task',(5,1,0)),
('overwrite-unwritten-constructor-word','task_initialize062u.c','sdk_task_initialize062u(&task->common, flag, tag);','task->unknown_005c = 0;\n    sdk_task_initialize062u(&task->common, flag, tag);','constructor',(0x103,167,True,None))
]

def main(folder=None):
    folder=folder or WORK/'attempt004-controls';folder.mkdir(exist_ok=True,parents=True);rows=[]
    for name,file,old,new,kind,args in CONTROLS:
        text=(WORK/'source'/file).read_text(encoding='utf-8')
        count=text.count(old)
        if not count:raise ValueError('062u control anchor missing '+name)
        if name=='initialize-after-callback':text=text.replace(old,new,1)
        else:
            if count!=1:raise ValueError('062u control anchor ambiguous '+name)
            text=text.replace(old,new)
        if name=='publish-after-completion':text=text.replace('completion(task, &task->capture);\n    }','completion(task, &task->capture);\n    }\n    task->state = next;')
        source=folder/name/file;source.parent.mkdir(exist_ok=True,parents=True);source.write_text(text,encoding='utf-8')
        for target in ['arm','windows','a64']:
            build(folder/name/'build'/target,target,{file:source});session=ClockSession(target,folder/name/'build')if kind=='clock'else TaskSession(target,folder/name/'build');completed=[];call=session.r.call
            def traced(method,arguments):
                result=call(method,arguments);completed.append(method);return result
            session.r.call=traced
            try:
                try:
                    if kind=='clock':session.run(*args)
                    elif kind=='task':session.transition(*args)
                    else:session.initialize(*args)
                except ValueError as error:
                    if not completed or not any(s in str(error)for s in ['full caller arena differs','source clock storage differs','full arena differs']):raise
                    same_core=False
                    if kind=='clock':
                        expected=bytearray(session.clock);layout=session.l
                        for field,index,size in [('initialized',1,1),('guard',4,4),('current',5,8),('offset',6,8),('last',7,8)]:expected[layout[index]:layout[index]+size]=session.state[field].to_bytes(size,'little')
                        same_core=session.r.read(session.r.symbol('sdk_clock062u'),len(expected))==expected
                    elif kind=='task':same_core=session.r.read(session.base+0x1000,session.l[0])==session.image[0x1000:0x1000+session.l[0]]
                    if name in ['initialize-after-callback','publish-after-completion']and not same_core:raise ValueError('062u temporal control did not preserve claimed final SDK core state')
                    rows.append(dict(name=name,target=target,returnedNormally=True,rejection=str(error),sameFinalSdkCoreState=same_core))
                else:raise ValueError('062u returning control escaped '+name+' '+target)
            finally:session.close()
        print('062u rejected returning source control',name,'on three targets',flush=True)
    result=dict(status='passed',checks=len(rows),controls=rows,sourceCreditGranted=0);(folder/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result

if __name__=='__main__':main()
