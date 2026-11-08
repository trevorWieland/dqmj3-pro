import ctypes
import hashlib
import json
import struct
import sys
from build062ab import ROOT,WORK,build
from runtime062ab import ConfigRuntime
from proof062ab import expected_config
sys.path.insert(0,str(ROOT/'work/native-asset062-sdk-timer'))
from model062aa import TimerModel,MASK
BASE=0x8b6378

def program(runtime,raw=100,initialized=1,destroy=False,keys=(),timer_steps=0,deleting=False):
    allocation=ctypes.create_string_buffer(0x100000) if runtime.target=='windows' else None
    base=ctypes.addressof(allocation) if allocation is not None else runtime.ram
    p=runtime.profilePointerBytes;t=runtime.timer_layout;o=runtime.owner_layout;c=runtime.config_layout;l=runtime.layout
    endpoint=0x8528bc if runtime.target=='original' else runtime.symbol('sdk_endpoint_identity062aa')
    model=TimerModel(l,base,runtime.symbol('fixture_owner_dispose062ab') if destroy else runtime.symbol('fixture_sdk_dispose062s'),t,endpoint);owner=0x6000;backend=0x8000;model.timer=owner+o[9];model.map=model.timer+t[16]
    table_address=0x8e77b8 if runtime.target=='original' else base+0x20000;stride,records,defaults=c[29:32];table=bytearray(b'\xa7'*(16*stride));record_image=expected_config(runtime,0xa7)
    runtime.store(base,model.image);runtime.bind(base+model.heap,base+0x9000);runtime.store(table_address,table)
    for component in range(16):
        for which in range(2):
            offset=component*stride+defaults+which*c[1];address=table_address+offset
            if runtime.initialize(address)!=address:raise ValueError('062ab owner config actual ctor return')
            table[offset:offset+c[1]]=record_image
    clock=bytearray(b'\xa7'*t[25]);clock[0]=initialized;clock[1]=0;clock[2]=0;struct.pack_into('<I',clock,4,0)
    for at in [8,16,24]:struct.pack_into('<Q',clock,at,0)
    clock[t[28]:t[28]+p]=(base+backend).to_bytes(p,'little');model.ptr(backend,runtime.symbol('fixture_timer_clock_methods062aa'));struct.pack_into('<Q',model.image,backend+t[21],raw);model.word(backend+t[22],0);model.word(backend+t[23],0)
    model.ptr(backend+t[24],BASE+9 if runtime.target=='original' else runtime.symbol('sdk_clock062u'))
    if runtime.target!='original':model.image[0x20000:0x20000+len(table)]=table
    runtime.store(base,model.image)
    if runtime.target=='original':
        for offset,value,size in [(6,0,1),(9,initialized,1),(10,0,1),(41,0,1),(368,0,4),(408,0,8),(416,0,8),(456,0,8),(104,base+backend,4)]:runtime.store(BASE+offset,value.to_bytes(size,'little'))
        module=bytearray(runtime.read(0x888000,471024));owner_identity=0x852f50;mutex_identities=[0x8533fc,0x85319c,0x85290c]
    else:
        env=runtime.symbol('sdk_environment062s');runtime.store(env+l[36],b'\0');runtime.store(runtime.symbol('sdk_config_table062ab'),table_address.to_bytes(p,'little'));runtime.store(runtime.symbol('sdk_clock062u'),clock);module=None;owner_identity=runtime.symbol('sdk_owner_identity062ab');mutex_identities=[runtime.symbol(n)for n in ['sdk_clock_mutex_methods062u','sdk_mutex_class_identity062u','sdk_mutex_tag_identity062u']]
    if destroy:
        if runtime.target=='original':runtime.store(BASE+0x40,runtime.symbol('fixture_owner_dispose062ab').to_bytes(p,'little'));module[BASE+0x40-0x888000:BASE+0x40-0x888000+p]=runtime.symbol('fixture_owner_dispose062ab').to_bytes(p,'little')
        else:runtime.store(runtime.symbol('sdk_environment062s')+p,runtime.symbol('fixture_owner_dispose062ab').to_bytes(p,'little'))
        runtime.store(runtime.symbol('fixture_owner_dispose_count062ab'),bytes(4));runtime.store(runtime.symbol('fixture_owner_dispose_blocks062ab'),bytes(64*p));runtime.store(runtime.symbol('fixture_owner_pool_heads062ab'),bytes(64*3*p));runtime.store(runtime.symbol('fixture_owner_current062ab'),(base+owner).to_bytes(p,'little'))
    if deleting:
        owner=model.allocate(((o[1]+3)&~3)+8)
        address=runtime.call('sdk_allocate062s',[o[1]])
        if address!=base+owner or runtime.read(base,len(model.image))!=model.image:raise ValueError('062ab actual owner allocation mismatch')
        model.timer=owner+o[9];model.map=model.timer+t[16]
        runtime.store(runtime.symbol('fixture_owner_current062ab'),(base+owner).to_bytes(p,'little'))
    model.owner=owner
    model.ptr(owner,owner_identity);model.image[owner+o[4]]=8;struct.pack_into('<I',table,8*stride+defaults+c[4],8)
    def initialize_map(offset,node_size,tag):
        at=owner+offset;pool=model.allocate(((l[6]+3)&~3)+8);storage=model.allocate(((32*node_size+3)&~3)+8)
        model.ptr(pool,0);model.word(pool+l[7],32);model.ptr(pool+l[8],base+storage)
        for i,value in enumerate([base+pool,0,base+storage+node_size,base+storage+32*node_size,base+storage]):model.ptr(at+i*p,value)
        model.word(at+5*p,0);model.image[at+5*p+4]=0;model.image[at+5*p+5]=tag&255
        model.image[storage]=0;model.ptr(storage+p,0);model.ptr(storage+2*p,base+storage);model.ptr(storage+3*p,base+storage)
        return base+storage
    first_head=initialize_map(o[5],o[2],owner_identity);initialize_map(o[6],o[3],first_head)
    model.image[owner+o[7]:owner+o[7]+8]=bytes(8)
    mutex=owner+o[8];model.ptr(mutex,mutex_identities[0]);model.ptr(mutex+p,mutex_identities[1]);fast=l[22];model.word(mutex+fast,1);model.ptr(mutex+fast+l[19],0);model.word(mutex+fast+l[20],0);tag=fast+l[18];model.ptr(mutex+tag,mutex_identities[2]);model.image[mutex+tag+p]=0;control=(tag+p+4)&~3;model.word(mutex+control,1);model.word(mutex+control+4,0);model.word(mutex+control+8,0)
    current=raw if initialized else 1;offset=0 if initialized else(1-raw)&MASK;model.word(backend+t[22],1);model.word(backend+t[23],1);model.initialize_timer(30000,current);model.ptr(owner+o[10],0);model.ptr(owner+o[11],0)
    if module is not None:
        at=table_address-0x888000;module[at:at+len(table)]=table
        for at,value,size in [(9,1,1),(408,current,8),(416,offset,8)]:module[BASE+at-0x888000:BASE+at-0x888000+size]=value.to_bytes(size,'little')
    else:
        model.image[0x20000:0x20000+len(table)]=table;clock[0]=1;struct.pack_into('<Q',clock,t[26],current);struct.pack_into('<Q',clock,t[27],offset)
    result=runtime.initialize_owner(base+owner);arena=runtime.read(base,len(model.image));runtime.last_comparison=dict(normallyReturned=True,wholeArenaEqual=arena==model.image,resultEqual=result==base+owner)
    if result!=base+owner:raise ValueError('062ab owner normally-returning pointer mismatch')
    if arena!=model.image:raise ValueError('062ab owner normally-returning arena mismatch '+str(dict(profile=runtime.target,offset=next(i for i,(a,b)in enumerate(zip(arena,model.image))if a!=b))))
    if module is not None:
        if runtime.read(0x888000,471024)!=module:raise ValueError('062ab owner original full module mismatch')
    elif runtime.read(runtime.symbol('sdk_clock062u'),len(clock))!=clock:raise ValueError('062ab owner source clock mismatch')
    timer_observations=[]
    for index in range(timer_steps):
        first=[((index%65536)<<16)|0x80,index+1,index,3,4,5,6]
        second=[0x12340055,0x70000000+index,7,8,9,10,11]
        model.endpoint(0xb000,first);model.endpoint(0xb100,second)
        runtime.store(base+0xb000,model.image[0xb000:0xb000+t[4]]);runtime.store(base+0xb100,model.image[0xb100:0xb100+t[4]])
        expected=model.set(first,second,0);model.render();answer=runtime.timer_set(base+model.timer,base+0xb000,base+0xb100,0);actual=runtime.read(base,len(model.image))
        runtime.last_comparison=dict(normallyReturned=True,wholeArenaEqual=actual==model.image,operation='real-frozen-timer-set',resultEqual=answer==expected)
        if answer!=expected or actual!=model.image:raise ValueError('062ab owner actual timer set arena/return mismatch '+str(dict(profile=runtime.target,index=index,offset=next((i for i,(a,b)in enumerate(zip(actual,model.image))if a!=b),None))))
        timer_observations.append(dict(rawArenaSha256=hashlib.sha256(actual).hexdigest(),fullIndependentArenaEqual=True))
    if timer_steps:arena=actual
    insertions=[]
    if keys:
        from owner_model062ab import OwnerMapModel
        tree=OwnerMapModel(model,o)
        for index,key in enumerate(keys):
            first=[((key&0xffff)<<16)|0x80, key&0xffffffff, index,0x80000000,4,5,6]
            second=[((4-index%5)<<16)|0x55,(key//3+index//5)&0xffffffff,7,8,9,10,11]
            stamp=[index,(~index)&0xffffffff]
            pair=0xa000;output=0xa100
            tree.ptr(pair,endpoint);tree.endpoint(pair,first);tree.endpoint(pair+t[4],second)
            for j,value in enumerate(stamp):tree.word(pair+2*t[4]+4*j,value)
            runtime.store(base+pair,tree.image[pair:pair+2*t[4]+8])
            ordering=tree.pair_key(first,second);parent=tree.insertion_parent(ordering)
            node=tree.insert(ordering,1);tree.payloads[node]=dict(first=first,second=second,stamp=stamp);tree.render();tree.ptr(output,base+node)
            runtime.insert88(base+output,base+tree.map,parent,base+pair)
            actual=runtime.read(base,len(tree.image))
            runtime.last_comparison=dict(normallyReturned=True,wholeArenaEqual=actual==tree.image,operation='insert88')
            if actual!=tree.image:raise ValueError('062ab actual insert88 full arena mismatch '+str(dict(profile=runtime.target,index=index,offset=next(i for i,(a,b)in enumerate(zip(actual,tree.image))if a!=b))))
            insertions.append(dict(key=key,rawArenaSha256=hashlib.sha256(actual).hexdigest(),fullIndependentArenaEqual=True))
        arena=actual
    disposal=[];head_observations=[]
    if destroy:
        def pointer(at):return int.from_bytes(model.image[at:at+p],'little')
        for at in [model.timer+t[16],owner+o[6],owner+o[5]]:
            head=pointer(at+4*p)-base
            def clear_branch(node):
                while node:
                    pos=node-base;clear_branch(pointer(pos+3*p));left=pointer(pos+2*p);model.ptr(pos+3*p,pointer(at+p));model.ptr(at+p,node);node=left
            if int.from_bytes(model.image[at+5*p:at+5*p+4],'little'):
                clear_branch(pointer(head+p));model.ptr(head+2*p,base+head);model.ptr(head+p,0);model.ptr(head+3*p,base+head);model.word(at+5*p,0)
            free=pointer(at+p);model.ptr(head+3*p,free);model.ptr(at+p,base+head)
            pool=pointer(at)-base
            while pool>=0:
                next_pool=pointer(pool);model.ptr(at,next_pool);storage=pointer(pool+l[8]);disposal.extend([storage-8,base+pool-8]);heads=[pointer(a)for a in [model.timer+t[16],owner+o[6],owner+o[5]]];head_observations.extend([heads[:],heads[:]]);pool=next_pool-base if next_pool else -1
        if deleting:
            disposal.append(base+owner-8);head_observations.append([pointer(a)for a in [model.timer+t[16],owner+o[6],owner+o[5]]])
            runtime.release_owner(base+owner);answer=base+owner
        else:answer=runtime.destroy_owner(base+owner)
        arena=runtime.read(base,len(model.image))
        runtime.last_comparison=dict(normallyReturned=True,wholeArenaEqual=arena==model.image,operation='destroy',resultEqual=answer==base+owner)
        if answer!=base+owner or arena!=model.image:raise ValueError('062ab owner destructor full arena/return mismatch '+str(dict(profile=runtime.target,offset=next((i for i,(a,b)in enumerate(zip(arena,model.image))if a!=b),None))))
        count=int.from_bytes(runtime.read(runtime.symbol('fixture_owner_dispose_count062ab'),4),'little');blocks=[int.from_bytes(runtime.read(runtime.symbol('fixture_owner_dispose_blocks062ab')+i*p,p),'little')for i in range(count)]
        heads=[[int.from_bytes(runtime.read(runtime.symbol('fixture_owner_pool_heads062ab')+(i*3+j)*p,p),'little')for j in range(3)]for i in range(count)]
        runtime.last_comparison.update(disposalOrderEqual=blocks==disposal,poolAdvanceObservationsEqual=heads==head_observations)
        if heads!=head_observations:raise ValueError('062ab owner pool advance/read-order observation mismatch')
        if blocks!=disposal:raise ValueError('062ab owner real disposal order mismatch')
    return dict(deleting=deleting,timerObservations=timer_observations,poolAdvanceObservations=head_observations,insertions=insertions,destroy=destroy,disposalBlocks=disposal,raw=raw,initialized=initialized,rawReturn=result,expectedReturn=base+owner,rawArenaSha256=hashlib.sha256(arena).hexdigest(),expectedArenaSha256=hashlib.sha256(model.image).hexdigest(),allocationRequests=model.requests,fullIndependentArenaEqual=True,actualNativeBase=base)

def run(folder):
    for target in ['arm','windows','a64']:build(folder/'build'/target,target)
    rows=[];coverage=set();layouts={}
    for target in ['original','arm','windows','a64']:
        runtime=ConfigRuntime(target,folder/'build')
        try:
            layouts[target]=runtime.owner_layout
            for destroy in [False,True]:
                for raw,initialized in [(0,1),(100,1),(MASK,1),(MASK-3,0)]:rows.append(dict(profile=target,**program(runtime,raw,initialized,destroy)))
            if target=='original':coverage.update(runtime.original.coverage)
            print('062ab',target,'complete owner constructor passed',flush=True)
        finally:runtime.close()
    selected=set(range(0x46ad80,0x46af10,4));missing=sorted(selected-coverage)
    if missing:raise ValueError('062ab owner missing originalPCs '+str(missing))
    result=dict(status='actual-owner-constructor-initial-domain-passed',observations=rows,comparisons=len(rows),compiledOwnerLayouts=layouts,originalPcVisits=len(selected&coverage),sourceCreditGranted=0,fullStateCoreOrLifecycleCredit=0)
    (folder/'owner-report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result
if __name__=='__main__':run(WORK/'owner-attempt002')
