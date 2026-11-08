import ctypes
import sys
from pathlib import Path
from elftools.elf.elffile import ELFFile
from unicorn import arm_const as arm,arm64_const as a64
WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'work/native-asset062-sdk-object'))
from runtime062t import ObjectRuntime
from runtime062 import Runtime
ADDRESSES=dict(sdk_task_initialize062u=0x4b3044,sdk_task_extended_initialize062u=0x479cd8,sdk_task_set_state062u=0x4b301c,sdk_task_complete062u=0x4b2fdc,sdk_task_state_four062u=0x4b2e60,sdk_task_state_two062u=0x4b2f0c,sdk_task_state_three062u=0x4b2fe4,sdk_task_set_delay062u=0x4b2e68,sdk_task_dispatch062u=0x4b2f14)
class TaskRuntime(ObjectRuntime):
    def __init__(self,target,folder=None):
        folder=folder or WORK/'attempt001/build';super().__init__(target,folder);self.task_layout=self.constant('fixture_task_layout062u',28);self.trace_layout=self.constant('fixture_task_trace_layout062u',9)
        expected=(64,12,16,20,24,28,32,33,34,36,40,44,48,52,56,57,60,104,64,68,72,76,80,84,88,92,96,100)if self.profilePointerBytes==4 else(88,16,24,32,40,48,56,57,58,60,64,68,72,76,80,81,84,152,88,92,96,104,112,120,128,136,140,144)
        if self.task_layout!=expected:raise ValueError('062u task layout differs independently measured contract '+str(self.task_layout))
        if target=='original':
            for a,n in [(0x4b301c,36),(0x4b2fdc,8),(0x4b2e60,8),(0x4b2f0c,8),(0x4b2fe4,8),(0x4b2e68,28),(0x4b2f14,12),(0x10414a,10)]:self.original.ranges.append((a,a+n,a))
            self.original.ranges.sort();self.original.starts=[r[0]for r in self.original.ranges]
            with (folder/'arm/sdk062s.elf').open('rb')as f:
                for symbol in ELFFile(f).get_section_by_name('.symtab').iter_symbols():
                    if symbol.name=='fixture_task_completion062u':self.original.fixture_ranges.append((symbol['st_value'],symbol['st_value']+symbol['st_size']))
    def call(self,name,args):
        if name not in ADDRESSES:return super().call(name,args)
        if self.target=='original':return self.original.call(ADDRESSES[name],args)&0xffffffff
        if self.target=='windows':
            f=getattr(self.library,name);f.argtypes=[ctypes.c_void_p]*len(args);f.restype=ctypes.c_void_p if name.endswith('initialize062u')else None;return f(*args)
        Runtime.call(self,name,args);return self.cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm'else a64.UC_ARM64_REG_X0)
