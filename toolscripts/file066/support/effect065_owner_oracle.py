import ctypes
import re
import struct
from types import SimpleNamespace
from unicorn import arm_const as ar, arm64_const as aa

import native_effect065_build as common
from native_effect065_resource_graph_oracle import Machine as GraphMachine, Native as GraphNative
from native_effect065_resource_graph_observation import Observation


OWNER_LAYOUT = ['bytes', 'source', 'original', 'sourceBank', 'originalBank', 'slots', 'registrationBytes', 'bankBytes',
    'hookEnabled', 'hookSlot', 'hookCalls']


class Native(GraphNative):
    def __init__(self, dll, map_path):
        super().__init__(dll)
        self.library.effect_owner_fixture065.restype = ctypes.c_void_p
        self.library.effect_owner_fixture_registration065.argtypes = [ctypes.c_uint]
        self.library.effect_owner_fixture_registration065.restype = ctypes.c_void_p
        self.library.effect_owner_fixture_reset065.argtypes = [ctypes.c_uint, ctypes.c_uint]
        self.library.effect_owner_fixture_callbacks065.argtypes = [ctypes.c_uint] * 3
        self.library.fn_005f0974.argtypes = [ctypes.c_void_p, ctypes.c_void_p, ctypes.c_ubyte]
        self.library.fn_005f0974.restype = ctypes.c_uint
        self.library.fn_0053ea1c.argtypes = [ctypes.c_void_p, ctypes.c_void_p, ctypes.c_void_p, ctypes.c_uint, ctypes.c_void_p]
        self.library.fn_0053ea1c.restype = None
        self.owner_state = self.library.effect_owner_fixture065()
        self.registration = self.library.effect_owner_fixture_registration065(0)
        self.owner_layout = dict(zip(OWNER_LAYOUT, (ctypes.c_uint * len(OWNER_LAYOUT)).in_dll(self.library, 'effect_owner_fixture_layout065'), strict=True))
        text = map_path.read_text()
        preferred = int(re.search(r'Preferred load address is ([0-9A-Fa-f]+)', text)[1], 16)
        address = int(re.search(r'\bresource_unidentified_identity065\s+([0-9A-Fa-f]+)', text)[1], 16)
        self.identity = self.library._handle + address - preferred

    def owner_prepare(self, raw, used=0, pattern=0xa5, fail=0):
        self.known_typed_allocations = {}
        self.lifetime_violations = []
        self.prepare(raw, pattern, fail=fail)
        self.library.effect_owner_fixture_reset065(used, pattern)
        owner_readonly(self)

    def register(self, kind):
        self.returned = False
        result = self.library.fn_005f0974(self.registration, self.image, kind)
        self.returned = True
        return result

    def callbacks(self, enabled, slot=0):
        self.library.effect_owner_fixture_callbacks065(0, enabled, slot)
        self.remember_readonly()
        owner_readonly(self)

    def replace(self, raw, slot=0, fail_header=False):
        raw = bytes(raw)
        if len(raw) > 0x7000:
            raise ValueError('Replacement input exceeds separate caller backing')
        new_image = self.base + 0x8000
        ctypes.memmove(new_image, raw, len(raw))
        self.image, self.image_bytes = new_image, len(raw)
        self.library.effect_graph_fixture_image065(new_image, len(raw))
        if fail_header:
            attempts = int.from_bytes(self.read_bytes(self.state + self.layout['attempts'], 4), 'little')
            ctypes.memmove(self.state + self.layout['failAt'], struct.pack('<I', attempts + 1), 4)
        self.returned = False
        self.library.fn_0053ea1c(self.state + self.layout['system'], self.allocator, self.image, slot, None)
        self.returned = True


