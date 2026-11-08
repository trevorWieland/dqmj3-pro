import ctypes
import hashlib
import json
import struct
from pathlib import Path
import unicorn
from unicorn import arm64_const as a64
from controller7_measure import ROOT,WORK,pin
from controller7_resource_native_model import model,decode_service
from native_state055_build import load

STACK,STOP=0x6000000,0xfff0000


def windows(seed,skew,fail_at,folder=None):
    folder=Path(folder)if folder else WORK/'resource-native-build-v1'
    kernel=ctypes.WinDLL('kernel32',use_last_error=True)
    allocate=kernel.VirtualAlloc;allocate.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32,ctypes.c_uint32];allocate.restype=ctypes.c_void_p
    release=kernel.VirtualFree;release.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32];release.restype=ctypes.c_int
    allocation=0x120000000;base=allocation+skew
    assert allocate(allocation,0x50000,0x3000,4)==allocation
    try:
        ctypes.memset(allocation,0xcc,0x50000);ctypes.memset(base,seed,0x40000)
        dll=ctypes.CDLL(str(folder/'resource7.dll'))
        function=dll.fixture_resource_run7;function.argtypes=[ctypes.c_void_p,ctypes.c_uint32];function.restype=ctypes.c_int
        status=function(base,fail_at)
        slot=ctypes.addressof(ctypes.c_char.in_dll(dll,'fixture_resource_service7'))
        data=ctypes.string_at(slot,1816);arena=ctypes.string_at(base,0x40000)
        assert ctypes.string_at(allocation,skew)==bytes([0xcc])*skew
        assert ctypes.string_at(base+0x40000,16)==bytes([0xcc])*16
        return arena,data,status,dict(target='real-Windows-x64',base=base,realNativeExecution=True,sourceLoadedWithoutOriginalImage=True,outsideArenaCanariesPreserved=True)
    finally:assert release(allocation,0,0x8000)


def aarch64(seed,skew,fail_at,folder=None):
    folder=Path(folder)if folder else WORK/'resource-native-build-v1'
    blocks,symbols,functions=load(folder/'a64.elf');cpu=unicorn.Uc(unicorn.UC_ARCH_ARM64,unicorn.UC_MODE_ARM)
    mapped=set()
    for address,size,flags,data in blocks:
        for page in range(address&-4096,(address+size+4095)&-4096,4096):
            if page not in mapped:cpu.mem_map(page,4096);mapped.add(page)
        cpu.mem_write(address,data)
    allocation=0x110000000;base=allocation+skew;cpu.mem_map(allocation,0x50000);cpu.mem_write(allocation,bytes([0xcc])*0x50000);cpu.mem_write(base,bytes([seed])*0x40000)
    cpu.mem_map(STACK,0x10000);cpu.mem_map(STOP,4096);sp=STACK+0xe000;canary=bytes(range(16));cpu.mem_write(sp,canary)
    cpu.reg_write(a64.UC_ARM64_REG_SP,sp);cpu.reg_write(a64.UC_ARM64_REG_X30,STOP);cpu.reg_write(a64.UC_ARM64_REG_X0,base);cpu.reg_write(a64.UC_ARM64_REG_X1,fail_at)
    saved=[(getattr(a64,'UC_ARM64_REG_X'+str(i)),0x1234000000000000+i*397)for i in range(19,30)]
    saved += [(getattr(a64,'UC_ARM64_REG_D'+str(i)),0x3ff0000000000000+i*797)for i in range(8,16)]
    for register,value in saved:cpu.reg_write(register,value)
    pcs=set()
    def code(machine,address,size,unused):
        assert size==4 and any(a<=address<b for a,b in functions),hex(address)
        pcs.add(address)
    def write(machine,access,address,size,value,unused):
        assert base<=address and address+size<=base+0x40000 or STACK<=address and address+size<=STACK+0x10000 or address&-4096 in mapped,hex(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)
    cpu.emu_start(symbols['fixture_resource_run7'],STOP,count=1000000)
    assert cpu.reg_read(a64.UC_ARM64_REG_PC)==STOP and cpu.reg_read(a64.UC_ARM64_REG_SP)==sp
    assert all(cpu.reg_read(register)==value for register,value in saved)and bytes(cpu.mem_read(sp,16))==canary
    status=cpu.reg_read(a64.UC_ARM64_REG_X0)&0xffffffff;status=status-(1<<32)if status>>31 else status
    assert bytes(cpu.mem_read(allocation,skew))==bytes([0xcc])*skew and bytes(cpu.mem_read(base+0x40000,16))==bytes([0xcc])*16
    return bytes(cpu.mem_read(base,0x40000)),bytes(cpu.mem_read(symbols['fixture_resource_service7'],1816)),status,dict(target='high-AArch64-object-model',base=base,sourceLoadedWithoutOriginalImage=True,sourcePcs=sorted(pcs),savedAbiSpAndCallerStackPreserved=True,outsideArenaCanariesPreserved=True,androidOsOrDeviceExecution=False)


def run():
    results=[]
    for seed in[0,0xa5,0xff]:
        for skew in[0,16,224]:
            for fail_at in[0,1,2]:
                for target in[windows,aarch64]:
                    actual,service,status,row=target(seed,skew,fail_at)
                    expected,events,summary=model(row['base'],seed,fail_at);observed,actual_summary=decode_service(service)
                    different=[i for i,(a,b)in enumerate(zip(expected,actual))if a!=b]
                    row.update(seed=seed,skew=skew,failAt=fail_at,status=status,arenaSha256=hashlib.sha256(actual).hexdigest(),mismatchOffsets=different,
                               events=observed,expectedEvents=events,serviceSummary=actual_summary,expectedSummary=summary,
                               independentWholeArenaEqual=not different,orderedCallbacksAndIntermediateChildrenEqual=observed==events,
                               actualPointerValuesExceedU32=all(not event['pointer']or event['pointer']>0xffffffff for event in observed))
                    results.append(row)
                    if different or observed!=events or status!=summary['status']or any(actual_summary[k]!=v for k,v in summary.items()if k!='status'):
                        out=WORK/'attempts/resource-native-first-difference.private.json';out.write_text(json.dumps(dict(rows=results,firstByteDifferences=[dict(offset=i,expected=expected[i],actual=actual[i])for i in different[:32]]),indent=2)+'\n');raise AssertionError((row['target'],seed,skew,fail_at,different[:8],observed==events))
    result=dict(status='typed-resource-family-real-Windows-and-high-A64-independent-native-qualification-initial',producer=pin(__file__),model=pin(ROOT/'work/native-state055/controller7_resource_native_model.py'),build=pin(WORK/'resource-native-build-v1/build.json'),cases=results,
                productionAllocatorOrSdkDeallocationClaimed=False,releaseRequestsRetainBackingUntilConstructorReturn=True,terminalThirdAllocationFailureNotRunInWindows=True,wholeOwnerOrControllerInitializationClaimed=False,sourceCreditGranted=0)
    out=WORK/'resource-native-execution-v1.json';out.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(dict(report=pin(out),observations=len(results),allNativeArenasEventsEqual=True)))


if __name__=='__main__':run()
