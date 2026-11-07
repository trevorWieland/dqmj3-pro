import ctypes
import random

import unicorn
from unicorn.arm_const import UC_CPU_ARM_11MPCORE,UC_ARM_REG_PC,UC_ARM_REG_CPSR,UC_ARM_REG_C13_C0_3
from native_wave012_arena_oracle import REGISTERS
from native_wave013_common import sha
from native_wave012_ctor_runtime import immutable_equal
import native_archive032_model as model


STACK=0x4000000
RETURN=0x5000000
TLS=0x6000000


def object_address(graph,name):return next(row['address'] for row in graph['readonlyObjects'] if row['symbol']==name)


def addresses(graph,original=False):
    function=lambda name:graph['functions'][name]['address']
    return {'operations':0x858f6c if original else object_address(graph,'archive_operations'),
        'allocate':function('archive_fixture_allocate'),'release':function('archive_fixture_release'),
        'heapOperations':object_address(graph,'archive_fixture_heap_operations')}


def execute(graph,name,specification,reference=None,seed=0,flags=0,thumb=False):
    source=reference is None;profile=model.abi(graph);base=0x3000000+(seed%4)*0x100000
    state=model.state(specification,base,profile,addresses(graph,not source),seed)
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
    cpu.mem_map(base,state['fixtureBytes'],unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE);cpu.mem_write(base,state['before'])
    cpu.mem_map(STACK,0x4000,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    stack=random.Random(seed+3201).randbytes(0x4000);cpu.mem_write(STACK,stack)
    cpu.mem_map(RETURN,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
    cpu.mem_map(TLS,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE);cpu.reg_write(UC_ARM_REG_C13_C0_3,TLS)
    if not source:
        for address,value in [(0x89a670,0xf531),(0x8bfb54,0x531),(0x89a688,base+model.HEAP)]:
            cpu.mem_write(address,value.to_bytes(4,'little'))
        cpu.mem_write(0x89a508,bytes([1]))
    sp=STACK+8192;frame=(STACK,sp);phase=['setup'];path=set();witnesses={};calls=[];last=[None];retired=[];violations=[]
    def contains(ranges,address,size):return any(low<=address<address+size<=high for low,high in ranges)
    mutable=[(base+row['offset'],base+row['offset']+row['size']) for row in state['fields']]
    readable=[*state['readable'],frame,*[(a,a+len(raw)) for a,raw in graph['blocks']]]
    if not source:readable.append((0x100000,reference.writable[1]))
    fixture_ranges=[(row['address'],row['address']+row['bytes']) for key,row in graph['functions'].items() if key.startswith('archive_fixture_')]
    def code(uc,address,size,user):
        mode='Thumb' if cpu.reg_read(UC_ARM_REG_CPSR)&0x20 else 'ARM'
        if contains(graph['executableRanges'],address,size):
            if mode!='ARM' or size!=4 or address&3:raise RuntimeError('Archive source/provider execution mode differs')
            if not source and not contains(fixture_ranges,address,size):raise RuntimeError('Original archive used an authored game helper')
        elif source:raise RuntimeError('Archive source executed outside compiled function ownership')
        else:
            owner,instruction=reference.instruction(cpu,address,size)
            witnesses[address]={'address':address,'bytes':size,'mode':mode,'owner':owner,'sha256':sha(bytes(cpu.mem_read(address,size)))}
        if phase[0]=='body':path.add(address)
        if last[0] is not None and address!=last[0]+4:calls.append((last[0],address))
        last[0]=address
    def read(uc,access,address,size,value,user):
        if not contains(readable,address,size):raise RuntimeError('Archive read outside declared image/state/frame')
        for low,high in retired:
            if max(low,address)<min(high,address+size):violations.append({'pc':cpu.reg_read(UC_ARM_REG_PC),'address':address,'bytes':size})
    def write(uc,access,address,size,value,user):
        setup=phase[0]=='setup' and contains(graph['writableRanges'],address,size)
        program=not source and reference.writable[0]<=address<address+size<=reference.writable[1]
        if not setup and not program and not contains([*mutable,frame],address,size):
            raise RuntimeError('Archive write outside declared mutable state/frame')
        if phase[0]=='body':
            at=base+model.CONTEXT+profile['imageLive']
            if address==at and size==4 and value==0:retired.append((base+model.HOLDER,base+model.HOLDER+profile['imageBytes']))
            at=base+model.CONTEXT+profile['viewLive']
            if address==at and size==4 and value==0:retired.append((base+model.VIEW,base+model.VIEW+profile['viewBytes']))
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_READ,read);cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)
    def call(address,args):
        original={REGISTERS[index]:0x71200000+index*37+seed for index in range(4,12)}
        for register,value in original.items():cpu.reg_write(register,value)
        cpu.reg_write(UC_ARM_REG_CPSR,0x10|(flags&15)<<28);cpu.reg_write(REGISTERS[-2],sp);cpu.reg_write(REGISTERS[-1],RETURN|int(thumb))
        for register,value in zip(REGISTERS,args):cpu.reg_write(register,value)
        cpu.emu_start(address,RETURN,count=1000000)
        if cpu.reg_read(UC_ARM_REG_PC)!=RETURN or cpu.reg_read(REGISTERS[-2])!=sp:
            raise RuntimeError('Archive call did not return with preserved SP')
        if any(cpu.reg_read(register)!=value for register,value in original.items()):raise RuntimeError('Archive call changed preserved registers')
        return cpu.reg_read(REGISTERS[0])
    if source:
        if call(graph['functions']['archive_bind_services']['address'],[base+model.SERVICES])!=1:
            raise RuntimeError('Archive source rejected typed services')
    phase[0]='body';entry=graph['functions'][name]['address'] if source else int(name[3:],16)
    result=call(entry,model.arguments(name,state));after=bytes(cpu.mem_read(base,state['fixtureBytes']))
    if not immutable_equal(state['before'],after,base,mutable):raise RuntimeError('Archive changed immutable caller/image bytes')
    if bytes(cpu.mem_read(sp,0x2000))!=stack[0x2000:]:raise RuntimeError('Archive changed caller stack')
    if violations:raise RuntimeError('Archive read logically freed wrapper/view storage')
    return {'layout':state,'after':after,'result':model.normalized_result(name,result,base),
        'state':model.observation(after,state),'returnedNormally':True,'immutableMemoryPreserved':True,
        'calleeSavedSpPreserved':True,'codePath':sorted(path),'referenceInstructions':list(witnesses.values()),
        'sourceOnlyExecution':source,'retiredReadViolations':violations,'memorySha256':sha(after)}


