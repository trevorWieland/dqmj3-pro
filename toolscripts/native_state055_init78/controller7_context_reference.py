import hashlib
import json
import struct
from pathlib import Path
import unicorn
from unicorn import arm_const as arm
from controller7_measure import ROOT,WORK,pin,PINS
from native_wave014_oracle import original_image

ARENA,CONTEXT,STACK,STOP=0x2000000,0x2001000,0x6000000,0xfff0000


def execute(seed,image,rows):
    entries=[0x12ab74,0x301f50,0x158f40,0x158f6c]
    selected=[next(row for row in rows if row['address']==entry)for entry in entries]
    allowed=[part for row in selected for part in row['ranges']]
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
    cpu.mem_map(0x100000,0x8fb000-0x100000);cpu.mem_write(0x100000,image)
    cpu.mem_map(ARENA,0x20000);cpu.mem_map(STACK,0x10000);cpu.mem_map(STOP,4096)
    before=bytes([seed])*0x20000;cpu.mem_write(ARENA,before)
    sp=STACK+0xe000;canary=struct.pack('<IIII',0x12345678,0x87654321,0x33447788,0x55aa55aa);cpu.mem_write(sp,canary)
    cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10);cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20)
    cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000);cpu.reg_write(arm.UC_ARM_REG_FPSCR,0)
    cpu.reg_write(arm.UC_ARM_REG_SP,sp);cpu.reg_write(arm.UC_ARM_REG_LR,STOP);cpu.reg_write(arm.UC_ARM_REG_R0,CONTEXT)
    saved=[(getattr(arm,'UC_ARM_REG_R'+str(i)),0x12340000+i*397)for i in range(4,12)]
    saved += [(getattr(arm,'UC_ARM_REG_D'+str(i)),0x3ff0000000000000+i*797)for i in range(8,16)]
    for register,value in saved:cpu.reg_write(register,value)
    pcs=set();calls=[];writes=[]
    def code(machine,address,size,unused):
        assert size==4 and not machine.reg_read(arm.UC_ARM_REG_CPSR)&32
        assert any(span['start']<=address<span['endExclusive']for span in allowed),hex(address)
        pcs.add(address)
        if address in entries[1:]:calls.append(dict(entry=address,args=[machine.reg_read(getattr(arm,'UC_ARM_REG_R'+str(i)))for i in range(3)]))
    def memory(machine,access,address,size,value,unused):
        assert STACK<=address and address+size<=STACK+0x10000 or CONTEXT<=address and address+size<=CONTEXT+0x868 or address==0x8bfab0 and size==4,hex(address)
        if not STACK<=address<STACK+0x10000:writes.append([machine.reg_read(arm.UC_ARM_REG_PC),address,size,value])
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,memory)
    cpu.emu_start(0x12ab74,STOP,count=1000000)
    assert cpu.reg_read(arm.UC_ARM_REG_PC)==STOP and cpu.reg_read(arm.UC_ARM_REG_SP)==sp
    assert all(cpu.reg_read(register)==value for register,value in saved)and bytes(cpu.mem_read(sp,16))==canary
    after=bytes(cpu.mem_read(ARENA,0x20000));start=CONTEXT-ARENA
    assert after[:start]==before[:start]and after[start+0x868:]==before[start+0x868:]
    assert struct.unpack('<I',cpu.mem_read(0x8bfab0,4))[0]==CONTEXT
    return dict(seed=seed,returned=True,status=cpu.reg_read(arm.UC_ARM_REG_R0),contextRegisteredByOriginal=True,
                contextBytes=0x868,contextSha256=hashlib.sha256(after[start:start+0x868]).hexdigest(),
                contextWords=list(struct.unpack('<538I',after[start:start+0x868])),originalVisitedPcs=sorted(pcs),
                actualOriginalServiceCalls=calls,writeTraceSha256=hashlib.sha256(json.dumps(writes,separators=(',',':')).encode()).hexdigest(),
                savedIntegerVfpSpAndCallerStackPreserved=True,allOutsideObjectBytesPreserved=True,
                actualFpscr=cpu.reg_read(arm.UC_ARM_REG_FPSCR),noOriginalCallOrResultSubstitution=True)


def run():
    for path,expected in PINS.items():assert pin(path)['sha256']==expected
    image=original_image();census=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json';rows=json.loads(census.read_text())['functions']
    results=[execute(seed,image,rows)for seed in[0,0xa5,0xff]]
    assert all(row['status']==0 for row in results)
    assert len({row['contextSha256']for row in results})==1
    result=dict(status='actual-original-context-construction-before-authored-C',producer=pin(__file__),moduleSha256=hashlib.sha256(image).hexdigest(),
                canonicalEntry=0x12ab74,contextAllocationBytes=0x868,predecessors=[pin(path)for path in PINS],cases=results,
                initializedByActualOriginalInstructions=True,preparedContextPrefixSupplied=False,
                sourceAuthored=False,sourceCreditGranted=0,fullFactoryHardwareOrGameClaimed=False)
    out=WORK/'context-constructor-reference.private.json';out.write_text(json.dumps(result,indent=2)+'\n');print(json.dumps(dict(report=pin(out),sets=len(results),hash=results[0]['contextSha256'])))


if __name__=='__main__':run()
