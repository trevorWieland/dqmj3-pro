import ctypes
import struct

from unicorn import Uc, UC_ARCH_ARM, UC_ARCH_ARM64, UC_MODE_ARM, UC_HOOK_CODE, UC_HOOK_MEM_READ, UC_HOOK_MEM_WRITE
from unicorn import arm_const as arm
from unicorn import arm64_const as a64

from native_stream058_build import ROOT,WORK,load
from native_stream058_original import Original,RAM,SIZE,STREAM,STACK,STOP
from native_stream058_layout import ARM_WORDS,NATIVE_WORDS,layout,seed,model
from digest024_oracle import arm_instruction_addresses


ENTRIES=dict(init='fn_00733c00',default_init='fn_00733d64',reset='fn_00733d78',end='fn_00733bb0',
             allocate='fn_00734b34',dispose='fn_00734b3c')


class CpuSource:
    def __init__(self,target,artifacts=None):
        self.target=target
        self.cpu=Uc(UC_ARCH_ARM64 if target=='a64'else UC_ARCH_ARM,UC_MODE_ARM)
        if target=='arm':self.cpu.ctl_set_cpu_model(arm.UC_CPU_ARM_11MPCORE)
        self.ram=0x102000000 if target=='a64'else RAM
        self.stack=0x106000000 if target=='a64'else STACK
        self.stop=0x10fff0000 if target=='a64'else STOP
        sections,self.symbols=load((artifacts or WORK/'build')/target/'stream058.elf')
        pages=set()
        for address,size,flags,data in sections:
            for page in range(address&-4096,(address+size+4095)&-4096,4096):
                if page not in pages:self.cpu.mem_map(page,4096);pages.add(page)
            if data:self.cpu.mem_write(address,data)
        self.cpu.mem_map(self.ram,SIZE);self.cpu.mem_map(self.stack,0x20000);self.cpu.mem_map(self.stop,4096)
        probe=struct.unpack('<49I',bytes(self.cpu.mem_read(self.symbols['fixture_layout058'],196)))
        self.profile=layout(probe)
        self.sections=sections
        self.instructions=arm_instruction_addresses((artifacts or WORK/'build')/target/'stream058.elf')if target=='arm'else{
            pc for address,size,flags,data in sections if flags&4 for pc in range(address,address+size,4)}
        self.coverage=set();self.defined_stack=set();self.kernel_entries=[]
        self.cpu.hook_add(UC_HOOK_CODE,self.code)
        self.cpu.hook_add(UC_HOOK_MEM_READ,self.read)
        self.cpu.hook_add(UC_HOOK_MEM_WRITE,self.write)

    def code(self,cpu,address,size,unused):
        if size!=4 or address not in self.instructions:raise ValueError('058 source escaped compiled instruction closure')
        self.coverage.add(address)
        if address==self.symbols.get('fn_00733e28'):
            pointer=cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm'else a64.UC_ARM64_REG_X0)
            p=self.profile['pointer'];state_offset=28 if p==4 else 40
            state=int.from_bytes(cpu.mem_read(pointer+state_offset,p),'little')
            self.kernel_entries.append(dict(mode=cpu.mem_read(state,1)[0],hold=int.from_bytes(cpu.mem_read(state+(56 if p==4 else 64),4),'little'),
                                            bits=int.from_bytes(cpu.mem_read(state+(60 if p==4 else 68),4),'little'),
                                            availableInput=int.from_bytes(cpu.mem_read(pointer+(4 if p==4 else 8),4),'little'),
                                            availableOutput=int.from_bytes(cpu.mem_read(pointer+(16 if p==4 else 24),4),'little')))

    def read(self,cpu,access,address,size,value,unused):
        if self.ram<=address<address+size<=self.ram+SIZE:return
        if any(low<=address<address+size<=low+count for low,count,flags,data in self.sections):return
        if self.stack<=address<address+size<=self.stack+0x20000:
            if not all(i in self.defined_stack for i in range(address,address+size)):
                raise ValueError('058 source read undefined stack bytes')
            return
        raise ValueError('058 source read outside initialized object/module storage')

    def write(self,cpu,access,address,size,value,unused):
        if self.ram<=address<address+size<=self.ram+SIZE:return
        if self.stack<=address<address+size<=self.stack+0x20000:
            self.defined_stack.update(range(address,address+size));return
        if any(flags&1 and low<=address<address+size<=low+count for low,count,flags,data in self.sections):return
        raise ValueError('058 source wrote outside mutable objects/stack/data')

    def call(self,name,args,pointer_result=False):
        cpu=self.cpu;sp=self.stack+0x10000
        self.defined_stack.clear()
        if self.target=='arm':
            cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10);cpu.reg_write(arm.UC_ARM_REG_SP,sp);cpu.reg_write(arm.UC_ARM_REG_LR,self.stop)
            cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20);cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000)
            cpu.reg_write(arm.UC_ARM_REG_FPSCR,0x00400000)
            registers=[arm.UC_ARM_REG_R0,arm.UC_ARM_REG_R1,arm.UC_ARM_REG_R2,arm.UC_ARM_REG_R3]
            for index,value in enumerate(args[4:]):
                cpu.mem_write(sp+index*4,struct.pack('<I',value&0xffffffff))
                self.defined_stack.update(range(sp+index*4,sp+index*4+4))
            pc,spreg,result=arm.UC_ARM_REG_PC,arm.UC_ARM_REG_SP,arm.UC_ARM_REG_R0
            saved=[(getattr(arm,'UC_ARM_REG_R'+str(i)),0x58000000+i)for i in range(4,12)]
            saved += [(getattr(arm,'UC_ARM_REG_D'+str(i)),0x5800000012340000+i)for i in range(8,16)]
        else:
            cpu.reg_write(a64.UC_ARM64_REG_SP,sp);cpu.reg_write(a64.UC_ARM64_REG_X30,self.stop)
            cpu.reg_write(a64.UC_ARM64_REG_FPCR,0);cpu.reg_write(a64.UC_ARM64_REG_FPSR,0)
            registers=[getattr(a64,'UC_ARM64_REG_X'+str(i))for i in range(8)]
            pc,spreg,result=a64.UC_ARM64_REG_PC,a64.UC_ARM64_REG_SP,a64.UC_ARM64_REG_W0
            saved=[(getattr(a64,'UC_ARM64_REG_X'+str(i)),0x5800000012340000+i)for i in range(18,30)]
            saved += [(getattr(a64,'UC_ARM64_REG_D'+str(i)),0x5800000012340000+i)for i in range(8,16)]
        for register,value in saved:cpu.reg_write(register,value)
        for register,value in zip(registers,args):cpu.reg_write(register,value&((1<<(self.profile['pointer']*8))-1))
        cpu.emu_start(self.symbols[name],self.stop,count=10000000)
        if cpu.reg_read(pc)!=self.stop or cpu.reg_read(spreg)!=sp:raise ValueError('058 source return/SP failure')
        if any(cpu.reg_read(register)!=value for register,value in saved):raise ValueError('058 source callee-save failure')
        if self.target=='arm'and cpu.reg_read(arm.UC_ARM_REG_FPSCR)!=0x00400000:raise ValueError('058 source changed FPSCR')
        if self.target=='a64'and(cpu.reg_read(a64.UC_ARM64_REG_FPCR)or cpu.reg_read(a64.UC_ARM64_REG_FPSR)):raise ValueError('058 source changed FPCR/FPSR')
        if pointer_result:
            return cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm'else a64.UC_ARM64_REG_X0)
        value=cpu.reg_read(result)&0xffffffff
        return value if value<0x80000000 else value-0x100000000


