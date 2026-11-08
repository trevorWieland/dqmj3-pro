import ctypes,struct
from pathlib import Path
from elftools.elf.elffile import ELFFile
from unicorn import Uc,UC_ARCH_ARM,UC_ARCH_ARM64,UC_MODE_ARM,UC_HOOK_CODE,UC_HOOK_MEM_READ,UC_HOOK_MEM_WRITE
from unicorn import arm_const as arm,arm64_const as a64

class Runtime:
 def __init__(self,target,folder):
  self.target=target;self.p=4 if target=='arm'else 8;self.coverage=set();self.defined=set()
  if target=='windows':
   self.dll=ctypes.CDLL(str(folder/target/'heap062ac.dll'));self.storage=ctypes.create_string_buffer(0x20000+63);self.ram=(ctypes.addressof(self.storage)+63)&-64
   self.layout=list((ctypes.c_uint32*22).in_dll(self.dll,'fixture_heap_layout062ac'));return
  self.ram=0x2020000 if target=='arm'else 0x120200000;self.stack=0x3000000 if target=='arm'else 0x130000000;self.stop=0x4000000 if target=='arm'else 0x140000000
  self.cpu=Uc(UC_ARCH_ARM if target=='arm'else UC_ARCH_ARM64,UC_MODE_ARM)
  if target=='arm':self.cpu.ctl_set_cpu_model(arm.UC_CPU_ARM_11MPCORE)
  self.symbols={};ranges=[];pages=set()
  with (folder/target/'heap062ac.elf').open('rb')as stream:
   elf=ELFFile(stream)
   for section in elf.iter_sections():
    if not section['sh_flags']&2 or not section['sh_size']:continue
    start,size=section['sh_addr'],section['sh_size']
    for page in range(start&-4096,(start+size+4095)&-4096,4096):
     if page not in pages:self.cpu.mem_map(page,4096);pages.add(page)
    if section['sh_type']!='SHT_NOBITS':self.cpu.mem_write(start,section.data())
   for row in elf.get_section_by_name('.symtab').iter_symbols():
    if row.name:self.symbols[row.name]=row['st_value']
    if row['st_info']['type']=='STT_FUNC'and row['st_size']:ranges.append((row['st_value'],row['st_value']+row['st_size']))
  for start,size in [(self.ram,0x20000),(self.stack,0x20000),(self.stop,4096)]:self.cpu.mem_map(start,size)
  def code(cpu,address,size,data):
   if not any(lo<=address<address+size<=hi for lo,hi in ranges):raise ValueError('source escaped its compiled function closure')
   self.coverage.add(address)
  def write(cpu,access,address,size,value,data):
   if self.stack<=address<self.stack+0x20000:self.defined.update(range(address,address+size))
  def read(cpu,access,address,size,value,data):
   if self.stack<=address<self.stack+0x20000 and any(p not in self.defined for p in range(address,address+size)):raise ValueError('undefined source stack read')
  self.cpu.hook_add(UC_HOOK_CODE,code);self.cpu.hook_add(UC_HOOK_MEM_READ,read);self.cpu.hook_add(UC_HOOK_MEM_WRITE,write)
  self.layout=list(struct.unpack('<22I',self.load(self.symbols['fixture_heap_layout062ac'],88)))
 def symbol(self,name):
  return ctypes.addressof(ctypes.c_byte.in_dll(self.dll,name))if self.target=='windows'else self.symbols[name]
 def load(self,address,size):return ctypes.string_at(address,size)if self.target=='windows'else bytes(self.cpu.mem_read(address,size))
 def store(self,address,data):
  if self.target=='windows':ctypes.memmove(address,data,len(data))
  else:self.cpu.mem_write(address,data)
 def call(self,name,args):
  if self.target=='windows':
   f=getattr(self.dll,name);f.argtypes=[ctypes.c_void_p]*len(args);f.restype=ctypes.c_void_p
   return f(*args)or 0
  cpu=self.cpu;sp=self.stack+0x10000
  if self.target=='arm':
   saved=[(getattr(arm,'UC_ARM_REG_R'+str(i)),0x58000000+i)for i in range(4,12)]+[(getattr(arm,'UC_ARM_REG_D'+str(i)),0x5800000012340000+i)for i in range(8,16)]
   for reg,val in [(arm.UC_ARM_REG_CPSR,0x10),(arm.UC_ARM_REG_C1_C0_2,0xf<<20),(arm.UC_ARM_REG_FPEXC,0x40000000),(arm.UC_ARM_REG_FPSCR,0x00400000),(arm.UC_ARM_REG_SP,sp),(arm.UC_ARM_REG_LR,self.stop)]:cpu.reg_write(reg,val)
   registers=[arm.UC_ARM_REG_R0,arm.UC_ARM_REG_R1,arm.UC_ARM_REG_R2,arm.UC_ARM_REG_R3];pc=arm.UC_ARM_REG_PC;stack=arm.UC_ARM_REG_SP
  else:
   saved=[(getattr(a64,'UC_ARM64_REG_X'+str(i)),0x5800000000000000+i)for i in range(19,30)]+[(getattr(a64,'UC_ARM64_REG_D'+str(i)),0x5800000012340000+i)for i in range(8,16)]
   for reg,val in [(a64.UC_ARM64_REG_SP,sp),(a64.UC_ARM64_REG_X30,self.stop),(a64.UC_ARM64_REG_FPCR,0),(a64.UC_ARM64_REG_FPSR,0)]:cpu.reg_write(reg,val)
   registers=[getattr(a64,'UC_ARM64_REG_X'+str(i))for i in range(8)];pc=a64.UC_ARM64_REG_PC;stack=a64.UC_ARM64_REG_SP
  for reg,val in saved:cpu.reg_write(reg,val)
  for reg,val in zip(registers,args):cpu.reg_write(reg,val&((1<<(self.p*8))-1))
  if self.target=='arm' and len(args)>4:
   data=b''.join((v&0xffffffff).to_bytes(4,'little')for v in args[4:]);self.store(sp,data);self.defined.update(range(sp,sp+len(data)))
  cpu.emu_start(self.symbols[name],self.stop,count=10000000)
  if cpu.reg_read(pc)!=self.stop or cpu.reg_read(stack)!=sp:raise ValueError('source failed to return/restack')
  if any(cpu.reg_read(reg)!=val for reg,val in saved):raise ValueError('source callee-save violation')
  if self.target=='arm' and cpu.reg_read(arm.UC_ARM_REG_FPSCR)!=0x00400000:raise ValueError('source changed FPSCR')
  if self.target=='a64' and (cpu.reg_read(a64.UC_ARM64_REG_FPCR)!=0 or cpu.reg_read(a64.UC_ARM64_REG_FPSR)!=0):raise ValueError('source changed FP control/status')
  return cpu.reg_read(registers[0])
