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
from kernel062s import ThreadServices
ADDRESS={'sdk_map_select062y':0x1777e0,'sdk_thread_index062y':0x1775e8}
class ThreadMapRuntime(SdkRuntime):
    def __init__(self,target,folder=None,host_folder=None):
        folder=Path(folder or WORK/'attempt001/build');super().__init__(target,folder);self.sdk062_host_artifact_folder=Path(host_folder or folder);self.insertion_layout=self.constant('fixture_thread_map_layout062y',2)
        if self.insertion_layout!=((8,4)if self.profilePointerBytes==4 else(16,8)):raise ValueError('062y insertion output layout mismatch')
    def invoke(self,name,args):
        if self.target=='original':return self.original.call(ADDRESS[name],args)&0xffffffff
        if self.target=='windows':
            function=getattr(self.library,name);function.argtypes=[ctypes.c_void_p]*len(args);function.restype=ctypes.c_void_p;return function(*args)or 0
        Runtime.call(self,name,args);return self.cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm'else a64.UC_ARM64_REG_X0)
