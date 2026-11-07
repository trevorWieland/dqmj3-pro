import ctypes
import random

import unicorn
from unicorn.arm_const import UC_CPU_ARM_11MPCORE,UC_ARM_REG_PC,UC_ARM_REG_CPSR,UC_ARM_REG_C13_C0_3
from native_wave012_arena_oracle import REGISTERS
from native_wave012_ctor_runtime import immutable_equal
from native_wave013_common import sha
import native_archive032_gzip_model as model


STACK=0x4000000
RETURN=0x5000000
TLS=0x6000000


def addresses(graph,original=False):
    obj=lambda name:next(row['address'] for row in graph['readonlyObjects'] if row['symbol']==name)
    return {'operations':0x858f7c if original else obj('archive_gzip_operations'),
        'allocate':graph['functions']['archive_gzip_fixture_allocate']['address'],
        'release':graph['functions']['archive_gzip_fixture_release']['address'],
        'sdkOperations':obj('archive_gzip_sdk_operations')}


def finalize(name,result,after,layout):
    base=layout['base'];profile=layout['abi'];p=layout['pointerBytes']
    mutable=[(base+row['offset'],base+row['offset']+row['size']) for row in layout['fields'] if row['offset']!=model.POOL]
    mutable.extend((base+row['offset'],base+row['offset']+row['bytes']) for row in model.allocations(after,layout) if row['offset'] is not None)
    if not immutable_equal(layout['before'],after,base,mutable):raise RuntimeError('Gzip changed immutable caller/input/padding bytes')
    state=model.observation(after,layout)
    if name=='fn_005f5f90' and state['viewBufferRole']!='null':
        location=int.from_bytes(after[model.VIEW+p:model.VIEW+2*p],'little')-base
        declared=set()
        for key,size in [('input',p),('inputBytes',4),('output',p),('outputBytes',4),('ownsOutput',1)]:
            declared.update(range(profile[key],profile[key]+size))
        if any(after[location+i]!=0 for i in range(profile['bufferBytes']) if i not in declared):
            raise RuntimeError('Gzip constructor changed zero-backed allocation padding')
    if state['invalidReleases']:raise RuntimeError('Gzip released storage without live allocator ownership')
    output=after[model.OUTPUT:model.OUTPUT+layout['budget']]
    owned=None
    if layout['specification'].get('owned'):
        rows=state['allocations']
        if len(rows)>=3 and rows[2]['offset'] is not None:
            row=rows[2];owned=after[row['offset']:row['offset']+row['bytes']]
    return {'function':name,'layout':layout,'after':after,'result':model.normalize(name,result,base),'state':state,
        'callerOutput':output,'ownedOutput':owned,'returnedNormally':True,'immutableMemoryPreserved':True,
        'memorySha256':sha(after)}


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
    cpu.mem_map(base,model.SIZE,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE);cpu.mem_write(base,state['before'])
    cpu.mem_map(STACK,0x20000,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    stack=random.Random(seed+32028).randbytes(0x20000);cpu.mem_write(STACK,stack)
    cpu.mem_map(RETURN,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
    cpu.mem_map(TLS,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE);cpu.reg_write(UC_ARM_REG_C13_C0_3,TLS)
    if not source:
        for address,value in [(0x89a670,0xf531),(0x8bfb54,0x531),(0x89a688,base+model.SDK_HEAP)]:
            cpu.mem_write(address,value.to_bytes(4,'little'))
        cpu.mem_write(0x89a508,bytes([1]))
    sp=STACK+0x10000;frame=(STACK,sp);phase=['setup'];path=set();witnesses={};data_reads={};dirty=[True];live=[];retired=[]
    def contains(ranges,address,size):return any(low<=address<address+size<=high for low,high in ranges)
    mutable=[(base+row['offset'],base+row['offset']+row['size']) for row in state['fields'] if row['offset']!=model.POOL]
    readable=[*state['readable'],frame,*[(a,a+len(raw)) for a,raw in graph['blocks']]]
    if not source:readable.append((0x100000,reference.writable[1]))
    forbidden=[(row['address'],row['address']+row['bytes']) for key,row in graph['functions'].items() if key=='inflateMark']
    fixture_ranges=[(row['address'],row['address']+row['bytes']) for key,row in graph['functions'].items()
        if key.startswith('archive_gzip_fixture_') or key in ['sdk_allocate','sdk_release']]
    apis={graph['functions'][n]['address']:n for n in ['inflateInit2_','inflate','inflateEnd']} if source else {
        0x733bfc:'inflateInit2_',0x7321e0:'inflate',0x733bac:'inflateEnd'}
    api_pending=[];api_events=[]
    def refresh():
        if dirty[0]:
            raw=bytes(model.CONTEXT)+bytes(cpu.mem_read(base+model.CONTEXT,profile['heapBytes']))
            live[:]=model.live_ranges(raw,state,prefix=not source);retired[:]=model.retired_ranges(raw,state);dirty[0]=False
    def code(uc,address,size,user):
        refresh();mode='Thumb' if cpu.reg_read(UC_ARM_REG_CPSR)&0x20 else 'ARM'
        if contains(graph['executableRanges'],address,size):
            if source and contains(forbidden,address,size):raise RuntimeError('Unqualified optional public zlib API executed')
            if mode!='ARM' or size!=4 or address&3:raise RuntimeError('Gzip source/provider execution mode differs')
            if not source and not contains(fixture_ranges,address,size):raise RuntimeError('Original gzip used an authored executable helper')
        elif source:raise RuntimeError('Gzip source executed outside compiled instruction ownership')
        else:
            if address not in witnesses:
                owner,instruction=reference.instruction(cpu,address,size)
                witnesses[address]={'address':address,'bytes':size,'mode':mode,'owner':owner,'sha256':sha(bytes(cpu.mem_read(address,size)))}
            elif witnesses[address]['mode']!=mode or witnesses[address]['bytes']!=size:
                raise RuntimeError('Gzip reference repeated an instruction with conflicting mode/width')
        if phase[0]=='body':path.add(address)
        if api_pending and address==api_pending[-1]['returnAddress']:
            event=api_pending.pop();value=cpu.reg_read(REGISTERS[0]);event['status']=value if value<0x80000000 else value-0x100000000
            if event['name']=='inflate':
                for key in ['total_in','total_out','avail_in','avail_out']:
                    count=profile['uLongBytes'] if key.startswith('total') else 4
                    event[key]=int.from_bytes(cpu.mem_read(event['streamAddress']+profile[key],count),'little')
            api_events.append(event)
        if address in apis:
            event={'name':apis[address],'returnAddress':cpu.reg_read(REGISTERS[-1])&~1,'streamAddress':cpu.reg_read(REGISTERS[0])}
            if apis[address]=='inflateInit2_':event.update(windowBits=cpu.reg_read(REGISTERS[1]),streamBytes=cpu.reg_read(REGISTERS[3]))
            api_pending.append(event)
    def read(uc,access,address,size,value,user):
        if not source:
            for segment in reference.layout['segments']:
                if segment['name']!='data' and segment['address']<=address<address+size<=segment['address']+segment['initializedBytes']:
                    key=(address,size);data_reads.setdefault(key,set()).add(cpu.reg_read(UC_ARM_REG_PC))
        if any(max(low,address)<min(high,address+size) for low,high in retired):raise RuntimeError('Gzip read logically released storage')
        if not contains([*readable,*live],address,size):
            raise RuntimeError('Gzip read outside initialized caller/live allocation/frame at '+hex(address)+' PC '+hex(cpu.reg_read(UC_ARM_REG_PC)))
    def write(uc,access,address,size,value,user):
        if any(max(low,address)<min(high,address+size) for low,high in retired):raise RuntimeError('Gzip wrote logically released storage')
        setup=phase[0]=='setup' and contains(graph['writableRanges'],address,size)
        program=not source and reference.writable[0]<=address<address+size<=reference.writable[1]
        if not setup and not program and not contains([*mutable,*live,frame],address,size):
            raise RuntimeError('Gzip write outside declared mutable state/live allocation/frame at '+hex(address)+' PC '+hex(cpu.reg_read(UC_ARM_REG_PC)))
        if max(base+model.CONTEXT,address)<min(base+model.CONTEXT+profile['heapBytes'],address+size):dirty[0]=True
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_READ,read);cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)
    def call(address,args):
        original={REGISTERS[index]:0x71200000+index*37+seed for index in range(4,12)}
        for register,value in original.items():cpu.reg_write(register,value)
        cpu.reg_write(UC_ARM_REG_CPSR,0x10|(flags&15)<<28);cpu.reg_write(REGISTERS[-2],sp);cpu.reg_write(REGISTERS[-1],RETURN|int(thumb))
        for register,value in zip(REGISTERS,args):cpu.reg_write(register,value)
        cpu.emu_start(address,RETURN,count=20000000)
        if cpu.reg_read(UC_ARM_REG_PC)!=RETURN or cpu.reg_read(REGISTERS[-2])!=sp:raise RuntimeError('Gzip call did not return with preserved SP')
        if any(cpu.reg_read(register)!=value for register,value in original.items()):raise RuntimeError('Gzip call changed preserved registers')
        return cpu.reg_read(REGISTERS[0])
    if source:
        if call(graph['functions']['archive_bind_services']['address'],[base+model.SERVICES])!=1:raise RuntimeError('Gzip source rejected typed services')
    phase[0]='body';sequence=[];observed=[]
    steps=model.SESSION if specification.get('session') else [name]
    for step in steps:
        entry=graph['functions'][model.source_symbol(step)]['address'] if source else int(step[3:],16)
        result=call(entry,model.arguments(step,state));snapshot=bytes(cpu.mem_read(base,model.SIZE))
        partial=finalize(step,result,snapshot,state);sequence.append({'function':step,'result':partial['result']})
        if step=='fn_005f5eac':
            if specification.get('owned'):
                if partial['state']['buffer']['outputRole']=='allocation-3' and 3 in partial['state']['liveAllocations']:
                    observed.append(sha(partial['ownedOutput']))
            elif partial['state']['externalLive']:observed.append(sha(partial['callerOutput']))
    after=bytes(cpu.mem_read(base,model.SIZE))
    if api_pending:raise RuntimeError('Gzip codec API did not return')
    if bytes(cpu.mem_read(sp,0x10000))!=stack[0x10000:]:raise RuntimeError('Gzip changed caller stack')
    out=finalize(steps[-1],result,after,state);out['function']=name
    out.update(sequenceResults=sequence if specification.get('session') else [],liveInflateOutputSha256=observed if specification.get('session') else [],codePath=sorted(path),referenceInstructions=list(witnesses.values()),codecApiEvents=api_events,
        sourceOnlyExecution=source,calleeSavedSpPreserved=True,
        referenceDataReads=[{'address':key[0],'bytes':key[1],'readInstructions':sorted(value)} for key,value in sorted(data_reads.items())])
    return out


