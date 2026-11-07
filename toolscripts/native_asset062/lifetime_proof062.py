import ctypes
import hashlib
import json
import struct
from pathlib import Path
from runtime062 import Runtime,SIZE
from coverage062 import coverage

WORK=Path(__file__).resolve().parent


def put(data,at,value,size=4):data[at:at+size]=(value&((1<<(size*8))-1)).to_bytes(size,'little')


def profile(runtime):
    return [30928,7680,7688,7696,7944,15600,23260,30920]if runtime.profilePointerBytes==8 else[30916,7680,7684,7688,7936,15592,23252,30912]


def model_initialize(data,ram,resource,layout,p):
    data[resource]=0;put(data,resource+4,0);data[resource+16]=0;data[resource+24+2264:resource+24+7656]=bytes(5392)
    put(data,resource+layout[1],ram+0x3000,p);put(data,resource+layout[2],ram+0x4000,p);put(data,resource+layout[7],0,p);data[resource+layout[4]:resource+layout[4]+7656]=bytes(7656)


def allocation(runtime):
    buffer=ctypes.create_string_buffer(SIZE)if runtime.target=='windows'else None
    return buffer,ctypes.addressof(buffer)if buffer is not None else runtime.ram


def write(runtime,ram,data):
    if runtime.target=='windows':ctypes.memmove(ram,bytes(data),len(data))
    else:runtime.cpu.mem_write(ram,bytes(data))


def read(runtime,ram):return ctypes.string_at(ram,SIZE)if runtime.target=='windows'else bytes(runtime.cpu.mem_read(ram,SIZE))


def initialize(runtime,seed):
    buffer,ram=allocation(runtime);layout=profile(runtime);p=runtime.profilePointerBytes;resource=0x10000;before=bytearray([seed])*SIZE;expected=bytearray(before);model_initialize(expected,ram,resource,layout,p);write(runtime,ram,before)
    runtime.last_return_completed=False;result=runtime.call('resource_initialize062',[ram+resource,ram+0x3000,ram+0x4000]);runtime.last_return_completed=True;after=read(runtime,ram)
    if result!=ram+resource or after!=expected:raise ValueError('062 actual initialized resource whole arena or pointer return differs')
    logical=dict(header=after[resource:resource+24].hex(),unpackedSha256=hashlib.sha256(after[resource+24:resource+24+7656]).hexdigest(),metadataSha256=hashlib.sha256(after[resource+layout[3]:resource+layout[3]+248]).hexdigest(),preparedSha256=hashlib.sha256(after[resource+layout[4]:resource+layout[4]+7656]).hexdigest(),outgoingSha256=hashlib.sha256(after[resource+layout[5]:resource+layout[5]+7660]).hexdigest(),incomingSha256=hashlib.sha256(after[resource+layout[6]:resource+layout[6]+7660]).hexdigest(),channelAlias=0x3000,sinkAlias=0x4000,scratch=None,allRawInitializedArenaMatchesIndependentModel=True)
    return logical


