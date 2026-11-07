import bisect
import ctypes
import random

import unicorn
from unicorn.arm_const import UC_ARM_REG_PC,UC_ARM_REG_CPSR,UC_ARM_REG_C13_C0_3,UC_CPU_ARM_1176

from native_wave012_arena_oracle import REGISTERS,RETURN,STACK
from native_wave012_ctor_runtime import immutable_equal
from native_wave013_outer_lifetime import LifetimeObserver
import native_wave013_nfa_data as unicode_services
import native_wave013_file_owner_state as model
import native_wave013_file_owner_provider_model as provider_model
from native_wave013_common import sha


CALLBACKS={'provider_open':'pattern_owner_provider_open','provider_read':'pattern_owner_provider_read',
 'provider_size':'pattern_owner_provider_size','provider_close':'pattern_owner_provider_close','file_close':'pattern_owner_provider_file_close',
 'heap_free':'pattern_owner_provider_heap_free','cfg_region':'pattern_owner_backend_region','cfg_language':'pattern_owner_backend_language',
 'cfg_failure':'pattern_owner_backend_cfg_failure','sync_thread':'pattern_owner_fixture_thread','sync_acquire':'pattern_owner_fixture_acquire',
 'sync_release':'pattern_owner_fixture_release','backend_work':'pattern_owner_backend_work','backend_mount':'pattern_owner_backend_mount',
 'backend_unmount':'pattern_owner_backend_unmount','backend_open':'pattern_owner_backend_open','backend_release':'pattern_owner_backend_release',
 'backend_delete':'pattern_owner_backend_delete','backend_failure':'pattern_owner_backend_failure'}


def callbacks(graph):
    return {key:graph['functions'][name]['address'] if name in graph['functions'] else 0 for key,name in CALLBACKS.items()}


def readonly_object(graph,name):
    return next(row['address'] for row in graph['readonlyObjects'] if row['symbol']==name)


