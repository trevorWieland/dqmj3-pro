import ctypes
import json
import struct
from pathlib import Path

import unicorn as uc
from unicorn import arm_const as ar, arm64_const as aa

import native_effect065_build as build
from native_effect065_shader_oracle import Binding, Machine, Native


ROOT = build.ROOT
WORK = ROOT / 'work/native-effect065'


class NativeLifetime(Native):
    def __init__(self, dll):
        super().__init__(dll)
        self.library.fn_0017db84.argtypes = [ctypes.c_void_p, ctypes.c_void_p]
        self.library.fn_0017db84.restype = None
        self.library.effect_fixture_allocator065_reset.argtypes = [ctypes.c_void_p]
        self.library.effect_fixture_allocator065_reset.restype = ctypes.c_void_p
        self.library.effect_fixture_allocator065_releases.restype = ctypes.c_uint32
        self.library.effect_fixture_allocator065_invalid.restype = ctypes.c_uint32
        self.library.effect_fixture_allocator065_last.restype = ctypes.c_void_p

    def release(self, present, count, borrowed, null_allocator):
        ctypes.memset(ctypes.addressof(self.guarded), 0xc7, ctypes.sizeof(self.guarded))
        ctypes.memset(ctypes.addressof(self.binding), 0xa5, ctypes.sizeof(self.binding))
        expected = ctypes.addressof(self.words[3]) if present else 0
        self.binding.commands, self.binding.command_word_count, self.binding.ready = expected, count, borrowed
        allocator = self.library.effect_fixture_allocator065_reset(expected)
        before, pool = bytes(self.binding), bytes(self.pool)
        commands = [bytes(words) for words in self.words]
        self.library.fn_0017db84(ctypes.addressof(self.binding), 0 if null_allocator else allocator)
        if bytes(self.binding) != before or bytes(self.pool) != pool or [bytes(words) for words in self.words] != commands:
            raise ValueError('Native release changed borrowed binding/pool/payload bytes')
        if bytes(self.guarded.before) != b'\xc7' * 64 or bytes(self.guarded.after) != b'\xc7' * 64:
            raise ValueError('Native release changed caller guards')
        count = self.library.effect_fixture_allocator065_releases()
        last = self.library.effect_fixture_allocator065_last()
        return {'releases': count, 'lastIsExpected': bool(last) and last == expected,
                'invalid': self.library.effect_fixture_allocator065_invalid()}