class Native:
    def __init__(self,artifacts=None):
        self.library=ctypes.CDLL(str((artifacts or WORK/'build')/'windows/stream058.dll'))
        self.profile=layout(list((ctypes.c_uint32*49).in_dll(self.library,'fixture_layout058')))
        self.symbols={name:ctypes.cast(getattr(self.library,name),ctypes.c_void_p).value for name in
                      ['fn_00733c00','fn_00733d64','fn_00733d78','fn_00733bb0','fn_00734b34','fn_00734b3c',
                       'fixture_bind058','fixture_allocate058','fixture_dispose058','fixture_alternate_dispose058']}
        for name in ENTRIES.values():getattr(self.library,name).restype=ctypes.c_int32
        self.library.fn_00733c00.argtypes=[ctypes.c_void_p,ctypes.c_int32,ctypes.c_void_p,ctypes.c_uint32]
        self.library.fn_00733d64.argtypes=[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_uint32]
        self.library.fn_00733d78.argtypes=[ctypes.c_void_p];self.library.fn_00733bb0.argtypes=[ctypes.c_void_p]
        self.library.fixture_bind058.argtypes=[ctypes.c_void_p];self.library.fixture_bind058.restype=None
        self.library.fn_00734b34.argtypes=[ctypes.c_void_p,ctypes.c_uint32,ctypes.c_uint32]
        self.library.fn_00734b34.restype=ctypes.c_void_p
        self.library.fn_00734b3c.argtypes=[ctypes.c_void_p,ctypes.c_void_p]
        self.library.fn_00734b3c.restype=None

    def close(self):
        if self.library is not None:
            from _ctypes import FreeLibrary
            FreeLibrary(self.library._handle)
            self.library=None


