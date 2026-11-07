import ctypes
import struct

from digest024_build import load
from digest024_oracle import Arm as CompressionArm, Android as CompressionAndroid
from digest024_oracle import RAM, SP, STOP, within
import unicorn.arm_const as arm


ENTRIES = {"init": "fn_001b24a0", "update": "fn_003019f0", "final": "fn_001b2214"}
ORIGINAL = {"init": 0x1b24a0, "update": 0x3019f0, "final": 0x1b2214}
RANGES = [(0x1b24a0, 0x1b24cc), (0x3019f0, 0x301a9c), (0x1b2214, 0x1b2498),
    (0x301a9c, 0x301b24), (0x17821c, 0x178290), (0x1b2554, 0x1b2e94), (0x1b2f94, 0x1b2fbc)]


def checked(memory, operation, context, input_offset, count, output):
    if len(memory) != 4096 or operation not in ENTRIES or type(context) is not int or context % 4 or not 0 <= context <= 4008:
        raise ValueError("Invalid MD5 caller context")
    if type(count) is not int or not 0 <= count <= 4096:
        raise ValueError("MD5 count exceeds backed caller memory")
    if operation == "update" and input_offset is not None and (type(input_offset) is not int or not 0 <= input_offset <= 4096 - count):
        raise ValueError("MD5 input pointer is outside its declared arena")
    if operation == "update" and count:
        if type(input_offset) is not int or not 0 <= input_offset <= 4096 - count:
            raise ValueError("MD5 input exceeds caller arena")
        if max(context, input_offset) < min(context + 88, input_offset + count):
            raise ValueError("Overlapping streaming input/context is outside this domain")
    if operation == "final" and (type(output) is not int or not 0 <= output <= 4080):
        raise ValueError("MD5 output exceeds caller arena")


def prepare(owner, memory, operation, context, input_offset, count, output):
    checked(memory, operation, context, input_offset, count, output)
    pointer = owner.ram + context
    owner.caller_reads = [(pointer, pointer + 88)]
    owner.mutable = [(pointer, pointer + (24 if operation == "init" else 88))]
    if operation == "update" and count:
        owner.caller_reads.append((owner.ram + input_offset, owner.ram + input_offset + count))
    if operation == "final":
        owner.mutable.append((owner.ram + output, owner.ram + output + 16))
    owner.defined.clear()
    owner.cpu.mem_write(owner.ram, bytes(memory))
    return [pointer, owner.ram + output if operation == "final" else (0 if input_offset is None else owner.ram + input_offset), count]


def unchanged(owner, before, after):
    for index, (left, right) in enumerate(zip(before, after)):
        if not any(low <= owner.ram + index < high for low, high in owner.mutable) and left != right:
            raise ValueError("MD5 changed a byte outside its declared output/context")


class Arm(CompressionArm):
    def __init__(self, elf=None):
        super().__init__(elf)
        self.ram, self.sp = RAM, SP
        self.entries = ORIGINAL if elf is None else {key: load(elf)[1][name] for key, name in ENTRIES.items()}
        if elf is None:
            self.executable = RANGES
            self.instructions = {pc for low, high in RANGES for pc in range(low, high, 4)}
            self.readonly += [(0x1b2498, 0x1b24a0), (0x1b24cc, 0x1b24d4), (0x7e196c, 0x7e19ac)]

    def write(self, cpu, access, address, size, value, unused):
        if any(within(address, size, low, high) for low, high in self.mutable):
            return
        if within(address, size, SP - 1024, SP):
            self.defined.update(range(address, address + size))
            return
        raise ValueError("MD5 write escaped caller outputs/private frame: " + hex(address))

    def execute(self, operation, memory, context=128, input_offset=512, count=0, output=3072, seed=0):
        args = prepare(self, memory, operation, context, input_offset, count, output)
        cpu = self.cpu
        cpu.mem_write(SP - 1024, bytes((i * 17 + seed) & 255 for i in range(1024)))
        cpu.reg_write(arm.UC_ARM_REG_CPSR, 0x10 | ((seed & 15) << 28))
        cpu.reg_write(arm.UC_ARM_REG_C1_C0_2, 0xf00000)
        cpu.reg_write(arm.UC_ARM_REG_FPEXC, 0x40000000)
        fpscr = [0, 0x03c00017, 0x01400008, 0x02800003][seed % 4]
        cpu.reg_write(arm.UC_ARM_REG_FPSCR, fpscr)
        saved = {arm.UC_ARM_REG_R4 + i: (0x42600000 + i * 101 + seed) & 0xffffffff for i in range(8)}
        saved.update({arm.UC_ARM_REG_D8 + i: 0x3ff0000000000000 + i * 131 + seed for i in range(8)})
        for register, value in saved.items():
            cpu.reg_write(register, value)
        for register, value in zip([arm.UC_ARM_REG_R0, arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2], args):
            cpu.reg_write(register, value)
        cpu.reg_write(arm.UC_ARM_REG_SP, SP)
        cpu.reg_write(arm.UC_ARM_REG_LR, STOP)
        cpu.emu_start(self.entries[operation], STOP, count=2000000)
        assert cpu.reg_read(arm.UC_ARM_REG_PC) == STOP and cpu.reg_read(arm.UC_ARM_REG_SP) == SP
        assert all(cpu.reg_read(register) == value for register, value in saved.items())
        assert cpu.reg_read(arm.UC_ARM_REG_FPSCR) == fpscr and cpu.reg_read(arm.UC_ARM_REG_FPEXC) == 0x40000000
        after = bytes(cpu.mem_read(RAM, 4096))
        unchanged(self, memory, after)
        self.calls += 1
        return after


