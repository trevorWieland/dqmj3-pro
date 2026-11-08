import ctypes
import json

import capstone
import unicorn
from unicorn import arm_const as ar, arm64_const as aa

import native_effect065_build as common
from native_wave013_file_owner_reference_image import ReferenceImage
import native_effect065_resource_conditions as conditions


ROOT = common.ROOT
EXTRA = [(0x15d210, 12, 'ARM'), (0x15d258, 36, 'ARM'), (0x16771c, 4, 'ARM')]
SIZES = {'fn_0016771c': 1, 'fn_0015d210': 20, 'fn_0015d258': 112, 'fn_0015d21c': 112,
         'fn_0014db24': 0x790, 'fn_0015d0e0': 0x790}


class Native:
    def __init__(self, dll):
        self.library = ctypes.CDLL(str(dll))
        self.object = (ctypes.c_ubyte * (0x790 + 128))()
        self.key = (ctypes.c_ubyte * 3)()
        self.address = ctypes.addressof(self.object) + 64
        if self.address <= 0xffffffff:
            raise ValueError('Native vertex proof requires a real high-address object')
        for name in SIZES:
            method = getattr(self.library, name)
            method.restype = None
            method.argtypes = [ctypes.c_void_p] + ([ctypes.c_uint] if name == 'fn_0014db24' else
                [ctypes.c_void_p, ctypes.c_uint, ctypes.c_uint] if name == 'fn_0015d0e0' else [])

    def call(self, name, raw, index=0, format=0, buffer_word=0):
        if len(raw) != SIZES[name] or not 0 <= index < 12:
            raise ValueError('Vertex storage/index is outside the declared fixture domain')
        ctypes.memset(ctypes.addressof(self.object), 0xc7, ctypes.sizeof(self.object))
        ctypes.memmove(self.address, raw, len(raw))
        self.key[:] = [0x5a, 0xa5, index]
        arguments = [self.address]
        if name == 'fn_0014db24':
            arguments.append(index)
        elif name == 'fn_0015d0e0':
            arguments += [ctypes.addressof(self.key), buffer_word, format]
        self.returned = False
        getattr(self.library, name)(*arguments)
        self.returned = True
        all_bytes = bytes(self.object)
        if all_bytes[:64] != bytes([0xc7]) * 64 or all_bytes[64 + len(raw):] != bytes([0xc7]) * (ctypes.sizeof(self.object) - 64 - len(raw)):
            raise ValueError('Native vertex changed caller-owned outer storage')
        if bytes(self.key) != bytes([0x5a, 0xa5, index]):
            raise ValueError('Native vertex changed its immutable attribute key')
        return all_bytes[64:64 + len(raw)]


