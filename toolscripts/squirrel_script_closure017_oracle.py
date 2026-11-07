import ctypes
import struct

from unicorn import Uc, UC_ARCH_ARM, UC_HOOK_CODE, UC_MODE_ARM, UC_HOOK_MEM_WRITE, UC_HOOK_MEM_READ, UC_HOOK_MEM_INVALID
from unicorn.arm_const import UC_ARM_REG_CPSR, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_R0, UC_ARM_REG_R4, UC_ARM_REG_SP
from native_wave014_oracle import original_image
from squirrel_script_closure017_build import ENTRIES


RAM, STACK, STOP = 0x2000000, 0x6000000, 0xfff0000
ROOTS = ['release','destructor','owner-first','weak-first']
REDIRECT = {'sq_script_closure_release017':0x6a7610,'sq_script_closure_destroy017':0x6a769c,
    'fn_00299114':0x299114,'fn_00299424':0x299424,'fn_00299518':0x299518,'fn_002995a4':0x2995a4,
    'fn_006a7780':0x6a7780,'fn_006a77c0':0x6a77c0,'fn_0024d9cc':0x24d9cc,'fn_0024d9e0':0x24d9e0,'fn_0068f564':0x68f564}
SPANS = [(0x6a7610,0x6a7638),(0x6a769c,0x6a7774),(0x77f3f8,0x77f478),(0x24d73c,0x24d76c),
    (0x299114,0x29936c),(0x299424,0x2994a0),(0x299518,0x299540),(0x2995a4,0x299698),
    (0x6a7780,0x6a77c0),(0x6a77c0,0x6a77ec),(0x24d9cc,0x24da70),(0x68f564,0x68f590),(0x233bd8,0x233c04)]
DATA = [(0x6a7774,0x6a7780),(0x8516d0,0x8516dc),(0x2994a0,0x2994a4),(0x81e52c,0x81e538),
    (0x299698,0x2996a4),(0x81e540,0x81e54c),(0x6a77ec,0x6a77f4),(0x8516ec,0x8516f8),
    (0x68f590,0x68f598),(0x851220,0x85122c),(0x233c04,0x233c0c)]



def machine(sections, original=False):
    cpu = Uc(UC_ARCH_ARM, UC_MODE_ARM)
    pages = set()
    if original:
        image = original_image()
        for page in range(0x100000, (0x100000 + len(image) + 4095) & -4096, 4096):
            pages.add(page)
    for address, length, flags, data in sections:
        pages.update(range(address & -4096, (address + length + 4095) & -4096, 4096))
    ordered = sorted(pages)
    start, end = ordered[0], ordered[0] + 4096
    for page in ordered[1:]:
        if page == end:
            end += 4096
        else:
            cpu.mem_map(start, end - start)
            start, end = page, page + 4096
    cpu.mem_map(start, end - start)
    if original:
        cpu.mem_write(0x100000, image)
    for address, length, flags, data in sections:
        if data:
            cpu.mem_write(address, data)
    cpu.mem_map(RAM, 0x20000)
    cpu.mem_map(STACK, 0x20000)
    cpu.mem_map(STOP, 4096)
    cpu.reg_write(UC_ARM_REG_CPSR, 0x10)
    return cpu