def windows(library,name,specification,seed=0):
    profile=model.native_abi(library);buffer=ctypes.create_string_buffer(model.fixture_bytes(specification)+128)
    ctypes.memset(buffer,0x5a,ctypes.sizeof(buffer));base=ctypes.addressof(buffer)+64
    if base<=0xffffffff or base%8:raise RuntimeError('Archive native fixture lacks aligned widened pointers')
    ptr=lambda symbol:ctypes.cast(getattr(library,symbol),ctypes.c_void_p).value
    data=lambda symbol:ctypes.addressof((ctypes.c_ubyte*1).in_dll(library,symbol))
    state=model.state(specification,base,profile,{'operations':data('archive_operations'),
        'allocate':ptr('archive_fixture_allocate'),'release':ptr('archive_fixture_release'),
        'heapOperations':data('archive_fixture_heap_operations')},seed)
    ctypes.memmove(base,state['before'],state['fixtureBytes'])
    library.archive_bind_services.argtypes=[ctypes.c_void_p];library.archive_bind_services.restype=ctypes.c_uint
    if library.archive_bind_services(base+model.SERVICES)!=1:raise RuntimeError('Native archive rejected typed services')
    function=getattr(library,name);args=model.arguments(name,state)
    function.argtypes=[ctypes.c_void_p]+([ctypes.c_uint if name in ['fn_006edd88','fn_006eddec','fn_006ede0c','fn_006ede84'] else ctypes.c_void_p] if len(args)>1 else [])
    function.restype=None if name=='fn_005f5d14' else ctypes.c_void_p if name in model.POINTER_RETURNS else ctypes.c_uint
    result=function(*args);after=ctypes.string_at(base,state['fixtureBytes']);raw=bytes(buffer)
    if raw[:64]!=bytes([0x5a])*64 or raw[-64:]!=bytes([0x5a])*64:raise RuntimeError('Archive native outer guards changed')
    mutable=[(base+row['offset'],base+row['offset']+row['size']) for row in state['fields']]
    if not immutable_equal(state['before'],after,base,mutable):raise RuntimeError('Native archive changed immutable fixture/image bytes')
    return {'layout':state,'after':after,'result':model.normalized_result(name,result or 0,base),
        'state':model.observation(after,state),'returnedNormally':True,'immutableMemoryPreserved':True,
        'sourceOnlyExecution':True,'actualWidenedPointers':True,'memorySha256':sha(after)}
