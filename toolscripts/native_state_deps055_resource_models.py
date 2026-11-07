import ctypes
import hashlib
import struct
import sys
import unicorn
from unicorn import arm_const as arm,arm64_const as a64
from native_state_deps055_resource_measure import SOURCE,ROOT
from native_state_deps055_resource_reference import ARENA,TABLE,NODE,RESOURCE,WORDS,BYTES,STACK,STOP

sys.path.insert(0,str(ROOT/'toolscripts'))
from native_state055_build import load


class Resource(ctypes.Structure):
    _fields_=[('opaque0',ctypes.c_ubyte*0x808),('words',ctypes.c_void_p),
              ('opaque_after_words',ctypes.c_ubyte*12),('bytes',ctypes.c_void_p),('flags',ctypes.c_uint32)]


def layout(wide):
    return [0x928,0x828,8,0x830,0x808,0x820,0x828,8]if wide else[0x8a8,0x828,4,0x820,0x808,0x818,0x81c,4]


def pointer(address,base):
    return base+address-ARENA if address else 0


def fixture(case,base,wide):
    data=bytearray(0x10000)
    offsets=layout(wide)
    pack='<Q'if wide else'<I'
    width=offsets[7]
    if case['index']<32:
        struct.pack_into(pack,data,TABLE-ARENA+0x828+case['index']*width,pointer(NODE,base)if case['node']else 0)
    struct.pack_into(pack,data,NODE-ARENA,pointer(RESOURCE,base)if case['resource']else 0)
    struct.pack_into(pack,data,RESOURCE-ARENA+offsets[4],pointer(WORDS,base))
    struct.pack_into(pack,data,RESOURCE-ARENA+offsets[5],pointer(BYTES,base))
    struct.pack_into('<I',data,RESOURCE-ARENA+offsets[6],case['flags'])
    data[WORDS-ARENA:WORDS-ARENA+64]=b''.join(struct.pack('<I',0x12345678+index*0x10101)for index in range(16))
    data[BYTES-ARENA:BYTES-ARENA+32]=bytes((0x40+index*3)&255 for index in range(32))
    return data


def machine(path,case,wide=False,consumers=True):
    segments,symbols,functions=load(path)
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM64 if wide else unicorn.UC_ARCH_ARM,unicorn.UC_MODE_LITTLE_ENDIAN if wide else unicorn.UC_MODE_ARM)
    base=0x110000000 if wide else ARENA
    pages={STOP}
    for address,size,flags,data in segments:
        pages.update(range(address&-4096,(address+size+4095)&-4096,4096))
    for page in pages:
        cpu.mem_map(page,4096)
    cpu.mem_map(STACK,0x10000)
    cpu.mem_map(base,0x10000)
    for address,size,flags,data in segments:
        if data:
            cpu.mem_write(address,data)
    before=fixture(case,base,wide)
    cpu.mem_write(base,bytes(before))
    cpu.mem_write(symbols['state_resource_index055'],struct.pack('<Q'if wide else'<I',pointer(TABLE,base)if case['index']<32 else 0))
    if wide:
        spreg,lrreg,pcreg=a64.UC_ARM64_REG_SP,a64.UC_ARM64_REG_LR,a64.UC_ARM64_REG_PC
        args=[a64.UC_ARM64_REG_X0,a64.UC_ARM64_REG_X1]
        saved=[(getattr(a64,'UC_ARM64_REG_X'+str(index)),0x51000000+index*163)for index in range(19,30)]
        saved+=[(getattr(a64,'UC_ARM64_REG_D'+str(index)),0x3ff0000000000000+index*131)for index in range(8,16)]
    else:
        cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10)
        cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20)
        cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000)
        spreg,lrreg,pcreg=arm.UC_ARM_REG_SP,arm.UC_ARM_REG_LR,arm.UC_ARM_REG_PC
        args=[arm.UC_ARM_REG_R0,arm.UC_ARM_REG_R1]
        saved=[(getattr(arm,'UC_ARM_REG_R'+str(index)),0x51000000+index*163)for index in range(4,12)]
        saved+=[(getattr(arm,'UC_ARM_REG_D'+str(index)),0x3ff0000000000000+index*131)for index in range(8,16)]
    def code(machine,address,size,unused):
        assert any(start<=address<end for start,end in functions),hex(address)
    def memory(machine,access,address,size,value,unused):
        assert STACK<=address and address+size<=STACK+0x10000,hex(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE,code)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,memory)
    def call(name,values):
        for register,value in saved:
            cpu.reg_write(register,value)
        sp=STACK+0xc000
        cpu.reg_write(spreg,sp)
        cpu.reg_write(lrreg,STOP)
        for register,value in zip(args,values):
            cpu.reg_write(register,value)
        cpu.emu_start(symbols[name],STOP,count=1000)
        assert cpu.reg_read(pcreg)==STOP and cpu.reg_read(spreg)==sp
        assert all(cpu.reg_read(register)==value for register,value in saved)
        return cpu.reg_read(args[0])
    actual_layout=[call('fixture_resource_layout055',[index])for index in range(8)]
    assert actual_layout==layout(wide)
    actual=call('state_resource_lookup055',[case['index']])
    expected=pointer(RESOURCE,base)if case['index']<32 and case['node']and case['resource']else 0
    observed=None
    if consumers:
        assert actual==expected
        observed=dict(word=call('fixture_resource_word055',[case['index'],case['byteIndex']]),
                      byte=call('fixture_resource_byte055',[case['index'],case['byteIndex']]),
                      flags=call('fixture_resource_flags055',[case['index']]))
        assert observed==dict(word=0x12345678+case['byteIndex']*0x10101 if expected else 0,
                              byte=(0x40+case['byteIndex']*3)&255 if expected else 0,flags=case['flags']if expected else 0)
    data=bytes(cpu.mem_read(base,0x10000))
    assert data==bytes(before)
    return dict(actualFunctionReturned=True,returnedResourcePointer=actual,expectedActualResourcePointer=expected,
                actualResourcePointerMatched=actual==expected,consumers=observed,compiledLayout=actual_layout,
                fullPlatformInputArenaUnchanged=True,fullPlatformArenaSha256=hashlib.sha256(data).hexdigest(),
                actualArenaAddress=base,nativePointerTruncated=False,savedIntegerVfpSpPreserved=True)


