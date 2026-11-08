import ctypes
from pathlib import Path
import sys
from elftools.elf.elffile import ELFFile
from unicorn import arm_const as arm,arm64_const as a64
WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.insert(0,str(ROOT/'toolscripts'))
import sdk062_original_v1
sdk062_original_v1.install(WORK/'attempt001/build')
sys.path.insert(0,str(ROOT/'work/native-asset062-sdk'))
from runtime062s import SdkRuntime
from runtime062 import Runtime
class ConfigRuntime(SdkRuntime):
    def __init__(self,target,folder):
        super().__init__(target,folder);self.sdk062_host_artifact_folder=Path(folder);self.config_layout=self.constant('fixture_config_layout062ab',32)
        if self.profilePointerBytes==4 and self.config_layout[:11]!=(4,208,28,40,4,24,52,108,156,164,204):raise ValueError('062ab target config layout mismatch')
        self.owner_layout=self.constant('fixture_owner_layout062ab',13)
        self.timer_layout=self.constant('fixture_timer_layout062aa',29)
        if self.profilePointerBytes==4 and self.owner_layout!=(4,184,88,56,4,8,36,64,76,120,168,172,176):raise ValueError('062ab owner target layout mismatch')
        if target=='original':
            with(folder/'arm/sdk062s.elf').open('rb')as stream:
                rows=[r for r in ELFFile(stream).get_section_by_name('.symtab').iter_symbols()if r.name in ['fixture_timer_clock_read062aa','fixture_owner_dispose062ab']]
            for row in rows:self.original.fixture_ranges.append((row['st_value'],row['st_value']+row['st_size']))

    def initialize(self,address):
        if self.target=='original':return self.original.call(0x471eb0,[address])
        if self.target=='windows':
            f=self.library.sdk_config_initialize062ab;f.argtypes=[ctypes.c_void_p];f.restype=ctypes.c_void_p;return f(address)
        Runtime.call(self,'sdk_config_initialize062ab',[address]);return self.cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm' else a64.UC_ARM64_REG_X0)

    def select(self,component):
        if self.target=='original':return self.original.call(0x4b616c,[component])
        if self.target=='windows':
            f=self.library.sdk_config_select062ab;f.argtypes=[ctypes.c_uint32];f.restype=ctypes.c_void_p;return f(component)
        Runtime.call(self,'sdk_config_select062ab',[component]);return self.cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm' else a64.UC_ARM64_REG_X0)

    def initialize_owner(self,address):
        if self.target=='original':return self.original.call(0x46ad80,[address])
        if self.target=='windows':
            f=self.library.sdk_owner_initialize062ab;f.argtypes=[ctypes.c_void_p];f.restype=ctypes.c_void_p;return f(address)
        Runtime.call(self,'sdk_owner_initialize062ab',[address]);return self.cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm' else a64.UC_ARM64_REG_X0)

    def destroy_owner(self,address):
        if self.target=='original':return self.original.call(0x46af48,[address])
        if self.target=='windows':
            f=self.library.sdk_owner_destroy062ab;f.argtypes=[ctypes.c_void_p];f.restype=ctypes.c_void_p;return f(address)
        Runtime.call(self,'sdk_owner_destroy062ab',[address]);return self.cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm' else a64.UC_ARM64_REG_X0)

    def insert88(self,output,store,parent,pair):
        args=[output,store,0,parent,pair]
        if self.target=='original':
            self.original.cpu.mem_write(sdk062_original_v1.STACK+0x10000,pair.to_bytes(4,'little'));return self.original.call(0x76fd78,args[:4])
        if self.target=='windows':
            f=self.library.sdk_owner_insert88062ab;f.argtypes=[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_uint32,ctypes.c_void_p,ctypes.c_void_p];f.restype=None;f(*args);return
        Runtime.call(self,'sdk_owner_insert88062ab',args)

    def timer_set(self,timer,first,second,replace):
        args=[timer,first,second,replace]
        if self.target=='original':return self.original.call(0x45e504,args)&0xffffffff
        if self.target=='windows':
            f=self.library.sdk_timer_set062aa;f.argtypes=[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_void_p,ctypes.c_uint32];f.restype=ctypes.c_uint32;return f(*args)
        return Runtime.call(self,'sdk_timer_set062aa',args)&0xffffffff

    def release_owner(self,address):
        if self.target=='original':self.original.call(0x46af18,[address]);return
        if self.target=='windows':
            f=self.library.sdk_owner_release062ab;f.argtypes=[ctypes.c_void_p];f.restype=None;f(address);return
        Runtime.call(self,'sdk_owner_release062ab',[address])
