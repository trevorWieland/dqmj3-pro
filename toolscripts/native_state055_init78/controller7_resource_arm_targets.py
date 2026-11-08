import hashlib
import json
import struct
import unicorn
from unicorn import arm_const as arm
from controller7_measure import ROOT,WORK,pin,PINS
from controller7_allocation_fixture import build
from native_state055_build import load

ARENA,OBJECT,ALLOCATIONS,STACK,STOP=0x2000000,0x2001000,0x2010000,0x6000000,0xfff0000


def execute(seed,fail_at,image,rows,fixture,source_elf=None):
    source_elf=source_elf if source_elf is not None else WORK/'resource-build-v1/source.elf'
    entries=[0x12b00c,0x146f18,0x146e50,0x301f50,0x156f48,0x158318,0x12a2e8,0x146510]
    selected=[next(row for row in rows if row['address']==entry)for entry in entries]
    ranges=[part for row in selected for part in row['ranges']]
    blocks,symbols,functions=fixture
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
    source_blocks,source_symbols,source_functions=load(source_elf)
    mapped=set()
    for address,size,flags,data in source_blocks:
        for page in range(address&-4096,(address+size+4095)&-4096,4096):
            if page not in mapped:cpu.mem_map(page,4096);mapped.add(page)
        cpu.mem_write(address,data)
    cpu.mem_map(ARENA,0x40000);cpu.mem_write(ARENA,bytes([seed])*0x40000)
    cpu.mem_map(STACK,0x10000);cpu.mem_map(STOP,4096)
    service=symbols['reference_service7'];cpu.mem_write(service,struct.pack('<IIIII',ALLOCATIONS,0,fail_at+1 if fail_at else 0,0,0))
    cpu.mem_write(0x89a520,struct.pack('<II',symbols['reference_allocate7'],symbols['reference_free7']))
    sp=STACK+0xe000;canary=struct.pack('<IIII',0x12345678,0x87654321,0x33447788,0x55aa55aa);cpu.mem_write(sp,canary)
    cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10);cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20)
    cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000);cpu.reg_write(arm.UC_ARM_REG_FPSCR,0)
    cpu.reg_write(arm.UC_ARM_REG_SP,sp);cpu.reg_write(arm.UC_ARM_REG_LR,STOP);cpu.reg_write(arm.UC_ARM_REG_R0,OBJECT)
    saved=[(getattr(arm,'UC_ARM_REG_R'+str(i)),0x12340000+i*397)for i in range(4,12)]
    saved += [(getattr(arm,'UC_ARM_REG_D'+str(i)),0x3ff0000000000000+i*797)for i in range(8,16)]
    for register,value in saved:cpu.reg_write(register,value)
    pcs=set();calls=[];invalid=[];freed=[];released_spans=[];after_free=[];reads_after_release=[]
    def code(machine,address,size,unused):
        assert size==4 and not machine.reg_read(arm.UC_ARM_REG_CPSR)&32
        assert any(a<=address<b for a,b in source_functions),hex(address)
        pcs.add(address)
        if address in entries[1:]or address in[symbols['reference_allocate7'],symbols['reference_free7']]:
            args=[machine.reg_read(getattr(arm,'UC_ARM_REG_R'+str(i)))for i in range(4)]
            calls.append(dict(entry=address,args=args,callerLr=machine.reg_read(arm.UC_ARM_REG_LR)))
            if address==symbols['reference_free7']:
                freed.append(args[3])
                count=struct.unpack('<I',machine.mem_read(service+4,4))[0]
                sizes={struct.unpack('<7I',machine.mem_read(service+20+i*28,28))[4]:struct.unpack('<7I',machine.mem_read(service+20+i*28,28))[3]for i in range(count)}
                sizes[OBJECT]=0x8ac
                assert args[3]in sizes
                released_spans.append((args[3],args[3]+sizes[args[3]]))
    def memory(machine,access,address,size,value,unused):
        assert STACK<=address and address+size<=STACK+0x10000 or ARENA<=address and address+size<=ARENA+0x40000 or 0x888000<=address and address+size<=0x8fb000 or address&-4096 in mapped,hex(address)
        if any(a<=address and address+size<=b for a,b in released_spans):after_free.append(dict(pc=machine.reg_read(arm.UC_ARM_REG_PC),address=address,bytes=size))
    def read(machine,access,address,size,value,unused):
        if any(a<=address and address+size<=b for a,b in released_spans):reads_after_release.append(dict(pc=machine.reg_read(arm.UC_ARM_REG_PC),address=address,bytes=size))
    def bad(machine,access,address,size,value,unused):
        invalid.append(dict(pc=machine.reg_read(arm.UC_ARM_REG_PC),address=address,bytes=size,access=access));return False
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,memory);cpu.hook_add(unicorn.UC_HOOK_MEM_READ,read);cpu.hook_add(unicorn.UC_HOOK_MEM_INVALID,bad)
    cpu.reg_write(arm.UC_ARM_REG_R0,ARENA+0xa000)
    cpu.emu_start(source_symbols['state_queue_construct7'],STOP,count=1000000)
    assert cpu.reg_read(arm.UC_ARM_REG_PC)==STOP and cpu.reg_read(arm.UC_ARM_REG_R0)==0
    assert cpu.reg_read(arm.UC_ARM_REG_SP)==sp and all(cpu.reg_read(register)==value for register,value in saved)
    cpu.reg_write(arm.UC_ARM_REG_R0,OBJECT);cpu.reg_write(arm.UC_ARM_REG_LR,STOP)
    error=None
    try:cpu.emu_start(source_symbols['state_resource_index_construct7'],STOP,count=1000000)
    except BaseException as caught:error=repr(caught)
    returned=cpu.reg_read(arm.UC_ARM_REG_PC)==STOP
    if returned:
        assert cpu.reg_read(arm.UC_ARM_REG_SP)==sp and bytes(cpu.mem_read(sp,16))==canary
        assert all(cpu.reg_read(register)==value for register,value in saved)
    state=struct.unpack('<229I',cpu.mem_read(service,916));count,free_count=state[1],state[4]
    assert state[3]==0
    allocations=[dict(flags=state[5+i*7],alignment=state[6+i*7],region=state[7+i*7],bytes=state[8+i*7],pointer=state[9+i*7])for i in range(count)]
    data=bytes(cpu.mem_read(ARENA,0x40000));pointers=list(struct.unpack('<III',cpu.mem_read(OBJECT,12)))
    return dict(seed=seed,failAt=fail_at,returned=returned,status=cpu.reg_read(arm.UC_ARM_REG_R0)if returned else None,error=error,
                pc=cpu.reg_read(arm.UC_ARM_REG_PC),invalidMemory=invalid,sourceVisitedPcs=sorted(pcs),actualCalls=calls,allocations=allocations,
                frees=freed,freeCount=free_count,writesAfterReleaseCallback=after_free,readsAfterReleaseCallback=reads_after_release,releaseObserverUsesExactAllocationSpans=True,actualSdkDeallocationSemanticsUnqualified=True,resourceIndexPointers=pointers,
                indexRegisteredByOriginal=struct.unpack('<I',cpu.mem_read(0x8bfad8,4))[0]==OBJECT,
                finalArenaSha256=hashlib.sha256(data).hexdigest(),resourceIndexWords=list(struct.unpack('<555I',cpu.mem_read(OBJECT,0x8ac))),
                allocationOutputs=[dict(pointer=row['pointer'],bytes=row['bytes'],sha256=hashlib.sha256(cpu.mem_read(row['pointer'],row['bytes'])).hexdigest())for row in allocations if row['pointer']],
                authoredEarlierQueueConstructorExecuted=True,queueHeader=ARENA+0xa000,explicitServiceCallbackProvision=True,actualOwnerInstalledCallbacks=False,sourceGameCodeAuthored=True,sourceLoadedWithoutOriginalImage=True,
                freeServiceRecordsCallbackButRetainsPhysicalBacking=True,noOriginalCallOrResultSubstitution=True)


