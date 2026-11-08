import ctypes
import struct

from unicorn import arm_const as ar, arm64_const as aa

import native_effect065_build as common
from native_effect065_resource_vertex_oracle import Machine as VertexMachine


LAYOUT_NAMES = ['stateBytes', 'requests', 'requestBytes', 'storage', 'storageStride', 'servicesBytes', 'pointerBytes']


class Native:
    def __init__(self, dll):
        self.library = ctypes.CDLL(str(dll))
        self.library.effect_texture_fixture065_state.restype = ctypes.c_void_p
        self.state = self.library.effect_texture_fixture065_state()
        self.layout = dict(zip(LAYOUT_NAMES, list((ctypes.c_uint * len(LAYOUT_NAMES)).in_dll(self.library, 'effect_texture_fixture_layout065')), strict=True))
        self.library.effect_texture_fixture065_services.argtypes = [ctypes.c_uint] * 3
        self.library.effect_texture_fixture065_services.restype = ctypes.c_void_p
        self.library.effect_bind_texture_services065.argtypes = [ctypes.c_void_p]
        self.library.effect_bind_texture_services065.restype = ctypes.c_int
        self.library.fn_0044e7b4.argtypes = [ctypes.c_uint] * 3 + [ctypes.c_void_p] * 3
        self.library.fn_0044e7b4.restype = ctypes.c_uint
        self.library.fn_00535da8.argtypes = [ctypes.c_uint] * 3 + [ctypes.c_void_p] * 2
        self.library.fn_00535da8.restype = ctypes.c_uint
        self.library.fn_00535dec.argtypes = [ctypes.c_uint]
        self.library.fn_00535dec.restype = ctypes.c_uint
        self.memory = (ctypes.c_ubyte * 0x8000)()
        self.base = ctypes.addressof(self.memory)
        if min(self.base, self.state) <= 0xffffffff:
            raise ValueError('Native texture profile requires high caller/provider pointers')

    def call(self, spec, pixels):
        ctypes.memset(self.base, 0xc7, ctypes.sizeof(self.memory))
        ctypes.memset(self.state, 0xa5, self.layout['stateBytes'])
        ctypes.memset(self.state, 0, 16)
        ctypes.memmove(self.state + 16, struct.pack('<I', spec.get('fail', 0)), 4)
        source, destination, mapped = self.base + 0x100, self.base + 0x4000, self.base + 0x7000
        if len(pixels) > 4096:
            raise ValueError('Texture input exceeds initialized provider/caller capacity')
        ctypes.memmove(source, pixels, len(pixels))
        if spec.get('inplace'):
            destination = source
        options = [int(spec.get(name, True)) for name in ['allocate', 'release', 'report']]
        services = self.library.effect_texture_fixture065_services(*options)
        self.library.effect_bind_texture_services065(services)
        before_services = ctypes.string_at(services, self.layout['servicesBytes'])
        self.returned = False
        if spec.get('method') == 'map':
            result = self.library.fn_00535dec(spec['format'])
        else:
            arguments = [spec['format'], spec['width'], spec['height'], None if spec.get('null_source') else source,
                None if spec.get('null_destination') else destination]
            if spec.get('method') == 'wrapper':
                result = self.library.fn_00535da8(*arguments)
            else:
                result = self.library.fn_0044e7b4(*arguments, None if spec.get('null_format') else mapped)
        self.returned = True
        if ctypes.string_at(services, self.layout['servicesBytes']) != before_services:
            raise ValueError('Texture changed immutable typed services binding')
        return {'result': result, 'callerHex': bytes(self.memory).hex(),
            'providerHex': ctypes.string_at(self.state, self.layout['stateBytes']).hex()}


