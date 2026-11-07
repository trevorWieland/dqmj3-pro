import ctypes
import hashlib
import struct
import unicorn
from unicorn import arm_const as arm
from native_wave014_oracle import original_image
from squirrel_generator044_build import ROOT,VTABLES
import json
from squirrel_lookup020_oracle import REDIRECT as LEGACY_REDIRECT
from squirrel_table_lookup019_oracle import ORIGINAL_SPANS,ORIGINAL_DATA

HEAP,STACK,STOP=0x2000000,0x6000000,0xfff0000
REDIRECT=dict(LEGACY_REDIRECT,sq_generator_create044=0x192b9c,sq_generator_release044=0x202dcc,sq_generator_destroy044=0x202e68)
REDIRECT.update(sq_generator_yield046=0x19289c,sq_generator_resume046=0x19e378,sq_generator_raise_literal046=0x19813c)
SPANS=ORIGINAL_SPANS+[(0x19d320,0x19d408),(0x192b9c,0x192ca8),(0x202dcc,0x202df4),(0x202e68,0x202f70),(0x19289c,0x192b38),(0x19e378,0x19e7a0),(0x19e7dc,0x19e864)]
DATA=ORIGINAL_DATA+[(0x192ca8,0x192cb4),(0x202f70,0x202f7c),(0x81c358,0x81c364),(0x192b38,0x192b9c),(0x19e7a0,0x19e7dc)]
_lookup_claim=json.loads((ROOT/"evidence/lanes/squirrel-lookup020/claim.json").read_text())
SPANS += [(r["entry"],r["endExclusive"])for r in _lookup_claim["functions"]]
DATA += [(r["endExclusive"],r["endExclusive"]+r["poolBytes"])for r in _lookup_claim["functions"]if r["poolBytes"]]


def machine(sections,original):
 cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM);image=original_image()if original else None;pages=set()
 if image:pages.update(range(0x100000,(0x100000+len(image)+4095)&-4096,4096))
 for address,size,flags,data in sections:pages.update(range(address&-4096,(address+size+4095)&-4096,4096))
 ordered=sorted(pages);start,end=ordered[0],ordered[0]+4096
 for page in ordered[1:]:
  if page==end:end+=4096
  else:cpu.mem_map(start,end-start);start,end=page,page+4096
 cpu.mem_map(start,end-start)
 if image:cpu.mem_write(0x100000,image)
 tables={address for name,address,symbol in VTABLES}
 for address,size,flags,data in sections:
  if data and not(original and address in tables):cpu.mem_write(address,data)
 cpu.mem_map(HEAP,0x80000);cpu.mem_map(STACK,0x20000);cpu.mem_map(STOP,4096)
 cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10);cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20);cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000)
 if original:
  cpu.reg_write(arm.UC_ARM_REG_SP,STACK+0x18000);cpu.emu_start(0x6ff69c,0x6ff6b0,count=5)
  if bytes(cpu.mem_read(0x8c06e8,8))!=struct.pack('<II',0x01000001,0):raise ValueError('044 measured NULL template failed')
 return cpu


