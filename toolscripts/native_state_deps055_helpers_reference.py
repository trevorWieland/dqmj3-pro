import hashlib
import importlib.metadata
import json
from pathlib import Path
import platform
import struct
import sys
import unicorn
import capstone
from unicorn import arm_const as arm
from native_state_deps055_helpers_measure import SOURCE,ROOT,WORK,pin,original_image

sys.path.insert(0,str(ROOT/'toolscripts'))
from native_state055_reference import ARENA,ARENA_BYTES,STACK,STOP,cases as leaf_cases


def u32(value):
    return value&0xffffffff


def cases():
    rows=[]
    for row in leaf_cases():
        if row['label'].startswith('count-')or row['label'].startswith('alias-')or row['label'].startswith('null-'):
            rows.append(dict(kind='fixed',**row))
    for count in [0,1,2,3,4,6,127,128,129,255,256,4095,4096]:
        for capacity in [count+1,count+2,count+3]:
            rows.append(dict(kind='reserve',label=f'reserve-{count}-{capacity}',count=count,base=0xfedcba98,
                             output=ARENA+0x4000,source=0,limit=ARENA+0x4000+capacity*4))
    for index in [0,1,31,32,33,0xffffffff]:
        for value in [0,0xffffffff,0x7fc12345,0xdeadbeef]:
            rows.append(dict(kind='lookup',label=f'lookup-{index}-{value:x}',index=index,value=value,object=True,container=index<32))
        rows.append(dict(kind='lookup',label=f'lookup-{index}-null',index=index,value=0,object=False,container=index<32))
    return rows


def initial():
    return b''.join(struct.pack('<I',u32(0x125a34d7+index*0x9e3779b9))for index in range(ARENA_BYTES//4))


def expected(case,before):
    data=bytearray(before)
    if case['kind']=='lookup':
        return data,None,case['value']if case['index']<32 and case['object']else 0,'word'
    count,output,limit=case['count'],case['output'],case['limit']
    budget=count+2 if case['kind']=='reserve'else(count&~1)+2*(count>>7)+2
    if limit<=output+budget*4:
        return data,[limit,limit],case['base']if case['kind']=='reserve'else limit,'word'if case['kind']=='reserve'else'limit-pointer'
    if case['kind']=='reserve':
        if not count:
            return data,[output,limit],case['base'],'word'
        struct.pack_into('<II',data,output-ARENA,0,u32(case['base']|((count-1)<<20)))
        cursor=output+(2+(count&~1))*4
        return data,[cursor,limit],cursor,'cursor-pointer'
    for offset in range(0,count,128):
        block=min(128,count-offset)
        first=struct.unpack_from('<I',data,case['source']+offset*4-ARENA)[0]
        struct.pack_into('<II',data,output-ARENA,first,u32(case['base']|((block-1)<<20)|0xf0000))
        output+=8
        for index in range(block&~1):
            value=struct.unpack_from('<I',data,case['source']+(offset+index+1)*4-ARENA)[0]
            struct.pack_into('<I',data,output-ARENA,value)
            output+=4
    return data,[output,limit],0x8bf790,'pair-pointer'


def execute(case,image,claim):
    entry={'reserve':0x6f9544,'fixed':0x166900,'lookup':0x7292d0}[case['kind']]
    function=next(row for row in claim['functions']if row['entry']==entry)
    parts=function['ranges']+function['literalReads']
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
    pages={STOP,0x8bf000}
    for row in parts:
        pages.update(range(row['start']&-4096,(row['endExclusive']+4095)&-4096,4096))
    for page in pages:
        cpu.mem_map(page,4096)
    cpu.mem_map(STACK,0x10000)
    cpu.mem_map(ARENA,ARENA_BYTES)
    for row in parts:
        cpu.mem_write(row['start'],image[row['start']-0x100000:row['endExclusive']-0x100000])
    before=bytearray(initial())
    if case['kind']=='lookup':
        table=ARENA+0x1000 if case['container']else 0
        cpu.mem_write(0x8bfad8,struct.pack('<I',table))
        if table:
            before[0x1828:0x18a8]=bytes(128)
            pointer=ARENA+0x3000 if case['object']else 0
            struct.pack_into('<I',before,0x1828+case['index']*4,pointer)
            struct.pack_into('<I',before,0x3000,case['value'])
        arguments=[case['index'],0,0]
    else:
        cpu.mem_write(0x8bf790,struct.pack('<II',case['output'],case['limit']))
        arguments=[case['base'],case['count'],case['source']]
    cpu.mem_write(ARENA,bytes(before))
    cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10)
    cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20)
    cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000)
    sp=STACK+0xc000
    cpu.reg_write(arm.UC_ARM_REG_SP,sp)
    cpu.reg_write(arm.UC_ARM_REG_LR,STOP)
    saved=[(getattr(arm,'UC_ARM_REG_R'+str(index)),0x51000000+index*163)for index in range(4,12)]
    saved+=[(getattr(arm,'UC_ARM_REG_D'+str(index)),0x3ff0000000000000+index*131)for index in range(8,16)]
    for register,value in saved:
        cpu.reg_write(register,value)
    for register,value in zip([arm.UC_ARM_REG_R0,arm.UC_ARM_REG_R1,arm.UC_ARM_REG_R2],arguments):
        cpu.reg_write(register,value)
    pcs=set()
    reads=[]
    def code(machine,address,size,unused):
        assert size==4 and not machine.reg_read(arm.UC_ARM_REG_CPSR)&32
        assert any(row['start']<=address<row['endExclusive']for row in function['ranges']),hex(address)
        pcs.add(address)
    def memory(machine,access,address,size,value,unused):
        if ARENA<=address<ARENA+ARENA_BYTES or 0x8bf000<=address<0x8c0000:
            reads.append([machine.reg_read(arm.UC_ARM_REG_PC),address,size])
    cpu.hook_add(unicorn.UC_HOOK_CODE,code)
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ,memory)
    cpu.emu_start(entry,STOP,count=100000)
    assert cpu.reg_read(arm.UC_ARM_REG_PC)==STOP and cpu.reg_read(arm.UC_ARM_REG_SP)==sp
    assert all(cpu.reg_read(register)==value for register,value in saved)
    data=bytes(cpu.mem_read(ARENA,ARENA_BYTES))
    pair=list(struct.unpack('<II',bytes(cpu.mem_read(0x8bf790,8))))if case['kind']!='lookup'else None
    model,model_pair,model_return,kind=expected(case,before)
    assert data==bytes(model)and pair==model_pair
    assert cpu.reg_read(arm.UC_ARM_REG_R0)==model_return,(case,hex(cpu.reg_read(arm.UC_ARM_REG_R0)),hex(model_return))
    return dict(input=case,returned=cpu.reg_read(arm.UC_ARM_REG_R0),returnKind=kind,actualOriginalReturned=True,
                originalPcs=sorted(pcs),reads=reads,fullDataArenaSha256=hashlib.sha256(data).hexdigest(),
                finalPair=pair,independentModelPassed=True,savedIntegerVfpSpPreserved=True)


