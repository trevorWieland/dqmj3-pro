import argparse
import json
import struct
from pathlib import Path

import effect065_owner_oracle as owner
import native_effect065_resource_conditions as conditions
from native_effect065_resource_graph_cases import fixture
from native_archive032_fixtures import name_key
from unicorn import arm_const as ar


LAYOUT = ['bytes', 'cache', 'entry', 'task', 'provider', 'heap', 'cacheBytes', 'entryBytes']


def container(key=7):
    raw = bytearray(0x9000)
    names = [('ef%05d.ptcl' % key).encode(), ('ef%05d.prev' % key).encode()]
    struct.pack_into('<4I', raw, 0, 0x01424258, 2, 2, 0)
    raw[0x1000:0x7000] = fixture()
    struct.pack_into('<II', raw, 0x8000, 0, 1)
    struct.pack_into('<3f', raw, 0x8008 + 260, 1, 2, 3)
    for index, (name, offset, size) in enumerate(zip(names, [0x1000, 0x8000], [0x6000, 328], strict=True)):
        at = 0x80 + index * 32
        raw[at:at + len(name) + 1] = name + b'\0'
        struct.pack_into('<4I', raw, 32 + index * 16, offset, size, at, name_key(name, 0))
    return bytes(raw)


class Machine(owner.Machine):
    def __init__(self, elf, profile='original'):
        super().__init__(profile, elf)
        functions = {name: row for name, row in self.graph['functions'].items() if name.startswith(('cached_', 'effect_cached_'))}
        self.fixture.update(functions)
        self.functions.update({name: row['address'] for name, row in functions.items()})
        if self.original:
            self.functions['fn_002a47cc'] = 0x2a47cc
        self.cached_state = self.invoke('effect_cached_fixture065', [])
        self.sdk_heap = self.invoke('effect_cached_fixture_heap065', [])
        row = self.graph['objects']['effect_cached_fixture_layout065']
        self.cached_layout = dict(zip(LAYOUT, struct.unpack('<' + 'I' * len(LAYOUT), self.read_bytes(row['address'], row['bytes'])), strict=True))
        self.sdk_exchange_path = owner.common.ROOT / 'evidence/lanes/squirrel-lookup020/reference-sdk-exchange.json'
        exchange = json.loads(self.sdk_exchange_path.read_text()) if self.original else {'instructionWitnesses': []}
        if self.original and (exchange['moduleSha256'] != owner.common.hashlib.sha256(self.reference.image).hexdigest() or exchange['sourceOrInventoryAdmissionGranted']):
            raise ValueError('Reference-only formatter exchange module/admission differs')
        self.sdk_views = {row['address']: row for row in exchange['instructionWitnesses']}
        for row in self.sdk_views.values():
            raw = self.reference.image[row['address'] - 0x100000:row['address'] - 0x100000 + row['bytes']]
            if owner.common.hashlib.sha256(raw).hexdigest() != row['sha256']:
                raise ValueError('Frozen reference-only SDK instruction witness differs')

    def code(self, cpu, address, size, user):
        if hasattr(self, 'sdk_views') and address in self.sdk_views:
            row = self.sdk_views[address]
            mode = 'Thumb' if cpu.reg_read(ar.UC_ARM_REG_CPSR) & 32 else 'ARM'
            raw = bytes(cpu.mem_read(address, size))
            if row['bytes'] != size or row['mode'] != mode or owner.common.hashlib.sha256(raw).hexdigest() != row['sha256']:
                raise ValueError('Reference-only SDK instruction mode/width/hash differs')
            conditions.observe(cpu, address, size, mode, self.condition_outcomes)
            self.witnesses[address] = {**row, 'owner': 'reference-only-sdk-instruction-exchange-no-function-boundary'}
            self.pcs.add(address)
            return
        super().code(cpu, address, size, user)

    def write(self, cpu, access, address, size, value, user):
        if self.active and hasattr(self, 'cached_state') and self.cached_state <= address < address + size <= self.cached_state + self.cached_layout['bytes']:
            return
        super().write(cpu, access, address, size, value, user)

    def setup(self):
        raw = container()
        self.owner_prepare(raw)
        reset = 'effect_cached_composed_reset065' if not self.original else 'effect_cached_fixture_reset065'
        self.invoke(reset, [int(self.original), 7, self.image])
        if self.original:
            for address, value in [(0x89a670, 0xf531), (0x8bfb54, 0x531), (0x89a688, self.sdk_heap)]:
                self.cpu.mem_write(address, struct.pack('<I', value))
            self.cpu.mem_write(0x89a508, bytes([1]))
        return raw

    def execute(self):
        for index, bits in enumerate([0x3f800000, 0x40000000, 0x40400000]):
            self.cpu.reg_write(getattr(ar, 'UC_ARM_REG_S' + str(index)), bits)
        self.active = True
        returned = self.invoke('fn_002a47cc', [self.cached_state + self.cached_layout['cache'], 7, 9, 1])
        self.active = False
        return returned


def run(build, output):
    if output.exists():
        raise ValueError('Preserve actual cached caller reference attempt')
    output.mkdir(parents=True)
    machine = Machine(build / 'arm/effect_resource.elf')
    raw = machine.setup()
    try:
        returned = machine.execute()
    except Exception as error:
        report = {'status': 'preserved-actual-cached-caller-stop', 'error': str(error),
            'pc': machine.cpu.reg_read(ar.UC_ARM_REG_PC), 'cpsr': machine.cpu.reg_read(ar.UC_ARM_REG_CPSR),
            'instructionWitnesses': sorted(machine.witnesses.values(), key=lambda row: row['address']),
            'fixtureRawHex': machine.read_bytes(machine.cached_state, machine.cached_layout['bytes']).hex(),
            'inputSha256': owner.common.hashlib.sha256(raw).hexdigest(), 'sourceCreditGranted': 0}
        report['referenceOnlySdkExchange'] = owner.common.pin(machine.sdk_exchange_path)
        (output / 'failure.json').write_text(json.dumps(report, indent=2) + '\n')
        raise
    report = {'status': 'actual-original-cached-file-XBB-preview-resource-call-returned', 'rawReturnedR0': returned,
        'instructionWitnesses': sorted(machine.witnesses.values(), key=lambda row: row['address']),
        'fixtureRawHex': machine.read_bytes(machine.cached_state, machine.cached_layout['bytes']).hex(),
        'inputSha256': owner.common.hashlib.sha256(raw).hexdigest(), 'sourceCreditGranted': 0}
    report['referenceOnlySdkExchange'] = owner.common.pin(machine.sdk_exchange_path)
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'returnedR0': returned, 'sourceCreditGranted': 0}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output.resolve())
