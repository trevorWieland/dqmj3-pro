import ctypes
import hashlib
import json
import struct
from pathlib import Path
import unicorn
from unicorn import arm_const as arm,arm64_const as a64
from controller6_measure import WORK,pin
from controller6_fixture import ARENA,CONTEXT,SELECTED,SLOT,INPUT,META,VERTEX,GEOMETRY,fixture
from controller6_reference import execute as original,STACK,STOP
from native_state055_build import load
from native_wave014_oracle import original_image


def prepared(case,base):
    target=fixture(case).data
    if base==ARENA:return bytearray(target)
    data=bytearray(target)
    def word(offset,value):struct.pack_into('<I',data,offset,value)
    def pointer(offset,value):struct.pack_into('<Q',data,offset,value)
    relative=lambda address:address-ARENA
    selected=relative(SELECTED)
    tail=bytes(target[selected+0xe84:selected+0xf1c])
    data[selected+0xe84:selected+0x1060]=bytes(0x1060-0xe84)
    data[selected+0xfb0:selected+0x1048]=tail
    for offset in [0x1c,0x2c,0x1c0]:word(selected+offset,0)
    data[relative(SLOT)+16:relative(SLOT)+0x1308]=target[relative(SLOT)+8:relative(SLOT)+0x1300]
    pointer(relative(SLOT),base+selected);pointer(relative(SLOT)+8,0)
    pointer(selected+0x1048,base+relative(META))
    for index,address in enumerate([VERTEX,GEOMETRY]):
        pointer(selected+0x1050+index*8,base+relative(address))
        pointer(selected+0xea0+index*8,base+relative(address))
    return data


