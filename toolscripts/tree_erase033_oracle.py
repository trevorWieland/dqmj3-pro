import ctypes
import hashlib
import struct
from pathlib import Path

from unicorn import Uc,UC_ARCH_ARM,UC_ARCH_ARM64,UC_MODE_ARM,UC_PROT_ALL,UC_PROT_READ,UC_PROT_EXEC
from unicorn import UC_HOOK_CODE,UC_HOOK_MEM_READ,UC_HOOK_MEM_WRITE
import unicorn.arm_const as arm
import unicorn.arm64_const as a64
from digest024_build import ROOT,load
from tree_erase033_measure import ENTRIES,MODULE
from tree_erase033_fixtures import make,observe,NAMES,ARM_LAYOUT,NATIVE_LAYOUT,TREE,INPUT


def elf_layout(path):
    sections,symbols=load(path)
    address=symbols["tree_layout_values033"]
    data=next(data[address-low:address-low+44] for low,size,flags,data in sections if low<=address and address+44<=low+size)
    return dict(zip(NAMES,struct.unpack("<11I",data)))


class Cpu:
    def __init__(self, elf=None, native=False):
        self.native=native
        self.ram=0x120000000 if native else 0x2000000
        self.stack=0x130000000 if native else 0x3000000
        self.sp=self.stack+2048
        self.stop=0x140000000 if native else 0x4000000
        self.cpu=Uc(UC_ARCH_ARM64 if native else UC_ARCH_ARM,UC_MODE_ARM)
        if not native:self.cpu.ctl_set_cpu_model(arm.UC_CPU_ARM_11MPCORE)
        self.registers=a64 if native else arm
        self.readonly=[];self.executable=[];self.coverage=set();self.calls=0
        if elf is None:
            image=(ROOT/"generated/update-content0/code.bin").read_bytes()
            assert hashlib.sha256(image).hexdigest()==MODULE
            length=(len(image)+4095)&-4096
            self.cpu.mem_map(0x100000,length)
            self.cpu.mem_write(0x100000,image)
            self.cpu.mem_protect(0x100000,length,UC_PROT_READ|UC_PROT_EXEC)
            self.executable=[(entry,entry+1632) for entry in ENTRIES]
            self.entry=ENTRIES[0];self.layout=ARM_LAYOUT
        else:
            self.layout=elf_layout(elf)
            sections,symbols=load(elf)
            pages={}
            for address,length,flags,data in sections:
                for page in range(address&-4096,(address+length+4095)&-4096,4096):
                    if page not in pages:self.cpu.mem_map(page,4096)
                    pages[page]=pages.get(page,0)|flags
                if data:self.cpu.mem_write(address,data)
                if flags&4:self.executable.append((address,address+length))
                if not flags&1:self.readonly.append((address,address+length))
            for page,flags in pages.items():
                self.cpu.mem_protect(page,4096,UC_PROT_READ|(UC_PROT_EXEC if flags&4 else 0)|(2 if flags&1 else 0))
            self.entry=symbols["tree_erase033"]
        assert self.layout==(NATIVE_LAYOUT if native else ARM_LAYOUT)
        self.cpu.mem_map(self.ram,4096);self.cpu.mem_map(self.stack,4096)
        self.cpu.hook_add(UC_HOOK_CODE,self.code)
        self.cpu.hook_add(UC_HOOK_MEM_READ,self.read)
        self.cpu.hook_add(UC_HOOK_MEM_WRITE,self.write)

    def code(self,cpu,address,size,unused):
        assert size==4 and any(low<=address<high for low,high in self.executable), ("escaped code",hex(address))
        if not self.native:assert not cpu.reg_read(arm.UC_ARM_REG_CPSR)&32
        self.coverage.add(address)

    def read(self,cpu,access,address,size,value,unused):
        if all(address+i-self.ram in self.readable for i in range(size)):return
        if any(low<=address and address+size<=high for low,high in self.readonly):return
        if self.sp-2048<=address and address+size<=self.sp:
            assert all(address+i in self.defined for i in range(size)),("private read before write",hex(address))
            return
        raise ValueError("Read outside measured tree fields: "+hex(address))

    def write(self,cpu,access,address,size,value,unused):
        if all(address+i-self.ram in self.mutable for i in range(size)):return
        if self.sp-2048<=address and address+size<=self.sp:
            self.defined.update(range(address,address+size));return
        raise ValueError("Write escaped outputs/tree node fields: "+hex(address))

    def execute(self,case,entry=None):
        before,self.readable,self.mutable,output,keys=make(case,self.layout,self.ram)
        self.defined=set();cpu=self.cpu;seed=case["seed"]
        cpu.mem_write(self.ram,bytes(before));cpu.mem_write(self.stack,bytes((i+seed)&255 for i in range(4096)))
        if self.native:
            regs=a64;saved={getattr(regs,"UC_ARM64_REG_X"+str(i)):0x24500000000+i*101+seed for i in range(18,30)}
            saved.update({getattr(regs,"UC_ARM64_REG_D"+str(i)):0x3ff0000000000000+i*131+seed for i in range(8,16)})
            fpcr,fpsr=[0,0x03c00000,0x01400000,0x02800000][seed%4],seed
            cpu.reg_write(regs.UC_ARM64_REG_FPCR,fpcr);cpu.reg_write(regs.UC_ARM64_REG_FPSR,fpsr)
            args=[regs.UC_ARM64_REG_X0,regs.UC_ARM64_REG_X1,regs.UC_ARM64_REG_X2]
            sp,lr,pc,ret=regs.UC_ARM64_REG_SP,regs.UC_ARM64_REG_X30,regs.UC_ARM64_REG_PC,regs.UC_ARM64_REG_X0
        else:
            regs=arm;saved={regs.UC_ARM_REG_R4+i:0x42600000+i*101+seed for i in range(8)}
            saved.update({regs.UC_ARM_REG_D8+i:0x3ff0000000000000+i*131+seed for i in range(8)})
            cpu.reg_write(regs.UC_ARM_REG_CPSR,0x10|((seed&15)<<28));cpu.reg_write(regs.UC_ARM_REG_C1_C0_2,0xf00000)
            fpscr=[0,0x03c00017,0x01400008,0x02800003][seed%4]
            cpu.reg_write(regs.UC_ARM_REG_FPEXC,0x40000000);cpu.reg_write(regs.UC_ARM_REG_FPSCR,fpscr)
            args=[regs.UC_ARM_REG_R0,regs.UC_ARM_REG_R1,regs.UC_ARM_REG_R2]
            sp,lr,pc,ret=regs.UC_ARM_REG_SP,regs.UC_ARM_REG_LR,regs.UC_ARM_REG_PC,regs.UC_ARM_REG_R0
        for register,value in saved.items():cpu.reg_write(register,value)
        for register,value in zip(args,[self.ram+output,self.ram+TREE,self.ram+INPUT]):cpu.reg_write(register,value)
        cpu.reg_write(sp,self.sp);cpu.reg_write(lr,self.stop)
        cpu.emu_start(self.entry if entry is None else entry,self.stop,count=100000)
        assert cpu.reg_read(pc)==self.stop and cpu.reg_read(sp)==self.sp
        assert all(cpu.reg_read(register)==value for register,value in saved.items())
        assert cpu.reg_read(ret)==self.ram+output
        if self.native:
            assert cpu.reg_read(regs.UC_ARM64_REG_FPCR)==fpcr and cpu.reg_read(regs.UC_ARM64_REG_FPSR)==fpsr
        else:assert cpu.reg_read(regs.UC_ARM_REG_FPSCR)==fpscr and cpu.reg_read(regs.UC_ARM_REG_FPEXC)==0x40000000
        after=bytes(cpu.mem_read(self.ram,4096))
        assert all(a==b for i,(a,b) in enumerate(zip(before,after)) if i not in self.mutable)
        self.calls+=1
        return after,observe(before,after,self.layout,self.ram,output,keys)


