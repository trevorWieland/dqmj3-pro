import bisect
import ctypes
import random

import unicorn
from unicorn.arm_const import UC_ARM_REG_CPSR,UC_ARM_REG_PC,UC_CPU_ARM_1176

from native_wave012_arena_oracle import REGISTERS,RETURN,STACK
from native_wave012_ctor_runtime import intervals
from native_wave013_common import sha


BASE=0x3000000
SIZE=16384
INPUT=0x1000
OUTPUT=0x2000
OUTPUT_BYTES=1024


def fixture(units,maximum,seed):
    if len(units)>510 or any(not 0<=value<=65535 for value in units):
        raise ValueError('Character transform fixture exceeds finite code-unit domain')
    if not -128<=maximum<=512:
        raise ValueError('Character capacity exceeds finite fixture domain')
    data=bytearray(random.Random(seed+13114).randbytes(SIZE))
    raw=b''.join(value.to_bytes(2,'little') for value in [*units,0])
    data[INPUT:INPUT+len(raw)]=raw
    writable=2*maximum if maximum>0 else min(OUTPUT_BYTES,2*(len(units)+1))
    return bytes(data),len(raw),writable


class ArmRunner:
    def __init__(self,graph,source=False):
        self.graph,self.source=graph,source
        self.cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
        self.cpu.ctl_set_cpu_model(UC_CPU_ARM_1176)
        pages=set()
        readonly=[]
        for address,raw in graph['blocks']:
            for page in range(address&~4095,(address+len(raw)+4095)&~4095,4096):
                if page not in pages:
                    self.cpu.mem_map(page,4096,unicorn.UC_PROT_ALL)
                    pages.add(page)
            self.cpu.mem_write(address,raw)
            readonly.append((address,address+len(raw)))
        for page in pages:
            self.cpu.mem_protect(page,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
        self.cpu.mem_map(BASE,SIZE,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
        self.cpu.mem_map(STACK,8192,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
        self.cpu.mem_map(RETURN,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
        self.readonly=intervals(readonly)
        self.code=intervals(graph['executableRanges'])
        self.starts={id(row):[a for a,b in row] for row in [self.readonly,self.code]}
        self.coverage=set()
        self.read_count,self.write_count=0,0
        self.active=False
        self.cpu.hook_add(unicorn.UC_HOOK_CODE,self.executed)
        self.cpu.hook_add(unicorn.UC_HOOK_MEM_READ,self.read)
        self.cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,self.write)

    def contains(self,ranges,address,size):
        at=bisect.bisect_right(self.starts[id(ranges)],address)-1
        return at>=0 and ranges[at][0]<=address<address+size<=ranges[at][1]

    def executed(self,cpu,address,size,user):
        if not self.contains(self.code,address,size):
            raise RuntimeError('Character source escaped owned executable instructions')
        self.coverage.add(address)

    def read(self,cpu,access,address,size,value,user):
        valid=(STACK+2048<=address<address+size<=STACK+4096 or
            BASE+INPUT<=address<address+size<=BASE+INPUT+self.input_bytes or
            BASE+OUTPUT<=address<address+size<=BASE+OUTPUT+self.output_bytes or
            self.contains(self.readonly,address,size))
        if not valid:
            raise RuntimeError('Character transform read outside declared input/output/data/frame')
        self.read_count+=1

    def write(self,cpu,access,address,size,value,user):
        valid=(STACK+2048<=address<address+size<=STACK+4096 or
            BASE+OUTPUT<=address<address+size<=BASE+OUTPUT+self.output_bytes)
        if not valid:
            raise RuntimeError('Character transform wrote outside declared output/frame')
        self.write_count+=1

    def run(self,units,maximum=64,seed=0,operation='normalize',thumb=False,flags=0):
        before,self.input_bytes,self.output_bytes=fixture(units,maximum,seed)
        self.cpu.mem_write(BASE,before)
        stack=random.Random(seed+13414).randbytes(8192)
        self.cpu.mem_write(STACK,stack)
        address=0x4c446c if operation=='normalize' else 0x4c4420
        entry=self.graph['functions']['fn_'+format(address,'08x')]['address'] if self.source else address
        arguments=[BASE+OUTPUT,maximum&0xffffffff,BASE+INPUT] if operation=='normalize' else [BASE+0x100,BASE+INPUT,maximum&0xffffffff]
        initial=[((seed+1)*0x1020304+index*0x1010101)&0xffffffff for index in range(len(REGISTERS))]
        initial[:3]=arguments
        initial[-2:]=[STACK+4096,RETURN|int(thumb)]
        self.cpu.reg_write(UC_ARM_REG_CPSR,0x10|flags<<28)
        for register,value in zip(REGISTERS,initial):
            self.cpu.reg_write(register,value)
        self.cpu.emu_start(entry,RETURN,count=200000)
        final=[self.cpu.reg_read(register) for register in REGISTERS]
        if self.cpu.reg_read(UC_ARM_REG_PC)!=RETURN or bool(self.cpu.reg_read(UC_ARM_REG_CPSR)&0x20)!=thumb:
            raise RuntimeError('Character transform failed bounded return/interworking')
        if final[4:12]!=initial[4:12] or final[-2]!=initial[-2]:
            raise RuntimeError('Character transform changed callee-saved registers or SP')
        after=bytes(self.cpu.mem_read(BASE,SIZE))
        if after[:OUTPUT]!=before[:OUTPUT] or after[OUTPUT+self.output_bytes:]!=before[OUTPUT+self.output_bytes:]:
            raise RuntimeError('Character transform changed input/guards or bytes beyond output capacity')
        stack_after=bytes(self.cpu.mem_read(STACK,8192))
        if stack_after[:2048]!=stack[:2048] or stack_after[4096:]!=stack[4096:]:
            raise RuntimeError('Character transform escaped private stack frame')
        result=None if operation=='normalize' else ctypes.c_int(final[0]).value
        return {'returnedNormally':True,'immutableMemoryPreserved':True,'result':result,
            'output':after[OUTPUT:OUTPUT+OUTPUT_BYTES],'fixtureSha256':sha(after),
            'readWriteBoundsAndOwnedCodeChecked':True,'calleeSavedAndSpPreserved':True}


class NativeRunner:
    def __init__(self,library):
        self.library=library
        self.buffer=ctypes.create_string_buffer(SIZE+128)
        self.base=ctypes.addressof(self.buffer)+64
        if self.base<=0xffffffff:
            raise RuntimeError('Native character transform did not exercise full-width pointers')
        self.normalize=library.fn_004c446c
        self.normalize.argtypes=[ctypes.c_void_p,ctypes.c_int,ctypes.c_void_p]
        self.normalize.restype=None
        self.mark=library.fn_004c4420
        self.mark.argtypes=[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_int]
        self.mark.restype=ctypes.c_int

    def run(self,units,maximum=64,seed=0,operation='normalize'):
        before,input_bytes,output_bytes=fixture(units,maximum,seed)
        ctypes.memset(self.buffer,0x5a,ctypes.sizeof(self.buffer))
        ctypes.memmove(self.base,before,SIZE)
        if operation=='normalize':
            result=self.normalize(self.base+OUTPUT,maximum,self.base+INPUT)
        else:
            result=self.mark(self.base+0x100,self.base+INPUT,maximum)
        after=ctypes.string_at(self.base,SIZE)
        raw=bytes(self.buffer)
        if raw[:64]!=bytes([0x5a])*64 or raw[-64:]!=bytes([0x5a])*64:
            raise RuntimeError('Native character transform changed outer guards')
        if after[:OUTPUT]!=before[:OUTPUT] or after[OUTPUT+output_bytes:]!=before[OUTPUT+output_bytes:]:
            raise RuntimeError('Native character transform changed input/guards or bytes beyond output capacity')
        return {'returnedNormally':True,'immutableMemoryPreserved':True,'result':result,
            'output':after[OUTPUT:OUTPUT+OUTPUT_BYTES],'fixtureSha256':sha(after),'truePointersAbove32Bits':True}


class SemanticMismatch(RuntimeError):
    def __init__(self,actual,expected):
        self.details={key:value for key,value in actual.items() if key!='output'}
        self.details['originalFixtureSha256']=expected['fixtureSha256']
        self.details['expectedReturn']=expected['result']
        self.details['outputDifferentByteOffsets']=[index for index,(a,b) in enumerate(zip(actual['output'],expected['output'])) if a!=b][:20]
        super().__init__('Normally returned character source differs semantically')


def compare(actual,expected):
    if actual['result']!=expected['result'] or actual['output']!=expected['output']:
        raise SemanticMismatch(actual,expected)
    return {key:value for key,value in actual.items() if key!='output'}
