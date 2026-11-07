import hashlib
import json
import struct
import sys
from pathlib import Path

WORK=Path(__file__).resolve().parent
ROOT=next(p for p in WORK.parents if(p/'AGENTS.md').is_file())
sys.path.append(str(ROOT/'toolscripts'))
from native_stream058_original import Original,RAM,SIZE,STACK,STOP
from unicorn import UC_HOOK_CODE,UC_HOOK_MEM_READ
from unicorn import arm_const as arm


def call(original,address,args,seed):
    cpu=original.cpu;sp=STACK+0x10000
    saved=[(getattr(arm,'UC_ARM_REG_R'+str(i)),(seed+i)&0xffffffff)for i in range(4,12)]
    saved +=[(getattr(arm,'UC_ARM_REG_D'+str(i)),0x5800000012340000+i)for i in range(8,16)]
    for reg,value in saved:cpu.reg_write(reg,value)
    for reg,value in [(arm.UC_ARM_REG_CPSR,0x10),(arm.UC_ARM_REG_C1_C0_2,0xf<<20),(arm.UC_ARM_REG_FPEXC,0x40000000),(arm.UC_ARM_REG_FPSCR,0x00400000),(arm.UC_ARM_REG_SP,sp),(arm.UC_ARM_REG_LR,STOP)]:cpu.reg_write(reg,value)
    for reg,value in zip([arm.UC_ARM_REG_R0,arm.UC_ARM_REG_R1,arm.UC_ARM_REG_R2,arm.UC_ARM_REG_R3],args):cpu.reg_write(reg,value&0xffffffff)
    cpu.emu_start(address,STOP,count=1000000)
    if cpu.reg_read(arm.UC_ARM_REG_PC)!=STOP or cpu.reg_read(arm.UC_ARM_REG_SP)!=sp:raise ValueError('062 original did not normally return/restack')
    if any(cpu.reg_read(reg)!=value for reg,value in saved):raise ValueError('062 original callee-save changed')
    if cpu.reg_read(arm.UC_ARM_REG_FPSCR)!=0x00400000:raise ValueError('062 original FPSCR changed')
    return cpu.reg_read(arm.UC_ARM_REG_R0)


def main():
    original=Original(ROOT/'work/native-stream061/final-attempt002/build');cpu=original.cpu
    def authored_guard(cpu,address,size,data):
        if any(low<=address<high for low,high in original.fixture_ranges):raise ValueError('062 original reached authored fixture code')
    cpu.hook_add(UC_HOOK_CODE,authored_guard)
    metadata=bytes((i*29+7)&255 for i in range(248));rows=[]
    for seed in [0x13570000,0x24680000,0x58000000]:
        arena=bytearray(b'\xa7'*SIZE);arena[0x1000:0x10f8]=metadata;struct.pack_into('<I',arena,0x500,1)
        cpu.mem_write(RAM,bytes(arena));cpu.mem_write(STACK,b'\x9b'*0x20000)
        call(original,0x4440a4,[RAM+0x2000,RAM+0x1000,RAM+0x500],seed)
        block=bytes(cpu.mem_read(RAM+0x2000,128));expected=metadata[128:]+struct.pack('<II',seed+4,seed+5)
        if block!=expected:raise ValueError('062 metadata saved-register tail hypothesis rejected')
        consumers=[]
        for tail in [block[120:],bytes(8),b'\xff'*8]:
            arena=bytearray(b'\xa7'*SIZE);arena[0x1000:0x10f8]=metadata;arena[0x3000:0x3080]=block[:120]+tail;struct.pack_into('<I',arena,0x500,1)
            cpu.mem_write(RAM,bytes(arena));reads=[]
            def read(cpu,access,address,size,value,data):
                if address<RAM+0x3080 and address+size>RAM+0x3000:reads.append([address-(RAM+0x3000),size])
            hook=cpu.hook_add(UC_HOOK_MEM_READ,read)
            call(original,0x6ce7f8,[RAM+0x3000,RAM+0x1000,RAM+0x500],seed)
            cpu.hook_del(hook);after=bytes(cpu.mem_read(RAM,SIZE));wanted=bytearray(arena);wanted[0x1080:0x10f8]=block[:120];struct.pack_into('<I',wanted,0x500,2)
            if after!=wanted or any(at+size>120 for at,size in reads):raise ValueError('062 actual consumer observes tail or changes extra caller memory')
            consumers.append(dict(tailSha256=hashlib.sha256(tail).hexdigest(),metadataSha256=hashlib.sha256(after[0x1000:0x10f8]).hexdigest(),packetReadRanges=reads,entireOtherCallerArenaUnchanged=True))
        rows.append(dict(entryCalleeSavedSeed=seed,metadataBytes=248,packetBytes=128,rawPacketSha256=hashlib.sha256(block).hexdigest(),tailWords=[seed+4,seed+5],tailDependsOnSavedRegisters=True,actualReceiverIgnoresFinalEightBytes=True,consumers=consumers))
    report=dict(schemaVersion=1,status='original-only-metadata-stack-tail-and-consumer-clipping-confirmed',sets=rows,sourceAuthored=False,wholeCallerClaim=False,sourceCreditGranted=0)
    (WORK/'metadata-stack-review.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8');print('062 original metadata saved-register tail and all9 real receiver probes confirmed')

if __name__=='__main__':main()
