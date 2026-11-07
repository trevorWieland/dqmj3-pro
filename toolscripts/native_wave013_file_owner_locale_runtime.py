import ctypes
import random

import unicorn
from unicorn.arm_const import UC_ARM_REG_PC,UC_ARM_REG_CPSR,UC_ARM_REG_C13_C0_3,UC_CPU_ARM_1176

from native_wave012_arena_oracle import REGISTERS,RETURN,STACK
from native_wave012_ctor_runtime import immutable_equal
from native_wave013_common import sha
import native_wave013_file_owner_locale_model as model


TLS=0x5000000
CFG_HANDLE=0x531


class SemanticMismatch(RuntimeError):
    def __init__(self,actual,expected,differences):
        self.details={'returnedNormally':True,'immutableMemoryPreserved':True,
            'actualReturn':actual['result'],'expectedReturn':expected['result'],'differentOffsets':differences[:20],
            'sameOutputCountAndFiles':actual['after'][model.COUNT:model.FILES+8]==expected['after'][model.COUNT:model.FILES+8]}
        super().__init__('Normally returning locale source has different outputs or service observations')


def execute(graph,specification,source=False,seed=0,thumb=False,flags=0):
    symbols={'region':'pattern_owner_fixture_region','language':'pattern_owner_fixture_language','failure':'pattern_owner_fixture_cfg_failure'}
    callbacks={key:graph['functions'][symbol]['address'] if source else 0 for key,symbol in symbols.items()}
    layout=model.encode(specification,0x3000000+(seed%4)*0x100000,4,seed,callbacks)
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(UC_CPU_ARM_1176)
    pages=set()
    for address,raw in graph['blocks']:
        for page in range(address&~4095,(address+len(raw)+4095)&~4095,4096):
            if page not in pages:cpu.mem_map(page,4096,unicorn.UC_PROT_ALL);pages.add(page)
        cpu.mem_write(address,raw)
    for page in pages:
        writable=any(low<=page<high for low,high in graph.get('writableRanges',[]))
        cpu.mem_protect(page,4096,unicorn.UC_PROT_READ|(unicorn.UC_PROT_WRITE if writable else unicorn.UC_PROT_EXEC))
    if not source:cpu.mem_write(0x8bfb54,CFG_HANDLE.to_bytes(4,'little'))
    cpu.mem_map(RETURN,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
    cpu.mem_map(STACK,8192,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    cpu.mem_map(TLS,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    cpu.reg_write(UC_ARM_REG_C13_C0_3,TLS)
    cpu.mem_map(layout['base'],model.SIZE,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    cpu.mem_write(layout['base'],layout['before'])
    rng=random.Random(seed+723)
    initial_stack=rng.randbytes(8192);cpu.mem_write(STACK,initial_stack)
    frame=(STACK+4096-512,STACK+4096)
    mutable=[(layout['base']+low,layout['base']+high) for low,high in layout['mutable']]
    readonly=[(address,address+len(raw)) for address,raw in graph['blocks']]
    readable=[*mutable,frame,(layout['base']+0x600,layout['base']+0x610),
        (layout['base']+model.CONTEXT,layout['base']+model.CONTEXT+layout['contextBytes']),*readonly,(TLS+0x80,TLS+0x94)]
    def contains(ranges,address,size):return any(low<=address<address+size<=high for low,high in ranges)
    setup=[source];path=set();trace=[];region_calls=[0]
    def code(uc,address,size,user):
        if not contains(graph['executableRanges'],address,size):raise RuntimeError('Locale left complete owned instructions')
        path.add(address)
    def read(uc,access,address,size,value,user):
        if not contains(readable,address,size):raise RuntimeError('Locale read beyond declared objects/data/private frame')
    def write(uc,access,address,size,value,user):
        if setup[0] and contains(graph.get('writableRanges',[]),address,size):return
        if contains([*mutable,frame,(TLS+0x80,TLS+0x94)],address,size):return
        raise RuntimeError('Locale wrote beyond declared outputs/service data/private frame')
    def interrupt(uc,number,user):
        pc=cpu.reg_read(UC_ARM_REG_PC)-4
        if source or pc not in [0x454368,0x14e4c8] or cpu.reg_read(REGISTERS[0])!=CFG_HANDLE:
            raise RuntimeError('Unqualified original service interrupt')
        words=[int.from_bytes(cpu.mem_read(TLS+0x80+4*i,4),'little') for i in range(5)]
        watched=int.from_bytes(cpu.mem_read(layout['base']+model.COUNT,4),'little')
        if pc==0x454368 and words[0]==0x20000:
            regions=specification.get('regions',[0,0]);value=regions[min(region_calls[0],len(regions)-1)];region_calls[0]+=1
            cpu.mem_write(TLS+0x84,bytes(4));cpu.mem_write(TLS+0x88,value.to_bytes(4,'little'))
            trace.append({'kind':'region','watchedCount':watched,'header':words[0],'reply':value})
        elif pc==0x14e4c8 and words[:4]==[0x10082,1,0xa0002,0x1c] and frame[0]<=words[4]<frame[1]:
            value=specification.get('language',0)
            cpu.mem_write(words[4],bytes([value]));cpu.mem_write(TLS+0x84,bytes(4))
            trace.append({'kind':'language','watchedCount':watched,'header':words[0],'reply':value})
        else:raise RuntimeError('Actual CFG IPC request differs from measured service contract')
        cpu.reg_write(REGISTERS[0],0)
    cpu.hook_add(unicorn.UC_HOOK_CODE,code)
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ,read)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)
    cpu.hook_add(unicorn.UC_HOOK_INTR,interrupt)
    def call(name,args):
        entry=graph['functions'][name]['address'] if source else int(name[3:],16)
        initial=[rng.getrandbits(32) for _ in REGISTERS];initial[:len(args)]=args;initial[-2:]=[STACK+4096,RETURN|int(thumb)]
        cpu.reg_write(UC_ARM_REG_CPSR,0x10|flags<<28)
        for register,value in zip(REGISTERS,initial):cpu.reg_write(register,value)
        cpu.emu_start(entry,RETURN,count=20000)
        final=[cpu.reg_read(register) for register in REGISTERS]
        if cpu.reg_read(UC_ARM_REG_PC)!=RETURN or bool(cpu.reg_read(UC_ARM_REG_CPSR)&0x20)!=thumb:
            raise RuntimeError('Locale did not return/interwork in bounds')
        if final[4:12]!=initial[4:12] or final[-2]!=initial[-2]:raise RuntimeError('Locale changed callee-save registers/SP')
        return final[0]
    if source:
        if call('pattern_owner_bind_locale',[layout['base']+0x600])!=1:raise RuntimeError('Locale service binding rejected')
    setup[0]=False
    if specification.get('operation')=='policy':result=call('fn_00453b34',[])
    else:
        call('fn_004c46e8',[layout['base']+0x100,layout['base']+model.FILES,layout['base']+model.COUNT,specification.get('selection_input',0)])
        result=None
    after=bytes(cpu.mem_read(layout['base'],model.SIZE))
    if not immutable_equal(layout['before'],after,layout['base'],mutable):raise RuntimeError('Locale changed immutable input/guard bytes')
    stack_after=bytes(cpu.mem_read(STACK,8192))
    if stack_after[:3584]!=initial_stack[:3584] or stack_after[4096:]!=initial_stack[4096:]:raise RuntimeError('Locale changed caller stack')
    return {'layout':layout,'after':after,'result':result,'serviceTrace':trace,'codePath':sorted(path),
        'returnedNormally':True,'immutableMemoryPreserved':True,'memorySha256':sha(after)}


def compare(actual,original):
    expected=model.project(original,actual['layout'])
    differences=[i for i,(a,b) in enumerate(zip(expected,actual['after'])) if a!=b]
    if differences or actual['result']!=original['result']:raise SemanticMismatch(actual,original,differences)
    return {'fullFixtureBytesCompared':model.SIZE,'allBytesAgree':True,'sourceServiceObservationsMatchOriginalSvcTrace':True,'noMasks':True}


def native(library,specification,original,seed=0):
    buffer=ctypes.create_string_buffer(model.SIZE+128);ctypes.memset(buffer,0x5a,ctypes.sizeof(buffer));base=ctypes.addressof(buffer)+64
    if base<=0xffffffff:raise RuntimeError('Locale native pointers did not exceed32 bits')
    callbacks={key:ctypes.cast(getattr(library,name),ctypes.c_void_p).value for key,name in
        {'region':'pattern_owner_fixture_region','language':'pattern_owner_fixture_language','failure':'pattern_owner_fixture_cfg_failure'}.items()}
    layout=model.encode(specification,base,8,seed,callbacks);ctypes.memmove(base,layout['before'],model.SIZE)
    bind=library.pattern_owner_bind_locale;bind.argtypes=[ctypes.c_void_p];bind.restype=ctypes.c_int
    if bind(base+0x600)!=1:raise RuntimeError('Native locale binding rejected')
    if specification.get('operation')=='policy':
        function=library.fn_00453b34;function.argtypes=[];function.restype=ctypes.c_uint;result=function()
    else:
        function=library.fn_004c46e8;function.argtypes=[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_void_p,ctypes.c_uint];function.restype=None
        function(base+0x100,base+model.FILES,base+model.COUNT,specification.get('selection_input',0));result=None
    after=ctypes.string_at(base,model.SIZE);raw=bytes(buffer)
    allowed=[(base+low,base+high) for low,high in layout['mutable']]
    if raw[:64]!=bytes([0x5a])*64 or raw[-64:]!=bytes([0x5a])*64 or not immutable_equal(layout['before'],after,base,allowed):
        raise RuntimeError('Native locale changed immutable inputs/guards')
    compared=compare({'layout':layout,'after':after,'result':result},original)
    return {**compared,'returnedNormally':True,'immutableMemoryPreserved':True,'truePointersAbove32Bits':True}
