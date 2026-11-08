import ctypes
import hashlib
import json
from pathlib import Path
import struct
from build062ab import WORK,ROOT,build
from runtime062ab import ConfigRuntime
from proof062ab import expected_config

def disabled_program(runtime,seed):
    allocation=ctypes.create_string_buffer(0x100000) if runtime.target=='windows' else None
    base=ctypes.addressof(allocation) if allocation is not None else runtime.ram
    image=bytearray(bytes([seed])*0x100000);p=runtime.profilePointerBytes;t=runtime.config_layout
    stride,records,defaults=t[29:32];table_address=0x8e77b8 if runtime.target=='original' else base+0x10000
    table=bytearray(bytes([seed])*(16*stride))
    if runtime.target=='original':
        code=(ROOT/'generated/update-content0/code.bin').read_bytes();identity=struct.unpack_from('<I',code,0x74d4d0-0x100000)[0]
    else:identity=runtime.symbol('sdk_config_slot_identity062ab')
    for component in range(16):
        at=component*stride;table[at:at+p]=identity.to_bytes(p,'little');table[at+p:at+p+4]=bytes(4);table[at+records:at+records+p]=bytes(p)
    runtime.store(base,image);runtime.store(table_address,table)
    if runtime.target=='original':
        runtime.store(0x8b6378+6,b'\0');module=bytearray(runtime.read(0x888000,471024))
    else:
        runtime.store(runtime.symbol('sdk_environment062s')+runtime.layout[36],b'\0');runtime.store(runtime.symbol('sdk_config_table062ab'),table_address.to_bytes(p,'little'));module=None
    expected=expected_config(runtime,seed)
    for component in range(16):
        for which in range(2):
            offset=component*stride+defaults+which*t[1];result=runtime.initialize(table_address+offset)
            if result!=table_address+offset:raise ValueError('062ab table actual ctor return mismatch')
            table[offset:offset+t[1]]=expected
            if runtime.read(table_address,len(table))!=table:raise ValueError('062ab table actual ctor complete state mismatch')
    observations=[]
    for component in range(16):
        expected_pointer=table_address+component*stride+defaults;result=runtime.select(component)
        if result!=expected_pointer:raise ValueError('062ab disabled selector native pointer mismatch')
        observations.append(dict(component=component,rawReturn=result,expectedReturn=expected_pointer))
    if runtime.read(table_address,len(table))!=table:raise ValueError('062ab selector changed table')
    if module is not None:
        offset=table_address-0x888000;module[offset:offset+len(table)]=table
        if runtime.read(0x888000,471024)!=module:raise ValueError('062ab selector original module state mismatch')
    else:image[0x10000:0x10000+len(table)]=table
    if runtime.read(base,len(image))!=image:raise ValueError('062ab selector arena mismatch')
    return dict(seed=seed,tableSha256=hashlib.sha256(table).hexdigest(),observations=observations,actualTableAddress=table_address,typedSlotProvisioner=True,actualRecordCtorExecuted=32,globalInitializerCredit=0)

