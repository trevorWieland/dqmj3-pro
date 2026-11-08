import ctypes
import sys
from pathlib import Path
from elftools.elf.elffile import ELFFile
from unicorn import UC_HOOK_CODE,arm_const as arm,arm64_const as a64
WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'toolscripts'))
import sdk062_original_v1
sdk062_original_v1.install(WORK/'attempt001/build')
sys.path.append(str(ROOT/'work/native-asset062-sdk'))
from runtime062s import SdkRuntime
from runtime062 import Runtime
ADDRESS={'sdk_address_list_initialize062x':0x45a21c,'sdk_wide_length062x':0x100b59,'sdk_wide_copy062x':0x1003e1,'sdk_wide_create062x':0x15e6f0,'sdk_wide_destroy062x':0x170f54,'sdk_binding_initialize062x':0x47a4a4,'sdk_binding_start062w':0x479edc}
RANGES=[(0x45a21c,132),(0x100b58,18),(0x1003d8,26),(0x15e6f0,80),(0x170f54,68),(0x47a4a4,80),(0x479edc,276),(0x479ffc,12),(0x47a120,8),(0x47a128,8),(0x47a49c,8),(0x47a008,24),(0x47a028,4),(0x47a02c,236)]
class ConstructionRuntime(SdkRuntime):
    def __init__(self,target,folder=None):
        folder=folder or WORK/'attempt001/build';super().__init__(target,folder);self.construction_layout=self.constant('fixture_construction_layout062x',22)
        expected=(4,8,4,32,12,16,20,24,28,28,4,8,12,16,20,24,28,12,12,4,8,24)if self.profilePointerBytes==4 else(8,16,8,48,16,24,32,36,40,48,8,16,24,32,40,44,56,24,24,8,16,48)
        if self.construction_layout!=expected:raise ValueError('062x named construction layout mismatch '+str(self.construction_layout))
        self.trace=[]
        if target=='original':
            for a,n in RANGES:self.original.ranges.append((a,a+n,a))
            self.original.ranges.sort();self.original.starts=[r[0]for r in self.original.ranges]
            with(folder/'arm/sdk062s.elf').open('rb')as stream:
                rows=[r for r in ELFFile(stream).get_section_by_name('.symtab').iter_symbols()if r.name=='fixture_wide_dispose062x']
            if len(rows)!=1:raise ValueError('062x callback symbol ambiguity')
            callback=rows[0];self.original.fixture_ranges.append((callback['st_value'],callback['st_value']+callback['st_size']))
        if target!='windows':
            entries={(a&~1)if target=='original'else self.symbol(n):n for n,a in ADDRESS.items()}
            entries[self.symbol('fixture_wide_dispose062x')]='fixture_wide_dispose062x'
            entries[0x15ece0 if target=='original'else self.symbol('sdk_allocate062s')]='sdk_allocate062s'
            entries[self.symbol('fixture_sdk_allocate062s')]='fixture_sdk_allocate062s'
            self.cpu.hook_add(UC_HOOK_CODE,lambda cpu,address,size,data:self.trace.append(entries[address])if address in entries else None)
    def bind_wide(self,heap,owner,observer):
        self.bind(heap,owner);p=self.profilePointerBytes;dispose=self.symbol('fixture_wide_dispose062x');self.store(self.symbol('fixture_wide_observer062x'),observer.to_bytes(p,'little'))
        self.store(self.symbol('sdk_environment062s')+p,dispose.to_bytes(p,'little'))
        if self.target=='original':self.store(0x8b6378+0x40,dispose.to_bytes(4,'little'))
    def invoke(self,name,args):
        if self.target=='original':return self.original.call(ADDRESS[name],args)&0xffffffff
        if self.target=='windows':
            f=getattr(self.library,name);f.argtypes=[ctypes.c_void_p]*len(args);f.restype=ctypes.c_uint32 if name in ['sdk_wide_length062x','sdk_binding_start062w']else ctypes.c_void_p;return f(*args)or 0
        Runtime.call(self,name,args);return self.cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm'else a64.UC_ARM64_REG_X0)
