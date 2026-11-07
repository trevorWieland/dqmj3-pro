import ctypes
import hashlib
import struct
import sys
import unicorn
from unicorn import arm_const as arm,arm64_const as a64
from native_state_deps055_helpers_measure import SOURCE,ROOT
from native_state_deps055_helpers_reference import ARENA,ARENA_BYTES,STACK,STOP,initial,expected

sys.path.insert(0,str(ROOT/'toolscripts'))
from native_state055_build import load


def pointer(address,base):
    return base+address-ARENA if address else 0


def fixture(case,base,wide):
    data=bytearray(initial())
    if case['kind']=='lookup'and case['container']:
        width=8 if wide else 4
        data[0x1828:0x1828+32*width]=bytes(32*width)
        value=base+0x3000 if case['object']else 0
        struct.pack_into('<Q'if wide else'<I',data,0x1828+case['index']*width,value)
        struct.pack_into('<I',data,0x3000,case['value'])
    return data


def check(case,data,before,pair,returned,base,pair_address,strict=True):
    if case['kind']=='lookup':
        model=before
        model_pair=None
        raw=case['value']if case['index']<32 and case['object']else 0
        kind='word'
        modeled_return=raw
    else:
        model,model_pair,raw,kind=expected(case,before)
        modeled_return=pair_address if kind=='pair-pointer'else pointer(raw,base)if kind in ['cursor-pointer','limit-pointer']else raw
        model_pair=[pointer(value,base)for value in model_pair]
    passed=data==bytes(model)and pair==model_pair and returned==modeled_return
    if strict:
        assert passed,(case,returned,modeled_return,kind)
    return dict(returned=returned,returnKind=kind,actualFunctionReturned=True,independentModelPassed=passed,
                actualReturnObservationExpected=returned==modeled_return,actualPairExpected=pair==model_pair,
                actualWholePlatformArenaExpected=data==bytes(model),
                fullPlatformDataArenaSha256=hashlib.sha256(data).hexdigest(),actualArenaAddress=base,
                pairOffsets=[value-base if value else None for value in pair]if pair else None,
                targetAndNativeLookupArenaBytesClaimedEqual=case['kind']!='lookup',
                nativePointersTruncated=False,actualDeclaredPairAddress=pair_address)


def machine(path,case,wide=False,strict=True):
    segments,symbols,functions=load(path)
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM64 if wide else unicorn.UC_ARCH_ARM,unicorn.UC_MODE_LITTLE_ENDIAN if wide else unicorn.UC_MODE_ARM)
    base=0x110000000 if wide else ARENA
    pages={STOP}
    for address,size,flags,data in segments:
        pages.update(range(address&-4096,(address+size+4095)&-4096,4096))
    for page in sorted(pages):
        cpu.mem_map(page,4096)
    cpu.mem_map(STACK,0x10000)
    cpu.mem_map(base,ARENA_BYTES)
    for address,size,flags,data in segments:
        if data:
            cpu.mem_write(address,data)
    before=fixture(case,base,wide)
    cpu.mem_write(base,bytes(before))
    if case['kind']=='lookup':
        table=base+0x1000 if case['container']else 0
        cpu.mem_write(symbols['state_index055'],struct.pack('<Q'if wide else'<I',table))
        arguments=[case['index'],0,0]
    else:
        cpu.mem_write(symbols['state_pair055'],struct.pack('<QQ'if wide else'<II',pointer(case['output'],base),pointer(case['limit'],base)))
        arguments=[case['base'],case['count'],pointer(case['source'],base)]
    if wide:
        spreg,lrreg,pcreg=a64.UC_ARM64_REG_SP,a64.UC_ARM64_REG_LR,a64.UC_ARM64_REG_PC
        argregs=[a64.UC_ARM64_REG_X0,a64.UC_ARM64_REG_X1,a64.UC_ARM64_REG_X2]
        saved=[(getattr(a64,'UC_ARM64_REG_X'+str(index)),0x51000000+index*163)for index in range(19,30)]
        saved+=[(getattr(a64,'UC_ARM64_REG_D'+str(index)),0x3ff0000000000000+index*131)for index in range(8,16)]
    else:
        cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10)
        cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20)
        cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000)
        spreg,lrreg,pcreg=arm.UC_ARM_REG_SP,arm.UC_ARM_REG_LR,arm.UC_ARM_REG_PC
        argregs=[arm.UC_ARM_REG_R0,arm.UC_ARM_REG_R1,arm.UC_ARM_REG_R2]
        saved=[(getattr(arm,'UC_ARM_REG_R'+str(index)),0x51000000+index*163)for index in range(4,12)]
        saved+=[(getattr(arm,'UC_ARM_REG_D'+str(index)),0x3ff0000000000000+index*131)for index in range(8,16)]
    for register,value in saved:
        cpu.reg_write(register,value)
    sp=STACK+0xc000
    cpu.reg_write(spreg,sp)
    cpu.reg_write(lrreg,STOP)
    for register,value in zip(argregs,arguments):
        cpu.reg_write(register,value)
    entry=symbols[dict(reserve='state_reserve055',fixed='state_write_fixed055',lookup='state_lookup055')[case['kind']]]
    def code(machine,address,size,unused):
        assert any(start<=address<end for start,end in functions),hex(address)
    def memory(machine,access,address,size,value,unused):
        assert STACK<=address<STACK+0x10000 or base<=address and address+size<=base+ARENA_BYTES or address==symbols['state_pair055'],hex(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE,code)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,memory)
    cpu.emu_start(entry,STOP,count=100000)
    assert cpu.reg_read(pcreg)==STOP and cpu.reg_read(spreg)==sp
    assert all(cpu.reg_read(register)==value for register,value in saved)
    data=bytes(cpu.mem_read(base,ARENA_BYTES))
    pair=list(struct.unpack('<QQ'if wide else'<II',bytes(cpu.mem_read(symbols['state_pair055'],16 if wide else 8))))if case['kind']!='lookup'else None
    result=check(case,data,before,pair,cpu.reg_read(argregs[0]),base,symbols['state_pair055'],strict)
    result['savedIntegerVfpSpPreserved']=True
    result['declaredPointerBytes']=8 if wide else 4
    return result