class Windows:
    def __init__(self,library):
        self.dll=ctypes.CDLL(str(Path(library).resolve()))
        self.dll.tree_layout033.restype=ctypes.POINTER(ctypes.c_uint32)
        self.layout=dict(zip(NAMES,self.dll.tree_layout033()[:11]));assert self.layout==NATIVE_LAYOUT
        self.function=self.dll.tree_erase033;self.function.argtypes=[ctypes.c_void_p]*3;self.function.restype=ctypes.c_void_p
        self.kernel=ctypes.WinDLL("kernel32",use_last_error=True)
        self.kernel.VirtualAlloc.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32,ctypes.c_uint32];self.kernel.VirtualAlloc.restype=ctypes.c_void_p
        self.kernel.VirtualProtect.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32,ctypes.POINTER(ctypes.c_uint32)]
        self.kernel.VirtualFree.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32]
        self.allocation=self.kernel.VirtualAlloc(None,12288,0x3000,1)
        assert self.allocation and self.allocation>0xffffffff
        self.ram=self.allocation+4096;previous=ctypes.c_uint32()
        assert self.kernel.VirtualProtect(self.ram,4096,4,ctypes.byref(previous))
        self.calls=0

    def execute(self,case):
        before,readable,mutable,output,keys=make(case,self.layout,self.ram)
        ctypes.memmove(self.ram,bytes(before),4096)
        assert self.function(self.ram+output,self.ram+TREE,self.ram+INPUT)==self.ram+output
        after=ctypes.string_at(self.ram,4096)
        assert all(a==b for i,(a,b) in enumerate(zip(before,after)) if i not in mutable)
        self.calls+=1
        return after,observe(before,after,self.layout,self.ram,output,keys)

    def close(self):
        assert self.kernel.VirtualFree(self.allocation,0,0x8000)
