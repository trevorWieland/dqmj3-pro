import ctypes
import struct
from unicorn import UC_HOOK_INTR,arm_const as arm
from runtime062s import SdkRuntime


class ThreadServices:
    def __init__(self,runtime,owner):
        self.runtime=runtime;self.native=runtime if runtime.target=='windows'else SdkRuntime('windows');self.kernel=ctypes.WinDLL('kernel32',use_last_error=True);self.hook=None;self.svc=[]
        for name,args,result in [('GetCurrentThreadId',[],ctypes.c_uint32),('TlsAlloc',[],ctypes.c_uint32),('TlsGetValue',[ctypes.c_uint32],ctypes.c_void_p),('TlsSetValue',[ctypes.c_uint32,ctypes.c_void_p],ctypes.c_int),('TlsFree',[ctypes.c_uint32],ctypes.c_int)]:
            function=getattr(self.kernel,name);function.argtypes=args;function.restype=result
        self.index=self.kernel.TlsAlloc()
        if self.index==0xffffffff or not self.kernel.TlsSetValue(self.index,owner):raise OSError(ctypes.get_last_error())
        native=self.native
        for name,address in [('fixture_sdk_get_thread_id062s',ctypes.cast(self.kernel.GetCurrentThreadId,ctypes.c_void_p).value),('fixture_sdk_tls_get062s',ctypes.cast(self.kernel.TlsGetValue,ctypes.c_void_p).value)]:native.store(native.symbol(name),address.to_bytes(8,'little'))
        native.store(native.symbol('fixture_sdk_tls_index062s'),struct.pack('<I',self.index))
        self.tid=self.kernel.GetCurrentThreadId()
        if self.tid==owner:raise ValueError('062s numeric thread ID accidentally equals TLS pointer')
        native.store(native.symbol('fixture_sdk_id_calls062s'),bytes(4));native.store(native.symbol('fixture_sdk_owner_calls062s'),bytes(4))
        if runtime.target=='original':
            def svc(cpu,interrupt,data):
                if interrupt!=2 or cpu.reg_read(arm.UC_ARM_REG_PC)!=0x169c10 or cpu.reg_read(arm.UC_ARM_REG_R1)!=0xffff8000:raise ValueError('062s unexpected supervisor call')
                function=native.library.fixture_sdk_thread_id062s;function.argtypes=[];function.restype=ctypes.c_uint32;tid=function()
                self.svc.append(dict(number=0x37,handle=cpu.reg_read(arm.UC_ARM_REG_R1),returnedNumericThreadId=tid,status=0))
                cpu.reg_write(arm.UC_ARM_REG_R0,0);cpu.reg_write(arm.UC_ARM_REG_R1,tid)
            self.hook=runtime.cpu.hook_add(UC_HOOK_INTR,svc)
        elif runtime.target!='windows':runtime.store(runtime.symbol('fixture_sdk_numeric_id062s'),struct.pack('<I',self.tid))
    def calls(self):
        r=self.native if self.runtime.target=='original'else self.runtime
        return struct.unpack('<I',r.read(r.symbol('fixture_sdk_id_calls062s'),4))[0]
    def close(self):
        if self.hook is not None:self.runtime.cpu.hook_del(self.hook)
        if not self.kernel.TlsFree(self.index):raise OSError(ctypes.get_last_error())
        if self.native is not self.runtime:self.native.close()
