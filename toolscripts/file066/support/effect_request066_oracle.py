import argparse
import ctypes
import json
import struct
from pathlib import Path

import effect_request066_reference as reference
import effect065_cached_reference as cached
import effect065_cached_oracle as cached_oracle


LAYOUT = ['taskBytes', 'providerBytes', 'controlBytes', 'control', 'embedded', 'provider', 'heap',
    'alignment', 'data', 'dataBytes', 'fileBytes', 'reserved', 'path']
ALIASES = {'request_construct066': 'effect_request_construct066', 'request_ready066': 'effect_request_ready066',
    'request_bytes066': 'effect_request_bytes066', 'request_length066': 'effect_request_length066',
    'request_load066': 'effect_request_load066', 'request_delete066': 'effect_request_destroy066'}


class Machine(reference.Machine):
    def __init__(self, profile, elf):
        if profile == 'original':
            super().__init__(elf)
        else:
            cached.Machine.__init__(self, elf, profile)
            helpers = {name: row for name, row in self.graph['functions'].items()
                if name.startswith(('request_', 'effect_request_'))}
            self.fixture.update(helpers)
            self.functions.update({name: row['address'] for name, row in helpers.items()})
            self.functions.update({name: self.functions[source] for name, source in ALIASES.items()})
            self.scratch = (self.base + 0xc000, self.base + 0xf000)
            self.request_heap = self.invoke('effect_request_user_heap066', [])
        row = self.graph['objects']['effect_request_layout066']
        self.request_layout = dict(zip(LAYOUT, struct.unpack('<' + 'I' * len(LAYOUT),
            self.read_bytes(row['address'], row['bytes'])), strict=True))
        self.expected_ops = [0x858ed8, 0x858e7c, 0x858eb4] if self.original else [
            self.graph['objects'][name]['address'] for name in ['effect_request_task_operations066',
                'effect_request_base_operations066', 'effect_request_provider_operations066']]
        self.empty_path = 0x8f9cf4 if self.original else self.invoke('effect_request_empty_path066', [])

    def prepare_case(self, path, selector=0, alignment=128, pattern=0xa5):
        self.setup()
        self.owner_prepare(cached.container(), pattern=pattern)
        self.invoke('effect_cached_fixture_reset065', [int(self.original), 7, self.image])
        if not self.original:
            self.invoke('effect_request_fixture_bind066', [])
        self.path_input = self.scratch[0]
        self.path_raw = path.encode('utf-16le') + b'\0\0'
        self.cpu.mem_write(self.path_input, self.path_raw)
        self.task = self.invoke('effect_request_fixture_task_allocate066', [int(self.original)])
        self.active = True
        result = self.invoke('request_construct066', [self.task, selector, self.path_input, self.request_heap, alignment])
        self.active = False
        if result != self.task:
            raise ValueError('Task constructor did not return independently allocated caller storage')
        self.selector, self.alignment = selector, alignment

    def delete_case(self):
        self.active = True
        self.invoke('request_delete066', [self.task])
        self.active = False


