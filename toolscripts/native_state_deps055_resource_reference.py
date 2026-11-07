import hashlib
import json
from pathlib import Path
import struct
import unicorn
from unicorn import arm_const as arm
from native_state_deps055_resource_measure import SOURCE,WORK,pin,original_image

ARENA,STACK,STOP=0x2000000,0x6000000,0xfff0000
TABLE,NODE,RESOURCE,WORDS,BYTES=ARENA+0x1000,ARENA+0x3000,ARENA+0x6000,ARENA+0xa000,ARENA+0xb000


def cases():
    rows=[]
    for index in [0,1,15,31]:
        for node,resource in [(False,False),(True,False),(True,True)]:
            for flags in [0,1,7,0xffffffff]:
                rows.append(dict(label=f'resource-{index}-{int(node)}-{int(resource)}-{flags:x}',index=index,node=node,resource=resource,flags=flags,byteIndex=index%16))
    for index in [32,33,0xffffffff]:
        rows.append(dict(label=f'invalid-{index}',index=index,node=False,resource=False,flags=0,byteIndex=0))
    return rows


def execute(case,image):
    spans=[(0x7292d0,0x729300),(0x6fe08c,0x6fe090),(0x6fe0a4,0x6fe0a8),
           (0x6fe0ac,0x6fe0b0),(0x6fe440,0x6fe444),(0x6fe48c,0x6fe490),(0x6fe718,0x6fe71c)]
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
    pages={0x8bf000,STOP}
    for start,end in spans:
        pages.update(range(start&-4096,(end+4095)&-4096,4096))
    for page in pages:
        cpu.mem_map(page,4096)
    cpu.mem_map(ARENA,0x10000)
    cpu.mem_map(STACK,0x10000)
    for start,end in spans:
        cpu.mem_write(start,image[start-0x100000:end-0x100000])
    cpu.mem_write(0x8bfad8,struct.pack('<I',TABLE if case['index']<32 else 0))
    if case['index']<32:
        cpu.mem_write(TABLE+0x828+case['index']*4,struct.pack('<I',NODE if case['node']else 0))
    cpu.mem_write(NODE,struct.pack('<I',RESOURCE if case['resource']else 0))
    cpu.mem_write(RESOURCE+0x808,struct.pack('<I',WORDS))
    cpu.mem_write(RESOURCE+0x818,struct.pack('<I',BYTES))
    cpu.mem_write(RESOURCE+0x81c,struct.pack('<I',case['flags']))
    cpu.mem_write(WORDS,b''.join(struct.pack('<I',0x12345678+index*0x10101)for index in range(16)))
    byte_data=bytes((0x40+index*3)&255 for index in range(32))
    cpu.mem_write(BYTES,byte_data)
    before=bytes(cpu.mem_read(ARENA,0x10000))
    cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10)
    sp=STACK+0xc000
    cpu.reg_write(arm.UC_ARM_REG_SP,sp)
    cpu.reg_write(arm.UC_ARM_REG_LR,STOP)
    cpu.reg_write(arm.UC_ARM_REG_R0,case['index'])
    saved=[(getattr(arm,'UC_ARM_REG_R'+str(index)),0x51000000+index*163)for index in range(4,12)]
    for register,value in saved:
        cpu.reg_write(register,value)
    pcs=set()
    reads=[]
    allowed=[(0x7292d0,0x7292fc)]+spans[1:]
    def code(machine,address,size,unused):
        assert size==4 and any(start<=address<end for start,end in allowed),hex(address)
        pcs.add(address)
    def memory(machine,access,address,size,value,unused):
        reads.append(dict(pc=machine.reg_read(arm.UC_ARM_REG_PC),address=address,bytes=size,
                          valueSha256=hashlib.sha256(bytes(machine.mem_read(address,size))).hexdigest()))
    cpu.hook_add(unicorn.UC_HOOK_CODE,code)
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ,memory)
    cpu.emu_start(0x6fe08c,0x6fe090,count=100)
    assert cpu.reg_read(arm.UC_ARM_REG_PC)==0x6fe090 and cpu.reg_read(arm.UC_ARM_REG_SP)==sp
    assert all(cpu.reg_read(register)==value for register,value in saved)
    returned=cpu.reg_read(arm.UC_ARM_REG_R0)
    expected=RESOURCE if case['index']<32 and case['node']and case['resource']else 0
    assert returned==expected
    consumers=None
    if returned:
        cpu.emu_start(0x6fe0a4,0x6fe0a8,count=1)
        byte_pointer=cpu.reg_read(arm.UC_ARM_REG_IP)
        assert byte_pointer==BYTES
        cpu.reg_write(arm.UC_ARM_REG_R6,case['byteIndex'])
        cpu.emu_start(0x6fe0ac,0x6fe0b0,count=1)
        byte_value=cpu.reg_read(arm.UC_ARM_REG_IP)
        assert byte_value==byte_data[case['byteIndex']]
        cpu.emu_start(0x6fe440,0x6fe444,count=1)
        cpu.emu_start(0x6fe48c,0x6fe490,count=1)
        word_pointer=cpu.reg_read(arm.UC_ARM_REG_R2)
        assert word_pointer==WORDS
        cpu.emu_start(0x6fe718,0x6fe71c,count=1)
        flags=cpu.reg_read(arm.UC_ARM_REG_R0)
        assert flags==case['flags']
        consumers=dict(bytePointer=byte_pointer,wordPointer=word_pointer,byteValue=byte_value,flags=flags)
    assert bytes(cpu.mem_read(ARENA,0x10000))==before
    return dict(input=case,returnedResourcePointer=returned,actualGetterReturned=True,
                actualWholeGetterPcs=sorted(pc for pc in pcs if 0x7292d0<=pc<0x7292fc),
                referenceOnlyCallerConsumerPcs=sorted(pc for pc in pcs if not 0x7292d0<=pc<0x7292fc),
                actualOriginalConsumers=consumers,readWitnesses=reads,
                fullTargetInputArenaUnchanged=True,arenaSha256=hashlib.sha256(before).hexdigest())


def run():
    image=original_image()
    rows=[execute(case,image)for case in cases()]
    covered=set().union(*(set(row['actualWholeGetterPcs'])for row in rows))
    assert covered==set(range(0x7292d0,0x7292fc,4))
    result=dict(schemaVersion=1,status='actual-original-resource-pointer-provider-and-consumer-witnesses-before-C',
                claim=pin(WORK/'claim.json'),caseSets=len(rows),cases=rows,completeGetterPcs=11,
                consumerFragmentsCanonicalCredit=0,productionResourceLayoutOrOwnershipClaimed=False,
                sourceAuthored=False,sourceCreditGranted=0,producer=pin(Path(__file__).resolve()))
    path=WORK/'reference.json'
    path.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(dict(report=pin(path),cases=len(rows),getterPcs=11)))
    return result


if __name__=='__main__':
    run()
