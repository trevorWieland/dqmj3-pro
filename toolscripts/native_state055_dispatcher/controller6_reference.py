import hashlib
import json
import struct
import unicorn
from unicorn import arm_const as arm
from controller6_measure import ROOT,WORK,pin
from native_wave014_oracle import original_image
from controller6_fixture import ARENA,CONTEXT,SELECTED,SLOT,INPUT,fixture

STACK,STOP=0x6000000,0xfff0000


def execute(case,image,claim):
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
    parts=claim['instructionRanges']+claim['internalExcludedGaps']+claim['pcRelativeReadLeads']
    pages={0x8bf000,STOP}
    for span in parts:pages.update(range(span['start']&-4096,(span['endExclusive']+4095)&-4096,4096))
    for span in claim['pcRelativeReadLeads']:
        if span['endExclusive']-span['start']==4:
            value=struct.unpack_from('<I',image,span['start']-0x100000)[0]
            if 0x7b9810<=value<0x100000+len(image):pages.add(value&-4096)
    for page in sorted(pages):
        cpu.mem_map(page,4096)
        if 0x100000<=page<0x100000+len(image):cpu.mem_write(page,image[page-0x100000:page-0x100000+4096])
    cpu.mem_map(ARENA,0x40000);cpu.mem_map(STACK,0x10000)
    prepared=fixture(case);cpu.mem_write(ARENA,bytes(prepared.data))
    for address,value in prepared.external.items():
        page=address&-4096
        if page not in pages:cpu.mem_map(page,4096);pages.add(page)
        cpu.mem_write(address,bytes([value]))
    if case.get('null_globals'):
        cpu.mem_write(0x8bf7a4,bytes(4));cpu.mem_write(0x8bfab0,bytes(4))
    sp=STACK+0xe000
    cpu.mem_write(sp,struct.pack('<IIII',case.get('transpose',0),case.get('matrix',0),0x12345678,0x87654321))
    cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10);cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20)
    cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000);cpu.reg_write(arm.UC_ARM_REG_FPSCR,0)
    cpu.reg_write(arm.UC_ARM_REG_SP,sp);cpu.reg_write(arm.UC_ARM_REG_LR,STOP)
    args=[case['location'],0 if case.get('null_input')else INPUT,case.get('components',4),case.get('count',1)]
    for index,value in enumerate(args):cpu.reg_write(getattr(arm,'UC_ARM_REG_R'+str(index)),value)
    saved=[(getattr(arm,'UC_ARM_REG_R'+str(index)),0x12340000+index*397)for index in range(4,12)]
    saved += [(getattr(arm,'UC_ARM_REG_D'+str(index)),0x3ff0000000000000+index*797)for index in range(8,16)]
    for register,value in saved:cpu.reg_write(register,value)
    pcs=set();writes=[];invalid=[]
    def code(machine,address,size,unused):
        assert size==4 and not machine.reg_read(arm.UC_ARM_REG_CPSR)&32
        assert any(span['start']<=address<span['endExclusive']for span in claim['instructionRanges']),hex(address)
        pcs.add(address)
    def memory(machine,access,address,size,value,unused):
        if STACK<=address<STACK+0x10000:return
        assert ARENA<=address and address+size<=ARENA+0x40000,hex(address)
        writes.append([machine.reg_read(arm.UC_ARM_REG_PC),address,size,value])
    def bad(machine,access,address,size,value,unused):
        invalid.append(dict(pc=machine.reg_read(arm.UC_ARM_REG_PC),address=address,size=size,access=access));return False
    cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,memory);cpu.hook_add(unicorn.UC_HOOK_MEM_INVALID,bad)
    try:cpu.emu_start(0x73b7a4,STOP,count=1000000)
    except BaseException as error:return dict(input=case,returned=False,error=repr(error),pc=cpu.reg_read(arm.UC_ARM_REG_PC),invalidMemory=invalid,visitedPcs=sorted(pcs),writes=writes)
    assert cpu.reg_read(arm.UC_ARM_REG_PC)==STOP and cpu.reg_read(arm.UC_ARM_REG_SP)==sp
    assert all(cpu.reg_read(register)==value for register,value in saved)
    assert bytes(cpu.mem_read(sp,16))==struct.pack('<IIII',case.get('transpose',0),case.get('matrix',0),0x12345678,0x87654321)
    data=bytes(cpu.mem_read(ARENA,0x40000));different=[i for i,(a,b)in enumerate(zip(prepared.data,data))if a!=b]
    return dict(input=case,returned=True,visitedPcs=sorted(pcs),writes=writes,changedBytes=len(different),
                finalArenaSha256=hashlib.sha256(data).hexdigest(),initialArenaSha256=hashlib.sha256(prepared.data).hexdigest(),
                vertexWords=list(struct.unpack('<32I',data[0x28000:0x28080])),geometryWords=list(struct.unpack('<32I',data[0x2a000:0x2a080])),
                vertexDirty=list(struct.unpack('<3I',data[0x5000+0x1b4:0x5000+0x1c0])),geometryDirty=list(struct.unpack('<3I',data[0x5000+0x348:0x5000+0x354])),
                contextFlags=struct.unpack_from('<I',data,0x1000)[0],rawVolatileArgumentRegistersAfter=[cpu.reg_read(getattr(arm,'UC_ARM_REG_R'+str(i)))for i in range(4)],
                actualFpscr=cpu.reg_read(arm.UC_ARM_REG_FPSCR),savedIntegerVfpSpAndCallerArgumentsPreserved=True)


def run():
    image=original_image();claim=json.loads((WORK/'claim.json').read_text());rows=[]
    inputs=[dict(label='sentinel',location=0xffffffff,count=1),dict(label='zero-count',location=0,count=0)]
    for geom in[0,1]:
        for components in[1,2,3,4]:
            inputs.append(dict(label=f'vector-{geom}-{components}',location=2,components=components,count=2,packing=(geom<<10)|(1<<24)))
    for dimension in[2,3,4]:
        for transpose in[0,1]:
            inputs.append(dict(label=f'matrix-{dimension}-{transpose}',location=1,components=dimension,count=2,packing=((dimension-1)<<13)|(1<<24),matrix=1,transpose=transpose))
    for case in inputs:
        row=execute(case,image,claim);rows.append(row);print(case['label'],row['returned'],row.get('contextFlags'),flush=True)
    out=WORK/'uniform-reference.json';out.write_text(json.dumps(dict(schemaVersion=1,status='actual-original-dispatcher-uniform-frontier-before-C',cases=rows,producer=pin(__file__),sourceAuthored=False,sourceCreditGranted=0),indent=2)+'\n')
    print(json.dumps(dict(report=pin(out),sets=len(rows),returned=sum(r['returned']for r in rows))))


if __name__=='__main__':run()
