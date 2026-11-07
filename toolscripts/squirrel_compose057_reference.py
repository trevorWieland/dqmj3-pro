import hashlib
import json
import re
import struct
import sys
from pathlib import Path

import unicorn
from unicorn import arm_const as r

ROOT=Path(__file__).resolve().parents[1]
WORK=ROOT/'work/squirrel-compose057'
SOURCE=ROOT/'source/squirrel-wave057'
sys.path.insert(0,str(ROOT/'toolscripts'))
from squirrel_state045_heap import bootstrap,ARENA,ARENA_BYTES,allocations
from native_archive032_gzip_reference import ReferenceImage


CALLER=0x3000000
STACK=0x4000000
RETURN=0x5000000
OPCODES={name:int(value)for header in ['source/squirrel-wave028/execute.h',
    'source/squirrel-wave035/exception.h','source/squirrel-wave039/iteration.h']
    for name,value in re.findall(r'\b(SQ(?:28|35|39)_\w+)\s*=\s*(\d+)',(ROOT/header).read_text())}


class Original:
    def __init__(self,reference=None):
        self.cpu,self.reference,self.precondition=bootstrap(False,reference if reference else ReferenceImage())
        self.cpu.mem_map(CALLER,0x10000,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
        self.cpu.mem_write(CALLER,bytes([0xa5])*0x10000)
        self.cpu.mem_write(0x89a670,struct.pack('<I',0xf531))
        self.cpu.mem_write(0x8bfb54,struct.pack('<I',0x531))
        self.cpu.mem_write(0x89a508,b'\x01')
        self.instructions={}
        self.reads=set()
        self.writes=set()
        self.phase='startup'
        self.paths={}
        self.sp=STACK+0x8000
        self.argument_bytes=0
        self.cpu.hook_add(unicorn.UC_HOOK_CODE,self.code)
        self.cpu.hook_add(unicorn.UC_HOOK_MEM_READ,self.read)
        self.cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,self.write)
        self.cpu.hook_add(unicorn.UC_HOOK_INTR,self.interrupt)
        self.call(0x6ff69c,[])
        if bytes(self.cpu.mem_read(0x8c06e8,8))!=bytes.fromhex('0100000100000000'):
            raise ValueError('Actual startup initializer did not establish NULL')

    def code(self,cpu,address,size,unused):
        if address==RETURN:
            return
        mode='Thumb'if cpu.reg_read(r.UC_ARM_REG_CPSR)&32 else'ARM'
        if address not in self.instructions:
            owner,decoded=self.reference.instruction(cpu,address,size)
            raw=bytes(cpu.mem_read(address,size))
            self.instructions[address]={'address':address,'bytes':size,'mode':mode,'owner':owner,
                                        'sha256':hashlib.sha256(raw).hexdigest()}
        elif self.instructions[address]['mode']!=mode or self.instructions[address]['bytes']!=size:
            raise ValueError('Original instruction mode changed')
        self.paths.setdefault(self.phase,set()).add(address)

    def allowed(self,address,size,write=False):
        ranges=[(ARENA,ARENA+ARENA_BYTES),(STACK,self.sp+self.argument_bytes),
                (CALLER,CALLER+0x10000),(0x6000000,0x6001000)]
        ranges.append(self.reference.writable if write else(0x100000,self.reference.writable[1]))
        return any(low<=address<address+size<=high for low,high in ranges)

    def read(self,cpu,access,address,size,value,unused):
        if not self.allowed(address,size):
            raise ValueError('Original composed read escaped declared module/arena/caller/frame: '+hex(address))
        self.reads.add((cpu.reg_read(r.UC_ARM_REG_PC),address,size))

    def write(self,cpu,access,address,size,value,unused):
        if not self.allowed(address,size,True):
            raise ValueError('Original composed write escaped declared module/arena/caller/frame: '+hex(address))
        self.writes.add((cpu.reg_read(r.UC_ARM_REG_PC),address,size))

    def interrupt(self,cpu,number,unused):
        raise ValueError('Original composed session reached unqualified syscall: '+str(number))

    def call(self,address,args):
        self.argument_bytes=max(0,len(args)-4)*4
        preserved={getattr(r,'UC_ARM_REG_R'+str(index)):0x57570000+index*17 for index in range(4,12)}
        preserved.update({getattr(r,'UC_ARM_REG_D'+str(index)):0x3ff0000000000000+index for index in range(8,16)})
        for register,value in preserved.items():self.cpu.reg_write(register,value)
        self.cpu.reg_write(r.UC_ARM_REG_C1_C0_2,0xf00000)
        self.cpu.reg_write(r.UC_ARM_REG_FPEXC,0x40000000)
        self.cpu.reg_write(r.UC_ARM_REG_FPSCR,0)
        self.cpu.reg_write(r.UC_ARM_REG_CPSR,0x10)
        self.cpu.reg_write(r.UC_ARM_REG_SP,self.sp)
        self.cpu.reg_write(r.UC_ARM_REG_LR,RETURN)
        self.cpu.mem_write(self.sp,bytes(32))
        for index,value in enumerate(args):
            if index<4:self.cpu.reg_write(getattr(r,'UC_ARM_REG_R'+str(index)),value&0xffffffff)
            else:self.cpu.mem_write(self.sp+(index-4)*4,struct.pack('<I',value&0xffffffff))
        try:self.cpu.emu_start(address,RETURN,count=10000000)
        except Exception as error:
            raise RuntimeError('Original composed failure pc='+hex(self.cpu.reg_read(r.UC_ARM_REG_PC))+
                               ' phase='+self.phase+' entry='+hex(address))from error
        if self.cpu.reg_read(r.UC_ARM_REG_PC)!=RETURN or self.cpu.reg_read(r.UC_ARM_REG_SP)!=self.sp:
            raise ValueError('Original composed call did not return with SP')
        if any(self.cpu.reg_read(register)!=value for register,value in preserved.items()):
            raise ValueError('Original composed call changed callee-saved registers')
        return self.cpu.reg_read(r.UC_ARM_REG_R0)

    def get(self,address,size=4):
        return int.from_bytes(self.cpu.mem_read(address,size),'little')

    def put(self,address,value):
        self.cpu.mem_write(address,struct.pack('<I',value&0xffffffff))

    def object(self,address,kind=0x01000001,payload=0):
        self.cpu.mem_write(address,struct.pack('<II',kind,payload&0xffffffff))

    def clear(self,address):
        self.call(0x19e864,[address,0x8c06e8])

    def allocate(self,size):
        value=self.call(0x2fece8,[size])
        if not ARENA<=value<value+size<=ARENA+ARENA_BYTES:
            raise ValueError('Actual original allocator did not return an owned program block')
        return value

    def boot(self,stack_size=64):
        self.vm=self.call(0x146994,[stack_size])
        self.shared=self.get(self.vm+140)
        return self.snapshot()

    def snapshot(self):
        names=self.get(self.shared)
        strings=self.get(self.shared+20)
        chain=0
        node=self.get(self.shared+68)
        previous=0
        while node:
            if self.get(node+16)!=previous or chain>=1024:
                raise ValueError('Actual original GC chain is not valid')
            previous=node
            node=self.get(node+12)
            chain+=1
        return {'top':self.get(self.vm+48),'base':self.get(self.vm+52),
                'calls':self.get(self.vm+100),'nativeDepth':self.get(self.vm+144),
                'stackSize':self.get(self.vm+28),'metamethodNames':self.get(names+4),
                'internedStrings':self.get(strings+8),'gcMembers':chain,
                'rootType':self.get(self.vm+56),'errorType':self.get(self.vm+64),
                'traps':self.get(self.vm+124)}

    def prototype(self,instructions,literals,functions,outers):
        size=96+instructions*8+(literals+1+functions)*8+outers*20
        pointer=self.allocate(size)
        self.cpu.mem_write(pointer,bytes(size))
        self.put(pointer,0x81e52c)
        self.put(pointer+4,1)
        self.object(pointer+12)
        self.object(pointer+20)
        self.put(pointer+28,10)
        literal=pointer+96+instructions*8
        parameters=literal+literals*8
        nested=parameters+8
        outer=nested+functions*8
        for offset,value in [(52,literals),(56,literal),(60,1),(64,parameters),
                             (68,functions),(72,nested),(76,outers),(80,outer),(92,instructions)]:
            self.put(pointer+offset,value)
        for index in range(literals+1+functions):self.object(literal+index*8)
        for index in range(outers):
            self.object(outer+index*20+4)
            self.object(outer+index*20+12)
        return pointer

    def meta_contract(self):
        self.phase='original-composed-metamethod-contract'
        before=self.snapshot()
        table=self.allocate(44)
        delegate=self.allocate(44)
        for pointer,owner in [(table,CALLER+0x2100),(delegate,CALLER+0x2140)]:
            self.call(0x19b998,[pointer,self.shared,0])
            self.object(CALLER+0x21e0,0x0a000020,pointer)
            self.object(owner)
            self.call(0x19e864,[owner,CALLER+0x21e0])
        destination=CALLER+0x2180
        self.object(destination)
        empty=self.call(0x202cf4,[table,self.vm,7,destination])&255
        names=self.get(self.shared)
        types=self.get(self.shared+12)
        self.object(CALLER+0x21a0,0x05000002,0x5757)
        if not self.call(0x19b728,[delegate,self.get(names)+7*8,CALLER+0x21a0])&255:
            raise ValueError('Actual table insertion rejected declared metamethod key')
        if not self.call(0x19e2e8,[table,delegate])&255:
            raise ValueError('Actual delegate attachment rejected declared tables')
        success=self.call(0x202cf4,[table,self.vm,7,destination])&255
        result=[success,self.get(destination),self.get(destination+4),empty,
                self.get(names+4),self.get(types+4)]
        self.clear(destination)
        result.append(self.get(destination))
        self.clear(CALLER+0x2100)
        self.clear(CALLER+0x2140)
        if self.snapshot()!=before:raise ValueError('Actual metamethod contract leaked its graph')
        return result

    def instruction(self,function,at,opcode,a0,a1=0,a2=0,a3=0):
        if isinstance(opcode,str):opcode=OPCODES[opcode]
        self.cpu.mem_write(function+96+at*8,struct.pack('<iBBBB',a1,opcode,a0,a2,a3))

    def program(self,profile,value):
        self.phase='synthetic-program-allocation-and-source-independent-input-construction'
        parent=self.prototype(5 if profile==8 else 14,4,0 if profile==8 else 1,0)
        literal=self.get(parent+56)
        if profile==8:
            self.cpu.mem_write(CALLER+0x2000,b'array\0')
            string=self.call(0x19ba68,[self.shared,CALLER+0x2000,5])
            self.object(CALLER+0x1020,0x08000010,string)
            if not self.call(0x1a1dc8,[self.get(self.vm+60),CALLER+0x1020,literal]):
                raise ValueError('Actual initialized original root lacks array registration')
            self.instruction(parent,0,1,1,0)
            self.instruction(parent,1,'SQ28_LOADNULLS',2,1)
            self.instruction(parent,2,2,3,value)
            self.instruction(parent,3,6,4,1,2,2)
            self.instruction(parent,4,'SQ28_RETURN',1,4)
        else:
            child=self.prototype(9,0,0,1)
            self.put(child+28,8)
            self.object(self.get(child+80)+12,0x05000002,1)
            self.object(CALLER+0x1030,0x08002000,child)
            self.call(0x19e864,[self.get(parent+72),CALLER+0x1030])
            self.clear(CALLER+0x1030)
            if profile==257:
                self.cpu.mem_write(CALLER+0x2000,bytes([65,128,255]))
                string=self.call(0x19ba68,[self.shared,CALLER+0x2000,3])
                self.object(CALLER+0x1030,0x08000010,string)
                self.call(0x19e864,[literal,CALLER+0x1030])
                for index in range(5):self.instruction(parent,index,10 if index else 1,1,1 if index else 0)
            else:
                self.instruction(parent,0,31,1)
                self.instruction(parent,1,2,2,value)
                self.instruction(parent,2,32,1,2)
                self.instruction(parent,3,2,2,value+1)
                self.instruction(parent,4,32,1,2)
            for args in [(5,48,6,0),(6,'SQ28_LOADNULLS',1,1),(7,'SQ28_LOADNULLS',2,1),
                         (8,'SQ35_PUSHTRAP',7,3),(9,6,5,6,2,1),(10,'SQ35_POPTRAP',1),
                         (11,'SQ28_JUMP',0,1),(12,10,5,7),(13,'SQ28_RETURN',1,5)]:
                self.instruction(parent,*args)
            for args in [(0,'SQ28_LOADFREE',1,0),(1,'SQ28_LOADNULLS',2,3),(2,2,5,0),
                         (3,'SQ39_FOREACH',1,3,2,0),(4,'SQ39_POSTFOREACH',1,3),
                         (5,'SQ28_ARITH',5,3,5,43),(6,'SQ28_JUMP',0,-4),
                         (7,'SQ35_THROW',5),(8,'SQ28_RETURN',1,5)]:
                self.instruction(child,*args)
        self.object(CALLER+0x1000)
        self.object(CALLER+0x1010)
        self.phase='original-script-construction'
        if not self.call(0x196b08,[self.vm,CALLER+0x1000,parent])&255:
            raise ValueError('Actual original script constructor did not return true')
        self.object(CALLER+0x1030,0x08002000,parent)
        self.clear(CALLER+0x1030)
        return parent

    def execute(self,profile,value=3,flags=1,cleanup=1):
        self.program(profile,value)
        self.phase='original-root-argument'
        self.call(0x173d14,[self.vm])
        self.phase='original-composed-execute'
        if flags:
            returned=self.call(0x17ffac,[self.vm,CALLER+0x1000,1,0,CALLER+0x1010,1])
        else:
            returned=self.call(0x18d65c,[self.vm,CALLER+0x1000,0,1,0,CALLER+0x1010,1,0])
        kind=self.get(CALLER+0x1010)
        payload=self.get(CALLER+0x1014)
        result=[returned&255,kind,self.get(payload+28)if kind==0x08000040 else payload,
                self.get(self.vm+48),self.get(self.vm+52),self.get(self.vm+100),self.get(self.vm+124)]
        if cleanup:
            self.cleanup()
        return {'returned':result,'state':self.snapshot()}

    def cleanup(self):
        self.phase='original-composed-program-cleanup'
        self.clear(CALLER+0x1010)
        self.clear(self.vm+88)
        stack=self.get(self.vm+24)
        for index in range(self.get(self.vm+28)):self.clear(stack+index*8)
        self.clear(CALLER+0x1000)
        self.clear(self.vm+64)
        self.call(0x173cb8,[self.vm,1])
        return self.snapshot()

    def heap_counts(self):
        entries=allocations(bytes(self.cpu.mem_read(ARENA,ARENA_BYTES)))
        return {'active':len(entries),'physicalAllocatedBytes':sum(row['bytes']for row in entries)}


if __name__=='__main__':
    session=Original()
    print(json.dumps({'state':session.boot(),'observedPcs':len(session.instructions)}),flush=True)
    print(json.dumps({'program':session.execute(8),'observedPcs':len(session.instructions)}),flush=True)
