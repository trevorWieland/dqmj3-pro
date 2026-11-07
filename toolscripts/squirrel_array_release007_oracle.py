import ctypes
import struct

from unicorn import Uc, UC_ARCH_ARM, UC_HOOK_CODE, UC_MODE_ARM, UC_HOOK_MEM_WRITE, UC_HOOK_MEM_READ
from unicorn.arm_const import UC_ARM_REG_CPSR, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_R0, UC_ARM_REG_R4, UC_ARM_REG_SP
from native_wave014_oracle import original_image
from squirrel_array_release007_build import ENTRIES


RAM, STACK, STOP = 0x2000000, 0x6000000, 0xfff0000
ORIGINAL = {'release': 0x665bd4, 'destructor': 0x665c60, 'vector': 0x77f3f8, 'unlink': 0x24d73c}
NAMES = {'release': 'fn_00665bd4', 'destructor': 'fn_00665c60', 'vector': 'fn_0077f3f8', 'unlink': 'fn_0024d73c'}
SPANS = [(0x665bd4, 0x665bfc), (0x665c60, 0x665cc0), (0x77f3f8, 0x77f478), (0x24d73c, 0x24d76c)]


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
        fixture_ranges = [span for name, span in self.functions.items() if name not in ENTRIES and name != 'array_destructor_entry']
        family_ranges = [span for name, span in self.functions.items() if name in ENTRIES or name == 'array_destructor_entry']
        allowed = fixture_ranges + (SPANS if self.original else family_ranges)
        active, returned = '', False
        def instruction(current, address, size, context):
            nonlocal returned
            if address == STOP:
                returned = True
                current.emu_stop()
                return
            if self.original and address == 0x19d680:
                current.reg_write(UC_ARM_REG_PC, self.symbols['sq_deallocate'])
                return
            if not any(start <= address < end for start, end in allowed):
                raise ValueError('Release execution escaped its closed family/declared C services: ' + hex(address))
            if active == 'root':
                self.coverage.add(address)
        def write(current, access, address, size, value, context):
            heap = RAM <= address and address + size <= RAM + 0x20000
            stack = STACK <= address and address + size <= STACK + 0x20000
            data = any(flags & 1 and start <= address and address + size <= start + length for start, length, flags, blob in self.sections)
            if not (heap or stack or data):
                raise ValueError('Release wrote outside its foreign heap/stack/fixture state')
        def read(current, access, address, size, value, context):
            heap = RAM <= address and address + size <= RAM + 0x20000
            stack = STACK <= address and address + size <= STACK + 0x20000
            source_data = any(start <= address and address + size <= start + length for start, length, flags, blob in self.sections)
            original_data = self.original and (0x665cc0 <= address and address + size <= 0x665ccc or
                0x850d74 <= address and address + size <= 0x850d80)
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
                cpu.reg_write(UC_ARM_REG_R0 + index, value)
            code_hook = cpu.hook_add(UC_HOOK_CODE, instruction, begin=1 if label == 'root' else STOP,
                end=0 if label == 'root' else STOP)
            write_hook = cpu.hook_add(UC_HOOK_MEM_WRITE, write) if label == 'root' else None
            read_hook = cpu.hook_add(UC_HOOK_MEM_READ, read) if label == 'root' else None
            try:
                cpu.emu_start(entry, STOP + 4, count=200000)
            finally:
                cpu.hook_del(code_hook)
                if write_hook is not None:
                    cpu.hook_del(write_hook)
                if read_hook is not None:
                    cpu.hook_del(read_hook)
            if not returned or cpu.reg_read(UC_ARM_REG_SP) != sp or any(cpu.reg_read(UC_ARM_REG_R4 + index) != 0x51000000 + index * 163 for index in range(8)):
                raise ValueError('Release/fixture call did not return with preserved ABI')
            return cpu.reg_read(UC_ARM_REG_R0)
        array_table = 0x850d74 if self.original else self.symbols['sq_array_vtable']
        weak_table = 0x81d020 if self.original else self.symbols['sq_release007_weak_vtable']
        if invoke(self.symbols['fixture_bind'], [RAM, 0x10000, array_table, weak_table], 'prepare') != 1:
            raise ValueError('Source foreign-heap fixture bind failed')
        pointer = invoke(self.symbols['fixture_prepare'], [variant], 'prepare')
        entry = ORIGINAL[root] if self.original else self.symbols[NAMES[root]]
        args = [pointer + 24] if root == 'vector' else [RAM + 0x4044, pointer] if root == 'unlink' else [pointer]
        result = invoke(entry, args, 'root')
        if root in ['destructor', 'vector'] and result != args[0]:
            raise ValueError('Destructor this-return ABI differs')
        amount = invoke(self.symbols['fixture_snapshot'], [RAM + 0x10000, 1280], 'snapshot')
        if not 0 < amount <= 1280:
            raise ValueError('Release observation extent is invalid')
        words = list(struct.unpack('<' + 'I' * amount, cpu.mem_read(RAM + 0x10000, amount * 4)))
        raw = bytearray(cpu.mem_read(RAM, 0x10000))
        for offset in range(0, len(raw), 4):
            value = struct.unpack_from('<I', raw, offset)[0]
            if value == array_table:
                struct.pack_into('<I', raw, offset, 0xf0000001)
            if value == weak_table:
                struct.pack_into('<I', raw, offset, 0xf0000002)
        return words, bytes(raw)


