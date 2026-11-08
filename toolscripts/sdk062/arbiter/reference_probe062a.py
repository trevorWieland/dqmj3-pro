import hashlib
import json
import struct
import threading
import time
from unicorn import UC_HOOK_INTR,UC_HOOK_CODE,UC_PROT_READ,UC_PROT_WRITE,arm_const as arm
from windows_probe062a import WindowsBackend,WORK,ROOT,SdkRuntime


class ExclusiveTrace:
    def __init__(self):self.active=None;self.lock=threading.Lock();self.events=[]
    def observe(self,role,address):
        starts={0x14ddec,0x14de24,0x14de50,0x14dea0,0x13c494};ends={0x14de00,0x14de10,0x14de38,0x14de4c,0x14de64,0x14de78,0x14deb4,0x14dec8,0x13c4a0}
        if address not in starts|ends:return
        with self.lock:
            if address in starts:
                if self.active is not None:raise ValueError('062a overlapping independent-CPU exclusive windows are outside qualified reference model')
                self.active=role;self.events.append(dict(role=role,kind='begin',pc=address))
            elif self.active==role:self.active=None;self.events.append(dict(role=role,kind='end',pc=address))


def main(depth=1,output=None,folder=None):
    backend=WindowsBackend(folder);runtimes=[SdkRuntime('original',folder or WORK/'build')for _ in range(2)];base=backend.base;ram=runtimes[0].ram;fast=0x1000;owners=[ram+0x8000,ram+0x8010];token=0x65012201;image=bytearray(b'\xa7'*0x100000);backend.runtime.store(base,image);svc=[];trace=ExclusiveTrace();hooks=[]
    code=(ROOT/'generated/update-content0/code.bin').read_bytes();arbiter_globals=[struct.unpack_from('<I',code,a-0x100000)[0]for a in [0x14decc,0x13c4dc]]
    if len(set(arbiter_globals))!=1:raise ValueError('062a original wait/signal use different arbitration globals')
    for index,r in enumerate(runtimes):
        r.cpu.mem_unmap(r.ram,0x100000);r.cpu.mem_map_ptr(r.ram,0x100000,UC_PROT_READ|UC_PROT_WRITE,base);r.cpu.reg_write(arm.UC_ARM_REG_C13_C0_3,owners[index]);r.store(arbiter_globals[0],struct.pack('<I',token))
        def interrupt(cpu,number,data,role=index):
            values=[cpu.reg_read(getattr(arm,'UC_ARM_REG_R'+str(i)))for i in range(6)]
            if number!=2 or cpu.reg_read(arm.UC_ARM_REG_PC)!=0x147e64 or values[0]!=token or values[1]!=ram+fast or values[4:]!=[0,0]:raise ValueError('062a original SVC22 ABI escaped owned arbitration domain')
            kind,value=values[2:4]
            if (kind,value)not in [(1,0),(0,1)]:raise ValueError('062a unsupported original arbitration action')
            svc.append(dict(role=role,type=kind,value=value,targetAddress=ram+fast,hostAlias=base+fast,timeoutBits=[0,0]))
            if kind==1:backend.wait(base+fast)
            else:backend.signal(base+fast)
            cpu.reg_write(arm.UC_ARM_REG_R0,0)
        hooks.append((r.cpu,r.cpu.hook_add(UC_HOOK_INTR,interrupt)))
        hooks.append((r.cpu,r.cpu.hook_add(UC_HOOK_CODE,lambda cpu,a,z,data,role=index:trace.observe(role,a))))
    import inventory
    mapped=inventory.code_layout((ROOT/'generated/update-content0/exheader.bin').read_bytes());segment=next(x for x in mapped['segments']if x['name']=='data');span=(segment['address'],segment['initializedBytes']+mapped['bssBytes']);module_before=[r.read(*span)for r in runtimes]
    runtimes[0].original.call(0x13c500,[ram+fast]);struct.pack_into('<iII',image,fast,1,0,0)
    if backend.runtime.read(base,len(image))!=image:raise ValueError('062a actual original fast-mutex constructor arena differs')
    entered=threading.Event();release=threading.Event();done=threading.Event();errors=[]
    def worker():
        try:
            runtimes[1].original.call(0x170704,[ram+fast]);entered.set()
            if not release.wait(5):raise ValueError('062a reference waiter critical-section gate expired')
            runtimes[1].original.call(0x1707b4,[ram+fast]);done.set()
        except BaseException as error:errors.append(str(error));done.set()

    for _ in range(depth):runtimes[0].original.call(0x170704,[ram+fast])
    thread=threading.Thread(target=worker,daemon=True);thread.start();deadline=time.monotonic()+5
    while backend.stats()[0]==0 and time.monotonic()<deadline:time.sleep(.001)
    time.sleep(.02)
    if entered.is_set()or backend.stats()!=(1,0,0):raise ValueError('062a actual original waiter did not block in real owned Windows primitive')
    expected=bytearray(image);struct.pack_into('<iII',expected,fast,-2,owners[0],depth)
    if backend.runtime.read(base,len(image))!=expected:raise ValueError('062a original blocked arena differs')
    for level in range(depth-1,0,-1):
        runtimes[0].original.call(0x1707b4,[ram+fast]);struct.pack_into('<I',expected,fast+8,level)
        if backend.runtime.read(base,len(image))!=expected or backend.stats()!=(1,0,0):raise ValueError('062a original partial recursive release woke waiter')
    runtimes[0].original.call(0x1707b4,[ram+fast])
    if not entered.wait(5):raise ValueError('062a original wake did not transfer ownership')
    expected=bytearray(image);struct.pack_into('<iII',expected,fast,-1,owners[1],1)
    if backend.runtime.read(base,len(image))!=expected:raise ValueError('062a original transferred arena differs')
    release.set()
    if not done.wait(5):raise ValueError('062a original waiter failed to return release')
    thread.join(1)
    if errors or backend.runtime.read(base,len(image))!=image or backend.stats()!=(1,1,1)or trace.active is not None:raise ValueError('062a original final arena/primitive status/exclusive trace differs '+str(errors))
    if any(r.read(*span)!=before for r,before in zip(runtimes,module_before)):raise ValueError('062a original writable module globals changed')
    coverage=set().union(*(r.original.coverage for r in runtimes));ranges=[(0x14ddec,0x14decc),(0x13c48c,0x13c4dc),(0x147e54,0x147e6c),(0x170704,0x17073c),(0x1707b4,0x1707d4)]
    counts=[dict(entry=a,instructions=(z-a)//4,observed=len(coverage&set(range(a,z,4))),unvisited=sorted(set(range(a,z,4))-coverage))for a,z in ranges]
    report=dict(originalWritableModuleHashes=[hashlib.sha256(x).hexdigest()for x in module_before],allOriginalWritableGlobalsPreserved=True,instructionCoverage=counts,initialOwnerDepth=depth,status='genuine-original-SDK-contended-mutex-through-real-Windows-address-wait-passed',constructor=0x13c500,acquire=0x170704,release=0x1707b4,executedHelpers=[0x14ddec,0x13c48c,0x147e54],actualSharedBackingAddress=base,targetCellAddress=ram+fast,ownedDomainToken=token,svc22=svc,exclusiveIntervals=trace.events,exclusiveWindowsOverlap=False,allMilestoneArenasMatch=True,finalArenaSha256=hashlib.sha256(image).hexdigest(),cellWrittenOnlyByOriginalInstructions=True,sourceSdkEndpointsSubstituted=False,arbitraryConcurrencyOr3dsKernelClaim=False,sourceCreditGranted=0)
    (output or WORK/'reference-probe-attempt001.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    for cpu,hook in hooks:cpu.hook_del(hook)
    for r in runtimes:r.cpu.mem_unmap(r.ram,0x100000)
    backend.close();print('062a genuine original contended SDK depth',depth,'passed; no memory patches or overlapping exclusive windows',flush=True);return report


if __name__=='__main__':main()