def run():
    for path,expected in PINS.items():assert pin(path)['sha256']==expected
    image=b'';rows=json.loads((ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_text())['functions'];fixture=build()
    results=[execute(seed,fail_at,image,rows,fixture)for fail_at in range(4)for seed in[0,0xa5,0xff]]
    good=[row for row in results if not row['failAt']]
    assert all(row['returned']and row['status']==0 and not row['frees']for row in good)
    assert all([a['bytes']for a in row['allocations']]==[0x28,0x78,0x1cc,0x9c]for row in good)
    expected=json.loads((WORK/'resource-index-queue-reference-v3.private.json').read_text())['cases']
    for actual,original in zip(results,expected):
        actual['matchesOriginalWholeArena']=actual['finalArenaSha256']==original['finalArenaSha256']
        actual['matchesOriginalReturnOutcome']=actual['returned']==original['returned']and actual['status']==original['status']
        actual['matchesActualAllocationEvents']=actual['allocations']==original['allocations']
        actual['matchesReleaseRequestOrder']=actual['frees']==original['frees']
    result=dict(status='first-authored-resource-family-ARM-whole-arena-comparison-not-frozen',producer=pin(__file__),moduleSha256=hashlib.sha256(image).hexdigest(),callbackService=pin(WORK/'reference-allocation-service/build.json'),cases=results,sourceCreditGranted=0,gameAllocatorHardwareOrWholeOwnerClaimed=False)
    out=WORK/'resource-source-arm-v1.json';out.write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(dict(report=pin(out),sets=len(results),returned=sum(row['returned']for row in results),allWholeArenasEqual=all(row['matchesOriginalWholeArena']for row in results),outcomes=[dict(failAt=row['failAt'],seed=row['seed'],returned=row['returned'],status=row['status'],frees=row['frees'],writesAfterRelease=len(row['writesAfterReleaseCallback']),readsAfterRelease=len(row['readsAfterReleaseCallback']))for row in results])))


if __name__=='__main__':run()