def windows(library,name,specification,seed=0):
    profile=model.native_abi(library);buffer=ctypes.create_string_buffer(model.SIZE+128)
    ctypes.memset(buffer,0x5a,ctypes.sizeof(buffer));base=ctypes.addressof(buffer)+64
    if base<=0xffffffff or base%8:raise RuntimeError('Native gzip fixture lacks aligned widened pointers')
    ptr=lambda symbol:ctypes.cast(getattr(library,symbol),ctypes.c_void_p).value
    data=lambda symbol:ctypes.addressof((ctypes.c_ubyte*1).in_dll(library,symbol))
    state=model.state(specification,base,profile,{'operations':data('archive_gzip_operations'),
        'allocate':ptr('archive_gzip_fixture_allocate'),'release':ptr('archive_gzip_fixture_release'),
        'sdkOperations':data('archive_gzip_sdk_operations')},seed)
    ctypes.memmove(base,state['before'],model.SIZE)
    library.archive_bind_services.argtypes=[ctypes.c_void_p];library.archive_bind_services.restype=ctypes.c_uint
    if library.archive_bind_services(base+model.SERVICES)!=1:raise RuntimeError('Native gzip rejected typed services')
    sequence=[];observed=[];steps=model.SESSION if specification.get('session') else [name]
    for step in steps:
        function=getattr(library,model.source_symbol(step));args=model.arguments(step,state)
        function.argtypes=[ctypes.c_void_p,ctypes.c_void_p,ctypes.c_uint] if step=='fn_005f5d60' else [ctypes.c_void_p,ctypes.c_void_p] if step=='fn_005f5eac' else [ctypes.c_void_p]
        function.restype=ctypes.c_void_p if step in ['fn_005f5f90','fn_005f601c'] else None if step in ['fn_005f5d60','fn_005f5d98'] else ctypes.c_uint
        result=function(*args);snapshot=ctypes.string_at(base,model.SIZE)
        partial=finalize(step,result or 0,snapshot,state);sequence.append({'function':step,'result':partial['result']})
        if step=='fn_005f5eac':
            if specification.get('owned'):
                if partial['state']['buffer']['outputRole']=='allocation-3' and 3 in partial['state']['liveAllocations']:
                    observed.append(sha(partial['ownedOutput']))
            elif partial['state']['externalLive']:observed.append(sha(partial['callerOutput']))
    after=ctypes.string_at(base,model.SIZE);raw=bytes(buffer)
    if raw[:64]!=bytes([0x5a])*64 or raw[-64:]!=bytes([0x5a])*64:raise RuntimeError('Native gzip outer guards changed')
    out=finalize(steps[-1],result or 0,after,state);out['function']=name
    out.update(sequenceResults=sequence if specification.get('session') else [],liveInflateOutputSha256=observed if specification.get('session') else [],sourceOnlyExecution=True,actualWidenedPointers=True,codecApiEventsNotInstrumented=True)
    return out
