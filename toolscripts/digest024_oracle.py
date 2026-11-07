import ctypes
import hashlib
import struct
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from elftools.elf.elffile import ELFFile

from unicorn import Uc, UC_ARCH_ARM, UC_MODE_ARM, UC_HOOK_CODE, UC_HOOK_MEM_READ, UC_HOOK_MEM_WRITE
from unicorn import UC_PROT_READ, UC_PROT_WRITE, UC_PROT_EXEC
import unicorn.arm_const as registers

from digest024_build import ROOT, load
from digest024_measure import MODULE


RAM = 0x2000000
STACK = 0x3000000
SP = STACK + 0x8000
STOP = 0x4000000
RANGES = [(0x1b2554, 0x1b2e94), (0x1b2f94, 0x1b2fbc)]


def within(address, size, low, high):
    return low <= address and address + size <= high


def checked_offsets(memory, state_offset, block_offset):
    if (len(memory) != 4096 or type(state_offset) is not int or type(block_offset) is not int
            or not 0 <= state_offset <= 4080 or state_offset % 4 or not 0 <= block_offset <= 4032):
        raise ValueError("Digest caller offsets or state alignment are outside the declared arena")


def arm_instruction_addresses(path):
    addresses = set()
    with Path(path).open("rb") as stream:
        elf = ELFFile(stream)
        symbols = list(elf.get_section_by_name(".symtab").iter_symbols())
        for index, section in enumerate(elf.iter_sections()):
            if not section["sh_flags"] & 4:
                continue
            low, high = section["sh_addr"], section["sh_addr"] + section["sh_size"]
            mappings = sorted((symbol["st_value"], symbol.name[1]) for symbol in symbols
                              if symbol["st_shndx"] == index and symbol.name.startswith(("$a", "$d", "$t")))
            if not mappings or mappings[0][0] != low:
                raise ValueError("ARM source lacks complete instruction/data mapping symbols")
            for number, (start, kind) in enumerate(mappings):
                end = mappings[number + 1][0] if number + 1 < len(mappings) else high
                if kind == "d":
                    continue
                if kind != "a" or start % 4 or end % 4:
                    raise ValueError("Unexpected Thumb or unaligned ARM source mapping")
                data = section.data()[start - low:end - low]
                decoded = list(Cs(CS_ARCH_ARM, CS_MODE_ARM).disasm(data, start))
                if sum(i.size for i in decoded) != len(data) or any(i.size != 4 for i in decoded):
                    raise ValueError("ARM source mapping does not decode completely")
                addresses.update(i.address for i in decoded)
    return addresses


