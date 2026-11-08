import ctypes
import struct

import capstone
import unicorn
from unicorn import arm_const as ar

import native_effect065_build as common
from native_effect065_resource_vertex_oracle import Machine as VertexMachine
from native_effect065_resource_texture_oracle import Machine as TextureMachine
import native_effect065_resource_conditions as conditions


LAYOUT_NAMES = ['stateBytes', 'pointerBytes', 'resource', 'system', 'resources', 'options', 'sourceAllocator', 'originalAllocator',
    'shaders', 'attempts', 'allocations', 'events', 'failAt', 'records', 'log', 'heap', 'heapStride', 'payloadOffset',
    'resourceBytes', 'setBytes', 'referenceBytes', 'emitterBytes', 'r_identity', 'r_system', 'r_identifier', 'r_serialized',
    'r_names', 'r_textures', 'r_sets', 'r_allocator', 'r_shaders', 'r_shader_count', 'r_primitives', 'r_primitive_count',
    'r_texture_storage', 'r_primitive_storage', 'r_transfer_context', 'r_materials', 's_current', 's_saved', 's_name',
    's_flag', 's_shaders', 's_shader_count', 's_primitives', 's_primitive_count', 's_materials', 'shaderWords']
PRIMITIVE_FIELDS = ['enabled', 'element_count', 'unknown_08', 'position_components', 'position_bytes', 'position_cpu', 'position_device',
    'unknown_1c', 'color_components', 'color_bytes', 'color_cpu', 'color_device', 'unknown_30', 'texcoord_components', 'texcoord_bytes',
    'texcoord_cpu', 'texcoord_device', 'unknown_44', 'index_components', 'index_bytes', 'indices_cpu', 'indices_device',
    'position_effective', 'color_effective', 'texcoord_effective', 'unknown_64', 'vertex_input', 'index_words',
    'indices_effective', 'storage', 'transfer_context', 'commands', 'command_count']
LAYOUT_NAMES += ['primitiveBytes'] + ['p_' + name for name in PRIMITIVE_FIELDS]
METHODS = ['fn_0053fe5c', 'fn_005411a4', 'fn_0053ea1c', 'fn_00160c68']
FIXTURE_METHODS = ['effect_graph_fixture065', 'effect_graph_fixture_original_allocator065',
    'effect_graph_fixture_source_allocator065', 'effect_graph_fixture_reset065', 'effect_graph_fixture_bind065']


class Native:
    original = False

    def __init__(self, dll):
        self.library = ctypes.CDLL(str(dll))
        self.layout = dict(zip(LAYOUT_NAMES, (ctypes.c_uint * len(LAYOUT_NAMES)).in_dll(self.library, 'effect_graph_fixture_layout065'), strict=True))
        for name in FIXTURE_METHODS[:3]:
            getattr(self.library, name).restype = ctypes.c_void_p
        self.state = self.library.effect_graph_fixture065()
        self.allocator = self.library.effect_graph_fixture_source_allocator065()
        self.memory = (ctypes.c_ubyte * 0x10000)()
        self.base = ctypes.addressof(self.memory)
        if min(self.base, self.state, self.allocator) <= 0xffffffff:
            raise ValueError('Resource Windows composition requires high actual pointers')
        self.library.effect_graph_fixture_reset065.argtypes = [ctypes.c_uint] * 3
        self.library.effect_graph_fixture_image065.argtypes = [ctypes.c_void_p, ctypes.c_uint]
        self.library.fn_0053fe5c.argtypes = [ctypes.c_void_p, ctypes.c_void_p, ctypes.c_void_p, ctypes.c_uint, ctypes.c_void_p, ctypes.c_void_p]
        self.library.fn_0053fe5c.restype = None
        self.library.fn_00160c68.argtypes = [ctypes.c_void_p] * 2
        self.library.fn_00160c68.restype = None

    def read_bytes(self, address, size):
        return ctypes.string_at(address, size)

    def prepare(self, raw, pattern=0xa5, storage=0, fail=0):
        raw = bytes(raw)
        if len(raw) > 0xff00:
            raise ValueError('Resource input exceeds initialized caller backing')
        self.pattern = pattern
        ctypes.memset(self.state, pattern, self.layout['stateBytes'])
        ctypes.memset(self.base, 0xc7, 0x10000)
        ctypes.memmove(self.base + 128, raw, len(raw))
        self.image = self.base + 128
        self.image_bytes = len(raw)
        self.library.effect_graph_fixture_reset065(fail, storage, pattern)
        self.library.effect_graph_fixture_image065(self.image, len(raw))
        self.library.effect_graph_fixture_bind065()
        self.remember_readonly()

    def remember_readonly(self):
        self.readonly = [(self.state + self.layout['system'], self.layout['sourceAllocator'] - self.layout['system']),
            (self.state + self.layout['shaders'], self.layout['attempts'] - self.layout['shaders']),
            (self.allocator, self.layout['pointerBytes'] * (1 if self.original else 2))]
        self.readonly = [(at, self.read_bytes(at, size)) for at, size in self.readonly]

    def construct(self, options=False):
        self.returned = False
        self.library.fn_0053fe5c(self.state + self.layout['resource'], self.allocator, self.image, 3,
            self.state + self.layout['system'], self.state + self.layout['options'] if options else None)
        self.returned = True

    def release(self):
        self.returned = False
        self.library.fn_00160c68(self.state + self.layout['resource'], None)
        self.returned = True


