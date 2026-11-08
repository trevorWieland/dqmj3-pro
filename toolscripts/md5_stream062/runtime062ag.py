import ctypes
import json
from pathlib import Path
import struct
import sys

ROOT = next(p for p in Path(__file__).resolve().parents if (p / "AGENTS.md").is_file())
sys.path.insert(0,str(ROOT/"toolscripts"))
from digest024_build import load
from digest024_oracle import Arm as BaseArm, Android as BaseAndroid, RAM, SP, STOP, within
from unicorn import arm_const as arm

NAMES={"init":"sdk_md5_initialize062ag","update":"sdk_md5_update062ag",
    "finish":"sdk_md5_finish062ag","block":"sdk_md5_block062ag"}
ORIGINAL={"init":0x160094,"update":0x1600c4,"finish":0x160190,"block":0x526ad0}
CTX=128


def read_layout(artifact):
    import hashlib
    info=json.loads((Path(artifact).parent/"layout.json").read_text())
    probe=ROOT/info["object"]["path"]
    if hashlib.sha256(probe.read_bytes()).hexdigest()!=info["object"]["sha256"]:
        raise ValueError("compiled layout-object identity changed")
    if info["linkedIntoProduction"] is not False:raise ValueError("fixture linked into production")
    return info["values"]


def prepare(owner, memory, operation, count, output):
    if len(memory)!=4096 or operation not in NAMES or type(count) is not int or not 0<=count<=2048:
        raise ValueError("invalid SDK MD5 caller memory/count")
    size=owner.layout[0]
    if output is not None and output not in [3072,CTX+owner.layout[5]]:
        raise ValueError("output must be digest field or separate backed storage")
    owner.mutable=[(owner.ram+CTX,owner.ram+CTX+size)]
    if operation=="finish":owner.mutable.append((owner.ram+output,owner.ram+output+16))
    owner.caller_reads=[(owner.ram+CTX,owner.ram+CTX+size)]
    if operation=="update" and count:owner.caller_reads.append((owner.ram+512,owner.ram+512+count))
    owner.defined.clear()
    owner.cpu.mem_write(owner.ram,memory)
    return [owner.ram+CTX,owner.ram+output if operation=="finish" else owner.ram+512,count]


def store(owner,cpu,access,address,size,value,unused):
    if any(within(address,size,low,high) for low,high in owner.mutable):return
    if within(address,size,owner.sp-1024,owner.sp):
        owner.defined.update(range(address,address+size));return
    raise ValueError("SDK MD5 write escaped context/output/private frame: "+hex(address))


class Arm(BaseArm):
    def __init__(self, elf=None):
        if elf is None:
            from gates062ag import active
            active.require_original_constructor()
        super().__init__(elf)
        self.ram,self.sp=RAM,SP
        if elf is None:
            census=json.loads((ROOT/"evidence/lanes/native-inventory-completion/seeded/update-census.json").read_text())
            addresses=set(ORIGINAL.values())|{0x1694e4}
            self.executable=[(r["start"],r["endExclusive"]) for f in census["functions"]
                if f["address"] in addresses for r in f["ranges"]]
            self.instructions={p for low,high in self.executable for p in range(low,high,4)}
            self.readonly=[(0x1600bc,0x1600c4),(0x160310,0x160314),(0x526e00,0x526e08),
                (0x85748c,0x8574ac),(0x7e34b8,0x7e3678),(0x8bfba8,0x8bfba9)]
            self.entries=ORIGINAL;self.layout=[104,4,4,20,24,88,32,4];self.vtable=0x85748c
        else:
            symbols=load(elf)[1];self.entries={k:symbols[v] for k,v in NAMES.items()}
            self.layout=read_layout(elf);self.vtable=symbols["sdk_md5_methods062ag"]
        self.mutable=[]

    def write(self,*args):store(self,*args)

    def execute(self,operation,memory,count=0,output=None,seed=0):
        if output is None:output=CTX+self.layout[5]
        args=prepare(self,memory,operation,count,output);cpu=self.cpu
        cpu.mem_write(SP-1024,bytes((i*17+seed)&255 for i in range(1024)))
        cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10|((seed&15)<<28))
        cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf00000)
        cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000)
        fpscr=[0,0x03c00017,0x01400008,0x02800003][seed%4]
        cpu.reg_write(arm.UC_ARM_REG_FPSCR,fpscr)
        saved={getattr(arm,"UC_ARM_REG_R"+str(i)):0x42600000+i*101+seed for i in range(4,12)}
        saved.update({getattr(arm,"UC_ARM_REG_D"+str(i)):0x3ff0000000000000+i*131+seed for i in range(8,16)})
        for r,v in saved.items():cpu.reg_write(r,v)
        for r,v in zip([arm.UC_ARM_REG_R0,arm.UC_ARM_REG_R1,arm.UC_ARM_REG_R2],args):cpu.reg_write(r,v)
        cpu.reg_write(arm.UC_ARM_REG_SP,SP);cpu.reg_write(arm.UC_ARM_REG_LR,STOP)
        cpu.emu_start(self.entries[operation],STOP,count=2000000)
        if cpu.reg_read(arm.UC_ARM_REG_PC)!=STOP or cpu.reg_read(arm.UC_ARM_REG_SP)!=SP:
            raise ValueError("SDK MD5 ARM failed to return/restack")
        if any(cpu.reg_read(r)!=v for r,v in saved.items()) or cpu.reg_read(arm.UC_ARM_REG_FPSCR)!=fpscr:
            raise ValueError("SDK MD5 ARM callee-saved/FPSCR changed")
        self.calls+=1
        return bytes(cpu.mem_read(RAM,4096))


