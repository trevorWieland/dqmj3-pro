import ctypes
import struct
import unicorn
from unicorn import arm64_const as arm
from platform_engine_wave005_android_model import machine


class Windows:
 def __init__(self,path):
  self.module=ctypes.CDLL(str(path));self.kernel=ctypes.WinDLL('kernel32',use_last_error=True)
  self.kernel.VirtualAlloc.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32,ctypes.c_uint32];self.kernel.VirtualAlloc.restype=ctypes.c_void_p
  self.kernel.VirtualFree.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32]
  self.module.fixture_bind044.argtypes=[ctypes.c_void_p,ctypes.c_uint32];self.module.fixture_bind044.restype=ctypes.c_uint32
  self.module.fixture_prepare046.argtypes=[ctypes.c_uint32,ctypes.c_uint32];self.module.fixture_execute046.restype=ctypes.c_uint32
  self.module.fixture_snapshot046.argtypes=[ctypes.POINTER(ctypes.c_uint32),ctypes.c_uint32];self.module.fixture_snapshot046.restype=ctypes.c_uint32
  self.module.fixture_prepare044.argtypes=[ctypes.c_uint32,ctypes.c_uint32];self.module.fixture_execute044.restype=ctypes.c_uint32
  self.module.fixture_snapshot044.argtypes=[ctypes.POINTER(ctypes.c_uint32),ctypes.c_uint32];self.module.fixture_snapshot044.restype=ctypes.c_uint32
  self.module.fixture_vtable044.argtypes=[ctypes.c_uint32];self.module.fixture_vtable044.restype=ctypes.c_void_p
 def execute(self,variant,cleanup=0):
  base=self.kernel.VirtualAlloc(0x120000000,0x80000,0x3000,4)
  if base!=0x120000000:raise OSError('044 high Windows arena unavailable')
  try:
   if self.module.fixture_bind044(base,0x80000)!=1:raise ValueError('044 native bind failed')
   self.module.fixture_prepare044(0,0)
   if self.module.fixture_execute044()!=1:raise ValueError('044 native root failed')
   self.module.fixture_prepare046(variant,cleanup)
   if self.module.fixture_execute046()!=1:raise ValueError('046 Windows root failed')
   words=(ctypes.c_uint32*8192)();count=self.module.fixture_snapshot046(words,8192)
   result=list(words[:count])
   if result[11]or result[result[0]+8]:raise ValueError('046 native fixture fault')
   return dict(words=result,arena=ctypes.string_at(base,0x70000),vtables=[self.module.fixture_vtable044(i)for i in range(7)])
  finally:self.kernel.VirtualFree(base,0,0x8000)


class Android:
 def __init__(self,sections,symbols):self.sections,self.symbols=sections,symbols
 def execute(self,variant,cleanup=0):
  cpu=machine(self.sections);base,stack,stop=0x110000000,0x130000000,0x140000000
  cpu.mem_map(base,0x80000,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE);cpu.mem_map(stack,0x20000);cpu.mem_map(stop,4096)
  def invoke(name,args):
   sp=stack+0x10000
   for i in range(18,30):cpu.reg_write(getattr(arm,'UC_ARM64_REG_X'+str(i)),0x5800000000+i*167)
   for i in range(8,16):cpu.reg_write(getattr(arm,'UC_ARM64_REG_D'+str(i)),0x3ff0000000000000+i*173)
   for i,value in enumerate(args):cpu.reg_write(getattr(arm,'UC_ARM64_REG_X'+str(i)),value)
   cpu.reg_write(arm.UC_ARM64_REG_SP,sp);cpu.reg_write(arm.UC_ARM64_REG_X30,stop)
   cpu.emu_start(self.symbols[name],stop,count=10000000)
   if cpu.reg_read(arm.UC_ARM64_REG_PC)!=stop or cpu.reg_read(arm.UC_ARM64_REG_SP)!=sp:raise ValueError('044 A64 did not normally return '+name)
   if any(cpu.reg_read(getattr(arm,'UC_ARM64_REG_X'+str(i)))!=0x5800000000+i*167 for i in range(18,30)):raise ValueError('044 A64 saved integer state changed')
   if any(cpu.reg_read(getattr(arm,'UC_ARM64_REG_D'+str(i)))!=0x3ff0000000000000+i*173 for i in range(8,16)):raise ValueError('044 A64 saved floating state changed')
   return cpu.reg_read(arm.UC_ARM64_REG_X0)
  if invoke('fixture_bind044',[base,0x80000])!=1:raise ValueError('044 A64 bind failed')
  invoke('fixture_prepare044',[0,0])
  if invoke('fixture_execute044',[])!=1:raise ValueError('044 A64 root failed')
  invoke('fixture_prepare046',[variant,cleanup])
  if invoke('fixture_execute046',[])!=1:raise ValueError('046 A64 root failed')
  count=invoke('fixture_snapshot046',[base+0x70000,8192]);words=list(struct.unpack('<'+'I'*count,cpu.mem_read(base+0x70000,count*4)))
  return dict(words=words,arena=bytes(cpu.mem_read(base,0x70000)),vtables=[invoke('fixture_vtable044',[i])for i in range(7)])
