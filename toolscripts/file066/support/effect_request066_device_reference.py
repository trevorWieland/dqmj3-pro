import argparse
import json
import struct
from pathlib import Path
from unicorn import arm_const as ar

import effect_request066_reference as reference
from native_archive032_fixtures import name_key


ROOT = reference.ROOT


def generated_file():
    raw = bytearray(2048)
    names = [b'ef00007.ptcl', b'ef00007.prev']
    struct.pack_into('<4I', raw, 0, 0x01424258, 2, 2, 0)
    for index, (name, offset, size) in enumerate(zip(names, [0x200, 0x600], [0x400, 328], strict=True)):
        at = 0x80 + index * 32
        raw[at:at + len(name) + 1] = name + b'\0'
        struct.pack_into('<4I', raw, 32 + index * 16, offset, size, at, name_key(name, 0))
    base = 0x200
    for at, value in [(8, 1), (0x10, 0x100), (0x14, 0x200), (0x1c, 0x220),
                      (0x24, 0x280), (0x2c, 0x240), (0x40, 0x300), (0x48, 0x6500)]:
        struct.pack_into('<I', raw, base + at, value)
    raw[base + 0x100:base + 0x104] = b'set\0'
    struct.pack_into('<I', raw, base + 0x230, 32)
    struct.pack_into('<II', raw, 0x600, 0, 1)
    struct.pack_into('<3f', raw, 0x608 + 260, 1, 2, 3)
    return bytes(raw)


class Machine(reference.Machine):
    def __init__(self, elf):
        super().__init__(elf)
        self.functions.update(request_register066=0x1233c4, request_unregister066=0x16e9e0)
        self.registry_writes = []
        self.mount_active = False

    def write(self, cpu, access, address, size, value, user):
        if self.active and getattr(self, 'mount_active', False) and 0x8e3470 <= address < address + size <= 0x8e3670:
            self.registry_writes.append({'pc': cpu.reg_read(ar.UC_ARM_REG_PC), 'address': address, 'bytes': size, 'value': value})
            return
        if self.active and hasattr(self, 'device') and self.device <= address < address + size <= self.device + self.device_bytes:
            return
        super().write(cpu, access, address, size, value, user)

    def mount(self):
        raw = generated_file()
        self.owner_prepare(raw)
        self.invoke('effect_cached_fixture_reset065', [1, 7, self.image])
        path = self.base + 0xf400
        self.cpu.mem_write(path, '/data/Effect/ef00007.pef'.encode('utf-16le') + b'\0\0')
        self.device = self.invoke('effect_request_device_prepare066', [self.image, len(raw), path])
        self.device_bytes = self.graph['objects']['request_device066']['bytes']
        self.scheme = self.base + 0xf800
        self.cpu.mem_write(self.scheme, b'rom\0')
        self.registry_before = self.read_bytes(0x8e3470, 512)
        self.mount_active, self.active = True, True
        result = self.invoke('request_register066', [self.scheme, self.device, 0, 1])
        self.mount_active, self.active = False, False
        self.events.append({'phase': 'register-device', 'status': result, 'devicePointer': self.device,
            'registeredViaOriginalApi': True, 'registryBytesManuallySeeded': False})
        if result != 0:
            raise ValueError('Actual borrowed ROM device registration failed')

    def unmount(self):
        self.mount_active, self.active = True, True
        result = self.invoke('request_unregister066', [self.scheme])
        self.mount_active, self.active = False, False
        self.events.append({'phase': 'unregister-device', 'status': result})


def run(build, output, path='rom:/data/Effect/ef00007.pef'):
    if output.exists():
        raise ValueError('Preserve genuine mounted-device request attempt')
    output.mkdir(parents=True)
    machine = Machine(build / 'arm/effect_resource.elf')
    machine.setup()
    try:
        machine.mount()
        machine.factory(path)
        machine.getters()
        machine.destroy()
        machine.unmount()
    except Exception as error:
        report = {'status': 'preserved-mounted-device-request-stop', 'error': str(error),
            'pc': machine.cpu.reg_read(ar.UC_ARM_REG_PC), 'cpsr': machine.cpu.reg_read(ar.UC_ARM_REG_CPSR),
            'events': machine.events, 'registryWrites': machine.registry_writes,
            'allocations': machine.allocations(), 'instructionWitnesses': sorted(machine.witnesses.values(), key=lambda row: row['address']),
            'sourceCreditGranted': 0}
        (output / 'failure.json').write_text(json.dumps(report, indent=2) + '\n')
        raise
    report = {'status': 'actual-original-mounted-device-request-returned', 'events': machine.events,
        'registryWrites': machine.registry_writes, 'allocations': machine.allocations(),
        'deviceRawHex': machine.read_bytes(machine.device, machine.device_bytes).hex(),
        'instructionWitnesses': sorted(machine.witnesses.values(), key=lambda row: row['address']),
        'sourceCreditGranted': 0, 'nativeOSOrGameQualified': False}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'events': machine.events, 'sourceCreditGranted': 0}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    parser.add_argument('--path', default='rom:/data/Effect/ef00007.pef')
    args = parser.parse_args()
    run(args.build.resolve(), args.output.resolve(), args.path)