def run():
    image=original_image()
    claim=json.loads((WORK/'claim.json').read_text(encoding='utf-8'))
    rows=[]
    for case in cases():
        try:
            rows.append(execute(case,image,claim))
        except BaseException as error:
            (WORK/'reference.failure.json').write_text(json.dumps(dict(case=case,error=repr(error)),indent=2)+'\n',encoding='utf-8')
            raise
    coverage={}
    for kind,entry in [('reserve',0x6f9544),('fixed',0x166900),('lookup',0x7292d0)]:
        function=next(row for row in claim['functions']if row['entry']==entry)
        all_pcs={pc for part in function['ranges']for pc in range(part['start'],part['endExclusive'],4)}
        visited=set().union(*(set(row['originalPcs'])for row in rows if row['input']['kind']==kind))
        coverage[kind]=dict(entry=entry,instructions=len(all_pcs),visited=len(visited),missing=sorted(all_pcs-visited))
    result=dict(schemaVersion=1,status='actual-original-additional-state055-helpers-before-C',
                claim=pin(WORK/'claim.json'),producer=pin(Path(__file__).resolve()),caseSets=len(rows),cases=rows,coverage=coverage,
                effectiveTools=dict(python=platform.python_version(),unicornDistribution=importlib.metadata.version('unicorn'),
                                    unicornInterface=unicorn.__version__,unicornNative=list(unicorn.uc_version()),
                                    capstoneDistribution=importlib.metadata.version('capstone'),capstoneInterface=capstone.__version__,capstoneNative=list(capstone.cs_version())),
                sourceAuthored=False,sourceCreditGranted=0,externalMemcpyExecuted=False)
    path=WORK/'reference.json'
    path.write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    print(json.dumps(dict(report=pin(path),cases=len(rows),coverage=coverage)))
    return result


if __name__=='__main__':
    run()
