import ctypes
import hashlib
import json
import struct

import unicorn
from unicorn import arm_const as arm
from native_wave014_oracle import original_image
from squirrel_lookup020_build import ROOT, VTABLES
from squirrel_table_lookup019_oracle import ORIGINAL_SPANS, ORIGINAL_DATA


HEAP, STACK, STOP = 0x2000000, 0x6000000, 0xfff0000
REDIRECT = {'sq_lookup_get020':0x198578,'sq_lookup_fallback020':0x197b18,'sq_lookup_table_meta020':0x202cf4,
    'sq_lookup_meta_call020':0x18d4fc,'sq_lookup_type_name020':0x191f28,'sq_lookup_object_type_name020':0x191f20,
    'sq_lookup_scratch020':0x1a36d4,'sq_lookup_stringify020':0x197fe0,'sq_lookup_raise_format020':0x19813c,
    'sq_lookup_index_error020':0x19828c,'sq_table_get019':0x1a1dc8,'sq_table_initialize019':0x19b998,
    'sq_table_new_slot019':0x19b728,'sq_table_set019':0x19b414,'sq_table_rehash019':0x19b4ec,
    'sq_table_delegate019':0x19e2e8,'sq_table_release019':0x666518,'sq_table_destroy019':0x666540,
    'fn_0019ba68':0x19ba68,'fn_00233b7c':0x233b7c,'fn_00299114':0x299114,'fn_00299424':0x299424,
    'fn_00299518':0x299518,'fn_002995a4':0x2995a4,'sq_script_closure_release017':0x6a7610,
    'sq_script_closure_destroy017':0x6a769c,'fn_006a7780':0x6a7780,'fn_006a77c0':0x6a77c0,
    'fn_0024d9cc':0x24d9cc,'fn_0024d9e0':0x24d9e0,'fn_0068f564':0x68f564}


def machine(sections, original):
    cpu=unicorn.Uc(unicorn.UC_ARCH_ARM,unicorn.UC_MODE_ARM)
    image=original_image() if original else None
    pages=set()
    if image:pages.update(range(0x100000,(0x100000+len(image)+4095)&-4096,4096))
    for address,size,flags,data in sections:pages.update(range(address&-4096,(address+size+4095)&-4096,4096))
    ordered=sorted(pages);start,end=ordered[0],ordered[0]+4096
    for page in ordered[1:]:
        if page==end:end+=4096
        else:cpu.mem_map(start,end-start);start,end=page,page+4096
    cpu.mem_map(start,end-start)
    if image:cpu.mem_write(0x100000,image)
    vtables={address for name,address,symbol in VTABLES}
    for address,size,flags,data in sections:
        if data and not(original and address in vtables):cpu.mem_write(address,data)
    cpu.mem_map(HEAP,0x40000);cpu.mem_map(STACK,0x20000);cpu.mem_map(STOP,4096)
    cpu.reg_write(arm.UC_ARM_REG_CPSR,0x10)
    cpu.reg_write(arm.UC_ARM_REG_C1_C0_2,0xf<<20);cpu.reg_write(arm.UC_ARM_REG_FPEXC,0x40000000)
    cpu.reg_write(arm.UC_ARM_REG_FPSCR,0)
    if original:
        cpu.reg_write(arm.UC_ARM_REG_SP,STACK+0x18000)
        cpu.emu_start(0x6ff69c,0x6ff6b0,count=5)
        if bytes(cpu.mem_read(0x8c06e8,8))!=struct.pack('<II',0x01000001,0):raise ValueError('020 original NULL precondition failed')
    return cpu


