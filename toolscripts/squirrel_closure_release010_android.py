import struct

import unicorn
import unicorn.arm64_const as arm
from squirrel_closure_release010_oracle import NAMES
from platform_engine_wave005_android_model import machine


class Android:
    def __init__(self, sections, symbols):
        self.sections, self.symbols = sections, symbols
        self.calls = 0

    def execute(self, root, variant):
        cpu = machine(self.sections)
        base, stack, stop = 0x110000000, 0x130000000, 0x140000000
        cpu.mem_map(base, 0x20000, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
        cpu.mem_map(stack, 0x20000, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
        cpu.mem_map(stop, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
        def invoke(name, args):
            for index in range(18, 30):
                cpu.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(index)), 0x5800000000 + index * 167)
            for index in range(8, 16):
                cpu.reg_write(getattr(arm, 'UC_ARM64_REG_D' + str(index)), 0x3ff0000000000000 + index * 173)
            for index, value in enumerate(args):
                cpu.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(index)), value)
            cpu.reg_write(arm.UC_ARM64_REG_SP, stack + 0x10000)
            cpu.reg_write(arm.UC_ARM64_REG_X30, stop)
            cpu.emu_start(self.symbols[name], stop, count=200000 if name in NAMES.values() else 2000000)
            if cpu.reg_read(arm.UC_ARM64_REG_PC) != stop or cpu.reg_read(arm.UC_ARM64_REG_SP) != stack + 0x10000:
                raise ValueError('Android array source did not return with its stack')
            if any(cpu.reg_read(getattr(arm, 'UC_ARM64_REG_X' + str(index))) != 0x5800000000 + index * 167 for index in range(18, 30)):
                raise ValueError('Android source changed x18 or saved integer state')
            if any(cpu.reg_read(getattr(arm, 'UC_ARM64_REG_D' + str(index))) != 0x3ff0000000000000 + index * 173 for index in range(8, 16)):
                raise ValueError('Android source changed saved VFP state')
            self.calls += 1
            return cpu.reg_read(arm.UC_ARM64_REG_X0)
        if invoke('fixture_bind', [base, 0x10000, self.symbols['sq_script_closure_vtable'], self.symbols['sq_array_vtable'], self.symbols['sq_generator_vtable'], self.symbols['sq_release007_weak_vtable']]) != 1:
            raise ValueError('Android foreign-heap bind failed')
        pointer = invoke('fixture_prepare', [variant])
        args = [pointer]
        result = invoke(NAMES[root], args)
        if root == 'destructor' and result != args[0]:
            raise ValueError('Android this-return ABI differs')
        amount = invoke('fixture_snapshot', [base + 0x10000, 4096])
        if not 0 < amount <= 4096:
            raise ValueError('Android source observation extent is invalid')
        return list(struct.unpack('<' + 'I' * amount, cpu.mem_read(base + 0x10000, amount * 4)))