class Windows:
    def __init__(self, path):
        self.module = ctypes.CDLL(str(path))
        self.module.fixture_bind.argtypes = [ctypes.c_void_p, ctypes.c_uint32, ctypes.c_void_p, ctypes.c_void_p]
        self.module.fixture_bind.restype = ctypes.c_uint32
        self.module.fixture_prepare.argtypes = [ctypes.c_uint32]
        self.module.fixture_prepare.restype = ctypes.c_void_p
        self.module.fixture_snapshot.argtypes = [ctypes.POINTER(ctypes.c_uint32), ctypes.c_uint32]
        self.module.fixture_snapshot.restype = ctypes.c_uint32
        for name in ['fixture_array_vtable', 'fixture_weak_vtable']:
            getattr(self.module, name).restype = ctypes.c_void_p
        self.module.fixture_layout.argtypes = [ctypes.c_uint32]
        self.module.fixture_layout.restype = ctypes.c_uint32
        self.layout = [self.module.fixture_layout(index) for index in range(7)]
        for name in ENTRIES:
            getattr(self.module, name).argtypes = [ctypes.c_void_p] * (2 if name == 'fn_0024d73c' else 1)
            getattr(self.module, name).restype = ctypes.c_void_p if name in ['fn_00665c60', 'fn_0077f3f8'] else None
        self.kernel = ctypes.WinDLL('kernel32', use_last_error=True)
        self.kernel.VirtualAlloc.argtypes = [ctypes.c_void_p, ctypes.c_size_t, ctypes.c_uint32, ctypes.c_uint32]
        self.kernel.VirtualAlloc.restype = ctypes.c_void_p
        self.kernel.VirtualFree.argtypes = [ctypes.c_void_p, ctypes.c_size_t, ctypes.c_uint32]

    def execute(self, root, variant):
        base = self.kernel.VirtualAlloc(None, 0x20000, 0x3000, 4)
        if not base:
            raise OSError('Native foreign allocation failed')
        try:
            if self.module.fixture_bind(base, 0x10000, self.module.fixture_array_vtable(), self.module.fixture_weak_vtable()) != 1:
                raise ValueError('Native typed release fixture bind failed')
            pointer = self.module.fixture_prepare(variant)
            args = [pointer + self.layout[3]] if root == 'vector' else [base + 0x4000 + self.layout[4], pointer] if root == 'unlink' else [pointer]
            result = getattr(self.module, NAMES[root])(*args)
            if root in ['destructor', 'vector'] and result != args[0]:
                raise ValueError('Native typed this-return differs')
            output = (ctypes.c_uint32 * 1280)()
            count = self.module.fixture_snapshot(output, 1280)
            return list(output[:count])
        finally:
            self.kernel.VirtualFree(base, 0, 0x8000)
