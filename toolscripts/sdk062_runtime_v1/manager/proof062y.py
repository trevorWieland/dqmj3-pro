import ctypes
import hashlib
import json
import random
import struct
from pathlib import Path
from build062y import build,WORK
from runtime062y import ThreadMapRuntime,ThreadServices
from map_proof062s import Model

def datasets():
    rng=random.Random(620062)
    yield 'ascending',list(range(80)),0
    yield 'descending',list(range(80,0,-1)),0
    yield 'zigzag',[i//2 if i%2==0 else 300-i//2 for i in range(90)],0
    yield 'shuffled',rng.sample(range(0xffffffff),110),0
    yield 'boundaries',[0,0xffffffff,0x80000000,0x7fffffff,0,0xffffffff,1,2,0x80000001],0
    yield 'duplicates',[i%9 for i in range(70)],1
    yield 'noncanonical-duplicates',[i%3 for i in range(44)],128
    yield 'repeat-hit',[7]*40,0

def selector_program(r,label,keys,multi):
    allocation=ctypes.create_string_buffer(0x100000)if r.target=='windows'else None;base=ctypes.addressof(allocation)if allocation is not None else r.ram;p=r.profilePointerBytes;m=Model(r.layout,base,r.symbol('fixture_sdk_dispose062s'));output,pair=0x7000,0x7100
    r.store(base,m.image);r.bind(base+m.heap,base+0x8000);m.initialize();returned=r.call('sdk_map_initialize062s',[base+m.map])
    if returned!=base+m.map or r.read(base,len(m.image))!=m.image:raise ValueError('062y actual map constructor arena mismatch')
    m.image[m.map+m.l[12]]=multi;r.store(base+m.map+m.l[12],bytes([multi]));data_before=r.read(0x888000,471024)if r.target=='original'else None;rows=[]
    for step,key in enumerate(keys):
        value=(key^0xc0ffee00^step)&0xffffffff;m.word(pair,key);m.word(pair+4,value);r.store(base+pair,struct.pack('<II',key,value));previous=m.count;node=m.insert(key,multi);inserted=m.count!=previous
        if inserted:m.nodes[node]['value']=value
        m.render();m.ptr(output,base+node);m.image[output+r.insertion_layout[1]]=int(inserted)
        answer=r.invoke('sdk_map_select062y',[base+output,base+m.map,base+pair]);expected=base+node if inserted else 0;arena=r.read(base,len(m.image));r.last_comparison=dict(normallyReturned=True,wholeArenaEqual=arena==m.image,resultEqual=answer==expected)
        if answer!=expected:raise ValueError('062y normally-returning selector result mismatch')
        if arena!=m.image:raise ValueError('062y normally-returning selector complete-arena mismatch '+str(dict(profile=r.target,label=label,step=step,offset=next(i for i,(a,b)in enumerate(zip(arena,m.image))if a!=b))))
        rows.append(dict(key=key,value=value,inserted=inserted,nodeRole=list(m.nodes).index(node),rawReturn=answer,expectedReturn=expected,rawArenaSha256=hashlib.sha256(arena).hexdigest(),expectedArenaSha256=hashlib.sha256(m.image).hexdigest()))
    if data_before is not None and r.read(0x888000,471024)!=data_before:raise ValueError('062y selector original data/BSS mutation')
    return dict(profile=r.target,label=label,multi=multi,steps=len(keys),observations=rows,topology=m.topology(),allocationRequests=m.requests,actualNativeBase=base,independentPointerModel=True)

def thread_program(r,index,recursive,disabled,initial):
    allocation=ctypes.create_string_buffer(0x100000)if r.target=='windows'else None;base=ctypes.addressof(allocation)if allocation is not None else r.ram;p=r.profilePointerBytes;l=r.layout;m=Model(l,base,r.symbol('fixture_sdk_dispose062s'));manager,owner=0x5000,0x9000
    old=bytes(m.image[m.map:m.map+l[9]]);m.image[m.map:m.map+l[9]]=b'\xa7'*l[9];m.map=manager+l[26];m.image[m.map:m.map+l[9]]=old;m.word(manager+l[24],index)
    mutex=manager+l[25];m.ptr(mutex,0x8533fc if r.target=='original'else r.symbol('fixture_sdk_mutex_methods062s'));fast=mutex+l[22];m.word(fast,0xffffffff if recursive else 1);m.ptr(fast+l[19],base+owner if recursive else 0);m.word(fast+l[20],2 if recursive else 0)
    r.store(base,m.image);r.bind(base+m.heap,base+owner);m.initialize();returned=r.call('sdk_map_initialize062s',[base+m.map])
    if returned!=base+m.map or r.read(base,len(m.image))!=m.image:raise ValueError('062y actual thread-map constructor arena mismatch')
    services=ThreadServices(r,base+owner)
    try:
        actual_backend=Path(services.native.library._name).resolve();expected_backend=(r.sdk062_artifact_folder if r.target=='windows'else r.sdk062_host_artifact_folder)/'windows/sdk062s.dll'
        if actual_backend!=expected_backend.resolve():raise ValueError('062y wrong actual Windows primitive backend')
        if r.target=='original':r.store(0x8b637c,bytes([disabled]))
        else:r.store(r.symbol('sdk_environment062s')+6*p,bytes([disabled]))
        seeds=[]
        if initial is True:seeds=[services.tid]
        elif initial=='above':
            if services.tid==0xffffffff:raise ValueError('062y above-key fixture cannot admit maximum threadID')
            seeds=[0xffffffff]
        elif initial=='below':
            if services.tid==0:raise ValueError('062y below-key fixture requires nonzero threadID')
            seeds=[0]
        elif initial=='sandwich':
            if services.tid in [0,0xffffffff]:raise ValueError('062y sandwich fixture requires an interior threadID')
            seeds=[0,0xffffffff]
        elif initial=='deep-hit':seeds=list(dict.fromkeys([0,1,2,3,4,7,11,15,0x10000000,0x40000000,0x7fffffff,0x80000000,0xffffffff,services.tid]))
        elif initial=='growth-miss':seeds=[key for key in range(0x10000000,0x10000020)if key!=services.tid][:31]
        elif initial is not False:raise ValueError('062y unsupported fixture initial topology')
        for key in seeds:
            m.word(m.key,key);r.store(base+m.key,struct.pack('<I',key));node=m.insert(key,0);m.nodes[node]['value']=0xa55aa55a;m.render();pointer=r.call('sdk_map_value062s',[base+m.map,base+m.key]);r.store(pointer,struct.pack('<I',0xa55aa55a))
            if r.read(base,len(m.image))!=m.image:raise ValueError('062y original-provider prepopulation mismatch')
        rows=[];data_before=r.read(0x888000,471024)if r.target=='original'else None
        for step in range(2):
            found=next((at for at,n in m.nodes.items()if n['key']==services.tid),None);calls=1
            if found is None:found=m.insert(services.tid,0);m.nodes[found]['value']=index;calls=3
            m.render();before=services.calls();answer=r.invoke('sdk_thread_index062y',[base+manager]);arena=r.read(base,len(m.image));fresh=services.calls()-before;expected=base+found+l[5]+4;r.last_comparison=dict(normallyReturned=True,wholeArenaEqual=arena==m.image,resultEqual=answer==expected,threadCallsEqual=fresh==calls)
            if answer!=expected:raise ValueError('062y normally-returning thread value-alias mismatch')
            if arena!=m.image:raise ValueError('062y normally-returning thread complete-arena mismatch '+str(dict(profile=r.target,step=step,index=index,recursive=recursive,disabled=disabled,offset=next(i for i,(a,b)in enumerate(zip(arena,m.image))if a!=b))))
            if fresh!=calls:raise ValueError('062y normally-returning thread-ID freshness mismatch')
            rows.append(dict(step=step,expectedThreadCalls=calls,actualThreadCalls=fresh,value=m.nodes[found]['value'],rawReturn=answer,expectedReturn=expected,rawArenaSha256=hashlib.sha256(arena).hexdigest(),expectedArenaSha256=hashlib.sha256(m.image).hexdigest()))
        if data_before is not None and r.read(0x888000,471024)!=data_before:raise ValueError('062y thread original data/BSS mutation')
        return dict(profile=r.target,index=index,recursive=recursive,disabled=disabled,initial=initial,observations=rows,numericThreadId=services.tid,actualNativeBase=base,referenceSvcCalls=services.svc,windowsPrimitiveBackend=str(actual_backend),actualWindowsTls=r.target=='windows',cpuModelThreadIdInputFromActualSameCallerThread=r.target in ['arm','a64'],independentPointerModel=True)
    finally:services.close()

def run(folder,rebuild=True):
    if rebuild:
        for target in ['arm','windows','a64']:build(folder/'build'/target,target)
    selectors=[];threads=[];coverage=set()
    for target in ['original','arm','windows','a64']:
        r=ThreadMapRuntime(target,folder/'build')
        try:
            for label,keys,multi in datasets():selectors.append(selector_program(r,label,keys,multi))
            for index in [0,1,0x80000000,0xffffffff]:
                for recursive,disabled,initial in [(0,0,False),(1,0,False),(0,1,False),(1,128,False),(0,0,True),(0,0,'above'),(0,0,'below'),(0,0,'sandwich'),(1,0,'deep-hit'),(0,0,'growth-miss')]:threads.append(thread_program(r,index,recursive,disabled,initial))
            if target=='original':coverage.update(r.original.coverage)
            print('062y',target,'selector and real thread-map observations passed',flush=True)
        finally:r.close()
    selected=set(range(0x1775e8,0x17773c,4))|set(range(0x1777e0,0x17790c,4));missing=sorted(selected-coverage)
    if missing!=list(range(0x177884,0x1778a4,4)):raise ValueError('062y unexpected original PC accounting '+str(missing))
    result=dict(status='bounded-real-thread-map-and-selector-passed',selectedInstructionBytes=640,selectorSteps=sum(x['steps']for x in selectors),threadSteps=sum(len(x['observations'])for x in threads),selectors=selectors,threads=threads,originalPcAccounting=dict(totalPcs=len(selected),pcVisits=len(selected&coverage),unvisited=missing,reason='left=true means final BST search followed parent.left toNULL;no intervening write or call;the generic predecessor left-subtree arm remains in C but is unreachable at this entry',negativeSdkStatusBranch='conditional BL PCs may be visited with conditionfalse;actual15e294 negative-status execution is excluded'),sourceCreditGranted=0,wholeManagerTaskStartupCredit=0)
    folder.mkdir(parents=True,exist_ok=True);(folder/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result
if __name__=='__main__':run(WORK/'attempt001')