class Arm:
    def __init__(self, sections, symbols, functions, original=False):
        self.sections, self.symbols, self.functions, self.original = sections, symbols, functions, original
        self.coverage = set()

    def execute(self, root, variant):
        cpu = machine(self.sections, self.original)
        self.last_fault = None
        def invalid(current, access, address, size, value, context):
            self.last_fault = {'address':address,'bytes':size,'programCounter':current.reg_read(UC_ARM_REG_PC),'access':access,'root':root,'variant':variant}
            return False
        cpu.hook_add(UC_HOOK_MEM_INVALID, invalid)
        fixture_ranges = [span for name,span in self.functions.items() if name.startswith('fixture_') or name in ['object_references','disposed','alternate_destroy','alternate_release','sq_script_closure_deallocate017','sq_prototype_deallocate011','sq_native_closure_deallocate013','sq_weak_deallocate014','sq_string_deallocate_value015','sq_string_deallocate_buckets015','memset','__aeabi_memclr4']]
        allowed = fixture_ranges + SPANS if self.original else list(self.functions.values())
        active, returned, disposed = '', False, set()
        redirect = {self.symbols[name]:entry for name,entry in REDIRECT.items()}
        def instruction(current, address, size, context):
            nonlocal returned, disposed
            if address == STOP:
                returned = True
                current.emu_stop()
                return
            if self.original and address in redirect:
                current.reg_write(UC_ARM_REG_PC,redirect[address]);return
            if self.original and address == 0x2fece8:
                raise ValueError('Lifetime-only017 unexpectedly reached allocation')
            if self.original and address == 0x19d680:
                pointer=current.reg_read(UC_ARM_REG_R0)
                if RAM+0x1000<=pointer<RAM+0x2000 or RAM+0xa000<=pointer<RAM+0xb800:service='sq_script_closure_deallocate017'
                elif pointer in [RAM+0x3000,RAM+0x4000,RAM+0x5000]:service='sq_prototype_deallocate011'
                elif RAM+0x7000<=pointer<RAM+0x7800 or RAM+0xb800<=pointer<RAM+0xba00:service='sq_native_closure_deallocate013'
                elif RAM+0x9000<=pointer<RAM+0xa000:service='sq_string_deallocate_value015'
                elif RAM+0xe000<=pointer<RAM+0xe600:service='sq_weak_deallocate014'
                else:raise ValueError('Unmeasured lifetime disposal pointer: '+hex(pointer))
                current.reg_write(UC_ARM_REG_PC,self.symbols[service]);return
            if address in [self.symbols['sq_script_closure_deallocate017'],self.symbols['sq_prototype_deallocate011'],self.symbols['sq_native_closure_deallocate013'],self.symbols['sq_string_deallocate_value015']]:
                pointer=current.reg_read(UC_ARM_REG_R0)
                if pointer in [RAM+0x1000,RAM+0x1400,RAM+0x1800,RAM+0x3000,RAM+0x4000,RAM+0x5000,RAM+0x7000,RAM+0x7400,RAM+0x9000,RAM+0x9400,RAM+0x9800,RAM+0x9c00]:disposed.add(pointer)
            if self.original and address==0x146590:raise ValueError('String membership escaped017 lifetime domain')
            if not any(start <= address < end for start, end in allowed):
                raise ValueError('Release execution escaped its closed family/declared C services: ' + hex(address))
            if active == 'root':
                self.coverage.add(address)
        weak_ranges=SPANS[8:10] if self.original else [self.functions[name] for name in ['fn_006a7780','fn_006a77c0']]
        core_ranges=SPANS[:2]+[SPANS[2]] if self.original else [span for name,span in self.functions.items() if name in ['sq_script_closure_release017','sq_script_closure_destroy017','destroy_values']]
        def prefix_extent(current,address,size):
            pc=current.reg_read(UC_ARM_REG_PC)
            if any(start<=pc<end for start,end in core_ranges):
                for target in [RAM+0x3000,RAM+0x4000,RAM+0x5000]:
                    if target<=address<target+0x800 and address+size>target+12:
                        raise ValueError('017 generic ownership accessed beyond actual compact-prototype12-byte prefix')
            if any(start<=pc<end for start,end in weak_ranges):
                for target in disposed:
                    if target<=address<target+0x100:raise ValueError('Weak API read logically disposed017 graph owner')
        def write(current, access, address, size, value, context):
            prefix_extent(current,address, size)
            heap = RAM <= address and address + size <= RAM + 0x20000
            stack = STACK <= address and address + size <= STACK + 0x20000
            data = any(flags & 1 and start <= address and address + size <= start + length for start, length, flags, blob in self.sections)
            if not (heap or stack or data):
                raise ValueError('Weak lifetime wrote outside foreign heap/stack/fixture state: '+hex(address))
        def read(current, access, address, size, value, context):
            prefix_extent(current,address, size)
            heap = RAM <= address and address + size <= RAM + 0x20000
            stack = STACK <= address and address + size <= STACK + 0x20000
            source_data = any(start <= address and address + size <= start + length for start, length, flags, blob in self.sections)
            original_data = self.original and any(start <= address and address + size <= end for start, end in DATA)
            if not (heap or stack or source_data or original_data):
                raise ValueError('Release read outside declared heap/stack/literals/vtables')
        def invoke(entry, args, label):
            nonlocal active, returned
            active, returned = label, False
            sp = STACK + 0x10000
            cpu.reg_write(UC_ARM_REG_SP, sp)
            cpu.reg_write(UC_ARM_REG_LR, STOP)
            for index in range(8):
                cpu.reg_write(UC_ARM_REG_R4 + index, 0x51000000 + index * 163)
            for index, value in enumerate(args):
                if index < 4:
                    cpu.reg_write(UC_ARM_REG_R0 + index, value)
                else:
                    cpu.mem_write(sp + (index - 4) * 4, struct.pack('<I', value))
            code_hook = cpu.hook_add(UC_HOOK_CODE, instruction, begin=1 if label == 'root' else STOP,
                end=0 if label == 'root' else STOP)
            write_hook = cpu.hook_add(UC_HOOK_MEM_WRITE, write) if label == 'root' else None
            read_hook = cpu.hook_add(UC_HOOK_MEM_READ, read) if label == 'root' else None
            try:
                cpu.emu_start(entry, STOP + 4, count=200000 if label == 'root' else 2000000)
            finally:
                cpu.hook_del(code_hook)
                if write_hook is not None:
                    cpu.hook_del(write_hook)
                if read_hook is not None:
                    cpu.hook_del(read_hook)
            if not returned or cpu.reg_read(UC_ARM_REG_SP) != sp or any(cpu.reg_read(UC_ARM_REG_R4 + index) != 0x51000000 + index * 163 for index in range(8)):
                raise ValueError('Release/fixture call did not return with preserved ABI')
            return cpu.reg_read(UC_ARM_REG_R0)
        tables=[0x8516d0,0x81e52c,0x81e540,0x8516ec,0x851220,0x81d020] if self.original else [self.symbols[name] for name in ['sq_script_closure_vtable017','sq_prototype_vtable011','sq_native_closure_vtable013','sq_weak_vtable014','sq_string_vtable015','sq_prototype_base_vtable011']]
        if invoke(self.symbols['fixture_bind'],[RAM,0x10000,*tables],'prepare')!=1:
            raise ValueError('017 exact-prefix fixture bind failed')
        invoke(self.symbols['fixture_prepare'],[variant,ROOTS.index(root)],'prepare')
        if invoke(self.symbols['fixture_execute'],[],'root')!=1:raise ValueError('017 lifetime ABI did not return')
        amount = invoke(self.symbols['fixture_snapshot'], [RAM + 0x10000, 8192], 'snapshot')
        if not 0 < amount <= 8192:
            raise ValueError('Release observation extent is invalid')
        words = list(struct.unpack('<' + 'I' * amount, cpu.mem_read(RAM + 0x10000, amount * 4)))
        raw = bytearray(cpu.mem_read(RAM, 0x10000))
        for offset in range(0, len(raw), 4):
            value = struct.unpack_from('<I', raw, offset)[0]
            for index,table in enumerate(tables):
                if value==table:struct.pack_into('<I',raw,offset,0xf0000001+index)
        return words, bytes(raw)