class Machine(VertexMachine):
    invoke = TextureMachine.invoke
    remember_readonly = Native.remember_readonly

    def __init__(self, profile, elf):
        super().__init__(profile, elf)
        self.graph = common.read_elf(elf)
        self.fixture = {name: row for name, row in self.graph['functions'].items()
            if name.startswith(('effect_graph_', 'graph_')) or name in ['memset', '__aeabi_memclr8']}
        if self.original:
            pages = set()
            for segment in self.graph['segments']:
                for page in range(segment['address'] & ~4095, (segment['address'] + segment['bytes'] + 4095) & ~4095, 4096):
                    if page not in pages:
                        self.cpu.mem_map(page, 4096)
                        pages.add(page)
                self.cpu.mem_write(segment['address'], segment['fileBytes'])
            self.functions = {name: row['address'] for name, row in self.fixture.items()}
            self.functions.update({name: int(name[3:], 16) for name in METHODS})
            raw = self.reference.image[0x101a1c - 0x100000:0x101a3e - 0x100000]
            for instruction in capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB).disasm(raw, 0x101a1c):
                self.extras[instruction.address] = (instruction.size, 'Thumb')
        layout = self.graph['objects']['effect_graph_fixture_layout065']
        self.layout = dict(zip(LAYOUT_NAMES, struct.unpack('<' + 'I' * len(LAYOUT_NAMES),
            bytes(self.cpu.mem_read(layout['address'], layout['bytes']))), strict=True))
        self.state = self.invoke('effect_graph_fixture065', [])
        self.allocator = self.invoke('effect_graph_fixture_original_allocator065' if self.original else 'effect_graph_fixture_source_allocator065', [])
        self.provider_pcs = set()
        self.kernel_events = []
        if self.original:
            self.tls = 0x21000000
            self.cpu.mem_map(self.tls, 4096)
            self.cpu.reg_write(ar.UC_ARM_REG_C13_C0_3, self.tls)
        self.cpu.hook_add(unicorn.UC_HOOK_INTR, self.interrupt)

    def interrupt(self, cpu, number, user):
        if not self.original or not self.active or cpu.reg_read(ar.UC_ARM_REG_PC) != 0x171888:
            raise ValueError('Resource reached an undeclared platform syscall boundary')
        handle = cpu.reg_read(ar.UC_ARM_REG_R0)
        words = struct.unpack('<5I', bytes(cpu.mem_read(self.tls + 0x80, 20)))
        process = struct.unpack_from('<I', self.reference.image, 0x7e3fc4 - 0x100000)[0]
        if handle != 0x6501 or words[0] != 0x1f0082 or words[3:] != (0, process):
            raise ValueError('Actual GSP cache-flush request/registered handle differs')
        pointer, size = words[1:3]
        allocations = struct.unpack('<I', bytes(cpu.mem_read(self.state + self.layout['allocations'], 4)))[0]
        slot = next((index for index in range(allocations) if pointer == self.state + self.layout['heap'] +
            index * self.layout['heapStride'] + self.layout['payloadOffset']), None)
        if slot is None:
            raise ValueError('Original cache-flush request has no live declared buffer')
        record = struct.unpack('<6I', bytes(cpu.mem_read(self.state + self.layout['records'] + slot * 24, 24)))
        if not record[5] or size > record[1]:
            raise ValueError('Original cache-flush request exceeds initialized backing')
        count = struct.unpack('<I', bytes(cpu.mem_read(self.state + self.layout['events'], 4)))[0]
        if count >= 512:
            raise ValueError('Platform event capacity exhausted')
        cpu.mem_write(self.state + self.layout['log'] + count * 24, struct.pack('<6I', 8, slot, size, 0, 0, 0))
        cpu.mem_write(self.state + self.layout['events'], struct.pack('<I', count + 1))
        self.kernel_events.append({'svc': 0x32, 'header': words[0], 'handle': handle,
            'allocationSlot': slot, 'bytes': size, 'processHandle': process})
        cpu.mem_write(self.tls + 0x84, bytes(4))
        cpu.reg_write(ar.UC_ARM_REG_R0, 0)

    def code(self, cpu, address, size, user):
        if self.original and address != self.stop:
            row = next((row for row in self.fixture.values() if row['address'] <= address < address + size <= row['address'] + row['bytes']), None)
            if row is not None:
                if size != 4 or cpu.reg_read(ar.UC_ARM_REG_CPSR) & 32 or not any(part['kind'] == '$a' and
                    part['start'] <= address < address + size <= part['endExclusive'] for part in row['mappingSpans']):
                    raise ValueError('Resource reference provider instruction ownership/mode differs')
                if hasattr(self, 'provider_pcs'):
                    self.provider_pcs.add(address)
                return
            if address in self.extras and 0x101a1c <= address < 0x101a3e:
                if self.extras[address] != (size, 'Thumb') or not cpu.reg_read(ar.UC_ARM_REG_CPSR) & 32:
                    raise ValueError('Actual resource array-helper private entry differs')
                self.pcs.add(address)
                conditions.observe(cpu, address, size, 'Thumb', self.condition_outcomes)
                self.witnesses[address] = {'address': address, 'bytes': size, 'mode': 'Thumb',
                    'owner': 'reference-only-array-helper-00101a1c',
                    'sha256': common.hashlib.sha256(bytes(cpu.mem_read(address, size))).hexdigest()}
                return
        super().code(cpu, address, size, user)

    def write(self, cpu, access, address, size, value, user):
        if self.active:
            ranges = [(self.state, self.state + self.layout['stateBytes']),
                (self.stack, self.stack + 0x10000), (self.image, self.image + self.image_bytes)]
            if self.original:
                ranges.append((self.tls, self.tls + 4096))
            if not any(low <= address < address + size <= high for low, high in ranges):
                raise ValueError('Resource wrote outside declared caller/provider/borrowed-image/frame state')

    def read(self, cpu, access, address, size, value, user):
        if self.active:
            ranges = [(self.base, self.base + 0x10000), (self.state, self.state + self.layout['stateBytes']),
                (self.stack, self.stack + 0x10000)]
            ranges += [(segment['address'], segment['address'] + segment['bytes']) for segment in self.graph['segments']]
            if self.original:
                ranges += [(row['address'], row['address'] + row['pages'] * 4096) for row in self.reference.layout['segments']]
                ranges.append((self.tls, self.tls + 4096))
            if not any(low <= address < address + size <= high for low, high in ranges):
                raise ValueError('Resource read outside explicit caller/provider/module/frame ownership')

    def read_bytes(self, address, size):
        return bytes(self.cpu.mem_read(address, size))

    def prepare(self, raw, pattern=0xa5, storage=0, fail=0):
        raw = bytes(raw)
        self.active = False
        if len(raw) > 0xff00:
            raise ValueError('Resource input exceeds initialized caller backing')
        self.pattern = pattern
        self.cpu.mem_write(self.state, bytes([pattern]) * self.layout['stateBytes'])
        self.cpu.mem_write(self.base, bytes([0xc7]) * 0x10000)
        self.cpu.mem_write(self.base + 128, raw)
        self.image = self.base + 128
        self.image_bytes = len(raw)
        self.invoke('effect_graph_fixture_reset065', [fail, storage, pattern])
        self.invoke('effect_graph_fixture_image065', [self.image, len(raw)])
        if self.original:
            for address, name in [(0x89a520, 'effect_graph_original_bank_allocate065'),
                (0x89a524, 'effect_graph_original_bank_release065'), (0x8c3cec, 'effect_graph_original_report065')]:
                self.cpu.mem_write(address, struct.pack('<I', self.functions[name]))
            global_address = struct.unpack_from('<I', self.reference.image, 0x53e3ec - 0x100000)[0]
            self.cpu.mem_write(global_address, struct.pack('<I', self.state + self.layout['shaders'] - 52))
            heap = self.state + self.layout['heap']
            self.cpu.mem_write(0x8c0324, struct.pack('<II', heap, 64 * self.layout['heapStride']))
            self.cpu.mem_write(0x8c33a0, struct.pack('<II', (0x50000000 - self.image) & 0xffffffff, (0x30000000 - heap) & 0xffffffff))
            self.cpu.mem_write(0x8c33a8, struct.pack('<II', self.image, len(raw)))
            self.cpu.mem_write(0x8c33b8, bytes(4))
            self.cpu.mem_write(0x8bfbd8, bytes(4))
            self.cpu.mem_write(0x8bfbf0, struct.pack('<I', 0x6501))
            self.cpu.mem_write(self.tls, bytes([0xc7]) * 4096)
        else:
            self.invoke('effect_graph_fixture_bind065', [])
        self.remember_readonly()

    def construct(self, options=False):
        self.active = True
        self.invoke('fn_0053fe5c', [self.state + self.layout['resource'], self.allocator, self.image, 3,
            self.state + self.layout['system'], self.state + self.layout['options'] if options else 0])
        self.active = False

    def release(self):
        self.active = True
        self.invoke('fn_00160c68', [self.state + self.layout['resource'], 0])
        self.active = False
