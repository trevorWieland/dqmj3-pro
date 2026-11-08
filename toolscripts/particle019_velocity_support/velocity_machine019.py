import ctypes as c
from pathlib import Path
import struct
from elftools.elf.elffile import ELFFile

GUARD=None


def original_image019():GUARD.deny('original-image-constructor','velocity019')


class Machine019:
    def __init__(self,target,build,original=False):
        if original:GUARD.deny('original-CPU-execution',target)
        self.target=target;self.instructions=0;self.invalid=[];self.instruction_regions=[];self.width=4 if target=='arm'else 8
        if target=='windows':
            self.dll=c.CDLL(str(build/'velocity019.dll'));self.arena_buffer=c.create_string_buffer(0x10000);self.arena=c.addressof(self.arena_buffer)
            signatures={'velocity_setup019':([c.c_uint32]*6,None),'velocity_load019':([c.c_void_p,c.c_void_p,c.c_uint32],None),'velocity_apply019':([],None),'velocity_particle019':([],c.c_void_p),'velocity_resource019':([],c.c_void_p),'velocity_layout019':([],c.c_void_p)}
            for name,(args,result)in signatures.items():function=getattr(self.dll,name);function.argtypes=args;function.restype=result
            return
        import unicorn
        self.uc=unicorn
        if target=='arm':
            from unicorn import arm_const as regs
            self.cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM);self.arena=0x23000000;self.stack=0x70000000;self.stop=0x19000000;self.sp=self.stack+0xff00
            self.cpu.reg_write(regs.UC_ARM_REG_CPSR,0x10);self.cpu.reg_write(regs.UC_ARM_REG_C1_C0_2,0xf<<20);self.cpu.reg_write(regs.UC_ARM_REG_FPEXC,0x40000000);self.cpu.reg_write(regs.UC_ARM_REG_FPSCR,0)
        else:
            from unicorn import arm64_const as regs
            self.cpu=unicorn.Uc(unicorn.UC_ARCH_ARM64,unicorn.UC_MODE_ARM);self.arena=0x150000000;self.stack=0x160000000;self.stop=0x170000000;self.sp=self.stack+0xff00
        self.regs=regs;self.functions=[];self.symbols={};self.code_bytes={};mapped=set()
        with(build/(target+'.elf')).open('rb')as stream:
            elf=ELFFile(stream)
            for segment in elf.iter_segments():
                if segment['p_type']!='PT_LOAD':continue
                address=segment['p_vaddr'];size=segment['p_memsz'];data=segment.data()
                for page in range(address&-4096,(address+size+4095)&-4096,4096):
                    if page not in mapped:self.cpu.mem_map(page,4096);mapped.add(page)
                self.cpu.mem_write(address,data)
                if segment['p_flags']&1:
                    for i,value in enumerate(data):self.code_bytes[address+i]=value
            for symbol in elf.get_section_by_name('.symtab').iter_symbols():
                self.symbols[symbol.name]=symbol['st_value']
                if symbol['st_info']['type']=='STT_FUNC'and symbol['st_size']:self.functions.append((symbol['st_value'],symbol['st_value']+symbol['st_size']))
            all_symbols=list(elf.get_section_by_name('.symtab').iter_symbols())
            for index,section in enumerate(elf.iter_sections()):
                if not section['sh_flags']&4:continue
                mappings=sorted((symbol['st_value'],symbol.name[1])for symbol in all_symbols if symbol['st_shndx']==index and symbol.name.startswith(('$a','$x','$d','$t')))
                assert mappings and mappings[0][0]==section['sh_addr']
                for i,(start,kind)in enumerate(mappings):
                    end=mappings[i+1][0]if i+1<len(mappings)else section['sh_addr']+section['sh_size']
                    if kind in ['a','x']:self.instruction_regions.append((start,end))
        self.cpu.mem_map(self.arena,0x10000);self.cpu.mem_map(self.stack,0x10000);self.cpu.mem_map(self.stop,4096)
        def code(machine,address,size,unused):
            self.instructions+=1;assert self.instructions<=12000000
            assert any(a<=address and address+size<=b for a,b in self.functions),hex(address)
            assert size==4 and any(a<=address and address+size<=b for a,b in self.instruction_regions),hex(address)
            assert bytes(machine.mem_read(address,size))==bytes(self.code_bytes[address+i]for i in range(size))
        def invalid(machine,access,address,size,value,unused):
            self.invalid.append(dict(access=access,address=address,bytes=size));return False
        self.cpu.hook_add(unicorn.UC_HOOK_CODE,code);self.cpu.hook_add(unicorn.UC_HOOK_MEM_INVALID,invalid)

    def read(self,address,size):return c.string_at(address,size)if self.target=='windows'else bytes(self.cpu.mem_read(address,size))
    def write(self,address,data):
        if self.target=='windows':c.memmove(address,data,len(data))
        else:self.cpu.mem_write(address,data)

    def call(self,name,*args):
        if self.target=='windows':return getattr(self.dll,name)(*args)
        r=self.regs
        if self.target=='arm':
            sp,lr,pc=r.UC_ARM_REG_SP,r.UC_ARM_REG_LR,r.UC_ARM_REG_PC;argument=[getattr(r,'UC_ARM_REG_R'+str(i))for i in range(4)];saved_registers=[getattr(r,'UC_ARM_REG_R'+str(i))for i in range(4,12)]+[getattr(r,'UC_ARM_REG_D'+str(i))for i in range(8,16)]
        else:
            sp,lr,pc=r.UC_ARM64_REG_SP,r.UC_ARM64_REG_X30,r.UC_ARM64_REG_PC;argument=[getattr(r,'UC_ARM64_REG_X'+str(i))for i in range(8)];saved_registers=[getattr(r,'UC_ARM64_REG_X'+str(i))for i in range(19,30)]+[getattr(r,'UC_ARM64_REG_D'+str(i))for i in range(8,16)]
        saved=[self.cpu.reg_read(register)for register in saved_registers];self.cpu.reg_write(sp,self.sp);self.cpu.reg_write(lr,self.stop)
        for register,value in zip(argument,args):self.cpu.reg_write(register,value)
        if len(args)>len(argument):self.cpu.mem_write(self.sp,struct.pack('<'+'I'*(len(args)-len(argument)),*args[len(argument):]))
        self.cpu.emu_start(self.symbols[name],self.stop,count=1000000);assert self.cpu.reg_read(pc)==self.stop and self.cpu.reg_read(sp)==self.sp,name
        assert saved==[self.cpu.reg_read(register)for register in saved_registers],name
        return self.cpu.reg_read(argument[0])
