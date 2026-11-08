import ctypes
import struct
import sys
from pathlib import Path
from unicorn import Uc,UC_ARCH_ARM,UC_ARCH_ARM64,UC_MODE_ARM,UC_HOOK_CODE,UC_HOOK_MEM_READ,UC_HOOK_MEM_WRITE
from unicorn import arm_const as arm,arm64_const as a64

WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'toolscripts'))
from digest024_build import load
from digest024_oracle import arm_instruction_addresses
from native_stream058_original import Original,RAM,SIZE,STACK,STOP

ADDRESSES={'resource_metadata_slice062':0x4440a4,'resource_metadata_receive062':0x6ce7f8,'resource_packet_slice062':0x444000,'resource_packet_receive062':0x6ce720,'resource_record_append062':0x79a3ec,'resource_seed062':0x615ecc,'resource_manager_matches062':0x6b6530,'resource_manager_query062':0x6cb234,'resource_manager_record062':0x6cb1f8,'resource_manager_post_word062':0x3dccb4,'resource_initialize062':0x251e64,'resource_destroy062':0x251ec8,'resource_snapshot_initialize062':0x662a34}


class Runtime:
    def __init__(self,target,artifacts,heap_services=False,seed_entry=False,manager_entry=False,lifetime_entry=False):
        self.target=target;self.profilePointerBytes=8 if target in ['windows','a64']else 4;self.coverage=set()
        if target=='original':
            self.original=Original(ROOT/'work/native-stream061/final-attempt002/build');self.cpu=self.original.cpu;self.ram=RAM;self.stack=STACK;self.stop=STOP
            self.symbols={}
            if seed_entry:
                import bisect
                self.original.ranges.append((0x100670,0x10069c,0x100670));self.original.ranges.sort();self.original.starts=[row[0]for row in self.original.ranges]
            if manager_entry:
                self.original.ranges.append((0x6cb234,0x6cb248,0x6cb234));self.original.ranges.sort();self.original.starts=[row[0]for row in self.original.ranges]
            if lifetime_entry:
                self.original.ranges.append((0x664800,0x664818,0x664800));self.original.ranges.sort();self.original.starts=[row[0]for row in self.original.ranges]
            allowed=[]
            if heap_services:
                from elftools.elf.elffile import ELFFile
                file=artifacts/'arm/asset062.elf';sections,self.symbols=load(file);pages=set()
                for address,size,flags,data in sections:
                    for page in range(address&-4096,(address+size+4095)&-4096,4096):
                        if page not in pages:self.cpu.mem_map(page,4096);pages.add(page)
                    if data:self.cpu.mem_write(address,data)
                with file.open('rb')as stream:
                    for entry in ELFFile(stream).get_section_by_name('.symtab').iter_symbols():
                        if entry['st_info']['type']=='STT_FUNC'and entry.name.startswith(('fixture_heap_','fixture_sdk_','fixture_lifetime_')):allowed.append((entry['st_value'],entry['st_value']+entry['st_size']))
                self.original.fixture_ranges.extend(allowed)
            def no_authored(cpu,address,size,data):
                if any(low<=address<high for low,high in self.original.fixture_ranges)and not any(low<=address<high for low,high in allowed):raise ValueError('062 reference reached undeclared authored service code')
            self.cpu.hook_add(UC_HOOK_CODE,no_authored);return
        if target=='windows':
            self.library=ctypes.CDLL(str(artifacts/target/'asset062.dll'));self.profile=tuple((ctypes.c_uint32*9).in_dll(self.library,'fixture_layout062'))
            if self.profile!=(8,4,4,128,248,240,244,7660,4):raise ValueError('062 independent Windows layout mismatch')
            return
        self.cpu=Uc(UC_ARCH_ARM if target=='arm'else UC_ARCH_ARM64,UC_MODE_ARM)
        if target=='arm':self.cpu.ctl_set_cpu_model(arm.UC_CPU_ARM_11MPCORE)
        self.ram=RAM if target=='arm'else 0x102000000;self.stack=STACK if target=='arm'else 0x106000000;self.stop=STOP if target=='arm'else 0x10fff0000
        file=artifacts/target/'asset062.elf';self.sections,self.symbols=load(file);pages=set()
        for address,size,flags,data in self.sections:
            for page in range(address&-4096,(address+size+4095)&-4096,4096):
                if page not in pages:self.cpu.mem_map(page,4096);pages.add(page)
            if data:self.cpu.mem_write(address,data)
        self.cpu.mem_map(self.ram,SIZE);self.cpu.mem_map(self.stack,0x20000);self.cpu.mem_map(self.stop,4096)
        self.instructions=arm_instruction_addresses(file)if target=='arm'else{p for a,n,f,d in self.sections if f&4 for p in range(a,a+n,4)}
        self.defined=set()
        def code(cpu,address,size,data):
            if address not in self.instructions:raise ValueError('062 source escaped compiled instruction closure')
            self.coverage.add(address)
        def write(cpu,access,address,size,value,data):
            if self.stack<=address<self.stack+0x20000:self.defined.update(range(address,address+size))
        def read(cpu,access,address,size,value,data):
            if self.stack<=address<self.stack+0x20000 and any(p not in self.defined for p in range(address,address+size)):raise ValueError('062 source read undefined private stack byte')
        self.cpu.hook_add(UC_HOOK_CODE,code);self.cpu.hook_add(UC_HOOK_MEM_WRITE,write);self.cpu.hook_add(UC_HOOK_MEM_READ,read)
        self.profile=struct.unpack('<9I',self.cpu.mem_read(self.symbols['fixture_layout062'],36))
        if self.profile!=(self.profilePointerBytes,4,4,128,248,240,244,7660,4):raise ValueError('062 independent CPU layout mismatch')

    def constant(self,name,count):
        if self.target=='windows':return tuple((ctypes.c_uint32*count).in_dll(self.library,name))
        return struct.unpack('<'+str(count)+'I',self.cpu.mem_read(self.symbols[name],count*4))

    def symbol(self,name):
        return ctypes.cast(getattr(self.library,name),ctypes.c_void_p).value if self.target=='windows'else self.symbols[name]

    def call(self,name,arguments):
        if self.target=='windows':
            function=getattr(self.library,name)
            if name=='fixture_heap_allocate062':function.argtypes=[ctypes.c_void_p,ctypes.c_uint32,ctypes.c_uint32];function.restype=ctypes.c_void_p;return function(*arguments)
            if name in ['resource_initialize062','resource_destroy062','resource_snapshot_initialize062']:
                function.argtypes=[ctypes.c_void_p]*(3 if name=='resource_initialize062'else 2 if name=='resource_destroy062'else 1);function.restype=ctypes.c_void_p;return function(*arguments)
            if name in ['resource_manager_matches062','resource_manager_query062','resource_manager_record062']:
                function.argtypes=[ctypes.c_void_p,ctypes.c_uint32]+([ctypes.c_uint32]if name=='resource_manager_matches062'else[]);function.restype=ctypes.c_void_p if name=='resource_manager_record062'else ctypes.c_uint32;return function(*arguments)
            if name=='resource_manager_post_block062':function.argtypes=[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_uint32,ctypes.c_uint32];function.restype=None;return function(*arguments)
            if name=='resource_manager_post_word062':function.argtypes=[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_uint32];function.restype=None;return function(*arguments)
            if name=='resource_seed062':function.argtypes=[ctypes.c_uint32];function.restype=None;return function(*arguments)
            function.argtypes=([ctypes.c_void_p,ctypes.c_void_p,ctypes.c_uint32,ctypes.c_uint32,ctypes.c_void_p]if name=='fixture_queue_header062'else[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_void_p]);function.restype=ctypes.c_uint32 if'resource_packet_'in name else None
            return function(*arguments)
        if self.target=='original':
            if name=='resource_manager_post_block062':return self.original.call(0x3dce7c if arguments[3]==8 else 0x3dcea4,arguments[:3])
            return self.original.call(ADDRESSES[name],arguments)
        cpu=self.cpu;self.defined.clear();sp=self.stack+0x10000
        if self.target=='arm':
            saved=[(getattr(arm,'UC_ARM_REG_R'+str(i)),0x62000000+i)for i in range(4,12)]+[(getattr(arm,'UC_ARM_REG_D'+str(i)),0x6200000012340000+i)for i in range(8,16)]
            settings=[(arm.UC_ARM_REG_CPSR,0x10),(arm.UC_ARM_REG_C1_C0_2,0xf<<20),(arm.UC_ARM_REG_FPEXC,0x40000000),(arm.UC_ARM_REG_FPSCR,0x00400000),(arm.UC_ARM_REG_SP,sp),(arm.UC_ARM_REG_LR,self.stop)]
            argregs=[arm.UC_ARM_REG_R0,arm.UC_ARM_REG_R1,arm.UC_ARM_REG_R2,arm.UC_ARM_REG_R3];result=arm.UC_ARM_REG_R0;stackreg=arm.UC_ARM_REG_SP;pc=arm.UC_ARM_REG_PC
        else:
            saved=[(getattr(a64,'UC_ARM64_REG_X'+str(i)),0x6200000012340000+i)for i in range(19,30)]+[(getattr(a64,'UC_ARM64_REG_D'+str(i)),0x6200000012340000+i)for i in range(8,16)]
            settings=[(a64.UC_ARM64_REG_SP,sp),(a64.UC_ARM64_REG_X30,self.stop),(a64.UC_ARM64_REG_FPCR,0),(a64.UC_ARM64_REG_FPSR,0)]
            argregs=[getattr(a64,'UC_ARM64_REG_X'+str(i))for i in range(8)];result=a64.UC_ARM64_REG_X0;stackreg=a64.UC_ARM64_REG_SP;pc=a64.UC_ARM64_REG_PC
        for reg,value in settings+saved:cpu.reg_write(reg,value)
        for reg,value in zip(argregs,arguments):cpu.reg_write(reg,value&((1<<(self.profilePointerBytes*8))-1))
        for index,value in enumerate(arguments[len(argregs):]):
            at=sp+index*self.profilePointerBytes;cpu.mem_write(at,(value&((1<<(self.profilePointerBytes*8))-1)).to_bytes(self.profilePointerBytes,'little'));self.defined.update(range(at,at+self.profilePointerBytes))
        cpu.emu_start(self.symbols[name],self.stop,count=1000000)
        if cpu.reg_read(pc)!=self.stop or cpu.reg_read(stackreg)!=sp:raise ValueError('062 source did not normally return/restack')
        if any(cpu.reg_read(reg)!=value for reg,value in saved):raise ValueError('062 source callee-save violation')
        if self.target=='arm'and cpu.reg_read(arm.UC_ARM_REG_FPSCR)!=0x00400000:raise ValueError('062 source FPSCR changed')
        if self.target=='a64'and(cpu.reg_read(a64.UC_ARM64_REG_FPCR)!=0 or cpu.reg_read(a64.UC_ARM64_REG_FPSR)!=0):raise ValueError('062 source FP state changed')
        return cpu.reg_read(result)if name in ['resource_manager_record062','resource_initialize062','resource_destroy062','resource_snapshot_initialize062','fixture_heap_allocate062']else cpu.reg_read(result)&0xffffffff

    def close(self):
        if self.target=='windows':ctypes.windll.kernel32.FreeLibrary.argtypes=[ctypes.c_void_p];ctypes.windll.kernel32.FreeLibrary(self.library._handle)

    def run(self,name,before,args):
        if len(before)!=SIZE:raise ValueError('062 caller arena has wrong size')
        lengths=[128,248 if 'metadata'in name else 7660,4]
        if name.endswith('receive062'):lengths[0],lengths[1]=128,lengths[1]
        for offset,length in zip(args,lengths):
            if offset<0 or offset+length>SIZE:raise ValueError('062 packet object exceeds bounded caller arena')
        for index,(offset,length)in enumerate(zip(args,lengths)):
            if any(offset<other+count and other<offset+length for other,count in list(zip(args,lengths))[index+1:]):raise ValueError('062 packet objects alias outside qualification contract')
        if 'resource_packet_'in name:
            cursor=struct.unpack_from('<i',before,args[2])[0]
            if cursor<0 or cursor>1000:raise ValueError('062 payload cursor outside admitted nonnegative range')
            header=args[0]if name.endswith('receive062')and cursor==0 else args[1]
            if struct.unpack_from('<i',before,header)[0]>7656:raise ValueError('062 payload length exceeds declared packet capacity')
        allocation=ctypes.create_string_buffer(SIZE)if self.target=='windows'else None
        ram=ctypes.addressof(allocation)if allocation is not None else self.ram
        if self.target in ['windows','a64']and ram<=0xffffffff:raise ValueError('062 host pointer did not exceed32bits')
        arguments=[ram+x for x in args]
        if allocation is not None:ctypes.memmove(ram,bytes(before),SIZE)
        else:self.cpu.mem_write(ram,bytes(before))
        self.last_return_completed=False
        result=self.call(name,arguments)
        self.last_return_completed=True
        after=ctypes.string_at(ram,SIZE)if allocation is not None else bytes(self.cpu.mem_read(ram,SIZE))
        return result,after
