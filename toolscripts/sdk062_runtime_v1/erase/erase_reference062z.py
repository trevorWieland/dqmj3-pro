import hashlib
import json
import random
import struct
import sys
from pathlib import Path
WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.insert(0,str(ROOT/'work/native-asset062-sdk-manager'))
from runtime062y import ThreadMapRuntime
from map_proof062s import Model

def word(r,a):return struct.unpack('<I',r.read(a,4))[0]

def inspect(r,base,m):
    head=base+m.head;seen=set();keys=[];issues=[]
    root=word(r,head+4)
    def walk(node,parent):
        if not node:return 1
        if node in seen:raise ValueError('cycle')
        seen.add(node);color=r.read(node,1)[0];actual_parent=word(r,node+4);left=word(r,node+8);right=word(r,node+12)
        if actual_parent!=parent:issues.append('parent-link')
        if color not in [0,1]:issues.append('noncanonical-color')
        if color==0 and any(r.read(child,1)[0]==0 for child in [left,right]if child):issues.append('red-red')
        lh=walk(left,node);keys.append(word(r,node+16));rh=walk(right,node)
        if lh!=rh:issues.append('black-height')
        return lh+int(color==1)
    if root and r.read(root,1)[0]!=1:issues.append('root-red')
    walk(root,head)
    if keys!=sorted(keys):issues.append('key-order')
    if word(r,base+m.map+20)!=len(seen):issues.append('count')
    return dict(keys=keys,issues=sorted(set(issues)),nodes=len(seen))

def main():
    r=ThreadMapRuntime('original',ROOT/'work/native-asset062-sdk-manager/final-v1/build');records=[];rng=random.Random(620064)
    try:
        sets=[list(range(n))for n in range(1,17)]+[list(range(n,0,-1))for n in range(1,17)]+[rng.sample(range(1000),n)for n in range(3,32)]
        for keys in sets:
            for remove in keys:
                base=r.ram;m=Model(r.layout,base,r.symbol('fixture_sdk_dispose062s'));r.store(base,m.image);r.bind(base+m.heap,base+0x9000);m.initialize();r.call('sdk_map_initialize062s',[base+m.map])
                for key in keys:
                    m.word(m.key,key);r.store(base+m.key,struct.pack('<I',key));node=m.insert(key,0);m.render();r.call('sdk_map_value062s',[base+m.map,base+m.key])
                if r.read(base,len(m.image))!=m.image:raise ValueError('reference prerequisite construction differs')
                node=next(at for at,v in m.nodes.items()if v['key']==remove);out,iterator=base+0x7000,base+0x7100;r.store(iterator,struct.pack('<I',base+node));before=inspect(r,base,m)
                if before['issues']:raise ValueError('invalid input tree '+str(before))
                answer=r.original.call(0x764e48,[out,base+m.map,iterator])&0xffffffff;after=inspect(r,base,m);successor=word(r,out);wanted=next((key for key in sorted(keys)if key>remove),None);actual=None if successor==base+m.head else word(r,successor+16)
                if answer!=out or actual!=wanted:raise ValueError('reference erase return/next mismatch')
                records.append(dict(keys=keys,remove=remove,post=after,successor=actual,freedNode=word(r,base+m.map+4)==base+node))
        result=dict(status='real-original-erase-reference-frontier',cases=len(records),invariantFailureCases=sum(bool(row['post']['issues'])for row in records),records=records,originalCoverage=sorted(r.original.coverage),sourceCreditGranted=0)
        (WORK/'erase-reference-v1.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');print('reference erases',len(records),'post-invariant failures',result['invariantFailureCases'],flush=True)
    finally:r.close()
if __name__=='__main__':main()
