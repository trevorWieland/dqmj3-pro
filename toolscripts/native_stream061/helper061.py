import ctypes
import hashlib
import json
from pathlib import Path
from runtime061 import Runtime,RAM,SIZE
from native_stream058_layout import get,put

WORK=Path(__file__).resolve().parent


def allocate(runtime,capacity,used,count,size):
    machine=runtime.machine;pointer_bytes=runtime.profile['pointer']
    allocation=ctypes.create_string_buffer(SIZE)if runtime.target=='windows'else None
    ram=ctypes.addressof(allocation)if allocation is not None else RAM if runtime.target=='original'else machine.ram
    before=bytearray(b'\xa7'*SIZE);context=0x200;buffer=0x30000
    if ((count*size)&0xffffffff)>0xffffffff-(RAM+buffer+used):raise ValueError('061 address-wrap inputs outside portable object-pointer domain')
    put(before,context,ram+buffer+used,pointer_bytes);put(before,context+pointer_bytes,ram+buffer+capacity,pointer_bytes)
    args=[ram+context,count,size]
    if runtime.target=='windows':
        ctypes.memmove(ram,bytes(before),SIZE);fn=machine.library.asset_allocate061
        fn.argtypes=[ctypes.c_void_p,ctypes.c_uint32,ctypes.c_uint32];fn.restype=ctypes.c_void_p
        result=fn(*args)or 0;after=ctypes.string_at(ram,SIZE)
    else:
        machine.cpu.mem_write(ram,bytes(before))
        result=machine.call(0x44c72c,args)if runtime.target=='original'else machine.call('asset_allocate061',args,pointer_result=True)
        after=bytes(machine.cpu.mem_read(ram,SIZE))
    runtime.last_raw_return=result
    product=(count*size)&0xffffffff;fits=product<=capacity-used
    expected_pointer=ram+buffer+used if fits else 0
    expected=bytearray(before)
    if fits:put(expected,context,ram+buffer+used+product,pointer_bytes)
    if result!=expected_pointer or after!=expected:raise ValueError('061 real bump allocator pointer/state/canary mismatch')
    return dict(returned=used if fits else None,cursor=get(after,context,pointer_bytes)-ram-buffer,entireOtherInitializedArenaUnchanged=True)


def status(runtime,value):
    machine=runtime.machine
    if runtime.target=='windows':
        function=machine.library.asset_status061;function.argtypes=[ctypes.c_int32];function.restype=ctypes.c_int32
        return function(value)
    return machine.call(0x44c74c if runtime.target=='original'else'asset_status061',[value])


def main():
    runtimes={t:Runtime(t,WORK/'build')for t in ['original','arm','windows','a64']};rows=[];statuses=[];excluded=[]
    try:
        for capacity in [0,1,16,7116,32768]:
            for used in [0,capacity]:
                for count,size in [(0,0),(0,0xffffffff),(1,0),(1,1),(1,7116),(32768,1),(0x80000000,2),(0xffffffff,2),(65536,65536)]:
                    if ((count*size)&0xffffffff)>0xffffffff-(RAM+0x30000+used):
                        excluded.append(dict(capacity=capacity,used=used,count=count,size=size,reason='reference-address addition wraps; retained original-only witness'))
                        continue
                    values={t:allocate(r,capacity,used,count,size)for t,r in runtimes.items()}
                    if any(v!=values['original']for v in values.values()):raise ValueError('061 allocator profiles differ')
                    rows.append(dict(capacity=capacity,used=used,count=count,size=size,observation=values['original']))
        for value in list(range(-12,12))+[-0x80000000,0x7fffffff]:
            values={t:status(r,value)for t,r in runtimes.items()}
            if any(v!=values['original']for v in values.values()):raise ValueError('061 status mapping profiles differ')
            statuses.append(dict(argument=value,result=values['original']))
        (WORK/'helper-first-proof.json').write_text(json.dumps(dict(status='bounded-bump-and-full-status-domain-samples-passed',allocatorCases=rows,statusCases=statuses,excludedAddressWrapCases=excluded,sourceCreditGranted=0),separators=(',',':'))+'\n',encoding='utf-8')
        print('061 helpers',len(rows),'allocator +',len(statuses),'status sets passed')
    finally:
        for r in runtimes.values():r.close()

if __name__=='__main__':main()
