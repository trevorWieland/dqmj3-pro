import bisect
import ctypes
import hashlib
import json
import struct
from pathlib import Path

import unicorn as uc
from unicorn import arm_const as ar, arm64_const as aa

import native_effect065_build as build


ROOT = build.ROOT
WORK = ROOT / 'work/native-effect065'


class Binding(ctypes.Structure):
    _fields_ = [('unknown_00', ctypes.c_uint32), ('commands', ctypes.c_void_p),
        ('command_word_count', ctypes.c_uint32), ('ready', ctypes.c_ubyte),
        ('unknown_0d', ctypes.c_ubyte * 3), ('keys', ctypes.c_uint32 * 6)]


class Program(ctypes.Structure):
    _fields_ = [('commands', ctypes.c_void_p), ('count', ctypes.c_uint32), ('owner', ctypes.c_void_p)]


class GuardedBinding(ctypes.Structure):
    _fields_ = [('before', ctypes.c_ubyte * 64), ('binding', Binding), ('after', ctypes.c_ubyte * 64)]


class Native:
    def __init__(self, dll):
        self.library = ctypes.CDLL(str(dll))
        self.library.effect_bind_shader_pool065.argtypes = [ctypes.c_void_p]
        self.library.effect_bind_shader_pool065.restype = ctypes.c_int
        self.library.fn_0053a688.argtypes = [ctypes.c_void_p]
        self.library.fn_0053a688.restype = ctypes.c_void_p
        self.library.fn_0053e2c4.argtypes = [ctypes.c_void_p]
        self.library.fn_0053e2c4.restype = None
        self.words = [(ctypes.c_uint32 * 64)(*[0x65000000 | index << 8 | word for word in range(64)])
                      for index in range(30)]
        self.pool = (Program * 30)(*[Program(ctypes.addressof(words), index + 1, None)
                                    for index, words in enumerate(self.words)])
        if ctypes.addressof(self.pool) <= 0xffffffff or self.library.effect_bind_shader_pool065(ctypes.addressof(self.pool)) != 1:
            raise ValueError('Native high-address typed pool binding failed')
        self.guarded = GuardedBinding()
        self.binding = self.guarded.binding
        self.addresses = {ctypes.addressof(words): index for index, words in enumerate(self.words)}

    def call(self, operation, key0, flags, pattern):
        ctypes.memset(ctypes.addressof(self.guarded), 0xc7, ctypes.sizeof(self.guarded))
        ctypes.memset(ctypes.addressof(self.binding), pattern, ctypes.sizeof(self.binding))
        self.binding.keys[0], self.binding.keys[1] = key0, flags
        before = bytes(self.binding)
        pool_before = bytes(self.pool)
        words_before = [bytes(words) for words in self.words]
        pointer = ctypes.addressof(self.binding)
        self.last_call_returned_normally = False
        returned = self.library.fn_0053a688(pointer) if operation == 'construct' else self.library.fn_0053e2c4(pointer)
        self.last_call_returned_normally = True
        if bytes(self.guarded.before) != bytes([0xc7]) * 64 or bytes(self.guarded.after) != bytes([0xc7]) * 64:
            raise ValueError('Native shader call changed caller-owned outer guards')
        if bytes(self.pool) != pool_before or [bytes(words) for words in self.words] != words_before:
            raise ValueError('Native shader call changed borrowed pool or opaque command buffers')
        if operation == 'construct' and returned != pointer:
            raise ValueError('Native constructor lost caller-used this result')
        fields = self.binding
        index = None if not fields.commands else self.addresses.get(fields.commands, -1)
        return {'unknown': fields.unknown_00, 'program': index, 'count': fields.command_word_count,
            'ready': fields.ready, 'padding': bytes(fields.unknown_0d).hex(), 'keys': list(fields.keys),
            'nativeABIExtraPaddingChanged': before[4:8] != bytes(fields)[4:8]}