def execute(graph,specification,abi,unicode,reference_image=None,seed=0,thumb=False,flags=0):
    source=reference_image is None
    owner_ops=readonly_object(graph,'pattern_file_owner_operations') if source else 0x855dd4
    stream_ops=readonly_object(graph,'pattern_owner_stream_operations') if source else 0x85238c
    layout=model.encode(specification,0x3000000+(seed%4)*0x100000,4,seed,abi,callbacks(graph),owner_ops,stream_ops)
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM);cpu.ctl_set_cpu_model(UC_CPU_ARM_1176)
    if not source:reference_image.map(cpu)
    pages=set()
    for address,raw in graph['blocks']:
        for page in range(address&~4095,(address+len(raw)+4095)&~4095,4096):
            if page not in pages:cpu.mem_map(page,4096,unicorn.UC_PROT_ALL);pages.add(page)
        cpu.mem_write(address,raw)
    for page in pages:
        writable=any(low<=page<high for low,high in graph.get('writableRanges',[]))
        cpu.mem_protect(page,4096,unicorn.UC_PROT_READ|(unicorn.UC_PROT_WRITE if writable else unicorn.UC_PROT_EXEC))
    service_blocks=unicode_services.arm_blocks(unicode) if source else []
    cpu.mem_map(model.TLS,65536,unicorn.UC_PROT_READ if source else unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    for address,raw in service_blocks:cpu.mem_write(address,raw)
    cpu.reg_write(UC_ARM_REG_C13_C0_3,model.TLS)
    cpu.mem_map(RETURN,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
    cpu.mem_map(STACK,0x40000,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    rng=random.Random(seed+803);initial_stack=rng.randbytes(0x40000);stack_expected=bytearray(initial_stack)
    cpu.mem_write(STACK,initial_stack)
    cpu.mem_map(layout['base'],model.SIZE,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    cpu.mem_write(layout['base'],layout['before'])
    base=layout['base'];frame=(STACK+0x2000-8192,STACK+0x2000)
    def put(address,value,size=4):cpu.mem_write(address,(value&((1<<(size*8))-1)).to_bytes(size,'little'))
    def get(address,size=4):return int.from_bytes(cpu.mem_read(address,size),'little')
    if not source:
        put(0x8bfb54,0x531);put(0x89a79d,1,1);put(0x89a508,1,1);put(0x89a688,base+0x5a00)
        for offset,value in [(0,base+model.STORAGE),(4,base+0x30000),(8,get(base+model.HEAP+8)),(12,0),(16,model.TLS),(20,1)]:
            put(0x8e36c0+offset,value)
    namespace=base+0x5c00
    heap_range=(base+0x8000,base+0x8000+model.CAPACITY*16)
    mutable=[]
    for low,high in sorted((base+row['offset'],base+row['offset']+row['size']) for row in layout['fields']):
        if mutable and low<=mutable[-1][1]:mutable[-1]=(mutable[-1][0],max(high,mutable[-1][1]))
        else:mutable.append((low,high))
    readable=[*layout['readable'],frame,(STACK+0x2000,STACK+0x2000c),heap_range]
    if source:readable += [(address,address+len(raw)) for address,raw in [*graph['blocks'],*service_blocks]]
    else:readable += [(0x100000,reference_image.writable[1]),(model.TLS,model.TLS+65536),
        *[(address,address+len(raw)) for address,raw in graph['blocks']]]
    def contains(ranges,address,size):return any(low<=address<address+size<=high for low,high in ranges)
    observer=LifetimeObserver(base);observer.initialize(layout['before'])
    phase=['setup'];events=[];path=set();dependencies=set();calls=[];instruction_witnesses={};data_reads={};previous=[None];private_arenas=[];pending=[]
    cfg_region=[0];cfg_language=[0];cfg_queries=[];unmounts=[0];heap_queries=[0];compiled_pointer=[None]
    stream_addresses={};stream_snapshots={};retired=[False];storage_retired=[False];stack_args=[0];idempotent=[]
    arena_return=[None];arena_active=[False];arena_state=bytearray(12);arena_written=set();ownership_reads=[]
    allocator=graph['functions']['fn_004c39c8']['address'] if source else 0x4c39c8
    constructor=graph['functions']['fn_004c3b08']['address'] if source else 0x4c3b08
    outer=graph['functions']['fn_004c3c20']['address'] if source else 0x4c3c20
    active_callbacks={row['address']:name for name,row in graph['functions'].items()}
    heap_field_names={0:'heap.begin',4:'heap.end',8:'heap.anchor',12:'heap.mutex.state',16:'heap.mutex.thread',20:'heap.mutex.depth'}
    def code(uc,address,size,user):
        if source or address in active_callbacks or contains(graph['executableRanges'],address,size):
            if not contains(graph['executableRanges'],address,size):raise RuntimeError('Owner source/provider escaped owned code')
            if cpu.reg_read(UC_ARM_REG_CPSR)&0x20 or size!=4 or address&3:
                raise RuntimeError('Owner source/provider changed its compiler-qualified ARM mode')
            owner=next((name for name,row in graph['functions'].items() if row['address']<=address<address+size<=row['address']+row['bytes']),None)
            mnemonic='provider';operands=''
        else:
            owner,instruction=reference_image.instruction(cpu,address,size);dependencies.add(owner)
            instruction_witnesses[address]={'address':address,'bytes':size,'mode':'Thumb' if cpu.reg_read(UC_ARM_REG_CPSR)&0x20 else 'ARM',
                'owner':owner,'sha256':sha(bytes(cpu.mem_read(address,size)))}
            mnemonic=instruction['mnemonic'];operands=instruction['operands']
        last=previous[0]
        if last and address!=last['address']+last['size']:
            if last['mnemonic'].startswith(('bl','blx')) or (last['mnemonic'].startswith('bx') and last['operands']!='lr'):
                calls.append({'from':last['address'],'to':address,'owner':owner,'kind':'actual-call-or-indirect-transfer'})
        previous[0]={'address':address,'size':size,'mnemonic':mnemonic,'operands':operands}
        if phase[0]!='body':return
        path.add(address)
        if address==arena_return[0]:arena_active[0]=False
        if address==outer:arena_return[0]=cpu.reg_read(REGISTERS[-1])&~1
        if address==constructor:
            arena=cpu.reg_read(REGISTERS[0]);private_arenas.append(arena);compiled_pointer[0]=None
            arena_active[0]=True;arena_state[:]=bytes(12);arena_written.clear()
            if not source:events.append({'type':'arena_epoch','address':arena})
        if not source:
            if address==0x17070c:heap_queries[0]+=1
            if address==0x16e9e0:unmounts[0]+=1
            if address==0x4c4104:
                stream=cpu.reg_read(REGISTERS[2]);handle=get(stream+4)&~1
                if handle:stream_addresses[handle]=stream
            if address==0x15cf8c:
                handle=cpu.reg_read(REGISTERS[0]);stream=stream_addresses.get(handle)
                if stream:
                    identifier=get(handle+abi['fileId'])
                    stream_snapshots[str(identifier)]={'position':get(stream+8,8),'cachedSize':get(stream+16,8)}
            if pending and address==pending[-1]['return']:
                row=pending.pop();result=cpu.reg_read(REGISTERS[0])
                if row['caller']==0x4c3ca0:compiled_pointer[0]=result
                events.append({'type':'allocation','address':result,'blocks':row['blocks'],'kind':row['kind'],
                    'caller':row['caller'],'count':row['count']})
            if address==allocator:
                from native_wave013_file_io_layout import allocation_role
                caller=(cpu.reg_read(REGISTERS[-1])&~1)-4
                count=get(compiled_pointer[0]+16) if compiled_pointer[0] else 0
                kind,expected=allocation_role(caller,count);blocks=cpu.reg_read(REGISTERS[1])
                if blocks!=expected:raise RuntimeError('Owner original logical arena request differs')
                pending.append({'return':caller+4,'caller':caller,'blocks':blocks,'kind':kind,'count':count})
    def read(uc,access,address,size,value,user):
        if not source and 0x100000<=address<address+size<=reference_image.writable[1]:
            key=(cpu.reg_read(UC_ARM_REG_PC),address,size)
            data_reads.setdefault(key,set()).add(sha(bytes(cpu.mem_read(address,size))))
        if retired[0] and base+model.OWNER<=address<address+size<=base+model.OWNER+layout['ownerBytes']:
            ownership_reads.append({'kind':'retired-owner','address':address,'bytes':size,'pc':cpu.reg_read(UC_ARM_REG_PC)})
        if storage_retired[0] and max(address,base+model.STORAGE)<min(address+size,base+model.STORAGE+layout['storageBytes']):
            ownership_reads.append({'kind':'retired-storage','address':address,'bytes':size,'pc':cpu.reg_read(UC_ARM_REG_PC)})
        if not contains(readable,address,size):raise RuntimeError('Owner read outside declared objects/frame/program/services at '+hex(address))
        observer.read(address,size,cpu.reg_read(UC_ARM_REG_PC))
    def write(uc,access,address,size,value,user):
        setup_write=phase[0]=='setup' and contains(graph.get('writableRanges',[]),address,size)
        same_argument=(STACK+0x2000<=address<address+size<=STACK+0x2000+stack_args[0]
            and value.to_bytes(size,'little')==stack_expected[address-STACK:address-STACK+size])
        if same_argument:idempotent.append({'address':address,'bytes':size,'pc':cpu.reg_read(UC_ARM_REG_PC)})
        program_write=not source and reference_image.writable[0]<=address<address+size<=reference_image.writable[1]
        tls_write=not source and model.TLS<=address<address+size<=model.TLS+65536
        if not setup_write and not same_argument and not program_write and not tls_write and not contains([*mutable,frame,heap_range],address,size):
            raise RuntimeError('Owner write outside declared mutable state/frame at '+hex(address)+' pc'+hex(cpu.reg_read(UC_ARM_REG_PC)))
        if phase[0]!='body':return
        pc=cpu.reg_read(UC_ARM_REG_PC);observer.write(address,size,value,pc)
        if arena_active[0] and private_arenas:
            arena=private_arenas[-1]
            for at in range(max(address,arena),min(address+size,arena+12)):
                arena_state[at-arena]=(value>>(8*(at-address)))&255;arena_written.add(at-arena)
        if not source and 0x8e36c0<=address<address+size<=0x8e36d8:
            field=heap_field_names.get(address-0x8e36c0)
            if field is None or size!=4:raise RuntimeError('Partial original SDK heap field write')
            events.append({'type':'external_heap','field':field,'value':value,'pc':pc,'originalAddress':address})
        if base<=address<address+size<=base+model.SIZE:
            events.append({'type':'write','address':address,'bytes':size,'value':value,'pc':pc})
            if address==base+provider_model.ENV+abi['ownerRetired'] and value==1:retired[0]=True
            if address==base+model.OWNER+12 and value==0 and specification.get('operation') in ['reset','delete']:
                storage_retired[0]=True
    def interrupt(uc,number,user):
        pc=cpu.reg_read(UC_ARM_REG_PC)-4
        if source or pc not in [0x454368,0x14e4c8] or cpu.reg_read(REGISTERS[0])!=0x531:
            raise RuntimeError('Unexpected owner original syscall at '+hex(pc))
        header=get(model.TLS+0x80)
        cfg_queries.append({'kind':1 if pc==0x454368 else 2,'flags':[get(base+0x4000+4*i) for i in range(min(len(specification.get('candidates',['a','b'])),16))]})
        if pc==0x454368 and header==0x20000:
            regions=specification.get('regions',[1,1]);value=regions[min(cfg_region[0],len(regions)-1)];cfg_region[0]+=1
            put(model.TLS+0x84,0);put(model.TLS+0x88,value)
        elif pc==0x14e4c8 and header==0x10082 and get(model.TLS+0x84)==1 and get(model.TLS+0x88)==0xa0002 and get(model.TLS+0x8c)==0x1c:
            output=get(model.TLS+0x90)
            if not frame[0]<=output<frame[1]:raise RuntimeError('Language output leaves private frame')
            put(output,specification.get('language',1),1);put(model.TLS+0x84,0);cfg_language[0]+=1
        else:raise RuntimeError('Owner CFG wire contract differs')
        cpu.reg_write(REGISTERS[0],0)
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_READ,read)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write);cpu.hook_add(unicorn.UC_HOOK_INTR,interrupt)
    def call(name,args,result_kind='unsigned'):
        address=graph['functions'][name]['address'] if source else int(name[3:],16)
        if not source:address|=int(reference_image.functions[address]['mode']=='Thumb')
        initial=[rng.getrandbits(32) for _ in REGISTERS];initial[:min(4,len(args))]=args[:4];initial[-2:]=[STACK+0x2000,RETURN|int(thumb)]
        stack_args[0]=max(0,len(args)-4)*4
        for index,value in enumerate(args[4:]):
            raw=value.to_bytes(4,'little');cpu.mem_write(STACK+0x2000+index*4,raw);stack_expected[0x2000+index*4:0x2004+index*4]=raw
        cpu.reg_write(UC_ARM_REG_CPSR,0x10|flags<<28)
        for register,value in zip(REGISTERS,initial):cpu.reg_write(register,value)
        cpu.emu_start(address,RETURN,count=specification.get('instruction_limit',4000000))
        final=[cpu.reg_read(register) for register in REGISTERS]
        if cpu.reg_read(UC_ARM_REG_PC)!=RETURN or bool(cpu.reg_read(UC_ARM_REG_CPSR)&0x20)!=thumb:raise RuntimeError('Owner bounded return/interworking failed at '+hex(cpu.reg_read(UC_ARM_REG_PC))+' last '+str(previous[0]))
        if final[4:12]!=initial[4:12] or final[-2]!=initial[-2]:raise RuntimeError('Owner changed callee-save registers/SP')
        return None if result_kind=='void' else final[0]
    if source:
        for name,args in [('pattern_bind_unicode_data',[model.TLS]),('pattern_owner_bind_sync',[base+0x5700]),
            ('pattern_owner_bind_locale',[base+0x5600]),('pattern_owner_bind_services',[base+0x5800])]:
            if call(name,args)!=1:raise RuntimeError('Owner typed service binding rejected')
    elif specification.get('registered',1):
        if call('fn_001233c4',[namespace,base+provider_model.ENV,0,0])!=0:raise RuntimeError('Actual SDK provider registration failed')
    if not source and specification.get('qualify_sdk_pool_mutex'):
        call('fn_0013c500',[0x8e3460],'void')
    phase[0]='body';operation=specification.get('operation','apply')
    if operation=='construct':result=call('fn_004c4358',[base+model.OWNER])
    elif operation in ['reset','delete']:
        result=call('fn_004c42fc' if operation=='reset' else 'fn_004c43a8',[base+model.OWNER],'void')
    elif operation in ['initialize','resource']:
        result=call('fn_004c3e08' if operation=='initialize' else 'fn_004c4068',[base+model.OWNER])
    elif operation=='validate':
        args=layout['rootArguments'];result=call('fn_006d40e4',[args[0],args[1],args[3],args[4]])
    elif source and specification.get('portable_arm'):
        result=call('pattern_owner_apply',[base+0x200,*layout['rootArguments']])
    else:result=call('fn_004c3e74',layout['rootArguments'])
    if pending:raise RuntimeError('Owner fixed arena did not return')
    after=bytes(cpu.mem_read(base,model.SIZE))
    allowed=[*mutable,heap_range]
    if not immutable_equal(layout['before'],after,base,allowed):
        bad=next(i for i,(a,b) in enumerate(zip(layout['before'],after)) if a!=b and not contains(allowed,base+i,1))
        raise RuntimeError('Owner changed immutable fixture bytes at '+hex(bad))
    stack_after=bytes(cpu.mem_read(STACK,0x40000))
    if stack_after[0x2000:]!=stack_expected[0x2000:]:raise RuntimeError('Owner changed caller stack')
    arena=private_arenas[-1] if private_arenas else None
    if arena and arena_written!=set(range(12)):raise RuntimeError('Live arena field writes were not fully observed')
    arena_snapshot=[int.from_bytes(arena_state[4*i:4*i+4],'little') for i in range(3)] if arena else None
    return {'layout':layout,'after':after,'events':events,'result':result,'arenaIdentities':private_arenas,'arenaSnapshot':arena_snapshot,
        'emptyLiteralAddress':readonly_object(graph,'pattern_empty_text') if source else 0x4c3e04,
        'cfgQueries':cfg_queries,'cfgRegionCalls':cfg_region[0],'cfgLanguageCalls':cfg_language[0],'unmountCalls':unmounts[0],'heapThreadQueries':heap_queries[0],
        'streamSnapshots':stream_snapshots,'lifetime':observer.summary(),'quarantinedArenaOffsets':sorted(observer.quarantined),
        'ownershipReadViolations':ownership_reads,'ownerRetired':retired[0],'storageRetired':storage_retired[0],'idempotentIncomingArguments':idempotent,
        'codePath':sorted(path),'dependencies':[reference_image.dependency(address) for address in sorted(dependencies)] if not source else [],
        'arenaSnapshotFromLiveWriteTrace':True,
        'referenceInstructionWitnesses':[instruction_witnesses[pc] for pc in sorted(instruction_witnesses)],
        'referenceDataReadWitnesses':[{'pc':pc,'address':address,'bytes':size,'observedValueSha256':sorted(data_reads[(pc,address,size)])}
            for pc,address,size in sorted(data_reads)],'calls':calls,'returnedNormally':True,'immutableMemoryPreserved':True,'memorySha256':sha(after)}