class Arm:
    def __init__(self,sections,symbols,functions,original=False,runtime_discovery=False):
        self.sections,self.symbols,self.functions,self.original=sections,symbols,functions,original
        self.coverage=set()
        self.runtime_discovery=runtime_discovery
        self.discovered_code=set()
        self.discovered_data=set()
        self.discovered_instructions={}
        self.sdk_code={}
        self.sdk_data=set()
        sdk=ROOT/'evidence/lanes/squirrel-lookup020/reference-sdk-exchange.json'
        if original and not runtime_discovery and sdk.exists():
            record=json.loads(sdk.read_text())
            image=original_image()
            if hashlib.sha256(image).hexdigest()!=record['moduleSha256']:raise ValueError('020 SDK reference module changed')
            for row in record['instructionWitnesses']:
                blob=image[row['address']-0x100000:row['address']-0x100000+row['bytes']]
                if hashlib.sha256(blob).hexdigest()!=row['sha256']:raise ValueError('020 SDK instruction witness changed')
                self.sdk_code[row['address']]=(row['mode'],row['bytes'])
            for row in record['dataReadWitnesses']:
                blob=image[row['address']-0x100000:row['address']-0x100000+row['bytes']]
                if hashlib.sha256(blob).hexdigest()!=row['sha256']:raise ValueError('020 SDK data witness changed')
                self.sdk_data.add((row['address'],row['bytes']))
        claim=json.loads((ROOT/'evidence/lanes/squirrel-lookup020/claim.json').read_text())
        self.spans=ORIGINAL_SPANS+[(r['entry'],r['endExclusive']) for r in claim['functions']]
        self.data=ORIGINAL_DATA+[(r['endExclusive'],r['endExclusive']+r['poolBytes']) for r in claim['functions'] if r['poolBytes']]
        self.data += [(r['address'],r['address']+r['bytes']) for r in claim['literalData']+claim['typeNameData']]
        self.data += [(0x850dac,0x850ddc),(0x850d74,0x850d80)]

    def execute(self,variant,cleanup=0):
        cpu=machine(self.sections,self.original)
        returned,phase=False,''
        self.last_fault=None
        redirect={self.symbols[name]:target for name,target in REDIRECT.items()}
        allowed_services={'sq_table_allocate019','sq_table_deallocate019','sq_string_allocate_value015',
            'sq_string_allocate_buckets015','sq_weak_allocate014','sq_prototype_deallocate011',
            'sq_native_closure_deallocate013','sq_script_closure_deallocate017','sq_weak_deallocate014',
            'sq_string_deallocate_value015','sq_string_deallocate_buckets015','sq_deallocate','sq_native_creation_shared016',
            'sq_table_hash019','sq_lookup_bind_names020','sq_lookup_publish_table_methods020','publication',
            'table_method','error_destroy','error_release','hold','item','empty_table','memcpy','memset','__aeabi_memcpy','__aeabi_memcpy4',
            '__aeabi_memclr','__aeabi_memclr4','__aeabi_memclr8','sq_lookup_invoke020','sq_lookup_reallocate020'}
        fixture_ranges=[(start,end) for name,start,end in self.functions if name.startswith(('fixture_','sq_prefix_')) or name in allowed_services]
        source_ranges=[(start,end) for name,start,end in self.functions]

        def instruction(current,address,size,unused):
            nonlocal returned
            if address==STOP:returned=True;current.emu_stop();return
            if phase!='root':return
            if self.original and address in redirect:
                current.reg_write(arm.UC_ARM_REG_PC,redirect[address]);return
            if self.original and address in (0x19d680,0x2fece8,0x18388c,0x17ffac):
                if address==0x19d680:target='sq_table_deallocate019'
                elif address==0x18388c:target='sq_lookup_reallocate020'
                elif address==0x17ffac:target='sq_lookup_invoke020'
                else:
                    caller=current.reg_read(arm.UC_ARM_REG_LR)-4
                    target={0x19b3a4:'sq_table_allocate019',0x16b6a0:'sq_string_allocate_value015',
                        0x16b74c:'sq_string_allocate_buckets015',0x233b98:'sq_weak_allocate014'}.get(caller)
                    if not target:raise ValueError('020 allocation escaped explicit services: '+hex(caller))
                current.reg_write(arm.UC_ARM_REG_PC,self.symbols[target]);return
            if self.original and address==0x146590:raise ValueError('020 reached excluded assertion path')
            permitted=self.spans+fixture_ranges if self.original else source_ranges
            if not any(start<=address<end for start,end in permitted):
                mode='Thumb' if current.reg_read(arm.UC_ARM_REG_CPSR)&0x20 else 'ARM'
                if self.original and self.sdk_code.get(address)==(mode,size):pass
                elif self.original and self.runtime_discovery and 0x100000<=address<0x100000+7051280:
                    self.discovered_code.add(address)
                    self.discovered_instructions[(address,mode,size)]=bytes(current.mem_read(address,size))
                else:raise ValueError('020 code closure escaped: '+hex(address))
            self.coverage.add(address)

        def memory(current,kind,address,size,value,unused):
            if phase!='root':return
            mutable=HEAP<=address<address+size<=HEAP+0x40000 or STACK<=address<address+size<=STACK+0x20000
            mutable |= any(flags&1 and start<=address<address+size<=start+length for start,length,flags,blob in self.sections)
            source_data=any(start<=address<address+size<=start+length for start,length,flags,blob in self.sections)
            original_data=self.original and any(start<=address<address+size<=end for start,end in self.data)
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
        count=invoke('fixture_snapshot020',[HEAP+0x38000,4096],'snapshot')
        words=list(struct.unpack('<'+'I'*count,cpu.mem_read(HEAP+0x38000,count*4)))
        if words[3:5]!=[0,0]:raise ValueError('020 fixture or inherited resource fault: '+repr(words[:16]))
        for index,target in enumerate((0x666540,0,0x666518)):
            source_pointer=struct.unpack('<I',cpu.mem_read(0x850dac+index*4,4))[0]
            value=struct.unpack_from('<I',raw,0x28000+index*4)[0]
            if value!=source_pointer:raise ValueError('020 extended lifetime prefix differs from actual source object')
            struct.pack_into('<I',raw,0x28000+index*4,0xf0001000+index)
        if struct.unpack_from('<I',raw,0x28000+20)[0]!=self.symbols['table_method']:
            raise ValueError('020 extended method pointer is not its declared typed bridge')
        struct.pack_into('<I',raw,0x28000+20,0xf0002000)
        return words,bytes(raw)


