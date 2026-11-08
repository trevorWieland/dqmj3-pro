import argparse
import ctypes
import json
import struct
from pathlib import Path
from unicorn import arm_const as ar

import effect_request066_device_reference as device_reference
import effect_request066_oracle as core


DEVICE_LAYOUT = ['bytes', 'opens', 'reads', 'sizes', 'closes', 'files', 'fileStride', 'pathBytes']
ROOT = device_reference.ROOT


class Original(device_reference.Machine):
    def prepare_session(self, path):
        self.setup()
        self.mount()
        self.factory(path)
        self.request_layout = dict(zip(core.LAYOUT, struct.unpack('<13I', self.read_bytes(
            self.graph['objects']['effect_request_layout066']['address'], 52)), strict=True))
        self.expected_ops = [0x858ed8, 0x858e7c, 0x858eb4]

    def delete_session(self):
        self.destroy()
        self.unmount()


class Machine(core.Machine):
    def __init__(self, profile, elf):
        super().__init__(profile, elf)
        self.streams = self.invoke('effect_request_source_streams066', [])
        row = self.graph['objects']['request_source_streams066']
        self.stream_bytes = row['bytes']

    def write(self, cpu, access, address, size, value, user):
        if self.active and hasattr(self, 'device') and self.device <= address < address + size <= self.device + self.device_bytes:
            return
        if self.active and hasattr(self, 'streams') and self.streams <= address < address + size <= self.streams + self.stream_bytes:
            return
        super().write(cpu, access, address, size, value, user)

    def prepare_session(self, path):
        self.setup()
        raw = device_reference.generated_file()
        self.owner_prepare(raw)
        self.invoke('effect_request_fixture_bind066', [])
        suffix = self.base + 0xf400
        self.cpu.mem_write(suffix, '/data/Effect/ef00007.pef'.encode('utf-16le') + b'\0\0')
        self.device = self.invoke('effect_request_device_prepare066', [self.image, len(raw), suffix])
        self.device_bytes = self.graph['objects']['request_device066']['bytes']
        self.invoke('effect_request_source_files_bind066', [])
        self.path_input = self.base + 0xc000
        self.cpu.mem_write(self.path_input, path.encode('utf-16le') + b'\0\0')
        self.active = True
        self.task = self.invoke('effect_request_sync066', [0, self.path_input, 5, self.request_heap, 128])
        self.active = False

    def delete_session(self):
        self.delete_case()


class Native(core.Native):
    def __init__(self, folder):
        super().__init__(folder)
        self.library.effect_request_device_prepare066.argtypes = [ctypes.c_void_p, ctypes.c_uint, ctypes.c_void_p]
        self.library.effect_request_device_prepare066.restype = ctypes.c_void_p
        self.library.effect_request_sync066.argtypes = [ctypes.c_void_p, ctypes.c_void_p, ctypes.c_uint, ctypes.c_void_p, ctypes.c_uint]
        self.library.effect_request_sync066.restype = ctypes.c_void_p
        self.library.effect_request_ready066.argtypes = [ctypes.c_void_p]
        self.library.effect_request_ready066.restype = ctypes.c_ubyte
        self.library.effect_request_bytes066.argtypes = [ctypes.c_void_p]
        self.library.effect_request_bytes066.restype = ctypes.c_void_p
        self.library.effect_request_length066.argtypes = [ctypes.c_void_p]
        self.library.effect_request_length066.restype = ctypes.c_ulonglong

    def prepare_session(self, path):
        self.owner_prepare(device_reference.generated_file())
        self.library.effect_request_fixture_bind066()
        self.suffix = ctypes.create_string_buffer('/data/Effect/ef00007.pef'.encode('utf-16le') + b'\0\0')
        self.device = self.library.effect_request_device_prepare066(self.image, 2048, ctypes.addressof(self.suffix))
        self.library.effect_request_source_files_bind066()
        self.path_buffer = ctypes.create_string_buffer(path.encode('utf-16le') + b'\0\0')
        self.returned = False
        self.task = self.library.effect_request_sync066(None, ctypes.addressof(self.path_buffer), 5, self.request_heap, 128)
        self.returned = True

    def delete_session(self):
        self.delete_case()


