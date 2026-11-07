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
    self.terminal=None
    self.startup_globals=[]
    self.live_null_reads=[]
    self.dead_frame_reads=[]
    self.resource_calls=[]
    self.native_frame_offsets=set()
    active_native=[]
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
        if address==self.symbols.get('fixture_terminal_marker041'):
            kind,reason=struct.unpack('<II',current.mem_read(self.symbols['capture_fixture041']+12,8))
            self.terminal={'kind':kind,'reason':reason,'sourceServiceBoundary':True};current.emu_stop();return
        if phase!='root':return
        while active_native and address==active_native[-1][0]:active_native.pop()
        native_entry=0x196f6c if self.original else self.symbols['sq_vm_call_native022']
        if address==native_entry:
            vm=current.reg_read(arm.UC_ARM_REG_R0)
            frames,count=struct.unpack('<II',current.mem_read(vm+96,8))
            offset=frames+count*48-HEAP
            if not 0<=offset<=0x40000-48:raise ValueError('034 native frame leaves actual target arena')
            self.native_frame_offsets.add(offset)
            active_native.append((current.reg_read(arm.UC_ARM_REG_LR),offset))
        if self.original and address in redirect:
            current.reg_write(arm.UC_ARM_REG_PC,redirect[address]);return
        if self.original and address in (0x19d680,0x2fece8,0x18388c,self.symbols['fixture_record019']):
            self.resource_calls.append((hex(address),hex(current.reg_read(arm.UC_ARM_REG_LR)-4),*[hex(current.reg_read(arm.UC_ARM_REG_R0+i)) for i in range(3)]))
        if self.original and address in ((0x19d680,0x2fece8,0x18388c) + (() if self.native_invoke else (0x17ffac,))):
            if address==0x19d680:target='sq_table_deallocate019'
            elif address==0x18388c:
                caller=current.reg_read(arm.UC_ARM_REG_LR)-4
                target='sq_script_create_reallocate038' if caller in self.capture_realloc_callers else 'sq_class_reallocate030' if caller in self.class_realloc_callers else ('sq_reallocate' if self.native_invoke and (caller in (0x19d350,0x19d440,0x18f1c8) or 0x18ef00<=caller<0x18f180) else 'sq_lookup_reallocate020')
            elif address==0x17ffac:target='sq_lookup_invoke020'
            else:
                caller=current.reg_read(arm.UC_ARM_REG_LR)-4
                target=self.allocations.get(caller)
                if not target:raise ValueError('020 allocation escaped explicit services: '+hex(caller))
            current.reg_write(arm.UC_ARM_REG_PC,self.symbols[target]);return

        if not contains(permitted,address,size):
            mode='Thumb' if current.reg_read(arm.UC_ARM_REG_CPSR)&0x20 else 'ARM'
            if self.original and self.sdk_code.get(address)==(mode,size):pass
            elif self.original and self.runtime_discovery and 0x100000<=address<0x100000+7051280:
                self.discovered_code.add(address)
                self.discovered_instructions[(address,mode,size)]=bytes(current.mem_read(address,size))
            else:raise ValueError('038 code closure escaped: '+hex(address)+' caller '+hex(current.reg_read(arm.UC_ARM_REG_LR)-4)+' classFault '+str(struct.unpack('<I',current.mem_read(self.symbols['class_fixture030']+20,4))[0])+' lookup '+bytes(current.mem_read(self.symbols['lookup_fixture020'],36)).hex())
        self.coverage.add(address)

    def memory(current,kind,address,size,value,unused):
        if phase!='root':return
        if kind==unicorn.UC_MEM_READ:
            pc=current.reg_read(arm.UC_ARM_REG_PC)
            if self.original and pc==0x196c90 and address==0x8c06e8:
                self.live_null_reads.append({'pc':pc,'address':address,'type':struct.unpack('<I',current.mem_read(address,4))[0]})
            if any(address < HEAP+base+field+4 and HEAP+base+field < address+size
                    for _,base in active_native for field in (0,4,32,40)):
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
        if self.original and variant in(68,69):
            self.terminal={'kind':2,'reason':2 if variant==68 else 3,'actualFault':dict(self.last_fault)}
        return False
    cpu.hook_add(unicorn.UC_HOOK_MEM_INVALID,invalid)
    def interrupt(current,number,unused):
        pc=current.reg_read(arm.UC_ARM_REG_PC)
        if not self.original or pc!=0x12d620 or number!=2:raise ValueError('041 unexpected CPU exception')
        args=[current.reg_read(arm.UC_ARM_REG_R0+i)for i in range(3)]
        if args!=[0,0,0]:raise ValueError('041 assertion panic ABI changed')
        self.terminal={'kind':1,'reason':1 if variant==66 else 2,'svc':0x3c,'actualArguments':args,'actualPc':pc-4}
        current.emu_stop()
    cpu.hook_add(unicorn.UC_HOOK_INTR,interrupt)
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
        except unicorn.UcError:
            if not self.terminal:raise
        finally:
            if code_hook is not None:cpu.hook_del(code_hook)
            if memory_hook is not None:cpu.hook_del(memory_hook)
        if self.terminal:return 0
        if not returned or cpu.reg_read(arm.UC_ARM_REG_SP)!=sp or any(cpu.reg_read(arm.UC_ARM_REG_R4+i)!=0x51000000+i*163 for i in range(8)):
            raise ValueError('020 call did not normally return with ABI: '+name)
        if any(cpu.reg_read(arm.UC_ARM_REG_D8+i)!=0x3ff0000000000000+i*131 for i in range(8)):
            raise ValueError('020 changed saved floating state: '+name)
        return cpu.reg_read(arm.UC_ARM_REG_R0)
    if self.original:
        self.symbols['fixture_original_globals041']=0x6ff69c
        def startup(current,address,size,unused):
            if address==STOP:return
            if address not in range(0x6ff69c,0x6ff734,4)and address!=0x303b10:
                raise ValueError('041 CRT initializer escaped its complete measured closure')
        hook=cpu.hook_add(unicorn.UC_HOOK_CODE,startup)
        try:invoke('fixture_original_globals041',[],'startup')
        finally:cpu.hook_del(hook)
        self.startup_globals=list(struct.unpack('<10I',cpu.mem_read(0x8c06e8,40)))
        if self.startup_globals!=[0x01000001,0,0x01000008,1,0x01000008,0,0x05000002,1,0x05000002,0xffffffff]:
            raise ValueError('041 actual CRT tagged-object initialization mismatch')
    if invoke('fixture_table_bind019',[HEAP,0x40000,0x850dac,0x81e52c,0x81e540,0x8516d0,0x8516ec,0x851220,0x81d020],'prepare')!=1:
        raise ValueError('020 bind failed')
    invoke('fixture_prepare020',[variant,cleanup],'prepare')
    root_result=invoke('fixture_execute020',[],'root')
    if root_result!=1 and not self.terminal:
        import json
        self.fixture_debug={name:bytes(cpu.mem_read(self.symbols[name],128)).hex() for name in ('class_fixture030','table_fixture019','capture_fixture038')}
        raise ValueError('038 fixture execution returned false: '+json.dumps(self.fixture_debug))
    if cpu.reg_read(arm.UC_ARM_REG_FPSCR)&0x07f79f00:raise ValueError('020 changed mandatory FPSCR controls')
    raw=bytearray(cpu.mem_read(HEAP,0x40000))
    self.precomparison_arena=bytes(raw)
    self.callback_data_aliases=[]
    if self.terminal:words=[0x041f00,variant,self.terminal['kind'],self.terminal['reason']]
    else:
        count=invoke('fixture_snapshot020',[HEAP+0x38000,4096],'snapshot')
        words=list(struct.unpack('<'+'I'*count,cpu.mem_read(HEAP+0x38000,count*4)))
        if words[3:5]!=[0,0]:raise ValueError('041 fixture or inherited resource fault')
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
            self.symbols['fixture_native_callback026']:0xf0003004,self.symbols['fixture_native_constructor030']:0xf0003008,
            self.symbols['fixture_inherited034']:0xf0034000,self.symbols['fixture_constructor034']:0xf0034001,
            self.symbols['fixture_newslot034']:0xf0034002}
        if pointer not in carriers:raise ValueError('026 undeclared native callback carrier')
        self.callback_data_aliases.append({'arenaOffset':0x24800+60,'field':'SqNativeClosure013.function',
            'actualValue':pointer,'comparisonToken':carriers[pointer]})
        struct.pack_into('<I',raw,0x24800+60,carriers[pointer])
    if 36<=variant<54 or 60<=variant<=62:
        pointer=struct.unpack_from('<I',raw,0x24400+60)[0]
        if pointer!=self.symbols['fixture_lookup_capture038' if variant<54 else 'fixture_capture_meta041']:raise ValueError('038 native capture carrier is not its exact declared callback')
        self.callback_data_aliases.append({'arenaOffset':0x24400+60,'field':'SqNativeClosure013.function capture client',
            'actualValue':pointer,'comparisonToken':0xf0038000})
        struct.pack_into('<I',raw,0x24400+60,0xf0038000)
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