def independent(case,before):
    data=bytearray(before)
    if case['location']==0xffffffff or not case.get('count',1):return data
    packing=case.get('packing',0);dimension=case.get('components',4);count=case.get('count',1)
    matrix=case.get('matrix',0);transpose=case.get('transpose',0)
    row_count=1+((packing>>13)&3) if matrix else 1
    first=(case['location']&127)*row_count+(packing>>24)
    span=(row_count*count)&0xffffffff
    vectors=list(range(first,first+span))if span<0x80000000 else[]
    stage=(packing>>10)&1
    source=case.get('input_words',[0x3f800000,0x40000000,0x40400000,0x40800000]*16)
    destination=(GEOMETRY if stage else VERTEX)-ARENA
    coordinates=list(range(3-((packing>>11)&3),3-((packing>>11)&3)-dimension,-1))if dimension<0x80000000 else[]
    width=dimension*dimension if matrix else dimension
    elements=0 if dimension==0 or dimension>=0x80000000 or count>=0x80000000 else count
    for element in range(elements):
        values=source[element*width:(element+1)*width]
        grid=[values[start:start+dimension] for start in range(0,len(values),dimension)]
        if matrix and transpose:grid=list(zip(*grid))
        for row,values in enumerate(grid):
            vector=vectors[element*row_count+row]
            for component,value in zip(coordinates,values):struct.pack_into('<I',data,destination+vector*16+component*4,value)
    flags=struct.unpack_from('<I',data,CONTEXT-ARENA)[0]
    struct.pack_into('<I',data,CONTEXT-ARENA,flags|0x10000)
    dirty=SELECTED-ARENA+(0x348 if stage else 0x1b4)
    masks=[0,0,0]
    for vector in vectors:masks[vector//32]|=1<<(vector%32)
    for index,mask in enumerate(masks):
        old=struct.unpack_from('<I',data,dirty+index*4)[0]
        struct.pack_into('<I',data,dirty+index*4,old|mask)
    return data


def machine(case,native,entry='state_dispatch_uniform6',model=independent,strict=True,stage=None):
    base=0x110000000 if native else ARENA
    family=a64 if native else arm;prefix='UC_ARM64_REG_' if native else 'UC_ARM_REG_'
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM64 if native else unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
    work=Path(stage)if stage is not None else WORK
    segments,symbols,functions=load(work/'uniform-build'/('a64.elf' if native else 'arm.elf'))
    pages=set()
    for address,size,flags,data in segments:
        for page in range(address&-4096,(address+size+4095)&-4096,4096):
            if page not in pages:cpu.mem_map(page,4096);pages.add(page)
        if data:cpu.mem_write(address,data)
    cpu.mem_map(base,0x40000);cpu.mem_map(STACK,0x10000);cpu.mem_map(STOP,4096)
    before=prepared(case,base);cpu.mem_write(base,bytes(before))
    def pointer(address,value):cpu.mem_write(address,struct.pack('<Q' if native else '<I',value))
    pointer(symbols['state_apply_context055'],0 if case.get('null_globals')else base+CONTEXT-ARENA)
    pointer(symbols['state_apply_globals055']+8,0 if case.get('null_globals')else base+SLOT-ARENA)
    sp=STACK+0xe000
    args=[case['location'],0 if case.get('null_input')else base+INPUT-ARENA,case.get('components',4),case.get('count',1),case.get('transpose',0),case.get('matrix',0)]
    if not native:
        cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10)
        cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20);cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000)
        cpu.reg_write(arm.UC_ARM_REG_FPSCR,0)
        cpu.mem_write(sp,struct.pack('<IIII',*args[4:],0x12345678,0x87654321))
    else:
        cpu.reg_write(a64.UC_ARM64_REG_CPACR_EL1,3<<20)
        cpu.reg_write(a64.UC_ARM64_REG_FPCR,0);cpu.reg_write(a64.UC_ARM64_REG_FPSR,0)
    cpu.reg_write(getattr(family,prefix+'SP'),sp)
    cpu.reg_write(getattr(family,prefix+('X30' if native else 'LR')),STOP)
    for index,value in enumerate(args if native else args[:4]):cpu.reg_write(getattr(family,prefix+('X' if native else 'R')+str(index)),value)
    saved=[(getattr(family,prefix+('X' if native else 'R')+str(index)),0x12340000+index*397)for index in (range(19,30)if native else range(4,12))]
    saved += [(getattr(family,prefix+'D'+str(index)),0x3ff0000000000000+index*797)for index in range(8,16)]
    for register,value in saved:cpu.reg_write(register,value)
    pcs=set()
    def code(machine,address,size,unused):
        assert size==4 and any(start<=address<end for start,end in functions),hex(address)
        pcs.add(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE,code)
    def write(machine,access,address,size,value,unused):
        assert base<=address and address+size<=base+len(before) or STACK<=address and address+size<=STACK+0x10000,hex(address)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)
    cpu.emu_start(symbols[entry],STOP,count=1000000)
    component_return=cpu.reg_read(getattr(family,prefix+('X0' if native else 'R0')))
    if entry=='state_dispatch_property_component6':assert component_return==1
    assert cpu.reg_read(getattr(family,prefix+'PC'))==STOP and cpu.reg_read(getattr(family,prefix+'SP'))==sp
    assert all(cpu.reg_read(register)==value for register,value in saved)
    if not native:assert bytes(cpu.mem_read(sp,16))==struct.pack('<IIII',*args[4:],0x12345678,0x87654321)
    after=bytes(cpu.mem_read(base,len(before)));expected=model(dict(case,_native_model=native),before)
    differences=[dict(offset=index,actual=a,expected=b)for index,(a,b)in enumerate(zip(after,expected))if a!=b]
    if strict:assert not differences,case['label']
    return dict(finalArenaSha256=hashlib.sha256(after).hexdigest(),independentModelEqual=not differences,
                savedIntegerVfpSpAndArgumentsPreserved=True,sourceMapsOriginalExecutable=False,compiledSourcePcs=sorted(pcs),arenaBase=base,
                actualFloatingStatus=cpu.reg_read(a64.UC_ARM64_REG_FPSR if native else arm.UC_ARM_REG_FPSCR),floatingExceptionStatusEqualityClaimed=False,
                independentModelDifferences=differences[:32])


