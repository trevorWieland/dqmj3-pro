import ctypes
import hashlib
import json
import random
import struct
from build062ab import WORK,build
from runtime062ab import ConfigRuntime

def expected_config(runtime,seed):
    p=runtime.profilePointerBytes;t=runtime.config_layout;record=0
    image=bytearray(bytes([seed])*t[1])
    def put(at,value,size=4):image[record+at:record+at+size]=int(value).to_bytes(size,'little')
    if runtime.target=='original':identities=[0x853314,0x853304,0x852780,0x8533fc,0x85319c,0x85290c]
    else:identities=[runtime.symbol(name)for name in ['sdk_config_identity062ab','sdk_config_counter_identity062ab','sdk_config_block_identity062ab','sdk_clock_mutex_methods062u','sdk_mutex_class_identity062u','sdk_mutex_tag_identity062u']]
    put(0,identities[0],p);put(t[4],0xffffffff)
    counter=t[5];put(counter,identities[1],p);put(counter+p,0,1);put(counter+(8 if p==4 else 12),0)
    pair=16 if p==4 else 20;put(counter+pair,0);put(counter+pair+4,0);put(counter+pair+8,0xffff,2);put(counter+pair+10,0xffff,2)
    mutex=t[6];put(mutex,identities[3],p);put(mutex+p,identities[4],p)
    fast=runtime.layout[22];put(mutex+fast,1);put(mutex+fast+runtime.layout[19],0,p);put(mutex+fast+runtime.layout[20],0)
    tag=fast+runtime.layout[18];put(mutex+tag,identities[5],p);put(mutex+tag+p,0,1)
    control=(tag+p+4)&~3;put(mutex+control,0x20000000);put(mutex+control+4,0);put(mutex+control+8,0)
    for at in [t[11],t[12],t[13],t[14]]:put(at,0,1 if at==t[11] else 4)
    for index,value in [(15,20),(16,1000),(7,10000),(18,32),(19,128),(20,0x3fa00000),(21,0x3f800000),(22,50),(23,750),(24,250),(25,2),(26,2000)]:put(t[index],value)
    put(t[17],1,1)
    for index,value in [(1,1),(2,0),(3,1),(4,0),(5,2)]:put(t[27]+index,value,1)
    put(t[8],0,p);put(t[28],0,1);put(t[9],identities[2],p);put(t[9]+p,0)
    return image

def program(runtime,seed):
    allocation=ctypes.create_string_buffer(0x100000) if runtime.target=='windows' else None
    base=ctypes.addressof(allocation) if allocation is not None else runtime.ram
    image=bytearray(bytes([seed])*0x100000);record=0x1000
    expected=expected_config(runtime,seed)
    image[record:record+len(expected)]=expected
    before=bytes([seed])*len(image);runtime.store(base,before);module=runtime.read(0x888000,471024) if runtime.target=='original' else None
    result=runtime.initialize(base+record);arena=runtime.read(base,len(image));runtime.last_comparison=dict(normallyReturned=True,wholeArenaEqual=arena==image,resultEqual=result==base+record)
    if result!=base+record:raise ValueError('062ab normally-returning pointer mismatch')
    if arena!=image:raise ValueError('062ab normally-returning full-arena mismatch '+str(next(i for i,(a,b)in enumerate(zip(arena,image))if a!=b)))
    if module is not None and runtime.read(0x888000,471024)!=module:raise ValueError('062ab original module changed')
    return dict(seed=seed,actualNativeBase=base,returnIsThis=True,rawReturn=result,rawArenaSha256=hashlib.sha256(arena).hexdigest(),expectedArenaSha256=hashlib.sha256(image).hexdigest(),fullIndependentModelEqual=True)

def run(folder,rebuild=True):
    if rebuild:
        for target in ['arm','windows','a64']:build(folder/'build'/target,target)
    rows=[];coverage=set();layouts={}
    for target in ['original','arm','windows','a64']:
        runtime=ConfigRuntime(target,folder/'build')
        try:
            layouts[target]=runtime.config_layout
            for seed in [0,1,0x5a,0xa7,0xff]:rows.append(dict(profile=target,**program(runtime,seed)))
            if target=='original':coverage.update(runtime.original.coverage)
            print('062ab',target,'complete config constructor full-arena checks passed',flush=True)
        finally:runtime.close()
    selected=set(range(0x471eb0,0x471fb8,4));missing=sorted(selected-coverage)
    if missing:raise ValueError('062ab config constructor missingPCs '+str(missing))
    result=dict(status='actual-config-record-constructor-passed',observations=rows,comparisons=len(rows),compiledLayouts=layouts,originalInstructionPcs=len(selected),originalPcVisits=len(selected&coverage),sourceCreditGranted=0,fullOwnerCredit=0)
    folder.mkdir(parents=True,exist_ok=True);(folder/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result
if __name__=='__main__':run(WORK/'attempt001')
