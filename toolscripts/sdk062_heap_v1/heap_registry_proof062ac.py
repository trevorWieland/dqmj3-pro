import hashlib,json,sys,struct
from pathlib import Path
W=Path(__file__).resolve().parent;R=next(p for p in W.parents if(p/'AGENTS.md').is_file());sys.path.insert(0,str(R/'toolscripts'))
from sdk062_original_v1 import Original
from heap_runtime062ac import Runtime
from heap_model062ac import Model

def run(target,folder,original=None):
 r=Runtime(target,folder);base=r.ram;size=0x18000;r.store(base,b'\xa7'*size);r.call('fixture_heap_reset062ac',[]);r.call('heap_initialize062ac',[base,base+512,65536,0]);root=Model(base,r.layout);events=[];children=[]
 def observe(label):
  raw=r.load(base,size);root.validate(raw)
  if original is not None and raw!=bytes(original.cpu.mem_read(base,size)):raise ValueError(('nested original mismatch',label,[i for i,(a,b)in enumerate(zip(raw,bytes(original.cpu.mem_read(base,size))))if a!=b][:20]))
  events.append(dict(event=label,rawArenaSha256=hashlib.sha256(raw).hexdigest()))
 def invoke(name,address,args):
  value=r.call(name,args)
  if original is not None:
   actual=original.call(address,args)&0xffffffff
   if name in ['heap_initialize062ac','heap_allocate062ac','heap_find_containing062ac','heap_list_next062ac']and actual!=value:raise ValueError(('nested result mismatch',name,value,actual))
  return value
 for index in range(2):
  payload=root.allocate(8192,8);actual=invoke('heap_allocate062ac',0x170a3c,[base,8192,8])
  if actual!=payload:raise ValueError('nested allocation')
  child=Model(payload,r.layout,size=8192,storage_offset=512,storage_bytes=4096);invoke('heap_initialize062ac',0x123c6c,[payload,payload+512,4096,0]);children.append(child)
  p=r.p;list_address=base+r.layout[7];root.put(list_address,children[0].heap,p);root.put(list_address+p,child.heap,p);root.put(list_address+2*p,len(children),2)
  if index:
   children[0].put(children[0].heap+r.layout[6],child.heap,p);child.put(child.heap+r.layout[5],children[0].heap,p)
  for item in children:root.bytes[item.base-base:item.base-base+len(item.bytes)]=item.bytes
  observe('child-'+str(index))
 child=children[0];payload=child.allocate(2048,8);invoke('heap_allocate062ac',0x170a3c,[child.heap,2048,8]);grand=Model(payload,r.layout,size=2048,storage_offset=256,storage_bytes=1024);invoke('heap_initialize062ac',0x123c6c,[payload,payload+256,1024,0]);p=r.p;list_address=child.heap+r.layout[7];child.put(list_address,grand.heap,p);child.put(list_address+p,grand.heap,p);child.put(list_address+2*p,1,2);child.bytes[grand.base-child.base:grand.base-child.base+len(grand.bytes)]=grand.bytes;root.bytes[child.base-base:child.base-base+len(child.bytes)]=child.bytes;observe('grandchild')
 source_list=r.symbol('heap_registry062ac')
 for point,expected in [(grand.begin,grand.heap),(child.begin,child.heap),(children[1].begin,children[1].heap),(root.begin,root.heap),(root.end,0),(base,0)]:
  answer=r.call('heap_find_containing062ac',[source_list,point])
  if answer!=expected:raise ValueError(('deepest native lookup',hex(point),hex(answer),hex(expected)))
  if original is not None and(original.call(0x15e680,[0x8f3140,point])&0xffffffff)!=expected:raise ValueError('deepest original lookup')
  observe('lookup-'+hex(point-base))
 other=Model(base+0x11000,r.layout,size=4096,storage_offset=512,storage_bytes=2048);invoke('heap_initialize062ac',0x123c6c,[other.heap,other.begin,2048,0]);root.put(root.heap+r.layout[6],other.heap,r.p);other.put(other.heap+r.layout[5],root.heap,r.p);root.bytes[other.base-base:other.base-base+len(other.bytes)]=other.bytes;observe('second-independent-root')
 expected_registry=root.heap.to_bytes(r.p,'little')+other.heap.to_bytes(r.p,'little')+struct.pack('<HH',2,r.layout[5])+(b'\0'*4 if r.p==8 else b'')
 if r.load(source_list,len(expected_registry))!=expected_registry:raise ValueError('root list append graph')
 if original is not None and bytes(original.cpu.mem_read(0x8f3140,12))!=expected_registry:raise ValueError('original root list append graph')
 for current,expected in [(0,children[0].heap),(children[0].heap,children[1].heap),(children[1].heap,0)]:
  invoke('heap_list_next062ac',0x15e6d8,[base+r.layout[7],current])
  if r.call('heap_list_next062ac',[base+r.layout[7],current])!=expected:raise ValueError('child iterator')
 return dict(target=target,events=events,sourcePcCount=len(r.coverage))

def main(folder=None,out=None):
 folder=folder or W/'build-default-v3';out=out or W/'registry-proof-attempt002';out.mkdir(exist_ok=True);original=Original();base=0x2020000;original.cpu.mem_write(base,b'\xa7'*0x18000);original.call(0x123c6c,[base,base+512,65536,0]);rows=[]
 try:
  for target in ['arm','windows','a64']:rows.append(run(target,folder,original if target=='arm'else None));print('registry',target,'passed',flush=True)
  result=dict(status='passed',profiles=rows,originalPcs=sorted(original.coverage))
 except BaseException as exc:result=dict(status='failed',profiles=rows,error=repr(exc));raise
 finally:(out/'report.json').write_text(json.dumps(result,indent=2)+'\n')
if __name__=='__main__':main()
