import bisect
import hashlib
import json
import struct

from unicorn import Uc, UC_ARCH_ARM, UC_MODE_ARM, UC_HOOK_CODE, UC_PROT_READ, UC_PROT_WRITE, UC_PROT_EXEC
from unicorn import arm_const as arm
from elftools.elf.elffile import ELFFile

from native_stream058_build import ROOT, WORK, load
from native_stream058_measure import MODULE_SHA
import inventory


RAM=0x2000000
SIZE=0x100000
STREAM=0x100
CONTEXT=0x1000
SDK_HEAP=0x1900
POOL=0x10000
STACK=0x3000000
STOP=0x4000000


class Original:
    def __init__(self,artifacts=None):
        self.cpu=Uc(UC_ARCH_ARM,UC_MODE_ARM)
        self.cpu.ctl_set_cpu_model(arm.UC_CPU_ARM_11MPCORE)
        image=(ROOT/'generated/update-content0/code.bin').read_bytes()
        if hashlib.sha256(image).hexdigest()!=MODULE_SHA:
            raise ValueError('058 original module changed')
        layout=inventory.code_layout((ROOT/'generated/update-content0/exheader.bin').read_bytes())
        pages=set()
        for segment in layout['segments']:
            size=segment['pages']*4096
            if segment['name']=='data':
                size=max(size,(segment['initializedBytes']+layout['bssBytes']+4095)&-4096)
            self.cpu.mem_map(segment['address'],size)
            self.cpu.mem_write(segment['address'],image[segment['codeBinOffset']:segment['codeBinOffset']+segment['initializedBytes']])
            self.cpu.mem_protect(segment['address'],size,UC_PROT_READ|(UC_PROT_WRITE if segment['name']=='data'else UC_PROT_EXEC if segment['name']=='text'else 0))
            pages.update(range(segment['address'],segment['address']+size,4096))
        self.module_pages=pages
        self.text_end=layout['segments'][0]['address']+layout['segments'][0]['initializedBytes']
        census=json.loads((ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_bytes())
        self.ranges=sorted((q['start'],q['endExclusive'],row['address'])for row in census['functions']for q in row['ranges'])
        self.starts=[q[0]for q in self.ranges]
        artifact=(artifacts or WORK/'build')/'arm/stream058.elf'
        sections,self.symbols=load(artifact)
        mapped=set()
        for address,size,flags,data in sections:
            for page in range(address&-4096,(address+size+4095)&-4096,4096):
                if page not in mapped:
                    self.cpu.mem_map(page,4096)
                    mapped.add(page)
            if data:self.cpu.mem_write(address,data)
        self.fixture_ranges=[]
        with artifact.open('rb')as stream:
            elf=ELFFile(stream)
            for row in elf.get_section_by_name('.symtab').iter_symbols():
                if row['st_info']['type']=='STT_FUNC' and (row.name.startswith('fixture_')or row.name in('allocate','dispose','event','sdk_allocate','sdk_dispose')):
                    self.fixture_ranges.append((row['st_value'],row['st_value']+row['st_size']))
        self.cpu.mem_map(RAM,SIZE)
        self.cpu.mem_map(STACK,0x20000)
        self.cpu.mem_map(STOP,4096)
        self.cpu.hook_add(UC_HOOK_CODE,self.code)
        self.coverage=set()
        self.owners=set()
        self.fast_entries=[]
        self.body=False

    def code(self,cpu,address,size,unused):
        if any(low<=address<address+size<=high for low,high in self.fixture_ranges):
            return
        if not 0x100000<=address<address+size<=self.text_end:
            raise ValueError('058 original called an authored non-service endpoint:'+hex(address))
        index=bisect.bisect_right(self.starts,address)-1
        if index<0 or not self.ranges[index][0]<=address<address+size<=self.ranges[index][1]:
            raise ValueError('058 original instruction lacks canonical ownership:'+hex(address))
        self.coverage.add(address);self.owners.add(self.ranges[index][2])
        if address==0x733e28:
            stream=cpu.reg_read(arm.UC_ARM_REG_R0);state=self.word(stream+28)
            self.fast_entries.append(dict(stream=stream,state=state,mode=self.cpu.mem_read(state,1)[0],
                                          availableInput=self.word(stream+4),availableOutput=self.word(stream+16),
                                          hold=self.word(state+56),bits=self.word(state+60),
                                          lengths=self.word(state+76),distances=self.word(state+80),
                                          lengthBits=self.word(state+84),distanceBits=self.word(state+88),
                                          start=cpu.reg_read(arm.UC_ARM_REG_R1)))

    def word(self,address):
        return struct.unpack('<I',self.cpu.mem_read(address,4))[0]

    def call(self,address,args):
        cpu=self.cpu;sp=STACK+0x10000
        saved=[(getattr(arm,'UC_ARM_REG_R'+str(i)),0x58000000+i)for i in range(4,12)]
        saved += [(getattr(arm,'UC_ARM_REG_D'+str(i)),0x5800000012340000+i)for i in range(8,16)]
        for reg,value in saved:cpu.reg_write(reg,value)
        cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10)
        cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20)
        cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000)
        cpu.reg_write(arm.UC_ARM_REG_FPSCR,0x00400000)
        cpu.reg_write(arm.UC_ARM_REG_SP,sp)
        cpu.reg_write(arm.UC_ARM_REG_LR,STOP)
        for reg,value in zip((arm.UC_ARM_REG_R0,arm.UC_ARM_REG_R1,arm.UC_ARM_REG_R2,arm.UC_ARM_REG_R3),args):
            cpu.reg_write(reg,value&0xffffffff)
        cpu.emu_start(address,STOP,count=10000000)
        if cpu.reg_read(arm.UC_ARM_REG_PC)!=STOP or cpu.reg_read(arm.UC_ARM_REG_SP)!=sp:
            raise ValueError('058 original failed to return/restack')
        if any(cpu.reg_read(reg)!=value for reg,value in saved):raise ValueError('058 original callee-save violation')
        if cpu.reg_read(arm.UC_ARM_REG_FPSCR)!=0x00400000:raise ValueError('058 original changed FPSCR')
        value=cpu.reg_read(arm.UC_ARM_REG_R0)
        return value if value<0x80000000 else value-0x100000000

    def setup(self,defaults=False):
        data=bytearray(b'\xa7'*SIZE)
        data[STREAM:STREAM+56]=bytes(56)
        data[CONTEXT:CONTEXT+1072]=bytes(1072)
        def put(offset,value):struct.pack_into('<I',data,offset,value)
        put(CONTEXT,RAM+POOL);put(CONTEXT+4,0x60000);put(CONTEXT+24,RAM+STREAM)
        put(SDK_HEAP,self.symbols['fixture_sdk_operations058']);put(SDK_HEAP+4,RAM+CONTEXT)
        if not defaults:
            put(STREAM+32,self.symbols['fixture_allocate058']);put(STREAM+36,self.symbols['fixture_dispose058']);put(STREAM+40,RAM+CONTEXT)
        data[0x800:0x806]=b'1.2.7\0'
        self.cpu.mem_write(RAM,bytes(data))
        for address,value in((0x89a670,0xf531),(0x8bfb54,0x531),(0x89a688,RAM+SDK_HEAP)):
            self.cpu.mem_write(address,struct.pack('<I',value))
        self.cpu.mem_write(0x89a508,b'\1')
        self.call(self.symbols['fixture_bind058'],[RAM+CONTEXT])


if __name__=='__main__':
    original=Original()
    for defaults in(False,True):
        original.setup(defaults)
        result=original.call(0x733bfc,[RAM+STREAM,31,RAM+0x800,56])
        state=original.word(RAM+STREAM+28)
        print('defaults',defaults,'init',result,'state',hex(state),'codes',hex(original.word(state+76)),
              'mode',original.cpu.mem_read(state,1)[0],'sane',original.word(state+7104),'back',hex(original.word(state+7108)))
        print('end',original.call(0x733bac,[RAM+STREAM]),'owners',len(original.owners))
