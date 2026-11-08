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
ADDRESS={'sdk_timer_initialize062aa':0x45e880,'sdk_timer_set062aa':0x45e504,'sdk_timer_update062aa':0x45e3dc}
class TimerRuntime(SdkRuntime):
    def __init__(self,target,folder=None):
        folder=folder or WORK/'attempt001/build';super().__init__(target,folder);self.timer_layout=self.constant('fixture_timer_layout062aa',29)
        expected=(4,32,4,68,32,64,84,16,12,4,8,28,20,24,25,48,4,32,36,40,32,8,16,20,24,48,8,16,32)if self.profilePointerBytes==4 else(8,40,8,88,40,80,120,32,24,8,16,48,40,44,45,72,8,56,60,64,32,8,16,20,24,56,8,16,32)
        if self.timer_layout!=expected:raise ValueError('062aa typed timer layout mismatch '+str(self.timer_layout))
        if target=='original':
            with(folder/'arm/sdk062s.elf').open('rb')as stream:
                rows=[r for r in ELFFile(stream).get_section_by_name('.symtab').iter_symbols()if r.name=='fixture_timer_clock_read062aa']
            if len(rows)!=1:raise ValueError('062aa clock callback ambiguity')
            row=rows[0];self.original.fixture_ranges.append((row['st_value'],row['st_value']+row['st_size']))
    def invoke(self,name,args):
        if self.target=='original':return self.original.call(ADDRESS[name],args)&0xffffffff
        if self.target=='windows':
            f=getattr(self.library,name);f.argtypes=[ctypes.c_void_p]*len(args);f.restype=ctypes.c_void_p if name=='sdk_timer_initialize062aa'else ctypes.c_uint32 if name=='sdk_timer_set062aa'else None;return f(*args)or 0
        Runtime.call(self,name,args);return self.cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm'else a64.UC_ARM64_REG_X0)
