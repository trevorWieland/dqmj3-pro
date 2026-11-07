import json
import random

import unicorn
import capstone
from unicorn.arm_const import UC_CPU_ARM_11MPCORE,UC_ARM_REG_PC,UC_ARM_REG_CPSR
from native_wave012_arena_oracle import REGISTERS
from native_wave013_common import ROOT,MODULE_SHA,record,save,sha
from native_archive032_gzip_reference import ReferenceImage


def qualify():
    measured_path=ROOT/'evidence/lanes/squirrel-capture041/startup-globals.json'
    measured=json.loads(measured_path.read_text());reference=ReferenceImage();image=reference.image
    if measured['moduleSha256']!=MODULE_SHA:raise ValueError('040 startup measurement module differs')
    slot=measured['slot'];raw=image[slot['address']-0x100000:slot['endExclusive']-0x100000]
    if sha(raw)!=slot['sha256'] or slot['address']+int.from_bytes(raw,'little',signed=True)!=0x6ff69c:
        raise ValueError('040 actual relative constructor slot differs')
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM);cpu.ctl_set_cpu_model(UC_CPU_ARM_11MPCORE)
    reference.map(cpu);stack=0x4000000;sp=stack+0x8000;sentinel=0x5000000
    cpu.mem_map(stack,0x10000,unicorn.UC_PROT_READ|unicorn.UC_PROT_WRITE)
    stack_before=random.Random(40041).randbytes(0x10000);cpu.mem_write(stack,stack_before)
    cpu.mem_map(sentinel,4096,unicorn.UC_PROT_READ|unicorn.UC_PROT_EXEC)
    low=min(row['address'] for row in measured['writes']);high=max(row['address']+8 for row in measured['writes'])
    before=bytes(cpu.mem_read(low,high-low));seen={};writes=[]
    def contains(a,b,address,size):return a<=address<address+size<=b
    def code(uc,address,size,user):
        if size!=4 or address&3 or cpu.reg_read(UC_ARM_REG_CPSR)&0x20:
            raise RuntimeError('040 actual static initializer changed instruction mode')
        if not (contains(0x6ff69c,0x6ff734,address,size) or contains(0x303b10,0x303b14,address,size)):
            raise RuntimeError('040 initializer escaped measured body/actual return helper')
        owner,instruction=reference.instruction(cpu,address,size)
        seen[address]={'address':address,'mode':'ARM','bytes':size,'owner':owner,'sha256':sha(bytes(cpu.mem_read(address,size)))}
    def read(uc,access,address,size,value,user):
        if not (contains(0x6ff734,0x6ff75c,address,size) or contains(stack,sp,address,size)):
            raise RuntimeError('040 static initializer read outside exact pools/frame')
    def write(uc,access,address,size,value,user):
        if contains(low,high,address,size):writes.append({'instruction':cpu.reg_read(UC_ARM_REG_PC),'address':address,'bytes':size})
        elif not contains(stack,sp,address,size):raise RuntimeError('040 static initializer wrote outside its globals/frame')
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_READ,read);cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)
    saved={REGISTERS[i]:0x40040000+i*73 for i in range(4,12)}
    for register,value in saved.items():cpu.reg_write(register,value)
    cpu.reg_write(UC_ARM_REG_CPSR,0x10);cpu.reg_write(REGISTERS[-2],sp);cpu.reg_write(REGISTERS[-1],sentinel)
    cpu.emu_start(0x6ff69c,sentinel,count=1000)
    if cpu.reg_read(UC_ARM_REG_PC)!=sentinel or cpu.reg_read(REGISTERS[-2])!=sp:
        raise RuntimeError('040 original static initializer did not return normally')
    if any(cpu.reg_read(register)!=value for register,value in saved.items()):raise RuntimeError('040 initializer changed callee-saved state')
    if bytes(cpu.mem_read(sp,0x8000))!=stack_before[0x8000:]:raise RuntimeError('040 initializer changed caller stack')
    after=bytes(cpu.mem_read(low,high-low));objects=[]
    for row in measured['writes']:
        at=row['address']-low;tag=int.from_bytes(after[at:at+4],'little');payload=int.from_bytes(after[at+4:at+8],'little')
        if tag!=row['type'] or payload!=row['payload']:raise ValueError('040 actual initializer values differ from independently measured stores')
        objects.append({'address':row['address'],'type':tag,'payload':payload})
    decoder=capstone.Cs(capstone.CS_ARCH_ARM,capstone.CS_MODE_ARM)
    tail=list(decoder.disasm(image[0x303b10-0x100000:0x303b14-0x100000],0x303b10))
    if len(tail)!=1 or tail[0].mnemonic!='bx' or tail[0].op_str!='lr':
        raise ValueError('040 original tail registration helper is not its measured return instruction')
    segment=next(row for row in reference.layout['segments'] if row['name']=='data')
    if not segment['address']<=low<high<=segment['address']+segment['initializedBytes']:
        raise ValueError('040 template is not in the original initialized data segment')
    receipt={'schemaVersion':1,'status':'actual-original-crt-static-template-executed-and-returned',
        'moduleSha256':MODULE_SHA,'producer':record(__import__('pathlib').Path(__file__)),'peerMeasurement':record(measured_path),
        'constructorSlot':slot,'moduleDataSegment':segment,'globalRange':{'start':low,'endExclusive':high},
        'beforeSha256':sha(before),'afterSha256':sha(after),'imageZerosAreTheLiveTemplateClaimed':False,
        'actualObjects':objects,'visitedInstructions':[seen[a] for a in sorted(seen)],'actualWrites':writes,
        'actualTailHelper':{'address':0x303b10,'bytes':4,'sha256':sha(image[0x303b10-0x100000:0x303b14-0x100000]),
            'normallyReturnsWithoutRegistrationWrites':True,'destructorRegistrationImplementedClaimed':False},
        'immutableOriginalDataPatched':False,'originalMutableGlobalsInitializedOnlyByExecutedInstructions':True,
        'returnedNormally':True,'calleeSavedAndCallerStackPreserved':True,'sourceOrSdkOrInventoryCreditGranted':0}
    output=ROOT/'evidence/lanes/squirrel-state040/startup-template-execution.json';save(output,receipt)
    return receipt


if __name__=='__main__':
    result=qualify();print(json.dumps({'objects':result['actualObjects'],'returnedNormally':True}),flush=True)