class Machine:
    def __init__(self, profile, elf=None):
        self.original, self.a64 = profile == 'original', profile == 'a64'
        self.cpu = unicorn.Uc(unicorn.UC_ARCH_ARM64 if self.a64 else unicorn.UC_ARCH_ARM,
            0 if self.a64 else unicorn.UC_MODE_ARM)
        if self.a64:
            self.cpu.reg_write(aa.UC_ARM64_REG_CPACR_EL1, 3 << 20)
        else:
            self.cpu.ctl_set_cpu_model(ar.UC_CPU_ARM_11MPCORE)
            self.cpu.reg_write(ar.UC_ARM_REG_C1_C0_2, 0xf00000)
            self.cpu.reg_write(ar.UC_ARM_REG_FPEXC, 0x40000000)
        self.base = 0x120000000 if self.a64 else 0x20000000
        self.stack = 0x130000000 if self.a64 else 0x30000000
        self.stop = 0x140000000 if self.a64 else 0x40000000
        self.cpu.mem_map(self.base, 0x10000)
        self.cpu.mem_map(self.stack, 0x10000)
        self.cpu.mem_map(self.stop, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
        self.address, self.key = self.base + 64, self.base + 0x4000
        self.extras, self.pcs, self.witnesses, self.writes = {}, set(), {}, []
        self.condition_outcomes = {}
        self.active = False
        if self.original:
            self.reference = ReferenceImage()
            self.reference.map(self.cpu)
            self.functions = {name: int(name[3:], 16) for name in SIZES}
            for start, size, mode in EXTRA:
                raw = self.reference.image[start - 0x100000:start - 0x100000 + size]
                decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
                for instruction in decoder.disasm(raw, start):
                    self.extras[instruction.address] = (instruction.size, mode)
        else:
            self.graph = common.read_elf(elf)
            self.functions = {name: row['address'] for name, row in self.graph['functions'].items()}
            pages = set()
            for segment in self.graph['segments']:
                for page in range(segment['address'] & ~4095, (segment['address'] + segment['bytes'] + 4095) & ~4095, 4096):
                    if page not in pages:
                        self.cpu.mem_map(page, 4096)
                        pages.add(page)
                self.cpu.mem_write(segment['address'], segment['fileBytes'])
        self.cpu.hook_add(unicorn.UC_HOOK_CODE, self.code)
        self.cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, self.write)
        self.cpu.hook_add(unicorn.UC_HOOK_MEM_READ, self.read)

    def code(self, cpu, address, size, user):
        if address == self.stop:
            self.returned = True
            cpu.emu_stop()
            return
        mode = 'Thumb' if not self.a64 and cpu.reg_read(ar.UC_ARM_REG_CPSR) & 32 else 'ARM'
        if self.original:
            conditions.observe(cpu, address, size, mode, self.condition_outcomes)
            if address in self.extras:
                if self.extras[address] != (size, mode):
                    raise ValueError('Vertex private candidate instruction/mode differs')
                owner = next(start for start, count, kind in EXTRA if start <= address < start + count)
            else:
                owner, instruction = self.reference.instruction(cpu, address, size)
            self.witnesses[address] = {'address': address, 'mode': mode, 'bytes': size, 'owner': owner,
                'sha256': common.hashlib.sha256(bytes(cpu.mem_read(address, size))).hexdigest()}
        elif size != 4 or mode == 'Thumb' or not any(low <= address < address + size <= high for low, high in self.graph['ownedCodeRanges']):
            raise ValueError('Vertex source executed outside exact compiled instruction ownership')
        self.pcs.add(address)

    def write(self, cpu, access, address, size, value, user):
        if self.active and not (self.address <= address < address + size <= self.address + self.size
                                or self.stack <= address < address + size <= self.stack + 0x10000):
            raise ValueError('Vertex wrote outside exact caller object/live stack')

    def read(self, cpu, access, address, size, value, user):
        if not self.active:
            return
        ranges = [(self.address, self.address + self.size), (self.key, self.key + 3), (self.stack, self.stack + 0x10000)]
        if self.original:
            ranges += [(row['address'], row['address'] + row['pages'] * 4096) for row in self.reference.layout['segments']]
        else:
            ranges += [(row['address'], row['address'] + row['bytes']) for row in self.graph['segments']]
        if not any(low <= address < address + size <= high for low, high in ranges):
            raise ValueError('Vertex read outside explicit object/key/stack/code-data ownership')

    def call(self, name, raw, index=0, format=0, buffer_word=0):
        self.size = SIZES[name]
        if len(raw) != self.size or not 0 <= index < 12:
            raise ValueError('Vertex storage/index is outside bounded fixture contract')
        self.cpu.mem_write(self.base, bytes([0xc7]) * 0x1000)
        self.cpu.mem_write(self.address, raw)
        key = bytes([0x5a, 0xa5, index])
        self.cpu.mem_write(self.key, key)
        arguments = [self.address]
        if name == 'fn_0014db24':
            arguments.append(index)
        elif name == 'fn_0015d0e0':
            arguments += [self.key, buffer_word, format]
        if self.a64:
            reg = lambda index: getattr(aa, 'UC_ARM64_REG_X' + str(index))
            saved = [(reg(index), 0x6500000000000000 + index) for index in range(19, 30)]
            sp, lr = aa.UC_ARM64_REG_SP, aa.UC_ARM64_REG_LR
            floating = [(getattr(aa, 'UC_ARM64_REG_D' + str(index)), 0x3fe0000000000000 + index) for index in range(8, 16)]
        else:
            reg = lambda index: getattr(ar, 'UC_ARM_REG_R' + str(index))
            saved = [(reg(index), 0x65000000 + index) for index in range(4, 12)]
            sp, lr = ar.UC_ARM_REG_SP, ar.UC_ARM_REG_LR
            self.cpu.reg_write(ar.UC_ARM_REG_CPSR, 0x1f)
            floating = [(getattr(ar, 'UC_ARM_REG_D' + str(index)), 0x3fe0000000000000 + index) for index in range(8, 16)]
        for register, value in saved + floating:
            self.cpu.reg_write(register, value)
        for slot, value in enumerate(arguments):
            self.cpu.reg_write(reg(slot), value)
        self.cpu.reg_write(sp, self.stack + 0xfff0)
        self.cpu.reg_write(lr, self.stop)
        self.returned, self.active = False, True
        self.cpu.emu_start(self.functions[name], self.stop + 4, count=200000)
        self.active = False
        if not self.returned or self.cpu.reg_read(sp) != self.stack + 0xfff0 or any(self.cpu.reg_read(register) != value for register, value in saved + floating):
            raise ValueError('Vertex actual caller ABI/normal-return guard differs')
        if bytes(self.cpu.mem_read(self.base, 64)) != bytes([0xc7]) * 64 or bytes(self.cpu.mem_read(self.address + self.size, 64)) != bytes([0xc7]) * 64:
            raise ValueError('Vertex machine changed complete outer caller guards')
        if bytes(self.cpu.mem_read(self.key, 3)) != key:
            raise ValueError('Vertex changed its immutable attribute key')
        return bytes(self.cpu.mem_read(self.address, self.size))
