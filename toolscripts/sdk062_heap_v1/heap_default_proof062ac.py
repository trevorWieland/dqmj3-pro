import hashlib,json,struct,sys,time
from pathlib import Path
W=Path(__file__).resolve().parent;R=next(p for p in W.parents if(p/'AGENTS.md').is_file());sys.path.insert(0,str(R/'toolscripts'))
from sdk062_original_v1 import Original
from unicorn import arm_const as arm
from heap_runtime062ac import Runtime
from heap_model062ac import Model
from heap_domain062ac import request,disposal
from heap_proof062ac import ARMS,program

def modeled_constructor(base,layout,identity,skew=0):
 object_address=(base+skew+layout[0]-1)&-layout[0];object_offset=object_address-base
 model=Model(base,layout,storage_offset=object_offset+layout[18],storage_bytes=skew+0x10000-object_offset-layout[18],heap_offset=object_offset+layout[19])
 p=layout[0];model.put(object_address,identity,p);model.bytes[object_offset+p:object_offset+p+20]=b'\0'*20;model.put(object_address+layout[20],0,4);mutex=object_address+layout[21];owner=(4+p-1)&-p;model.put(mutex,1,4);model.put(mutex+owner,0,p);model.put(mutex+owner+p,0,4)
 return model

def execute(target,folder,seed,sdk=False,original=None,skew=0,callback=False):
 runtime=Runtime(target,folder);base=runtime.ram;size=0x18000;p=runtime.p;runtime.store(base,b'\xa7'*size);runtime.call('fixture_heap_reset062ac',[]);runtime.call('fixture_default_bind062ac',[base+0x18000]);runtime.call('fixture_default_callback062ac',[int(callback)]);identity=runtime.symbol('heap_identity062ac');model=modeled_constructor(base,runtime.layout,identity,skew);object_address=(base+skew+p-1)&-p
 if p==8 and base<=0xffffffff:raise ValueError('native pointer test was not high address')
 proxy=runtime.call('heap_default_initialize062ac',[base+skew,0x10000])
 if proxy!=runtime.symbol('heap_proxy062ac'):raise ValueError('constructor did not return proxy')
 pointers={};events=[];methods=runtime.symbol('heap_methods062ac');root=runtime.symbol('heap_registry062ac')
 def observe(label):
  actual=runtime.load(base,size);model.validate(actual)
  heap=object_address+runtime.layout[19]
  expected=heap.to_bytes(p,'little')*2+struct.pack('<HH',1,runtime.layout[5])+(b'\0'*4 if p==8 else b'')
  if runtime.load(root,len(expected))!=expected:raise ValueError('constructor registry graph')
  proxy_bytes=runtime.load(proxy,12 if p==4 else 24);expected_proxy=methods.to_bytes(p,'little')+object_address.to_bytes(p,'little')+b'\0'*3+(b'\0'if p==4 else b'\0'*5)
  if proxy_bytes!=expected_proxy:raise ValueError(('proxy graph',proxy_bytes.hex(),expected_proxy.hex()))
  raw_hash=hashlib.sha256(actual).hexdigest();reference_hash=None
  if original is not None:
   reference=bytes(original.cpu.mem_read(base,size));reference_hash=hashlib.sha256(reference).hexdigest();expected_reference=bytearray(actual);offset=object_address-base;expected_reference[offset:offset+4]=struct.pack('<I',0x8526b4)
   if hasattr(original,'expected_data062ac') and bytes(original.cpu.mem_read(0x888000,471024))!=original.expected_data062ac:raise ValueError('original changed undeclared module data or global graph')
   if reference!=expected_reference:raise ValueError(('default original/source semantic arena',[i for i,(a,b)in enumerate(zip(reference,expected_reference))if a!=b][:40]))
  events.append(dict(event=label,validatedOwnershipProjection=model.projection(),rawArenaSha256=raw_hash,originalRawArenaSha256=reference_hash,live=len(model.used),sourceWholeArenaEqualsIndependentModel=True,originalProjection='only enumerated outer.identity:8526b4 -> compiled heap_identity062ac'if original is not None else None))
 observe('constructor')
 steps=program(seed)
 if sdk:steps=[(row[0],row[1],row[2]%1024,row[3])if row[0]=='allocate'else row for row in steps]
 for step in steps:
  if step[0]=='allocate':
   _,slot,count,alignment=step
   request(count,alignment)
   model.controls(0,model.policy&~1,0)
   if sdk:
    rounded=(count+3)&-4;expected=model.allocate(rounded+8,4);value=runtime.call('heap_sdk_allocate062ac',[count]);pointers[slot]=value
    if not expected:raise ValueError('SDK prefix allocator domain requires success')
    model.put(expected,0,p);expected+=8
   else:
    expected=model.allocate(count,alignment);value=runtime.call('heap_default_allocate062ac',[count,alignment]);pointers[slot]=value
   if value!=expected:raise ValueError(('default allocation selection',step,hex(value),hex(expected)))
   if original is not None:
    address=0x15ece0 if sdk else 0x1287dc;args=[count]if sdk else[count,alignment]
    reference=original.call(address,args)&0xffffffff
    if reference!=value:raise ValueError('original default pointer')
   if value and count:
    content=bytes([(slot*13+17)&255])*count;runtime.store(value,content);model.write_payload(value,count,(slot*13+17)&255)
    if original is not None:original.cpu.mem_write(value,content)
  else:
   pointer=pointers.pop(step[1])
   if not pointer:continue
   allocation=pointer-8 if sdk else pointer
   disposal(model,allocation);model.dispose(allocation);runtime.call('heap_sdk_dispose062ac'if sdk else'heap_default_free062ac',[pointer])
   if original is not None:original.call(0x30233c,[allocation])
  model.put(object_address+runtime.layout[20],len(model.used),4)
  observe(list(step))
 return dict(target=target,pointerBytes=p,arenaAddress=hex(base),observations=events,sourcePcCount=len(runtime.coverage))

