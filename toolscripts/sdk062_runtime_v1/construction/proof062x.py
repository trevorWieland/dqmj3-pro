import ctypes
import hashlib
import json
import random
import struct
from build062x import build,WORK
from runtime062x import ConstructionRuntime
SIZE=0x10000

def texts():
    yield []
    for value in [1,0x7f,0x80,0xff,0x100,0x1234,0x7fff,0x8000,0xd800,0xdc00,0xffff]:yield[value]
    yield[ord(c)for c in 'rom:/data/dragon_quest/resource']
    yield[0xd800,0xdc00,0xffff,0x8000,0x41]
    rng=random.Random(620061)
    for length in [2,3,4,7,8,15,16,31,32,63,64,127,128,255,257,1023]:yield[rng.randrange(1,65536)for _ in range(length)]

def cases():
    for units in texts():
        for name in ['length','copy','copy-self','copy-overlap-left','create','roundtrip','constructor','constructor-start']:
            yield dict(name=name,units=units,null=False)
    for name in ['create','roundtrip','constructor','constructor-start']:yield dict(name=name,units=[],null=True)
    yield dict(name='destroy-null',units=[],null=True)
    for seed in [0,0xa7,0xff]:yield dict(name='list-initialize',units=[],null=False,seed=seed)

def expected_trace(case):
    name=case['name'];create=['sdk_wide_create062x']+([]if case['null']else['sdk_wide_length062x','sdk_allocate062s','fixture_sdk_allocate062s','sdk_wide_copy062x'])
    if name=='list-initialize':return['sdk_address_list_initialize062x','sdk_allocate062s','fixture_sdk_allocate062s','sdk_allocate062s','fixture_sdk_allocate062s']
    if name=='length':return['sdk_wide_length062x']
    if name.startswith('copy'):return['sdk_wide_copy062x']
    if name=='destroy-null':return['sdk_wide_destroy062x']
    rows=(['sdk_binding_initialize062x']if name.startswith('constructor')else[])+create
    if name=='constructor-start':rows+=['sdk_binding_start062w']
    if name=='roundtrip':rows+=['sdk_wide_destroy062x']+([]if case['null']else['fixture_wide_dispose062x'])
    return rows

