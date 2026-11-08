import ctypes
import struct
import sys
from pathlib import Path
from elftools.elf.elffile import ELFFile
from unicorn import arm_const as arm,arm64_const as a64
WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'work/native-asset062-sdk'))
from runtime062s import SdkRuntime
from runtime062 import Runtime
ADDRESSES=dict(sdk_connection_ready062t=0x46028c,sdk_connection_closed062t=0x4657f4,sdk_child_ready062t=0x4712ac,sdk_child_closed062t=0x47166c,sdk_connection_set_state062t=0x46149c,sdk_address_replace062t=0x46e644,sdk_wrapper_prepare062t=0x495168,sdk_wrapper_replace062t=0x46b1a0,sdk_wrapper_ready062t=0x6d1204,sdk_wrapper_closed062t=0x6d12e8,sdk_result_make062t=0x4b8d4c,sdk_result_success062t=0x6d3b8c,sdk_operation_result062t=0x6d1828,sdk_holder_ready062t=0x666a24)
VOID={'sdk_address_replace062t','sdk_wrapper_prepare062t','sdk_wrapper_replace062t','sdk_operation_result062t'}

class ObjectRuntime(SdkRuntime):
    def __init__(self,target,folder=None):
        folder=folder or WORK/'attempt001/build'
        super().__init__(target,folder)
        self.object_layout=self.constant('fixture_object_layout062t',40)
        self.capture_layout=self.constant('fixture_capture_layout062t',12)
        if target=='original':
            for a,n in [(0x46028c,20),(0x4657f4,20),(0x4712ac,28),(0x47166c,28),(0x495168,8)]:self.original.ranges.append((a,a+n,a))
            self.original.ranges.sort();self.original.starts=[r[0]for r in self.original.ranges]
            with (folder/'arm/sdk062s.elf').open('rb')as stream:
                for row in ELFFile(stream).get_section_by_name('.symtab').iter_symbols():
                    if row.name=='fixture_connection_callback062t':self.original.fixture_ranges.append((row['st_value'],row['st_value']+row['st_size']))
    def call(self,name,args):
        if name not in ADDRESSES:return super().call(name,args)
        if self.target=='original':return self.original.call(ADDRESSES[name],args)&0xffffffff
        if self.target=='windows':
            function=getattr(self.library,name);function.argtypes=[ctypes.c_void_p]*len(args)
            function.restype=None if name in VOID else ctypes.c_void_p if name=='sdk_result_make062t'else ctypes.c_uint32
            return function(*args)
        Runtime.call(self,name,args)
        return self.cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm'else a64.UC_ARM64_REG_X0)
