import ctypes
import hashlib
import json
import struct
from pathlib import Path
from runtime062 import Runtime,SIZE,STACK

from coverage062 import coverage

WORK=Path(__file__).resolve().parent


def put(data,offset,value,size=4):data[offset:offset+size]=(value&((1<<(size*8))-1)).to_bytes(size,'little')


def program(runtime,calls,outbound=None):
    p=runtime.profilePointerBytes;native=p==8
    profile=[244,24,24,3112,48,0,8,12,16,20,24,28,32,40,0,4,8,16,24,32,40]if native else[244,12,12,1824,28,0,4,8,12,16,20,24,28,32,0,4,8,12,16,20,24]
    commands=[240,144,1320,32,36,40,168,96,48,72,0,8,48,33,2264,336,1296,1300,30928,7680,7688,7696,7944,15600,23260,30920]if native else[240,140,1276,20,24,28,156,72,48,60,0,4,24,17,2264,336,1296,1300,30916,7680,7684,7688,7936,15592,23252,30912]
    if list(runtime.constant('fixture_heap_layout062',21))!=profile or list(runtime.constant('fixture_command_layout062',26))!=commands:raise ValueError('062 independently derived record/storage ABI differs')
    allocation=ctypes.create_string_buffer(SIZE)if runtime.target=='windows'else None;ram=ctypes.addressof(allocation)if allocation is not None else runtime.ram
    heap=0x1000;sink=0x3000;record=0x4000;pool=0x10000;sdk=0x800;services=0x900
    vector=sink if outbound is None else sink+commands[8+outbound]
    expected=bytearray(b'\xa7'*SIZE);expected[heap:heap+profile[3]]=bytes(profile[3]);expected[vector:vector+3*p]=bytes(3*p)
    put(expected,heap,ram+pool,p);put(expected,heap+profile[6],0x60000);put(expected,heap+profile[12],ram+vector,p)
    put(expected,sdk,runtime.symbol('fixture_sdk_operations062'),p);put(expected,sdk+p,ram+heap,p)
    put(expected,services,runtime.symbol('fixture_heap_allocate062'),p);put(expected,services+p,runtime.symbol('fixture_heap_dispose062'),p);put(expected,services+2*p,ram+heap,p)
    if runtime.target=='original':
        runtime.cpu.mem_write(0x89a508,b'\1')
        for at,value in [(0x89a670,0xf531),(0x8bfb54,0x531),(0x89a688,ram+sdk)]:runtime.cpu.mem_write(at,struct.pack('<I',value))
    if allocation is not None:ctypes.memmove(ram,bytes(expected),SIZE)
    else:runtime.cpu.mem_write(ram,bytes(expected))
    rows=[];count=capacity=used=allocations=releases=0;base=None;events=[]
    def event(kind,bytes_count,memory,old):
        index=len(events);at=heap+profile[13]+index*profile[4]
        put(expected,at,kind);put(expected,at+4,bytes_count);put(expected,at+8,4 if kind==4 else 0)
        for q,value in zip([17,18,19,20],[memory,*old]):put(expected,at+profile[q],0 if value is None else ram+value,p)
        events.append(dict(kind=kind,bytes=bytes_count,alignment=4 if kind==4 else 0,pointers=[memory,*old]));put(expected,heap+profile[11],len(events))
    for index in range(calls):
        item=bytes((index*43+j*7)&255 for j in range(244));valid=[0,1,255,0xffffffff,0x100][index%5]if outbound is not None else item[240]
        expected[record:record+244]=item
        if allocation is not None:ctypes.memmove(ram+record,item,244)
        else:runtime.cpu.mem_write(ram+record,item)
        runtime.last_return_completed=False
        if outbound is None:runtime.call('resource_record_append062',[ram+vector,ram+record,ram+services])
        elif runtime.target=='original':
            runtime.cpu.mem_write(STACK+0x10000,item[12:240]+struct.pack('<I',valid))
            runtime.original.call(0x3704a4 if outbound else 0x370438,[ram+sink,*struct.unpack('<3I',item[:12])])
        else:runtime.call('fixture_queue_header062',[ram+sink,ram+record,valid,outbound,ram+services])
        runtime.last_return_completed=True
        old=[base,None if base is None else base+count*244,None if base is None else base+capacity*244]
        if count==capacity:
            next_capacity=max(count+count//2+count//8,count+32);next_base=pool+((used+31)&~15)
            allocations+=1;event(4,next_capacity*244,next_base,old);used=next_base-pool+next_capacity*244
            put(expected,heap+profile[8],allocations);put(expected,heap+profile[7],used)
            for k in range(count):expected[next_base+k*244:next_base+k*244+241]=expected[base+k*244:base+k*244+241]
            expected[next_base+count*244:next_base+count*244+240]=item[:240];expected[next_base+count*244+240]=valid&255
            if base is not None:releases+=1;event(5,0,base,old);put(expected,heap+profile[9],releases)
            base=next_base;capacity=next_capacity
        else:
            expected[base+count*244:base+count*244+240]=item[:240];expected[base+count*244+240]=valid&255
        count+=1
        for k,value in enumerate([base,base+count*244,base+capacity*244]):put(expected,vector+k*p,ram+value,p)
        after=ctypes.string_at(ram,SIZE)if allocation is not None else bytes(runtime.cpu.mem_read(ram,SIZE))
        runtime.last_raw_arena=after;runtime.last_model_arena=bytes(expected);runtime.last_event_region=(heap+profile[13],64*profile[4])
        if after!=expected:
            offsets=[at for at,(a,b)in enumerate(zip(after,expected))if a!=b];(WORK/'records-model-failure.json').write_text(json.dumps(dict(target=runtime.target,index=index,outbound=outbound,offsets=offsets[:60]),indent=2)+'\n',encoding='utf-8');raise ValueError('062 full initialized record/heap arena differs from independent model')
        normalized=bytearray(after)
        for at,size in [(heap,3112),(vector,24)if outbound is None else(sink,96),(sdk,16),(services,24)]:normalized[at:at+size]=bytes(size)
        rows.append(dict(index=index,count=count,capacity=capacity,begin=base,used=used,allocations=allocations,releases=releases,events=list(events),allRawInitializedArenaBytesEqualIndependentModel=True,untypedArenaSha256=hashlib.sha256(normalized).hexdigest()))
    return rows


def main(artifacts=None,output=None):
    artifacts=artifacts or WORK/'build'
    output=output or WORK/'records-proof.json'
    runtimes={t:Runtime(t,artifacts,heap_services=True)for t in ['original','arm','windows','a64']};rows=[]
    try:
        for outbound,calls in [(None,105),(0,40),(1,40)]:
            values={t:program(r,calls,outbound)for t,r in runtimes.items()}
            if any(v!=values['original']for v in values.values()):raise ValueError('062 original/source logical record sequence differs')
            rows.append(dict(outbound=outbound,calls=calls,observations=values))
        output.write_text(json.dumps(dict(status='real-vector-and-both-command-wrappers-whole-arena-model-passed',programs=rows,callSets=185,fourProfileCalls=740,coverage=coverage(runtimes['original'],[7971820, 3605560, 3605668]),sourceCreditGranted=0,wholeResourceCallerClaim=False,heapIsExplicitPrimitiveService=True),separators=(',',':'))+'\n',encoding='utf-8');print('062 record/vector/queue185 sequential sets740 calls passed')
    finally:
        for runtime in runtimes.values():runtime.close()

if __name__=='__main__':main()