class Native(cached_oracle.Native):
    def __init__(self, folder):
        super().__init__(folder)
        self.library.effect_request_user_heap066.restype = ctypes.c_void_p
        self.request_heap = self.library.effect_request_user_heap066()
        self.library.effect_request_empty_path066.restype = ctypes.c_void_p
        self.empty_path = self.library.effect_request_empty_path066()
        self.library.effect_request_fixture_task_allocate066.argtypes = [ctypes.c_uint]
        self.library.effect_request_fixture_task_allocate066.restype = ctypes.c_void_p
        self.library.effect_request_construct066.argtypes = [ctypes.c_void_p, ctypes.c_ubyte, ctypes.c_void_p, ctypes.c_void_p, ctypes.c_uint]
        self.library.effect_request_construct066.restype = ctypes.c_void_p
        self.library.effect_request_destroy066.argtypes = [ctypes.c_void_p]
        self.library.effect_request_destroy066.restype = None
        self.request_layout = dict(zip(LAYOUT, (ctypes.c_uint * len(LAYOUT)).in_dll(self.library, 'effect_request_layout066'), strict=True))
        self.expected_ops = [ctypes.addressof((ctypes.c_ubyte * 1).in_dll(self.library, name)) for name in [
            'effect_request_task_operations066', 'effect_request_base_operations066', 'effect_request_provider_operations066']]

    def prepare_case(self, path, selector=0, alignment=128, pattern=0xa5):
        self.owner_prepare(cached.container(), pattern=pattern)
        self.library.effect_request_fixture_bind066()
        self.path_raw = path.encode('utf-16le') + b'\0\0'
        self.path_buffer = ctypes.create_string_buffer(self.path_raw)
        self.task = self.library.effect_request_fixture_task_allocate066(0)
        self.returned = False
        result = self.library.effect_request_construct066(self.task, selector, ctypes.addressof(self.path_buffer), self.request_heap, alignment)
        self.returned = True
        if result != self.task:
            raise ValueError('Native task constructor return identity differs')
        self.selector, self.alignment = selector, alignment

    def delete_case(self):
        self.returned = False
        self.library.effect_request_destroy066(self.task)
        self.returned = True


def validate_layout(layout, p):
    if p not in (4, 8):
        raise ValueError('Unsupported request pointer representation')
    expected_layout = [60, 48, 8, 4, 8, 56, 4, 8, 12, 16, 24, 32, 4] if p == 4 else [88, 64, 16, 8, 16, 80, 8, 16, 24, 32, 40, 48, 8]
    if list(layout.values()) != expected_layout:
        raise ValueError('Compiled layout differs from independently measured target/native type contract')


def observe(machine, released=False, expected_state=0):
    layout, p = machine.request_layout, machine.layout['pointerBytes']
    read = machine.read_bytes
    validate_layout(layout, p)
    pointer = lambda address: int.from_bytes(read(address, p), 'little')
    word = lambda address: int.from_bytes(read(address, 4), 'little')
    task, provider = machine.task, machine.task + layout['embedded']
    first_payload = machine.state + machine.layout['heap'] + machine.layout['payloadOffset']
    if task != first_payload:
        raise ValueError('Task is not the independently recorded first owned allocation')
    if pointer(task) != machine.expected_ops[1 if released else 0] or pointer(provider) != machine.expected_ops[2]:
        raise ValueError('Task/provider genuine operation-table publication differs')
    control = pointer(task + layout['control'])
    if control != first_payload + machine.layout['heapStride']:
        raise ValueError('Control does not preserve independently known allocation identity')
    if pointer(task + layout['provider']) != provider or pointer(provider + layout['heap']) != machine.request_heap:
        raise ValueError('Task provider/self/heap pointer ownership differs')
    if word(provider + layout['alignment']) != machine.alignment or pointer(provider + layout['data']) != 0:
        raise ValueError('Provider alignment or fresh data differs')
    if read(provider + layout['dataBytes'], 8) != bytes(8) or read(provider + layout['fileBytes'], 8) != bytes([255]) * 8:
        raise ValueError('Provider complete U64 zero/sentinel lengths differ')
    if read(provider + layout['reserved'], 16) != bytes([machine.pattern]) * 16:
        raise ValueError('Constructor changed its16 original-unwritten provider bytes')
    if p == 8 and read(provider + layout['alignment'] + 4, 4) != bytes([machine.pattern]) * 4:
        raise ValueError('Native provider alignment padding changed')
    if read(control, 2) != bytes([expected_state, machine.selector & 255]) or read(control + 2, layout['path'] - 2) != bytes([machine.pattern]) * (layout['path'] - 2):
        raise ValueError('Control state/selector/unwritten original/native padding differs')
    path = pointer(control + layout['path'])
    count = word(machine.state + machine.layout['allocations'])
    expected_count = 2 if machine.path_raw == b'\0\0' else 3
    if count != expected_count:
        raise ValueError('Task/control/path allocation ownership count differs')
    records, payloads = [], []
    for slot in range(count):
        record = struct.unpack('<6I', read(machine.state + machine.layout['records'] + slot * 24, 24))
        payload = machine.state + machine.layout['heap'] + slot * machine.layout['heapStride'] + machine.layout['payloadOffset']
        records.append(record)
        payloads.append(payload)
        if record[5] != int(not released) or record[2] != 4:
            raise ValueError('Actual request allocation lifetime/alignment differs')
        if read(payload - 128, 128) != bytes([machine.pattern]) * 128 or read(payload + record[1], 8192 - record[1] + 128) != bytes([machine.pattern]) * (8192 - record[1] + 128):
            raise ValueError('Task/control/string physical allocation guard differs')
    if payloads[:2] != [task, control] or records[0][:2] != (60, layout['taskBytes']) or records[1][:2] != (8, layout['controlBytes']):
        raise ValueError('Target/native task and control allocation budgets differ')
    if expected_count == 2:
        if path != machine.empty_path:
            raise ValueError('Empty UTF16 path did not use independent static identity')
    else:
        length = len(machine.path_raw) // 2 - 1
        capacity = max(32, length)
        size = (capacity + 8) * 2
        if path != payloads[2] + 12 or records[2][:2] != (size, size):
            raise ValueError('Path allocation representation/budget differs')
        expected = struct.pack('<3I', 0xffffffff if released else 0, capacity, length) + machine.path_raw
        expected += bytes([machine.pattern]) * (size - len(expected))
        if read(payloads[2], size) != expected:
            raise ValueError('Complete UTF16 string header/payload/unused capacity differs')
    if read(path, len(machine.path_raw)) != machine.path_raw:
        raise ValueError('Control does not retain the exact independently supplied UTF16 path')
    event_count = word(machine.state + machine.layout['events'])
    events = [list(struct.unpack('<6I', read(machine.state + machine.layout['log'] + index * 24, 24))) for index in range(event_count)]
    if getattr(machine, 'lifetime_violations', []):
        raise ValueError('Original/source execution read or wrote a logically retired allocation')
    return {'selector': machine.selector, 'alignment': machine.alignment, 'pathHex': machine.path_raw.hex(),
        'released': released, 'logicalAllocations': [record[0] for record in records], 'events': events,
        'rawTaskHex': read(task, layout['taskBytes']).hex(), 'rawControlHex': read(control, layout['controlBytes']).hex()}


