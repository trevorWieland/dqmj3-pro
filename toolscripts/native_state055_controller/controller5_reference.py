import hashlib
import json
from pathlib import Path
import struct
import unicorn
from unicorn import arm_const as arm
from controller5_measure import ROOT,WORK,pin,original_image
from native_state055_build import load
from controller5_fixture import target_input
from controller5_sequence import target_calls

ARENA,STACK,STOP=0x2000000,0x6000000,0xfff0000
CONTEXT,SELECTED,SLOT,MASK=ARENA+0x1000,ARENA+0x5000,ARENA+0x30000,ARENA+0x100
INDEX,NODES,RESOURCE=ARENA+0x9000,ARENA+0xa000,ARENA+0xb000
WORDS,BYTES,SHADER,OUTPUT=ARENA+0xe000,ARENA+0x11000,ARENA+0x8000,ARENA+0x20000


def cases():
    rows=[dict(label='null-selected-empty',flags=0,mask=0,selected=False,clip=False,rect=[0,0,0,0],size=[640,480],capacity=4096)]
    for enabled,rect,size in [(False,[0,0,0,0],[640,480]),(True,[1,1,10,20],[640,480]),
                              (True,[-8,-7,100,200],[640,480]),(True,[700,500,800,600],[640,480]),
                              (True,[0,0,0,0],[0,0])]:
        for capacity in [0,1,3,6,7,4096]:
            rows.append(dict(label=f'null-selected-clip-{int(enabled)}-{rect}-{size}-{capacity}',flags=0x1000,mask=0x200,
                             selected=False,clip=enabled,rect=rect,size=size,capacity=capacity))
    rows.append(dict(label='selected-empty',flags=0,mask=0,selected=True,clip=False,rect=[0,0,0,0],size=[640,480],capacity=4096))
    return rows


