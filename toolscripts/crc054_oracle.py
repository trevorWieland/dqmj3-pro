import ctypes
import hashlib
import random

from unicorn import (Uc, UC_ARCH_ARM, UC_ARCH_ARM64, UC_MODE_ARM, UC_HOOK_CODE,
                     UC_HOOK_MEM_READ, UC_HOOK_MEM_WRITE, UC_PROT_READ, UC_PROT_WRITE, UC_PROT_EXEC)
from unicorn import arm_const as arm
from unicorn import arm64_const as a64

from crc054_build import ROOT, load, SYMBOLS
from crc054_measure import FUNCTIONS, MODULE_SHA, measure
from digest024_oracle import arm_instruction_addresses


RAM_BYTES = 0x10000


def contains(address, size, bounds):
    return any(start <= address and address + size <= end for start, end in bounds)


class Machine:
    def __init__(self, target='arm', artifact=None):
        self.target, self.original = target, artifact is None
        self.cpu = Uc(UC_ARCH_ARM64 if target == 'a64' else UC_ARCH_ARM, UC_MODE_ARM)
        if target == 'arm':
            self.cpu.ctl_set_cpu_model(arm.UC_CPU_ARM_11MPCORE)
        self.ram = 0x102000000 if target == 'a64' else 0x2000000
        self.stack = 0x106000000 if target == 'a64' else 0x3000000
        self.stop = 0x10fff0000 if target == 'a64' else 0x4000000
        self.sp = self.stack + 0x8000
        self.coverage, self.defined = set(), set()
        self.endian_reads, self.input_reads = set(), set()
        if self.original:
            if target != 'arm':
                raise ValueError('Original CRC module is ARM only')
            image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
            if hashlib.sha256(image).hexdigest() != MODULE_SHA:
                raise ValueError('CRC original module changed')
            self.cpu.mem_map(0x100000, (len(image)+4095)&-4096)
            self.cpu.mem_write(0x100000, image)
            self.cpu.mem_protect(0x100000, (len(image)+4095)&-4096, UC_PROT_READ | UC_PROT_EXEC)
            claim = measure()
            self.entries = dict(zip(SYMBOLS, FUNCTIONS))
            self.instructions = {pc for regions in FUNCTIONS.values()
                                 for start, end in regions for pc in range(start, end, 4)}
            self.readonly = [(row['address'], row['address']+row['size'])
                             for row in claim['tableDependencies']]
            self.readonly += [(pool['address'], pool['address']+4)
                              for row in claim['functions'] for pool in row['literalDependencies']]
        else:
            sections, self.entries = load(artifact)
            pages = set()
            for address, size, flags, data in sections:
                for page in range(address&-4096, (address+size+4095)&-4096, 4096):
                    if page not in pages:
                        self.cpu.mem_map(page, 4096)
                        pages.add(page)
                if data:
                    self.cpu.mem_write(address, data)
            for page in pages:
                self.cpu.mem_protect(page, 4096, UC_PROT_READ | UC_PROT_EXEC)
            self.instructions = arm_instruction_addresses(artifact) if target == 'arm' else {
                pc for address, size, flags, data in sections if flags & 4
                for pc in range(address, address+size, 4)}
            self.readonly = [(address, address+size) for address, size, flags, data in sections]
        self.cpu.mem_map(self.ram, RAM_BYTES, UC_PROT_READ | UC_PROT_WRITE)
        self.cpu.mem_map(self.stack, 0x10000, UC_PROT_READ | UC_PROT_WRITE)
        self.cpu.mem_map(self.stop, 4096)
        self.cpu.hook_add(UC_HOOK_CODE, self.code)
        self.cpu.hook_add(UC_HOOK_MEM_READ, self.read)
        self.cpu.hook_add(UC_HOOK_MEM_WRITE, self.write)

    def code(self, cpu, address, size, unused):
        if size != 4 or address not in self.instructions:
            raise ValueError('CRC execution escaped measured/source instructions: ' + hex(address))
        self.coverage.add(address)

    def read(self, cpu, access, address, size, value, unused):
        if contains(address, size, self.readonly):
            return
        if self.buffer <= address and address+size <= self.buffer+self.length and not self.null:
            self.input_reads.update(range(address-self.buffer, address-self.buffer+size))
            return
        if self.sp-1024 <= address and address+size <= self.sp:
            if not all(index in self.defined for index in range(address, address+size)):
                raise ValueError('CRC read undefined stack bytes')
            if self.original and size == 1 and cpu.reg_read(arm.UC_ARM_REG_PC) in (0x7305d0, 0x73674c):
                self.endian_reads.add(cpu.mem_read(address, 1)[0])
            return
        raise ValueError('CRC read outside exact input/table/initialized-stack bounds: ' + hex(address))

    def write(self, cpu, access, address, size, value, unused):
        if self.sp-1024 <= address and address+size <= self.sp:
            self.defined.update(range(address, address+size))
            return
        raise ValueError('CRC wrote outside its stack: ' + hex(address))

    def execute(self, symbol, seed, payload, alignment=0, null=False, null_length=0):
        if (symbol not in SYMBOLS or type(alignment) is not int or alignment not in range(4)
                or type(payload) is not bytes or len(payload) > 32768
                or type(seed) is not int or not 0 <= seed <= 0xffffffff
                or type(null) is not bool or type(null_length) is not int
                or not 0 <= null_length <= 0xffffffff):
            raise ValueError('CRC fixture input outside declared bounded corpus')
        self.buffer = self.ram+0x1000+alignment
        self.length, self.null = len(payload), null
        arena = bytearray([0xa7])*RAM_BYTES
        offset = self.buffer-self.ram
        arena[offset:offset+len(payload)] = payload
        self.cpu.mem_write(self.ram, bytes(arena))
        self.cpu.mem_write(self.stack, random.Random(0x540000+seed).randbytes(0x10000))
        self.defined.clear()
        self.input_reads.clear()
        if self.target == 'arm':
            cpu, reg = self.cpu, arm
            cpu.reg_write(reg.UC_ARM_REG_CPSR, 0x10)
            cpu.reg_write(reg.UC_ARM_REG_C1_C0_2, 0xf << 20)
            cpu.reg_write(reg.UC_ARM_REG_FPEXC, 0x40000000)
            cpu.reg_write(reg.UC_ARM_REG_FPSCR, 0x00400000)
            cpu.reg_write(reg.UC_ARM_REG_SP, self.sp)
            cpu.reg_write(reg.UC_ARM_REG_LR, self.stop)
            saved = [(getattr(reg, 'UC_ARM_REG_R'+str(i)), 0x54000000+i) for i in range(4,12)]
            saved += [(getattr(reg, 'UC_ARM_REG_D'+str(i)), 0x5400000012340000+i) for i in range(8,16)]
            for register, value in saved:
                cpu.reg_write(register, value)
            for register, value in zip((reg.UC_ARM_REG_R0, reg.UC_ARM_REG_R1, reg.UC_ARM_REG_R2),
                                       (seed, 0 if null else self.buffer, null_length if null else len(payload))):
                cpu.reg_write(register, value)
            pc, sp, result = reg.UC_ARM_REG_PC, reg.UC_ARM_REG_SP, reg.UC_ARM_REG_R0
        else:
            cpu, reg = self.cpu, a64
            saved = [(getattr(reg, 'UC_ARM64_REG_X'+str(i)), 0x5400000012340000+i) for i in range(18,30)]
            saved += [(getattr(reg, 'UC_ARM64_REG_D'+str(i)), 0x5400000012340000+i) for i in range(8,16)]
            for register, value in saved:
                cpu.reg_write(register, value)
            cpu.reg_write(reg.UC_ARM64_REG_SP, self.sp)
            cpu.reg_write(reg.UC_ARM64_REG_X30, self.stop)
            cpu.reg_write(reg.UC_ARM64_REG_FPCR, 0)
            for register, value in zip((reg.UC_ARM64_REG_X0, reg.UC_ARM64_REG_X1, reg.UC_ARM64_REG_X2),
                                       (seed, 0 if null else self.buffer, null_length if null else len(payload))):
                cpu.reg_write(register, value)
            pc, sp, result = reg.UC_ARM64_REG_PC, reg.UC_ARM64_REG_SP, reg.UC_ARM64_REG_X0
        cpu.emu_start(self.entries[symbol], self.stop, count=10000000)
        if cpu.reg_read(pc) != self.stop or cpu.reg_read(sp) != self.sp:
            raise ValueError('CRC failed to return or restore its stack')
        if any(cpu.reg_read(register) != value for register, value in saved):
            raise ValueError('CRC violated callee-saved integer/FP register ABI')
        if self.target == 'arm' and cpu.reg_read(arm.UC_ARM_REG_FPSCR) != 0x00400000:
            raise ValueError('CRC changed the initialized floating environment')
        if self.target == 'a64' and cpu.reg_read(a64.UC_ARM64_REG_FPCR) != 0:
            raise ValueError('CRC changed FPCR controls')
        if bytes(cpu.mem_read(self.ram, RAM_BYTES)) != bytes(arena):
            raise ValueError('CRC modified input/caller canaries')
        value = cpu.reg_read(result)
        if value > 0xffffffff:
            raise ValueError('CRC returned nonzero upper bits outside U32 ABI')
        return dict(result=value, returned=True, callerArenaUnchanged=True,
                    calleeSavedAbiPreserved=True, inputBytesRead=len(self.input_reads))


class Windows:
    def __init__(self, path):
        self.library = ctypes.CDLL(str(path.resolve()))
        self.functions = {}
        for symbol in SYMBOLS:
            function = getattr(self.library, symbol)
            function.argtypes = [ctypes.c_uint32, ctypes.c_void_p, ctypes.c_uint32]
            function.restype = ctypes.c_uint32
            self.functions[symbol] = function

    def execute(self, symbol, seed, payload, alignment=0, null=False, null_length=0):
        arena = ctypes.create_string_buffer(b'\xa7'*(len(payload)+16))
        address = ctypes.addressof(arena)+4+alignment
        ctypes.memmove(address, payload, len(payload))
        before = bytes(arena)
        result = self.functions[symbol](seed, None if null else address,
                                        null_length if null else len(payload))
        if bytes(arena) != before:
            raise ValueError('Windows CRC modified input/caller canaries')
        return dict(result=result, returned=True, callerArenaUnchanged=True,
                    genuineNativePointers=True, actualOperatingSystem='Windows')
