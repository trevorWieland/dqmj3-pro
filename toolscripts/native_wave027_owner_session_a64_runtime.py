import random
import struct

import unicorn
import unicorn.arm64_const as r
from native_wave013_outer_lifetime import LifetimeObserver
from native_wave012_ctor_runtime import immutable_equal
from native_wave013_common import sha
from native_wave013_file_owner_game_runtime import CALLBACKS
import native_wave027_owner_session_state as model


STACK=0x130000000
SP=STACK+8192
STOP=0x140000000
UNICODE=0x150000000


def execute(graph,specification,abi,data,seed=0,flags=0):
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM64,unicorn.UC_MODE_ARM);cpu.ctl_set_cpu_model(r.UC_CPU_ARM64_A72)
    def symbol(name):return graph['functions'][name]['address']
    def object(name):return next(row['address'] for row in graph['readonlyObjects'] if row['symbol']==name)
    callbacks={key:symbol(name) if name in graph['functions'] else 0 for key,name in CALLBACKS.items()}
    callbacks.update({key:symbol(name) for key,name in {
        'session_work':'owner_archive_work','session_mount':'owner_archive_mount','session_unmount':'owner_archive_unmount',
        'session_open':'owner_archive_open','session_release':'owner_archive_release','session_delete':'owner_archive_delete',
        'session_failure':'owner_archive_failure'}.items()})
    callbacks.update({'game_heap_operations':object('pattern_game_heap_operations'),
        'archive_operations':object('owner_session_archive_operations'),'archive_file_operations':object('owner_archive_file_operations')})
    layout=model.encode(specification,0x120000000+(seed%4)*0x100000,8,seed,abi,callbacks,
        object('pattern_file_owner_operations'),object('pattern_owner_stream_operations'))
    base=layout['base'];pages=set()
    for address,raw in graph['blocks']:
        for page in range(address&~4095,(address+len(raw)+4095)&~4095,4096):
            if page not in pages:cpu.mem_map(page,4096,unicorn.UC_PROT_ALL);pages.add(page)
        cpu.mem_write(address,raw)
    for page in pages:
        writable=any(low<=page<high for low,high in graph['writableRanges'])
        executable=any(low<=page<high or page<=low<page+4096 for low,high in graph['executableRanges'])
        cpu.mem_protect(page,4096,unicorn.UC_PROT_READ|(unicorn.UC_PROT_WRITE if writable else 0)|(unicorn.UC_PROT_EXEC if executable else 0))
    meta=data['metadata']
    unicode_blocks=[(UNICODE,struct.pack('<QI4xQI4xQI4x',UNICODE+0x1000,meta['caseGroupCount'],
        UNICODE+0x4000,meta['propertyCount'],UNICODE+0x5000,meta['rangePairCount'])),
        *[(UNICODE+offset,data['values'][name]) for name,offset in [('caseGroups',0x1000),('propertyIndex',0x4000),('rangePairs',0x5000)]]]
    cpu.mem_map(UNICODE,65536,unicorn.UC_PROT_ALL)
    for address,raw in unicode_blocks:cpu.mem_write(address,raw)
    cpu.mem_protect(UNICODE,65536,unicorn.UC_PROT_READ)
    cpu.mem_map(base,model.SIZE,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE);cpu.mem_write(base,layout['before'])
    cpu.mem_map(STACK,0x40000,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    initial_stack=random.Random(seed+7027).randbytes(0x40000);cpu.mem_write(STACK,initial_stack)
    cpu.mem_map(STOP,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
    frame=(STACK,SP);heap=(base+0x8000,base+0x8000+model.CAPACITY*32)
    mutable=[]
    for low,high in sorted((base+row['offset'],base+row['offset']+row['size']) for row in layout['fields']):
        if mutable and low<=mutable[-1][1]:mutable[-1]=(mutable[-1][0],max(high,mutable[-1][1]))
        else:mutable.append((low,high))
    readable=[*layout['readable'],frame,heap,*[(address,address+len(raw)) for address,raw in graph['blocks']],
        *[(address,address+len(raw)) for address,raw in unicode_blocks]]
    def contains(ranges,address,size):return any(low<=address<address+size<=high for low,high in ranges)
    def get(address,size=8):return int.from_bytes(cpu.mem_read(address,size),'little')
    observer=LifetimeObserver(base,stride=32);observer.initialize(layout['before'])
    phase=['setup'];pending=[];path=set();arenas=[];active=[False];outer_return=[None];arena_bytes=bytearray(24);arena_written=set()
    retired=set();current_release=[None];storage_live=[False];storage_retired=[False];violations=[];stages=[]
    owner_bytes=abi['game']['ownerBytes'];owner_retired=base+model.ENV+abi['ownerRetired']
    def drain():
        for address,size,pc in pending:
            raw=bytes(cpu.mem_read(address,size))
            for index in range(0,size,8):
                part=raw[index:index+8];observer.write(address+index,len(part),int.from_bytes(part,'little'),pc)
            if active[0] and arenas:
                arena=arenas[-1]
                for at in range(max(address,arena),min(address+size,arena+24)):
                    arena_bytes[at-arena]=raw[at-address];arena_written.add(at-arena)
            if address<=owner_retired<address+size and get(owner_retired,4)==1:
                if current_release[0] is None:raise RuntimeError('A64 retirement has no typed release argument')
                retired.add(current_release[0])
            owner_data=base+model.OWNER+24
            if max(address,owner_data)<min(address+size,owner_data+8):
                value=get(owner_data)
                if value:storage_live[0]=True;storage_retired[0]=False
                elif storage_live[0]:storage_live[0]=False;storage_retired[0]=True
        pending.clear()
    def code(uc,address,size,user):
        drain()
        if size!=4 or address&3 or not contains(graph['executableRanges'],address,size):
            raise RuntimeError('A64 session escaped owned four-byte source instructions')
        if phase[0]!='body':return
        path.add(address)
        if address in [symbol('pattern_game_heap_free'),symbol('pattern_game_heap_source_delete')]:current_release[0]=cpu.reg_read(r.UC_ARM64_REG_X1)
        if address==outer_return[0]:active[0]=False
        if address==symbol('fn_004c3c20'):outer_return[0]=cpu.reg_read(r.UC_ARM64_REG_LR)
        if address==symbol('fn_004c3b08'):
            arenas.append(cpu.reg_read(r.UC_ARM64_REG_X0));active[0]=True;arena_bytes[:]=bytes(24);arena_written.clear()
    def read(uc,access,address,size,value,user):
        if not contains(readable,address,size):raise RuntimeError('A64 session read outside declared source/data/frame')
        if any(max(pointer,address)<min(address+size,pointer+owner_bytes) for pointer in retired):
            violations.append({'kind':'retired-owner','address':address,'bytes':size,'pc':cpu.reg_read(r.UC_ARM64_REG_PC)})
        if storage_retired[0] and max(address,base+model.STORAGE)<min(address+size,base+model.STORAGE+layout['storageBytes']):
            violations.append({'kind':'retired-storage','address':address,'bytes':size,'pc':cpu.reg_read(r.UC_ARM64_REG_PC)})
        observer.read(address,size,cpu.reg_read(r.UC_ARM64_REG_PC))
    def write(uc,access,address,size,value,user):
        setup=phase[0]=='setup' and contains(graph['writableRanges'],address,size)
        if not setup and not contains([*mutable,frame,heap],address,size):
            raise RuntimeError('A64 session wrote outside declared objects/frame')
        if phase[0]=='body':pending.append((address,size,cpu.reg_read(r.UC_ARM64_REG_PC)))
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_READ,read);cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)
    def call(name,args,void=False):
        registers={getattr(r,'UC_ARM64_REG_X'+str(index)):0x24100000000+index*101+seed for index in range(18,30)}
        floating={getattr(r,'UC_ARM64_REG_D'+str(index)):0x3ff0000000000000+index*131+seed for index in range(8,16)}
        for register,value in {**registers,**floating}.items():cpu.reg_write(register,value)
        fpcr=[0,0x03c00000,0x01400000,0x02800000][seed%4];fpsr=seed%32
        cpu.reg_write(r.UC_ARM64_REG_CPACR_EL1,3<<20);cpu.reg_write(r.UC_ARM64_REG_FPCR,fpcr);cpu.reg_write(r.UC_ARM64_REG_FPSR,fpsr)
        cpu.reg_write(r.UC_ARM64_REG_NZCV,(flags&15)<<28);cpu.reg_write(r.UC_ARM64_REG_SP,SP);cpu.reg_write(r.UC_ARM64_REG_LR,STOP)
        for index,value in enumerate(args):cpu.reg_write(getattr(r,'UC_ARM64_REG_X'+str(index)),value)
        cpu.emu_start(symbol(name),STOP,count=specification.get('instruction_limit',4000000));drain()
        if cpu.reg_read(r.UC_ARM64_REG_PC)!=STOP or cpu.reg_read(r.UC_ARM64_REG_SP)!=SP:
            raise RuntimeError('A64 session did not return with original SP')
        if any(cpu.reg_read(register)!=value for register,value in {**registers,**floating}.items()):
            raise RuntimeError('A64 session changed preserved registers')
        if cpu.reg_read(r.UC_ARM64_REG_FPCR)!=fpcr or cpu.reg_read(r.UC_ARM64_REG_FPSR)!=fpsr:
            raise RuntimeError('A64 session changed floating controls/status')
        return None if void else cpu.reg_read(r.UC_ARM64_REG_X0)&0xffffffff
    for name,address in [('pattern_bind_unicode_data',UNICODE),('pattern_owner_bind_sync',base+0x5700),
        ('pattern_owner_bind_locale',base+0x5600),('pattern_owner_bind_services',base+0x5800),
        ('pattern_game_filter_bind_services',base+model.GAME_SERVICES)]:
        if call(name,[address])!=1:raise RuntimeError('A64 typed service binding rejected')
    phase[0]='body'
    call('fn_00246e68',[base+model.SLOT],True)
    initialized=call('fn_00246e00',[base+model.SLOT]);stages.append({'stage':'initialized','result':initialized,'memory':bytes(cpu.mem_read(base,model.SIZE))})
    if specification.get('portable_arm'):
        result=call('pattern_game_filter_check',[base+0x200,base+model.SLOT,layout['gameTextPointer']])
    else:result=call('fn_006b5424',[base+model.SLOT,layout['gameTextPointer']])
    stages.append({'stage':'checked','result':result,'memory':bytes(cpu.mem_read(base,model.SIZE))})
    call('fn_00246e74',[base+model.SLOT],True)
    after=bytes(cpu.mem_read(base,model.SIZE))
    if not immutable_equal(layout['before'],after,base,[*mutable,heap]):raise RuntimeError('A64 session changed immutable caller input')
    if bytes(cpu.mem_read(SP,0x40000-8192))!=initial_stack[8192:]:raise RuntimeError('A64 session changed caller stack')
    if arenas and not set(range(20)).issubset(arena_written):raise RuntimeError('A64 live arena fields were not fully observed')
    snapshot=[int.from_bytes(arena_bytes[0:8],'little'),int.from_bytes(arena_bytes[8:16],'little'),int.from_bytes(arena_bytes[16:20],'little')] if arenas else None
    return {'layout':layout,'after':after,'result':result,'returnedNormally':True,'immutableMemoryPreserved':True,
        'memorySha256':sha(after),'arenaIdentities':arenas,'arenaSnapshot':snapshot,'emptyLiteralAddress':object('pattern_empty_text'),
        'lifetime':observer.summary(),'quarantinedArenaOffsets':sorted(observer.quarantined),'ownershipReadViolations':violations,
        'ownerRetired':bool(retired),'storageRetired':storage_retired[0],'stageSnapshots':stages,'codePath':sorted(path),
        'sourceOnlyA64Code':True,'entryAbove32Bits':symbol('fn_00246e00')>0xffffffff,'pointerBytes':8,'stackRange':[STACK,SP],
        'preservedX18Through29AndLowD8Through15':True,'floatingControlsPreserved':True,'writeObservationReadsAfterInstructionOnly':True}
