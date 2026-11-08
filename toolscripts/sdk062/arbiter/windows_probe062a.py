import ctypes
import json
import struct
import sys
import threading
import time
from pathlib import Path

WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.insert(0,str(ROOT/'work/native-asset062-sdk'))
from runtime062s import SdkRuntime


class WindowsBackend:
    def __init__(self,folder=None):
        self.runtime=SdkRuntime('windows',folder or WORK/'build');self.kernel=ctypes.WinDLL('kernel32',use_last_error=True);self.sync=ctypes.WinDLL('api-ms-win-core-synch-l1-2-0.dll',use_last_error=True)
        for name,args,result in [('VirtualAlloc',[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32,ctypes.c_uint32],ctypes.c_void_p),('VirtualFree',[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32],ctypes.c_int),('TlsAlloc',[],ctypes.c_uint32),('TlsSetValue',[ctypes.c_uint32,ctypes.c_void_p],ctypes.c_int),('TlsFree',[ctypes.c_uint32],ctypes.c_int),('WaitOnAddress',[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32],ctypes.c_int),('WakeByAddressSingle',[ctypes.c_void_p],None),('TlsGetValue',[ctypes.c_uint32],ctypes.c_void_p)]:
            function=getattr(self.sync if name in ['WaitOnAddress','WakeByAddressSingle']else self.kernel,name);function.argtypes=args;function.restype=result
        self.index=self.kernel.TlsAlloc();self.base=self.kernel.VirtualAlloc(None,0x100000,0x3000,4)
        if self.index==0xffffffff or not self.base or self.base%4096:raise OSError(ctypes.get_last_error())
        api=self.runtime.symbol('arbiter_api062a');raw=b''.join(ctypes.cast(getattr(self.sync if n in ['WaitOnAddress','WakeByAddressSingle']else self.kernel,n),ctypes.c_void_p).value.to_bytes(8,'little')for n in ['WaitOnAddress','WakeByAddressSingle','TlsGetValue'])+struct.pack('<IIII',self.index,0,0,0);self.runtime.store(api,raw)
        env=self.runtime.symbol('sdk_environment062s');self.runtime.store(env,b''.join((self.runtime.symbol(n)if n else 0).to_bytes(8,'little')for n in [None,None,None,'arbiter_owner062a','arbiter_wait062a','arbiter_signal062a'])+b'\0')
        self.layout=self.runtime.constant('arbiter_layout062a',9)
        if self.layout!=(8,40,24,28,32,36,24,8,16):raise ValueError('062a native primitive ABI layout differs')
    def owner(self,pointer):
        if not self.kernel.TlsSetValue(self.index,pointer):raise OSError(ctypes.get_last_error())
    def stats(self):return struct.unpack('<III',self.runtime.read(self.runtime.symbol('arbiter_api062a')+28,12))
    def wait(self,pointer):
        function=self.runtime.library.arbiter_wait062a;function.argtypes=[ctypes.c_void_p];function.restype=None;function(pointer)
    def signal(self,pointer):
        function=self.runtime.library.arbiter_signal062a;function.argtypes=[ctypes.c_void_p,ctypes.c_uint32];function.restype=None;function(pointer,1)
    def close(self):
        if not self.kernel.TlsFree(self.index)or not self.kernel.VirtualFree(self.base,0,0x8000):raise OSError(ctypes.get_last_error())
        self.runtime.close()


def main(depth=1,output=None,folder=None):
    backend=WindowsBackend(folder);r=backend.runtime;base=backend.base;fast=base+0x1000;owner=base+0x8000;other=base+0x8010;image=bytearray(b'\xa7'*0x100000);struct.pack_into('<i',image,0x1000,1);image[0x1008:0x1010]=bytes(8);struct.pack_into('<I',image,0x1010,0);r.store(base,image);backend.owner(owner)
    entered=threading.Event();release=threading.Event();done=threading.Event();errors=[]
    def worker():
        try:
            backend.owner(other);r.call('sdk_recursive_acquire062s',[fast]);entered.set()
            if not release.wait(5):raise ValueError('062a worker critical-section release gate expired')
            r.call('sdk_recursive_release062s',[fast]);done.set()
        except BaseException as error:errors.append(str(error));done.set()

    for _ in range(depth):r.call('sdk_recursive_acquire062s',[fast])
    worker_thread=threading.Thread(target=worker,daemon=True);worker_thread.start();limit=time.monotonic()+5
    while backend.stats()[0]==0 and time.monotonic()<limit:time.sleep(.001)
    time.sleep(.02)
    if backend.stats()!=(1,0,0)or entered.is_set():raise ValueError('062a real native wait did not remain blocked while another owner held the mutex')
    expected=bytearray(image);struct.pack_into('<i',expected,0x1000,-2);expected[0x1008:0x1010]=owner.to_bytes(8,'little');struct.pack_into('<I',expected,0x1010,depth)
    if r.read(base,len(image))!=expected:raise ValueError('062a blocked mutex arena differs from independent state')
    for level in range(depth-1,0,-1):
        r.call('sdk_recursive_release062s',[fast]);struct.pack_into('<I',expected,0x1010,level)
        if r.read(base,len(image))!=expected or backend.stats()!=(1,0,0):raise ValueError('062a recursive partial release woke a waiter or changed base lock')
    r.call('sdk_recursive_release062s',[fast])
    if not entered.wait(5):raise ValueError('062a actual wake did not allow waiter to acquire')
    expected=bytearray(image);struct.pack_into('<i',expected,0x1000,-1);expected[0x1008:0x1010]=other.to_bytes(8,'little');struct.pack_into('<I',expected,0x1010,1)
    if r.read(base,len(image))!=expected:raise ValueError('062a transferred owner arena differs')
    release.set()
    if not done.wait(5):raise ValueError('062a waiter failed to release')
    worker_thread.join(1)
    if errors or r.read(base,len(image))!=image or backend.stats()!=(1,1,1):raise ValueError('062a native contended mutex final arena/kernel call counts differ '+str(errors))
    result=dict(initialOwnerDepth=depth,status='actual-Windows-source-recursive-mutex-real-address-wait-handoff-passed',callerArenaBytes=len(image),actualKernelWaitCalls=1,actualKernelWakeSingleCalls=1,actualWaitReturns=1,trueNativeOwnerPointersAbove32Bits=owner>0xffffffff and other>0xffffffff,allMilestoneArenasMatch=True,cellWrittenOnlyByCompiledSdkAtomicCode=True,sourceCreditGranted=0)
    (output or WORK/'windows-probe-attempt001.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');backend.close();print('062a real Windows contended SDK depth',depth,'passed',flush=True);return result


if __name__=='__main__':main()