def main(folder=None,out=None):
 folder=folder or W/'build-default-v3';output=out or W/'default-proof-attempt004';output.mkdir(exist_ok=True);rows=[];coverage=set()
 try:
  for index,(sdk,skew,callback) in enumerate([(s,k,False)for s in [False,True]for k in [0,1,3,7]]+[(True,k,True)for k in [0,1,3,7]]):
   original=Original();original.ranges.append((0x10b980,0x10ba20,0x10b980));original.ranges.sort();original.starts=[x[0]for x in original.ranges];base=0x2020000;original.cpu.mem_write(base,b'\xa7'*0x18000);original.cpu.mem_write(0x89a508,b'\1');original.cpu.reg_write(arm.UC_ARM_REG_C13_C0_3,base+0x18000)
   if callback:original.cpu.mem_write(0x8b6378+0x3c,struct.pack('<I',0x2fecec))
   before=bytes(original.cpu.mem_read(0x888000,471024));original.call(0x10b980,[base+skew,0x10000]);expected=bytearray(before);object_address=(base+skew+3)&-4
   for address,data in [(0x8c3c30,b'\1'),(0x8f3140,struct.pack('<IIHH',object_address+24,object_address+24,1,4)),(0x89a684,struct.pack('<II',object_address,0x8e36a0)),(0x8e36a0,struct.pack('<II',0x85269c,object_address)+b'\0'*3)]:expected[address-0x888000:address-0x888000+len(data)]=data
   original.expected_data062ac=bytes(expected);seed=5862+index
   profiles=[execute(t,folder,seed,sdk,original if t=='arm'else None,skew,callback)for t in ['arm','windows','a64']];coverage.update(original.coverage);rows.append(dict(seed=seed,sdkPrefix=sdk,skew=skew,customCallback=callback,profiles=profiles,originalDataBeforeSha256=hashlib.sha256(before).hexdigest(),originalDataAfterSha256=hashlib.sha256(original.expected_data062ac).hexdigest(),originalModuleDataBytesCompared=471024));print('default case',index+1,'passed',flush=True)
  report=dict(status='passed',cases=rows,originalPcs=sorted(coverage))
 except BaseException as exc:report=dict(status='failed',error=repr(exc),cases=rows);raise
 finally:(output/'report.json').write_text(json.dumps(report,indent=2)+'\n')
if __name__=='__main__':main()