class Windows:
    def __init__(self,entry='state_dispatch_uniform6',model=independent,stage=None):
        work=Path(stage)if stage is not None else WORK
        self.dll=ctypes.CDLL(str(work/'uniform-build/uniform6.dll'))
        self.call=getattr(self.dll,entry);self.model=model
        self.call.argtypes=[ctypes.c_uint32,ctypes.c_void_p,*[ctypes.c_uint32]*4];self.call.restype=ctypes.c_bool if entry=='state_dispatch_property_component6' else None
        self.context=ctypes.c_void_p.in_dll(self.dll,'state_apply_context055')
        self.float_state=self.dll.state_dispatch_host_fp6;self.float_state.restype=ctypes.c_uint32
        self.control=(ctypes.c_uint8*0x318).in_dll(self.dll,'state_apply_globals055')
        self.layout=self.dll.state_dispatch_layout6;self.layout.restype=ctypes.POINTER(ctypes.c_uint32)
        assert [self.layout()[index]for index in range(10)]==[0x1060,0xfb0,0x8e8,0x1308,0x318,0xfb0,0x1048,0x1050,0xea0,0x1014]
        self.kernel=ctypes.WinDLL('kernel32',use_last_error=True)
        self.kernel.VirtualAlloc.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_ulong,ctypes.c_ulong];self.kernel.VirtualAlloc.restype=ctypes.c_void_p
        self.kernel.VirtualFree.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_ulong];self.kernel.VirtualFree.restype=ctypes.c_int
        self.base=self.kernel.VirtualAlloc(0x120000000,0x40000,0x3000,4);assert self.base==0x120000000

    def execute(self,case,strict=True):
        before=prepared(case,self.base);ctypes.memmove(self.base,bytes(before),len(before))
        self.context.value=0 if case.get('null_globals')else self.base+CONTEXT-ARENA
        ctypes.c_void_p.from_address(ctypes.addressof(self.control)+8).value=0 if case.get('null_globals')else self.base+SLOT-ARENA
        before_fp=self.float_state();assert before_fp&0xe040==0 and before_fp&0x1f80==0x1f80
        before_control=bytes(self.control)
        returned=self.call(case['location'],0 if case.get('null_input')else self.base+INPUT-ARENA,case.get('components',4),case.get('count',1),case.get('transpose',0),case.get('matrix',0))
        if self.call.restype is ctypes.c_bool:assert returned
        after_fp=self.float_state();assert before_fp&0xe040==after_fp&0xe040
        assert bytes(self.control)==before_control
        after=ctypes.string_at(self.base,len(before));expected=self.model(dict(case,_native_model=True),before)
        differences=[dict(offset=index,actual=a,expected=b)for index,(a,b)in enumerate(zip(after,expected))if a!=b]
        if strict:assert not differences,case['label']
        return dict(finalArenaSha256=hashlib.sha256(after).hexdigest(),independentModelEqual=not differences,arenaBase=self.base,actualWindowsExecution=True,
                    independentModelDifferences=differences[:32],
                    actualMxcsrBefore=before_fp,actualMxcsrAfter=after_fp,floatingExceptionStatusEqualityClaimed=False)

    def close(self):assert self.kernel.VirtualFree(self.base,0,0x8000)


def cases():
    yield dict(label='sentinel',location=0xffffffff,count=1)
    yield dict(label='zero',location=0,count=0)
    bits=[0,0x80000000,0x7f800000,0xff800000,0x7fc12345,0x7f812345,1,0x807fffff,0x3f800000,0x41234567]
    for stage in [0,1]:
        for width in range(1,5):
            for offset in range(5-width):
                for start,count in [(0,1),(30,4),(62,4),(95,1)]:
                    yield dict(label=f'vector-{stage}-{width}-{offset}-{start}',location=(2047<<7)|start,components=width,count=count,
                               packing=(stage<<10)|(offset<<11),input_words=(bits*40)[:384])
        for width in [2,3,4]:
            for transpose in [0,1]:
                for count in [1,2]:
                    yield dict(label=f'matrix-{stage}-{width}-{transpose}-{count}',location=2,components=width,count=count,matrix=1,transpose=transpose,
                               packing=(stage<<10)|((width-1)<<13)|(1<<24),input_words=(bits*40)[:384])


def run():
    claim=json.loads((WORK/'claim.json').read_text());image=original_image();rows=[];windows=Windows()
    try:
        for case in cases():
            reference=original(case,image,claim);assert reference['returned']
            target=machine(case,False);assert target['finalArenaSha256']==reference['finalArenaSha256'],case['label']
            rows.append(dict(input=case,original=reference,sourceArm=target,actualWindows=windows.execute(case),highAarch64=machine(case,True)))
    finally:windows.close()
    out=WORK/'uniform-component-frontier.json'
    out.write_text(json.dumps(dict(status='uniform-branch-only-full-dispatcher-still-in-progress',producer=pin(__file__),caseSets=len(rows),observations=len(rows)*4,cases=rows,
                                  wholeFunctionClaimed=False,sourceCreditGranted=0,androidOsOrDeviceClaimed=False),indent=2)+'\n')
    print(json.dumps(dict(report=pin(out),sets=len(rows),observations=len(rows)*4)))


if __name__=='__main__':run()
