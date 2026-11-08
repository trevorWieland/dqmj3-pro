import ctypes
from pathlib import Path
from elftools.elf.elffile import ELFFile
from unicorn import arm_const as arm,arm64_const as a64
from runtime062u import TaskRuntime,WORK
from runtime062 import Runtime
CLOCK_ADDRESSES=dict(sdk_clock_raw062u=0x15eb44,sdk_clock_current062u=0x13d0fc,sdk_clock_monotonic062u=0x14ed0c,sdk_clock_locked062u=0x15ea80,sdk_clock_guard062u=0x303afd,sdk_count_initialize062u=0x123678,sdk_recursive_initialize062u=0x13c500,sdk_mutex_initialize062u=0x4745d8)
class ClockRuntime(TaskRuntime):
    def __init__(self,target,folder=None):
        folder=folder or WORK/'attempt002-clock/build';super().__init__(target,folder);self.clock_layout=self.constant('fixture_clock_layout062u',22)
        if target=='original':
            for a,n in [(0x303afc,18),(0x176fc4,4)]:self.original.ranges.append((a,a+n,a))
            self.original.ranges.sort();self.original.starts=[r[0]for r in self.original.ranges]
            with (folder/'arm/sdk062s.elf').open('rb')as f:
                for symbol in ELFFile(f).get_section_by_name('.symtab').iter_symbols():
                    if symbol.name=='fixture_clock_read062u':self.original.fixture_ranges.append((symbol['st_value'],symbol['st_value']+symbol['st_size']))
    def call(self,name,args):
        if name not in CLOCK_ADDRESSES:return super().call(name,args)
        if self.target=='original':return self.original.call(CLOCK_ADDRESSES[name],args)&0xffffffff
        if self.target=='windows':
            f=getattr(self.library,name);f.argtypes=[ctypes.c_void_p]*len(args);f.restype=ctypes.c_void_p if name=='sdk_mutex_initialize062u'else ctypes.c_uint32 if name=='sdk_clock_guard062u'else None;return f(*args)
        Runtime.call(self,name,args);return self.cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm'else a64.UC_ARM64_REG_X0)