class Windows:
    def __init__(self,path):
        self.module=ctypes.CDLL(str(path))
        self.module.fixture_bind.argtypes=[ctypes.c_void_p,ctypes.c_uint32]+[ctypes.c_void_p]*6
        self.module.fixture_bind.restype=ctypes.c_uint32
        for name in ['fixture_prepare','fixture_execute','fixture_layout']:
            getattr(self.module,name).argtypes=[ctypes.c_uint32] if name=='fixture_layout' else [ctypes.c_uint32]*2 if name=='fixture_prepare' else []
            getattr(self.module,name).restype=ctypes.c_uint32
        self.module.fixture_snapshot.argtypes=[ctypes.POINTER(ctypes.c_uint32),ctypes.c_uint32]
        self.module.fixture_snapshot.restype=ctypes.c_uint32
        for name in ['fixture_script_vtable','fixture_prototype_vtable','fixture_native_vtable','fixture_weak_vtable','fixture_string_vtable','fixture_base_vtable']:
            getattr(self.module,name).restype=ctypes.c_void_p
        self.layout=[self.module.fixture_layout(index) for index in range(7)]
        self.kernel=ctypes.WinDLL('kernel32',use_last_error=True)
        self.kernel.VirtualAlloc.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32,ctypes.c_uint32]
        self.kernel.VirtualAlloc.restype=ctypes.c_void_p
        self.kernel.VirtualFree.argtypes=[ctypes.c_void_p,ctypes.c_size_t,ctypes.c_uint32]

    def execute(self,root,variant):
        base=self.kernel.VirtualAlloc(None,0x20000,0x3000,4)
        if not base:raise OSError('Native foreign weak allocation failed')
        try:
            if self.module.fixture_bind(base,0x10000,self.module.fixture_script_vtable(),self.module.fixture_prototype_vtable(),self.module.fixture_native_vtable(),self.module.fixture_weak_vtable(),self.module.fixture_string_vtable(),self.module.fixture_base_vtable())!=1:
                raise ValueError('Native exact typed weak fixture bind failed')
            self.module.fixture_prepare(variant,ROOTS.index(root))
            if self.module.fixture_execute()!=1:raise ValueError('Native lifecycle did not return')
            output=(ctypes.c_uint32*8192)()
            count=self.module.fixture_snapshot(output,8192)
            return list(output[:count])
        finally:self.kernel.VirtualFree(base,0,0x8000)