class Machine(GraphMachine):
    def __init__(self, profile, elf):
        super().__init__(profile, elf)
        additional = {name: row for name, row in self.graph['functions'].items() if name.startswith(('effect_owner_', 'owner_'))}
        self.fixture.update(additional)
        self.functions.update({name: row['address'] for name, row in additional.items()})
        if self.original:
            self.functions['fn_005f0974'] = 0x5f0974
        self.owner_state = self.invoke('effect_owner_fixture065', [])
        self.registration = self.invoke('effect_owner_fixture_registration065', [int(self.original)])
        row = self.graph['objects']['effect_owner_fixture_layout065']
        self.owner_layout = dict(zip(OWNER_LAYOUT, struct.unpack('<' + 'I' * len(OWNER_LAYOUT), self.read_bytes(row['address'], row['bytes'])), strict=True))
        self.identity = 0x8576d8 if self.original else self.graph['objects']['resource_unidentified_identity065']['address']

    def owner_prepare(self, raw, used=0, pattern=0xa5, fail=0):
        self.known_typed_allocations = {}
        self.lifetime_violations = []
        self.prepare(raw, pattern, fail=fail)
        self.invoke('effect_owner_fixture_reset065', [used, pattern])
        owner_readonly(self)

    def write(self, cpu, access, address, size, value, user):
        self.observe_allocation_lifetime('write', address, size)
        if self.active and any(low <= address < address + size <= high for low, high in getattr(self, 'borrowed_images', [])):
            return
        if self.active and self.owner_state <= address < address + size <= self.owner_state + self.owner_layout['bytes']:
            return
        super().write(cpu, access, address, size, value, user)

    def read(self, cpu, access, address, size, value, user):
        self.observe_allocation_lifetime('read', address, size)
        if self.active and self.owner_state <= address < address + size <= self.owner_state + self.owner_layout['bytes']:
            return
        super().read(cpu, access, address, size, value, user)

    def observe_allocation_lifetime(self, kind, address, size):
        if not self.active or not hasattr(self, 'state'):
            return
        count = int.from_bytes(self.read_bytes(self.state + self.layout['allocations'], 4), 'little')
        heap = self.state + self.layout['heap']
        if not heap <= address < heap + count * self.layout['heapStride']:
            return
        slot = (address - heap) // self.layout['heapStride']
        payload = heap + slot * self.layout['heapStride'] + self.layout['payloadOffset']
        if payload <= address < payload + 8192:
            live = int.from_bytes(self.read_bytes(self.state + self.layout['records'] + slot * 24 + 20, 4), 'little')
            if not live:
                self.lifetime_violations.append({'kind': kind, 'slot': slot, 'offset': address - payload,
                    'bytes': size, 'pc': self.cpu.reg_read(aa.UC_ARM64_REG_PC if self.a64 else ar.UC_ARM_REG_PC)})

    def register(self, kind):
        self.active = True
        result = self.invoke('fn_005f0974', [self.registration, self.image, kind])
        self.active = False
        return result & 0xffffffff

    def callbacks(self, enabled, slot=0):
        self.invoke('effect_owner_fixture_callbacks065', [int(self.original), enabled, slot])
        self.remember_readonly()
        owner_readonly(self)

    def replace(self, raw, slot=0, fail_header=False):
        raw = bytes(raw)
        if len(raw) > 0x7000:
            raise ValueError('Replacement input exceeds separate caller backing')
        self.borrowed_images = [(self.image, self.image + self.image_bytes)]
        new_image = self.base + 0x8000
        self.cpu.mem_write(new_image, raw)
        self.image, self.image_bytes = new_image, len(raw)
        self.borrowed_images.append((self.image, self.image + self.image_bytes))
        self.invoke('effect_graph_fixture_image065', [new_image, len(raw)])
        if self.original:
            self.cpu.mem_write(0x8c33a0, struct.pack('<I', (0x50000000 - self.image) & 0xffffffff))
            self.cpu.mem_write(0x8c33a8, struct.pack('<II', self.image, len(raw)))
        if fail_header:
            attempts = int.from_bytes(self.read_bytes(self.state + self.layout['attempts'], 4), 'little')
            self.cpu.mem_write(self.state + self.layout['failAt'], struct.pack('<I', attempts + 1))
        self.active = True
        self.invoke('fn_0053ea1c', [self.state + self.layout['system'], self.allocator, self.image, slot, 0])
        self.active = False


def owner_readonly(machine):
    table = machine.state + machine.layout['resources']
    machine.readonly = [(address, before) for address, before in machine.readonly
        if address != machine.state + machine.layout['system']]
    for low, high in [(machine.state + machine.layout['system'], table),
                      (table + 4 * machine.layout['pointerBytes'], machine.state + machine.layout['sourceAllocator'])]:
        machine.readonly.append((low, machine.read_bytes(low, high - low)))
    machine.before_owner = machine.read_bytes(machine.owner_state, machine.owner_layout['bytes'])


class OwnerObservation(Observation):
    def __init__(self, machine, slot, header_override=None, image_override=None):
        pointer = machine.layout['pointerBytes']
        table = machine.state + machine.layout['resources']
        header = header_override if header_override is not None else int.from_bytes(machine.read_bytes(table + slot * pointer, pointer), 'little')
        if not header:
            raise ValueError('Owner observation requires an actual live resource header')
        self.original_machine = machine
        proxy = SimpleNamespace(**machine.__dict__)
        proxy.original = machine.original
        proxy.layout = dict(machine.layout)
        proxy.layout['resource'] = header - machine.state
        if image_override is not None:
            proxy.image, proxy.image_bytes = image_override
        proxy.read_bytes = machine.read_bytes
        self.header = header
        self.identity = machine.identity
        super().__init__(proxy)
        for index, record in machine.known_typed_allocations.items():
            actual = struct.unpack('<6I', machine.read_bytes(machine.state + machine.layout['records'] + index * 24, 24))
            if actual[:2] != record['budgets']:
                raise ValueError('Previously validated typed allocation budget changed')
            self.typed_slots[index] = 'previously-validated-' + record['role']
        expected = 60 if pointer == 4 else 112
        self.typed_allocation(header, expected, 'resource-header')

    def snapshot(self, released=False):
        result = super().snapshot(released)
        if self.original_machine.lifetime_violations:
            raise ValueError('Actual game/provider access crossed a measured allocation lifetime')
        for index, role in self.typed_slots.items():
            actual = struct.unpack('<6I', self.read(self.state + self.layout['records'] + index * 24, 24))
            if index not in self.original_machine.known_typed_allocations:
                self.original_machine.known_typed_allocations[index] = {'role': role, 'budgets': actual[:2]}
        return result

    def token(self, value):
        if value == self.identity:
            return 'opaque-resource-identity'
        if value == self.header:
            for slot in range(self.allocation_count):
                if self.payload(slot) == value:
                    return ['allocation', slot, 0]
            raise ValueError('Resource header does not belong to an observed allocation')
        return super().token(value)
