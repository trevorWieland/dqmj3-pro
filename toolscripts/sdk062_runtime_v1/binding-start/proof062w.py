import ctypes
import hashlib
import json
import random
import struct
from build062w import build,WORK
from runtime062w import BindingStartRuntime

SIZE=0x10000
NAMES=['sdk_binding_start062w','sdk_binding_query062w','sdk_binding_state062w','sdk_binding_start_ready062w','sdk_binding_poll_ready062w']

def cases():
    states=[0,1,2,3,4,7,8,15,16,31,32,33,63,64,65,127,128,255,256,257,0x7fff,0x8000,0xffff]
    rng=random.Random(620048);states+=sorted(set(rng.randrange(65536)for _ in range(17))-set(states))
    for state in states:
        for count in [0,1,0x80000000,0xffffffff]:
            for name in NAMES:yield dict(name=name,state=state,count=count,null=False)
    for name in NAMES[-2:]:yield dict(name=name,state=0,count=0,null=True)

def expected_trace(case):
    state,count=case['state'],case['count'];name=case['name'];state=None if case['null']else state;count=None if case['null']else count
    rows=[(name,state,count)]
    if name=='sdk_binding_query062w':rows.append(('sdk_binding_state062w',state,count))
    if name!='sdk_binding_start062w':return rows
    rows += [('sdk_binding_query062w',state,count),('sdk_binding_state062w',state,count)]
    if state==2:rows += [('sdk_binding_poll_ready062w',2,count),('sdk_binding_can_transition062v',2,count),('sdk_binding_notify062v',2,count)]
    if state in [1,64]:rows += [('sdk_binding_can_transition062v',state,count),('sdk_binding_notify062v',state,count),('sdk_binding_start_ready062w',2,count),('sdk_binding_can_transition062v',2,count),('sdk_binding_notify062v',2,count)]
    return rows

def program(r,case):
    p=r.profilePointerBytes;layout=r.binding_layout;allocation=ctypes.create_string_buffer(SIZE)if r.target=='windows'else None;base=ctypes.addressof(allocation)if allocation is not None else r.ram;obj=0x1000;image=bytearray(b'\xa7'*SIZE)
    def ptr(at,value):image[at:at+p]=int(value).to_bytes(p,'little')
    ptr(obj,0x853064 if r.target=='original'else r.symbol('fixture_binding_start_methods062w'));struct.pack_into('<I',image,obj+p,5);image[obj+p+4]=0
    ptr(obj+(12 if p==4 else 16),base+0x6000);ptr(obj+(16 if p==4 else 24),base+0x6100)
    struct.pack_into('<H',image,obj+layout[4],case['state']);struct.pack_into('<I',image,obj+layout[5],case['count'])
    r.store(base,bytes(image));expected=bytearray(image);name=case['name']
    if name in NAMES[-2:]:value=1
    elif name=='sdk_binding_start062w':
        value=4 if case['state']in [1,2,64]else case['state'];struct.pack_into('<H',expected,obj+layout[4],value)
    else:value=case['state']
    actual=r.invoke(name,[0 if case['null']else base+obj]);arena=r.read(base,SIZE)
    if actual!=value:raise ValueError('062w normally-returning scalar mismatch '+str(dict(profile=r.target,case=case,actual=actual,expected=value)))
    if arena!=expected:raise ValueError('062w normally-returning full-arena mismatch '+str(dict(profile=r.target,case=case,firstMismatch=next(i for i,(a,b)in enumerate(zip(arena,expected))if a!=b))))
    if r.target!='windows'and r.trace!=expected_trace(case):raise ValueError('062w real virtual-call order mismatch '+str(dict(profile=r.target,case=case,actual=r.trace,expected=expected_trace(case))))
    return dict(returnValue=actual,rawArenaSha256=hashlib.sha256(arena).hexdigest(),expectedArenaSha256=hashlib.sha256(expected).hexdigest(),actualNativeBase=base,virtualTrace=r.trace if r.target!='windows'else None,windowsTraceClaim=False,independentPointerModel=True)

def run(folder,rebuild=True):
    if rebuild:
        for target in ['arm','windows','a64']:build(folder/'build'/target,target)
    rows=[];coverage=set();edges=set();programs=list(cases())
    for target in ['original','arm','windows','a64']:
        r=BindingStartRuntime(target,folder/'build')
        try:
            data_before=r.read(0x888000,471024)if target=='original'else None
            for index,case in enumerate(programs):rows.append(dict(profile=target,index=index,case=case,observation=program(r,case)))
            if target=='original':
                if r.read(0x888000,471024)!=data_before:raise ValueError('062w original whole data/BSS changed')
                coverage.update(r.original.coverage);edges.update(r.original_edges)
            print('062w',target,len(programs),'independent complete arena/return/order observations passed',flush=True)
        finally:r.close()
    selected=set(range(0x479edc,0x479ff0,4))|set(range(0x479ffc,0x47a008,4))|set(range(0x47a120,0x47a130,4))|set(range(0x47a49c,0x47a4a4,4));unvisited=sorted(selected-coverage)
    if unvisited:raise ValueError('062w selected original PC missing '+str(unvisited))
    unreachable=[(0x479f2c,0x479fe8),(0x479f48,0x479fe8),(0x479f7c,0x479f98),(0x479fb0,0x479fe8),(0x479fcc,0x479fe8)]
    if any(edge in edges for edge in unreachable):raise ValueError('062w fixed-provider unreachable-edge hypothesis failed')
    result=dict(status='bounded-real-base-table-startup-family-passed',programSets=len(programs),fourProfileObservations=len(rows),observations=rows,selectedInstructionBytes=312,originalPcAccounting=dict(totalPcs=len(selected),pcVisits=len(selected&coverage),unvisited=unvisited),unreachedFailureEdges=[dict(source=a,target=b,reason='actual base providers true and actual transition policy accepts1/64to2and2to4;not a derived callback proof')for a,b in unreachable],newAndFrozenProviderCoverage=sorted(coverage),sourceCreditGranted=0,wholeFactoryTaskStartupCredit=0)
    folder.mkdir(parents=True,exist_ok=True);(folder/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result
if __name__=='__main__':run(WORK/'attempt001')
