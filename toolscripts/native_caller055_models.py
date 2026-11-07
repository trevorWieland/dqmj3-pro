import ctypes
import hashlib
import struct
import sys
import unicorn
from unicorn import arm_const as arm, arm64_const as a64
from native_caller055_measure import ROOT
from native_caller055_reference import ARENA, ARENA_BYTES, CONTEXT, DESCRIPTOR, STACK, STOP, initial

sys.path.insert(0, str(ROOT/'toolscripts'))
from native_state055_build import load


def pointer(address, base):
    return base+address-ARENA


def result(case, arena, cursor, limit, returned, base):
    return dict(returned=returned, actualFunctionReturned=True, dataArenaSha256=hashlib.sha256(arena).hexdigest(),
                cursorOffset=cursor-base, limitOffset=limit-base,
                cacheWords=list(struct.unpack('<31I', arena[0x1770:0x17ec])),
                actualArenaAddress=base, nativePointerTruncated=False)


def machine(path, case, wide=False):
    segments, symbols, functions = load(path)
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM64 if wide else unicorn.UC_ARCH_ARM, unicorn.UC_MODE_LITTLE_ENDIAN if wide else unicorn.UC_MODE_ARM)
    base = 0x110000000 if wide else ARENA
    pages = {STOP}
    for address, size, flags, data in segments:
        pages.update(range(address&-4096, (address+size+4095)&-4096, 4096))
    for page in sorted(pages):
        cpu.mem_map(page, 4096)
    cpu.mem_map(STACK, 0x10000)
    cpu.mem_map(base, ARENA_BYTES)
    for address, size, flags, data in segments:
        if data:
            cpu.mem_write(address, data)
    data, cursor, limit = initial(case)
    cpu.mem_write(base, data)
    cpu.mem_write(symbols['state_pair055'], struct.pack('<QQ' if wide else '<II', pointer(cursor, base), pointer(limit, base)))
    cpu.mem_write(symbols['state_context_select055'], struct.pack('<Q' if wide else '<I', pointer(CONTEXT, base)))
    cpu.mem_write(symbols['address_first055'], struct.pack('<II', 0x20000000, 0x100))
    cpu.mem_write(symbols['address_offsets055'], struct.pack('<II', 0, 0x10000000))
    cpu.mem_write(symbols['address_second055'], struct.pack('<II', 0, 0))
    cpu.mem_write(symbols['address_region055'], bytes(8 if wide else 4))
    if wide:
        cpu.reg_write(a64.UC_ARM64_REG_FPCR, 0)
        cpu.reg_write(a64.UC_ARM64_REG_FPSR, 0)
        spreg, lrreg, arg0, arg1, ret, pcreg = a64.UC_ARM64_REG_SP, a64.UC_ARM64_REG_LR, a64.UC_ARM64_REG_X0, a64.UC_ARM64_REG_X1, a64.UC_ARM64_REG_W0, a64.UC_ARM64_REG_PC
        saved = [(getattr(a64, 'UC_ARM64_REG_X'+str(index)), 0x51000000+index*163) for index in range(19, 30)]
        saved += [(getattr(a64, 'UC_ARM64_REG_D'+str(index)), 0x3ff0000000000000+index*131) for index in range(8, 16)]
    else:
        cpu.reg_write(arm.UC_ARM_REG_CPSR, 0x10)
        cpu.reg_write(arm.UC_ARM_REG_C1_C0_2, 0xf << 20)
        cpu.reg_write(arm.UC_ARM_REG_FPEXC, 0x40000000)
        cpu.reg_write(arm.UC_ARM_REG_FPSCR, 0)
        spreg, lrreg, arg0, arg1, ret, pcreg = arm.UC_ARM_REG_SP, arm.UC_ARM_REG_LR, arm.UC_ARM_REG_R0, arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R0, arm.UC_ARM_REG_PC
        saved = [(getattr(arm, 'UC_ARM_REG_R'+str(index)), 0x51000000+index*163) for index in range(4, 12)]
        saved += [(getattr(arm, 'UC_ARM_REG_D'+str(index)), 0x3ff0000000000000+index*131) for index in range(8, 16)]
    for register, value in saved:
        cpu.reg_write(register, value)
    sp = STACK+0xc000
    cpu.reg_write(spreg, sp)
    cpu.reg_write(lrreg, STOP)
    cpu.reg_write(arg0, pointer(DESCRIPTOR, base))
    cpu.reg_write(arg1, case['unit'])
    visited = set()
    def code(machine, address, size, unused):
        assert any(start <= address < end for start, end in functions), hex(address)
        visited.add(address)
    def memory(machine, access, address, size, value, unused):
        assert STACK <= address < STACK+0x10000 or base <= address and address+size <= base+ARENA_BYTES or address == symbols['state_pair055'], hex(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE, code)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, memory)
    cpu.emu_start(symbols['state_select055'], STOP, count=10000)
    assert cpu.reg_read(pcreg) == STOP and cpu.reg_read(spreg) == sp
    assert all(cpu.reg_read(register) == value for register, value in saved)
    pair = struct.unpack('<QQ' if wide else '<II', bytes(cpu.mem_read(symbols['state_pair055'], 16 if wide else 8)))
    arena = bytes(cpu.mem_read(base, ARENA_BYTES))
    value = result(case, arena, *pair, cpu.reg_read(ret), base)
    value['savedIntegerVfpSpPreserved'] = True
    value['fpsr' if wide else 'fpscr'] = cpu.reg_read(a64.UC_ARM64_REG_FPSR if wide else arm.UC_ARM_REG_FPSCR)
    value['compiledSourcePcs'] = sorted(visited)
    return value, arena


