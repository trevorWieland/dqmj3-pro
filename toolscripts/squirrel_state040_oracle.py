import random

import unicorn
from unicorn.arm_const import UC_CPU_ARM_11MPCORE,UC_ARM_REG_CPSR,UC_ARM_REG_PC,UC_ARM_REG_C13_C0_3
import unicorn.arm_const as registers
from native_wave012_arena_oracle import REGISTERS
from native_wave013_common import sha
from squirrel_state040_native import finish
from native_wave012_ctor_runtime import intervals
import squirrel_state040_model as model


STACK=0x4000000
RETURN=0x5000000
TLS=0x6000000


def addresses(graph,reference=None):
    data=lambda name:next(row['address'] for row in graph['readonlyObjects'] if row['symbol']==name)
    operations=data('sq_startup_fixture_vm_operations040')
    if reference is not None:operations=int.from_bytes(reference.image[0x154768-0x100000:0x15476c-0x100000],'little')
    return {'operations':operations,'allocate':graph['functions']['sq_startup_fixture_allocate040']['address'],
        'template':data('sq_startup_fixture_null040'),'sdkOperations':data('sq_startup_sdk_operations040')}


def execute(graph,name,reference=None,seed=0,has_head=True,flags=0,thumb=False):
    source=reference is None;a=model.abi(graph);base=0x3000000+(seed%4)*0x20000
    state=model.state(name,base,a,addresses(graph,reference),seed,has_head)
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM);cpu.ctl_set_cpu_model(UC_CPU_ARM_11MPCORE)
    if not source:reference.map(cpu)
    pages=set()
    for address,raw in graph['blocks']:
        for page in range(address&~4095,(address+len(raw)+4095)&~4095,4096):
            if page not in pages:cpu.mem_map(page,4096,unicorn.UC_PROT_ALL);pages.add(page)
        cpu.mem_write(address,raw)
    for page in pages:
        writable=any(low<=page<high for low,high in graph['writableRanges'])
        cpu.mem_protect(page,4096,unicorn.UC_PROT_READ|(unicorn.UC_PROT_WRITE if writable else unicorn.UC_PROT_EXEC))
    cpu.mem_map(base,model.SIZE,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE);cpu.mem_write(base,state['before'])
    cpu.mem_map(STACK,0x10000,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    stack=random.Random(seed+40001).randbytes(0x10000);cpu.mem_write(STACK,stack)
    cpu.mem_map(RETURN,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
    cpu.mem_map(TLS,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE);cpu.reg_write(UC_ARM_REG_C13_C0_3,TLS)
    if not source:
        for address,value in [(0x89a670,0xf531),(0x8bfb54,0x531),(0x89a688,base+model.SDK_HEAP)]:cpu.mem_write(address,value.to_bytes(4,'little'))
        cpu.mem_write(0x89a508,bytes([1]))
    sp=STACK+0x8000;phase=['setup'];seen={};path=set();dirty=[True];allocated=[];template_path=set()
    def contains(ranges,address,size):return any(low<=address<address+size<=high for low,high in ranges)
    mutable=intervals([(base+row['offset'],base+row['offset']+row['size']) for row in state['fields']])
    fixture_ranges=[(row['address'],row['address']+row['bytes']) for symbol,row in graph['functions'].items()
        if symbol in ['sq_startup_fixture_allocate040','sdk_allocate']]
    readable=[(base,base+model.POOL),(STACK,sp),*[(at,at+len(raw)) for at,raw in graph['blocks']]]
    if not source:readable.append((0x100000,reference.writable[1]))
    def refresh():
        if dirty[0]:
            raw=bytes(model.CONTEXT)+bytes(cpu.mem_read(base+model.CONTEXT,a['heapBytes']))
            allocated[:]=[(base+row['offset']-(16 if not source else 0),base+row['offset']+row['bytes'])
                for row in model.allocated(raw,state) if row['offset'] is not None]
            dirty[0]=False
    def code(uc,address,size,user):
        refresh();mode='Thumb' if cpu.reg_read(UC_ARM_REG_CPSR)&0x20 else 'ARM'
        if contains(graph['executableRanges'],address,size):
            if mode!='ARM' or size!=4 or address&3:raise RuntimeError('040 source/provider instruction mode differs')
            if not source and not contains(fixture_ranges,address,size):raise RuntimeError('040 reference used an authored constructor/helper')
        elif source:raise RuntimeError('040 source escaped compiled instruction ownership')
        else:
            if address not in seen:
                owner,instruction=reference.instruction(cpu,address,size)
                seen[address]={'address':address,'mode':mode,'bytes':size,'owner':owner,'sha256':sha(bytes(cpu.mem_read(address,size)))}
            elif seen[address]['mode']!=mode or seen[address]['bytes']!=size:raise RuntimeError('040 repeated instruction changed mode/width')
        if phase[0]=='template':template_path.add(address)
        if phase[0]=='body':path.add(address)
    def read(uc,access,address,size,value,user):
        if not contains([*readable,*allocated],address,size):raise RuntimeError('040 constructor read outside initialized caller/live allocation/frame')
    def write(uc,access,address,size,value,user):
        setup=phase[0]=='setup' and contains(graph['writableRanges'],address,size)
        template=phase[0]=='template' and contains([(0x8c06e8,0x8c0710)],address,size)
        program=not source and phase[0]=='body' and reference.writable[0]<=address<address+size<=reference.writable[1]
        if program and max(address,0x8c06e8)<min(address+size,0x8c0710):raise RuntimeError('040 constructor changed established CRT templates')
        if not setup and not template and not program and not contains([*mutable,*allocated,(STACK,sp)],address,size):
            raise RuntimeError('040 constructor wrote outside declared fields/live allocation/frame at '+hex(address))
        if max(address,base+model.CONTEXT)<min(address+size,base+model.CONTEXT+a['heapBytes']):dirty[0]=True
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_READ,read);cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)
    def call(address,args):
        saved={REGISTERS[i]:0x40400000+i*31+seed for i in range(4,12)}
        saved.update({registers.UC_ARM_REG_D8+i:0x3ff0000000000000+i*73+seed for i in range(8)})
        for register,value in saved.items():cpu.reg_write(register,value)
        cpu.reg_write(registers.UC_ARM_REG_C1_C0_2,0xf00000);cpu.reg_write(registers.UC_ARM_REG_FPEXC,0x40000000)
        cpu.reg_write(registers.UC_ARM_REG_FPSCR,0x03c00000|seed%32)
        cpu.reg_write(UC_ARM_REG_CPSR,0x10|(flags&15)<<28);cpu.reg_write(REGISTERS[-2],sp);cpu.reg_write(REGISTERS[-1],RETURN|int(thumb))
        for register,value in zip(REGISTERS,args):cpu.reg_write(register,value)
        cpu.emu_start(address,RETURN,count=1000000)
        if cpu.reg_read(UC_ARM_REG_PC)!=RETURN or cpu.reg_read(REGISTERS[-2])!=sp:raise RuntimeError('040 constructor did not return with preserved SP')
        if any(cpu.reg_read(register)!=value for register,value in saved.items()):raise RuntimeError('040 constructor changed callee-saved state')
        if cpu.reg_read(registers.UC_ARM_REG_FPSCR)!=(0x03c00000|seed%32) or cpu.reg_read(registers.UC_ARM_REG_FPEXC)!=0x40000000:
            raise RuntimeError('040 integer constructor changed floating controls/status')
        return cpu.reg_read(REGISTERS[0])
    if source:
        if call(graph['functions']['sq_startup_bind040']['address'],[base+model.SERVICES])!=1:raise RuntimeError('040 source rejected services')
    else:
        phase[0]='template';call(0x6ff69c,[])
        if bytes(cpu.mem_read(0x8c06e8,8))!=int(0x01000001).to_bytes(4,'little')+bytes(4):
            raise RuntimeError('040 actual CRT initializer did not establish the live null template')
    phase[0]='body';entry=graph['functions'][name]['address'] if source else int(name[3:],16)
    args=[base+model.SHARED] if name=='fn_0014c4c8' else [base+model.VM,base+model.SHARED]
    result=call(entry,args);after=bytes(cpu.mem_read(base,model.SIZE))
    if bytes(cpu.mem_read(sp,0x8000))!=stack[0x8000:]:raise RuntimeError('040 constructor changed caller stack')
    out=finish(name,result,after,state)
    out.update(sourceOnlyExecution=source,calleeSavedAndCallerStackPreserved=True,codePath=sorted(path),
        actualTemplateInitializerPath=sorted(template_path),referenceInstructions=[seen[k] for k in sorted(seen)])
    return out
