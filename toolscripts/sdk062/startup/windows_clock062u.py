import ctypes
import struct
from clock_runtime062u import ClockRuntime,WORK
class WindowsClock:
    def __init__(self,runtime=None,folder=None):
        self.r=runtime or ClockRuntime('windows',folder);self.owned=runtime is None;self.kernel=ctypes.WinDLL('kernel32',use_last_error=True)
        for name in ['QueryPerformanceCounter','QueryPerformanceFrequency']:
            f=getattr(self.kernel,name);f.argtypes=[ctypes.POINTER(ctypes.c_longlong)];f.restype=ctypes.c_int
        address=self.r.symbol('sdk_windows_clock062u');p=8
        self.r.store(address,ctypes.cast(self.kernel.QueryPerformanceCounter,ctypes.c_void_p).value.to_bytes(p,'little')+ctypes.cast(self.kernel.QueryPerformanceFrequency,ctypes.c_void_p).value.to_bytes(p,'little'))
        self.r.store(address+self.r.clock_layout[19],bytes(4));self.calls=[]
    def read(self):
        f=self.r.library.sdk_windows_ticks062u;f.argtypes=[];f.restype=ctypes.c_uint64;value=f();base=self.r.symbol('sdk_windows_clock062u');layout=self.r.clock_layout
        counter=struct.unpack('<Q',self.r.read(base+layout[20],8))[0];frequency=struct.unpack('<Q',self.r.read(base+layout[21],8))[0];expected=((counter//frequency)*268111856+(counter%frequency)*268111856//frequency)&0xffffffffffffffff
        if expected!=value:raise ValueError('062u actual Windows QPC frequency conversion differs independent arithmetic')
        self.calls.append(dict(counter=counter,frequency=frequency,targetTicks=value,readFromActualWindows=True));return value
    def close(self):
        if self.owned:self.r.close()
