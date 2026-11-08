import ctypes
import struct
import sys
from pathlib import Path
from unicorn import Uc,UC_ARCH_ARM,UC_ARCH_ARM64,UC_MODE_ARM,UC_HOOK_CODE,UC_HOOK_MEM_READ,UC_HOOK_MEM_WRITE
from unicorn import arm_const as arm,arm64_const as a64
from elftools.elf.elffile import ELFFile

WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'work/native-asset062-channel'))
from runtime062c import ChannelRuntime
sys.path.append(str(ROOT/'toolscripts'))
from digest024_build import load
from digest024_oracle import arm_instruction_addresses


class SdkRuntime(ChannelRuntime):
    def __init__(self,target,folder=None):
        self.target=target;self.profilePointerBytes=8 if target in ['windows','a64']else 4;self.coverage=set()
        folder=folder or WORK/'build'
        if target=='original':
            from native_stream058_original import Original
            self.original=Original(ROOT/'work/native-stream061/final-attempt002/build');self.cpu=self.original.cpu;self.ram=0x2000000;self.stack=0x3000000;self.stop=0x4000000
            self.sections,self.symbols=load(folder/'arm/sdk062s.elf');mapped=set()
            for address,size,flags,data in self.sections:
                for page in range(address&-4096,(address+size+4095)&-4096,4096):
                    if page not in mapped:self.cpu.mem_map(page,4096);mapped.add(page)
                if data:self.cpu.mem_write(address,data)
            allowed=[]
            with (folder/'arm/sdk062s.elf').open('rb')as stream:
                for row in ELFFile(stream).get_section_by_name('.symtab').iter_symbols():
                    if row['st_info']['type']=='STT_FUNC'and row.name in ['fixture_sdk_allocate062s','fixture_sdk_dispose062s']:
                        allowed.append((row['st_value'],row['st_value']+row['st_size']))
            prior=list(self.original.fixture_ranges);self.original.fixture_ranges.extend(allowed)
            def service_guard(cpu,address,size,data):
                if any(a<=address<z for a,z in prior+allowed)and not any(a<=address<address+size<=z for a,z in allowed):raise ValueError('062s original reached an undeclared authored endpoint')
            self.cpu.hook_add(UC_HOOK_CODE,service_guard)
            for a,z in [(0x474598,0x4745b4),(0x4745b8,0x4745d4),(0x13c48c,0x13c4dc)]:self.original.ranges.append((a,z,a))
            self.original.ranges.sort();self.original.starts=[r[0]for r in self.original.ranges]
            self.layout=self.constant('fixture_sdk_layout062s',39);return
        if target=='windows':
            self.library=ctypes.CDLL(str(folder/'windows/sdk062s.dll'));self.layout=self.constant('fixture_sdk_layout062s',39);return
        self.cpu=Uc(UC_ARCH_ARM if target=='arm'else UC_ARCH_ARM64,UC_MODE_ARM)
        if target=='arm':self.cpu.ctl_set_cpu_model(arm.UC_CPU_ARM_11MPCORE)
        self.ram=0x2000000 if target=='arm'else 0x102000000;self.stack=0x3000000 if target=='arm'else 0x106000000;self.stop=0x4000000 if target=='arm'else 0x10fff0000
        self.sections,self.symbols=load(folder/target/'sdk062s.elf');mapped=set()
        for address,size,flags,data in self.sections:
            for page in range(address&-4096,(address+size+4095)&-4096,4096):
                if page not in mapped:self.cpu.mem_map(page,4096);mapped.add(page)
            if data:self.cpu.mem_write(address,data)
        self.cpu.mem_map(self.ram,0x100000);self.cpu.mem_map(self.stack,0x20000);self.cpu.mem_map(self.stop,4096)
        self.instructions=arm_instruction_addresses(folder/target/'sdk062s.elf')if target=='arm'else{a for p,n,f,d in self.sections if f&4 for a in range(p,p+n,4)}
        self.defined=set()
        def code(cpu,address,size,data):
            if address not in self.instructions:raise ValueError('062s source escaped compiled closure')
            self.coverage.add(address)
        def write(cpu,access,address,size,value,data):
            if self.stack<=address<self.stack+0x20000:self.defined.update(range(address,address+size))
        def read(cpu,access,address,size,value,data):
            if self.stack<=address<self.stack+0x20000 and any(p not in self.defined for p in range(address,address+size)):raise ValueError('062s undefined source stack read')
        self.cpu.hook_add(UC_HOOK_CODE,code);self.cpu.hook_add(UC_HOOK_MEM_WRITE,write);self.cpu.hook_add(UC_HOOK_MEM_READ,read)
        self.layout=self.constant('fixture_sdk_layout062s',39)

    def call(self,name,arguments):
        if self.target=='original':return self.original.call(dict(sdk_map_initialize062s=0x4b43d0,sdk_context062s=0x1249d0,sdk_context_alternate062s=0x4b7748,sdk_map_value062s=0x147a40,sdk_allocate062s=0x15ece0,sdk_mutex_acquire062s=0x474598,sdk_mutex_release062s=0x4745b8,sdk_recursive_acquire062s=0x170704,sdk_recursive_release062s=0x1707b4)[name],arguments)&0xffffffff
        if self.target=='windows':
            function=getattr(self.library,name);function.argtypes=[ctypes.c_void_p]*len(arguments);function.restype=ctypes.c_void_p if name in ['sdk_map_initialize062s','sdk_context062s','sdk_context_alternate062s','sdk_map_value062s','sdk_allocate062s']else None
            return function(*arguments)
        value=super().call(name,arguments)
        return self.cpu.reg_read(arm.UC_ARM_REG_R0 if self.target=='arm'else a64.UC_ARM64_REG_X0)if name in ['sdk_map_initialize062s','sdk_context062s','sdk_context_alternate062s','sdk_map_value062s','sdk_allocate062s']else value

    def bind(self,heap,owner):
        p=self.profilePointerBytes
        self.store(self.symbol('fixture_sdk_heap062s'),heap.to_bytes(p,'little'))
        self.store(self.symbol('fixture_sdk_owner062s'),owner.to_bytes(p,'little'))
        env=b''.join(self.symbol(n).to_bytes(p,'little')for n in ['fixture_sdk_allocate062s','fixture_sdk_dispose062s','fixture_sdk_thread_id062s','fixture_sdk_thread_owner062s','fixture_sdk_wait062s','fixture_sdk_signal062s'])+b'\0'
        self.store(self.symbol('sdk_environment062s'),env)
        if self.target=='original':
            self.store(0x8b6378+0x3c,struct.pack('<II',self.symbol('fixture_sdk_allocate062s'),self.symbol('fixture_sdk_dispose062s')))
            self.store(0x8b637c,b'\0');self.cpu.reg_write(arm.UC_ARM_REG_C13_C0_3,owner)