class Android(BaseAndroid):
    def __init__(self,elf):
        super().__init__(elf)
        symbols=load(elf)[1];self.entries={k:symbols[v] for k,v in NAMES.items()}
        self.layout=read_layout(elf);self.vtable=symbols["sdk_md5_methods062ag"]
        self.mutable=[]
        if self.ram<=0xffffffff or self.vtable<=0xffffffff:raise ValueError("A64 pointers were not widened")

    def write(self,*args):store(self,*args)

    def execute(self,operation,memory,count=0,output=None,seed=0):
        if output is None:output=CTX+self.layout[5]
        args=prepare(self,memory,operation,count,output);cpu,r=self.cpu,self.registers
        cpu.mem_write(self.sp-1024,bytes((i*17+seed)&255 for i in range(1024)))
        saved={getattr(r,"UC_ARM64_REG_X"+str(i)):0x24100000000+i*101+seed for i in range(18,30)}
        saved.update({getattr(r,"UC_ARM64_REG_D"+str(i)):0x3ff0000000000000+i*131+seed for i in range(8,16)})
        for register,value in saved.items():cpu.reg_write(register,value)
        fpcr,fpsr=[0,0x03c00000,0x01400000,0x02800000][seed%4],seed%32
        cpu.reg_write(r.UC_ARM64_REG_FPCR,fpcr);cpu.reg_write(r.UC_ARM64_REG_FPSR,fpsr)
        for register,value in zip([r.UC_ARM64_REG_X0,r.UC_ARM64_REG_X1,r.UC_ARM64_REG_X2],args):cpu.reg_write(register,value)
        cpu.reg_write(r.UC_ARM64_REG_SP,self.sp);cpu.reg_write(r.UC_ARM64_REG_LR,self.stop)
        cpu.emu_start(self.entries[operation],self.stop,count=2000000)
        if cpu.reg_read(r.UC_ARM64_REG_PC)!=self.stop or cpu.reg_read(r.UC_ARM64_REG_SP)!=self.sp:
            raise ValueError("SDK MD5 A64 failed to return/restack")
        if any(cpu.reg_read(register)!=value for register,value in saved.items()):
            raise ValueError("SDK MD5 A64 callee-saved changed")
        if cpu.reg_read(r.UC_ARM64_REG_FPCR)!=fpcr or cpu.reg_read(r.UC_ARM64_REG_FPSR)!=fpsr:
            raise ValueError("SDK MD5 A64 floating controls changed")
        self.calls+=1
        return bytes(cpu.mem_read(self.ram,4096))


class Windows:
    def __init__(self,path):
        self.library=ctypes.CDLL(str(Path(path).resolve()))
        self.layout=read_layout(path)
        self.vtable=ctypes.addressof(ctypes.c_ubyte.in_dll(self.library,"sdk_md5_methods062ag"))
        self.entries={key:getattr(self.library,name) for key,name in NAMES.items()}
        for key,function in self.entries.items():
            function.argtypes={"init":[ctypes.c_void_p],"block":[ctypes.c_void_p],
                "update":[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_uint32],
                "finish":[ctypes.c_void_p,ctypes.c_void_p]}[key]
            function.restype=None
        self.calls=0;self.last_address=None

    def execute(self,operation,memory,count=0,output=None,seed=0):
        if output is None:output=CTX+self.layout[5]
        if len(memory)!=4096 or not 0<=count<=2048:raise ValueError("invalid native MD5 backing")
        arena=(ctypes.c_ubyte*4096).from_buffer_copy(memory);address=ctypes.addressof(arena)
        if address<=0xffffffff:raise ValueError("native caller address was not widened")
        self.last_address=address
        args={"init":[address+CTX],"block":[address+CTX],
            "update":[address+CTX,address+512,count],"finish":[address+CTX,address+output]}[operation]
        self.entries[operation](*args);self.calls+=1
        return bytes(arena)