def logical(row):
    return {key: value for key, value in row.items() if not key.startswith('raw')}


def run(build, output):
    if output.exists():
        raise ValueError('Preserve request constructor ownership cohort')
    output.mkdir(parents=True)
    machines = {profile: Native(build / 'windows') if profile == 'windows' else Machine(profile,
        build / ('arm' if profile == 'original' else profile) / 'effect_resource.elf')
        for profile in ['original', 'arm', 'windows', 'a64']}
    rows = []
    try:
        for path in ['', 'rom:/data/Effect/ef00007.pef', 'x' * 33]:
            for selector in [0, 3, 4, 255]:
                for pattern in [0x5a, 0xa5]:
                    current = []
                    for profile, machine in machines.items():
                        machine.prepare_case(path, selector, pattern=pattern)
                        before = observe(machine)
                        machine.delete_case()
                        after = observe(machine, True)
                        current.append({'profile': profile, 'before': before, 'after': after})
                    expected = {key: logical(value) for key, value in current[0].items() if key != 'profile'}
                    if any({key: logical(value) for key, value in row.items() if key != 'profile'} != expected for row in current[1:]):
                        raise ValueError('Actual original/source request ownership observations differ')
                    rows.extend(current)
                    with (output / 'rows.jsonl').open('a', encoding='utf-8') as stream:
                        for row in current:
                            stream.write(json.dumps(row, separators=(',', ':')) + '\n')
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'error': str(error), 'completedSets': len(rows) // 4,
            'sourceCreditGranted': 0}, indent=2) + '\n')
        raise
    report = {'status': 'actual-original-source-task-constructor-lifetime-cohort', 'sets': len(rows) // 4,
        'originalConditions': reference.conditions.serializable(machines['original'].condition_outcomes),
        'sourceCreditGranted': 0, 'qualifiedFileReadOrFactoryBootstrap': False}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(report))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output.resolve())
