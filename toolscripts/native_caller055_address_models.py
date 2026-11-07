import ctypes
import hashlib
import struct
import sys
import unicorn
from unicorn import arm_const as arm, arm64_const as a64
from native_caller055_measure import ROOT
from native_caller055_address_reference import STACK, STOP, expected

sys.path.insert(0, str(ROOT/'toolscripts'))
from native_state055_build import load


def data(case):
    return [(0x8c0324, struct.pack('<II', case['first']['base'], case['first']['length'])),
            (0x8c33a0, struct.pack('<II', case['second']['offset'], case['first']['offset'])),
            (0x8c33a8, struct.pack('<II', case['second']['base'], case['second']['length']))]


def machine(path, case, wide=False, strict=True):
    segments, symbols, functions = load(path)
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM64 if wide else unicorn.UC_ARCH_ARM, unicorn.UC_MODE_LITTLE_ENDIAN if wide else unicorn.UC_MODE_ARM)
    pages = {STACK, STOP}
    for address, size, flags, payload in segments:
        pages.update(range(address&-4096, (address+size+4095)&-4096, 4096))
    region = 0x110000100 if wide else case['objectAddress']
    if region:
        pages.add(region&-4096)
    for page in sorted(pages):
        cpu.mem_map(page, 4096)
    for address, size, flags, payload in segments:
        if payload:
            cpu.mem_write(address, payload)
    for address, payload in data(case):
        cpu.mem_write(address, payload)
    actual_region = region if case['objectAddress'] else 0
    cpu.mem_write(symbols['address_region055'], struct.pack('<Q' if wide else '<I', actual_region))
    payload = struct.pack('<III', case['objectAddress'], 0x73519a42, case['objectLength'])
    if actual_region:
        cpu.mem_write(actual_region, payload)
    if wide:
        saved = [(getattr(a64, 'UC_ARM64_REG_X'+str(index)), 0x51000000+index*163) for index in range(19, 30)]
        saved += [(getattr(a64, 'UC_ARM64_REG_D'+str(index)), 0x3ff0000000000000+index*131) for index in range(8, 16)]
        spreg, lreg, arg, ret, preg = a64.UC_ARM64_REG_SP, a64.UC_ARM64_REG_LR, a64.UC_ARM64_REG_X0, a64.UC_ARM64_REG_W0, a64.UC_ARM64_REG_PC
    else:
        cpu.reg_write(arm.UC_ARM_REG_CPSR, 0x10)
        cpu.reg_write(arm.UC_ARM_REG_C1_C0_2, 0xf << 20)
        cpu.reg_write(arm.UC_ARM_REG_FPEXC, 0x40000000)
        saved = [(getattr(arm, 'UC_ARM_REG_R'+str(index)), 0x51000000+index*163) for index in range(4, 12)]
        saved += [(getattr(arm, 'UC_ARM_REG_D'+str(index)), 0x3ff0000000000000+index*131) for index in range(8, 16)]
        spreg, lreg, arg, ret, preg = arm.UC_ARM_REG_SP, arm.UC_ARM_REG_LR, arm.UC_ARM_REG_R0, arm.UC_ARM_REG_R0, arm.UC_ARM_REG_PC
    for register, value in saved:
        cpu.reg_write(register, value)
    sp = STACK+0xf00
    cpu.reg_write(spreg, sp)
    cpu.reg_write(lreg, STOP)
    cpu.reg_write(arg, case['address'])
    visited = set()
    def code(machine, address, size, unused):
        assert any(start <= address < end for start, end in functions), hex(address)
        visited.add(address)
    def memory(machine, access, address, size, value, unused):
        assert STACK <= address and address+size <= STACK+4096, hex(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE, code)
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, memory)
    cpu.emu_start(symbols['address_convert_entry055'], STOP, count=10000)
    assert cpu.reg_read(preg) == STOP and cpu.reg_read(spreg) == sp
    assert all(cpu.reg_read(register) == value for register, value in saved)
    assert all(bytes(cpu.mem_read(address, len(payload))) == payload for address, payload in data(case))
    assert bytes(cpu.mem_read(symbols['address_region055'], 8 if wide else 4)) == struct.pack('<Q' if wide else '<I', actual_region)
    if actual_region:
        assert bytes(cpu.mem_read(actual_region, len(payload))) == payload
    actual = cpu.reg_read(ret)
    passed = actual == expected(case)
    if strict:
        assert passed
    return dict(returned=actual, actualFunctionReturned=True, independentModelPassed=passed,
                savedIntegerVfpSpPreserved=True, regionPointer=actual_region,
                targetToken=case['objectAddress'], nativePointerTruncated=False,
                declaredPointerBytes=8 if wide else 4, compiledSourcePcs=sorted(visited))


class Window(ctypes.Structure):
    _fields_ = [('base', ctypes.c_uint32), ('length', ctypes.c_uint32)]


class Region(ctypes.Structure):
    _fields_ = [('target_address', ctypes.c_uint32), ('opaque', ctypes.c_uint32), ('length', ctypes.c_uint32)]


class Windows:
    def __init__(self, path):
        self.dll = ctypes.CDLL(str(path))
        self.run = self.dll.address_convert_entry055
        self.run.argtypes, self.run.restype = [ctypes.c_uint32], ctypes.c_uint32
        self.first = Window.in_dll(self.dll, 'address_first055')
        self.second = Window.in_dll(self.dll, 'address_second055')
        self.offsets = (ctypes.c_uint32*2).in_dll(self.dll, 'address_offsets055')
        self.region_pointer = ctypes.c_void_p.in_dll(self.dll, 'address_region055')
        self.kernel = ctypes.WinDLL('kernel32', use_last_error=True)
        self.kernel.VirtualAlloc.argtypes = [ctypes.c_void_p, ctypes.c_size_t, ctypes.c_ulong, ctypes.c_ulong]
        self.kernel.VirtualAlloc.restype = ctypes.c_void_p
        self.kernel.VirtualFree.argtypes = [ctypes.c_void_p, ctypes.c_size_t, ctypes.c_ulong]
        self.kernel.VirtualFree.restype = ctypes.c_int
        self.base = self.kernel.VirtualAlloc(0x120000000, 4096, 0x3000, 4)
        assert self.base == 0x120000000
        self.region = Region.from_address(self.base+256)

    def execute(self, case, strict=True):
        for state, value in [(self.first, case['first']), (self.second, case['second'])]:
            state.base, state.length = value['base'], value['length']
        self.offsets[:] = [case['second']['offset'], case['first']['offset']]
        self.region.target_address, self.region.opaque, self.region.length = case['objectAddress'], 0x73519a42, case['objectLength']
        pointer = self.base+256 if case['objectAddress'] else 0
        self.region_pointer.value = pointer
        before = bytes(self.first), bytes(self.second), bytes(self.offsets), bytes(self.region)
        returned = self.run(case['address'])
        assert before == (bytes(self.first), bytes(self.second), bytes(self.offsets), bytes(self.region))
        assert (self.region_pointer.value or 0) == pointer
        passed = returned == expected(case)
        if strict:
            assert passed
        return dict(returned=returned, actualFunctionReturned=True, independentModelPassed=passed,
                    actualWindows=True, regionPointer=pointer, targetToken=case['objectAddress'],
                    declaredPointerBytes=ctypes.sizeof(ctypes.c_void_p), nativePointerTruncated=False,
                    targetTokenDerivedFromNativePointer=False)

    def close(self):
        assert self.kernel.VirtualFree(self.base, 0, 0x8000)
