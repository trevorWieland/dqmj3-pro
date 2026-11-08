import hashlib
import json
import struct
import threading
import time
from unicorn import UC_PROT_READ,UC_PROT_WRITE
from windows_probe062a import WindowsBackend,WORK,SdkRuntime


def program(target,depth=1,folder=None):
    backing=WindowsBackend(folder);rs=[SdkRuntime(target,folder or WORK/'build')for _ in range(2)];ram=rs[0].ram;p=rs[0].profilePointerBytes;fast=0x1000;owners=[ram+0x8000,ram+0x8010];layout=rs[0].constant('arbiter_layout062a',9);image=bytearray(b'\xa7'*0x100000);struct.pack_into('<i',image,fast,1);image[fast+layout[7]:fast+layout[7]+p]=bytes(p);struct.pack_into('<I',image,fast+layout[8],0);backing.runtime.store(backing.base,image)
    for r,owner in zip(rs,owners):
        r.cpu.mem_unmap(r.ram,0x100000);r.cpu.mem_map_ptr(r.ram,0x100000,UC_PROT_READ|UC_PROT_WRITE,backing.base)
        env=b''.join((r.symbol(name)if name else 0).to_bytes(p,'little')for name in [None,None,None,'arbiter_model_owner062a','arbiter_model_wait062a','arbiter_model_signal062a']);r.store(r.symbol('sdk_environment062s'),env+b'\0');r.store(r.symbol('arbiter_model_owner_value062a'),owner.to_bytes(p,'little'))
    def stats(r):return tuple(struct.unpack('<I',r.read(r.symbol('arbiter_api062a')+n,4))[0]for n in layout[3:6])
    entered=threading.Event();release=threading.Event();done=threading.Event();errors=[]
    def worker():
        try:
            rs[1].call('sdk_recursive_acquire062s',[ram+fast]);entered.set()
            if not release.wait(5):raise ValueError('062a CPU model worker gate expired')
            rs[1].call('sdk_recursive_release062s',[ram+fast]);done.set()
        except BaseException as error:errors.append(str(error));done.set()

    for _ in range(depth):rs[0].call('sdk_recursive_acquire062s',[ram+fast])
    thread=threading.Thread(target=worker,daemon=True);thread.start();deadline=time.monotonic()+5
    while stats(rs[1])[0]==0 and time.monotonic()<deadline:time.sleep(.001)
    if entered.is_set()or stats(rs[1])!=(1,0,0):raise ValueError('062a CPU model did not reach real compiled waiting loop '+str(errors))
    expected=bytearray(image);struct.pack_into('<i',expected,fast,-2);expected[fast+layout[7]:fast+layout[7]+p]=owners[0].to_bytes(p,'little');struct.pack_into('<I',expected,fast+layout[8],depth)
    if backing.runtime.read(backing.base,len(image))!=expected:raise ValueError('062a CPU model blocked arena differs')
    for level in range(depth-1,0,-1):
        rs[0].call('sdk_recursive_release062s',[ram+fast]);struct.pack_into('<I',expected,fast+layout[8],level)
        if backing.runtime.read(backing.base,len(image))!=expected or stats(rs[0])!=(0,0,0):raise ValueError('062a CPU model partial release changed base lock')
    rs[0].call('sdk_recursive_release062s',[ram+fast])
    if not entered.wait(5):raise ValueError('062a CPU model waiter did not acquire '+str(errors))
    expected=bytearray(image);struct.pack_into('<i',expected,fast,-1);expected[fast+layout[7]:fast+layout[7]+p]=owners[1].to_bytes(p,'little');struct.pack_into('<I',expected,fast+layout[8],1)
    if backing.runtime.read(backing.base,len(image))!=expected:raise ValueError('062a CPU model transferred arena differs')
    release.set()
    if not done.wait(5):raise ValueError('062a CPU model waiter did not release')
    thread.join(1)
    if errors or backing.runtime.read(backing.base,len(image))!=image or stats(rs[0])!=(0,1,0)or stats(rs[1])!=(1,0,1):raise ValueError('062a CPU model final arena/counters differ '+str(errors))
    result=dict(target=target,initialOwnerDepth=depth,status='compiled-CPU-model-staged-shared-cell-handoff-passed',allMilestoneArenasMatch=True,callerArenaSha256=hashlib.sha256(image).hexdigest(),trueA64OwnerPointersAbove32Bits=owners[0]>0xffffffff if target=='a64'else None,arbitraryConcurrencyClaim=False,nativeAndroidKernelClaim=False)
    for r in rs:r.cpu.mem_unmap(r.ram,0x100000)
    backing.close();return result


if __name__=='__main__':
    rows=[program(t)for t in ['arm','a64']];(WORK/'cpu-probe-attempt001.json').write_text(json.dumps(dict(status='passed',profiles=rows,sourceCreditGranted=0),indent=2)+'\n',encoding='utf-8');print('062a compiled ARM/high-A64 shared-cell handoff models passed',flush=True)
