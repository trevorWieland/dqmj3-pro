"""Versioned SDK reference loader; no historical stream fixture is mapped."""

import bisect
import ctypes
import hashlib
import json
from pathlib import Path
import struct
import sys
import types

from unicorn import Uc, UC_ARCH_ARM, UC_MODE_ARM, UC_HOOK_CODE, UC_HOOK_INTR
from unicorn import UC_PROT_READ, UC_PROT_WRITE, UC_PROT_EXEC
from unicorn import arm_const as arm

import inventory

ROOT = Path(__file__).resolve().parents[1]
RAM, STACK, STOP = 0x2000000, 0x3000000, 0x4000000
IDENTITIES = {
    'generated/update-content0/code.bin': 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126',
    'generated/update-content0/exheader.bin': '32fcbe9adf7ea39c01c825af0d41c5ecb933549917ccc903a102eb83fb21f435',
    'evidence/lanes/native-inventory-completion/seeded/update-census.json': '338f478921eef3955e17f7e6b438a65f58ec9aa183b0012a9ab7dd872878dc55',
}


def frozen_input(name):
    data = (ROOT / name).read_bytes()
    if hashlib.sha256(data).hexdigest() != IDENTITIES[name]:
        raise ValueError('SDK062 v1 canonical input changed: ' + name)
    return data


class Original:
    def __init__(self, unused_legacy_artifacts=None):
        self.cpu = Uc(UC_ARCH_ARM, UC_MODE_ARM)
        self.cpu.ctl_set_cpu_model(arm.UC_CPU_ARM_11MPCORE)
        image = frozen_input('generated/update-content0/code.bin')
        layout = inventory.code_layout(frozen_input('generated/update-content0/exheader.bin'))
        self.module_pages = set()
        for segment in layout['segments']:
            size = segment['pages'] * 4096
            if segment['name'] == 'data':
                size = max(size, (segment['initializedBytes'] + layout['bssBytes'] + 4095) & -4096)
            address = segment['address']
            self.cpu.mem_map(address, size)
            start = segment['codeBinOffset']
            self.cpu.mem_write(address, image[start:start + segment['initializedBytes']])
            flags = UC_PROT_WRITE if segment['name'] == 'data' else UC_PROT_EXEC if segment['name'] == 'text' else 0
            self.cpu.mem_protect(address, size, UC_PROT_READ | flags)
            self.module_pages.update(range(address, address + size, 4096))
        self.text_end = layout['segments'][0]['address'] + layout['segments'][0]['initializedBytes']
        census = json.loads(frozen_input('evidence/lanes/native-inventory-completion/seeded/update-census.json'))
        self.ranges = sorted((part['start'], part['endExclusive'], row['address'])
                             for row in census['functions'] for part in row['ranges'])
        self.starts = [row[0] for row in self.ranges]
        self.symbols, self.fixture_ranges = {}, []
        self.coverage, self.owners, self.fixture_coverage = set(), set(), set()
        self.fast_entries, self.body = [], False
        for address, size in [(RAM, 0x100000), (STACK, 0x20000), (STOP, 4096)]:
            self.cpu.mem_map(address, size)
        self.cpu.hook_add(UC_HOOK_CODE, self.code)

    def code(self, cpu, address, size, unused):
        if any(low <= address < address + size <= high for low, high in self.fixture_ranges):
            self.fixture_coverage.add(address)
            return
        if not 0x100000 <= address < address + size <= self.text_end:
            raise ValueError('SDK062 original reached an undeclared authored endpoint: ' + hex(address))
        index = bisect.bisect_right(self.starts, address) - 1
        if index < 0 or not self.ranges[index][0] <= address < address + size <= self.ranges[index][1]:
            raise ValueError('SDK062 instruction lacks canonical ownership: ' + hex(address))
        self.coverage.add(address)
        self.owners.add(self.ranges[index][2])

    def word(self, address):
        return struct.unpack('<I', self.cpu.mem_read(address, 4))[0]

    def call(self, address, args):
        cpu, sp = self.cpu, STACK + 0x10000
        saved = [(getattr(arm, 'UC_ARM_REG_R' + str(i)), 0x58000000 + i) for i in range(4, 12)]
        saved += [(getattr(arm, 'UC_ARM_REG_D' + str(i)), 0x5800000012340000 + i) for i in range(8, 16)]
        for reg, value in saved:
            cpu.reg_write(reg, value)
        for reg, value in [(arm.UC_ARM_REG_CPSR, 0x10), (arm.UC_ARM_REG_C1_C0_2, 0xf << 20),
                           (arm.UC_ARM_REG_FPEXC, 0x40000000), (arm.UC_ARM_REG_FPSCR, 0x00400000),
                           (arm.UC_ARM_REG_SP, sp), (arm.UC_ARM_REG_LR, STOP)]:
            cpu.reg_write(reg, value)
        for reg, value in zip((arm.UC_ARM_REG_R0, arm.UC_ARM_REG_R1, arm.UC_ARM_REG_R2, arm.UC_ARM_REG_R3), args):
            cpu.reg_write(reg, value & 0xffffffff)
        cpu.emu_start(address, STOP, count=10000000)
        if cpu.reg_read(arm.UC_ARM_REG_PC) != STOP or cpu.reg_read(arm.UC_ARM_REG_SP) != sp:
            raise ValueError('SDK062 original failed to return/restack')
        if any(cpu.reg_read(reg) != value for reg, value in saved):
            raise ValueError('SDK062 original callee-save violation')
        if cpu.reg_read(arm.UC_ARM_REG_FPSCR) != 0x00400000:
            raise ValueError('SDK062 original changed FPSCR')
        value = cpu.reg_read(arm.UC_ARM_REG_R0)
        return value if value < 0x80000000 else value - 0x100000000


