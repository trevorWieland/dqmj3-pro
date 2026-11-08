import ctypes
import hashlib
import json
import struct
from build062aa import build,WORK
from runtime062aa import TimerRuntime
from model062aa import TimerModel,MASK
BASE=0x8b6378

def endpoint(ip,port,seed=0):return[((port&65535)<<16)|(seed&65535),ip&0xffffffff,0xdead0000^seed,0x80000000^seed,0x7fc00001^seed,0xffffffff^seed,seed]

def program(r,timeout,raw,operations,initialized=1):
    allocation=ctypes.create_string_buffer(0x100000)if r.target=='windows'else None;base=ctypes.addressof(allocation)if allocation is not None else r.ram;p=r.profilePointerBytes;t=r.timer_layout;identity=0x8528bc if r.target=='original'else r.symbol('sdk_endpoint_identity062aa');m=TimerModel(r.layout,base,r.symbol('fixture_sdk_dispose062s'),t,identity);backend=0x8000;first,second=0x6000,0x6100
    m.ptr(backend,r.symbol('fixture_timer_clock_methods062aa'));struct.pack_into('<Q',m.image,backend+t[21],raw);m.word(backend+t[22],0);m.word(backend+t[23],0)
    clock=bytearray(b'\xa7'*t[25]);clock[0]=initialized;clock[1]=0;clock[2]=0;struct.pack_into('<I',clock,4,0)
    for at in [8,16,24]:struct.pack_into('<Q',clock,at,0)
    clock[t[28]:t[28]+p]=(base+backend).to_bytes(p,'little');initialized_address=BASE+9 if r.target=='original'else r.symbol('sdk_clock062u');m.ptr(backend+t[24],initialized_address)
    r.store(base,m.image);r.bind(base+m.heap,base+0x9000)
    if r.target=='original':
        for offset,value,size in [(9,initialized,1),(10,0,1),(41,0,1),(368,0,4),(408,0,8),(416,0,8),(456,0,8),(104,base+backend,4)]:r.store(BASE+offset,value.to_bytes(size,'little'))
        module=bytearray(r.read(0x888000,471024))
    else:r.store(r.symbol('sdk_clock062u'),clock)
    state=dict(initialized=initialized,current=0,offset=0);calls=0;rows=[]
    def current(value):
        nonlocal calls
        calls+=1
        if not state['initialized']:state['initialized']=1;state['offset']=(1-value)&MASK;result=1
        else:result=(value+state['offset'])&MASK
        state['current']=result;m.word(backend+t[22],calls);m.word(backend+t[23],state['initialized']);return result
    def check(name,result,expected):
        arena=r.read(base,len(m.image));r.last_comparison=dict(normallyReturned=True,wholeArenaEqual=arena==m.image,resultEqual=result==expected)
        if result!=expected:raise ValueError('062aa normally-returning result mismatch '+name)
        if arena!=m.image:raise ValueError('062aa normally-returning full-arena mismatch '+str(dict(profile=r.target,method=name,offset=next(i for i,(a,b)in enumerate(zip(arena,m.image))if a!=b))))
        if r.target=='original':
            for offset,value,size in [(9,state['initialized'],1),(408,state['current'],8),(416,state['offset'],8)]:module[BASE+offset-0x888000:BASE+offset-0x888000+size]=value.to_bytes(size,'little')
            if r.read(0x888000,len(module))!=module:raise ValueError('062aa complete original module clock/data mismatch')
        else:
            clock[0]=state['initialized'];struct.pack_into('<Q',clock,t[26],state['current']);struct.pack_into('<Q',clock,t[27],state['offset'])
            if r.read(r.symbol('sdk_clock062u'),len(clock))!=clock:raise ValueError('062aa complete source clock state mismatch')
        rows.append(dict(method=name,rawArenaSha256=hashlib.sha256(arena).hexdigest(),expectedArenaSha256=hashlib.sha256(m.image).hexdigest(),rawReturn=result,expectedReturn=expected,nodeCount=m.count,freeNodes=len(m.free),clock=dict(state)))
    m.initialize_timer(timeout,current(raw));result=r.invoke('sdk_timer_initialize062aa',[base+m.timer,timeout]);check('initialize',result,base+m.timer)
    for operation in operations:
        if operation[0]=='set':
            _,a,b,replace=operation
            for at,data in [(first,a),(second,b)]:
                m.image[at:at+t[1]]=b'\x5c'*t[1];m.ptr(at,base+0x9000)
                for i,value in enumerate(data):m.word(at+t[2]+4*i,value)
                r.store(base+at,m.image[at:at+t[1]])
            expected=m.set(a,b,replace);m.render();result=r.invoke('sdk_timer_set062aa',[base+m.timer,base+first,base+second,replace]);check('set',result,expected)
        elif operation[0]=='tick':
            value=operation[1]&MASK;struct.pack_into('<Q',m.image,backend+t[21],value);r.store(base+backend+t[21],struct.pack('<Q',value));m.update(current(value));m.render();r.invoke('sdk_timer_update062aa',[base+m.timer]);check('tick',0,0)
        else:raise ValueError('unsupported062aa program operation')
    return dict(profile=r.target,timeout=timeout,raw=raw,initialized=initialized,operations=operations,observations=rows,actualNativeBase=base,independentPointerModel=True)