def enabled_program(runtime,index,enabled=1):
    from kernel062s import ThreadServices
    from map_proof062s import Model
    allocation=ctypes.create_string_buffer(0x100000) if runtime.target=='windows' else None
    base=ctypes.addressof(allocation) if allocation is not None else runtime.ram
    p=runtime.profilePointerBytes;l=runtime.layout;t=runtime.config_layout
    model=Model(l,base,runtime.symbol('fixture_sdk_dispose062s'));manager,owner=0x5000,0x9000
    previous=bytes(model.image[model.map:model.map+l[9]]);model.image[model.map:model.map+l[9]]=b'\xa7'*l[9];model.map=manager+l[26];model.image[model.map:model.map+l[9]]=previous;model.word(manager+l[24],index)
    mutex=manager+l[25];model.ptr(mutex,0x8533fc if runtime.target=='original' else runtime.symbol('fixture_sdk_mutex_methods062s'));fast=mutex+l[22];model.word(fast,1);model.ptr(fast+l[19],0);model.word(fast+l[20],0)
    runtime.store(base,model.image);runtime.bind(base+model.heap,base+owner);model.initialize();answer=runtime.call('sdk_map_initialize062s',[base+model.map])
    if answer!=base+model.map or runtime.read(base,len(model.image))!=model.image:raise ValueError('062ab actual context-map ctor mismatch')
    stride,records,defaults=t[29:32];table_address=0x8e77b8 if runtime.target=='original' else base+0x20000
    table=bytearray(b'\xa7'*(16*stride));record_image=expected_config(runtime,0xa7)
    if runtime.target=='original':
        code=(ROOT/'generated/update-content0/code.bin').read_bytes();identity=struct.unpack_from('<I',code,0x74d4d0-0x100000)[0]
    else:identity=runtime.symbol('sdk_config_slot_identity062ab')
    for component in range(16):
        at=component*stride;table[at:at+p]=identity.to_bytes(p,'little');table[at+p:at+p+4]=bytes(4);array=base+0x30000+component*4*t[1]
        table[at+records:at+records+p]=(array if index else 0).to_bytes(p,'little')
    runtime.store(table_address,table)
    for component in range(16):
        for which in range(2):
            offset=component*stride+defaults+which*t[1];address=table_address+offset
            if runtime.initialize(address)!=address:raise ValueError('062ab actual default ctor failed')
            table[offset:offset+t[1]]=record_image
        for which in range(4):
            offset=0x30000+(component*4+which)*t[1];address=base+offset
            if runtime.initialize(address)!=address:raise ValueError('062ab actual context record ctor failed')
            model.image[offset:offset+t[1]]=record_image
    if runtime.target=='original':
        runtime.store(0x8b6378+6,bytes([enabled]));runtime.store(0x8b6378+4,b'\0');runtime.store(0x8b6378+0x60,(base+manager).to_bytes(4,'little'));module=bytearray(runtime.read(0x888000,471024))
    else:
        env=runtime.symbol('sdk_environment062s');runtime.store(env+l[36],bytes([enabled]));runtime.store(env+6*p,b'\0');runtime.store(env+l[37],(base+manager).to_bytes(p,'little'));runtime.store(runtime.symbol('sdk_config_table062ab'),table_address.to_bytes(p,'little'));module=None;model.image[0x20000:0x20000+len(table)]=table
    services=ThreadServices(runtime,base+owner)
    try:
        rows=[]
        for component in list(range(16))+[0,15]:
            node=next((at for at,value in model.nodes.items()if value['key']==services.tid),None);expected_calls=1
            if node is None:node=model.insert(services.tid,0);model.nodes[node]['value']=index;expected_calls=3
            model.render();before=services.calls();answer=runtime.select(component);calls=services.calls()-before
            expected=table_address+component*stride+defaults if index==0 else base+0x30000+(component*4+index)*t[1]
            arena=runtime.read(base,len(model.image));runtime.last_comparison=dict(normallyReturned=True,wholeArenaEqual=arena==model.image,resultEqual=answer==expected,threadCallsEqual=calls==expected_calls)
            if answer!=expected:raise ValueError('062ab normally-returning enabled selector pointer mismatch')
            if calls!=expected_calls:raise ValueError('062ab normally-returning thread freshness mismatch')
            if arena!=model.image:raise ValueError('062ab normally-returning enabled selector arena mismatch '+str(next(i for i,(a,b)in enumerate(zip(arena,model.image))if a!=b)))
            rows.append(dict(component=component,index=index,expectedCalls=expected_calls,actualCalls=calls,rawReturn=answer,expectedReturn=expected,rawArenaSha256=hashlib.sha256(arena).hexdigest(),expectedArenaSha256=hashlib.sha256(model.image).hexdigest()))
        if module is not None and runtime.read(0x888000,471024)!=module:raise ValueError('062ab enabled selector mutated module')
        return dict(index=index,enabled=enabled,observations=rows,actualThreadId=services.tid,actualWindowsTls=runtime.target=='windows',referenceSvcCalls=services.svc,typedSlotProvisioner=True,actualRecordCtorExecuted=96,globalInitializerCredit=0)
    finally:services.close()

def run(folder):
    for target in ['arm','windows','a64']:build(folder/'build'/target,target)
    rows=[]
    for target in ['original','arm','windows','a64']:
        runtime=ConfigRuntime(target,folder/'build')
        try:
            for seed in [0,0xa7,0xff]:rows.append(dict(profile=target,**disabled_program(runtime,seed)))
            for index in [0,1,3]:rows.append(dict(profile=target,**enabled_program(runtime,index,128 if index==3 else 1)))
            print('062ab',target,'actual-ctor disabled and real-thread selectors passed',flush=True)
        finally:runtime.close()
    result=dict(status='actual-record-ctor-disabled-and-real-thread-selector-passed',programs=rows,selectorComparisons=sum(len(r['observations'])for r in rows),sourceCreditGranted=0,completeSelectorCredit=0,fullOwnerCredit=0)
    (folder/'selector-report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
if __name__=='__main__':run(WORK/'selector-attempt001')
