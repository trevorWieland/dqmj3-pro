import hashlib,json,struct,sys
from pathlib import Path
W=Path(__file__).resolve().parent;R=next(p for p in W.parents if(p/'AGENTS.md').is_file());sys.path.insert(0,str(R/'toolscripts'))
from sdk062_original_v1 import Original
from unicorn import arm_const as arm
from heap_runtime062ac import Runtime
from heap_default_proof062ac import modeled_constructor

CASES=[('heap_group_set062ac',0x170b84,[263,65535,65536,0xffffffff,0]),('heap_policy_set062ac',0x170b94,[0,1,2,0xffffffff,0x80000000]),('heap_split_set062ac',0x170c2c,[0,127,128,255,256,-1,-129,-128])]

def run(target,folder,original=None):
 runtime=Runtime(target,folder);base=runtime.ram;runtime.store(base,b'\xa7'*0x18000);runtime.call('fixture_heap_reset062ac',[]);runtime.call('fixture_default_bind062ac',[base+0x18000]);runtime.call('heap_default_initialize062ac',[base,65536]);model=modeled_constructor(base,runtime.layout,runtime.symbol('heap_identity062ac'));rows=[]
 for name,address,values in CASES:
  for value in values:
   if name=='heap_group_set062ac':expected=model.group;model.controls(value&65535,model.policy,model.split)
   elif name=='heap_policy_set062ac':expected=model.policy&1;model.controls(model.group,(model.policy&~1)|(value&1),model.split)
   else:expected=model.split if model.split<128 else model.split-256;model.controls(model.group,model.policy,value&255)
   result=runtime.call(name,[base+runtime.layout[19],value])&0xffffffff
   if result!=expected&0xffffffff:raise ValueError(('setter return',name,value,result,expected))
   actual=runtime.load(base,0x18000);model.validate(actual)
   if original is not None:
    answer=original.call(address,[base+24,value])&0xffffffff
    reference=bytes(original.cpu.mem_read(base,0x18000));projected=bytearray(actual);projected[:4]=struct.pack('<I',0x8526b4)
    if answer!=result or reference!=projected:raise ValueError(('actual setter mismatch',name,value))
   rows.append(dict(name=name,argumentBits=value&0xffffffff,returnedBits=result,rawArenaSha256=hashlib.sha256(actual).hexdigest(),validatedOwnershipProjection=model.projection()))
 return dict(target=target,rows=rows)

def main(folder=None,out=None):
 folder=folder or W/'build-default-v4';out=out or W/'setter-proof-attempt002';out.mkdir(exist_ok=True);original=Original();base=0x2020000;original.cpu.mem_write(base,b'\xa7'*0x18000);original.cpu.mem_write(0x89a508,b'\1');original.cpu.reg_write(arm.UC_ARM_REG_C13_C0_3,base+0x18000);original.ranges.append((0x10b980,0x10ba20,0x10b980));original.ranges.sort();original.starts=[row[0]for row in original.ranges];original.call(0x10b980,[base,65536]);rows=[]
 try:
  rows=[run(t,folder,original if t=='arm'else None)for t in ['arm','windows','a64']];result=dict(status='passed',profiles=rows,originalPcs=sorted(original.coverage))
 except BaseException as exc:result=dict(status='failed',profiles=rows,error=repr(exc));raise
 finally:(out/'report.json').write_text(json.dumps(result,indent=2)+'\n')
 print('constructor-derived setter ABI cases passed')
if __name__=='__main__':main()