def observe(machine, released=False):
    core.validate_layout(machine.request_layout, machine.layout['pointerBytes'])
    p, layout, read = machine.layout['pointerBytes'], machine.request_layout, machine.read_bytes
    expected_layout = [60, 48, 8, 4, 8, 56, 4, 8, 12, 16, 24, 32, 4] if p == 4 else [88, 64, 16, 8, 16, 80, 8, 16, 24, 32, 40, 48, 8]
    if list(layout.values()) != expected_layout:
        raise ValueError('Factory layout differs from independently reviewed source storage contract')
    pointer = lambda at: int.from_bytes(read(at, p), 'little')
    word = lambda at: int.from_bytes(read(at, 4), 'little')
    task = machine.task
    heap = machine.state + machine.layout['heap'] + machine.layout['payloadOffset']
    stride = machine.layout['heapStride']
    if task != heap + stride:
        raise ValueError('Synchronous factory did not return its actual second allocation')
    if pointer(task) != machine.expected_ops[1 if released else 0]:
        raise ValueError('Synchronous task operation identity differs')
    control = pointer(task + layout['control'])
    if control != heap + stride * 2:
        raise ValueError('Factory control pointer identity differs')
    provider = task + layout['embedded']
    if pointer(task + layout['provider']) != provider or pointer(provider) != machine.expected_ops[2]:
        raise ValueError('Factory embedded provider publication differs')
    if pointer(provider + layout['heap']) != machine.request_heap or word(provider + layout['alignment']) != 128:
        raise ValueError('User heap and separate payload alignment contract differs')
    if read(control, 2) != b'\x01\x00' or read(control + 2, layout['path'] - 2) != bytes([machine.pattern]) * (layout['path'] - 2):
        raise ValueError('Actual task state1/resolved selector0/unwritten padding differs')
    path = pointer(control + layout['path'])
    expected_path = 'rom:/data/Effect/ef00007.pef'.encode('utf-16le') + b'\0\0'
    if path != heap + stride * 3 + 12 or read(path, len(expected_path)) != expected_path:
        raise ValueError('Factory copied path identity/content differs')
    data = pointer(provider + layout['data'])
    if data != (0 if released else heap + stride * 4):
        raise ValueError('Actual loaded/cleared data buffer identity differs')
    if read(provider + layout['dataBytes'], 16) != struct.pack('<4I', 2048, 0, 2048, 0):
        raise ValueError('Full data/file U64 lengths differ')
    if not released:
        if hasattr(machine, 'cpu'):
            machine.active = True
            ready = machine.invoke('request_ready066', [task])
            returned_data = machine.invoke('request_bytes066', [task])
            length = machine.invoke('request_length066', [provider])
            if not machine.a64:
                length |= machine.cpu.reg_read(ar.UC_ARM_REG_R1) << 32
            machine.active = False
        else:
            ready = machine.library.effect_request_ready066(task)
            returned_data = machine.library.effect_request_bytes066(task)
            length = machine.library.effect_request_length066(provider)
        if (ready, returned_data, length) != (1, data, 2048):
            raise ValueError('Actual caller ready/data/U64 getter ABI differs from logical storage')
    if read(provider + layout['reserved'], 16) != bytes([machine.pattern]) * 16:
        raise ValueError('File loading changed16 constructor-unwritten provider bytes')
    if p == 8 and read(provider + layout['alignment'] + 4, 4) != bytes([machine.pattern]) * 4:
        raise ValueError('Native provider padding changed')
    count = word(machine.state + machine.layout['allocations'])
    if count != 5:
        raise ValueError('Factory allocation count differs')
    records = [struct.unpack('<6I', read(machine.state + machine.layout['records'] + index * 24, 24)) for index in range(count)]
    physical = [272, layout['taskBytes'], layout['controlBytes'], 80, 2048]
    logical = [272, 60, 8, 80, 2048]
    for index, record in enumerate(records):
        if record[:3] != (logical[index], physical[index], 128 if index == 4 else 4) or record[5] != int(not released and index != 0):
            raise ValueError('Factory target/native budget/alignment/lifetime differs')
        payload = heap + index * stride
        if read(payload - 128, 128) != bytes([machine.pattern]) * 128 or read(payload + record[1], 8192 - record[1] + 128) != bytes([machine.pattern]) * (8192 - record[1] + 128):
            raise ValueError('Factory complete allocation guards changed')
    if read(heap + stride * 4, 2048) != device_reference.generated_file():
        raise ValueError('Loaded payload is not the independently generated filesystem bytes')
    if getattr(machine, 'lifetime_violations', []):
        raise ValueError('Factory execution accessed a logically retired allocation')
    if hasattr(machine, 'cpu'):
        at = machine.graph['objects']['effect_request_device_layout066']
        device_layout = dict(zip(DEVICE_LAYOUT, struct.unpack('<8I', read(at['address'], 32)), strict=True))
    else:
        device_layout = dict(zip(DEVICE_LAYOUT, (ctypes.c_uint * 8).in_dll(machine.library, 'effect_request_device_layout066'), strict=True))
    counters = {name: word(machine.device + device_layout[name]) for name in ['opens', 'reads', 'sizes', 'closes']}
    if counters != {'opens': 1, 'reads': 1, 'sizes': 1, 'closes': 1}:
        raise ValueError('Genuine filesystem open/size/read/close ownership differs')
    events = [list(struct.unpack('<6I', read(machine.state + machine.layout['log'] + index * 24, 24)))
        for index in range(word(machine.state + machine.layout['events']))]
    return {'released': released, 'logicalBytes': logical, 'events': events, 'fileCounters': counters,
        'temporaryPathRawHex': read(heap, 272).hex(), 'ownedPathRawHex': read(heap + stride * 3, 80).hex(),
        'payloadSha256': core.reference.cached.owner.common.hashlib.sha256(read(heap + stride * 4, 2048)).hexdigest()}


