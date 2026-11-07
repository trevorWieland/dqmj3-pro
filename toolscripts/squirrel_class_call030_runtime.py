import struct
from bisect import bisect_right

import unicorn
from unicorn import arm_const as arm
from squirrel_lookup020_oracle import HEAP, STACK, STOP


def intervals(rows):
    merged = []
    for start, end in sorted(rows):
        if merged and start <= merged[-1][1]: merged[-1][1] = max(merged[-1][1], end)
        else: merged.append([start, end])
    return [row[0] for row in merged], [row[1] for row in merged]


def contains(ranges, address, size):
    starts, ends = ranges
    index = bisect_right(starts, address) - 1
    return index >= 0 and address + size <= ends[index]


def execute(self,variant,cleanup=0):
    cpu=self.create_machine(self.sections,self.original)
    returned,phase=False,''
    self.last_fault=None
    self.dead_frame_reads=[]
    self.observed_image_reads=set()
    redirect={self.symbols[name]:target for name,target in self.redirect.items()}
    allowed_services={'sq_table_allocate019','sq_table_deallocate019','sq_string_allocate_value015',
        'sq_string_allocate_buckets015','sq_weak_allocate014','sq_prototype_deallocate011',
        'sq_native_closure_deallocate013','sq_script_closure_deallocate017','sq_weak_deallocate014',
        'sq_string_deallocate_value015','sq_string_deallocate_buckets015','sq_deallocate','sq_native_creation_shared016',
        'sq_table_hash019','sq_lookup_bind_names020','sq_lookup_publish_table_methods020','publication',
        'table_method','error_destroy','error_release','hold','item','empty_table','memcpy','memset','__aeabi_memcpy','__aeabi_memcpy4',
        '__aeabi_memclr','__aeabi_memclr4','__aeabi_memclr8','sq_lookup_invoke020','sq_lookup_reallocate020'}
    allowed_services |= self.allowed_services
    fixture_ranges=[(start,end) for name,start,end in self.functions if name.startswith(('fixture_','sq_prefix_')) or name in allowed_services]
    source_ranges=[(start,end) for name,start,end in self.functions]
    permitted=intervals(self.spans+fixture_ranges if self.original else source_ranges)
    writable=intervals([(a,a+n) for a,n,flags,data in self.sections if flags&1])
    source_data_ranges=intervals([(a,a+n) for a,n,flags,data in self.sections])
    original_data_ranges=intervals(self.data)

    def instruction(current,address,size,unused):
        nonlocal returned
        if address==STOP:returned=True;current.emu_stop();return
        if phase!='root':return
        if self.original and address in redirect:
            current.reg_write(arm.UC_ARM_REG_PC,redirect[address]);return
        if self.original and address in ((0x19d680,0x2fece8,0x18388c) + (() if self.native_invoke else (0x17ffac,))):
            if address==0x19d680:target='sq_table_deallocate019'
            elif address==0x18388c:
                caller=current.reg_read(arm.UC_ARM_REG_LR)-4
                target='sq_class_reallocate030' if caller in self.class_realloc_callers else ('sq_reallocate' if self.native_invoke and caller in (0x19d350,0x19d440) else 'sq_lookup_reallocate020')
            elif address==0x17ffac:target='sq_lookup_invoke020'
            else:
                caller=current.reg_read(arm.UC_ARM_REG_LR)-4
                target=self.allocations.get(caller)
                if not target:raise ValueError('020 allocation escaped explicit services: '+hex(caller))
            current.reg_write(arm.UC_ARM_REG_PC,self.symbols[target]);return
        if self.original and address==0x146590:raise ValueError('020 reached excluded assertion path')
        if not contains(permitted,address,size):
            mode='Thumb' if current.reg_read(arm.UC_ARM_REG_CPSR)&0x20 else 'ARM'
            if self.original and self.sdk_code.get(address)==(mode,size):pass
            elif self.original and self.runtime_discovery and 0x100000<=address<0x100000+7051280:
                self.discovered_code.add(address)
                self.discovered_instructions[(address,mode,size)]=bytes(current.mem_read(address,size))
            else:raise ValueError('020 code closure escaped: '+hex(address))
        self.coverage.add(address)

    def memory(current,kind,address,size,value,unused):
        if phase!='root':return
        if kind==unicorn.UC_MEM_READ:
            pc=current.reg_read(arm.UC_ARM_REG_PC)
            if any(address < HEAP+offset+4 and HEAP+offset < address+size
                    for offset in (0x2b400,0x2b404,0x2b420,0x2b428)):
                self.dead_frame_reads.append((pc,address-HEAP,size))
            if self.original and 0x100000<=address<address+size<=0x100000+8159232:
                self.observed_image_reads.add((pc,address,size))
        mutable=HEAP<=address<address+size<=HEAP+0x40000 or STACK<=address<address+size<=STACK+0x20000
        mutable |= contains(writable,address,size)
        source_data=contains(source_data_ranges,address,size)
        original_data=self.original and contains(original_data_ranges,address,size)
        if kind==unicorn.UC_MEM_WRITE and not mutable:raise ValueError('020 write escaped bounded state: '+hex(address))
        if kind==unicorn.UC_MEM_READ and not(mutable or source_data or original_data):
            if self.original and (address,size) in self.sdk_data:pass
            elif self.original and self.runtime_discovery and 0x100000<=address<address+size<=0x100000+8159232:
                self.discovered_data.add((address,size))
            else:raise ValueError('020 read escaped declared data: '+hex(address))

    def invalid(current,access,address,size,value,unused):
        self.last_fault={'pc':current.reg_read(arm.UC_ARM_REG_PC),'address':address,'bytes':size,'access':access}
        return False
    cpu.hook_add(unicorn.UC_HOOK_MEM_INVALID,invalid)
    def stop(current,address,size,unused):
        nonlocal returned
        returned=True
        current.emu_stop()
    cpu.hook_add(unicorn.UC_HOOK_CODE,stop,begin=STOP,end=STOP)

    def invoke(name,args,label):
        nonlocal returned,phase
        phase,returned=label,False
        sp=STACK+0x10000
        cpu.reg_write(arm.UC_ARM_REG_SP,sp);cpu.reg_write(arm.UC_ARM_REG_LR,STOP)
        for index in range(8):
            cpu.reg_write(arm.UC_ARM_REG_R4+index,0x51000000+index*163)
            cpu.reg_write(arm.UC_ARM_REG_D8+index,0x3ff0000000000000+index*131)
        for index,value in enumerate(args):
            if index<4:cpu.reg_write(arm.UC_ARM_REG_R0+index,value)
            else:cpu.mem_write(sp+(index-4)*4,struct.pack('<I',value))
        code_hook=cpu.hook_add(unicorn.UC_HOOK_CODE,instruction) if label=='root' else None
        memory_hook=cpu.hook_add(unicorn.UC_HOOK_MEM_READ|unicorn.UC_HOOK_MEM_WRITE,memory) if label=='root' else None
        try:cpu.emu_start(self.symbols[name],STOP+4,count=2000000)
        finally:
            if code_hook is not None:cpu.hook_del(code_hook)
            if memory_hook is not None:cpu.hook_del(memory_hook)
        if not returned or cpu.reg_read(arm.UC_ARM_REG_SP)!=sp or any(cpu.reg_read(arm.UC_ARM_REG_R4+i)!=0x51000000+i*163 for i in range(8)):
            raise ValueError('020 call did not normally return with ABI: '+name)
        if any(cpu.reg_read(arm.UC_ARM_REG_D8+i)!=0x3ff0000000000000+i*131 for i in range(8)):
            raise ValueError('020 changed saved floating state: '+name)
        return cpu.reg_read(arm.UC_ARM_REG_R0)
    if invoke('fixture_table_bind019',[HEAP,0x40000,0x850dac,0x81e52c,0x81e540,0x8516d0,0x8516ec,0x851220,0x81d020],'prepare')!=1:
        raise ValueError('020 bind failed')
    invoke('fixture_prepare020',[variant,cleanup],'prepare')
    if invoke('fixture_execute020',[],'root')!=1:raise ValueError('020 fixture execution did not return')
    if cpu.reg_read(arm.UC_ARM_REG_FPSCR)&0x07f79f00:raise ValueError('020 changed mandatory FPSCR controls')
    raw=bytearray(cpu.mem_read(HEAP,0x40000))
    self.precomparison_arena=bytes(raw)
    self.callback_data_aliases=[]
    count=invoke('fixture_snapshot020',[HEAP+0x38000,4096],'snapshot')
    words=list(struct.unpack('<'+'I'*count,cpu.mem_read(HEAP+0x38000,count*4)))
    if words[3:5]!=[0,0]:raise ValueError('020 fixture or inherited resource fault: '+repr(words[:16]))
    for index,target in enumerate((0x666540,0,0x666518)):
        source_pointer=struct.unpack('<I',cpu.mem_read(0x850dac+index*4,4))[0]
        value=struct.unpack_from('<I',raw,0x28000+index*4)[0]
        if value!=source_pointer:raise ValueError('020 extended lifetime prefix differs from actual source object')
        self.callback_data_aliases.append({'arenaOffset':0x28000+index*4,
            'field':'SqLookupMetaVTable020.prefix.'+('destroy','reserved','release')[index],
            'actualValue':value,'comparisonToken':0xf0001000+index})
        struct.pack_into('<I',raw,0x28000+index*4,0xf0001000+index)
    if struct.unpack_from('<I',raw,0x28000+20)[0]!=self.symbols['table_method']:
        raise ValueError('020 extended method pointer is not its declared typed bridge')
    self.callback_data_aliases.append({'arenaOffset':0x28000+20,'field':'SqLookupMetaVTable020.get_method',
        'actualValue':self.symbols['table_method'],'comparisonToken':0xf0002000})
    struct.pack_into('<I',raw,0x28000+20,0xf0002000)
    pointer=struct.unpack_from('<I',raw,0x24800+60)[0]
    if pointer:
        carriers={self.symbols['sq_vm_array_native022']:0xf0003000,
            self.symbols['fixture_native_callback026']:0xf0003004,self.symbols['fixture_native_constructor030']:0xf0003008}
        if pointer not in carriers:raise ValueError('026 undeclared native callback carrier')
        self.callback_data_aliases.append({'arenaOffset':0x24800+60,'field':'SqNativeClosure013.function',
            'actualValue':pointer,'comparisonToken':carriers[pointer]})
        struct.pack_into('<I',raw,0x24800+60,carriers[pointer])
    audit_count=invoke('fixture_callback_aliases030',[HEAP+0x37000,192],'snapshot')
    if audit_count>192:raise ValueError('030 undeclared callback or oversized metadata')
    audit=list(struct.unpack('<'+'I'*audit_count,cpu.mem_read(HEAP+0x37000,audit_count*4)))
    if audit_count%3:raise ValueError('030 callback alias metadata shape changed')
    for index in range(0,audit_count,3):
        offset,actual,token=audit[index:index+3]
        if not 0x30000<=offset<0x34000 or token not in (0xf0030001,0xf0030002):raise ValueError('030 callback alias escaped typed allocation range')
        if struct.unpack_from('<I',raw,offset)[0]!=actual:raise ValueError('030 typed callback alias does not match raw executed field')
        self.callback_data_aliases.append({'arenaOffset':offset,'field':'SqClass030.release_hook' if token==0xf0030001 else 'SqClassInstance030.release_hook','actualValue':actual,'comparisonToken':token})
        struct.pack_into('<I',raw,offset,token)
    return words,bytes(raw)
