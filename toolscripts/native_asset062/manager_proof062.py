import ctypes
import hashlib
import json
import struct
from pathlib import Path
from runtime062 import Runtime,SIZE
from unicorn import UC_HOOK_CODE

from coverage062 import coverage

WORK=Path(__file__).resolve().parent


def put(data,at,value,size=4):data[at:at+size]=(value&((1<<(size*8))-1)).to_bytes(size,'little')


def case(runtime,kind,slot,enabled=1,match=True):
    if slot<0 or slot>=8:raise ValueError('062 slot exceeds actual eight-slot provider')
    p=runtime.profilePointerBytes;native=p==8
    allocation=ctypes.create_string_buffer(SIZE)if runtime.target=='windows'else None;ram=ctypes.addressof(allocation)if allocation is not None else runtime.ram
    manager=0x10000;binding=0x2000;input=0x3000
    size=1320 if native else 1276;slots=168 if native else 156;stride=144 if native else 140;block=16 if native else 12;pending=24 if native else 16;request_offset=8 if native else 4
    before=bytearray(b'\xa7'*SIZE);put(before,manager,0x831be4 if runtime.target=='original'else runtime.symbol('fixture_manager_methods062'),p);put(before,manager+p,ram+binding,p);put(before,manager+2*p,8)
    before[binding:binding+(40 if native else 20)]=bytes(40 if native else 20);before[binding+(33 if native else 17)]=enabled
    for index in range(8):
        put(before,manager+slots+stride*index,0,p);put(before,manager+slots+stride*index+request_offset,1000+index);put(before,manager+slots+stride*index+request_offset+4,2000+index)
    put(before,input,0xfedcba98);expected=bytearray(before)
    if kind=='matches':args=[ram+manager,1000+slot+(0 if match else 1),slot];name='resource_manager_matches062';wanted=int(enabled!=0 and match)
    elif kind=='query':args=[ram+manager,slot];name='resource_manager_query062';wanted=1000+slot
    elif kind=='record':args=[ram+manager,slot];name='resource_manager_record062';wanted=ram+manager+slots+stride*slot+block
    elif kind.startswith('post-block'):
        block_kind=8 if kind.endswith('8')else 3;args=[ram+manager,ram+input,1036+slot,block_kind];name='resource_manager_post_block062';wanted=None;put(expected,manager+pending+request_offset,1036+slot);put(expected,manager+pending+request_offset+4,block_kind);expected[manager+pending+block:manager+pending+block+128]=before[input:input+128]
    else:
        args=[ram+manager,ram+input,1036+slot];name='resource_manager_post_word062';wanted=None;put(expected,manager+pending+request_offset,1036+slot);put(expected,manager+pending+request_offset+4,2);put(expected,manager+pending+block,0xfedcba98)
    if allocation is not None:ctypes.memmove(ram,bytes(before),SIZE)
    else:runtime.cpu.mem_write(ram,bytes(before))
    calls=[];hook=None
    if runtime.target!='windows':
        target=0x6cb234 if runtime.target=='original'else runtime.symbol('resource_manager_query062')
        def observe(cpu,address,count,data):
            if address==target:calls.append(address)
        hook=runtime.cpu.hook_add(UC_HOOK_CODE,observe)
    runtime.last_return_completed=False
    result=runtime.call(name,args)
    runtime.last_return_completed=True
    if hook is not None:runtime.cpu.hook_del(hook)
    after=ctypes.string_at(ram,SIZE)if allocation is not None else bytes(runtime.cpu.mem_read(ram,SIZE))
    if after!=expected or(wanted is not None and result!=wanted):raise ValueError('062 concrete manager provider whole-arena/return mismatch')
    if runtime.target!='windows'and kind=='matches'and len(calls)!=int(enabled!=0):raise ValueError('062 genuine callback invocation was skipped or invented')
    normalized=bytearray(after);normalized[manager:manager+1320]=bytes(1320);normalized[binding:binding+40]=bytes(40)
    return dict(kind=kind,slot=slot,enabled=enabled,match=match,returnedAliasOffset=result-ram if kind=='record'else result if wanted is not None else None,genuineQueryCalls=int(enabled!=0)if kind=='matches'else None,entireInitializedArenaMatchesIndependentModel=True,untypedArenaSha256=hashlib.sha256(normalized).hexdigest())


def main(artifacts=None,output=None):
    artifacts=artifacts or WORK/'build'
    output=output or WORK/'manager-proof.json'
    runtimes={t:Runtime(t,artifacts,manager_entry=True)for t in ['original','arm','windows','a64']};rows=[]
    try:
        plans=[('matches',slot,enabled,match)for slot in range(8)for enabled in [0,1,255]for match in [False,True]]+[(kind,slot,1,True)for kind in ['query','record','post-word','post-block3','post-block8']for slot in range(8)]
        for kind,slot,enabled,match in plans:
            values={t:case(r,kind,slot,enabled,match)for t,r in runtimes.items()}
            reference={k:v for k,v in values['original'].items()if k!='returnedAliasOffset'}
            if any({k:v for k,v in row.items()if k!='returnedAliasOffset'}!=reference for row in values.values()):raise ValueError('062 manager logical projections differ')
            if kind!='record'and any(v['returnedAliasOffset']!=values['original']['returnedAliasOffset']for v in values.values()):raise ValueError('062 manager scalar return differs')
            rows.append(dict(kind=kind,slot=slot,observations=values))
        output.write_text(json.dumps(dict(status='genuine-manager-request-query-and-bounded-storage-providers-passed',sets=rows,setCount=len(rows),fourProfileCalls=len(rows)*4,constructorLifetimeOrWholeCallerClaim=False,privateQueryEntryOverlayOnly=True,coverage=coverage(runtimes['original'],[7038256, 7123508, 7123448, 4050100, 4050556, 4050596]),sourceCreditGranted=0),separators=(',',':'))+'\n',encoding='utf-8');print('062 manager88sets352calls genuine query/vtable whole arenas passed')
    finally:
        for runtime in runtimes.values():runtime.close()

if __name__=='__main__':main()
