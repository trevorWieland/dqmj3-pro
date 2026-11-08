import ctypes
import hashlib
import json
import random
import struct
from pathlib import Path
from runtime062s import SdkRuntime,WORK


class Model:
    def __init__(self,layout,base,dispose):
        self.l=layout;self.p=layout[0];self.base=base;self.dispose=dispose;self.image=bytearray(b'\xa7'*0x100000);self.nodes={};self.root=None;self.low=None;self.high=None;self.count=0;self.used=0;self.requests=[];self.pool_capacity=0;self.remaining=[];self.blocks=0
        self.map=0x1000;self.head=0x2000;self.heap=0x3000;self.storage=0x10000;self.key=0x4000
        self.image[self.map:self.map+layout[9]]=bytes(layout[9]);self.ptr(self.map+layout[10],self.base+self.head)
        self.image[self.head:self.head+layout[1]]=bytes(layout[1]);self.image[self.head]=1;self.ptr(self.head+layout[3],self.base+self.head);self.ptr(self.head+layout[4],self.base+self.head)
        self.image[self.heap:self.heap+layout[13]]=bytes(layout[13]);self.ptr(self.heap,self.base+self.storage);self.word(self.heap+layout[14],0x60000)
    def word(self,at,value):struct.pack_into('<I',self.image,at,value&0xffffffff)
    def ptr(self,at,value):self.image[at:at+self.p]=value.to_bytes(self.p,'little')
    def allocate(self,bytes):
        offset=(self.used+15)&~15;self.used=offset+bytes;self.requests.append(bytes);self.word(self.heap+self.l[15],self.used);self.word(self.heap+self.l[16],len(self.requests));self.word(self.heap+self.l[17]+4*(len(self.requests)-1),bytes)
        result=self.storage+offset;self.ptr(result,self.dispose);return result+8
    def initialize(self):
        l=self.l;pool=self.allocate(((l[6]+3)&~3)+8);storage=self.allocate(((32*l[1]+3)&~3)+8)
        self.ptr(pool,0);self.word(pool+l[7],32);self.ptr(pool+l[8],self.base+storage);self.blocks=pool;self.pool_capacity=32;self.remaining=list(range(storage+l[1],storage+32*l[1],l[1]));self.head=storage
        for index,value in enumerate([self.base+pool,0,self.base+storage+l[1],self.base+storage+32*l[1],self.base+storage]):self.ptr(self.map+index*self.p,value)
        self.word(self.map+l[11],0);self.image[self.map+l[12]]=0;self.image[self.map+l[12]+1]=(self.base+self.map)&255
        self.image[storage]=0;self.ptr(storage+l[2],0);self.ptr(storage+l[3],self.base+storage);self.ptr(storage+l[4],self.base+storage)
    def node(self,key):
        l=self.l
        if not self.remaining:
            capacity=max(self.pool_capacity+self.pool_capacity//2+self.pool_capacity//8,self.pool_capacity+32)if self.pool_capacity else 32
            pool=self.allocate(((l[6]+3)&~3)+8)
            storage=self.allocate(((capacity*l[1]+3)&~3)+8);self.ptr(pool,self.base+self.blocks if self.blocks else 0);self.word(pool+l[7],capacity);self.ptr(pool+l[8],self.base+storage);self.blocks=pool;self.pool_capacity=capacity;self.ptr(self.map,self.base+pool);self.ptr(self.map+3*self.p,self.base+storage+capacity*l[1]);self.remaining=list(range(storage,storage+capacity*l[1],l[1]))
        at=self.remaining.pop(0);self.ptr(self.map+2*self.p,self.base+at+l[1]);self.nodes[at]=dict(key=key,value=0,left=None,right=None,parent=None,black=0);return at
    def rotate(self,x,left):
        side='right'if left else'left';other='left'if left else'right';y=self.nodes[x][side];middle=self.nodes[y][other];self.nodes[x][side]=middle
        if middle is not None:self.nodes[middle]['parent']=x
        parent=self.nodes[x]['parent'];self.nodes[y]['parent']=parent
        if parent is None:self.root=y
        elif self.nodes[parent]['left']==x:self.nodes[parent]['left']=y
        else:self.nodes[parent]['right']=y
        self.nodes[y][other]=x;self.nodes[x]['parent']=y
    def insert(self,key,multi):
        parent=None;current=self.root;found=None
        while current is not None:
            parent=current;n=self.nodes[current]
            if n['key']==key:found=current
            current=n['left'if key<n['key']else'right']
        if found is not None and not multi:return found
        current=self.node(key);result=current;n=self.nodes[current];n['parent']=parent;self.count+=1
        if parent is None:self.root=current;self.low=current;self.high=current
        elif key<self.nodes[parent]['key']:
            self.nodes[parent]['left']=current
            if self.low==parent:self.low=current
        else:
            self.nodes[parent]['right']=current
            if self.high==parent:self.high=current
        while current!=self.root and not self.nodes[self.nodes[current]['parent']]['black']:
            parent=self.nodes[current]['parent'];grand=self.nodes[parent]['parent'];left=self.nodes[grand]['left']==parent;uncle=self.nodes[grand]['right'if left else'left']
            if uncle is not None and not self.nodes[uncle]['black']:
                self.nodes[parent]['black']=1;self.nodes[uncle]['black']=1;self.nodes[grand]['black']=0;current=grand;continue
            if current==self.nodes[parent]['right'if left else'left']:
                current=parent;self.rotate(current,left)
            parent=self.nodes[current]['parent'];grand=self.nodes[parent]['parent'];self.nodes[parent]['black']=1;self.nodes[grand]['black']=0;self.rotate(grand,not left)
        self.nodes[self.root]['black']=1;return result
    def render(self):
        l=self.l
        self.word(self.map+l[11],self.count)
        for field,node in [(l[2],self.root),(l[3],self.low),(l[4],self.high)]:self.ptr(self.head+field,self.base+node if node is not None else 0)
        for at,n in self.nodes.items():
            self.image[at]=n['black']
            for field,key in [(l[2],'parent'),(l[3],'left'),(l[4],'right')]:
                value=n[key];self.ptr(at+field,self.base+(self.head if key=='parent'and value is None else value)if value is not None or key=='parent'else 0)
            self.word(at+l[5],n['key']);self.word(at+l[5]+4,n['value'])
    def topology(self):
        ids={at:index for index,at in enumerate(self.nodes)}
        return [dict(key=n['key'],value=n['value'],black=n['black'],parent=ids.get(n['parent']),left=ids.get(n['left']),right=ids.get(n['right']))for at,n in self.nodes.items()]


def program(target,keys,multi,folder=None,constructed=False):

    if len(keys)>1024 or any(type(k)is not int or not 0<=k<=0xffffffff for k in keys)or type(multi)is not int or not 0<=multi<=255:raise ValueError('062s map program outside bounded valid-storage domain')
    runtime=SdkRuntime(target,folder);allocation=ctypes.create_string_buffer(0x100000)if target=='windows'else None;base=ctypes.addressof(allocation)if allocation is not None else runtime.ram
    if target in ['windows','a64']and base<=0xffffffff:raise ValueError('062s lost high-address host pointers')
    model=Model(runtime.layout,base,runtime.symbol('fixture_sdk_dispose062s'));runtime.store(base,model.image);runtime.bind(base+model.heap,base+0x8000);rows=[]
    if constructed:
        model.initialize();returned=runtime.call('sdk_map_initialize062s',[base+model.map])
        if returned!=base+model.map or runtime.read(base,len(model.image))!=model.image:raise ValueError('062s real map initializer complete arena differs')
    model.image[model.map+model.l[12]]=multi;runtime.store(base+model.map+model.l[12],bytes([multi]))
    try:
        for index,key in enumerate(keys):
            model.word(model.key,key);runtime.store(base+model.key,struct.pack('<I',key));node=model.insert(key,multi);model.render();result=runtime.call('sdk_map_value062s',[base+model.map,base+model.key]);actual=runtime.read(base,len(model.image))
            if result!=base+node+model.l[5]+4:raise ValueError('062s map returned wrong value alias')
            if actual!=model.image:
                offsets=[i for i,(a,b)in enumerate(zip(actual,model.image))if a!=b];raise ValueError('062s map complete arena differs '+target+' key '+str(index)+' offsets '+str(offsets[:20]))
            value=(index*0x1000193+key)&0xffffffff;model.nodes[node]['value']=value;model.word(node+model.l[5]+4,value);runtime.store(result,struct.pack('<I',value))
            rows.append(dict(key=key,returnedNode=list(model.nodes).index(node),count=model.count,arenaSha256=hashlib.sha256(actual).hexdigest()))
        return dict(target=target,steps=len(rows),arenaMatches=True,rows=rows,topology=model.topology(),allocationRequests=model.requests,knownOriginalPcCount=len(runtime.original.coverage)if target=='original'else None)
    finally:runtime.close()


def main():
    rng=random.Random(62062);sets=[('ascending',list(range(80)),0),('descending',list(range(80,0,-1)),0),('zigzag',[i//2 if i%2==0 else 200-i//2 for i in range(90)],0),('shuffled',rng.sample(range(100000),110),0),('boundaries',[0,0xffffffff,0x80000000,0x7fffffff,0,0xffffffff,1,2,0x80000001],0),('duplicates',[i%9 for i in range(70)],1),('noncanonical-duplicates',[i%3 for i in range(44)],2),('repeat-hit',[7]*40,0)];out=[]
    for label,keys,multi in sets:
        rows=[program(t,keys,multi)for t in ['original','arm','windows','a64']]
        if any(r['topology']!=rows[0]['topology']for r in rows[1:]):raise ValueError('062s cross-layout topology changed')
        if [r['arenaSha256']for r in rows[0]['rows']]!=[r['arenaSha256']for r in rows[1]['rows']]:raise ValueError('062s original/source ARM raw arenas changed')
        out.append(dict(name=label,profiles=rows));print(label,len(keys),'four-profile full arenas and topology passed',flush=True)
    rows=[program(t,list(range(80)),0,constructed=True)for t in ['original','arm','windows','a64']]
    if any(r['topology']!=rows[0]['topology']for r in rows[1:]):raise ValueError('062s constructed tree cross-layout topology changed')
    out.append(dict(name='actual-constructed-map',profiles=rows))
    (WORK/'map-proof-attempt001.json').write_text(json.dumps(dict(status='passed-bounded-pooled-map-programs',programs=out,steps=sum(len(k)for _,k,_ in sets)+80,sourceCreditGranted=0),indent=2)+'\n',encoding='utf-8')


if __name__=='__main__':main()
