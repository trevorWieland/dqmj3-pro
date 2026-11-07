import ctypes
import hashlib
import json
import random
import struct
import sys
from pathlib import Path
from runtime062 import Runtime,ROOT
import inventory

WORK=Path(__file__).resolve().parent


def model(seed):
    value=seed;words=[0]*55
    for index in range(54,-1,-1):
        words[index]=(value+(value>>16))&0xffffffff
        value=(69069*value+0x66d619e1)&0xffffffff
    x,y,z,w=123456789,362436069,521288629,seed
    for index in range(20):
        t=(x^((x<<11)&0xffffffff))&0xffffffff
        x,y,z,w=y,z,w,(w^(w>>19)^t^(t>>8))&0xffffffff
    return dict(seed=seed,words=words,firstIndex=31,secondIndex=0,xorshift=[x,y,z,w])


def observe(runtime,seed):
    if runtime.target=='original':
        layout=inventory.code_layout((ROOT/'generated/update-content0/exheader.bin').read_bytes());data=next(s for s in layout['segments']if s['name']=='data');base=data['address'];size=data['initializedBytes']+layout['bssBytes']
        spans=[(0x89a4c8,4),(0x8f7e6c,228),(0x8bf60c,16)]
        for at,count in spans:runtime.cpu.mem_write(at,b'\xa7'*count)
        before=bytes(runtime.cpu.mem_read(base,size));runtime.last_return_completed=False;runtime.call('resource_seed062',[seed]);runtime.last_return_completed=True;after=bytes(runtime.cpu.mem_read(base,size));expected=bytearray(before)
        for at,count in spans:expected[at-base:at-base+count]=runtime.cpu.mem_read(at,count)
        if after!=expected:raise ValueError('062 original seed modified unrelated initialized/global bytes')
        state=struct.unpack('<55I',runtime.cpu.mem_read(0x8f7e6c,220));first,second=struct.unpack('<2I',runtime.cpu.mem_read(0x8f7f48,8));actual_seed=runtime.original.word(0x89a4c8);xorshift=struct.unpack('<4I',runtime.cpu.mem_read(0x8bf60c,16))
        result=dict(seed=actual_seed,words=list(state),firstIndex=(first-0x8f7e6c)//4,secondIndex=(second-0x8f7e6c)//4,xorshift=list(xorshift))
    else:
        profile=list(runtime.constant('fixture_random_layout062',6));p=runtime.profilePointerBytes
        if profile!=([256,0,4,224,232,240]if p==8 else[248,0,4,224,228,232]):raise ValueError('062 grouped native RNG layout changed')
        at=runtime.symbol('resource_random_state062')
        if runtime.target=='windows':ctypes.memset(at,0xa7,profile[0])
        else:runtime.cpu.mem_write(at,b'\xa7'*profile[0])
        runtime.last_return_completed=False;runtime.call('resource_seed062',[seed]);runtime.last_return_completed=True;raw=ctypes.string_at(at,profile[0])if runtime.target=='windows'else bytes(runtime.cpu.mem_read(at,profile[0]))
        first=int.from_bytes(raw[profile[3]:profile[3]+p],'little');second=int.from_bytes(raw[profile[4]:profile[4]+p],'little');words=struct.unpack_from('<55I',raw,profile[2]);xorshift=struct.unpack_from('<4I',raw,profile[5])
        if p==8 and(first<=0xffffffff or second<=0xffffffff):raise ValueError('062 SDK table pointers lost actual native width')
        result=dict(seed=struct.unpack_from('<I',raw,0)[0],words=list(words),firstIndex=(first-(at+4))//4,secondIndex=(second-(at+4))//4,xorshift=list(xorshift))
    if result!=model(seed):raise ValueError('062 seed provider differs from independent unsigned32 model')
    return result


def main(artifacts=None,output=None):
    artifacts=artifacts or WORK/'build'
    output=output or WORK/'seed-proof.json'
    runtimes={t:Runtime(t,artifacts,seed_entry=True)for t in ['original','arm','windows','a64']};randomizer=random.Random(620200);seeds=[0,1,2,55,69069,0x80000000,0xffffffff,0x12345678]+[randomizer.getrandbits(32)for _ in range(128)];rows=[]
    try:
        for seed in seeds:
            values={t:observe(r,seed)for t,r in runtimes.items()}
            if any(v!=values['original']for v in values.values()):raise ValueError('062 seeded global-state projections differ')
            rows.append(dict(seed=seed,observations=values))
        spans=[(0x615ecc,0x615ee4,4),(0x107aac,0x107ab8,4),(0x100668,0x100670,4),(0x100670,0x10069c,2),(0x10d9d4,0x10da44,4)];pcs={p for a,z,n in spans for p in range(a,z,n)};missing=sorted(pcs-runtimes['original'].original.coverage)
        if missing:raise ValueError('062 seed provider original instruction coverage incomplete')
        output.write_text(json.dumps(dict(status='genuine-complete-seed-provider-four-profile-state-passed',sets=rows,setCount=len(rows),fourProfileCalls=len(rows)*4,originalInstructions=len(pcs),missingPcs=missing,instructionBytes=200,privateThumbOverlayOnly=True,sharedInventoryModified=False,sourceCreditGranted=0),separators=(',',':'))+'\n',encoding='utf-8');print('062 seed136 sets544 calls; all61 original instructions passed')
    finally:
        for runtime in runtimes.values():runtime.close()

if __name__=='__main__':main()