class Windows:
    class Pair(ctypes.Structure):
        _fields_ = [('cursor', ctypes.c_void_p), ('limit', ctypes.c_void_p)]

    def __init__(self, path):
        self.library = ctypes.CDLL(str(path))
        self.call = self.library.state_select055
        self.call.argtypes, self.call.restype = [ctypes.c_void_p, ctypes.c_uint32], ctypes.c_uint32
        self.pair = self.Pair.in_dll(self.library, 'state_pair055')
        self.context = ctypes.c_void_p.in_dll(self.library, 'state_context_select055')
        self.first = (ctypes.c_uint32*2).in_dll(self.library, 'address_first055')
        self.second = (ctypes.c_uint32*2).in_dll(self.library, 'address_second055')
        self.offsets = (ctypes.c_uint32*2).in_dll(self.library, 'address_offsets055')
        self.region = ctypes.c_void_p.in_dll(self.library, 'address_region055')
        self.kernel = ctypes.WinDLL('kernel32', use_last_error=True)
        self.kernel.VirtualAlloc.argtypes = [ctypes.c_void_p, ctypes.c_size_t, ctypes.c_ulong, ctypes.c_ulong]
        self.kernel.VirtualAlloc.restype = ctypes.c_void_p
        self.kernel.VirtualFree.argtypes = [ctypes.c_void_p, ctypes.c_size_t, ctypes.c_ulong]
        self.kernel.VirtualFree.restype = ctypes.c_int
        self.base = self.kernel.VirtualAlloc(0x120000000, ARENA_BYTES, 0x3000, 4)
        assert self.base == 0x120000000

    def execute(self, case):
        data, cursor, limit = initial(case)
        ctypes.memmove(self.base, data, len(data))
        self.pair.cursor, self.pair.limit = pointer(cursor, self.base), pointer(limit, self.base)
        self.context.value = pointer(CONTEXT, self.base)
        self.first[:] = [0x20000000, 0x100]
        self.second[:] = [0, 0]
        self.offsets[:] = [0, 0x10000000]
        self.region.value = None
        returned = self.call(pointer(DESCRIPTOR, self.base), case['unit'])
        arena = ctypes.string_at(self.base, ARENA_BYTES)
        value = result(case, arena, self.pair.cursor, self.pair.limit, returned, self.base)
        value['actualWindows'] = True
        return value, arena

    def close(self):
        assert self.kernel.VirtualFree(self.base, 0, 0x8000)