class Windows:
    class Pair(ctypes.Structure):
        _fields_=[('cursor',ctypes.c_void_p),('limit',ctypes.c_void_p)]

    def __init__(self,path):
        self.library=ctypes.CDLL(str(path))
        self.reserve=self.library.state_reserve055
        self.reserve.argtypes,self.reserve.restype=[ctypes.c_uint32,ctypes.c_uint32],ctypes.c_size_t
        self.fixed=self.library.state_write_fixed055
        self.fixed.argtypes,self.fixed.restype=[ctypes.c_uint32,ctypes.c_uint32,ctypes.c_void_p],ctypes.c_size_t
        self.lookup=self.library.state_lookup055
        self.lookup.argtypes,self.lookup.restype=[ctypes.c_uint32],ctypes.c_uint32
        self.pair=self.Pair.in_dll(self.library,'state_pair055')
        self.index=ctypes.c_void_p.in_dll(self.library,'state_index055')
        self.kernel=ctypes.WinDLL('kernel32',use_last_error=True)
        self.kernel.VirtualAlloc.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_ulong,ctypes.c_ulong]
        self.kernel.VirtualAlloc.restype=ctypes.c_void_p
        self.kernel.VirtualFree.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_ulong]
        self.kernel.VirtualFree.restype=ctypes.c_int
        self.base=self.kernel.VirtualAlloc(0x120000000,ARENA_BYTES,0x3000,4)
        assert self.base==0x120000000

    def execute(self,case,strict=True):
        before=fixture(case,self.base,True)
        ctypes.memmove(self.base,bytes(before),len(before))
        if case['kind']=='lookup':
            self.index.value=self.base+0x1000 if case['container']else 0
            returned=self.lookup(case['index'])
            pair=None
        else:
            self.pair.cursor,self.pair.limit=pointer(case['output'],self.base),pointer(case['limit'],self.base)
            returned=self.reserve(case['base'],case['count'])if case['kind']=='reserve'else self.fixed(case['base'],case['count'],pointer(case['source'],self.base))
            pair=[self.pair.cursor or 0,self.pair.limit or 0]
        data=ctypes.string_at(self.base,ARENA_BYTES)
        result=check(case,data,before,pair,returned,self.base,ctypes.addressof(self.pair),strict)
        result['actualWindows']=True
        result['declaredPointerBytes']=ctypes.sizeof(ctypes.c_void_p)
        result['actualLibraryLoadBase']=self.library._handle
        result['actualDeclaredPairRva']=ctypes.addressof(self.pair)-self.library._handle
        return result

    def close(self):
        assert self.kernel.VirtualFree(self.base,0,0x8000)
