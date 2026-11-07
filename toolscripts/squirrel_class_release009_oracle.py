import ctypes
import struct

from unicorn import Uc, UC_ARCH_ARM, UC_HOOK_CODE, UC_MODE_ARM, UC_HOOK_MEM_WRITE, UC_HOOK_MEM_READ
from unicorn.arm_const import UC_ARM_REG_CPSR, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_R0, UC_ARM_REG_R4, UC_ARM_REG_SP
from native_wave014_oracle import original_image
from squirrel_class_release009_build import ENTRIES


RAM, STACK, STOP = 0x2000000, 0x6000000, 0xfff0000
ORIGINAL = {'release': 0x665ee0, 'destructor': 0x666144, 'finalize': 0x665f20, 'resize': 0x1a51e0}
NAMES = {'release': 'fn_00665ee0', 'destructor': 'fn_00666144', 'finalize': 'fn_00665f20', 'resize': 'fn_001a51e0'}
SPANS = [(0x665ee0, 0x665f20), (0x666144, 0x666380), (0x665f20, 0x66613c), (0x1a51e0, 0x1a5308),
    (0x202dcc, 0x202df4), (0x202e68, 0x202f70), (0x665bd4, 0x665bfc), (0x665c60, 0x665cc0),
    (0x77f3f8, 0x77f478), (0x24d73c, 0x24d76c), (0x19e864, 0x19e8c4), (0x233bd8, 0x233c04)]
DATA = [(0x66613c, 0x666144), (0x666380, 0x666384), (0x1a5308, 0x1a530c), (0x8c06e8, 0x8c06f0),
    (0x850d90, 0x850d9c), (0x233c04, 0x233c0c), (0x202f70, 0x202f7c), (0x81c358, 0x81c364),
    (0x665cc0, 0x665ccc), (0x850d74, 0x850d80)]


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
    if original:
        cpu.reg_write(UC_ARM_REG_SP, STACK + 0x18000)
        cpu.emu_start(0x6ff69c, 0x6ff6b0, count=5)
        if bytes(cpu.mem_read(0x8c06e8, 8)) != struct.pack('<II', 0x01000001, 0):
            raise ValueError('Actual original startup did not establish the null singleton')
    return cpu


class Arm:
    def __init__(self, sections, symbols, functions, original=False):
        self.sections, self.symbols, self.functions, self.original = sections, symbols, functions, original
        self.coverage = set()

    def execute(self, root, variant):
        cpu = machine(self.sections, self.original)
        fixture_ranges = [span for name, span in self.functions.items() if name.startswith('fixture_') or
            name in ['observer_release', 'alternate_destructor', 'sq_deallocate', 'sq_reallocate', 'memset', '__aeabi_memclr4']]
        allowed = fixture_ranges + SPANS if self.original else list(self.functions.values())
        active, returned = '', False
        def instruction(current, address, size, context):
            nonlocal returned
            if address == STOP:
                returned = True
                current.emu_stop()
                return
            if self.original and address in [0x19d680, 0x18388c]:
                current.reg_write(UC_ARM_REG_PC, self.symbols['sq_deallocate' if address == 0x19d680 else 'sq_reallocate'])
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
                raise ValueError('Release/fixture call did not return with preserved ABI: ' + label + '/' + hex(entry) +
                    '/pc=' + hex(cpu.reg_read(UC_ARM_REG_PC)) + '/sp=' + hex(cpu.reg_read(UC_ARM_REG_SP)))
            return cpu.reg_read(UC_ARM_REG_R0)
        array_table = 0x850d74 if self.original else self.symbols['sq_array_vtable']
        weak_table = 0x81d020 if self.original else self.symbols['sq_release007_weak_vtable']
        generator_table = 0x81c358 if self.original else self.symbols['sq_generator_vtable']
        class_table = 0x850d90 if self.original else self.symbols['sq_class_vtable']
        if invoke(self.symbols['fixture_bind'], [RAM, 0x10000, class_table, array_table, generator_table, weak_table], 'prepare') != 1:
            raise ValueError('Source foreign-heap fixture bind failed')
        pointer = invoke(self.symbols['fixture_prepare'], [variant], 'prepare')
        entry = ORIGINAL[root] if self.original else self.symbols[NAMES[root]]
        requested = invoke(self.symbols['fixture_requested'], [], 'prepare')
        args = [pointer + 32, requested, RAM + 0xc000] if root == 'resize' else [pointer]
        result = invoke(entry, args, 'root')
        if root == 'destructor' and result != args[0]:
            raise ValueError('Destructor this-return ABI differs')
        amount = invoke(self.symbols['fixture_snapshot'], [RAM + 0x10000, 4096], 'snapshot')
        if not 0 < amount <= 4096:
            raise ValueError('Release observation extent is invalid')
        words = list(struct.unpack('<' + 'I' * amount, cpu.mem_read(RAM + 0x10000, amount * 4)))
        raw = bytearray(cpu.mem_read(RAM, 0x10000))
        for offset in range(0, len(raw), 4):
            value = struct.unpack_from('<I', raw, offset)[0]
            if value == class_table:
                struct.pack_into('<I', raw, offset, 0xf0000004)
            if value == generator_table:
                struct.pack_into('<I', raw, offset, 0xf0000003)
            if value == array_table:
                struct.pack_into('<I', raw, offset, 0xf0000001)
            if value == weak_table:
                struct.pack_into('<I', raw, offset, 0xf0000002)
        return words, bytes(raw)