def destroy(runtime,present,reenter,seed):
    buffer,ram=allocation(runtime);p=runtime.profilePointerBytes;layout=profile(runtime);resource=0x10000;heap=0x1000;sdk=0x800;services=0x900;vector=0x8000;pool=0x60000
    hp=[244,24,24,3112,48,0,8,12,16,20,24,28,32,40,0,4,8,16,24,32,40]if p==8 else[244,12,12,1824,28,0,4,8,12,16,20,24,28,32,0,4,8,12,16,20,24]
    life=[3144,0,3112,3120,3128,3132,3136]if p==8 else[1844,0,1824,1828,1832,1836,1840]
    if list(runtime.constant('fixture_lifetime_layout062',7))!=life:raise ValueError('062 derived first-member lifetime context ABI differs')
    before=bytearray([seed])*SIZE;before[heap:heap+life[0]]=bytes(life[0]);before[vector:vector+3*p]=bytes(3*p)
    put(before,heap,ram+pool,p);put(before,heap+hp[6],0x20000);put(before,heap+hp[12],ram+vector,p);put(before,heap+life[2],ram+resource,p);put(before,heap+life[5],reenter);put(before,heap+life[6],ram+0x7000,p)
    put(before,sdk,runtime.symbol('fixture_lifetime_sdk_operations062'),p);put(before,sdk+p,ram+heap,p);put(before,services,runtime.symbol('fixture_heap_allocate062'),p);put(before,services+p,runtime.symbol('fixture_lifetime_dispose062'),p);put(before,services+2*p,ram+heap,p)
    if runtime.target=='original':
        runtime.cpu.mem_write(0x89a508,b'\1')
        for at,value in [(0x89a670,0xf531),(0x8bfb54,0x531),(0x89a688,ram+sdk)]:runtime.cpu.mem_write(at,struct.pack('<I',value))
    write(runtime,ram,before);runtime.call('resource_initialize062',[ram+resource,ram+0x3000,ram+0x4000]);expected=bytearray(before);model_initialize(expected,ram,resource,layout,p)
    if read(runtime,ram)!=expected:raise ValueError('062 destructor prerequisite constructor differs')
    memory=ram+pool+16
    if present:
        actual=runtime.original.call(0x1287d4,[77])if runtime.target=='original'else runtime.call('fixture_heap_allocate062',[ram+heap,77,4])
        if actual!=memory:raise ValueError('062 actual scratch allocation failed or fabricated pointer')
        put(expected,heap+hp[7],93);put(expected,heap+hp[8],1);put(expected,heap+hp[11],1);event=heap+hp[13];put(expected,event,4);put(expected,event+4,77);put(expected,event+8,4);put(expected,event+hp[17],memory,p)
        if read(runtime,ram)!=expected:raise ValueError('062 scratch allocation raw arena differs from model')
        put(expected,resource+layout[7],memory,p)
        if runtime.target=='windows':ctypes.memmove(ram+resource+layout[7],memory.to_bytes(p,'little'),p)
        else:runtime.cpu.mem_write(ram+resource+layout[7],memory.to_bytes(p,'little'))
    runtime.last_return_completed=False;result=runtime.call('resource_destroy062',[ram+resource,ram+services]);runtime.last_return_completed=True
    if present:
        put(expected,resource+layout[7],0,p);put(expected,heap+life[3],memory,p);put(expected,heap+life[4],1);put(expected,heap+hp[9],1);put(expected,heap+hp[11],2);event=heap+hp[13]+hp[4];put(expected,event,5);put(expected,event+hp[17],memory,p)
    after=read(runtime,ram);runtime.last_raw_arena=after;runtime.last_model_arena=bytes(expected);runtime.last_lifetime_observer_region=(heap+life[3],p+4)
    if result!=ram+resource or after!=expected:raise ValueError('062 resource cleanup raw arena, ordering observation or pointer return differs')
    return dict(present=present,reenter=reenter,seed=seed,observedScratch=pool+16 if present else None,observations=int(present),releases=int(present),finalScratch=None,allRawInitializedArenaMatchesIndependentModel=True)


def main(artifacts=None,output=None):
    artifacts=artifacts or WORK/'build';output=output or WORK/'lifetime-proof.json';runtimes={t:Runtime(t,artifacts,heap_services=True,lifetime_entry=True)for t in ['original','arm','windows','a64']};rows=[]
    try:
        for seed in [0,0xa7,0xff]:
            values={t:initialize(r,seed)for t,r in runtimes.items()}
            if any(v!=values['original']for v in values.values()):raise ValueError('062 constructor logical fields differ')
            rows.append(dict(kind='initialize',seed=seed,observations=values))
            for present in [False,True]:
                for reenter in [0,1]:
                    values={t:destroy(r,present,reenter,seed)for t,r in runtimes.items()}
                    if any(v!=values['original']for v in values.values()):raise ValueError('062 real cleanup logical observations differ')
                    rows.append(dict(kind='destroy',observations=values))
        output.write_text(json.dumps(dict(status='actual-resource-construction-and-owned-scratch-cleanup-passed',sets=rows,setCount=len(rows),fourProfileObservations=len(rows)*4,exportedEntryCallsIncludingPrerequisites=132,coverage=coverage(runtimes['original'],[0x251e64,0x251ec8,0x662a34,0x664800]),wholeStepCallerClaim=False,privateMemberConstructorOverlayOnly=True,sourceCreditGranted=0),separators=(',',':'))+'\n',encoding='utf-8');print('062 resource lifetime15scenarios60observations132entrycalls whole arenas and release order passed')
    finally:
        for runtime in runtimes.values():runtime.close()

if __name__=='__main__':main()