class Windows:
    def __init__(self,path):
        self.module=ctypes.CDLL(str(path))
        self.module.fixture_table_bind019.argtypes=[ctypes.c_void_p,ctypes.c_uint32]+[ctypes.c_void_p]*7
        self.module.fixture_table_bind019.restype=ctypes.c_uint32
        self.module.fixture_vtable020.argtypes=[ctypes.c_uint32];self.module.fixture_vtable020.restype=ctypes.c_void_p
        self.module.fixture_layout020.argtypes=[ctypes.c_uint32];self.module.fixture_layout020.restype=ctypes.c_uint32
        self.module.fixture_prepare020.argtypes=[ctypes.c_uint32,ctypes.c_uint32]
        self.module.fixture_execute020.restype=ctypes.c_uint32
        self.module.fixture_snapshot020.argtypes=[ctypes.POINTER(ctypes.c_uint32),ctypes.c_uint32]
        self.module.fixture_snapshot020.restype=ctypes.c_uint32
        self.layout=[self.module.fixture_layout020(index) for index in range(12)]
        self.kernel=ctypes.WinDLL('kernel32',use_last_error=True)
        self.kernel.VirtualAlloc.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32,ctypes.c_uint32];self.kernel.VirtualAlloc.restype=ctypes.c_void_p
        self.kernel.VirtualFree.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32]

    def execute(self,variant,cleanup=0):
        base=self.kernel.VirtualAlloc(None,0x40000,0x3000,4)
        if not base:raise OSError('020 native arena allocation failed')
        try:
            if self.module.fixture_table_bind019(base,0x40000,*[self.module.fixture_vtable020(i) for i in range(7)])!=1:raise ValueError('020 native bind failed')
            self.module.fixture_prepare020(variant,cleanup)
            if self.module.fixture_execute020()!=1:raise ValueError('020 native root did not return')
            words=(ctypes.c_uint32*4096)();count=self.module.fixture_snapshot020(words,4096)
            result=list(words[:count])
            if result[3:5]!=[0,0]:raise ValueError('020 native fixture fault: '+repr(result[:16]))
            return result
        finally:self.kernel.VirtualFree(base,0,0x8000)
