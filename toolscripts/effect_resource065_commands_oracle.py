import ctypes
import struct

from unicorn import arm_const as ar, arm64_const as aa

from effect_resource065_vertex_oracle import Machine as VertexMachine
from effect_resource065_vertex_oracle import Native as VertexNative


class Native(VertexNative):
    def __init__(self, dll):
        super().__init__(dll)
        self.output = (ctypes.c_ubyte * 640)()
        self.descriptor = (ctypes.c_ubyte * 12)()
        self.output_address = ctypes.addressof(self.output) + 64
        self.library.effect_bind_command_base065.argtypes = [ctypes.c_uint]
        self.library.effect_bind_command_base065.restype = None
        self.library.fn_001830e0.argtypes = [ctypes.c_void_p, ctypes.c_void_p]
        self.library.fn_001830e0.restype = ctypes.c_void_p
        self.library.fn_006cf79c.argtypes = [ctypes.c_void_p, ctypes.c_void_p, ctypes.c_void_p]
        self.library.fn_006cf79c.restype = ctypes.c_void_p

    def commands(self, raw, base_units, pattern, descriptor=None):
        if len(raw) != 0x790:
            raise ValueError('Command input must be the full measured vertex view')
        ctypes.memset(ctypes.addressof(self.object), 0xc7, ctypes.sizeof(self.object))
        ctypes.memmove(self.address, raw, len(raw))
        ctypes.memset(ctypes.addressof(self.output), pattern, ctypes.sizeof(self.output))
        self.library.effect_bind_command_base065(base_units)
        self.returned = False
        if descriptor is None:
            result = self.library.fn_001830e0(self.address, self.output_address)
        else:
            if len(descriptor) != 12:
                raise ValueError('Index words must occupy exactly twelve bytes')
            ctypes.memmove(ctypes.addressof(self.descriptor), descriptor, 12)
            result = self.library.fn_006cf79c(self.address, self.output_address, ctypes.addressof(self.descriptor))
        self.returned = True
        if not self.output_address <= result <= self.output_address + 512 or (result - self.output_address) % 4:
            raise ValueError('Native command caller-consumed output end differs')
        output = bytes(self.output)
        if output[:64] != bytes([pattern]) * 64 or output[576:] != bytes([pattern]) * 64:
            raise ValueError('Native commands changed caller output guards')
        if bytes(self.object) != bytes([0xc7]) * 64 + raw + bytes([0xc7]) * 64:
            raise ValueError('Native commands changed immutable source input or outer guards')
        if descriptor is not None and bytes(self.descriptor) != descriptor:
            raise ValueError('Native commands changed immutable index descriptor')
        return {'words': (result - self.output_address) // 4, 'completeOutputHex': output[64:576].hex()}


class Machine(VertexMachine):
    def __init__(self, profile, elf=None):
        super().__init__(profile, elf)
        if self.original:
            self.functions.update(fn_001830e0=0x1830e0, fn_006cf79c=0x6cf79c)
        self.output_address = self.base + 0x8000
        self.index_descriptor = self.base + 0x6000
        self.command_phase = False

    def write(self, cpu, access, address, size, value, user):
        if self.active and self.command_phase:
            if not (self.output_address <= address < address + size <= self.output_address + 512 or
                    self.stack <= address < address + size <= self.stack + 0x10000):
                raise ValueError('Commands changed immutable input/global/outer caller storage')
        else:
            super().write(cpu, access, address, size, value, user)

    def read(self, cpu, access, address, size, value, user):
        if self.active and self.command_phase and (self.output_address <= address < address + size <= self.output_address + 512 or
                self.index_descriptor <= address < address + size <= self.index_descriptor + 12):
            return
        super().read(cpu, access, address, size, value, user)

    def invoke(self, name, args):
        if self.a64:
            reg = lambda index: getattr(aa, 'UC_ARM64_REG_X' + str(index))
            saved = [(reg(index), 0x6500000000000000 + index) for index in range(19, 30)]
            floating = [(getattr(aa, 'UC_ARM64_REG_D' + str(index)), 0x3fe0000000000000 + index) for index in range(8, 16)]
            sp, lr = aa.UC_ARM64_REG_SP, aa.UC_ARM64_REG_LR
        else:
            self.cpu.reg_write(ar.UC_ARM_REG_CPSR, 0x1f)
            reg = lambda index: getattr(ar, 'UC_ARM_REG_R' + str(index))
            saved = [(reg(index), 0x65000000 + index) for index in range(4, 12)]
            floating = [(getattr(ar, 'UC_ARM_REG_D' + str(index)), 0x3fe0000000000000 + index) for index in range(8, 16)]
            sp, lr = ar.UC_ARM_REG_SP, ar.UC_ARM_REG_LR
        for register, value in saved + floating:
            self.cpu.reg_write(register, value)
        for slot, value in enumerate(args):
            self.cpu.reg_write(reg(slot), value)
        self.cpu.reg_write(sp, self.stack + 0xfff0)
        self.cpu.reg_write(lr, self.stop)
        self.returned = False
        self.cpu.emu_start(self.functions[name], self.stop + 4, count=200000)
        if not self.returned or self.cpu.reg_read(sp) != self.stack + 0xfff0 or any(self.cpu.reg_read(register) != value for register, value in saved + floating):
            raise ValueError('Commands changed actual integer/float caller ABI or failed to return')
        return self.cpu.reg_read(reg(0))

    def commands(self, raw, base_units, pattern, descriptor=None):
        self.size = 0x790
        if len(raw) != self.size:
            raise ValueError('Command input must be complete')
        self.cpu.mem_write(self.base, bytes([0xc7]) * 0x1000)
        self.cpu.mem_write(self.address, raw)
        self.cpu.mem_write(self.output_address - 64, bytes([pattern]) * 640)
        if self.original:
            self.cpu.mem_write(0x8bfbd8, struct.pack('<I', base_units))
        else:
            self.active = False
            self.invoke('effect_bind_command_base065', [base_units])
        self.command_phase, self.active = True, True
        if descriptor is None:
            name, args = 'fn_001830e0', [self.address, self.output_address]
        else:
            if len(descriptor) != 12:
                raise ValueError('Index descriptor width differs')
            self.cpu.mem_write(self.index_descriptor, descriptor)
            name, args = 'fn_006cf79c', [self.address, self.output_address, self.index_descriptor]
        result = self.invoke(name, args)
        self.command_phase, self.active = False, False
        if not self.output_address <= result <= self.output_address + 512 or (result - self.output_address) % 4:
            raise ValueError('Command output end is outside actual caller-owned storage')
        output = bytes(self.cpu.mem_read(self.output_address - 64, 640))
        if output[:64] != bytes([pattern]) * 64 or output[576:] != bytes([pattern]) * 64:
            raise ValueError('Commands changed complete output guards')
        if bytes(self.cpu.mem_read(self.base, 0x790 + 128)) != bytes([0xc7]) * 64 + raw + bytes([0xc7]) * 64:
            raise ValueError('Commands changed immutable complete input or caller guards')
        if descriptor is not None and bytes(self.cpu.mem_read(self.index_descriptor, 12)) != descriptor:
            raise ValueError('Commands changed immutable complete index descriptor')
        return {'words': (result - self.output_address) // 4, 'completeOutputHex': output[64:576].hex()}
