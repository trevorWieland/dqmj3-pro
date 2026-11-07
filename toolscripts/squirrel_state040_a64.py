import random

import unicorn
import unicorn.arm64_const as r
from native_wave012_ctor_runtime import intervals
from squirrel_state040_oracle import addresses
from squirrel_state040_native import finish
import squirrel_state040_model as model


STACK=0x130000000
RETURN=0x140000000


def execute(graph,name,seed=0,has_head=True,flags=0):
    a=model.abi(graph);base=0x120000000+(seed%4)*0x20000
    state=model.state(name,base,a,addresses(graph),seed,has_head)
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM64,unicorn.UC_MODE_ARM);cpu.ctl_set_cpu_model(r.UC_CPU_ARM64_A72)
    pages=set()
    for address,raw in graph['blocks']:
        for page in range(address&~4095,(address+len(raw)+4095)&~4095,4096):
            if page not in pages:cpu.mem_map(page,4096,unicorn.UC_PROT_ALL);pages.add(page)
        cpu.mem_write(address,raw)
    for page in pages:
        writable=any(low<=page<high for low,high in graph['writableRanges'])
        executable=any(page<=low<page+4096 or low<=page<high for low,high in graph['executableRanges'])
        cpu.mem_protect(page,4096,unicorn.UC_PROT_READ|(unicorn.UC_PROT_WRITE if writable else 0)|(unicorn.UC_PROT_EXEC if executable else 0))
    cpu.mem_map(base,model.SIZE,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE);cpu.mem_write(base,state['before'])
    cpu.mem_map(STACK,0x10000,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    stack=random.Random(seed+40064).randbytes(0x10000);cpu.mem_write(STACK,stack)
    cpu.mem_map(RETURN,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
    sp=STACK+0x8000;phase=['setup'];path=set();dirty=[True];allocated=[]
    def contains(ranges,address,size):return any(low<=address<address+size<=high for low,high in ranges)
    mutable=intervals([(base+row['offset'],base+row['offset']+row['size']) for row in state['fields']])
    readable=[(base,base+model.POOL),(STACK,sp),*[(at,at+len(raw)) for at,raw in graph['blocks']]]
    def refresh():
        if dirty[0]:
            raw=bytes(model.CONTEXT)+bytes(cpu.mem_read(base+model.CONTEXT,a['heapBytes']))
            allocated[:]=[(base+row['offset'],base+row['offset']+row['bytes']) for row in model.allocated(raw,state) if row['offset'] is not None]
            dirty[0]=False
    def code(uc,address,size,user):
        refresh()
        if size!=4 or address&3 or not contains(graph['executableRanges'],address,size):raise RuntimeError('040 A64 escaped owned four-byte source instructions')
        if phase[0]=='body':path.add(address)
    def read(uc,access,address,size,value,user):
        if not contains([*readable,*allocated],address,size):raise RuntimeError('040 A64 read outside initialized caller/live allocation/frame')
    def write(uc,access,address,size,value,user):
        setup=phase[0]=='setup' and contains(graph['writableRanges'],address,size)
        if not setup and not contains([*mutable,*allocated,(STACK,sp)],address,size):
            raise RuntimeError('040 A64 constructor wrote outside declared fields/live allocation/frame')
        if max(address,base+model.CONTEXT)<min(address+size,base+model.CONTEXT+a['heapBytes']):dirty[0]=True
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_READ,read);cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)
    def call(address,args):
        saved={getattr(r,'UC_ARM64_REG_X'+str(i)):0x4004000000+i*31+seed for i in range(18,30)}
        saved.update({getattr(r,'UC_ARM64_REG_D'+str(i)):0x3ff0000000000000+i*73+seed for i in range(8,16)})
        for register,value in saved.items():cpu.reg_write(register,value)
        cpu.reg_write(r.UC_ARM64_REG_CPACR_EL1,3<<20);cpu.reg_write(r.UC_ARM64_REG_FPCR,0x03c00000);cpu.reg_write(r.UC_ARM64_REG_FPSR,seed%32)
        cpu.reg_write(r.UC_ARM64_REG_NZCV,(flags&15)<<28);cpu.reg_write(r.UC_ARM64_REG_SP,sp);cpu.reg_write(r.UC_ARM64_REG_LR,RETURN)
        for index,value in enumerate(args):cpu.reg_write(getattr(r,'UC_ARM64_REG_X'+str(index)),value)
        cpu.emu_start(address,RETURN,count=1000000)
        if cpu.reg_read(r.UC_ARM64_REG_PC)!=RETURN or cpu.reg_read(r.UC_ARM64_REG_SP)!=sp:raise RuntimeError('040 A64 constructor failed to return with SP')
        if any(cpu.reg_read(register)!=value for register,value in saved.items()):raise RuntimeError('040 A64 constructor changed preserved registers')
        if cpu.reg_read(r.UC_ARM64_REG_FPCR)!=0x03c00000 or cpu.reg_read(r.UC_ARM64_REG_FPSR)!=seed%32:
            raise RuntimeError('040 A64 constructor changed floating controls/status')
        return cpu.reg_read(r.UC_ARM64_REG_X0)
    if call(graph['functions']['sq_startup_bind040']['address'],[base+model.SERVICES])!=1:raise RuntimeError('040 A64 source rejected services')
    phase[0]='body';args=[base+model.SHARED] if name=='fn_0014c4c8' else [base+model.VM,base+model.SHARED]
    result=call(graph['functions'][name]['address'],args);after=bytes(cpu.mem_read(base,model.SIZE))
    if bytes(cpu.mem_read(sp,0x8000))!=stack[0x8000:]:raise RuntimeError('040 A64 changed caller stack')
    out=finish(name,result,after,state)
    out.update(sourceOnlyExecution=True,actualWidenedPointers=True,codePath=sorted(path),
        lowD8Through15AndX18Through29Preserved=True,floatingControlsPreserved=True)
    return out
