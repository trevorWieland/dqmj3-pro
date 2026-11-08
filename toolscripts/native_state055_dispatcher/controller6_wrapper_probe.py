import hashlib
import json
import struct
import unicorn
from unicorn import arm_const as arm
from controller6_measure import WORK,pin
from controller6_fixture import ARENA,INPUT,fixture
from controller6_reference import STACK,STOP
from controller6_execution import model
from controller6_uniform_probe import machine,Windows
from native_wave014_oracle import original_image


def execute(case,image,claim):
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
    wrapper=dict(start=0x72f2e8,endExclusive=0x72f318)
    allowed=claim['instructionRanges']+[wrapper]
    spans=allowed+claim['internalExcludedGaps']+claim['pcRelativeReadLeads'];pages={0x8bf000,STOP}
    for span in spans:pages.update(range(span['start']&-4096,(span['endExclusive']+4095)&-4096,4096))
    for span in claim['pcRelativeReadLeads']:
        if span['endExclusive']-span['start']==4:
            value=struct.unpack_from('<I',image,span['start']-0x100000)[0]
            if 0x7b9810<=value<0x100000+len(image):pages.add(value&-4096)
    for page in pages:
        cpu.mem_map(page,4096)
        if 0x100000<=page<0x100000+len(image):cpu.mem_write(page,image[page-0x100000:page-0x100000+4096])
    cpu.mem_map(ARENA,0x40000);cpu.mem_map(STACK,0x10000)
    prepared=fixture(case);cpu.mem_write(ARENA,bytes(prepared.data))
    for address,value in prepared.external.items():
        page=address&-4096
        if page not in pages:cpu.mem_map(page,4096);pages.add(page)
        cpu.mem_write(address,bytes([value]))
    sp=STACK+0xe000;canary=struct.pack('<IIII',0x12345678,0x87654321,0x55aa55aa,0x33447788);cpu.mem_write(sp,canary)
    cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10);cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20)
    cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000);cpu.reg_write(arm.UC_ARM_REG_FPSCR,0)
    cpu.reg_write(arm.UC_ARM_REG_SP,sp);cpu.reg_write(arm.UC_ARM_REG_LR,STOP)
    for index,value in enumerate([case['location'],case.get('count',3),INPUT,0x55667788]):cpu.reg_write(getattr(arm,'UC_ARM_REG_R'+str(index)),value)
    saved=[(getattr(arm,'UC_ARM_REG_R'+str(i)),0x12340000+i*397)for i in range(4,12)]
    saved += [(getattr(arm,'UC_ARM_REG_D'+str(i)),0x3ff0000000000000+i*797)for i in range(8,16)]
    for register,value in saved:cpu.reg_write(register,value)
    entries=[];pcs=set()
    def code(machine,address,size,unused):
        assert size==4 and any(row['start']<=address<row['endExclusive']for row in allowed),hex(address)
        pcs.add(address)
        if address==0x73b7a4:
            actual=[machine.reg_read(getattr(arm,'UC_ARM_REG_R'+str(i)))for i in range(4)]
            actual+=list(struct.unpack('<II',machine.mem_read(machine.reg_read(arm.UC_ARM_REG_SP),8)))
            assert actual==[case['location'],INPUT,4,case.get('count',3),0,0]
            entries.append(actual)
    def write(machine,access,address,size,value,unused):
        assert ARENA<=address and address+size<=ARENA+0x40000 or STACK<=address and address+size<=STACK+0x10000
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write)
    cpu.emu_start(wrapper['start'],STOP,count=1000000)
    assert cpu.reg_read(arm.UC_ARM_REG_PC)==STOP and cpu.reg_read(arm.UC_ARM_REG_SP)==sp
    assert all(cpu.reg_read(register)==value for register,value in saved)and bytes(cpu.mem_read(sp,16))==canary
    return dict(returned=True,actualCanonicalEntryArguments=entries,originalVisitedPcs=sorted(pcs),
                finalArenaSha256=hashlib.sha256(bytes(cpu.mem_read(ARENA,len(prepared.data)))).hexdigest(),
                integerVfpSpAndCallerArgumentsPreserved=True,actualWrapperExecuted=True)


def run():
    claim=json.loads((WORK/'claim.json').read_text());image=original_image();rows=[];windows=Windows('state_dispatch6',model)
    try:
        for stage in[0,1]:
            for start in[0,30,62,93]:
                case=dict(label=f'actual-vector4-wrapper-{stage}-{start}',location=start,components=4,count=3,packing=stage<<10,
                          input_words=[0,0x3f800000,0x40000000,0x40400000,0x80000000,0x7fc12345,1,0x7f800000,0x3eaaaaab,0xbf000000,0x7f812345,0xff800000]*4)
                reference=execute(case,image,claim);source=machine(case,False,'state_dispatch6',model)
                assert reference['finalArenaSha256']==source['finalArenaSha256']
                rows.append(dict(input=case,originalWrapper=reference,sourceArm=source,actualWindows=windows.execute(case),highAarch64=machine(case,True,'state_dispatch6',model)))
    finally:windows.close()
    result=dict(status='actual-original-wrapper-to-complete-authored-dispatcher-component',producer=pin(__file__),caseSets=len(rows),observations=len(rows)*4,cases=rows,
                wrapperOrFollowingHelperSourceCreditGranted=0,sourceCreditGranted=0,noOriginalArgumentOrInstructionSubstitution=True,
                wrapperSha256=hashlib.sha256(image[0x72f2e8-0x100000:0x72f318-0x100000]).hexdigest())
    out=WORK/'actual-wrapper-frontier.json';out.write_text(json.dumps(result,separators=(',',':'))+'\n');print(json.dumps(dict(report=pin(out),sets=len(rows))))


if __name__=='__main__':run()