class Arm:
    def __init__(self, elf=None):
        self.cpu = Uc(UC_ARCH_ARM, UC_MODE_ARM)
        self.cpu.ctl_set_cpu_model(registers.UC_CPU_ARM_11MPCORE)
        self.original = elf is None
        self.coverage = set()
        if self.original:
            image = (ROOT / "generated/update-content0/code.bin").read_bytes()
            assert hashlib.sha256(image).hexdigest() == MODULE
            size = (len(image) + 4095) & -4096
            self.cpu.mem_map(0x100000, size)
            self.cpu.mem_write(0x100000, image)
            self.cpu.mem_protect(0x100000, size, UC_PROT_READ | UC_PROT_EXEC)
            self.entry = 0x1b2554
            self.executable = RANGES
            self.instructions = {pc for low, high in RANGES for pc in range(low, high, 4)}
            self.readonly = [(0x1b2e94, 0x1b2f94), (0x7e1968, 0x7e1969)]
        else:
            sections, symbols = load(elf)
            self.entry = symbols["fn_001b2554"]
            self.instructions = arm_instruction_addresses(elf)
            pages = set()
            for address, size, flags, data in sections:
                for page in range(address & -4096, (address + size + 4095) & -4096, 4096):
                    if page not in pages:
                        self.cpu.mem_map(page, 4096)
                        pages.add(page)
                if data:
                    self.cpu.mem_write(address, data)
            for page in pages:
                self.cpu.mem_protect(page, 4096, UC_PROT_READ | UC_PROT_EXEC)
            self.executable = [(a, a + n) for a, n, f, d in sections if f & 4]
            self.readonly = [(a, a + n) for a, n, f, d in sections]
        self.cpu.mem_map(RAM, 4096, UC_PROT_READ | UC_PROT_WRITE)
        self.cpu.mem_map(STACK, 0x10000, UC_PROT_READ | UC_PROT_WRITE)
        self.cpu.hook_add(UC_HOOK_CODE, self.code)
        self.cpu.hook_add(UC_HOOK_MEM_READ, self.read)
        self.cpu.hook_add(UC_HOOK_MEM_WRITE, self.write)
        self.defined = set()
        self.caller_reads = []
        self.calls = 0

    def code(self, cpu, address, size, unused):
        if size != 4 or address % 4 or cpu.reg_read(registers.UC_ARM_REG_CPSR) & 0x20 or address not in self.instructions:
            raise ValueError("Digest execution is not a decoded four-byte ARM instruction")
        if not any(within(address, size, low, high) for low, high in self.executable):
            raise ValueError("Digest execution escaped owned instructions: " + hex(address))
        self.coverage.add(address)

    def read(self, cpu, access, address, size, value, unused):
        if any(within(address, size, low, high) for low, high in self.caller_reads + self.readonly):
            return
        if within(address, size, SP - 1024, SP) and all(p in self.defined for p in range(address, address + size)):
            return
        raise ValueError("Digest read escaped declared or initialized bytes: " + hex(address))

    def write(self, cpu, access, address, size, value, unused):
        if within(address, size, self.state, self.state + 16):
            return
        if within(address, size, SP - 1024, SP):
            self.defined.update(range(address, address + size))
            return
        raise ValueError("Digest write escaped state/private frame: " + hex(address))

    def execute(self, memory, state_offset, block_offset, seed=0):
        checked_offsets(memory, state_offset, block_offset)
        self.state = RAM + state_offset
        block = RAM + block_offset
        self.caller_reads = [(self.state, self.state + 16), (block, block + 64)]
        self.defined.clear()
        cpu = self.cpu
        cpu.mem_write(RAM, bytes(memory))
        cpu.mem_write(SP - 1024, bytes((p * 17 + seed) & 255 for p in range(1024)))
        cpu.reg_write(registers.UC_ARM_REG_CPSR, 0x10 | ((seed & 15) << 28))
        cpu.reg_write(registers.UC_ARM_REG_C1_C0_2, 0xf00000)
        cpu.reg_write(registers.UC_ARM_REG_FPEXC, 0x40000000)
        fpscr = [0, 0x03c00017, 0x01400008, 0x02800003][seed % 4]
        cpu.reg_write(registers.UC_ARM_REG_FPSCR, fpscr)
        for index in range(8):
            cpu.reg_write(registers.UC_ARM_REG_R4 + index, (0x42600000 + index * 101 + seed) & 0xffffffff)
            cpu.reg_write(registers.UC_ARM_REG_D8 + index, 0x3ff0000000000000 + index * 131 + seed)
        cpu.reg_write(registers.UC_ARM_REG_R0, self.state)
        cpu.reg_write(registers.UC_ARM_REG_R1, block)
        cpu.reg_write(registers.UC_ARM_REG_SP, SP)
        cpu.reg_write(registers.UC_ARM_REG_LR, STOP)
        cpu.emu_start(self.entry, STOP, count=100000)
        assert cpu.reg_read(registers.UC_ARM_REG_PC) == STOP and cpu.reg_read(registers.UC_ARM_REG_SP) == SP
        for index in range(8):
            assert cpu.reg_read(registers.UC_ARM_REG_R4 + index) == (0x42600000 + index * 101 + seed) & 0xffffffff
            assert cpu.reg_read(registers.UC_ARM_REG_D8 + index) == 0x3ff0000000000000 + index * 131 + seed
        assert cpu.reg_read(registers.UC_ARM_REG_FPSCR) == fpscr
        assert cpu.reg_read(registers.UC_ARM_REG_FPEXC) == 0x40000000
        after = bytes(cpu.mem_read(RAM, 4096))
        assert after[:state_offset] == memory[:state_offset] and after[state_offset + 16:] == memory[state_offset + 16:]
        self.calls += 1
        return after


class Windows:
    def __init__(self, path):
        self.library = ctypes.CDLL(str(path))
        self.function = self.library.fn_001b2554
        self.function.argtypes = [ctypes.POINTER(ctypes.c_uint32), ctypes.POINTER(ctypes.c_ubyte)]
        self.function.restype = None
        self.calls = 0

    def execute(self, memory, state_offset, block_offset):
        checked_offsets(memory, state_offset, block_offset)
        data = (ctypes.c_ubyte * 4096).from_buffer_copy(memory)
        address = ctypes.addressof(data)
        if address <= 0xffffffff or (address + state_offset) % 4:
            raise ValueError("Native digest state address lacks declared width/alignment")
        self.function(ctypes.cast(address + state_offset, ctypes.POINTER(ctypes.c_uint32)),
                      ctypes.cast(address + block_offset, ctypes.POINTER(ctypes.c_ubyte)))
        result = bytes(data)
        assert result[:state_offset] == memory[:state_offset] and result[state_offset + 16:] == memory[state_offset + 16:]
        self.calls += 1
        return result


