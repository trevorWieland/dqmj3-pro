import ctypes
import sys
from pathlib import Path
from unicorn import arm_const as arm,arm64_const as a64
WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'toolscripts'))
import sdk062_original_v1
sdk062_original_v1.install(WORK/'attempt001/build')
sys.path.append(str(ROOT/'work/native-asset062-sdk'))
from runtime062s import SdkRuntime
from runtime062 import Runtime
class EraseRuntime(SdkRuntime):
    def __init__(self,target,folder=None):
        super().__init__(target,folder or WORK/'attempt001/build');layout=self.constant('fixture_tree_prefix_layout062z',14);p=self.profilePointerBytes
        if layout!=(p,p*4,p,p*2,p*3,p,p*2,p*3,p,p*4,p*5,p,p*4,p*5):raise ValueError('062z exact compatible prefix layout mismatch')
    def erase(self,args):
        if self.target=='original':return self.original.call(0x764e48,args)&0xffffffff
        if self.target=='windows':
            f=self.library.sdk_tree_erase062z;f.argtypes=[ctypes.c_void_p]*3;f.restype=ctypes.c_void_p;return f(*args)or 0
        Runtime.call(self,'sdk_tree_erase062z',args);return self.cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm'else a64.UC_ARM64_REG_X0)
