import hashlib
from pathlib import Path
import json
import struct
import unicorn
from unicorn import arm_const as arm
from native_state055_build import load
from controller5_measure import WORK,pin,original_image
from controller5_reference import execute as original
from controller5_sequence import target_calls
from controller5_fixture import ARENA,STACK,STOP,MASK,target_input


def source(case,stage=None):
    work=Path(stage) if stage is not None else WORK
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
    segments,symbols,functions=load(work/'program-build/arm.elf')
    pages=set()
    for address,size,flags,data in segments:
        for page in range(address&-4096,(address+size+4095)&-4096,4096):
            if page not in pages:
                cpu.mem_map(page,4096)
                pages.add(page)
        if data:cpu.mem_write(address,data)
    cpu.mem_map(STACK,0x10000)
    cpu.mem_map(STOP,4096)
    cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10)
    cpu.reg_write(arm.UC_ARM_REG_SP,STACK+0xe000)
    cpu.reg_write(arm.UC_ARM_REG_LR,STOP)
    cpu.emu_start(symbols['state_apply_reset_defaults055'],STOP,count=100000)
    prepared=target_input(case)
    cpu.mem_map(ARENA,len(prepared.data))
    cpu.mem_write(ARENA,bytes(prepared.data))
    for address,value in prepared.external.items():
        page=address&-4096
        if page not in pages:
            cpu.mem_map(page,4096)
            pages.add(page)
        cpu.mem_write(address,bytes([value]))
    if case.get('storage_provider'):
        for name,value in [('begin',ARENA+0x38000),('end',ARENA+0x40000),('cursor',ARENA+0x38000),('observer',ARENA+0xb000),('context_bytes',ARENA+0x110c)]:
            cpu.mem_write(symbols['state_storage_'+name+'055'],struct.pack('<I',value))
        cpu.reg_write(arm.UC_ARM_REG_LR,STOP)
        cpu.emu_start(symbols['state_program_install_storage055'],STOP,count=100000)
    cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10)
    cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20)
    cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000)
    cpu.reg_write(arm.UC_ARM_REG_SP,STACK+0xe000)
    cpu.reg_write(arm.UC_ARM_REG_LR,STOP)
    cpu.reg_write(arm.UC_ARM_REG_R0,MASK)
    cpu.reg_write(arm.UC_ARM_REG_R1,case['flags'])
    saved=[(getattr(arm,'UC_ARM_REG_R'+str(index)),0x13570000+index*719)for index in range(4,12)]
    saved += [(getattr(arm,'UC_ARM_REG_D'+str(index)),0x3ff0000000000000+index*797)for index in range(8,16)]
    for register,value in saved:cpu.reg_write(register,value)
    pcs=set()
    allocation_cache_observations=[]
    def hook(machine,address,size,unused):
        assert size==4 and not machine.reg_read(arm.UC_ARM_REG_CPSR)&32
        assert any(start<=address<end for start,end in functions),hex(address)
        pcs.add(address)
        if address==symbols['state_storage_fixture055']:
            allocation_cache_observations.append(hashlib.sha256(bytes(machine.mem_read(ARENA+0x1000+0x10c,0x15c))).hexdigest())
    cpu.hook_add(unicorn.UC_HOOK_CODE,hook)
    target_calls(cpu,symbols['state_apply_controller055'],case)
    assert cpu.reg_read(arm.UC_ARM_REG_PC)==STOP and cpu.reg_read(arm.UC_ARM_REG_SP)==STACK+0xe000
    assert all(cpu.reg_read(register)==value for register,value in saved)
    return dict(finalArenaSha256=hashlib.sha256(bytes(cpu.mem_read(ARENA,len(prepared.data)))).hexdigest(),
                finalControlSha256=hashlib.sha256(bytes(cpu.mem_read(0x8bf79c,0x314))).hexdigest(),
                finalPair=list(struct.unpack('<II',bytes(cpu.mem_read(symbols['state_pair055'],8)))),
                finalStageMode=struct.unpack('<I',bytes(cpu.mem_read(0x8bf7a8,4)))[0],compiledSourcePcs=sorted(pcs),
                storageProviderObservationsSha256=hashlib.sha256(bytes(cpu.mem_read(symbols['state_storage_observations055'],struct.unpack('<I',bytes(cpu.mem_read(symbols['state_storage_calls055'],4)))[0]*60))).hexdigest(),
                commandWords=list(struct.unpack('<'+str((struct.unpack('<I',bytes(cpu.mem_read(symbols['state_pair055'],4)))[0]-(ARENA+0x20000))//4)+'I',bytes(cpu.mem_read(ARENA+0x20000,struct.unpack('<I',bytes(cpu.mem_read(symbols['state_pair055'],4)))[0]-(ARENA+0x20000))))) if case.get('retain_command_words') else None,
                sourceMapsOriginalExecutable=False,savedIntegerFpRegistersAndSpPreserved=True,
                allocationCacheObservations=allocation_cache_observations,
                storageProviderCalls=struct.unpack('<I',bytes(cpu.mem_read(symbols['state_storage_calls055'],4)))[0],
                storageProviderCursor=struct.unpack('<I',bytes(cpu.mem_read(symbols['state_storage_cursor055'],4)))[0],
                actualFpscr=cpu.reg_read(arm.UC_ARM_REG_FPSCR),floatingStatusEqualityClaimed=False)


def run():
    image=original_image()
    claim=json.loads((WORK/'claim.json').read_text())
    rows=[]
    for mode in [0,1]:
        for count in [0,1,128,129,512,513]:
            for capacity in [1,4096]:
                case=dict(label=f'program-draft-{mode}-{count}-{capacity}',selected=True,
                          stream_enabled=mode,stream_counts=[count,count],record_count=1,
                          clip=False,rect=[0,0,0,0],size=[640,480],capacity=capacity,flags=13,mask=0xffffffff)
                expected=original(case,image,claim)
                assert expected['returned']
                actual=source(case)
                different=[key for key in ['finalArenaSha256','finalControlSha256','finalPair','finalStageMode']
                           if actual[key]!=expected[key]]
                rows.append(dict(input=case,original=expected,sourceArm=actual,different=different))
    report=dict(schemaVersion=1,status='partial-program-phase-target-frontier-not-whole-controller',caseSets=len(rows),cases=rows,
                allComparedStateEqual=all(not row['different']for row in rows),sourceCreditGranted=0,
                wholeControllerSourceQualified=False,producer=pin(__file__))
    target=WORK/'program-target-frontier.json'
    target.write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(dict(report=pin(target),cases=len(rows),different=[dict(case=row['input']['label'],fields=row['different'])for row in rows if row['different']])))
    return report


if __name__=='__main__':
    run()
