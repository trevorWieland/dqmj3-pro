import ctypes
import random

import unicorn
from unicorn.arm_const import UC_ARM_REG_PC,UC_ARM_REG_CPSR,UC_CPU_ARM_1176
from native_wave012_arena_oracle import REGISTERS,RETURN,STACK
from native_wave013_common import sha


DATA=0x3000000


class Runner:
    def __init__(self,graph,source):
        self.graph=graph;self.source=source;self.cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
        self.cpu.ctl_set_cpu_model(UC_CPU_ARM_1176);pages=set()
        for address,raw in graph['blocks']:
            for page in range(address&~4095,(address+len(raw)+4095)&~4095,4096):
                if page not in pages:self.cpu.mem_map(page,4096,unicorn.UC_PROT_ALL);pages.add(page)
            self.cpu.mem_write(address,raw)
        for page in pages:self.cpu.mem_protect(page,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
        self.cpu.mem_map(RETURN,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
        self.cpu.mem_map(STACK,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
        self.cpu.mem_map(DATA,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
        self.readable=[(address,address+len(raw)) for address,raw in graph['blocks']]
        self.frame=(STACK+0x700,STACK+0x800);self.input=(DATA,DATA+2);self.path=set()
        if source:
            owned=[row for name,row in graph['functions'].items() if name in ['fn_004c3b1c','numeric_unit']]
            self.entry=graph['functions']['fn_004c3b1c']['address']
            self.code_ranges=[(low,high) for row in owned for low,high,kind in row['mappingSpans'] if kind=='$a']
        else:
            self.entry=0x4c3b1c
            self.code_ranges=[(part['start'],part['endExclusive']) for part in graph['functions'][self.entry]['instructionRanges']]
        def contains(ranges,address,size):return any(low<=address<address+size<=high for low,high in ranges)
        def code(cpu,address,size,user):
            if not contains(self.code_ranges,address,size) or size!=4 or address&3 or cpu.reg_read(UC_ARM_REG_CPSR)&0x20:
                raise RuntimeError('Counter escaped its owned ARM body')
            self.path.add(address)
        def read(cpu,access,address,size,value,user):
            if not contains([*self.readable,self.frame,self.input],address,size):raise RuntimeError('Counter read outside source/data/frame')
        def write(cpu,access,address,size,value,user):
            if not contains([self.frame],address,size):raise RuntimeError('Counter wrote outside private frame')
        self.cpu.hook_add(unicorn.UC_HOOK_CODE,code);self.cpu.hook_add(unicorn.UC_HOOK_MEM_READ,read)
        self.cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)

    def query(self,units,seed=0,flags=0,thumb=False):
        if units is not None and (len(units)>1024 or any(not 0<=unit<=65535 for unit in units)):
            raise ValueError('Counter input outside finite qualified buffer')
        raw=b''.join(unit.to_bytes(2,'little') for unit in units)+bytes(2) if units is not None else b''
        self.input=(DATA,DATA+len(raw));self.cpu.mem_write(DATA,raw)
        rng=random.Random(seed);initial=[rng.getrandbits(32) for register in REGISTERS]
        initial[0]=DATA if units is not None else 0;initial[-2:]=[STACK+0x800,RETURN|int(thumb)]
        self.cpu.reg_write(UC_ARM_REG_CPSR,0x10|flags<<28)
        for register,value in zip(REGISTERS,initial):self.cpu.reg_write(register,value)
        self.cpu.emu_start(self.entry,RETURN,count=100000)
        final=[self.cpu.reg_read(register) for register in REGISTERS]
        if self.cpu.reg_read(UC_ARM_REG_PC)!=RETURN or bool(self.cpu.reg_read(UC_ARM_REG_CPSR)&0x20)!=thumb:
            raise RuntimeError('Counter did not return in declared mode')
        if final[4:12]!=initial[4:12] or final[-2]!=initial[-2]:raise RuntimeError('Counter changed callee-save registers/SP')
        if bytes(self.cpu.mem_read(DATA,len(raw)))!=raw:raise RuntimeError('Counter changed immutable UTF16 input')
        return ctypes.c_int(final[0]).value
