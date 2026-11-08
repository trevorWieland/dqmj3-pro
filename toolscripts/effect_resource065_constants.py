import ctypes
import hashlib
import json
import struct

import native_effect065_build as common
from effect_resource065_commands_oracle import Machine as CommandMachine, Native as CommandNative
from effect_resource065_commands_cases import FLOAT_BITS
from effect_resource065_vertex_cases import base_input, put, remove_model
import effect_resource065_conditions as conditions


ROOT = common.ROOT


class Native(CommandNative):
    def __init__(self, dll):
        super().__init__(dll)
        self.values = (ctypes.c_uint32 * 4)()
        self.library.fn_0044f3b8.argtypes = [ctypes.c_void_p, ctypes.c_void_p, ctypes.c_uint, ctypes.c_void_p]
        self.library.fn_0044f3b8.restype = None

    def constant(self, raw, index, count, values, null_values=False):
        ctypes.memset(ctypes.addressof(self.object), 0xc7, ctypes.sizeof(self.object))
        ctypes.memmove(self.address, raw, len(raw))
        self.key[:] = [0x5a, 0xa5, index]
        self.values[:] = values
        self.returned = False
        self.library.fn_0044f3b8(self.address, ctypes.addressof(self.key), count,
            None if null_values else ctypes.addressof(self.values))
        self.returned = True
        actual = bytes(self.object)
        if actual[:64] != bytes([0xc7]) * 64 or actual[-64:] != bytes([0xc7]) * 64 or list(self.values) != values or bytes(self.key) != bytes([0x5a, 0xa5, index]):
            raise ValueError('Constant attribute changed immutable caller values/key/guards')
        return actual[64:-64]


class Machine(CommandMachine):
    def __init__(self, profile, elf=None):
        super().__init__(profile, elf)
        if self.original:
            self.functions['fn_0044f3b8'] = 0x44f3b8
        self.values = self.base + 0x5000

    def read(self, cpu, access, address, size, value, user):
        if self.active and self.values <= address < address + size <= self.values + 16:
            return
        super().read(cpu, access, address, size, value, user)

    def constant(self, raw, index, count, values, null_values=False):
        self.size = 0x790
        self.cpu.mem_write(self.base, bytes([0xc7]) * 0x1000)
        self.cpu.mem_write(self.address, raw)
        key = bytes([0x5a, 0xa5, index])
        self.cpu.mem_write(self.key, key)
        data = struct.pack('<4I', *values)
        self.cpu.mem_write(self.values, data)
        self.command_phase, self.active = False, True
        self.invoke('fn_0044f3b8', [self.address, self.key, count, 0 if null_values else self.values])
        self.active = False
        actual = bytes(self.cpu.mem_read(self.base, len(raw) + 128))
        if actual[:64] != bytes([0xc7]) * 64 or actual[-64:] != bytes([0xc7]) * 64 or bytes(self.cpu.mem_read(self.values, 16)) != data or bytes(self.cpu.mem_read(self.key, 3)) != key:
            raise ValueError('Constant attribute changed immutable complete values/key/caller guards')
        return actual[64:-64]


def run(output, folder=None):
    if output.exists():
        raise ValueError('Preserve constant-attribute qualification')
    output.mkdir(parents=True)
    folder = folder or ROOT / 'work/native-effect065/resource/commands-build-v1'
    machines = [Machine('original'), Machine('arm', folder / 'arm/effect_vertex.elf'), Native(folder / 'windows/effect_vertex.dll'),
        Machine('a64', folder / 'a64/effect_vertex.elf')]
    rows = []
    for index in range(12):
        for count in [0, 1, 2, 3, 4, 5, 255, 256, 0xffffffff]:
            for kind in ['fresh', 'mapped', 'constant']:
                raw = base_input(654400 + index)
                if kind != 'fresh':
                    raw[0x154 + index] = 128
                    if kind == 'mapped':
                        at = 0x160 + 11 * 112
                        put(raw, at, 0xf1234567)
                        put(raw, at + 64 + 11 * 4, index)
                    else:
                        raw[0x6a0 + index * 20] = 128
                values = [FLOAT_BITS[(index + item) % len(FLOAT_BITS)] for item in range(4)]
                expected = bytearray(remove_model(raw, index))
                expected[0x154 + index] = 1
                expected[0x6a0 + index * 20] = count & 255
                defaults = [0, 0, 0, 0x3f800000]
                struct.pack_into('<4I', expected, 0x6a4 + index * 20,
                    *[values[item] if item < count else defaults[item] for item in range(4)])
                put(expected, 0, 0)
                observed = [machine.constant(bytes(raw), index, count, values, count == 0) for machine in machines]
                if any(actual != bytes(expected) for actual in observed):
                    (output / 'failure.json').write_text(json.dumps({'index': index, 'count': count, 'kind': kind,
                        'inputHex': raw.hex(), 'expectedHex': expected.hex(), 'observedHex': [data.hex() for data in observed]}, indent=2) + '\n')
                    raise ValueError('Original/source/model complete constant attribute storage differs')
                rows.append({'index': index, 'count': count, 'kind': kind, 'values': values,
                    'outputSha256': hashlib.sha256(expected).hexdigest()})
    (output / 'rows.json').write_text(json.dumps(rows, indent=2) + '\n')
    report = {'status': 'bounded-original-source-model-constant-attribute-four-target-proof', 'sets': len(rows),
        'rows': common.pin(output / 'rows.json'), 'sourceCreditGranted': 0,
        'componentsByteTruncationAndAllPreservedPaddingCompared': True,
        'nullValuesOnlyWhenCountZero': True, 'GPUExecutionQualified': False}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    (output / 'condition-outcomes.json').write_text(json.dumps(conditions.serializable(machines[0].condition_outcomes), indent=2) + '\n')
    print(json.dumps(report))


if __name__ == '__main__':
    run(ROOT / 'work/native-effect065/resource/constants-corpus-v1')
