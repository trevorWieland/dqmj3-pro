import ctypes
import hashlib
import struct
import unicorn
from unicorn import arm_const as arm, arm64_const as a64
from native_state055_build import load
from native_state055_reference import ARENA, ARENA_BYTES, STACK, STOP, expected


def initial_bytes():
    return b''.join(struct.pack('<I', (0x125a34d7+index*0x9e3779b9)&0xffffffff) for index in range(ARENA_BYTES//4))


def pointer(value, base):
    return base+value-ARENA if value else 0


def check(case, arena, cursor, limit, returned, base, strict=True):
    model, original_cursor = expected(case, initial_bytes())
    expected_cursor = pointer(original_cursor, base)
    expected_limit = pointer(case['limit'], base)
    passed = arena == bytes(model) and cursor == expected_cursor and limit == expected_limit and returned == case['base']
    if strict:
        assert passed
    return dict(returned=returned, dataArenaSha256=hashlib.sha256(arena).hexdigest(),
                cursorOffset=cursor-base if cursor else None, limitOffset=limit-base if limit else None, independentModelPassed=passed,
                actualFunctionReturned=True)


def machine_execute(path, case, wide=False, strict=True):
    segments, symbols, functions = load(path)
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM64 if wide else unicorn.UC_ARCH_ARM,
                     unicorn.UC_MODE_ARM if not wide else unicorn.UC_MODE_LITTLE_ENDIAN)
    pages = set()
    for address, size, flags, data in segments:
        pages.update(range(address&-4096, (address+size+4095)&-4096, 4096))
    for page in sorted(pages):
        cpu.mem_map(page, 4096)
    for address, size, flags, data in segments:
        if data:
            cpu.mem_write(address, data)
    base = 0x110000000 if wide else ARENA
    cpu.mem_map(base, ARENA_BYTES)
    cpu.mem_write(base, initial_bytes())
    cpu.mem_map(STACK, 0x10000)
    cpu.mem_map(STOP, 4096)
    pair = [pointer(case[name], base) for name in ['output', 'limit']]
    cpu.mem_write(symbols['state_pair055'], struct.pack('<QQ' if wide else '<II', *pair))
    sp = STACK+0xc000
    if wide:
        cpu.reg_write(a64.UC_ARM64_REG_SP, sp)
        cpu.reg_write(a64.UC_ARM64_REG_X30, STOP)
        saved = [(getattr(a64, 'UC_ARM64_REG_X'+str(19+index)), 0x5100000000000000+index*163) for index in range(11)]
        saved += [(a64.UC_ARM64_REG_D8+index, 0x3ff0000000000000+index*131) for index in range(8)]
        arguments = [a64.UC_ARM64_REG_X0, a64.UC_ARM64_REG_X1, a64.UC_ARM64_REG_X2]
    else:
        cpu.reg_write(arm.UC_ARM_REG_CPSR, 0x10)
        cpu.reg_write(arm.UC_ARM_REG_C1_C0_2, 0xf << 20)
        cpu.reg_write(arm.UC_ARM_REG_FPEXC, 0x40000000)
        cpu.reg_write(arm.UC_ARM_REG_SP, sp)
        cpu.reg_write(arm.UC_ARM_REG_LR, STOP)
        saved = [(arm.UC_ARM_REG_R4+index, 0x51000000+index*163) for index in range(8)]
        saved += [(arm.UC_ARM_REG_D8+index, 0x3ff0000000000000+index*131) for index in range(8)]
        arguments = [arm.UC_ARM_REG_R0, arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2]
    for register, value in saved:
        cpu.reg_write(register, value)
    for register, value in zip(arguments, [case['base'], case['count'], pointer(case['source'], base)]):
        cpu.reg_write(register, value)
    observed = set()
    def code(machine, address, size, unused):
        if not any(start <= address < end for start, end in functions):
            raise ValueError('055 source-only execution escaped compiled function ranges')
        observed.add(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE, code)
    cpu.emu_start(symbols['state_write055'], STOP, count=100000)
    pc_register = a64.UC_ARM64_REG_PC if wide else arm.UC_ARM_REG_PC
    sp_register = a64.UC_ARM64_REG_SP if wide else arm.UC_ARM_REG_SP
    assert cpu.reg_read(pc_register) == STOP and cpu.reg_read(sp_register) == sp
    assert all(cpu.reg_read(register) == value for register, value in saved)
    pair = struct.unpack('<QQ' if wide else '<II', bytes(cpu.mem_read(symbols['state_pair055'], 16 if wide else 8)))
    returned = cpu.reg_read(arguments[0]) & 0xffffffff
    result = check(case, bytes(cpu.mem_read(base, ARENA_BYTES)), *pair, returned, base, strict)
    result.update(sourceOnlyInstructionPcs=sorted(observed), savedIntegerFpSpPreserved=True,
                  arenaAddress=base, pointersAbove4GiB=base>0xffffffff)
    return result


class Windows:
    class Pair(ctypes.Structure):
        _fields_ = [('cursor', ctypes.c_void_p), ('limit', ctypes.c_void_p)]

    def __init__(self, path):
        self.library = ctypes.CDLL(str(path))
        self.function = self.library.state_write055
        self.function.argtypes = [ctypes.c_uint32, ctypes.c_uint32, ctypes.POINTER(ctypes.c_uint32)]
        self.function.restype = ctypes.c_uint32
        self.pair = self.Pair.in_dll(self.library, 'state_pair055')
        self.kernel = ctypes.WinDLL('kernel32', use_last_error=True)
        self.kernel.VirtualAlloc.argtypes = [ctypes.c_void_p, ctypes.c_size_t, ctypes.c_uint32, ctypes.c_uint32]
        self.kernel.VirtualAlloc.restype = ctypes.c_void_p
        self.kernel.VirtualFree.argtypes = [ctypes.c_void_p, ctypes.c_size_t, ctypes.c_uint32]
        self.base = self.kernel.VirtualAlloc(0x120000000, ARENA_BYTES, 0x3000, 4)
        assert self.base == 0x120000000

    def execute(self, case, strict=True):
        ctypes.memmove(self.base, initial_bytes(), ARENA_BYTES)
        self.pair.cursor = pointer(case['output'], self.base)
        self.pair.limit = pointer(case['limit'], self.base)
        source = ctypes.cast(pointer(case['source'], self.base), ctypes.POINTER(ctypes.c_uint32))
        returned = self.function(case['base'], case['count'], source)
        result = check(case, ctypes.string_at(self.base, ARENA_BYTES), self.pair.cursor or 0, self.pair.limit or 0, returned, self.base, strict)
        result.update(actualWindowsExecution=True, arenaAddress=self.base, pointersAbove4GiB=True,
                      actualDeclaredPairBytes=ctypes.sizeof(self.Pair))
        return result

    def close(self):
        assert self.kernel.VirtualFree(self.base, 0, 0x8000)
