import ctypes
import hashlib
import json
import struct
from unicorn import arm_const as arm
from map_proof062s import Model
from runtime062s import SdkRuntime,WORK
from kernel062s import ThreadServices


def context_program(target,feature,index,binding,recursive,disabled,name,folder=None):
    if type(index)is not int or not 0<=index<3:raise ValueError('062s unsupported context index rejected before execution')
    r=SdkRuntime(target,folder);allocation=ctypes.create_string_buffer(0x100000)if target=='windows'else None;base=ctypes.addressof(allocation)if allocation is not None else r.ram;p=r.profilePointerBytes;l=r.layout
    m=Model(l,base,r.symbol('fixture_sdk_dispose062s'));manager=0x5000;root=0x6000;holder=0x7000;context=0x8000;owner=0x9000;vector=0xa000;records=0xa100;alternate=0xa200
    old=bytes(m.image[m.map:m.map+l[9]]);m.image[m.map:m.map+l[9]]=b'\xa7'*l[9];m.map=manager+l[26];m.image[m.map:m.map+l[9]]=old;m.word(manager+l[24],index)
    mutex=manager+l[25];m.ptr(mutex,0x8533fc if target=='original'else r.symbol('fixture_sdk_mutex_methods062s'));fast=mutex+l[22];m.word(fast,0xffffffff if recursive else 1);m.ptr(fast+l[19],base+owner if recursive else 0);m.word(fast+l[20],2 if recursive else 0)
    m.ptr(root+l[28]+l[31]+3*p,base+holder if binding else 0);m.ptr(holder+l[32],base+context);m.ptr(root+l[28]+l[31]+p,base+holder+0x100 if binding else 0);m.ptr(holder+0x100+l[32],base+context+0x100);m.ptr(root+l[29],base+vector);m.ptr(vector,base+records);m.ptr(vector+p,base+records+3*p);m.ptr(vector+2*p,base+records+3*p)
    m.ptr(records,0)
    for n in range(1,3):
        rec=alternate+(n-1)*0x200;m.ptr(records+n*p,base+rec)
        for slot,query in [(3,0),(1,0x100)]:
            address=holder+0x200*n+query;m.ptr(rec+l[31]+slot*p,base+address if binding else 0);m.ptr(address+l[32],base+context+0x200*n+query)
    r.store(base,m.image);r.bind(base+m.heap,base+owner);m.initialize();initialized=r.call('sdk_map_initialize062s',[base+m.map])
    if initialized!=base+m.map or r.read(base,len(m.image))!=m.image:raise ValueError('062s actual thread-map constructor complete arena differs')
    services=ThreadServices(r,base+owner)
    try:
        m.word(m.key,services.tid);r.store(base+m.key,struct.pack('<I',services.tid))
        if target=='original':
            r.store(0x8b637e,bytes([feature]));r.store(0x8b637c,bytes([disabled]));r.store(0x8b63d8,struct.pack('<I',base+manager));r.store(0x8e769c,m.image[root:root+l[27]])
        else:
            env=r.symbol('sdk_environment062s');r.store(env+6*p,bytes([disabled]));r.store(env+l[36],bytes([feature]));r.store(env+l[37],(base+manager).to_bytes(p,'little'));r.store(env+l[38],(base+root).to_bytes(p,'little'))
        observations=[]
        for step in range(2):
            expected_calls=0
            if feature:
                found=any(v['key']==services.tid for v in m.nodes.values())
                if not found:
                    n=m.insert(services.tid,0);m.nodes[n]['value']=index;expected_calls=3
                else:expected_calls=1
                m.render()
            before_calls=services.calls();answer=r.call(name,[]);actual=r.read(base,len(m.image));expected=base+context+(0x100 if name=='sdk_context_alternate062s'else 0)+(0x200*index if feature and index else 0)if binding else 0
            if (answer or 0)!=expected:raise ValueError('062s context alias mismatch')
            if actual!=m.image:
                offsets=[i for i,(a,b)in enumerate(zip(actual,m.image))if a!=b];raise ValueError('062s context complete arena differs '+target+' '+str(offsets[:20]))
            if services.calls()-before_calls!=expected_calls:raise ValueError('062s thread-ID freshness/call count mismatch')
            observations.append(dict(step=step,expectedNumericThreadCalls=expected_calls,completeArenaMatches=True,arenaSha256=hashlib.sha256(actual).hexdigest(),returnRole='context'if binding else'null'))
        return dict(target=target,feature=feature,index=index,binding=binding,recursive=recursive,disabled=disabled,name=name,observations=observations,numericThreadId=services.tid,tlsOwner=base+owner,actualWindowsThreadLocalStorage=target=='windows',referenceSvcCalls=services.svc,sourceCreditGranted=0)
    finally:services.close();r.close()


def main():
    cases=[]
    for feature,index,binding,recursive,disabled in [(0,0,0,0,0),(0,0,1,0,0),(1,0,1,0,0),(1,1,1,0,0),(2,2,0,0,0),(1,0,1,1,0),(1,1,1,0,1),(1,2,1,1,128)]:
        for name in ['sdk_context062s','sdk_context_alternate062s']:
            rows=[context_program(t,feature,index,binding,recursive,disabled,name)for t in ['original','arm','windows','a64']];cases.append(rows)
    (WORK/'context-proof-attempt001.json').write_text(json.dumps(dict(status='passed-bounded-real-thread-context-map-and-lock-caller-programs',programs=cases,steps=len(cases)*2,observations=len(cases)*8,sourceCreditGranted=0),indent=2)+'\n',encoding='utf-8');print('062s',len(cases),'thread-context programs passed all four profiles, including genuine Windows thread IDs/TLS and original SVC37',flush=True)


if __name__=='__main__':main()
