import ctypes
import hashlib
import json
import struct
from pathlib import Path
import unicorn
from unicorn import arm_const as arm,arm64_const as a64
from controller8_measure import ROOT,WORK,pin
from controller8_catalogue_model_v2 import catalogue,registers
from controller8_defaults_model import defaults,groups
from native_state055_build import load

STACK,STOP=0x6000000,0xfff0000


def describe(read,address,width):
    stride=12 if width==4 else 16;rows=[];raw=read(address,stride*297)
    for index in range(297):
        count,kind=struct.unpack_from('<II',raw,index*stride);pointer=int.from_bytes(raw[index*stride+8:index*stride+8+width],'little')
        assert pointer==address+stride*297+index*80
        name=read(pointer,80).split(b'\0',1)[0].decode('ascii')
        rows.append(dict(index=index,count=count,type=kind,name=name,pointer=pointer))
    return rows,raw


def cpu_run(target,seed,skew,folder=None):
    folder=Path(folder)if folder else WORK/'build-v2'
    blocks,symbols,functions=load(folder/(target+'.elf'));native=target=='a64';width=8 if native else 4
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM64 if native else unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM);mapped=set();writable=[]
    for address,size,flags,data in blocks:
        for page in range(address&-4096,(address+size+4095)&-4096,4096):
            if page not in mapped:cpu.mem_map(page,4096);mapped.add(page)
        cpu.mem_write(address,data)
        if flags&2:writable.append((address,address+size))
    allocation=0x110000000 if native else 0x2000000;base=allocation+skew;pointer=base+0x1000
    cpu.mem_map(allocation,0x50000);cpu.mem_write(allocation,bytes([0xcc])*0x50000);cpu.mem_write(base,bytes([seed])*0x40000)
    cpu.mem_map(STACK,0x10000);cpu.mem_map(STOP,4096);sp=STACK+0xe000;canary=bytes(range(16));cpu.mem_write(sp,canary)
    if native:
        spreg,lrreg,pcreg,r0=a64.UC_ARM64_REG_SP,a64.UC_ARM64_REG_X30,a64.UC_ARM64_REG_PC,a64.UC_ARM64_REG_X0
        saved=[(getattr(a64,'UC_ARM64_REG_X'+str(i)),0x1234000000000000+i*397)for i in range(19,30)]+[(getattr(a64,'UC_ARM64_REG_D'+str(i)),0x3ff0000000000000+i*797)for i in range(8,16)]
    else:
        spreg,lrreg,pcreg,r0=arm.UC_ARM_REG_SP,arm.UC_ARM_REG_LR,arm.UC_ARM_REG_PC,arm.UC_ARM_REG_R0
        cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10);cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20);cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000);cpu.reg_write(arm.UC_ARM_REG_FPSCR,0)
        saved=[(getattr(arm,'UC_ARM_REG_R'+str(i)),0x12340000+i*397)for i in range(4,12)]+[(getattr(arm,'UC_ARM_REG_D'+str(i)),0x3ff0000000000000+i*797)for i in range(8,16)]
    cpu.reg_write(spreg,sp);cpu.reg_write(lrreg,STOP);cpu.reg_write(r0,pointer)
    for register,value in saved:cpu.reg_write(register,value)
    pcs=set();owner_size=0x1780 if native else 0x1774
    def code(machine,address,size,unused):
        assert size==4 and any(a<=address<b for a,b in functions),hex(address)
        pcs.add(address)
    def write(machine,access,address,size,value,unused):
        assert pointer<=address and address+size<=pointer+owner_size or STACK<=address and address+size<=STACK+0x10000 or any(a<=address and address+size<=b for a,b in writable),hex(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write);cpu.emu_start(symbols['fixture_cache_run8'],STOP,count=1000000)
    assert cpu.reg_read(pcreg)==STOP and cpu.reg_read(r0)==0 and cpu.reg_read(spreg)==sp
    assert all(cpu.reg_read(register)==value for register,value in saved)and bytes(cpu.mem_read(sp,16))==canary
    read=lambda address,size:bytes(cpu.mem_read(address,size))
    assert read(allocation,skew)==bytes([0xcc])*skew and read(base+0x40000,16)==bytes([0xcc])*16
    descriptions,raw=describe(read,symbols['state_catalogue8'],width)
    return read(base,0x40000),read(symbols['state_apply_globals055'],0x318 if native else 0x314),read(symbols['state_apply_headers055'],756),read(symbols['state_cache_masks8'],72),descriptions,raw,dict(target=target,seed=seed,skew=skew,base=base,object=pointer,objectBytes=owner_size,sourcePcs=sorted(pcs),sourceLoadedWithoutOriginalImage=True,savedAbiSpCallerStackAndCanariesPreserved=True)