class Android(CompressionAndroid):
    def __init__(self, elf):
        super().__init__(elf)
        symbols = load(elf)[1]
        self.entries = {key: symbols[name] for key, name in ENTRIES.items()}
        assert all(address > 0xffffffff for address in self.entries.values())

    def write(self, cpu, access, address, size, value, unused):
        if any(within(address, size, low, high) for low, high in self.mutable):
            return
        if within(address, size, self.sp - 1024, self.sp):
            self.defined.update(range(address, address + size))
            return
        raise ValueError("A64 MD5 write escaped caller outputs/private frame: " + hex(address))

    def execute(self, operation, memory, context=128, input_offset=512, count=0, output=3072, seed=0):
        args = prepare(self, memory, operation, context, input_offset, count, output)
        cpu, r = self.cpu, self.registers
        cpu.mem_write(self.sp - 1024, bytes((i * 17 + seed) & 255 for i in range(1024)))
        saved = {getattr(r, "UC_ARM64_REG_X" + str(i)): 0x24100000000 + i * 101 + seed for i in range(18, 30)}
        saved.update({getattr(r, "UC_ARM64_REG_D" + str(i)): 0x3ff0000000000000 + i * 131 + seed for i in range(8, 16)})
        for register, value in saved.items():
            cpu.reg_write(register, value)
        fpcr, fpsr = [0, 0x03c00000, 0x01400000, 0x02800000][seed % 4], seed % 32
        cpu.reg_write(r.UC_ARM64_REG_FPCR, fpcr)
        cpu.reg_write(r.UC_ARM64_REG_FPSR, fpsr)
        for register, value in zip([r.UC_ARM64_REG_X0, r.UC_ARM64_REG_X1, r.UC_ARM64_REG_X2], args):
            cpu.reg_write(register, value)
        cpu.reg_write(r.UC_ARM64_REG_SP, self.sp)
        cpu.reg_write(r.UC_ARM64_REG_LR, self.stop)
        cpu.emu_start(self.entries[operation], self.stop, count=2000000)
        assert cpu.reg_read(r.UC_ARM64_REG_PC) == self.stop and cpu.reg_read(r.UC_ARM64_REG_SP) == self.sp
        assert all(cpu.reg_read(register) == value for register, value in saved.items())
        assert cpu.reg_read(r.UC_ARM64_REG_FPCR) == fpcr and cpu.reg_read(r.UC_ARM64_REG_FPSR) == fpsr
        after = bytes(cpu.mem_read(self.ram, 4096))
        unchanged(self, memory, after)
        self.calls += 1
        return after


class Windows:
    def __init__(self, path):
        self.library = ctypes.CDLL(str(path))
        self.functions = {key: getattr(self.library, name) for key, name in ENTRIES.items()}
        for key, function in self.functions.items():
            function.restype = None
            function.argtypes = [ctypes.c_void_p] + ([ctypes.c_void_p, ctypes.c_uint32] if key == "update" else [ctypes.c_void_p] if key == "final" else [])
        self.calls = 0

    def execute(self, operation, memory, context=128, input_offset=512, count=0, output=3072, seed=0):
        checked(memory, operation, context, input_offset, count, output)
        data = (ctypes.c_ubyte * 4096).from_buffer_copy(memory)
        address = ctypes.addressof(data)
        assert address > 0xffffffff and (address + context) % 4 == 0
        args = [address + context]
        if operation == "update":
            args += [None if input_offset is None else address + input_offset, count]
        elif operation == "final":
            args += [address + output]
        self.functions[operation](*args)
        self.ram = address
        self.mutable = [(address + context, address + context + (24 if operation == "init" else 88))]
        if operation == "final":
            self.mutable.append((address + output, address + output + 16))
        after = bytes(data)
        unchanged(self, memory, after)
        self.calls += 1
        return after