class MachineLifetime(Machine):
    def __init__(self, profile, elf=None):
        self.fixture_ranges, self.fixture_code, self.release_mode = [], [], False
        super().__init__(profile, elf)
        if self.original:
            self.ranges += [(0x17db84, 0x17dbc0)]
            self.ranges.sort()
            self.starts = [low for low, high in self.ranges]
            self.functions['fn_0017db84'] = 0x17db84
            self.gate = self.stop + 4096
            self.cpu.mem_map(self.gate, 4096, uc.UC_PROT_READ | uc.UC_PROT_EXEC)
            self.allocator = self.base + 0x4000
            table = self.base + 0x4100
            self.cpu.mem_write(self.allocator, struct.pack('<I', table))
            self.cpu.mem_write(table, struct.pack('<IIII', 0, 0, 0, self.gate))
        else:
            parsed = build.read_elf(elf)
            self.fixture_ranges = [(row['address'], row['address'] + row['bytes'])
                for name, row in parsed['objects'].items() if name == 'effect_fixture_allocator065']
            self.fixture_code = [(row['address'], row['address'] + row['bytes'])
                for name, row in parsed['functions'].items() if name.startswith('effect_fixture_')]
            self.global_writes += self.fixture_ranges

    def code(self, cpu, address, size, user):
        if self.original and self.release_mode and address == self.gate:
            if cpu.reg_read(ar.UC_ARM_REG_R0) != self.allocator:
                raise ValueError('Original virtual release receiver differs')
            memory = cpu.reg_read(ar.UC_ARM_REG_R1)
            self.invalid |= memory != self.expected or self.releases != 0
            self.releases += 1
            self.last = memory
            cpu.reg_write(ar.UC_ARM_REG_PC, cpu.reg_read(ar.UC_ARM_REG_LR))
            return
        return super().code(cpu, address, size, user)

    def write(self, cpu, access, address, size, value, user):
        if self.active and not self.original:
            pc = cpu.reg_read(aa.UC_ARM64_REG_PC if self.a64 else ar.UC_ARM_REG_PC)
            if (any(low <= pc < high for low, high in self.fixture_code)
                    and any(low <= address and address + size <= high for low, high in self.fixture_ranges)):
                return
        return super().write(cpu, access, address, size, value, user)

    def release(self, present, count, borrowed, null_allocator):
        self.binding_size = 48 if self.a64 else 40
        self.expected = self.base + 0x6300 if present else 0
        self.cpu.mem_write(self.binding, b'\xa5' * self.binding_size)
        pointer, scalar, flag = (8, 16, 20) if self.a64 else (4, 8, 12)
        self.cpu.mem_write(self.binding + pointer, self.expected.to_bytes(self.pointer, 'little'))
        self.cpu.mem_write(self.binding + scalar, struct.pack('<I', count))
        self.cpu.mem_write(self.binding + flag, bytes([borrowed]))
        self.releases, self.invalid, self.last = 0, False, 0
        if self.original:
            allocator = self.allocator
        else:
            allocator = self.invoke('effect_fixture_allocator065_reset', self.expected, allow_global=True)
        before = bytes(self.cpu.mem_read(self.binding, self.binding_size))
        self.release_mode = True
        self.invoke('fn_0017db84', self.binding, second=0 if null_allocator else allocator)
        self.release_mode = False
        if bytes(self.cpu.mem_read(self.binding, self.binding_size)) != before:
            raise ValueError('Reference/source release changed its preserved binding representation')
        if not self.original:
            self.releases = self.invoke('effect_fixture_allocator065_releases', 0)
            self.invalid = self.invoke('effect_fixture_allocator065_invalid', 0)
            self.last = self.invoke('effect_fixture_allocator065_last', 0)
        return {'releases': self.releases, 'lastIsExpected': bool(self.last) and self.last == self.expected,
                'invalid': int(self.invalid)}


def main(output=None, folder=None):
    output = output or WORK / 'shader-lifetime-v1.json'
    if output.exists():
        raise ValueError('Preserve release ownership corpus')
    folder = folder or WORK / 'shader-build-v4'
    machines = [MachineLifetime('original'), MachineLifetime('arm', folder / 'arm/effect_shader.elf'),
                NativeLifetime(folder / 'windows/effect_shader.dll'), MachineLifetime('a64', folder / 'a64/effect_shader.elf')]
    rows = []
    for present in [False, True]:
        for count in [0, 1, 32, 0xffffffff]:
            for borrowed in [0, 1, 2, 127, 128, 255]:
                will_release = present and count != 0 and borrowed == 0
                for null_allocator in [False, True]:
                    if will_release and null_allocator:
                        continue
                    observed = [machine.release(present, count, borrowed, null_allocator) for machine in machines]
                    expected = {'releases': int(will_release), 'lastIsExpected': will_release, 'invalid': 0}
                    if any(row != expected for row in observed):
                        raise ValueError('Original/source release ownership mismatch: ' + json.dumps(observed))
                    rows.append({'present': present, 'count': count, 'borrowed': borrowed,
                        'nullAllocator': null_allocator, 'observed': expected})
    output.write_text(json.dumps({'status': 'bounded-original-source-native-four-target-release-ownership',
        'rows': rows, 'platform': 'Reference typed virtual release boundary; source executes genuine authored C fixture allocator callbacks',
        'physicalBackingRetainedAfterLogicalReleaseForObservation': True,
        'arbitraryCountsAreMetadataOnlyNoPayloadCapacityClaim': True,
        'noRepeatedOwnedReleaseOrGPUExecutionClaim': True, 'sourceCreditGranted': 0}, indent=2) + '\n')
    print(json.dumps({'cases': len(rows), 'fourTargetsAgree': True}))


if __name__ == '__main__':
    main()