class Windows:
    def __init__(self,path):
        self.library=ctypes.CDLL(str(path))
        self.lookup=self.library.state_resource_lookup055
        self.lookup.argtypes,self.lookup.restype=[ctypes.c_uint32],ctypes.c_void_p
        self.index=ctypes.c_void_p.in_dll(self.library,'state_resource_index055')
        self.readers={}
        for name,count in [('fixture_resource_word055',2),('fixture_resource_byte055',2),('fixture_resource_flags055',1),('fixture_resource_layout055',1)]:
            function=getattr(self.library,name)
            function.argtypes,function.restype=[ctypes.c_uint32]*count,ctypes.c_uint32
            self.readers[name]=function
        self.layout=[self.readers['fixture_resource_layout055'](index)for index in range(8)]
        assert self.layout==layout(True)
        assert [Resource.words.offset,Resource.bytes.offset,Resource.flags.offset,ctypes.sizeof(Resource)]==[0x808,0x820,0x828,0x830]
        self.kernel=ctypes.WinDLL('kernel32',use_last_error=True)
        self.kernel.VirtualAlloc.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_ulong,ctypes.c_ulong]
        self.kernel.VirtualAlloc.restype=ctypes.c_void_p
        self.kernel.VirtualFree.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_ulong]
        self.kernel.VirtualFree.restype=ctypes.c_int
        self.base=self.kernel.VirtualAlloc(0x120000000,0x10000,0x3000,4)
        assert self.base==0x120000000

    def execute(self,case,consumers=True):
        before=fixture(case,self.base,True)
        ctypes.memmove(self.base,bytes(before),len(before))
        self.index.value=pointer(TABLE,self.base)if case['index']<32 else 0
        actual=self.lookup(case['index'])or 0
        expected=pointer(RESOURCE,self.base)if case['index']<32 and case['node']and case['resource']else 0
        observed=None
        if consumers:
            assert actual==expected
            observed=dict(word=self.readers['fixture_resource_word055'](case['index'],case['byteIndex']),
                          byte=self.readers['fixture_resource_byte055'](case['index'],case['byteIndex']),
                          flags=self.readers['fixture_resource_flags055'](case['index']))
            assert observed==dict(word=0x12345678+case['byteIndex']*0x10101 if expected else 0,
                                  byte=(0x40+case['byteIndex']*3)&255 if expected else 0,flags=case['flags']if expected else 0)
        data=ctypes.string_at(self.base,0x10000)
        assert data==bytes(before)
        return dict(actualFunctionReturned=True,actualWindows=True,returnedResourcePointer=actual,expectedActualResourcePointer=expected,
                    actualResourcePointerMatched=actual==expected,consumers=observed,compiledLayout=self.layout,
                    fullPlatformInputArenaUnchanged=True,fullPlatformArenaSha256=hashlib.sha256(data).hexdigest(),
                    actualArenaAddress=self.base,nativePointerTruncated=False)

    def close(self):
        assert self.kernel.VirtualFree(self.base,0,0x8000)
