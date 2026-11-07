import random
from squirrel_state049_calls import perform,CANONICAL

import unicorn
import unicorn.arm_const as r
from native_wave012_arena_oracle import REGISTERS
from native_wave012_ctor_runtime import intervals,immutable_equal
from native_wave013_common import sha
import squirrel_state049_model as model
from squirrel_state045_heap import bootstrap,ARENA,ARENA_BYTES,allocations as sdk_allocations


STACK=0x4000000
RETURN=0x5000000
TLS=0x6000000


def addresses(graph):
    data=lambda name:next(row['address'] for row in graph['readonlyObjects'] if row['symbol']==name)
    return {'allocate':graph['functions']['sq_fixture_allocate045']['address'],
        'resize':graph['functions']['sq_fixture_resize045']['address'],'release':graph['functions']['sq_fixture_release045']['address'],
        'operations':data('sq_fixture_vm_operations045'),'template':data('sq_fixture_null045'),'sdkOperations':data('sq_sdk_operations045')}


def execute(graph,name,reference=None,seed=0,mask=b'a|tn',flags=0,thumb=False,stack_size=64,scenario='cold'):
    source=reference is None;a,c=model.abi(graph);base=0x3000000
    state=model.state(name,base,a,c,addresses(graph),seed,mask)
    state.update(stackSize=stack_size,scenario=scenario)
    if source:
        cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM);cpu.ctl_set_cpu_model(r.UC_CPU_ARM_11MPCORE)
        heap_precondition=None
    else:
        cpu,reference,heap_precondition=bootstrap(False,reference)
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
    if source:cpu.mem_map(STACK,0x10000,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    stack=random.Random(seed+45001).randbytes(0x10000);cpu.mem_write(STACK,stack)
    if source:
        cpu.mem_map(RETURN,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
        cpu.mem_map(TLS,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    cpu.reg_write(r.UC_ARM_REG_C13_C0_3,TLS)
    if not source:
        for address,value in [(0x89a670,0xf531),(0x8bfb54,0x531)]:cpu.mem_write(address,value.to_bytes(4,'little'))
        cpu.mem_write(0x89a508,bytes([1]))
    sp=STACK+0x8000;phase=['setup'];seen={};path=set();dirty=[True];live=[];immutable_reads=set()
    def contains(ranges,address,size):return any(low<=address<address+size<=high for low,high in ranges)
    mutable=intervals([(base+low,base+high) for low,high in state['fields']])
    providers=[(row['address'],row['address']+row['bytes']) for symbol,row in graph['functions'].items()
        if symbol in ['sq_fixture_allocate045','sq_fixture_release045','sdk_allocate','sdk_release','event','allocation']]
    readable=[(base,base+model.POOL),(STACK,sp),*[(at,at+len(raw)) for at,raw in graph['blocks']]]
    if not source:readable.extend([(0x100000,reference.writable[1]),(ARENA,ARENA+ARENA_BYTES)])
    def refresh():
        if dirty[0]:
            raw=bytes(model.CONTEXT)+bytes(cpu.mem_read(base+model.CONTEXT,a['heapBytes']))
            live[:]=[(base+row['offset']-16,base+row['offset']+row['bytes'])
                for row in model.allocations(raw,state) if row['active'] and row['offset'] is not None]
            dirty[0]=False
    def code(uc,address,size,user):
        refresh();mode='Thumb' if cpu.reg_read(r.UC_ARM_REG_CPSR)&0x20 else 'ARM'
        if contains(graph['executableRanges'],address,size):
            if mode!='ARM' or size!=4 or address&3:raise RuntimeError('049 source/provider instruction mode differs')
            if not source:raise RuntimeError('049 real SDK heap reference executed authored source/provider code')
            if source and any(row['address']<=address<row['address']+row['bytes'] for symbol,row in graph['functions'].items()
                if symbol.startswith('required_') or symbol=='sq_startup_require_engine045'):
                raise RuntimeError('049 an unresolved engine dependency executed')
        elif source:raise RuntimeError('049 source escaped compiled instruction ownership')
        else:
            if address not in seen:
                owner,decoded=reference.instruction(cpu,address,size)
                seen[address]={'address':address,'mode':mode,'bytes':size,'owner':owner,'sha256':sha(bytes(cpu.mem_read(address,size)))}
            elif seen[address]['mode']!=mode or seen[address]['bytes']!=size:raise RuntimeError('049 repeated instruction mode changed')
        if phase[0]=='body':path.add(address)
    def read(uc,access,address,size,value,user):
        if not contains([*readable,*live],address,size):raise RuntimeError('049 read outside initialized caller/live allocation/frame at '+hex(address))
        if not source and 0x100000<=address<address+size<=reference.writable[0]:immutable_reads.add((address,size))
    def write(uc,access,address,size,value,user):
        setup=phase[0]=='setup' and contains(graph['writableRanges'],address,size)
        program=not source and (reference.writable[0]<=address<address+size<=reference.writable[1] or ARENA<=address<address+size<=ARENA+ARENA_BYTES)
        if not setup and not program and not contains([*mutable,*live,(STACK,sp)],address,size):
            raise RuntimeError('049 write outside declared caller/live allocation/frame at '+hex(address))
        if max(address,base+model.CONTEXT)<min(address+size,base+model.CONTEXT+a['heapBytes']):dirty[0]=True
    def invalid(uc,access,address,size,value,user):
        raise RuntimeError('049 invalid memory access at pc '+hex(cpu.reg_read(r.UC_ARM_REG_PC))+' address '+hex(address)+' size '+str(size))
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_READ,read);cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)
    cpu.hook_add(unicorn.UC_HOOK_MEM_INVALID,invalid)
    def call(address,args):
        saved={REGISTERS[index]:0x45400000+index*31+seed for index in range(4,12)}
        saved.update({r.UC_ARM_REG_D8+index:0x3ff0000000000000+index*73+seed for index in range(8)})
        for register,value in saved.items():cpu.reg_write(register,value)
        cpu.reg_write(r.UC_ARM_REG_C1_C0_2,0xf00000);cpu.reg_write(r.UC_ARM_REG_FPEXC,0x40000000)
        cpu.reg_write(r.UC_ARM_REG_FPSCR,0x03c00000|seed%32)
        cpu.reg_write(r.UC_ARM_REG_CPSR,0x10|(flags&15)<<28);cpu.reg_write(REGISTERS[-2],sp);cpu.reg_write(REGISTERS[-1],RETURN|int(thumb))
        for register,value in zip(REGISTERS,args):cpu.reg_write(register,value&0xffffffff)
        try:cpu.emu_start(address,RETURN,count=10000000)
        except unicorn.UcError as error:
            raise RuntimeError('049 CPU failure pc='+hex(cpu.reg_read(r.UC_ARM_REG_PC))+' r0='+hex(cpu.reg_read(REGISTERS[0]))+
                ' r1='+hex(cpu.reg_read(REGISTERS[1]))+' r2='+hex(cpu.reg_read(REGISTERS[2]))+' r4='+hex(cpu.reg_read(REGISTERS[4]))+
                ' lr='+hex(cpu.reg_read(REGISTERS[-1]))+' mode='+hex(cpu.reg_read(r.UC_ARM_REG_CPSR))) from error
        if cpu.reg_read(r.UC_ARM_REG_PC)!=RETURN or cpu.reg_read(REGISTERS[-2])!=sp:raise RuntimeError('049 execution did not return with SP')
        if any(cpu.reg_read(register)!=value for register,value in saved.items()):raise RuntimeError('049 execution changed preserved registers')
        if cpu.reg_read(r.UC_ARM_REG_FPSCR)!=(0x03c00000|seed%32) or cpu.reg_read(r.UC_ARM_REG_FPEXC)!=0x40000000:
            raise RuntimeError('049 integer graph changed floating controls/status')
        return cpu.reg_read(REGISTERS[0])
    if source:
        for symbol,argument in [('sq_startup_bind040',base+model.SERVICES),('sq_startup_bind_memory045',base+model.MEMORY_SERVICES)]:
            if call(graph['functions'][symbol]['address'],[argument])!=1:raise RuntimeError('049 source rejected typed services')
    if not source:
        call(0x6ff69c,[])
        if bytes(cpu.mem_read(0x8c06e8,8))!=bytes.fromhex('0100000100000000'):
            raise RuntimeError('049 actual CRT initializer did not establish live NULL')
    phase[0]='body'
    if name=='factory':
        result=call(graph['functions']['fn_00146994']['address'] if source else 0x146994,[state['stackSize']])
    elif name=='mask':
        result=call(graph['functions']['fn_0017875c']['address'] if source else 0x17875c,[base+model.VECTOR,base+model.INPUT])
    elif name=='shared':
        call(graph['functions']['fn_0014c4c8']['address'] if source else 0x14c4c8,[base+model.SHARED])
        call(graph['functions']['fn_0014a6a0']['address'] if source else 0x14a6a0,[base+model.SHARED]);result=None
    else:raise ValueError('049 execution kind unknown')
    api_results=perform(result,state,lambda symbol,args:call(graph['functions'][symbol]['address'] if source else CANONICAL[symbol],args),
        lambda at,size:bytes(cpu.mem_read(at,size)),lambda at,data:cpu.mem_write(at,bytes(data))) if name=='factory' else []
    after=bytes(cpu.mem_read(base,model.SIZE));allocations,events=model.verified_heap(after,state)
    arena=None;sdk_blocks=None
    if not source:
        arena=bytes(cpu.mem_read(ARENA,ARENA_BYTES));sdk_blocks=sdk_allocations(arena)
    all_writes=[*mutable,*[(base+row['offset']-16,base+row['offset']+row['bytes']) for row in allocations if row['offset'] is not None]]
    if not immutable_equal(state['before'],after,base,all_writes):raise RuntimeError('049 caller/unwritten/unallocated bytes changed')
    if bytes(cpu.mem_read(sp,0x8000))!=stack[0x8000:]:raise RuntimeError('049 caller stack changed')
    mask_result=model.mask_state(after,state) if name=='mask' and source else None
    if name=='mask' and not source:
        pointer=int.from_bytes(after[model.VECTOR:model.VECTOR+4],'little')
        size=int.from_bytes(after[model.VECTOR+4:model.VECTOR+8],'little');capacity=int.from_bytes(after[model.VECTOR+8:model.VECTOR+12],'little')
        block=next((row for row in sdk_blocks if row['address']==pointer),None)
        if not pointer:
            if size or capacity:raise ValueError('049 SDK parameter vector has metadata without backing outside successful-allocation domain')
            mask_result={'size':0,'capacity':0,'hasBacking':False,'values':None}
        else:
            if not block or block['bytes']<capacity*4 or size>capacity:raise ValueError('049 SDK parameter vector allocation invalid')
            mask_result={'size':size,'capacity':capacity,'hasBacking':True,
                'values':[int.from_bytes(arena[pointer-ARENA+4*i:pointer-ARENA+4*i+4],'little') for i in range(size)]}
    return {'returnedNormally':True,'returned':result,'state':state,'after':after,'allocations':allocations,'events':events,
        'apiResults':api_results,'mask':mask_result,'referenceArena':arena,'sdkLiveAllocations':sdk_blocks,'heapPrecondition':heap_precondition,
        'codePath':sorted(path),'referenceInstructions':list(seen.values()),
        'referenceImmutableReads':sorted(immutable_reads),'sourceOnlyExecution':source,'calleeSavedAndCallerGuardsPreserved':True}