class Arm:
 def __init__(self,sections,symbols,functions,original=False):
  self.sections,self.symbols,self.functions,self.original=sections,symbols,functions,original;self.coverage=set();self.last_fault=None;self.sdk_code={};self.sdk_data=set()
  if original:
   image=original_image();record=json.loads((ROOT/'evidence/lanes/squirrel-lookup020/reference-sdk-exchange.json').read_text())
   for row in record['instructionWitnesses']:
    blob=image[row['address']-0x100000:row['address']-0x100000+row['bytes']]
    if hashlib.sha256(blob).hexdigest()!=row['sha256']:raise ValueError('046 SDK instruction changed')
    self.sdk_code[row['address']]=(row['mode'].lower(),row['bytes'])
   for row in record['dataReadWitnesses']:
    blob=image[row['address']-0x100000:row['address']-0x100000+row['bytes']]
    if hashlib.sha256(blob).hexdigest()!=row['sha256']:raise ValueError('046 SDK immutable data changed')
    self.sdk_data.add((row['address'],row['bytes']))
 def execute(self,variant,cleanup=0):
  cpu=machine(self.sections,self.original);phase='';returned=False
  redirect={self.symbols[name]:target for name,target in REDIRECT.items()if name in self.symbols}
  source_ranges=[(start,start+size)for name,start,size in self.functions]
  def target(name):
   if name not in self.symbols:raise ValueError('044 missing service '+name)
   cpu.reg_write(arm.UC_ARM_REG_PC,self.symbols[name])
  def code(uc,address,size,user):
   nonlocal returned
   if address==STOP:returned=True;uc.emu_stop();return
   self.coverage.add(address)
   if not self.original:return
   if address in redirect:uc.reg_write(arm.UC_ARM_REG_PC,redirect[address]);return
   if address==0x2fece8:
    caller=uc.reg_read(arm.UC_ARM_REG_LR)&~1
    if caller==0x192bb4:target('sq_generator_allocate044')
    elif caller==0x233b9c:target('sq_weak_allocate014')
    elif caller==0x16b6a4:target('sq_string_allocate_value015')
    elif caller==0x16b750:target('sq_string_allocate_buckets015')
    else:raise ValueError('044 unqualified allocator caller '+hex(caller))
    return
   if address==0x19d680:target('fixture_deallocate044');return
   if address==0x18388c:target('sq_reallocate');return
   if any(a<=address<b for a,b in SPANS):return
   if address in self.sdk_code:
    mode='thumb'if uc.reg_read(arm.UC_ARM_REG_CPSR)&32 else'arm'
    if self.sdk_code[address]!=(mode,size):raise ValueError('046 SDK mode/width changed '+str((hex(address),self.sdk_code[address],mode,size)))
    return
   if any(a<=address<b for a,b in source_ranges):return
   raise ValueError('044 unexpected original PC '+hex(address)+' phase '+phase)
  def memory(uc,access,address,size,value,user):
   if self.original and 0x100000<=address<0x8fb000 and not any(a<=address and address+size<=b for a,b in DATA)and not any(a<=address and address+size<=b for a,b in SPANS)and address!=0x8c06e8 and(address,size)not in self.sdk_data:
    self.last_fault=dict(address=hex(address),size=size,pc=hex(uc.reg_read(arm.UC_ARM_REG_PC)))
    raise ValueError('044 unqualified immutable read '+str(self.last_fault))
  if self.original:
   cpu.hook_add(unicorn.UC_HOOK_CODE,code,begin=0x100000,end=0x8fb000)
   for address in redirect:cpu.hook_add(unicorn.UC_HOOK_CODE,code,begin=address,end=address+3)
  if self.original:cpu.hook_add(unicorn.UC_HOOK_MEM_READ,memory,begin=0x100000,end=0x8fb000)
  def call(name,args):
   nonlocal phase,returned
   phase=name;returned=False;cpu.reg_write(arm.UC_ARM_REG_SP,STACK+0x18000);cpu.reg_write(arm.UC_ARM_REG_LR,STOP)
   for i in range(8):
    cpu.reg_write(arm.UC_ARM_REG_R4+i,0x51000000+i*163);cpu.reg_write(arm.UC_ARM_REG_D8+i,0x3ff0000000000000+i*131)
   for reg,value in zip([arm.UC_ARM_REG_R0,arm.UC_ARM_REG_R1,arm.UC_ARM_REG_R2,arm.UC_ARM_REG_R3],args):cpu.reg_write(reg,value)
   cpu.emu_start(self.symbols[name],STOP,count=10000000)
   if not returned and cpu.reg_read(arm.UC_ARM_REG_PC)!=STOP:raise ValueError('044 did not return '+phase+' '+hex(cpu.reg_read(arm.UC_ARM_REG_PC)))
   if cpu.reg_read(arm.UC_ARM_REG_SP)!=STACK+0x18000 or any(cpu.reg_read(arm.UC_ARM_REG_R4+i)!=0x51000000+i*163 for i in range(8)):raise ValueError('044 saved integer ABI changed '+phase)
   if any(cpu.reg_read(arm.UC_ARM_REG_D8+i)!=0x3ff0000000000000+i*131 for i in range(8)):raise ValueError('044 saved float ABI changed '+phase)
   return cpu.reg_read(arm.UC_ARM_REG_R0)
  if not call('fixture_bind044',[HEAP,0x80000]):raise ValueError('044 bind failed')
  call('fixture_prepare044',[0,0]);call('fixture_execute044',[]);call('fixture_prepare046',[variant,cleanup]);call('fixture_execute046',[])
  count=call('fixture_snapshot046',[HEAP+0x70000,8192])
  words=list(struct.unpack('<'+'I'*count,bytes(cpu.mem_read(HEAP+0x70000,count*4))))
  if len(words)<15 or words[11]or words[words[0]+8]:raise ValueError('046 fixture fault '+str(words[:15]))
  return dict(words=words,arena=bytes(cpu.mem_read(HEAP,0x70000)),coverage=sorted(self.coverage))