class Backend:
    def __init__(self,target,artifacts=None):
        self.target=target
        self.machine=Original(artifacts)if target=='original'else Native(artifacts)if target=='windows'else CpuSource(target,artifacts)
        self.profile=layout(ARM_WORDS)if target=='original'else self.machine.profile
        self.symbols=dict(self.machine.symbols)
        self.symbols['default_allocate']=0x734b34 if target=='original'else self.symbols['fn_00734b34']
        self.symbols['default_dispose']=0x734b3c if target=='original'else self.symbols['fn_00734b3c']

    def execute(self,case):
        m=self.machine
        if self.target=='windows':
            allocation=ctypes.create_string_buffer(SIZE);ram=ctypes.addressof(allocation)
            if ram<=0xffffffff:raise ValueError('058 Windows requires genuine high pointers')
        else:ram=RAM if self.target=='original'else m.ram
        before=seed(self.profile,ram,self.symbols,case)
        if self.target=='windows':ctypes.memmove(ram,bytes(before),SIZE);m.library.fixture_bind058(ram+0x1000)
        else:
            m.cpu.mem_write(ram,bytes(before))
            if self.target=='original':
                for address,value in((0x89a670,0xf531),(0x8bfb54,0x531),(0x89a688,ram+0x3000)):
                    m.cpu.mem_write(address,struct.pack('<I',value))
                m.cpu.mem_write(0x89a508,b'\1');m.call(m.symbols['fixture_bind058'],[ram+0x1000])
            else:m.call('fixture_bind058',[ram+0x1000])
        operation=case.get('operation','init');name=ENTRIES[operation]
        stream=0 if case.get('null_stream')else ram+STREAM
        version=0 if case.get('version')=='null'else ram+0x800
        size=1 if case.get('wrong_size')else self.profile['stream_size']
        args=[stream,case.get('window_bits',31),version,size]if operation=='init'else[stream,version,size]if operation=='default_init'else[stream]
        if operation=='allocate':args=[ram+0x2000,case.get('count',1),case.get('bytes',1)]
        if operation=='dispose':args=[ram+0x2000,0 if case.get('null_memory')else ram+0x8000]
        expected,wanted=model(before,self.profile,ram,self.symbols,case)
        if self.target=='windows':
            result=getattr(m.library,name)(*args);actual=ctypes.string_at(ram,SIZE)
            if operation=='allocate'and result is None:result=0
        elif self.target=='original':
            entry=0x733bfc if operation=='init'else 0x733bac if operation=='end'else int(name[3:],16)
            result=m.call(entry,args);actual=bytes(m.cpu.mem_read(ram,SIZE))
        else:result=m.call(name,args,pointer_result=operation=='allocate');actual=bytes(m.cpu.mem_read(ram,SIZE))
        if operation=='dispose':result=None
        if result!=expected or actual!=wanted:
            differences=[i for i,(a,b)in enumerate(zip(actual,wanted))if a!=b]
            error=ValueError('058 '+self.target+' status'+str(result)+' expected'+str(expected)+' differs at '+','.join(hex(i)for i in differences[:16]))
            error.actual=actual;error.wanted=wanted;error.differences=differences;error.normal_return=True
            raise error
        if operation=='allocate':
            result=dict(nonnull=result!=0,offset=result-ram if result else None)
        return dict(status=result,fullArenaExpected=True,normalReturn=True)


if __name__=='__main__':
    for target in('original','arm','windows','a64'):
        backend=Backend(target)
        for case in[{},dict(default_allocate=True,default_dispose=True),dict(window_bits=7),dict(operation='reset'),dict(operation='end',window=True)]:
            print(target,case,backend.execute(case))