class Machine(VertexMachine):
    def __init__(self, profile, elf):
        super().__init__(profile, elf)
        if self.original:
            self.graph = common.read_elf(elf)
            pages = set()
            for segment in self.graph['segments']:
                for page in range(segment['address'] & ~4095, (segment['address'] + segment['bytes'] + 4095) & ~4095, 4096):
                    if page not in pages:
                        self.cpu.mem_map(page, 4096)
                        pages.add(page)
                self.cpu.mem_write(segment['address'], segment['fileBytes'])
            self.fixture = {name: row for name, row in self.graph['functions'].items()
                if name.startswith('effect_texture_') or name.startswith('texture_fixture_')}
            self.functions.update({name: row['address'] for name, row in self.fixture.items()})
            self.functions.update(fn_0044e7b4=0x44e7b4, fn_00535da8=0x535da8, fn_00535dec=0x535dec)
        self.texture_phase = False
        record = self.graph['objects']['effect_texture_fixture_layout065']
        raw = bytes(self.cpu.mem_read(record['address'], record['bytes']))
        self.layout = dict(zip(LAYOUT_NAMES, struct.unpack('<' + 'I' * len(LAYOUT_NAMES), raw), strict=True))
        self.state = self.invoke('effect_texture_fixture065_state', [])

    def code(self, cpu, address, size, user):
        if self.original and address != self.stop:
            row = next((row for row in self.fixture.values() if row['address'] <= address < address + size <= row['address'] + row['bytes']), None)
            if row is not None:
                if size != 4 or cpu.reg_read(ar.UC_ARM_REG_CPSR) & 32 or not any(part['kind'] == '$a' and
                    part['start'] <= address < address + size <= part['endExclusive'] for part in row['mappingSpans']):
                    raise ValueError('Reference texture platform provider code/mode differs')
                return
        super().code(cpu, address, size, user)

    def write(self, cpu, access, address, size, value, user):
        if self.active:
            ranges = [(self.state, self.state + self.layout['stateBytes']),
                (self.stack, self.stack + 0x10000), (self.destination, self.destination + 4096)]
            if not self.null_format:
                ranges.append((self.base + 0x7000, self.base + 0x7004))
            if not any(low <= address < address + size <= high for low, high in ranges):
                raise ValueError('Texture wrote outside declared caller/provider/stack state')

    def read(self, cpu, access, address, size, value, user):
        if self.active:
            ranges = [(self.base, self.base + 0x8000), (self.state, self.state + self.layout['stateBytes']),
                (self.stack, self.stack + 0x10000)]
            ranges += [(segment['address'], segment['address'] + segment['bytes']) for segment in self.graph['segments']]
            if self.original:
                ranges += [(row['address'], row['address'] + row['pages'] * 4096) for row in self.reference.layout['segments']]
            if not any(low <= address < address + size <= high for low, high in ranges):
                raise ValueError('Texture read outside explicit caller/provider/module/frame data')

    def invoke(self, name, args):
        if self.a64:
            reg = lambda index: getattr(aa, 'UC_ARM64_REG_X' + str(index))
            saved = [(reg(index), 0x6500000000000000 + index) for index in range(19, 30)]
            floating = [(getattr(aa, 'UC_ARM64_REG_D' + str(index)), 0x3fe0000000000000 + index) for index in range(8, 16)]
            sp, lr = aa.UC_ARM64_REG_SP, aa.UC_ARM64_REG_LR
        else:
            self.cpu.reg_write(ar.UC_ARM_REG_CPSR, 0x1f)
            reg = lambda index: getattr(ar, 'UC_ARM_REG_R' + str(index))
            saved = [(reg(index), 0x65000000 + index) for index in range(4, 12)]
            floating = [(getattr(ar, 'UC_ARM_REG_D' + str(index)), 0x3fe0000000000000 + index) for index in range(8, 16)]
            sp, lr = ar.UC_ARM_REG_SP, ar.UC_ARM_REG_LR
        for register, value in saved + floating:
            self.cpu.reg_write(register, value)
        for slot, value in enumerate(args):
            if self.a64 or slot < 4:
                self.cpu.reg_write(reg(slot), value)
            else:
                self.cpu.mem_write(self.stack + 0xffe0 + (slot - 4) * 4, struct.pack('<I', value))
        self.cpu.reg_write(sp, self.stack + 0xffe0)
        self.cpu.reg_write(lr, self.stop)
        self.returned = False
        self.cpu.emu_start(self.functions[name], self.stop + 4, count=2000000)
        if not self.returned or self.cpu.reg_read(sp) != self.stack + 0xffe0 or any(self.cpu.reg_read(register) != value for register, value in saved + floating):
            raise ValueError('Texture actual caller return/integer/float ABI differs')
        return self.cpu.reg_read(reg(0))

    def call(self, spec, pixels):
        self.active = False
        self.cpu.mem_write(self.base, bytes([0xc7]) * 0x8000)
        self.cpu.mem_write(self.state, bytes([0xa5]) * self.layout['stateBytes'])
        self.cpu.mem_write(self.state, bytes(16) + struct.pack('<I', spec.get('fail', 0)))
        source, destination, mapped = self.base + 0x100, self.base + 0x4000, self.base + 0x7000
        if len(pixels) > 4096:
            raise ValueError('Texture input exceeds initialized backing')
        self.cpu.mem_write(source, pixels)
        self.destination = source if spec.get('inplace') else destination
        self.null_format = bool(spec.get('null_format'))
        options = [int(spec.get(name, True)) for name in ['allocate', 'release', 'report']]
        services = self.invoke('effect_texture_fixture065_services', options)
        before_services = bytes(self.cpu.mem_read(services, self.layout['servicesBytes']))
        if self.original:
            for address, name, enabled in [(0x89a520, 'effect_texture_original_allocate065', options[0]),
                (0x89a524, 'effect_texture_original_release065', options[1]),
                (0x8c3cec, 'effect_texture_original_report065', options[2])]:
                self.cpu.mem_write(address, struct.pack('<I', self.functions[name] if enabled else 0))
        else:
            self.invoke('effect_bind_texture_services065', [services])
        self.active = True
        if spec.get('method') == 'map':
            result = self.invoke('fn_00535dec', [spec['format']])
        else:
            args = [spec['format'], spec['width'], spec['height'], 0 if spec.get('null_source') else source,
                0 if spec.get('null_destination') else self.destination]
            result = self.invoke('fn_00535da8' if spec.get('method') == 'wrapper' else 'fn_0044e7b4',
                args if spec.get('method') == 'wrapper' else args + [0 if self.null_format else mapped])
        self.active = False
        if bytes(self.cpu.mem_read(services, self.layout['servicesBytes'])) != before_services:
            raise ValueError('Texture changed immutable typed provider callbacks')
        return {'result': result & 0xffffffff, 'callerHex': bytes(self.cpu.mem_read(self.base, 0x8000)).hex(),
            'providerHex': bytes(self.cpu.mem_read(self.state, self.layout['stateBytes'])).hex()}
