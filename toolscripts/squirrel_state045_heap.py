import json
import random

import unicorn
import unicorn.arm_const as r
from native_archive032_gzip_reference import ReferenceImage
from native_wave012_arena_oracle import REGISTERS
from native_wave013_common import ROOT,record,save,sha


ARENA=0x7000000
ARENA_BYTES=0x200000
STACK=0x4000000
RETURN=0x5000000
TLS=0x6000000


def allocations(arena):
    def get(address,size=4):
        if not ARENA<=address<address+size<=ARENA+len(arena):raise ValueError('045 SDK heap pointer escaped backing')
        at=address-ARENA;return int.from_bytes(arena[at:at+size],'little')
    rows=[];header=get(ARENA+0x44);previous=0;seen=set()
    while header:
        if header in seen or len(seen)>=1024:raise ValueError('045 SDK live-block list cycles/exceeds bound')
        seen.add(header);size=get(header+4);prior=get(header+8);following=get(header+12)
        if prior!=previous or size>ARENA_BYTES or not ARENA<=header<header+16+size<=ARENA+len(arena):
            raise ValueError('045 SDK live-block links/extent invalid')
        rows.append({'header':header,'address':header+16,'bytes':size,'magic':get(header,2),'flags':get(header+2,2)})
        previous=header;header=following
    if previous!=get(ARENA+0x48):raise ValueError('045 SDK live-block tail differs')
    return rows


def bootstrap(publish=True,reference=None):
    if reference is None:reference=ReferenceImage()
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(r.UC_CPU_ARM_11MPCORE);reference.map(cpu)
    cpu.mem_map(ARENA,ARENA_BYTES,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    cpu.mem_write(ARENA,random.Random(45045).randbytes(ARENA_BYTES))
    cpu.mem_map(STACK,0x10000,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    cpu.mem_map(RETURN,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
    cpu.mem_map(TLS,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE);cpu.reg_write(r.UC_ARM_REG_C13_C0_3,TLS)
    seen={};reads=set();writes=[];sp=STACK+0x8000
    def contains(low,high,address,size):return low<=address<address+size<=high
    def code(uc,address,size,user):
        mode='Thumb' if cpu.reg_read(r.UC_ARM_REG_CPSR)&0x20 else 'ARM'
        owner,instruction=reference.instruction(cpu,address,size)
        seen[address]={'address':address,'bytes':size,'mode':mode,'owner':owner,'sha256':sha(bytes(cpu.mem_read(address,size)))}
    def read(uc,access,address,size,value,user):
        if not (contains(0x100000,reference.writable[1],address,size) or contains(ARENA,ARENA+ARENA_BYTES,address,size)
            or contains(STACK,sp,address,size) or contains(TLS,TLS+4096,address,size)):
            raise RuntimeError('045 heap startup read outside caller/module/frame at '+hex(address))
        reads.add((address,size))
    def write(uc,access,address,size,value,user):
        if not (contains(reference.writable[0],reference.writable[1],address,size) or contains(ARENA,ARENA+ARENA_BYTES,address,size)
            or contains(STACK,sp,address,size) or contains(TLS,TLS+4096,address,size)):
            raise RuntimeError('045 heap startup wrote outside caller/module/frame at '+hex(address))
        writes.append({'pc':cpu.reg_read(r.UC_ARM_REG_PC),'address':address,'bytes':size})
    def interrupt(uc,number,user):raise RuntimeError('045 heap startup reached unqualified kernel interrupt '+str(number))
    hooks=[cpu.hook_add(unicorn.UC_HOOK_CODE,code),cpu.hook_add(unicorn.UC_HOOK_MEM_READ,read),
        cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write),cpu.hook_add(unicorn.UC_HOOK_INTR,interrupt)]
    saved={REGISTERS[index]:0x45450000+index*31 for index in range(4,12)}
    for register,value in saved.items():cpu.reg_write(register,value)
    cpu.reg_write(r.UC_ARM_REG_CPSR,0x10);cpu.reg_write(REGISTERS[-2],sp);cpu.reg_write(REGISTERS[-1],RETURN)
    cpu.reg_write(REGISTERS[0],ARENA);cpu.reg_write(REGISTERS[1],ARENA_BYTES)
    try:cpu.emu_start(0x10b980,RETURN,count=1000000)
    except unicorn.UcError as error:raise RuntimeError('045 real heap startup failed at '+hex(cpu.reg_read(r.UC_ARM_REG_PC))) from error
    if cpu.reg_read(r.UC_ARM_REG_PC)!=RETURN or cpu.reg_read(REGISTERS[-2])!=sp:
        raise RuntimeError('045 real heap startup did not return')
    if any(cpu.reg_read(register)!=value for register,value in saved.items()):raise RuntimeError('045 heap startup changed preserved registers')
    globals_={hex(address):int.from_bytes(cpu.mem_read(address,4),'little') for address in [0x89a684,0x89a688]}
    report={'status':'actual-original-heap-startup-executed-not-source-credit','producer':record(ROOT/'toolscripts/squirrel_state045_heap.py'),
        'moduleSha256':sha(reference.image),'entry':0x10b980,'callerSuppliedArena':{'address':ARENA,'bytes':ARENA_BYTES},
        'globalsAfterActualExecution':globals_,'instructions':[seen[key] for key in sorted(seen)],
        'writes':writes,'reads':[{'address':address,'bytes':size} for address,size in sorted(reads)],
        'originalCodeOrGlobalsPatched':False,'sourceCreditGranted':0,'sdkCreditGranted':0,'kernelCallsMade':0}
    if publish:
        save(ROOT/'evidence/lanes/squirrel-state040/initialization045-heap-startup.json',report)
        print(json.dumps({'instructions':len(seen),'writes':len(writes),'globals':globals_}))
    for hook in hooks:cpu.hook_del(hook)
    return cpu,reference,report


if __name__=='__main__':bootstrap()
