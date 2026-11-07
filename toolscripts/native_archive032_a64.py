import random

import unicorn
import unicorn.arm64_const as r
from native_wave013_common import sha
from native_wave012_ctor_runtime import immutable_equal
from native_archive032_oracle import addresses
import native_archive032_model as model


STACK=0x130000000
RETURN=0x140000000


def execute(graph,name,specification,seed=0,flags=0):
    profile=model.abi(graph);base=0x120000000+(seed%4)*0x100000
    if profile['pointerBytes']!=8:raise ValueError('A64 actual archive ABI does not use widened pointers')
    state=model.state(specification,base,profile,addresses(graph),seed)
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
    cpu.mem_map(base,state['fixtureBytes'],unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE);cpu.mem_write(base,state['before'])
    cpu.mem_map(STACK,0x4000,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    stack=random.Random(seed+3264).randbytes(0x4000);cpu.mem_write(STACK,stack)
    cpu.mem_map(RETURN,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
    sp=STACK+8192;frame=(STACK,sp);phase=['setup'];path=set();retired=[];pending=[];violations=[]
    def contains(ranges,address,size):return any(low<=address<address+size<=high for low,high in ranges)
    mutable=[(base+row['offset'],base+row['offset']+row['size']) for row in state['fields']]
    readable=[*state['readable'],frame,*[(a,a+len(raw)) for a,raw in graph['blocks']]]
    def drain():
        for address,size in pending:
            for key,low,bytes in [('imageLive',base+model.HOLDER,profile['imageBytes']),('viewLive',base+model.VIEW,profile['viewBytes'])]:
                at=base+model.CONTEXT+profile[key]
                if max(at,address)<min(at+4,address+size) and int.from_bytes(cpu.mem_read(at,4),'little')==0:
                    retired.append((low,low+bytes))
        pending.clear()
    def code(uc,address,size,user):
        drain()
        if size!=4 or address&3 or not contains(graph['executableRanges'],address,size):
            raise RuntimeError('A64 archive escaped four-byte owned source instructions')
        if phase[0]=='body':path.add(address)
    def read(uc,access,address,size,value,user):
        if not contains(readable,address,size):raise RuntimeError('A64 archive read outside declared data/frame')
        if any(max(low,address)<min(high,address+size) for low,high in retired):
            violations.append({'address':address,'bytes':size,'pc':cpu.reg_read(r.UC_ARM64_REG_PC)})
    def write(uc,access,address,size,value,user):
        setup=phase[0]=='setup' and contains(graph['writableRanges'],address,size)
        if not setup and not contains([*mutable,frame],address,size):raise RuntimeError('A64 archive wrote outside declared fields/frame')
        if phase[0]=='body':pending.append((address,size))
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_READ,read);cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)
    def call(address,args):
        saved={getattr(r,'UC_ARM64_REG_X'+str(i)):0x3210000000+i*97+seed for i in range(18,30)}
        saved.update({getattr(r,'UC_ARM64_REG_D'+str(i)):0x3ff0000000000000+i*13+seed for i in range(8,16)})
        for register,value in saved.items():cpu.reg_write(register,value)
        cpu.reg_write(r.UC_ARM64_REG_CPACR_EL1,3<<20);cpu.reg_write(r.UC_ARM64_REG_FPCR,0x03c00000);cpu.reg_write(r.UC_ARM64_REG_FPSR,seed%32)
        cpu.reg_write(r.UC_ARM64_REG_NZCV,(flags&15)<<28);cpu.reg_write(r.UC_ARM64_REG_SP,sp);cpu.reg_write(r.UC_ARM64_REG_LR,RETURN)
        for i,value in enumerate(args):cpu.reg_write(getattr(r,'UC_ARM64_REG_X'+str(i)),value)
        cpu.emu_start(address,RETURN,count=1000000);drain()
        if cpu.reg_read(r.UC_ARM64_REG_PC)!=RETURN or cpu.reg_read(r.UC_ARM64_REG_SP)!=sp:
            raise RuntimeError('A64 archive did not return with preserved SP')
        if any(cpu.reg_read(register)!=value for register,value in saved.items()):raise RuntimeError('A64 archive changed preserved registers')
        if cpu.reg_read(r.UC_ARM64_REG_FPCR)!=0x03c00000 or cpu.reg_read(r.UC_ARM64_REG_FPSR)!=seed%32:
            raise RuntimeError('A64 archive changed floating controls/status')
        return cpu.reg_read(r.UC_ARM64_REG_X0)
    if call(graph['functions']['archive_bind_services']['address'],[base+model.SERVICES])!=1:
        raise RuntimeError('A64 archive rejected typed services')
    phase[0]='body';result=call(graph['functions'][name]['address'],model.arguments(name,state))
    after=bytes(cpu.mem_read(base,state['fixtureBytes']))
    if not immutable_equal(state['before'],after,base,mutable):raise RuntimeError('A64 archive changed immutable fixture/image')
    if bytes(cpu.mem_read(sp,0x2000))!=stack[0x2000:]:raise RuntimeError('A64 archive changed caller stack')
    if violations:raise RuntimeError('A64 archive read logically released storage')
    return {'layout':state,'after':after,'result':model.normalized_result(name,result,base),
        'state':model.observation(after,state),'returnedNormally':True,'immutableMemoryPreserved':True,
        'sourceOnlyExecution':True,'codePath':sorted(path),'actualWidenedPointers':True,'memorySha256':sha(after),
        'lowD8Through15AndX18Through29Preserved':True,'floatingControlsPreserved':True}
