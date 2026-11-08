import hashlib,json,random,struct,sys,time
from pathlib import Path
W=Path(__file__).resolve().parent;R=next(p for p in W.parents if(p/'AGENTS.md').is_file());sys.path.insert(0,str(R/'toolscripts'))
from sdk062_original_v1 import Original
from heap_runtime062ac import Runtime
from heap_model062ac import Model
from heap_domain062ac import request,disposal

ARMS=[4,60,16,4,0,4,8,12,24,28,32,36,40,44,48,52,54,56,100,24,84,88]

def program(seed):
 rng=random.Random(seed);steps=[];live=[];serial=0
 for n,a in [(0,4),(1,8),(5,16),(33,-64),(256,4),(7,-32),(1024,64),(65000,4)]:
  steps.append(('allocate',serial,n,a));live.append(serial);serial+=1
 for i in range(50):
  if live and rng.randrange(3)==0:
   slot=live.pop(rng.randrange(len(live)));steps.append(('free',slot))
  else:
   n=rng.choice([0,1,3,4,7,8,15,16,20,31,32,48,63,64,127,128,257,511,1024,4096,65536]);a=rng.choice([4,8,16,32,64,-4,-8,-16,-32,-64]);steps.append(('allocate',serial,n,a));live.append(serial);serial+=1
 rng.shuffle(live)
 steps.extend(('free',slot)for slot in live)
 return steps

def execute(target,folder,flags,group,policy,split,steps,original=None):
 runtime=Runtime(target,folder);base=runtime.ram;size=0x18000;runtime.store(base,b'\xa7'*size);runtime.call('fixture_heap_reset062ac',[])
 model=Model(base,runtime.layout,flags=flags);result=runtime.call('heap_initialize062ac',[base,base+0x200,0x10000,flags])
 if result!=base:raise ValueError('valid source initializer failed')
 model.controls(group,policy,split)
 for index,value,count in [(15,group,2),(16,policy,2),(17,split,1)]:runtime.store(base+runtime.layout[index],value.to_bytes(count,'little'))
 pointers={};events=[]
 def observe(label):
  actual=runtime.load(base,size);model.validate(actual)
  if original is not None and actual!=bytes(original.cpu.mem_read(base,size)):raise ValueError(('strict original/source full arena',label))
  p=runtime.p;root=runtime.load(runtime.symbol('heap_registry062ac'),12 if p==4 else 24);expected=base.to_bytes(p,'little')*2+struct.pack('<HH',1,runtime.layout[5])+(b'\0'*4 if p==8 else b'')
  if root!=expected or runtime.load(runtime.symbol('heap_registry_initialized062ac'),1)!=b'\1':raise ValueError('registry projection mismatch')
  events.append(dict(event=label,validatedOwnershipProjection=model.projection(),rawArenaSha256=hashlib.sha256(actual).hexdigest(),freeSpans=len(model.free),allocations=len(model.used)))
 observe('initialize')
 for step in steps:
  if step[0]=='allocate':
   _,slot,count,align=step;request(count,align);expected=model.allocate(count,align);value=runtime.call('heap_allocate062ac',[base,count,align]);pointers[slot]=value
   if value!=expected:raise ValueError(('allocation selection',step,hex(value),hex(expected)))
   if original is not None:
    actual=original.call(0x170a3c,[base,count,align])&0xffffffff
    if actual!=value:raise ValueError('original/source returned different pointer')
   if value and count:
    content=bytes([(slot*17+31)&255])*count;runtime.store(value,content);model.write_payload(value,count,(slot*17+31)&255)
    if original is not None:original.cpu.mem_write(value,content)
  else:
   pointer=pointers.pop(step[1])
   if not pointer:continue
   disposal(model,pointer);model.dispose(pointer);runtime.call('heap_free062ac',[base,pointer])
   if original is not None:original.call(0x13c920,[base,pointer])
  observe(list(step))
 if model.used or model.free!=[(model.begin,model.end)]:raise ValueError('lifecycle failed complete coalescing')
 if runtime.p==8 and base<=0xffffffff:raise ValueError('native pointer domain was not genuinely high')
 return dict(target=target,pointerBytes=runtime.p,arenaAddress=hex(base),observations=events,sourcePcCount=len(runtime.coverage))

def main(folder=None,out=None):
 folder=folder or W/'build-core-v3';out=out or W/'generic-proof-attempt001';out.mkdir(exist_ok=True);rows=[];coverage=set();started=time.time()
 try:
  for index,(flags,group,policy,split)in enumerate((f,g,p,s)for f in [0,1]for g in [0,263,65535]for p in [0,1]for s in [0,1]):
   original=Original();base=0x2020000;original.cpu.mem_write(base,b'\xa7'*0x18000);original.call(0x123c6c,[base,base+0x200,0x10000,flags]);original.cpu.mem_write(base+52,struct.pack('<HHB',group,policy,split));steps=program(index+5462)
   profiles=[execute(t,folder,flags,group,policy,split,steps,original if t=='arm'else None)for t in ['arm','windows','a64']]
   root=bytes(original.cpu.mem_read(0x8f3140,12));expected=struct.pack('<IIHH',base,base,1,4)
   if root!=expected or bytes(original.cpu.mem_read(0x8c3c30,1))!=b'\1':raise ValueError('original registry mismatch')
   coverage.update(original.coverage);rows.append(dict(flags=flags,group=group,policy=policy,split=split,seed=index+5462,profiles=profiles));print('case',index+1,'passed',flush=True)
  report=dict(status='passed',cases=rows,originalPcs=sorted(coverage),originalPcCount=len(coverage),elapsedSeconds=time.time()-started)
 except BaseException as exc:
  report=dict(status='failed',error=repr(exc),cases=rows,elapsedSeconds=time.time()-started);raise
 finally:(out/'report.json').write_text(json.dumps(report,indent=2)+'\n')
 print(json.dumps(dict(status=report['status'],cases=len(rows),profiles=len(rows)*3,observations=sum(len(p['observations'])for r in rows for p in r['profiles']),originalPcCount=len(coverage))))
if __name__=='__main__':main()