def run(build, output):
    if output.exists():
        raise ValueError('Preserve four-target mounted request session')
    output.mkdir(parents=True)
    machines = {'original': Original(build / 'arm/effect_resource.elf'),
        'arm': Machine('arm', build / 'arm/effect_resource.elf'), 'windows': Native(build / 'windows'),
        'a64': Machine('a64', build / 'a64/effect_resource.elf')}
    results = []
    try:
        for path in ['rom:/data/Effect/ef00007.pef', 'patch:/data/Effect/ef00007.pef']:
            rows = []
            for profile, machine in machines.items():
                machine.prepare_session(path)
                before = observe(machine)
                machine.delete_session()
                after = observe(machine, True)
                row = {'profile': profile, 'path': path, 'before': before, 'after': after}
                rows.append(row)
                (output / (str(len(results)) + '-' + profile + '.json')).write_text(json.dumps(row, indent=2) + '\n')
            expected = {key: value for key, value in rows[0].items() if key != 'profile'}
            if any({key: value for key, value in row.items() if key != 'profile'} != expected for row in rows[1:]):
                raise ValueError('Actual mounted original/source factory session differs')
            results.extend(rows)
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'error': str(error), 'completedSets': len(results) // 4,
            'sourceCreditGranted': 0}, indent=2) + '\n')
        raise
    report = {'status': 'four-target-genuine-mounted-file-factory-and-fallback-session', 'sets': len(results) // 4,
        'originalConditions': core.reference.conditions.serializable(machines['original'].condition_outcomes),
        'sourceCreditGranted': 0, 'OSFsUserOrGameBootstrapQualified': False}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(report))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output.resolve())