class Machine:
    def __init__(self, profile, elf=None):
        self.profile = profile
        self.a64 = profile == 'a64'
        self.original = profile == 'original'
        self.cpu = uc.Uc(uc.UC_ARCH_ARM64 if self.a64 else uc.UC_ARCH_ARM,
                         uc.UC_MODE_ARM if not self.a64 else 0)
        self.pointer = 8 if self.a64 else 4
        self.base = 0x120000000 if self.a64 else 0x20000000
        self.stack = 0x130000000 if self.a64 else 0x30000000
        self.stop = 0x140000000 if self.a64 else 0x40000000
        self.cpu.mem_map(self.base, 0x10000)
        self.cpu.mem_map(self.stack, 0x40000)
        self.cpu.mem_map(self.stop, 4096, uc.UC_PROT_READ | uc.UC_PROT_EXEC)
        self.binding = self.base + 0x1000
        self.pool = self.base + 0x2000
        self.addresses = {self.base + 0x6000 + index * 0x100: index for index in range(30)}
        self.pcs = set()
        self.active = False
        self.global_writes = []
        if self.original:
            image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
            inventory = json.loads((ROOT / 'evidence/inventory/update-content0.json').read_text())
            if hashlib.sha256(image).hexdigest() != inventory['codeSha256']:
                raise ValueError('Original shader module identity differs')
            for section in inventory['layout']['segments']:
                size = section['pages'] * 4096
                if section['name'] == 'data':
                    size += (inventory['layout']['bssBytes'] + 4095) & ~4095
                self.cpu.mem_map(section['address'], size)
                self.cpu.mem_write(section['address'], image[section['codeBinOffset']:section['codeBinOffset'] + section['initializedBytes']])
                flags = uc.UC_PROT_READ | (uc.UC_PROT_EXEC if section['name'] == 'text' else 0)
                if section['name'] == 'data':
                    flags |= uc.UC_PROT_WRITE
                self.cpu.mem_protect(section['address'], size, flags)
            census = json.loads((ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_text())
            self.ranges = sorted((part['start'], part['endExclusive']) for row in census['functions']
                if row['address'] in [0x53a688, 0x53e2c4, 0x17821c] for part in row['ranges'])
            self.functions = {'fn_0053a688': 0x53a688, 'fn_0053e2c4': 0x53e2c4}
            global_address = struct.unpack_from('<I', image, 0x53e3ec - 0x100000)[0]
            self.cpu.mem_write(global_address, struct.pack('<I', self.pool - 52))
        else:
            parsed = build.read_elf(elf)
            pages = set()
            for segment in parsed['segments']:
                low = segment['address'] & ~4095
                high = (segment['address'] + segment['bytes'] + 4095) & ~4095
                for page in range(low, high, 4096):
                    if page not in pages:
                        self.cpu.mem_map(page, 4096)
                        pages.add(page)
                self.cpu.mem_write(segment['address'], segment['fileBytes'])
            self.ranges = sorted(parsed['ownedCodeRanges'])
            self.functions = {name: row['address'] for name, row in parsed['functions'].items()}
            self.global_writes = [(row['address'], row['address'] + row['bytes'])
                for name, row in parsed['objects'].items() if name == 'active_effect_shader_pool065']
        self.starts = [low for low, high in self.ranges]
        self.cpu.hook_add(uc.UC_HOOK_CODE, self.code)
        self.cpu.hook_add(uc.UC_HOOK_MEM_WRITE, self.write)
        for address, index in self.addresses.items():
            self.cpu.mem_write(address, struct.pack('<64I', *[0x65000000 | index << 8 | word for word in range(64)]))
            entry = self.pool + index * (24 if self.a64 else 12)
            raw = struct.pack('<QI4xQ', address, index + 1, 0) if self.a64 else struct.pack('<III', address, index + 1, 0)
            self.cpu.mem_write(entry, raw)
        if not self.original:
            self.invoke('effect_bind_shader_pool065', self.pool, allow_global=True)

    def code(self, cpu, address, size, user):
        if address == self.stop:
            self.returned = True
            cpu.emu_stop()
            return
        index = bisect.bisect_right(self.starts, address) - 1
        if index < 0 or address + size > self.ranges[index][1] or size != 4:
            raise ValueError('Executed outside exact owned source/reference ARM instruction ranges')
        if not self.a64 and cpu.reg_read(ar.UC_ARM_REG_CPSR) & 32:
            raise ValueError('Unexpected Thumb execution in shader kernel corpus')
        self.pcs.add(address)

    def write(self, cpu, access, address, size, value, user):
        if not self.active:
            return
        if self.allow_global and any(low <= address and address + size <= high for low, high in self.global_writes):
            return
        if not (self.binding <= address and address + size <= self.binding + self.binding_size
                or self.stack <= address and address + size <= self.stack + 0x40000):
            raise ValueError('Shader kernel wrote outside owned binding and live stack')

    def invoke(self, name, argument, allow_global=False, second=None):
        self.returned, self.allow_global, self.active = False, allow_global, True
        self.binding_size = 48 if self.a64 else 40
        if self.a64:
            saved = [(getattr(aa, 'UC_ARM64_REG_X' + str(index)), 0x6500000000000000 + index)
                     for index in range(19, 30)]
        else:
            saved = [(getattr(ar, 'UC_ARM_REG_R' + str(index)), 0x65000000 + index)
                     for index in range(4, 12)]
        for register, value in saved:
            self.cpu.reg_write(register, value)
        if self.a64:
            self.cpu.reg_write(aa.UC_ARM64_REG_X0, argument)
            if second is not None:
                self.cpu.reg_write(aa.UC_ARM64_REG_X1, second)
            self.cpu.reg_write(aa.UC_ARM64_REG_SP, self.stack + 0x3fff0)
            self.cpu.reg_write(aa.UC_ARM64_REG_LR, self.stop)
        else:
            self.cpu.reg_write(ar.UC_ARM_REG_CPSR, 0x1f)
            self.cpu.reg_write(ar.UC_ARM_REG_R0, argument)
            if second is not None:
                self.cpu.reg_write(ar.UC_ARM_REG_R1, second)
            self.cpu.reg_write(ar.UC_ARM_REG_SP, self.stack + 0x3fff0)
            self.cpu.reg_write(ar.UC_ARM_REG_LR, self.stop)
        self.cpu.emu_start(self.functions[name], self.stop + 4, count=100000)
        self.active = False
        if not self.returned:
            raise ValueError('Shader call did not return within bounded instruction budget')
        if any(self.cpu.reg_read(register) != value for register, value in saved):
            raise ValueError('Shader call changed a callee-saved register')
        if self.cpu.reg_read(aa.UC_ARM64_REG_SP if self.a64 else ar.UC_ARM_REG_SP) != self.stack + 0x3fff0:
            raise ValueError('Shader call did not restore the actual caller stack')
        return self.cpu.reg_read(aa.UC_ARM64_REG_X0 if self.a64 else ar.UC_ARM_REG_R0)

    def call(self, operation, key0, flags, pattern):
        self.binding_size = 48 if self.a64 else 40
        self.cpu.mem_write(self.binding, bytes([pattern]) * self.binding_size)
        key_offset = 24 if self.a64 else 16
        self.cpu.mem_write(self.binding + key_offset, struct.pack('<II', key0, flags))
        returned = self.invoke('fn_0053a688' if operation == 'construct' else 'fn_0053e2c4', self.binding)
        if operation == 'construct' and returned != self.binding:
            raise ValueError('Machine constructor lost actual caller-used this result')
        raw = bytes(self.cpu.mem_read(self.binding, self.binding_size))
        pointer_offset, count_offset, ready_offset = (8, 16, 20) if self.a64 else (4, 8, 12)
        pointer = int.from_bytes(raw[pointer_offset:pointer_offset + self.pointer], 'little')
        return {'unknown': struct.unpack_from('<I', raw)[0], 'program': None if not pointer else self.addresses.get(pointer, -1),
            'count': struct.unpack_from('<I', raw, count_offset)[0], 'ready': raw[ready_offset],
            'padding': raw[ready_offset + 1:ready_offset + 4].hex(), 'keys': list(struct.unpack_from('<6I', raw, key_offset)),
            'nativeABIExtraPaddingChanged': self.a64 and raw[4:8] != bytes([pattern]) * 4}


def main():
    output = WORK / 'shader-smoke-v2.json'
    if output.exists():
        raise ValueError('Preserve initial original/source shader smoke')
    folder = WORK / 'shader-build-v2'
    machines = [Machine('original'), Machine('arm', folder / 'arm/effect_shader.elf'),
                Native(folder / 'windows/effect_shader.dll'), Machine('a64', folder / 'a64/effect_shader.elf')]
    rows = []
    for operation in ['construct', 'select']:
        for key, flags, pattern in [(0, 0, 0xa5), (8 | 255 << 8, 2, 0x5a),
                                    (5 | 2 << 16, 1, 0xff), (6 | 255 << 16, 3, 0x12)]:
            results = [machine.call(operation, key, flags, pattern) for machine in machines]
            logical = [{name: value for name, value in row.items() if name != 'nativeABIExtraPaddingChanged'} for row in results]
            if any(row != logical[0] for row in logical[1:]):
                raise ValueError('Original/source shader logical binding mismatch: ' + json.dumps(results))
            rows.append({'operation': operation, 'key': key, 'flags': flags, 'pattern': pattern,
                         'logical': logical[0], 'nativeABIPaddingObservations': [r['nativeABIExtraPaddingChanged'] for r in results]})
    output.write_text(json.dumps({'status': 'initial-eight-case-four-target-shader-smoke', 'rows': rows,
        'sourceCreditGranted': 0, 'shaderPoolStartupOrGPUExecutionQualified': False}, indent=2) + '\n')
    print(json.dumps({'cases': len(rows), 'fourTargetsAgree': True}))


if __name__ == '__main__':
    main()
