import struct
import sys
from pathlib import Path

import unicorn
from unicorn import arm_const as arm
from unicorn import arm64_const as a64

ROOT=Path(__file__).resolve().parents[1]
WORK=ROOT/'work/squirrel-compose057'
SOURCE=ROOT/'source/squirrel-wave057'
sys.path.insert(0,str(ROOT/'toolscripts'))
from native_sampled_key053_elf import graph


class Source:
    def __init__(self,profile,seed=0xa5,artifact_directory=None):
        directory=Path(artifact_directory)if artifact_directory else WORK/('session-v2-'+profile)
        self.artifact_file=directory/'compose057.elf'
        self.graph=graph(self.artifact_file)
        self.high=profile=='a64'
        self.base=0x207000000 if self.high else 0x7000000
        self.stack=0x204000000 if self.high else 0x4000000
        self.caller=0x203000000 if self.high else 0x3000000
        self.stop=0x205000000 if self.high else 0x5000000
        self.seed=seed
        self.cpu=unicorn.Uc(unicorn.UC_ARCH_ARM64 if self.high else unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
        if not self.high:self.cpu.ctl_set_cpu_model(arm.UC_CPU_ARM_11MPCORE)
        pages=set()
        for block in self.graph['blocks']:
            for page in range(block['start']&~4095,(block['endExclusive']+4095)&~4095,4096):
                if page not in pages:self.cpu.mem_map(page,4096);pages.add(page)
            self.cpu.mem_write(block['start'],block['data'])
        self.cpu.mem_map(self.base,1048576)
        self.cpu.mem_write(self.base,bytes([seed])*1048576)
        self.cpu.mem_map(self.stack,0x10000)
        self.cpu.mem_write(self.stack,bytes([0x57])*0x10000)
        self.cpu.mem_map(self.caller,0x10000)
        self.cpu.mem_write(self.caller,bytes([0x39])*0x10000)
        self.cpu.mem_map(self.stop,4096)
        self.sp=self.stack+0x8000
        self.argument_bytes=0
        self.paths={}
        self.phase='boot'
        self.denied=[(row['address'],row['address']+row['bytes'])for name,row in self.graph['functions'].items()
                     if name in ['sq_compose_unsupported057','sq_startup_require_engine045','uninvoked_vm_operation']]
        self.cpu.hook_add(unicorn.UC_HOOK_CODE,self.code)
        self.cpu.hook_add(unicorn.UC_HOOK_MEM_READ,self.read)
        self.cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,self.write)
        self.cpu.hook_add(unicorn.UC_HOOK_INTR,self.interrupt)

    def code(self,cpu,address,size,unused):
        if address==self.stop:return
        if size!=4 or address not in self.graph['executableAddresses']:
            raise ValueError('Authored composition escaped compiled instruction ownership: '+hex(address))
        if not self.high and cpu.reg_read(arm.UC_ARM_REG_CPSR)&32:
            raise ValueError('Authored ARM composition unexpectedly entered Thumb')
        if any(low<=address<high for low,high in self.denied):
            raise ValueError('Authored composition invoked an unsupported service')
        self.paths.setdefault(self.phase,set()).add(address)

    def allowed(self,address,size,write):
        common=[(self.base,self.base+1048576),(self.stack,self.sp+self.argument_bytes),
                (self.caller,self.caller+0x10000)]
        if any(low<=address<address+size<=high for low,high in common):return True
        if write:
            return any(row['writable']and row['start']<=address<address+size<=row['endExclusive']
                       for row in self.graph['blocks'])
        return any(row['writable']and row['start']<=address<address+size<=row['endExclusive']
                   for row in self.graph['blocks']) or any(
            low<=address<address+size<=high for low,high in self.graph['readableRanges'])

    def read(self,cpu,access,address,size,value,unused):
        if not self.allowed(address,size,False):
            raise ValueError('Authored composition read undeclared data: '+hex(address))

    def write(self,cpu,access,address,size,value,unused):
        if not self.allowed(address,size,True):
            raise ValueError('Authored composition wrote undeclared data: '+hex(address))

    def interrupt(self,cpu,number,unused):
        raise ValueError('Authored composition reached an unexpected trap: '+str(number))

    def call(self,name,args):
        self.argument_bytes=0 if self.high else max(0,len(args)-4)*4
        if self.high:
            integers=[getattr(a64,'UC_ARM64_REG_X'+str(index))for index in range(19,30)]
            doubles=[getattr(a64,'UC_ARM64_REG_D'+str(index))for index in range(8,16)]
            sp,lr,ret=a64.UC_ARM64_REG_SP,a64.UC_ARM64_REG_LR,a64.UC_ARM64_REG_X0
            argument_registers=[getattr(a64,'UC_ARM64_REG_X'+str(index))for index in range(8)]
            self.cpu.reg_write(a64.UC_ARM64_REG_CPACR_EL1,3<<20)
            self.cpu.reg_write(a64.UC_ARM64_REG_FPCR,0)
            self.cpu.reg_write(a64.UC_ARM64_REG_FPSR,0)
        else:
            integers=[getattr(arm,'UC_ARM_REG_R'+str(index))for index in range(4,12)]
            doubles=[getattr(arm,'UC_ARM_REG_D'+str(index))for index in range(8,16)]
            sp,lr,ret=arm.UC_ARM_REG_SP,arm.UC_ARM_REG_LR,arm.UC_ARM_REG_R0
            argument_registers=[getattr(arm,'UC_ARM_REG_R'+str(index))for index in range(4)]
            self.cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf00000)
            self.cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000)
            self.cpu.reg_write(arm.UC_ARM_REG_FPSCR,0)
            self.cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10)
        guards={register:0x57570000+index for index,register in enumerate(integers)}
        guards.update({register:0x3ff0000000000000+index for index,register in enumerate(doubles)})
        for register,value in guards.items():self.cpu.reg_write(register,value)
        self.cpu.reg_write(sp,self.sp)
        self.cpu.reg_write(lr,self.stop)
        for index,value in enumerate(args):
            if index<len(argument_registers):self.cpu.reg_write(argument_registers[index],value)
            else:self.cpu.mem_write(self.sp+(index-len(argument_registers))*4,struct.pack('<I',value))
        self.cpu.emu_start(self.graph['functions'][name]['address'],self.stop,count=10000000)
        pc=a64.UC_ARM64_REG_PC if self.high else arm.UC_ARM_REG_PC
        if self.cpu.reg_read(pc)!=self.stop or self.cpu.reg_read(sp)!=self.sp:
            raise ValueError('Authored composed call did not return with SP')
        if any(self.cpu.reg_read(register)!=value for register,value in guards.items()):
            raise ValueError('Authored composed call changed callee-saved registers')
        return self.cpu.reg_read(ret)

    def boot(self,stack_size=64):
        self.vm=self.call('sq_compose_boot057',[self.base,1048576,stack_size])
        pointer_bytes=8 if self.high else 4
        self.shared=int.from_bytes(self.cpu.mem_read(self.vm+(232 if self.high else 140),pointer_bytes),'little')
        if not self.base<=self.vm<self.base+1048576 or not self.base<=self.shared<self.base+1048576:
            raise ValueError('Authored factory returned objects outside its supplied allocation arena')
        self.prefix=bytes(self.cpu.mem_read(self.shared,68))
        return self.snapshot()

    def snapshot(self):
        count=self.call('sq_compose_observe057',[self.vm,self.caller,64])
        values=list(struct.unpack('<'+'I'*count,bytes(self.cpu.mem_read(self.caller,count*4))))
        keys=['top','base','calls','nativeDepth','stackSize','metamethodNames','internedStrings',
              'gcMembers','rootType','errorType','traps']
        if self.high and bytes(self.cpu.mem_read(self.shared,68))!=bytes([self.seed])*68:
            raise ValueError('Authored native composition provisioned fake legacy fields')
        return dict(zip(keys,values[3:14]))

    def execute(self,profile,value=3,flags=1,cleanup=1):
        self.phase='source-composed-execute'
        count=self.call('sq_compose_run057',[self.vm,profile,value&0xffffffff,flags,cleanup,self.caller])
        if count!=7:raise ValueError('Authored composed API rejected a declared program')
        returned=list(struct.unpack('<IIIIIII',bytes(self.cpu.mem_read(self.caller,28))))
        return {'returned':returned,'state':self.snapshot()}

    def cleanup(self):
        self.phase='source-explicit-caller-cleanup'
        if self.call('sq_compose_cleanup057',[self.vm])!=1:
            raise ValueError('Authored caller cleanup rejected its active session')
        return self.snapshot()

    def heap_counts(self):
        if self.call('sq_compose_heap_counts057',[self.caller])!=4:
            raise ValueError('Authored allocator observer returned the wrong shape')
        return dict(zip(['allocationSlots','active','events','used'],
                        struct.unpack('<IIII',bytes(self.cpu.mem_read(self.caller,16)))))

    def allocations(self):
        count=self.call('sq_compose_heap_allocations057',[self.caller,4096])
        if count%4 or count>4096:raise ValueError('Authored allocation observer exceeded its shape')
        values=struct.unpack('<'+'I'*count,bytes(self.cpu.mem_read(self.caller,count*4)))
        return [{'offset':None if values[at]==0xffffffff else values[at],
                 'bytes':values[at+1],'alignment':values[at+2],'active':bool(values[at+3])}
                for at in range(0,count,4)]

    def meta_contract(self):
        self.phase='source-composed-metamethod-contract'
        before=self.snapshot()
        count=self.call('sq_compose_meta_contract057',[self.vm,self.caller])
        result=list(struct.unpack('<'+'I'*count,bytes(self.cpu.mem_read(self.caller,count*4))))
        if self.snapshot()!=before:raise ValueError('Authored metamethod contract leaked its graph')
        return result


if __name__=='__main__':
    import json
    for profile in ['arm','a64']:
        session=Source(profile)
        print(profile,'BOOT',json.dumps(session.boot()),flush=True)
        for program in [8,256,257]:print(profile,program,json.dumps(session.execute(program)),flush=True)