class ThreadServices:
    def __init__(self, runtime, owner):
        from runtime062s import SdkRuntime
        self.runtime = runtime
        self.native = runtime if runtime.target == 'windows' else SdkRuntime('windows', runtime.sdk062_host_artifact_folder)
        self.kernel, self.hook, self.svc = ctypes.WinDLL('kernel32', use_last_error=True), None, []
        for name, args, result in [('GetCurrentThreadId', [], ctypes.c_uint32), ('TlsAlloc', [], ctypes.c_uint32),
                                   ('TlsGetValue', [ctypes.c_uint32], ctypes.c_void_p),
                                   ('TlsSetValue', [ctypes.c_uint32, ctypes.c_void_p], ctypes.c_int),
                                   ('TlsFree', [ctypes.c_uint32], ctypes.c_int)]:
            function = getattr(self.kernel, name)
            function.argtypes, function.restype = args, result
        self.index = self.kernel.TlsAlloc()
        if self.index == 0xffffffff or not self.kernel.TlsSetValue(self.index, owner):
            raise OSError(ctypes.get_last_error())
        native = self.native
        for name, address in [('fixture_sdk_get_thread_id062s', ctypes.cast(self.kernel.GetCurrentThreadId, ctypes.c_void_p).value),
                              ('fixture_sdk_tls_get062s', ctypes.cast(self.kernel.TlsGetValue, ctypes.c_void_p).value)]:
            native.store(native.symbol(name), address.to_bytes(8, 'little'))
        native.store(native.symbol('fixture_sdk_tls_index062s'), struct.pack('<I', self.index))
        self.tid = self.kernel.GetCurrentThreadId()
        if self.tid == owner:
            raise ValueError('SDK062 numeric thread ID accidentally equals TLS pointer')
        for name in ['fixture_sdk_id_calls062s', 'fixture_sdk_owner_calls062s']:
            native.store(native.symbol(name), bytes(4))
        if runtime.target == 'original':
            def svc(cpu, interrupt, data):
                if interrupt != 2 or cpu.reg_read(arm.UC_ARM_REG_PC) != 0x169c10 or cpu.reg_read(arm.UC_ARM_REG_R1) != 0xffff8000:
                    raise ValueError('SDK062 unexpected supervisor call')
                function = native.library.fixture_sdk_thread_id062s
                function.argtypes, function.restype = [], ctypes.c_uint32
                tid = function()
                self.svc.append(dict(number=0x37, handle=cpu.reg_read(arm.UC_ARM_REG_R1), returnedNumericThreadId=tid, status=0))
                cpu.reg_write(arm.UC_ARM_REG_R0, 0)
                cpu.reg_write(arm.UC_ARM_REG_R1, tid)
            self.hook = runtime.cpu.hook_add(UC_HOOK_INTR, svc)
        elif runtime.target != 'windows':
            runtime.store(runtime.symbol('fixture_sdk_numeric_id062s'), struct.pack('<I', self.tid))

    def calls(self):
        runtime = self.native if self.runtime.target == 'original' else self.runtime
        return struct.unpack('<I', runtime.read(runtime.symbol('fixture_sdk_id_calls062s'), 4))[0]

    def close(self):
        if self.hook is not None:
            self.runtime.cpu.hook_del(self.hook)
        if not self.kernel.TlsFree(self.index):
            raise OSError(ctypes.get_last_error())
        if self.native is not self.runtime:
            self.native.close()


def install(default_artifact_folder=None):
    """Select this loader/service adapter in an isolated qualification process."""
    alias = types.ModuleType('native_stream058_original')
    alias.__file__, alias.Original = __file__, Original
    alias.RAM, alias.SIZE, alias.STACK, alias.STOP = RAM, 0x100000, STACK, STOP
    sys.modules[alias.__name__] = alias
    sys.path.append(str(ROOT / 'work/native-asset062-sdk'))
    import runtime062s
    prior_init = runtime062s.SdkRuntime.__init__
    def initialize(runtime, target, folder=None):
        folder = Path(folder or default_artifact_folder or runtime062s.WORK / 'build')
        runtime.sdk062_artifact_folder = folder
        runtime.sdk062_host_artifact_folder = Path(default_artifact_folder or folder)
        return prior_init(runtime, target, folder)
    runtime062s.SdkRuntime.__init__ = initialize
    import kernel062s
    kernel062s.ThreadServices = ThreadServices
