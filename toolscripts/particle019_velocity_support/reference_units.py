import hashlib
import json
import lzma
from pathlib import Path
import struct
import sys

ROOT=Path.cwd();WORK=ROOT/'work/particle019-velocity-v1';sys.path.insert(0,str(ROOT/'toolscripts'))
import unicorn
from unicorn import arm_const as arm
from native_wave014_oracle import original_image


def main():
    contract=json.loads((WORK/'contract-v1.json').read_bytes());image=original_image();assert hashlib.sha256(image).hexdigest()==contract['moduleSha256'];cases=json.loads((WORK/'cases-v1.json').read_bytes())['cases'];output=WORK/'original-unit-v1';output.mkdir(exist_ok=False);results=[]
    for index,row in enumerate(cases):
        cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM);cpu.mem_map(0x535000,4096);cpu.mem_write(0x5354a4,image[0x4354a4:0x4354e4]);arena=0x23000000;cpu.mem_map(arena,0x3000);before=bytearray((0xa7^(i*17+index*3))&255 for i in range(0x3000));particle=arena+0x100;resource=arena+0x1100;struct.pack_into('<3I',before,0x124,*row['velocityBits']);struct.pack_into('<I',before,0x244,resource);struct.pack_into('<I',before,0x1400,row['retentionBits']);cpu.mem_write(arena,bytes(before))
        stack=0x70000000;stop=0x19000000;cpu.mem_map(stack,4096);cpu.mem_map(stop,4096);sp=stack+0xf00
        cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10);cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20);cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000);cpu.reg_write(arm.UC_ARM_REG_FPSCR,0);cpu.reg_write(arm.UC_ARM_REG_SP,sp);cpu.reg_write(arm.UC_ARM_REG_LR,stop);cpu.reg_write(arm.UC_ARM_REG_R0,particle);cpu.reg_write(arm.UC_ARM_REG_S0,row['stepBits'])
        saved=[0x5a010203+i*0x10000 for i in range(8)]
        for i,value in enumerate(saved,4):cpu.reg_write(getattr(arm,'UC_ARM_REG_R'+str(i)),value)
        visited=[];writes=[]
        def code(machine,address,size,unused):
            assert 0x5354a4<=address<0x5354e0 and size==4;assert bytes(machine.mem_read(address,size))==image[address-0x100000:address-0x100000+size];visited.append(address)
        def write(machine,access,address,size,value,unused):writes.append(dict(pc=machine.reg_read(arm.UC_ARM_REG_PC),offset=address-particle,bytes=size))
        cpu.hook_add(unicorn.UC_HOOK_CODE,code);cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE,write);cpu.emu_start(0x5354a4,stop,count=100)
        after=bytes(cpu.mem_read(arena,0x3000));assert cpu.reg_read(arm.UC_ARM_REG_PC)==stop and cpu.reg_read(arm.UC_ARM_REG_SP)==sp;assert saved==[cpu.reg_read(getattr(arm,'UC_ARM_REG_R'+str(i)))for i in range(4,12)]
        assert [q['offset']for q in writes]==[0x24,0x28,0x2c];expected=bytearray(before);expected[0x124:0x130]=after[0x124:0x130];assert expected==after
        for label,data in [('before',bytes(before)),('after',after)]: (output/(str(index)+'-'+label+'.private.bin.xz')).write_bytes(lzma.compress(data))
        results.append(dict(**row,index=index,outputVelocityBits=list(struct.unpack_from('<3I',after,0x124)),fpscrAfter=cpu.reg_read(arm.UC_ARM_REG_FPSCR),instructions=visited,writes=writes,returned=True,wholeArenaOnlyVelocityChanged=True,preservedSpR4R11=True))
    (WORK/'original-unit-results-v1.public.json').write_text(json.dumps(dict(status='actual-original-closed-callback-unit-observations-before-C',cases=results,sourceCreditGranted=0),indent=2)+'\n');print(json.dumps(dict(cases=len(results),instructionBytes=60,poolBytes=4,allReturned=True)))


if __name__=='__main__':main()