class Windows:
    def __init__(self, path):
        self.module = ctypes.CDLL(str(path))
        self.module.fixture_bind.argtypes = [ctypes.c_void_p, ctypes.c_uint32, ctypes.c_void_p, ctypes.c_void_p, ctypes.c_void_p, ctypes.c_void_p]
        self.module.fixture_bind.restype = ctypes.c_uint32
        self.module.fixture_prepare.argtypes = [ctypes.c_uint32]
        self.module.fixture_prepare.restype = ctypes.c_void_p
        self.module.fixture_snapshot.argtypes = [ctypes.POINTER(ctypes.c_uint32), ctypes.c_uint32]
        self.module.fixture_snapshot.restype = ctypes.c_uint32
        for name in ['fixture_class_vtable', 'fixture_array_vtable', 'fixture_generator_vtable', 'fixture_base_vtable', 'fixture_fill']:
            getattr(self.module, name).restype = ctypes.c_void_p
        self.module.fixture_layout.argtypes = [ctypes.c_uint32]
        self.module.fixture_layout.restype = ctypes.c_uint32
        self.layout = [self.module.fixture_layout(index) for index in range(8)]
        self.module.fixture_requested.restype = ctypes.c_uint32
        for name in ENTRIES:
            getattr(self.module, name).argtypes = [ctypes.c_void_p] * (2 if name == 'fn_0024d73c' else 1)
            getattr(self.module, name).restype = ctypes.c_void_p if name in ['fn_00666144', 'fn_00202e68', 'fn_00665c60', 'fn_0077f3f8', 'fn_0019e864'] else None
        self.module.fn_001a51e0.argtypes = [ctypes.c_void_p, ctypes.c_uint32, ctypes.c_void_p]
        self.kernel = ctypes.WinDLL('kernel32', use_last_error=True)
        self.kernel.VirtualAlloc.argtypes = [ctypes.c_void_p, ctypes.c_size_t, ctypes.c_uint32, ctypes.c_uint32]
        self.kernel.VirtualAlloc.restype = ctypes.c_void_p
        self.kernel.VirtualFree.argtypes = [ctypes.c_void_p, ctypes.c_size_t, ctypes.c_uint32]

    def execute(self, root, variant):
        base = self.kernel.VirtualAlloc(None, 0x20000, 0x3000, 4)
        if not base:
            raise OSError('Native foreign allocation failed')
        try:
            if self.module.fixture_bind(base, 0x10000, self.module.fixture_class_vtable(), self.module.fixture_array_vtable(), self.module.fixture_generator_vtable(), self.module.fixture_base_vtable()) != 1:
                raise ValueError('Native typed release fixture bind failed')
            pointer = self.module.fixture_prepare(variant)
            args = [pointer + self.layout[2], self.module.fixture_requested(), self.module.fixture_fill()] if root == 'resize' else [pointer]
            result = getattr(self.module, NAMES[root])(*args)
            if root == 'destructor' and result != args[0]:
                raise ValueError('Native typed this-return differs')
            output = (ctypes.c_uint32 * 4096)()
            count = self.module.fixture_snapshot(output, 4096)
            return list(output[:count])
        finally:
            self.kernel.VirtualFree(base, 0, 0x8000)
