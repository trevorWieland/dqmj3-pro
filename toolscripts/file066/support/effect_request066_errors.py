import argparse
import ctypes
import json
import struct
from pathlib import Path

import effect_request066_session as session


CASES = [
    {'name': 'full', 'prefix': 'rom', 'state': 1},
    {'name': 'chunk13', 'prefix': 'rom', 'chunk': 13, 'state': 1},
    {'name': 'empty-file', 'prefix': 'rom', 'bytes': 0, 'state': 1},
    {'name': 'open-error', 'prefix': 'data', 'open': -7, 'state': 2},
    {'name': 'size-error', 'prefix': 'data', 'size': -9, 'state': 2},
    {'name': 'read-error-retains-buffer', 'prefix': 'data', 'read': -11, 'state': 2, 'leak': True},
    {'name': 'short-read', 'prefix': 'data', 'limit': 513, 'state': 2},
    {'name': 'zero-read', 'prefix': 'data', 'limit': 0, 'state': 2},
    {'name': 'payload-allocation-failure', 'prefix': 'data', 'fail': 5, 'state': 2},
]


def configure(machine, case):
    size = case.get('bytes', 2048)
    limit = case.get('limit', size)
    mask = 1 if case['prefix'] == 'rom' else 3
    if hasattr(machine, 'cpu'):
        if case['prefix'] != 'rom' and machine.original:
            alias = machine.base + 0xf900
            machine.cpu.mem_write(alias, b'data\0')
            machine.mount_active, machine.active = True, True
            result = machine.invoke('request_register066', [alias, machine.device, 0, 1])
            machine.mount_active, machine.active = False, False
            if result:
                raise ValueError('Actual additional borrowed device alias failed')
            machine.extra_scheme = alias
        if size != 2048:
            suffix = machine.base + 0xf400
            machine.invoke('effect_request_device_prepare066', [machine.image, size, suffix])
        machine.invoke('effect_request_device_configure066', [case.get('open', 0) & 0xffffffff,
            case.get('size', 0) & 0xffffffff, case.get('read', 0) & 0xffffffff, case.get('chunk', 0), limit, mask])
        if case.get('fail'):
            machine.cpu.mem_write(machine.state + machine.layout['failAt'], struct.pack('<I', case['fail']))
    else:
        if size != 2048:
            machine.library.effect_request_device_prepare066(machine.image, size, ctypes.addressof(machine.suffix))
        machine.library.effect_request_device_configure066(case.get('open', 0), case.get('size', 0),
            case.get('read', 0), case.get('chunk', 0), limit, mask)
        if case.get('fail'):
            ctypes.memmove(machine.state + machine.layout['failAt'], struct.pack('<I', case['fail']), 4)


class Original(session.Original):
    def prepare_case(self, case):
        self.setup()
        self.mount()
        self.extra_scheme = None
        configure(self, case)
        self.factory(case['prefix'] + ':/data/Effect/ef00007.pef')
        row = self.graph['objects']['effect_request_layout066']
        self.request_layout = dict(zip(session.core.LAYOUT, struct.unpack('<13I', self.read_bytes(row['address'], 52)), strict=True))
        self.expected_ops = [0x858ed8, 0x858e7c, 0x858eb4]

    def delete_case(self):
        self.destroy()
        if self.extra_scheme:
            self.mount_active, self.active = True, True
            self.invoke('request_unregister066', [self.extra_scheme])
            self.mount_active, self.active = False, False
        self.unmount()


class Machine(session.Machine):
    def prepare_case(self, case):
        self.setup()
        self.owner_prepare(session.device_reference.generated_file())
        self.invoke('effect_request_fixture_bind066', [])
        suffix = self.base + 0xf400
        self.cpu.mem_write(suffix, '/data/Effect/ef00007.pef'.encode('utf-16le') + b'\0\0')
        self.device = self.invoke('effect_request_device_prepare066', [self.image, 2048, suffix])
        self.device_bytes = self.graph['objects']['request_device066']['bytes']
        self.invoke('effect_request_source_files_bind066', [])
        configure(self, case)
        path = self.base + 0xc000
        self.cpu.mem_write(path, (case['prefix'] + ':/data/Effect/ef00007.pef').encode('utf-16le') + b'\0\0')
        self.active = True
        self.task = self.invoke('effect_request_sync066', [0, path, 5, self.request_heap, 128])
        self.active = False