def program(r,case):
    p=r.profilePointerBytes;l=r.construction_layout;allocation=ctypes.create_string_buffer(SIZE)if r.target=='windows'else None;base=ctypes.addressof(allocation)if allocation is not None else r.ram;image=bytearray(bytes([case.get('seed',0xa7)])*SIZE)
    heap,observer,obj,owner,output,source,dest=0x500,0x700,0x1000,0x1200,0x1400,0x3000,0x5000
    def putptr(at,value):image[at:at+p]=int(value).to_bytes(p,'little')
    def putword(at,value):struct.pack_into('<I',image,at,value)
    text=b''.join(struct.pack('<H',u)for u in case['units'])+b'\0\0';image[source:source+len(text)]=text
    name=case['name'];destination=source if name=='copy-self'else source-2 if name=='copy-overlap-left'else dest
    putptr(heap,base+0x8000);putword(heap+p,0x8000);putword(heap+p+4,0);putword(heap+p+8,0)
    putptr(observer,base+owner);putword(observer+l[10],0);putword(observer+l[15],1)
    putptr(owner,base+0x6500);putptr(owner+p,0 if case['null']else base+source);putptr(output,base+0x6600)
    r.store(base,bytes(image));r.bind_wide(base+heap,base+0x900,base+observer);expected=bytearray(image);r.trace=[]
    data_before=r.read(0x888000,471024)if r.target=='original'else None
    def ptr(at,value):expected[at:at+p]=int(value).to_bytes(p,'little')
    def word(at,value):struct.pack_into('<I',expected,at,value)
    intermediate=[];result=0;identity=0x855a94 if r.target=='original'else r.symbol('sdk_wide_name_identity062x')
    if name=='list-initialize':
        result=r.invoke('sdk_address_list_initialize062x',[base+obj]);value=base+obj
        first=0x8000;request1=((l[17]+3)&~3)+8;second=first+((request1+15)&~15);request2=((l[18]+3)&~3)+8;pool=base+first+8;node=base+second+8
        ptr(obj,8727140 if r.target=='original'else r.symbol('sdk_address_list_identity062x'))
        ptr(obj+p,pool);ptr(obj+p*2,0);ptr(obj+p*3,node+l[18]);ptr(obj+p*4,node+l[18]);ptr(obj+p*5,node);word(obj+l[21],0)
        ptr(first,r.symbol('fixture_wide_dispose062x'));ptr(second,r.symbol('fixture_wide_dispose062x'))
        ptr(first+8,0);word(first+8+l[19],1);ptr(first+8+l[20],node);ptr(second+8,node);ptr(second+8+p,node)
        word(heap+p+4,second-0x8000+request2);word(heap+p+8,2);word(heap+p+12,request1);word(heap+p+16,request2)
    elif name=='length':result=r.invoke('sdk_wide_length062x',[base+source]);value=len(case['units'])
    elif name.startswith('copy'):
        result=r.invoke('sdk_wide_copy062x',[base+destination,base+source]);value=base+destination
        for i in range(len(case['units'])+1):expected[destination+i*2:destination+i*2+2]=expected[source+i*2:source+i*2+2]
    elif name=='destroy-null':
        result=r.invoke('sdk_wide_destroy062x',[base+owner]);value=base+owner;ptr(owner,identity)
    else:
        constructor=name.startswith('constructor');field=obj+l[5]if constructor else output;created=0
        if not case['null']:
            raw=0x8000;created=base+raw+12;request=((4+len(text)+3)&~3)+8
            ptr(raw,r.symbol('fixture_wide_dispose062x'));word(raw+8,len(case['units'])+1);expected[raw+12:raw+12+len(text)]=text
            word(heap+p+4,request);word(heap+p+8,1);word(heap+p+12,request)
        ptr(field,created)
        if constructor:
            ptr(obj,0x85355c if r.target=='original'else r.symbol('sdk_binding_base_methods062x'));word(obj+p,1);expected[obj+p+4]=0;ptr(obj+l[4],identity);struct.pack_into('<H',expected,obj+l[6],1);word(obj+l[7],0);word(obj+l[8],0)
            result=r.invoke('sdk_binding_initialize062x',[base+obj,base+owner]);value=base+obj
            if result!=value:intermediate.append('constructor-return')
            if name=='constructor-start':result=r.invoke('sdk_binding_start062w',[base+obj]);value=4;struct.pack_into('<H',expected,obj+l[6],4)
        else:
            result=r.invoke('sdk_wide_create062x',[base+output,0 if case['null']else base+source]);value=created
            if name=='roundtrip':
                if result!=value:intermediate.append('created-return')
                r.store(base+owner+p,created.to_bytes(p,'little'));ptr(owner+p,created)
                result=r.invoke('sdk_wide_destroy062x',[base+owner]);value=base+owner;ptr(owner,identity)
                if created:
                    word(observer+l[10],1);ptr(observer+l[11],base+0x8000);ptr(observer+l[12],identity);ptr(observer+l[13],created);word(observer+l[14],len(case['units'])+1);word(observer+l[15],0)
    arena=r.read(base,SIZE)
    r.last_comparison=dict(normallyReturned=True,wholeArenaEqual=arena==expected,resultEqual=result==value,intermediateResultsEqual=not intermediate)
    if intermediate:raise ValueError('062x normally-returning intermediate pointer mismatch '+str(intermediate))
    if result!=value:raise ValueError('062x normally-returning result mismatch '+str(dict(profile=r.target,case=case,actual=result,expected=value)))
    if arena!=expected:raise ValueError('062x normally-returning whole-arena mismatch '+str(dict(profile=r.target,name=name,units=len(case['units']),firstMismatch=next(i for i,(a,b)in enumerate(zip(arena,expected))if a!=b))))
    if r.target!='windows'and r.trace!=expected_trace(case):raise ValueError('062x ordered real-body/callback trace mismatch '+str(dict(profile=r.target,name=name,actual=r.trace,expected=expected_trace(case))))
    if data_before is not None and r.read(0x888000,471024)!=data_before:raise ValueError('062x original data/BSS changed')
    role=value-base if base<=value<base+SIZE else value
    return dict(returnRoleOrScalar=role,rawReturn=result,actualNativeBase=base,rawArenaSha256=hashlib.sha256(arena).hexdigest(),expectedArenaSha256=hashlib.sha256(expected).hexdigest(),trace=r.trace if r.target!='windows'else None,windowsTraceClaim=False,independentPointerModel=True)

def run(folder,rebuild=True):
    if rebuild:
        for target in ['arm','windows','a64']:build(folder/'build'/target,target)
    rows=[];coverage=set();programs=list(cases())
    for target in ['original','arm','windows','a64']:
        r=ConstructionRuntime(target,folder/'build')
        try:
            for index,case in enumerate(programs):rows.append(dict(profile=target,index=index,case=case,observation=program(r,case)))
            if target=='original':coverage.update(r.original.coverage)
            print('062x',target,len(programs),'full arena/return/callback observations passed',flush=True)
        finally:r.close()
    selected=set(range(0x45a21c,0x45a2a0,4))|set(range(0x15e6f0,0x15e740,4))|set(range(0x170f54,0x170f98,4))|set(range(0x47a4a4,0x47a4f4,4))|set(range(0x100b58,0x100b6a,2))|set(range(0x1003e0,0x1003f2,2));unvisited=sorted(selected-coverage)
    if unvisited!=[0x170f88,0x170f8c]:raise ValueError('062x unexpected original PC accounting '+str(unvisited))
    result=dict(status='bounded-initialized-wide-binding-construction-passed',programSets=len(programs),fourProfileObservations=len(rows),observations=rows,selectedInstructionBytes=396,originalPcAccounting=dict(totalPcs=len(selected),visitedPcs=len(selected&coverage),unvisited=unvisited,reason='default SDK disposal branch unqualified;source retains typed dependency'),linkerVeneerPcsVisited=sorted(set([0x1003d8,0x1003dc])&coverage),originalAllCoverage=sorted(coverage),sourceCreditGranted=0,whole481940484660StartupCredit=0)
    folder.mkdir(parents=True,exist_ok=True);(folder/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result
if __name__=='__main__':run(WORK/'attempt001')
