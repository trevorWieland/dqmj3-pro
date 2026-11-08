import hashlib,json,sys
from pathlib import Path
W=Path(__file__).resolve().parent;R=next(p for p in W.parents if(p/'AGENTS.md').is_file());sys.path.insert(0,str(R/'toolscripts'))
from sdk062_original_v1 import Original
from heap_runtime062ac import Runtime

def run(target,folder,original=None):
 runtime=Runtime(target,folder);base=runtime.ram;initial=b'\xa7'*0x18000;runtime.store(base,initial);runtime.call('fixture_default_disabled062ac',[]);rows=[]
 if original is not None:
  original.cpu.mem_write(base,initial)
  if bytes(original.cpu.mem_read(0x89a508,1))!=b'\0':raise ValueError('original prior-to-startup disabled state changed')
  module=bytes(original.cpu.mem_read(0x888000,471024))
 for name,address,args in [('heap_default_allocate062ac',0x1287dc,[32,4]),('heap_default_free062ac',0x143b48,[0]),('heap_default_free062ac',0x143b48,[base+256])]:
  value=runtime.call(name,args)
  if name=='heap_default_allocate062ac'and value!=0:raise ValueError('disabled allocator returned storage')
  if runtime.load(base,len(initial))!=initial:raise ValueError('disabled API touched caller storage')
  if original is not None:
   answer=original.call(address,args)
   if name=='heap_default_allocate062ac'and answer!=0:raise ValueError('original disabled result')
   if bytes(original.cpu.mem_read(base,len(initial)))!=initial or bytes(original.cpu.mem_read(0x888000,471024))!=module:raise ValueError('original disabled API changed initialized state')
  rows.append(dict(name=name,nullInput=args==[0],returnedNormally=True,callerArenaUnchanged=True,rawArenaSha256=hashlib.sha256(initial).hexdigest()))
 return dict(target=target,rows=rows)

def main(folder,out):
 out.mkdir(exist_ok=True);original=Original();rows=[]
 try:
  rows=[run(t,folder,original if t=='arm'else None)for t in ['arm','windows','a64']];report=dict(status='passed',profiles=rows,originalPcs=sorted(original.coverage))
 except BaseException as exc:report=dict(status='failed',error=repr(exc),profiles=rows);raise
 finally:(out/'report.json').write_text(json.dumps(report,indent=2)+'\n')
 print('canonical initially-disabled API cases passed')