class Native(session.Native):
    def __init__(self, folder):
        super().__init__(folder)
        self.library.effect_request_device_configure066.argtypes = [ctypes.c_int] * 3 + [ctypes.c_uint] * 3

    def prepare_case(self, case):
        self.owner_prepare(session.device_reference.generated_file())
        self.library.effect_request_fixture_bind066()
        self.suffix = ctypes.create_string_buffer('/data/Effect/ef00007.pef'.encode('utf-16le') + b'\0\0')
        self.device = self.library.effect_request_device_prepare066(self.image, 2048, ctypes.addressof(self.suffix))
        self.library.effect_request_source_files_bind066()
        configure(self, case)
        self.path_buffer = ctypes.create_string_buffer((case['prefix'] + ':/data/Effect/ef00007.pef').encode('utf-16le') + b'\0\0')
        self.returned = False
        self.task = self.library.effect_request_sync066(None, ctypes.addressof(self.path_buffer), 5, self.request_heap, 128)
        self.returned = True


def observe(machine, case, released=False):
    p, layout, read = machine.layout['pointerBytes'], machine.request_layout, machine.read_bytes
    session.core.validate_layout(layout, p)
    ptr = lambda at: int.from_bytes(read(at, p), 'little')
    word = lambda at: int.from_bytes(read(at, 4), 'little')
    heap = machine.state + machine.layout['heap'] + machine.layout['payloadOffset']
    stride = machine.layout['heapStride']
    if machine.task != heap + stride:
        raise ValueError('Error-path task identity differs')
    task = machine.task
    provider = task + layout['embedded']
    if ptr(task) != machine.expected_ops[1 if released else 0] or ptr(provider) != machine.expected_ops[2]:
        raise ValueError('Error-path task/provider operations differ')
    control = ptr(task + layout['control'])
    selector = 0 if case['prefix'] == 'rom' else 1
    if control != heap + stride * 2 or read(control, 2) != bytes([case['state'], selector]):
        raise ValueError('Error-path caller ready/source selector differs')
    allocation = case.get('bytes', 2048) != 0 and not case.get('open') and not case.get('size')
    allocated = allocation and not case.get('fail')
    success_data = allocated and case['state'] == 1
    expected_data = heap + stride * 4 if success_data and not released else 0
    if ptr(provider + layout['data']) != expected_data:
        raise ValueError('Error-path data pointer/leak-clearing semantics differ')
    expected_data_bytes = case.get('bytes', 2048) if success_data else 0
    expected_file_bytes = 0xffffffffffffffff if case.get('open') or case.get('size') else case.get('bytes', 2048)
    if read(provider + layout['dataBytes'], 8) != struct.pack('<Q', expected_data_bytes) or read(provider + layout['fileBytes'], 8) != struct.pack('<Q', expected_file_bytes):
        raise ValueError('Error-path complete U64 data/file metadata differs')
    if read(provider + layout['reserved'], 16) != bytes([machine.pattern]) * 16 or read(control + 2, layout['path'] - 2) != bytes([machine.pattern]) * (layout['path'] - 2):
        raise ValueError('Error path changed constructor-unwritten/padding bytes')
    count = word(machine.state + machine.layout['allocations'])
    if count != 4 + int(allocated):
        raise ValueError('Error-path allocation count differs')
    records = [list(struct.unpack('<6I', read(machine.state + machine.layout['records'] + slot * 24, 24))) for slot in range(count)]
    logical, physical = [272, 60, 8, 80] + ([case.get('bytes', 2048)] if allocated else []), [272, layout['taskBytes'], layout['controlBytes'], 80] + ([case.get('bytes', 2048)] if allocated else [])
    for slot, record in enumerate(records):
        live = int((not released and slot in [1, 2, 3]) or (slot == 4 and (case.get('leak') or success_data and not released)))
        if record[:3] != [logical[slot], physical[slot], 128 if slot == 4 else 4] or record[5] != live:
            raise ValueError('Error-path logical/native budget or measured retained/leaked ownership differs')
        at = heap + slot * stride
        if read(at - 128, 128) != bytes([machine.pattern]) * 128 or read(at + physical[slot], 8192 - physical[slot] + 128) != bytes([machine.pattern]) * (8192 - physical[slot] + 128):
            raise ValueError('Error-path allocation guard changed')
    payload = ''
    if allocated:
        copied = 0 if case.get('read') else min(case.get('limit', 2048), case.get('bytes', 2048))
        expected = session.device_reference.generated_file()[:copied] + bytes([machine.pattern]) * (case.get('bytes', 2048) - copied)
        actual = read(heap + stride * 4, case.get('bytes', 2048))
        if actual != expected:
            raise ValueError('Error-path actual transferred and untouched payload bytes differ')
        payload = actual.hex()
    if getattr(machine, 'lifetime_violations', []):
        raise ValueError('Error-path program accessed a retired allocation')
    if hasattr(machine, 'cpu'):
        at = machine.graph['objects']['effect_request_device_layout066']['address']
        device_layout = dict(zip(session.DEVICE_LAYOUT, struct.unpack('<8I', read(at, 32)), strict=True))
    else:
        device_layout = dict(zip(session.DEVICE_LAYOUT, (ctypes.c_uint * 8).in_dll(machine.library, 'effect_request_device_layout066'), strict=True))
    counters = {name: word(machine.device + device_layout[name]) for name in ['opens', 'reads', 'sizes', 'closes']}
    opened = not case.get('open')
    reads = 0
    if allocated:
        if case.get('read'):
            reads = 1
        elif case.get('limit', 2048) < case.get('bytes', 2048):
            reads = 2 if case.get('limit', 2048) else 1
        else:
            reads = (case.get('bytes', 2048) + case.get('chunk', 2048) - 1) // case.get('chunk', 2048)
    expected_counters = {'opens': int(opened), 'sizes': int(opened), 'reads': reads, 'closes': int(opened)}
    if counters != expected_counters:
        raise ValueError('Error-path real device read/close ordering counters differ')
    path_raw = (case['prefix'] + ':/data/Effect/ef00007.pef').encode('utf-16le') + b'\0\0'
    owned_path = ptr(control + layout['path'])
    if owned_path != heap + stride * 3 + 12:
        raise ValueError('Error-path owned UTF16 path identity differs')
    owned_expected = struct.pack('<3I', 0xffffffff if released else 0, 32, len(path_raw) // 2 - 1) + path_raw
    owned_expected += bytes([machine.pattern]) * (80 - len(owned_expected))
    temporary_expected = struct.pack('<3I', 0xffffffff, 128, len(path_raw) // 2 - 1) + path_raw
    temporary_expected += bytes([machine.pattern]) * (272 - len(temporary_expected))
    if read(heap + stride * 3, 80) != owned_expected or read(heap, 272) != temporary_expected:
        raise ValueError('Error-path complete temporary/owned string storage differs')
    events = [list(struct.unpack('<6I', read(machine.state + machine.layout['log'] + index * 24, 24)))
        for index in range(word(machine.state + machine.layout['events']))]
    return {'name': case['name'], 'released': released, 'state': case['state'], 'dataBytes': expected_data_bytes,
        'fileBytes': expected_file_bytes, 'allocations': [{'logical': r[0], 'alignment': r[2], 'live': r[5]} for r in records],
        'events': events, 'deviceCounters': counters, 'payloadHex': payload}


def run(build, output):
    if output.exists():
        raise ValueError('Preserve request error/short-read cohort')
    output.mkdir(parents=True)
    machines = {'original': Original(build / 'arm/effect_resource.elf'), 'arm': Machine('arm', build / 'arm/effect_resource.elf'),
        'windows': Native(build / 'windows'), 'a64': Machine('a64', build / 'a64/effect_resource.elf')}
    rows = []
    try:
        for case in CASES:
            current = []
            for profile, machine in machines.items():
                machine.prepare_case(case)
                before = observe(machine, case)
                machine.delete_case()
                after = observe(machine, case, True)
                current.append({'profile': profile, 'before': before, 'after': after})
            expected = {k: v for k, v in current[0].items() if k != 'profile'}
            if any({k: v for k, v in row.items() if k != 'profile'} != expected for row in current[1:]):
                raise ValueError('Actual original/source error/short-read session differs')
            rows.extend(current)
            with (output / 'rows.jsonl').open('a', encoding='utf-8') as stream:
                for row in current:
                    stream.write(json.dumps(row, separators=(',', ':')) + '\n')
            print(json.dumps({'case': case['name'], 'sets': len(rows) // 4}), flush=True)
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'error': str(error), 'completedSets': len(rows) // 4,
            'sourceCreditGranted': 0}, indent=2) + '\n')
        raise
    report = {'status': 'four-target-request-errors-zero-short-chunked-and-allocation-failure-cohort',
        'originalConditions': session.core.reference.conditions.serializable(machines['original'].condition_outcomes),
        'sets': len(rows) // 4, 'sourceCreditGranted': 0,
        'limits': ['Read-error retained buffer leak is preserved, not repaired.', 'ROM/PATCH size/read reporter paths remain separately unqualified.']}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(report))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output.resolve())
