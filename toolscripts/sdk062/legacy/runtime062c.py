import ctypes
import sys
from pathlib import Path
from unicorn import arm64_const as a64,arm_const as arm

ROOT=next(p for p in Path(__file__).resolve().parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'work/native-asset062'))
from runtime062 import Runtime

ADDRESSES={'channel_member_find062c':0x6d9dd0,'channel_member_copy062c':0x6d9c6c,'channel_identity_query062c':0x6dbbc0,'channel_context_identity062c':0x6d91b8,'channel_current_identity062c':0x6744e4,'channel_link_identity062c':0x66e530,'channel_first062c':0x77f768,'channel_second062c':0x77f8b4}


class ChannelRuntime(Runtime):
    def __init__(self,target,artifacts):
        super().__init__(target,artifacts)
        if target=='original':
            import inventory
            mapped=inventory.code_layout((ROOT/'generated/update-content0/exheader.bin').read_bytes());data=next(s for s in mapped['segments']if s['name']=='data');self.moduleDataSpan=(data['address'],data['initializedBytes']+mapped['bssBytes'])
            self.original.ranges.append((0x77f8b4,0x77f8d4,0x77f8b4));self.original.ranges.sort();self.original.starts=[r[0]for r in self.original.ranges]

    def call(self,name,arguments):
        if self.target=='original':
            self.original.call(ADDRESSES[name],arguments)
            return self.cpu.reg_read(arm.UC_ARM_REG_R0)
        if self.target=='windows':
            function=getattr(self.library,name)
            if name=='channel_member_find062c':function.argtypes=[ctypes.c_void_p,ctypes.c_uint32];function.restype=ctypes.c_void_p
            elif name in ['channel_member_copy062c','channel_identity_query062c']:function.argtypes=[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_uint32];function.restype=ctypes.c_uint32
            elif name=='channel_context_identity062c':function.argtypes=[ctypes.c_void_p,ctypes.c_void_p];function.restype=None
            else:function.argtypes=[ctypes.c_void_p];function.restype=ctypes.c_uint32
            return function(*arguments)
        result=super().call(name,arguments)
        if name=='channel_member_find062c':return self.cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm'else a64.UC_ARM64_REG_X0)
        return result

    def store(self,address,raw):
        if self.target=='windows':ctypes.memmove(address,bytes(raw),len(raw))
        else:self.cpu.mem_write(address,bytes(raw))

    def read(self,address,size):
        return ctypes.string_at(address,size)if self.target=='windows'else bytes(self.cpu.mem_read(address,size))
