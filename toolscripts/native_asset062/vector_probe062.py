import ctypes
import hashlib
import json
import struct
from pathlib import Path
from runtime062 import Runtime,SIZE

WORK=Path(__file__).resolve().parent


def put(data,offset,value,size=4):data[offset:offset+size]=(value&((1<<(size*8))-1)).to_bytes(size,'little')


def vector_run(runtime,calls):
    native=runtime.profilePointerBytes==8;p=runtime.profilePointerBytes
    expected=[244,24,24,3112,48,0,8,12,16,20,24,28,32,40,0,4,8,16,24,32,40]if native else[244,12,12,1824,28,0,4,8,12,16,20,24,28,32,0,4,8,12,16,20,24]
    if list(runtime.constant('fixture_heap_layout062',21))!=expected:raise ValueError('062 heap/vector ABI does not match independent profile')
    allocation=ctypes.create_string_buffer(SIZE)if runtime.target=='windows'else None;ram=ctypes.addressof(allocation)if allocation is not None else runtime.ram
    data=bytearray(b'\xa7'*SIZE);heap=0x1000;vector=0x3000;record=0x4000;pool=0x10000;sdk=0x800;services=0x900
    data[heap:heap+expected[3]]=bytes(expected[3]);data[vector:vector+3*p]=bytes(3*p)
    put(data,heap,ram+pool,p);put(data,heap+expected[6],0x60000);put(data,heap+expected[12],ram+vector,p)
    put(data,sdk,runtime.symbol('fixture_sdk_operations062'),p);put(data,sdk+p,ram+heap,p)
    put(data,services,runtime.symbol('fixture_heap_allocate062'),p);put(data,services+p,runtime.symbol('fixture_heap_dispose062'),p);put(data,services+2*p,ram+heap,p)
    if runtime.target=='original':
        runtime.cpu.mem_write(0x89a508,b'\1')
        for at,value in [(0x89a670,0xf531),(0x8bfb54,0x531),(0x89a688,ram+sdk)]:runtime.cpu.mem_write(at,struct.pack('<I',value))
    if allocation is not None:ctypes.memmove(ram,bytes(data),SIZE)
    else:runtime.cpu.mem_write(ram,bytes(data))
    rows=[]
    for index in range(calls):
        item=bytes((index*43+j*7)&255 for j in range(244))
        if allocation is not None:ctypes.memmove(ram+record,item,244)
        else:runtime.cpu.mem_write(ram+record,item)
        runtime.call('resource_record_append062',[ram+vector,ram+record,ram+services])
        after=ctypes.string_at(ram,SIZE)if allocation is not None else bytes(runtime.cpu.mem_read(ram,SIZE))
        def get(at,size=4):return int.from_bytes(after[at:at+size],'little')
        pointers=[get(vector+k*p,p)for k in range(3)];count=(pointers[1]-pointers[0])//244;capacity=(pointers[2]-pointers[0])//244
        if count!=index+1:raise ValueError('062 vector did not append exactly one object')
        for k in range(count):
            at=pointers[0]-ram+k*244;wanted=bytes((k*43+j*7)&255 for j in range(241))
            if after[at:at+241]!=wanted or after[at+241:at+244]!=b'\xa7'*3:raise ValueError('062 full record fields/padding differ')
        def pointer(value):return None if value==0 else value-ram
        events=[]
        for k in range(get(heap+expected[11])):
            at=heap+expected[13]+k*expected[4]
            events.append(dict(kind=get(at),bytes=get(at+4),alignment=get(at+8),pointers=[pointer(get(at+expected[q],p))for q in [17,18,19,20]]))
        rows.append(dict(index=index,count=count,capacity=capacity,begin=pointers[0]-ram,used=get(heap+expected[7]),allocations=get(heap+expected[8]),releases=get(heap+expected[9]),events=events,fullLiveRecordsAndPaddingCorrect=True))
    return rows


def main():
    runtimes={t:Runtime(t,WORK/'build',heap_services=True)for t in ['original','arm','windows','a64']}
    try:
        values={t:vector_run(r,105)for t,r in runtimes.items()}
        if any(v!=values['original']for v in values.values()):
            (WORK/'vector-first-failure.json').write_text(json.dumps(values,indent=2)+'\n',encoding='utf-8');raise ValueError('062 actual vector/source heap sequence differs')
        (WORK/'vector-first-proof.json').write_text(json.dumps(dict(status='actual-vector-heap-sequence-four-profiles-passed',observations=values,sourceCreditGranted=0,primitiveHeapIsDeclaredFixtureService=True,wholeResourceCallerClaim=False),separators=(',',':'))+'\n',encoding='utf-8');print('062 vector105 sequential appends on4 profiles passed')
    finally:
        for runtime in runtimes.values():runtime.close()

if __name__=='__main__':main()
