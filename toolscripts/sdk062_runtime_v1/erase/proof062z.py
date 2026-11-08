import ctypes
import hashlib
import json
import random
import struct
from build062z import build,WORK
from runtime062z import EraseRuntime
from model062z import EraseModel

def program(r,keys,operations):
    allocation=ctypes.create_string_buffer(0x100000)if r.target=='windows'else None;base=ctypes.addressof(allocation)if allocation is not None else r.ram;m=EraseModel(r.layout,base,r.symbol('fixture_sdk_dispose062s'));r.store(base,m.image);r.bind(base+m.heap,base+0x9000);m.initialize();r.call('sdk_map_initialize062s',[base+m.map]);out,iterator=0x7000,0x7100;rows=[]
    def insert(key):
        existing=next((at for at in m.active if m.nodes[at]['key']==key),None);m.word(m.key,key);r.store(base+m.key,struct.pack('<I',key));node=m.insert(key,0);m.render();returned=r.call('sdk_map_value062s',[base+m.map,base+m.key]);expected=base+node+m.l[5]+4
        if returned!=expected or r.read(base,len(m.image))!=m.image:raise ValueError('062z genuine insertion/reuse full-arena mismatch '+str(dict(profile=r.target,key=key,existing=existing)))
        return node
    for key in keys:insert(key)
    data_before=r.read(0x888000,471024)if r.target=='original'else None
    for operation,key in operations:
        if operation=='insert':insert(key);rows.append(dict(operation=operation,key=key,count=m.count,freeNodes=len(m.free)));continue
        node=next((at for at in m.active if m.nodes[at]['key']==key),None)if key is not None else None
        if key is not None and node is None:raise ValueError('062z rejected erased/nonmember input before invocation')
        m.ptr(iterator,base+node if node is not None else base+m.head);r.store(base+iterator,m.image[iterator:iterator+m.p]);successor=m.erase(node);m.render();m.ptr(out,base+successor if successor is not None else base+m.head)
        returned=r.erase([base+out,base+m.map,base+iterator]);arena=r.read(base,len(m.image));r.last_comparison=dict(normallyReturned=True,wholeArenaEqual=arena==m.image,resultEqual=returned==base+out)
        if returned!=base+out:raise ValueError('062z normally-returning output-alias mismatch')
        if arena!=m.image:raise ValueError('062z normally-returning full-arena mismatch '+str(dict(profile=r.target,key=key,count=m.count,offset=next(i for i,(a,b)in enumerate(zip(arena,m.image))if a!=b))))
        rows.append(dict(operation=operation,key=key,count=m.count,freeNodes=len(m.free),successorKey=m.nodes[successor]['key']if successor is not None else None,rawReturn=returned,expectedReturn=base+out,rawArenaSha256=hashlib.sha256(arena).hexdigest(),expectedArenaSha256=hashlib.sha256(m.image).hexdigest()))
    if data_before is not None and r.read(0x888000,471024)!=data_before:raise ValueError('062z original data/BSS mutation')
    return dict(profile=r.target,keys=keys,operations=operations,observations=rows,actualNativeBase=base,independentPointerModel=True)

def cases():
    yield [],[('erase',None)]
    for n in range(1,17):
        keys=list(range(n))
        for key in keys:yield keys,[('erase',key)]
    rng=random.Random(620065)
    for n in [2,3,4,7,8,15,16,31,32,47]:
        keys=rng.sample(range(10000),n)
        for mode in ['ascending','descending','shuffled']:
            order=sorted(keys,reverse=mode=='descending')
            if mode=='shuffled':rng.shuffle(order)
            yield keys,[('erase',key)for key in order]+[('erase',None)]
        order=keys[:];rng.shuffle(order);operations=[]
        for i,key in enumerate(order):operations.extend([('erase',key),('insert',0x80000000+i)])
        operations+=[('erase',0x80000000+i)for i in range(n)]+[('erase',None)];yield keys,operations

def run(folder,rebuild=True):
    if rebuild:
        for target in ['arm','windows','a64']:build(folder/'build'/target,target)
    rows=[];coverage=set();programs=list(cases())
    for target in ['original','arm','windows','a64']:
        r=EraseRuntime(target,folder/'build')
        try:
            for index,(keys,operations)in enumerate(programs):rows.append(dict(index=index,**program(r,keys,operations)))
            if target=='original':coverage.update(r.original.coverage)
            print('062z',target,len(programs),'erase/reuse programs passed',flush=True)
        finally:r.close()
    selected=set(range(0x764e48,0x7654a4,4));result=dict(status='bounded-header-tree-erase-and-real-reuse-passed',programSets=len(programs),steps=sum(len(row['observations'])for row in rows),observations=rows,originalPcAccounting=dict(totalPcs=len(selected),pcVisits=len(selected&coverage),unvisited=sorted(selected-coverage)),sourceCreditGranted=0,actualTimerClassOrWholeCallerCredit=0)
    folder.mkdir(parents=True,exist_ok=True);(folder/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result
if __name__=='__main__':run(WORK/'attempt001')
