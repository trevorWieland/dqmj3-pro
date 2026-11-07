import ctypes
import random

import unicorn
from unicorn.arm_const import UC_ARM_REG_PC,UC_ARM_REG_CPSR,UC_ARM_REG_C13_C0_3,UC_CPU_ARM_1176

from native_wave012_arena_oracle import REGISTERS,RETURN,STACK
from native_wave012_ctor_runtime import immutable_equal
from native_wave013_common import sha
import native_wave013_file_owner_heap_model as model


class SemanticMismatch(RuntimeError):
    def __init__(self,reason,actual,expected):
        self.details={'returnedNormally':True,'immutableMemoryPreserved':True,'reason':reason,
            'actual':actual,'expected':expected}
        super().__init__('Normally returning owner heap differs: '+reason)


def execute(graph,specification,source=False,seed=0,thumb=False,flags=0):
    names={'thread':'pattern_owner_fixture_thread','acquire':'pattern_owner_fixture_acquire','release':'pattern_owner_fixture_release'}
    callbacks={key:graph['functions'][name]['address'] if source else 0 for key,name in names.items()}
    layout=model.encode(specification,0x3000000+(seed%4)*0x100000,4,seed,callbacks)
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(UC_CPU_ARM_1176)
    pages=set()
    for address,raw in graph['blocks']:
        for page in range(address&~4095,(address+len(raw)+4095)&~4095,4096):
            if page not in pages:
                cpu.mem_map(page,4096,unicorn.UC_PROT_ALL)
                pages.add(page)
        cpu.mem_write(address,raw)
    for page in pages:
        writable=any(low<=page<high for low,high in graph.get('writableRanges',[]))
        cpu.mem_protect(page,4096,unicorn.UC_PROT_READ|(unicorn.UC_PROT_WRITE if writable else unicorn.UC_PROT_EXEC))
    cpu.mem_map(RETURN,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
    cpu.mem_map(STACK,8192,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    cpu.mem_map(layout['base'],model.SIZE,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    cpu.mem_write(layout['base'],layout['before'])
    cpu.reg_write(UC_ARM_REG_C13_C0_3,layout['base']+0x200)
    rng=random.Random(seed+490)
    initial_stack=rng.randbytes(8192)
    cpu.mem_write(STACK,initial_stack)
    frame=(STACK+4096-1024,STACK+4096)
    setup=[source]
    writes,path=[],set()
    queries=[0]
    def contains(ranges,address,size):
        return any(low<=address<address+size<=high for low,high in ranges)
    mutable=[(layout['base']+row['offset'],layout['base']+row['offset']+row['size']) for row in layout['fields']]
    readable=[*mutable,(layout['base']+0x600,layout['base']+0x610),(layout['base']+0x700,layout['base']+0x704),frame]
    readonly=[(address,address+len(raw)) for address,raw in graph['blocks']]
    def code(uc,address,size,user):
        if not contains(graph['executableRanges'],address,size):
            raise RuntimeError('Owner heap left owned original/source instructions')
        path.add(address)
        if not source and address==0x17070c:
            queries[0]+=1
    def read(uc,access,address,size,value,user):
        if not contains([*readable,*readonly],address,size):
            raise RuntimeError('Owner heap read outside declared fields,code/data,frame')
    def write(uc,access,address,size,value,user):
        if setup[0] and contains(graph.get('writableRanges',[]),address,size):
            return
        if contains([*mutable,frame],address,size):
            if layout['base']<=address<layout['base']+model.SIZE:
                writes.append({'address':address,'bytes':size,'value':value,'pc':cpu.reg_read(UC_ARM_REG_PC)})
            return
        raise RuntimeError('Owner heap wrote outside declared fields/private frame')
    cpu.hook_add(unicorn.UC_HOOK_CODE,code)
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ,read)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)
    def call(name,args):
        entry=graph['functions'][name]['address'] if source else int(name[3:],16)
        initial=[rng.getrandbits(32) for _ in REGISTERS]
        initial[:len(args)]=args
        initial[-2:]=[STACK+4096,RETURN|int(thumb)]
        cpu.reg_write(UC_ARM_REG_CPSR,0x10|flags<<28)
        for register,value in zip(REGISTERS,initial):cpu.reg_write(register,value)
        cpu.emu_start(entry,RETURN,count=200000)
        final=[cpu.reg_read(register) for register in REGISTERS]
        if cpu.reg_read(UC_ARM_REG_PC)!=RETURN or bool(cpu.reg_read(UC_ARM_REG_CPSR)&0x20)!=thumb:
            raise RuntimeError('Owner heap did not return/interwork within bounds')
        if final[4:12]!=initial[4:12] or final[-2]!=initial[-2]:
            raise RuntimeError('Owner heap changed callee-save registers/SP')
        return final[0]
    if source:
        if call('pattern_owner_bind_sync',[layout['base']+0x600])!=1:raise RuntimeError('Owner sync binding rejected')
    setup[0]=False
    results=[]
    for operation in specification['operations']:
        block=layout['base']+0x1000+operation['slot']*layout['blockBytes']
        args=[layout['base']+0x400,block]
        if operation['kind']=='allocate':
            result=call('fn_0014e0a8',[*args,operation['bytes'],operation.get('margin',0)])
        else:
            call('fn_0015e1b0',args)
            result=None
        results.append(result)
    after=bytes(cpu.mem_read(layout['base'],model.SIZE))
    if not immutable_equal(layout['before'],after,layout['base'],mutable):
        raise RuntimeError('Owner heap changed immutable bytes/guards')
    stack_after=bytes(cpu.mem_read(STACK,8192))
    if stack_after[:3072]!=initial_stack[:3072] or stack_after[4096:]!=initial_stack[4096:]:
        raise RuntimeError('Owner heap changed caller stack outside its private frame')
    return {'layout':layout,'after':after,'writes':writes,'results':results,'threadQueries':queries[0],
        'codePath':sorted(path),'returnedNormally':True,'immutableMemoryPreserved':True,'memorySha256':sha(after)}


def compare(actual,original):
    expected=model.project(original,actual['layout'])
    differences=[index for index,(a,b) in enumerate(zip(expected,actual['after'])) if a!=b]
    expected_results=[model.pointer(value,original['layout'],actual['layout']) if value is not None else None for value in original['results']]
    if differences or actual['results']!=expected_results:
        raise SemanticMismatch('defined state or return values differ',{'results':actual['results'],'offsets':differences[:20]},
            {'results':expected_results,'memorySha256':sha(expected)})
    return {'fullFixtureBytesCompared':model.SIZE,'allBytesAgree':True,'noPrivatePointerMasks':True,
        'serviceThreadQueries':original['threadQueries'],'wholeMemoryEquivalenceClaimed':False}


def native(library,specification,original,seed=0):
    buffer=ctypes.create_string_buffer(model.SIZE+128)
    ctypes.memset(buffer,0x5a,ctypes.sizeof(buffer))
    base=ctypes.addressof(buffer)+64
    if base<=0xffffffff:raise RuntimeError('Native owner fixture did not exercise64-bit pointers')
    callbacks={key:ctypes.cast(getattr(library,name),ctypes.c_void_p).value for key,name in
        {'thread':'pattern_owner_fixture_thread','acquire':'pattern_owner_fixture_acquire','release':'pattern_owner_fixture_release'}.items()}
    layout=model.encode(specification,base,8,seed,callbacks)
    ctypes.memmove(base,layout['before'],model.SIZE)
    bind=library.pattern_owner_bind_sync;bind.argtypes=[ctypes.c_void_p];bind.restype=ctypes.c_int
    if bind(base+0x600)!=1:raise RuntimeError('Native sync binding rejected')
    allocate=library.fn_0014e0a8;allocate.argtypes=[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_uint,ctypes.c_uint];allocate.restype=ctypes.c_void_p
    release=library.fn_0015e1b0;release.argtypes=[ctypes.c_void_p,ctypes.c_void_p];release.restype=None
    results=[]
    for operation in specification['operations']:
        args=[base+0x400,base+0x1000+operation['slot']*layout['blockBytes']]
        if operation['kind']=='allocate':result=allocate(*args,operation['bytes'],operation.get('margin',0)) or 0
        else:release(*args);result=None
        results.append(result)
    after=ctypes.string_at(base,model.SIZE)
    raw=bytes(buffer)
    allowed=[(base+row['offset'],base+row['offset']+row['size']) for row in layout['fields']]
    if raw[:64]!=bytes([0x5a])*64 or raw[-64:]!=bytes([0x5a])*64 or not immutable_equal(layout['before'],after,base,allowed):
        raise RuntimeError('Native owner heap changed immutable bytes/guards')
    actual={'layout':layout,'after':after,'results':results}
    compared=compare(actual,original)
    return {**compared,'returnedNormally':True,'immutableMemoryPreserved':True,'truePointersAbove32Bits':True}
