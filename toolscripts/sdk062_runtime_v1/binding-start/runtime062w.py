import ctypes
import sys
from pathlib import Path
from unicorn import UC_HOOK_CODE,arm_const as arm,arm64_const as a64
WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'toolscripts'))
import sdk062_original_v1
sdk062_original_v1.install(WORK/'attempt001/build')
sys.path.append(str(ROOT/'work/native-asset062-sdk'))
from runtime062s import SdkRuntime
from runtime062 import Runtime
ADDRESS={'sdk_binding_start062w':0x479edc,'sdk_binding_query062w':0x479ffc,'sdk_binding_state062w':0x47a49c,'sdk_binding_start_ready062w':0x47a128,'sdk_binding_poll_ready062w':0x47a120}
RANGES=[(0x479edc,276),(0x479ffc,12),(0x47a120,8),(0x47a128,8),(0x47a49c,8),(0x47a008,24),(0x47a028,4),(0x47a02c,236)]
class BindingStartRuntime(SdkRuntime):
    def __init__(self,target,folder=None):
        folder=folder or WORK/'attempt001/build';super().__init__(target,folder);self.binding_layout=self.constant('fixture_binding_start_layout062w',14)
        expected=(4,28,32,28,20,24,60,20,24,32,36,48,52,56)if self.profilePointerBytes==4 else(8,40,48,40,32,36,120,40,48,64,72,96,104,112)
        if self.binding_layout!=expected:raise ValueError('062w binding/storage/table layout mismatch '+str(self.binding_layout))
        self.original_edges=set();self.previous=None;self.trace=[]
        if target=='original':
            for a,n in RANGES:self.original.ranges.append((a,a+n,a))
            self.original.ranges.sort();self.original.starts=[r[0]for r in self.original.ranges]
            def edge(cpu,address,size,data):
                if self.previous is not None:self.original_edges.add((self.previous,address))
                self.previous=address
            self.cpu.hook_add(UC_HOOK_CODE,edge)
        if target!='windows':
            names={**ADDRESS,'sdk_binding_can_transition062v':0x47a02c,'sdk_binding_notify062v':0x47a028,'sdk_binding_active062v':0x47a008}
            entries={a if target=='original'else self.symbol(n):n for n,a in names.items()}
            def observe(cpu,address,size,data):
                if address not in entries:return
                pointer=cpu.reg_read(arm.UC_ARM_REG_R0 if target in ['original','arm']else a64.UC_ARM64_REG_X0)
                value=int.from_bytes(self.read(pointer+self.binding_layout[4],2),'little')if pointer else None
                count=int.from_bytes(self.read(pointer+self.binding_layout[5],4),'little')if pointer else None
                self.trace.append((entries[address],value,count))
            self.cpu.hook_add(UC_HOOK_CODE,observe)
    def invoke(self,name,args):
        self.trace=[]
        if self.target=='original':self.previous=None;return self.original.call(ADDRESS[name],args)&0xffffffff
        if self.target=='windows':
            f=getattr(self.library,name);f.argtypes=[ctypes.c_void_p];f.restype=ctypes.c_uint32;return f(*args)
        Runtime.call(self,name,args);return self.cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm'else a64.UC_ARM64_REG_X0)
