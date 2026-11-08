import ctypes
import sys
from pathlib import Path
from elftools.elf.elffile import ELFFile
from unicorn import arm_const as arm,arm64_const as a64
WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'toolscripts'))
import sdk062_original_v1
sdk062_original_v1.install(WORK/'attempt001/build')
sys.path.append(str(ROOT/'work/native-asset062-sdk'))
from runtime062s import SdkRuntime
from runtime062 import Runtime
ADDRESS={'sdk_binding_active062v':0x47a008,'sdk_binding_notify062v':0x47a028,'sdk_binding_can_transition062v':0x47a02c}
class BindingRuntime(SdkRuntime):
    def __init__(self,target,folder=None):
        folder=folder or WORK/'attempt001/build';super().__init__(target,folder);self.binding_layout=self.constant('fixture_binding_layout062v',11)
        expected=(4,28,0,12,16,20,24,56,20,48,52)if self.profilePointerBytes==4 else(8,40,0,16,24,32,36,112,40,96,104)
        if self.binding_layout!=expected:raise ValueError('062v independently measured binding layout mismatch '+str(self.binding_layout))
        if target=='original':
            for a,n in [(0x47a008,24),(0x47a028,4),(0x47a02c,236)]:self.original.ranges.append((a,a+n,a))
            self.original.ranges.sort();self.original.starts=[r[0]for r in self.original.ranges]
            with (folder/'arm/sdk062s.elf').open('rb')as f:
                for row in ELFFile(f).get_section_by_name('.symtab').iter_symbols():
                    if row.name=='fixture_binding_route062v':self.original.fixture_ranges.append((row['st_value'],row['st_value']+row['st_size']))
    def invoke(self,name,args):
        if self.target=='original':
            address=ADDRESS.get(name,self.symbol(name));return self.original.call(address,args)&0xffffffff
        if self.target=='windows':
            f=getattr(self.library,name);f.argtypes=[ctypes.c_void_p]+([ctypes.c_uint32]if len(args)==2 else[]);f.restype=None if name=='sdk_binding_notify062v'else ctypes.c_uint32;return f(*args)
        Runtime.call(self,name,args)
        return self.cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm'else a64.UC_ARM64_REG_X0)