def windows(seed,skew,folder=None):
    folder=Path(folder)if folder else WORK/'build-v2'
    kernel=ctypes.WinDLL('kernel32',use_last_error=True);allocate=kernel.VirtualAlloc;allocate.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32,ctypes.c_uint32];allocate.restype=ctypes.c_void_p
    release=kernel.VirtualFree;release.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32];release.restype=ctypes.c_int
    allocation=0x120000000;base=allocation+skew;pointer=base+0x1000;assert allocate(allocation,0x50000,0x3000,4)==allocation
    try:
        ctypes.memset(allocation,0xcc,0x50000);ctypes.memset(base,seed,0x40000);dll=ctypes.CDLL(str(folder/'cache8.dll'))
        module_path=ctypes.create_unicode_buffer(32768);get_path=kernel.GetModuleFileNameW;get_path.argtypes=[ctypes.c_void_p,ctypes.c_wchar_p,ctypes.c_uint32];get_path.restype=ctypes.c_uint32
        assert get_path(dll._handle,module_path,len(module_path))
        assert Path(module_path.value).resolve()==(folder/'cache8.dll').resolve()
        run=dll.fixture_cache_run8;run.argtypes=[ctypes.c_void_p];run.restype=ctypes.c_int;assert run(pointer)==0
        def getter(name):
            function=getattr(dll,name);function.argtypes=[];function.restype=ctypes.c_void_p;return function()
        descriptions,raw=describe(ctypes.string_at,getter('fixture_cache_catalogue8'),8)
        assert ctypes.string_at(allocation,skew)==bytes([0xcc])*skew and ctypes.string_at(base+0x40000,16)==bytes([0xcc])*16
        return ctypes.string_at(base,0x40000),ctypes.string_at(getter('fixture_cache_globals8'),0x318),ctypes.string_at(getter('fixture_cache_registers8'),756),ctypes.string_at(getter('fixture_cache_masks8'),72),descriptions,raw,dict(target='real-Windows-x64',seed=seed,skew=skew,base=base,object=pointer,objectBytes=0x1780,sourceLoadedWithoutOriginalImage=True,realHighAddressNativeExecution=True,outsideArenaCanariesPreserved=True,actualLoadedDllPath=module_path.value)
    finally:assert release(allocation,0,0x8000)


def expected_object(native):
    data=bytearray(0x1780 if native else 0x1774);values,formats=defaults()
    for offset in([0x1014,0x1308]if native else[0x100c,0x1300]):struct.pack_into('<189I',data,offset,*values)
    for offset in([0x15fc,0x16b9]if native else[0x15f4,0x16b1]):data[offset:offset+189]=bytes(formats)
    return bytes(data)


def run():
    rows=[];reference=json.loads((ROOT/'work/native-state055/controller-init-v7/cache-constructor-reference.private.json').read_text())['cases'][0]
    raw_original=struct.pack('<1501I',*reference['objectWords']);assert raw_original==expected_object(False)
    descriptions=catalogue();headers=registers();sets=groups();mask_words=[]
    for indices in[sets[0],sets[1]+sets[2],sets[3]]:
        values=[0]*6
        for index in indices:values[index//32]|=1<<(index&31)
        mask_words+=values
    for seed in[0,0xa5,0xff]:
        for skew in[0,16,224]:
            for target in['arm','windows','a64']:
                arena,globals_bytes,reg_bytes,masks,actual,raw,row=windows(seed,skew)if target=='windows'else cpu_run(target,seed,skew)
                native=target!='arm';width=8 if native else 4;expected=bytearray([seed])*0x40000;obj=expected_object(native);expected[0x1000:0x1000+len(obj)]=obj
                mismatch=[i for i,(a,b)in enumerate(zip(expected,arena))if a!=b]
                logical=[{k:v for k,v in item.items()if k!='pointer'}for item in actual]
                flags=list(struct.unpack_from('<II',globals_bytes));published=int.from_bytes(globals_bytes[8:8+width],'little');stage=struct.unpack_from('<I',globals_bytes,8+width)[0]
                row.update(arenaSha256=hashlib.sha256(arena).hexdigest(),mismatchOffsets=mismatch,rawDescriptorSha256=hashlib.sha256(raw).hexdigest(),actualNamePointerWords=[x['pointer']for x in actual],catalogueLogicalSha256=hashlib.sha256(json.dumps(logical,separators=(',',':')).encode()).hexdigest(),publishedPointer=published,flags=flags,stageMode=stage)
                rows.append(row)
                if mismatch or logical!=descriptions or list(struct.unpack('<189I',reg_bytes))!=headers or list(struct.unpack('<18I',masks))!=mask_words or flags!=[1,1]or published!=row['object']or stage!=0xffffffff:
                    path=WORK/'attempts/first-source-mismatch.private.json';path.parent.mkdir(exist_ok=True);path.write_text(json.dumps(dict(rows=rows,firstByteMismatches=[dict(offset=i,expected=expected[i],actual=arena[i])for i in mismatch[:32]]),indent=2)+'\n');raise AssertionError((target,seed,skew,mismatch[:12],logical==descriptions))
    result=dict(status='complete-cache-constructor-first-three-target-source-comparison',producer=pin(__file__),build=pin(WORK/'build-v1/build.json'),original=pin(ROOT/'work/native-state055/controller-init-v7/cache-constructor-reference.private.json'),cases=rows,
                everyActualCatalogueCountTypeNameIndexHeaderDefaultFormatAndMaskMatches=True,sourceOriginalNamesComparedOnlyAfterExecution=True,executedObjectRegisterCodeAndLiteralBytesNeverNormalized=True,sourceCreditGranted=0,wholeOwnerHardwareGameOrDeviceClaimed=False)
    path=WORK/'execution-v1.json';path.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(dict(report=pin(path),sourceObservations=len(rows),allWholeArenasAndLogicalDataMatch=True)))


if __name__=='__main__':run()
