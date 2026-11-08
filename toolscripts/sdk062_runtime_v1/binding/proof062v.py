import ctypes
import hashlib
import json
import random
import struct
from pathlib import Path
from runtime062v import BindingRuntime,ROOT,WORK
from build062v import build

SIZE=0x10000

def policy(state,requested,count):
    if requested in {128,256} or state in {128,256}:return 1
    edges={1:{2,16,64},2:{4},4:{8,16},8:{4,32},16:{64},64:{1,2}}
    if state==32:return int(count==0 and requested==16)
    return int(requested in edges.get(state,set()))

def cases():
    states=[0,1,2,3,4,7,8,15,16,31,32,33,63,64,65,127,128,129,255,256,257,0x7fff,0x8000,0xffff]
    rng=random.Random(620047);states+=sorted(set(rng.randrange(65536)for _ in range(16))-set(states))
    requests=[0,1,2,3,4,7,8,15,16,31,32,63,64,127,128,129,255,256,257,0x10004,0x10080,0x80000008,0xffffffff]
    for state in states:
        for count in [0,1,0x80000000,0xffffffff]:
            for requested in requests:yield dict(name='sdk_binding_can_transition062v',state=state,count=count,requested=requested,null=False)
            for name in ['sdk_binding_active062v','sdk_binding_notify062v','fixture_binding_route062v']:yield dict(name=name,state=state,count=count,requested=0,null=False)
    for requested in [128,256]:yield dict(name='sdk_binding_can_transition062v',state=0,count=0,requested=requested,null=True)
    yield dict(name='sdk_binding_notify062v',state=0,count=0,requested=0,null=True)

def program(runtime,case):
    layout=runtime.binding_layout;p=runtime.profilePointerBytes;allocation=ctypes.create_string_buffer(SIZE)if runtime.target=='windows'else None;base=ctypes.addressof(allocation)if allocation is not None else runtime.ram
    expected=bytearray(b'\xa7'*SIZE);obj=0x1000
    def word(at,value):struct.pack_into('<I',expected,at,value&0xffffffff)
    def pointer(at,value):expected[at:at+p]=int(value).to_bytes(p,'little')
    methods=0x853064 if runtime.target=='original'else runtime.symbol('fixture_binding_methods062v')
    pointer(obj,methods);word(obj+p,5);expected[obj+p+4]=0
    pointer(obj+layout[3],base+0x6000);pointer(obj+layout[4],base+0x6100)
    struct.pack_into('<H',expected,obj+layout[5],case['state']);word(obj+layout[6],case['count'])
    runtime.store(base,bytes(expected));arguments=[0 if case['null']else base+obj]
    if case['name']=='sdk_binding_can_transition062v':arguments.append(case['requested']);result=policy(case['state'],case['requested'],case['count'])
    elif case['name']=='sdk_binding_notify062v':result=None
    else:
        result=int(case['state']in {4,8})
        if case['name']=='fixture_binding_route062v'and result:
            struct.pack_into('<H',expected,obj+layout[5],8);word(obj+layout[6],case['count']+1)
    actual=runtime.invoke(case['name'],arguments)
    if result is not None and actual!=result:raise ValueError('062v genuine returning scalar mismatch '+str(dict(target=runtime.target,case=case,actual=actual,expected=result)))
    arena=runtime.read(base,SIZE)
    if arena!=expected:raise ValueError('062v independently modeled whole arena mismatch '+str(dict(target=runtime.target,case=case,firstMismatch=next(i for i,(a,b)in enumerate(zip(arena,expected))if a!=b))))
    return dict(returnValue=result,actualIgnoredVoidReturn=actual if result is None else None,arenaSha256=hashlib.sha256(arena).hexdigest(),expectedArenaSha256=hashlib.sha256(expected).hexdigest(),actualNativeBase=base,independentPointerModel=True)

def run(folder,rebuild=True):
    if rebuild:
        for target in ['arm','windows','a64']:build(folder/'build'/target,target)
    programs=list(cases());rows=[];coverage=set()
    for target in ['original','arm','windows','a64']:
        runtime=BindingRuntime(target,folder/'build')
        try:
            global_before=runtime.read(0x888000,471024)if target=='original'else None
            for index,case in enumerate(programs):rows.append(dict(profile=target,index=index,case=case,observation=program(runtime,case)))
            if target=='original':
                if runtime.read(0x888000,471024)!=global_before:raise ValueError('062v original global/data bytes changed')
                coverage.update(runtime.original.coverage)
            print('062v',target,len(programs),'independent arena/return comparisons passed',flush=True)
        finally:runtime.close()
    expected_pcs=set(range(0x47a008,0x47a020,4))|{0x47a028}|set(range(0x47a02c,0x47a118,4));missing=sorted(expected_pcs-coverage)
    if missing:raise ValueError('062v measured policy PCs not visited '+str(missing))
    result=dict(status='bounded-real-original-virtual-policy-and-source-family-passed',programSets=len(programs),fourProfileObservations=len(rows),observations=rows,originalPcAccounting=dict(selectedInstructionBytes=264,totalPcs=66,pcVisits=len(expected_pcs&coverage),unvisited=[]),fixtureRoute='authored ABI/caller-flow fixture using actual original vtable13/12/5 versus authored providers;not original484660 execution or ownership',sourceCreditGranted=0,fullFactoryOrStartupCredit=0)
    folder.mkdir(parents=True,exist_ok=True);(folder/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result
if __name__=='__main__':run(WORK/'policy-attempt001')
