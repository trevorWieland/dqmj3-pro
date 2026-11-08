import ctypes
import hashlib
import json
import struct
from pathlib import Path
import unicorn
from unicorn import arm_const as arm,arm64_const as a64
from controller7_measure import ROOT,WORK,pin
from native_state055_build import load

STACK,STOP=0x6000000,0xfff0000


def cpu_run(target,seed,folder=None):
    folder=Path(folder)if folder else WORK/'context-build'
    blocks,symbols,functions=load(folder/(target+'.elf'))
    native=target=='a64';base=0x110000000 if native else 0x2000000;size=0x8e8 if native else 0x868;pointer=base+0x1000
    machine=unicorn.Uc(unicorn.UC_ARCH_ARM64 if native else unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
    mapped=set()
    for address,length,flags,data in blocks:
        for page in range(address&-4096,(address+length+4095)&-4096,4096):
            if page not in mapped:machine.mem_map(page,4096);mapped.add(page)
        machine.mem_write(address,data)
    machine.mem_map(base,0x40000);before=bytes([seed])*0x40000;machine.mem_write(base,before)
    machine.mem_map(STACK,0x10000);machine.mem_map(STOP,4096);sp=STACK+0xe000
    canary=bytes(range(16));machine.mem_write(sp,canary)
    if native:
        spreg,lrreg,pcreg,r0=a64.UC_ARM64_REG_SP,a64.UC_ARM64_REG_X30,a64.UC_ARM64_REG_PC,a64.UC_ARM64_REG_X0
        saved=[(getattr(a64,'UC_ARM64_REG_X'+str(i)),0x1234000000000000+i*397)for i in range(19,30)]
        saved += [(getattr(a64,'UC_ARM64_REG_D'+str(i)),0x3ff0000000000000+i*797)for i in range(8,16)]
    else:
        spreg,lrreg,pcreg,r0=arm.UC_ARM_REG_SP,arm.UC_ARM_REG_LR,arm.UC_ARM_REG_PC,arm.UC_ARM_REG_R0
        machine.reg_write(arm.UC_ARM_REG_CPSR,0x10);machine.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20)
        machine.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000);machine.reg_write(arm.UC_ARM_REG_FPSCR,0)
        saved=[(getattr(arm,'UC_ARM_REG_R'+str(i)),0x12340000+i*397)for i in range(4,12)]
        saved += [(getattr(arm,'UC_ARM_REG_D'+str(i)),0x3ff0000000000000+i*797)for i in range(8,16)]
    machine.reg_write(spreg,sp);machine.reg_write(lrreg,STOP);machine.reg_write(r0,pointer)
    for register,value in saved:machine.reg_write(register,value)
    pcs=set()
    def code(cpu,address,length,unused):
        assert length==4 and any(a<=address<b for a,b in functions),hex(address)
        pcs.add(address)
    def write(cpu,access,address,length,value,unused):
        slot=symbols['state_apply_context055'];word=8 if native else 4
        assert pointer<=address and address+length<=pointer+size or STACK<=address and address+length<=STACK+0x10000 or slot<=address and address+length<=slot+word,hex(address)
    machine.hook_add(unicorn.UC_HOOK_CODE,code);machine.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)
    machine.emu_start(symbols['state_construct_context7'],STOP,count=100000)
    assert machine.reg_read(pcreg)==STOP and machine.reg_read(r0)==0 and machine.reg_read(spreg)==sp
    assert all(machine.reg_read(register)==value for register,value in saved)and bytes(machine.mem_read(sp,16))==canary
    after=bytes(machine.mem_read(base,0x40000));slot=bytes(machine.mem_read(symbols['state_apply_context055'],8 if native else 4))
    published=int.from_bytes(slot,'little')
    return after,dict(target=target,seed=seed,returned=True,status=0,object=pointer,objectBytes=size,arena=base,
                      arenaSha256=hashlib.sha256(after).hexdigest(),sourceVisitedPcs=sorted(pcs),sourceLoadedWithoutOriginalImage=True,
                      publishedPointer=int.from_bytes(slot,'little'),savedAbiAndCallerStackPreserved=True),before


def windows(seed,folder=None):
    folder=Path(folder)if folder else WORK/'context-build'
    kernel=ctypes.WinDLL('kernel32',use_last_error=True)
    allocate=kernel.VirtualAlloc;allocate.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32,ctypes.c_uint32];allocate.restype=ctypes.c_void_p
    release=kernel.VirtualFree;release.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32];release.restype=ctypes.c_int
    base=0x120000000;pointer=base+0x1000;size=0x8e8
    address=allocate(base,0x40000,0x3000,4);assert address==base,(address,ctypes.get_last_error())
    try:
        ctypes.memset(base,seed,0x40000);before=bytes([seed])*0x40000
        dll=ctypes.CDLL(str(folder/'context7.dll'))
        function=dll.state_construct_context7;function.argtypes=[ctypes.c_void_p];function.restype=ctypes.c_int
        status=function(pointer);assert status==0
        published=ctypes.c_void_p.in_dll(dll,'state_apply_context055').value
        after=ctypes.string_at(base,0x40000)
        return after,dict(target='real-windows-x64',seed=seed,returned=True,status=status,object=pointer,objectBytes=size,arena=base,
                          arenaSha256=hashlib.sha256(after).hexdigest(),publishedPointer=published,realHighAddressNativeExecution=True,sourceLoadedWithoutOriginalImage=True),before
    finally:assert release(base,0,0x8000)


def run():
    original=json.loads((WORK/'context-constructor-reference.private.json').read_text());results=[]
    for seed in[0,0xa5,0xff]:
        reference=next(row for row in original['cases']if row['seed']==seed)
        raw=struct.pack('<538I',*reference['contextWords'])
        for target in['arm','windows','a64']:
            actual,row,before=windows(seed)if target=='windows'else cpu_run(target,seed)
            expected=bytearray(before);size=row['objectBytes'];expected[0x1000:0x1000+size]=raw+bytes(size-len(raw))
            different=[i for i,(a,b)in enumerate(zip(expected,actual))if a!=b]
            assert row['publishedPointer']==row['object']
            row.update(originalReferenceContextSha256=reference['contextSha256'],mismatchOffsets=different,fullArenaMatchesIndependentReferenceView=not different,
                       comparisonExpectationSuppliedToExecutedSource=False,nativePointerTailExpectedNull=True,gameDeviceOrSdkSourceClaimed=False)
            results.append(row)
            if different:
                out=WORK/'attempts/context-source-first-difference.private.json';out.write_text(json.dumps(dict(rows=results,firstDifferences=[dict(offset=i,expected=expected[i],actual=actual[i])for i in different[:32]]),indent=2)+'\n')
                raise AssertionError((target,seed,different[:12]))
    result=dict(status='initial-ordinary-context-constructor-original-arm-real-windows-high-a64-comparison',producer=pin(__file__),source=pin(WORK/'source/context7.c'),header=pin(WORK/'source/context7.h'),build=pin(WORK/'context-build/build.json'),original=pin(WORK/'context-constructor-reference.private.json'),cases=results,
                sourceCreditGranted=0,fullOwnerInitializationOrControllerCompositionClaimed=False,androidModelOnly=True,physicalAndroidExecution=False)
    out=WORK/'context-source-execution-v1.json';out.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(dict(report=pin(out),sourceObservations=len(results),allWholeArenaEqual=True)))


if __name__=='__main__':run()