def cases():
    a=endpoint(0x01020304,1000,1);b=endpoint(0x05060708,2000,2);c=endpoint(0x11121314,3000,3)
    yield 5000,100,[('set',a,b,0),('set',a,c,0),('set',a,c,0x80000000),('tick',1099),('tick',1100),('tick',6000)],1
    yield 0,0,[('set',a,b,1),('tick',1000),('set',a,c,1),('tick',2000)],1
    yield 0xffffffff,0xffffff00,[('set',a,b,0),('tick',0x100000300),('tick',0x100000700),('tick',0x200000700)],1
    yield 5,MASK-3,[('set',a,b,0),('tick',1000),('set',a,c,1)],0
    ips=[0,1,0x7fffffff,0x80000000,0xffffffff,0x0100007f]
    for ip in ips:
        for port in [0,0x7fff,0x8000,0xffff]:
            local=endpoint(ip,port,ip^port);remote=endpoint(0x11111111,99,3)
            yield 1000,0,[('set',local,remote,0),('set',local,remote,1),('tick',1000)],1
    keys=[endpoint(ip,port,i)for i,(ip,port)in enumerate((ip,p)for ip in ips for p in [0,1,0xffff])]
    operations=[('set',key,b,1)for key in keys]+[('tick',1000),('tick',4000),('set',keys[0],c,1),('tick',5000)]
    yield 4000,0,operations,1
    yield 1000,0,[('set',a,endpoint(0,1),0),('set',a,a,1)],1
    yield 0x80000100,1000,[('set',a,b,1),('tick',999)],1
    yield 1000,0,[('set',a,b,1),('tick',1<<32)],1
    many=[endpoint(i*0x10001+1,i,100+i)for i in range(140)]
    yield 2000,0,[('set',key,b,0)for key in many]+[('tick',1000),('tick',2000)]+[('set',key,c,1)for key in reversed(many)]+[('tick',4000)],1

def run(folder,rebuild=True):
    if rebuild:
        for target in ['arm','windows','a64']:build(folder/'build'/target,target)
    rows=[];coverage=set();programs=list(cases())
    for target in ['original','arm','windows','a64']:
        r=TimerRuntime(target,folder/'build')
        try:
            for index,case in enumerate(programs):rows.append(dict(index=index,**program(r,*case)))
            if target=='original':coverage.update(r.original.coverage)
            print('062aa',target,len(programs),'actual timer programs passed',flush=True)
        finally:r.close()
    selected=set().union(*(set(range(a,a+n,4))for a,n in [(0x45e880,176),(0x45e504,572),(0x45e3dc,296),(0x765620,976)]));missing=sorted(selected-coverage)
    if missing!=list(range(0x45e65c,0x45e680,4)):raise ValueError('062aa unexpected instruction coverage '+str(missing))
    result=dict(status='typed-actual-timer-closure-passed',programSets=len(programs),steps=sum(len(r['observations'])for r in rows),observations=rows,originalCoverage=sorted(coverage),originalPcAccounting=dict(totalPcs=len(selected),pcVisits=len(selected&coverage),unvisited=missing),sourceCreditGranted=0,wholeFactoryTaskOwnerCredit=0);folder.mkdir(parents=True,exist_ok=True);(folder/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result
if __name__=='__main__':run(WORK/'attempt001')