class Android:
    def __init__(self, elf):
        from unicorn import UC_ARCH_ARM64
        import unicorn.arm64_const as arm64
        self.registers = arm64
        self.cpu = Uc(UC_ARCH_ARM64, UC_MODE_ARM)
        self.cpu.ctl_set_cpu_model(arm64.UC_CPU_ARM64_A72)
        self.ram, self.stack, self.stop = 0x120000000, 0x130000000, 0x140000000
        self.sp = self.stack + 0x8000
        sections, symbols = load(elf)
        self.entry = symbols["fn_001b2554"]
        assert self.entry > 0xffffffff
        pages = set()
        for address, size, flags, data in sections:
            for page in range(address & -4096, (address + size + 4095) & -4096, 4096):
                if page not in pages:
                    self.cpu.mem_map(page, 4096)
                    pages.add(page)
            if data:
                self.cpu.mem_write(address, data)
        for page in pages:
            self.cpu.mem_protect(page, 4096, UC_PROT_READ | UC_PROT_EXEC)
        self.executable = [(a, a + n) for a, n, f, d in sections if f & 4]
        self.readonly = [(a, a + n) for a, n, f, d in sections]
        self.cpu.mem_map(self.ram, 4096, UC_PROT_READ | UC_PROT_WRITE)
        self.cpu.mem_map(self.stack, 0x10000, UC_PROT_READ | UC_PROT_WRITE)
        self.cpu.reg_write(arm64.UC_ARM64_REG_CPACR_EL1, 3 << 20)
        self.cpu.hook_add(UC_HOOK_CODE, self.code)
        self.cpu.hook_add(UC_HOOK_MEM_READ, self.read)
        self.cpu.hook_add(UC_HOOK_MEM_WRITE, self.write)
        self.coverage, self.defined = set(), set()
        self.caller_reads = []
        self.calls = 0

    def code(self, cpu, address, size, unused):
        if size != 4 or address % 4:
            raise ValueError("Digest execution is not a four-byte AArch64 instruction")
        if not any(within(address, size, low, high) for low, high in self.executable):
            raise ValueError("A64 digest escaped owned instructions: " + hex(address))
        self.coverage.add(address)

    def read(self, cpu, access, address, size, value, unused):
        if any(within(address, size, low, high) for low, high in self.caller_reads + self.readonly):
            return
        if within(address, size, self.sp - 1024, self.sp) and all(p in self.defined for p in range(address, address + size)):
            return
        raise ValueError("A64 digest read escaped declared/initialized bytes: " + hex(address))

    def write(self, cpu, access, address, size, value, unused):
        if within(address, size, self.state, self.state + 16):
            return
        if within(address, size, self.sp - 1024, self.sp):
            self.defined.update(range(address, address + size))
            return
        raise ValueError("A64 digest write escaped state/private frame: " + hex(address))

    def execute(self, memory, state_offset, block_offset, seed=0):
        checked_offsets(memory, state_offset, block_offset)
        self.state = self.ram + state_offset
        block = self.ram + block_offset
        self.caller_reads = [(self.state, self.state + 16), (block, block + 64)]
        self.defined.clear()
        cpu, r = self.cpu, self.registers
        cpu.mem_write(self.ram, bytes(memory))
        cpu.mem_write(self.sp - 1024, bytes((p * 17 + seed) & 255 for p in range(1024)))
        general = {getattr(r, "UC_ARM64_REG_X" + str(i)): 0x24100000000 + i * 101 + seed for i in range(18, 30)}
        floating = {getattr(r, "UC_ARM64_REG_D" + str(i)): 0x3ff0000000000000 + i * 131 + seed for i in range(8, 16)}
        for register, value in {**general, **floating}.items():
            cpu.reg_write(register, value)
        fpcr, fpsr = [0, 0x03c00000, 0x01400000, 0x02800000][seed % 4], seed % 32
        cpu.reg_write(r.UC_ARM64_REG_FPCR, fpcr)
        cpu.reg_write(r.UC_ARM64_REG_FPSR, fpsr)
        cpu.reg_write(r.UC_ARM64_REG_X0, self.state)
        cpu.reg_write(r.UC_ARM64_REG_X1, block)
        cpu.reg_write(r.UC_ARM64_REG_SP, self.sp)
        cpu.reg_write(r.UC_ARM64_REG_LR, self.stop)
        cpu.emu_start(self.entry, self.stop, count=100000)
        assert cpu.reg_read(r.UC_ARM64_REG_PC) == self.stop and cpu.reg_read(r.UC_ARM64_REG_SP) == self.sp
        assert all(cpu.reg_read(register) == value for register, value in {**general, **floating}.items())
        assert cpu.reg_read(r.UC_ARM64_REG_FPCR) == fpcr and cpu.reg_read(r.UC_ARM64_REG_FPSR) == fpsr
        after = bytes(cpu.mem_read(self.ram, 4096))
        assert after[:state_offset] == memory[:state_offset] and after[state_offset + 16:] == memory[state_offset + 16:]
        self.calls += 1
        return after