def execute(case,image,claim,provider_stage=None):
    provider_work=Path(provider_stage) if provider_stage is not None else WORK
    helper=json.loads((ROOT/'evidence/lanes/native-state055/controller-deps-public-v1/writers-claim.json').read_text(encoding='utf-8'))
    ranges=claim['instructionRanges']+[part for row in helper['functions']for part in row['ranges']]
    ranges.append(dict(start=0x6f95a4,endExclusive=0x6f9684))
    parts=ranges+claim['internalExcludedGaps']+[part for row in helper['functions']for part in row['literalReads']]
    parts.append(dict(start=0x6f9684,endExclusive=0x6f9688))
    parts+=claim['pcRelativeReadLeads']
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
    pages={STOP,0x8bf000,0x8ea000,0x89a000}
    for part in parts:
        pages.update(range(part['start']&-4096,(part['endExclusive']+4095)&-4096,4096))
    for part in claim['pcRelativeReadLeads']:
        if part['endExclusive']-part['start']==4:
            value=struct.unpack('<I',image[part['start']-0x100000:part['start']-0x100000+4])[0]
            if 0x7b9810 <= value < 0x100000+len(image):
                pages.add(value&-4096)
    for page in sorted(pages):
        cpu.mem_map(page,4096)
    cpu.mem_map(ARENA,0x40000)
    cpu.mem_map(STACK,0x10000)
    for page in sorted(pages):
        if 0x100000 <= page < 0x100000+len(image):
            cpu.mem_write(page,image[page-0x100000:page-0x100000+4096])
    for part in parts:
        cpu.mem_write(part['start'],image[part['start']-0x100000:part['endExclusive']-0x100000])
    provider_ranges=[]
    provider_symbols={}
    if case.get('storage_provider'):
        segments,provider_symbols,provider_ranges=load(provider_work/'storage-build/arm.elf')
        mapped=set()
        for address,size,flags,data in segments:
            for page in range(address&-4096,(address+size+4095)&-4096,4096):
                if page not in mapped:
                    cpu.mem_map(page,4096)
                    mapped.add(page)
            if data:
                cpu.mem_write(address,data)
    def word(address,value):
        cpu.mem_write(address,struct.pack('<I',value&0xffffffff))
    prepared=target_input(case)
    cpu.mem_write(ARENA,bytes(prepared.data))
    for address,value in prepared.external.items():
        cpu.mem_write(address,bytes([value]))
    if provider_symbols:
        word(0x89a520,provider_symbols['state_storage_fixture055'])
        for name,value in [('begin',ARENA+0x38000),('end',ARENA+0x40000),('cursor',ARENA+0x38000),('observer',RESOURCE),('context_bytes',CONTEXT+0x10c)]:
            word(provider_symbols['state_storage_'+name+'055'],value)
    before=bytes(cpu.mem_read(ARENA,0x40000))
    cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10)
    cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20)
    cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000)
    cpu.reg_write(arm.UC_ARM_REG_FPSCR,0)
    sp=STACK+0xe000
    if case.get('caller_frame_padding'):
        for offset,value in zip([0x808,0x50],case['caller_frame_padding']):
            cpu.mem_write(sp-0x880+offset,struct.pack('<I',value))
    cpu.reg_write(arm.UC_ARM_REG_SP,sp)
    cpu.reg_write(arm.UC_ARM_REG_LR,STOP)
    cpu.reg_write(arm.UC_ARM_REG_R0,MASK)
    cpu.reg_write(arm.UC_ARM_REG_R1,case['flags'])
    saved=[(getattr(arm,'UC_ARM_REG_R'+str(index)),0x51000000+index*163)for index in range(4,12)]
    saved+=[(getattr(arm,'UC_ARM_REG_D'+str(index)),0x3ff0000000000000+index*131)for index in range(8,16)]
    for register,value in saved:
        cpu.reg_write(register,value)
    pcs=set()
    writes=[]
    last=[]
    invalid=[]
    provider_pcs=set()
    provider_calls=[]
    allocation_cache_observations=[]
    def code(machine,address,size,unused):
        assert size==4 and not machine.reg_read(arm.UC_ARM_REG_CPSR)&32
        if any(start<=address<end for start,end in provider_ranges):
            provider_pcs.add(address)
            if address==provider_symbols.get('state_storage_fixture055'):
                allocation_cache_observations.append(hashlib.sha256(bytes(machine.mem_read(CONTEXT+0x10c,0x15c))).hexdigest())
                provider_calls.append([machine.reg_read(getattr(arm,'UC_ARM_REG_R'+str(index))) for index in range(4)])
        else:
            assert any(row['start']<=address<row['endExclusive']for row in ranges),hex(address)
            pcs.add(address)
        last.append(address)
        if len(last)>12:
            last.pop(0)
    def memory(machine,access,address,size,value,unused):
        if STACK<=address<STACK+0x10000:
            return
        assert ARENA<=address and address+size<=ARENA+0x40000 or address in [0x8bf790,0x8bf7a8] or provider_symbols and 0xf74000<=address<0xf77000,hex(address)
        writes.append([machine.reg_read(arm.UC_ARM_REG_PC),address,size,value])
    def bad_memory(machine,access,address,size,value,unused):
        invalid.append(dict(access=access,address=address,size=size,pc=machine.reg_read(arm.UC_ARM_REG_PC),registers={name:machine.reg_read(getattr(arm,'UC_ARM_REG_'+name)) for name in ['R0','R1','R2','R3','R4','R6','R7','R12','LR','SP']}))
        return False
    cpu.hook_add(unicorn.UC_HOOK_MEM_INVALID,bad_memory)
    cpu.hook_add(unicorn.UC_HOOK_CODE,code)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,memory)
    try:
        target_calls(cpu,0x6fb25c,case)
    except BaseException as error:
        return dict(input=case,returned=False,error=repr(error),pc=cpu.reg_read(arm.UC_ARM_REG_PC),recentPcs=last,invalidMemory=invalid,visitedPcs=sorted(pcs),writes=writes)
    assert cpu.reg_read(arm.UC_ARM_REG_PC)==STOP and cpu.reg_read(arm.UC_ARM_REG_SP)==sp
    assert all(cpu.reg_read(register)==value for register,value in saved)
    data=bytes(cpu.mem_read(ARENA,0x40000))
    changed=[index for index,(left,right)in enumerate(zip(before,data))if left!=right]
    return dict(input=case,returned=True,visitedPcs=sorted(pcs),writes=writes,
                initialArenaSha256=hashlib.sha256(before).hexdigest(),finalArenaSha256=hashlib.sha256(data).hexdigest(),
                changedBytes=len(changed),finalPair=list(struct.unpack('<II',bytes(cpu.mem_read(0x8bf790,8)))),
                allocationCacheObservations=allocation_cache_observations,
                storageProviderObservationsSha256=hashlib.sha256(bytes(cpu.mem_read(provider_symbols['state_storage_observations055'],len(provider_calls)*60))).hexdigest() if provider_symbols else hashlib.sha256(b'').hexdigest(),
                commandWords=list(struct.unpack('<'+str((struct.unpack('<I',bytes(cpu.mem_read(0x8bf790,4)))[0]-OUTPUT)//4)+'I',bytes(cpu.mem_read(OUTPUT,struct.unpack('<I',bytes(cpu.mem_read(0x8bf790,4)))[0]-OUTPUT)))) if case.get('retain_command_words') else None,
                rawR0=cpu.reg_read(arm.UC_ARM_REG_R0),semanticReturnTypeInferred=False,compiledStorageProviderPcs=sorted(provider_pcs),storageProviderArguments=provider_calls,
                storageProviderCursor=struct.unpack('<I',bytes(cpu.mem_read(provider_symbols['state_storage_cursor055'],4)))[0] if provider_symbols else None,
                savedIntegerVfpSpPreserved=True,finalControlSha256=hashlib.sha256(bytes(cpu.mem_read(0x8bf79c,0x314))).hexdigest(),
                finalStageMode=struct.unpack('<I',bytes(cpu.mem_read(0x8bf7a8,4)))[0])


def run():
    image=original_image()
    claim=json.loads((WORK/'claim.json').read_text(encoding='utf-8'))
    rows=[execute(case,image,claim)for case in cases()]
    result=dict(schemaVersion=1,status='bounded-real-controller055-reference-frontier-not-source-proof',
                claim=pin(WORK/'claim.json'),cases=rows,caseSets=len(rows),returned=sum(row['returned']for row in rows),
                sourceAuthored=False,productionInitializationOrFullObjectLayoutsClaimed=False,
                sourceCreditGranted=0,producer=pin(Path(__file__).resolve()))
    path=WORK/'reference-frontier.json'
    path.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(dict(report=pin(path),cases=len(rows),returned=result['returned'],failures=[dict(label=row['input']['label'],pc=row.get('pc'),error=row.get('error'))for row in rows if not row['returned']])))
    return result


if __name__=='__main__':
    run()
