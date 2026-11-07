import random

import unicorn
import unicorn.arm64_const as r
from native_wave013_common import sha
from native_archive032_gzip_oracle import addresses,finalize
import native_archive032_gzip_model as model


STACK=0x130000000
RETURN=0x140000000


def execute(graph,name,specification,seed=0,flags=0):
    profile=model.abi(graph);base=0x120000000+(seed%4)*0x100000
    if profile['pointerBytes']!=8:raise ValueError('A64 gzip ABI does not use widened pointers')
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
    cpu.mem_map(base,model.SIZE,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE);cpu.mem_write(base,state['before'])
    cpu.mem_map(STACK,0x20000,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    stack=random.Random(seed+3264).randbytes(0x20000);cpu.mem_write(STACK,stack)
    cpu.mem_map(RETURN,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
    sp=STACK+0x10000;frame=(STACK,sp);phase=['setup'];path=set();dirty=[True];live=[];retired=[]
    def contains(ranges,address,size):return any(low<=address<address+size<=high for low,high in ranges)
    mutable=[(base+row['offset'],base+row['offset']+row['size']) for row in state['fields'] if row['offset']!=model.POOL]
    readable=[*state['readable'],frame,*[(a,a+len(raw)) for a,raw in graph['blocks']]]
    forbidden=[(row['address'],row['address']+row['bytes']) for key,row in graph['functions'].items() if key=='inflateMark']
    apis={graph['functions'][n]['address']:n for n in ['inflateInit2_','inflate','inflateEnd']};pending=[];events=[]
    def refresh():
        if dirty[0]:
            raw=bytes(model.CONTEXT)+bytes(cpu.mem_read(base+model.CONTEXT,profile['heapBytes']))
            live[:]=model.live_ranges(raw,state);retired[:]=model.retired_ranges(raw,state);dirty[0]=False
    def code(uc,address,size,user):
        refresh()
        if contains(forbidden,address,size):raise RuntimeError('A64 executed unqualified optional public zlib API')
        if size!=4 or address&3 or not contains(graph['executableRanges'],address,size):
            raise RuntimeError('A64 gzip escaped four-byte owned source instructions')
        if phase[0]=='body':path.add(address)
        if pending and address==pending[-1]['returnAddress']:
            event=pending.pop();value=cpu.reg_read(r.UC_ARM64_REG_X0)&0xffffffff
            event['status']=value if value<0x80000000 else value-0x100000000
            if event['name']=='inflate':
                for key in ['total_in','total_out','avail_in','avail_out']:
                    count=profile['uLongBytes'] if key.startswith('total') else 4
                    event[key]=int.from_bytes(cpu.mem_read(event['streamAddress']+profile[key],count),'little')
            events.append(event)
        if address in apis:
            event={'name':apis[address],'returnAddress':cpu.reg_read(r.UC_ARM64_REG_LR),'streamAddress':cpu.reg_read(r.UC_ARM64_REG_X0)}
            if apis[address]=='inflateInit2_':event.update(windowBits=cpu.reg_read(r.UC_ARM64_REG_X1)&0xffffffff,streamBytes=cpu.reg_read(r.UC_ARM64_REG_X3)&0xffffffff)
            pending.append(event)
    def read(uc,access,address,size,value,user):
        if any(max(low,address)<min(high,address+size) for low,high in retired):raise RuntimeError('Gzip read logically released storage')
        if not contains([*readable,*live],address,size):
            raise RuntimeError('A64 gzip read outside declared caller/live allocation/frame at '+hex(address)+' PC '+hex(cpu.reg_read(r.UC_ARM64_REG_PC)))
    def write(uc,access,address,size,value,user):
        if any(max(low,address)<min(high,address+size) for low,high in retired):raise RuntimeError('Gzip wrote logically released storage')
        setup=phase[0]=='setup' and contains(graph['writableRanges'],address,size)
        if not setup and not contains([*mutable,*live,frame],address,size):
            raise RuntimeError('A64 gzip wrote outside declared state/live allocation/frame')
        if max(base+model.CONTEXT,address)<min(base+model.CONTEXT+profile['heapBytes'],address+size):dirty[0]=True
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_READ,read);cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)
    def call(address,args):
        saved={getattr(r,'UC_ARM64_REG_X'+str(i)):0x3210000000+i*97+seed for i in range(18,30)}
        saved.update({getattr(r,'UC_ARM64_REG_D'+str(i)):0x3ff0000000000000+i*13+seed for i in range(8,16)})
        for register,value in saved.items():cpu.reg_write(register,value)
        cpu.reg_write(r.UC_ARM64_REG_CPACR_EL1,3<<20);cpu.reg_write(r.UC_ARM64_REG_FPCR,0x03c00000);cpu.reg_write(r.UC_ARM64_REG_FPSR,seed%32)
        cpu.reg_write(r.UC_ARM64_REG_NZCV,(flags&15)<<28);cpu.reg_write(r.UC_ARM64_REG_SP,sp);cpu.reg_write(r.UC_ARM64_REG_LR,RETURN)
        for i,value in enumerate(args):cpu.reg_write(getattr(r,'UC_ARM64_REG_X'+str(i)),value)
        cpu.emu_start(address,RETURN,count=20000000)
        if cpu.reg_read(r.UC_ARM64_REG_PC)!=RETURN or cpu.reg_read(r.UC_ARM64_REG_SP)!=sp:raise RuntimeError('A64 gzip did not return with preserved SP')
        if any(cpu.reg_read(register)!=value for register,value in saved.items()):raise RuntimeError('A64 gzip changed preserved registers')
        if cpu.reg_read(r.UC_ARM64_REG_FPCR)!=0x03c00000 or cpu.reg_read(r.UC_ARM64_REG_FPSR)!=seed%32:raise RuntimeError('A64 gzip changed floating controls/status')
        return cpu.reg_read(r.UC_ARM64_REG_X0)
    if call(graph['functions']['archive_bind_services']['address'],[base+model.SERVICES])!=1:raise RuntimeError('A64 gzip rejected typed services')
    phase[0]='body';sequence=[];observed=[];steps=model.SESSION if specification.get('session') else [name]
    for step in steps:
        result=call(graph['functions'][model.source_symbol(step)]['address'],model.arguments(step,state))
        partial=finalize(step,result,bytes(cpu.mem_read(base,model.SIZE)),state)
        sequence.append({'function':step,'result':partial['result']})
        if step=='fn_005f5eac':
            if specification.get('owned'):
                if partial['state']['buffer']['outputRole']=='allocation-3' and 3 in partial['state']['liveAllocations']:
                    observed.append(sha(partial['ownedOutput']))
            elif partial['state']['externalLive']:observed.append(sha(partial['callerOutput']))
    after=bytes(cpu.mem_read(base,model.SIZE))
    if pending:raise RuntimeError('A64 codec API did not return')
    if bytes(cpu.mem_read(sp,0x10000))!=stack[0x10000:]:raise RuntimeError('A64 gzip changed caller stack')
    out=finalize(steps[-1],result,after,state);out['function']=name
    out.update(sequenceResults=sequence if specification.get('session') else [],liveInflateOutputSha256=observed if specification.get('session') else [],sourceOnlyExecution=True,codePath=sorted(path),actualWidenedPointers=True,codecApiEvents=events,
        lowD8Through15AndX18Through29Preserved=True,floatingControlsPreserved=True)
    return out
