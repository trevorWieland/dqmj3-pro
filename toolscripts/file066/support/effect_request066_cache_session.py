import argparse
import ctypes
import json
import struct
from pathlib import Path
from types import SimpleNamespace
from unicorn import arm_const as ar, arm64_const as aa

import effect_request066_cache_reference as original
import effect_request066_session as session
import effect065_owner_oracle as owner
from native_effect065_resource_graph_observation import logical as resource_logical
from effect065_resource_header_review import assert_header_padding


class Original(session.Original):
    def prepare_cache(self):
        self.setup()
        self.mount()
        self.invoke('effect_request_cache_miss_prepare066', [1])
        manager = self.base + 0xf000
        self.cpu.mem_write(manager, struct.pack('<II', 0x66000001, 0))
        self.cpu.mem_write(0x898154, struct.pack('<I', manager))
        self.cpu.mem_write(0x890f30, struct.pack('<I', self.request_heap))
        self.before_cached = self.read_bytes(self.cached_state, self.cached_layout['bytes'])
        self.expected_ops = [0x858ed8, 0x858e7c, 0x858eb4]


class Machine(session.Machine):
    def prepare_cache(self):
        self.setup()
        raw = session.device_reference.generated_file()
        self.owner_prepare(raw)
        self.invoke('effect_cached_fixture_reset065', [0, 7, self.image])
        suffix = self.base + 0xf400
        self.cpu.mem_write(suffix, '/data/Effect/ef00007.pef'.encode('utf-16le') + b'\0\0')
        self.device = self.invoke('effect_request_device_prepare066', [self.image, len(raw), suffix])
        self.device_bytes = self.graph['objects']['request_device066']['bytes']
        self.invoke('effect_request_cache_source_bind066', [])
        self.invoke('effect_request_cache_miss_prepare066', [0])
        self.before_cached = self.read_bytes(self.cached_state, self.cached_layout['bytes'])


class Native(session.Native):
    def __init__(self, folder):
        super().__init__(folder)
        self.library.effect_cached_fixture_reset065.argtypes = [ctypes.c_uint, ctypes.c_int, ctypes.c_void_p]
        self.library.effect_request_cache_miss_prepare066.argtypes = [ctypes.c_uint]

    def prepare_cache(self):
        self.owner_prepare(session.device_reference.generated_file())
        self.library.effect_cached_fixture_reset065(0, 7, self.image)
        self.suffix = ctypes.create_string_buffer('/data/Effect/ef00007.pef'.encode('utf-16le') + b'\0\0')
        self.device = self.library.effect_request_device_prepare066(self.image, 2048, ctypes.addressof(self.suffix))
        self.library.effect_request_cache_source_bind066()
        self.library.effect_request_cache_miss_prepare066(0)
        self.before_cached = self.read_bytes(self.cached_state, self.cached_layout['bytes'])

    def execute_cache(self):
        return self.execute()


def execute(machine):
    if not hasattr(machine, 'cpu'):
        return machine.execute_cache()
    registers = aa if machine.a64 else ar
    prefix = 'UC_ARM64_REG_S' if machine.a64 else 'UC_ARM_REG_S'
    for index, bits in enumerate([0x3f800000, 0x40000000, 0x40400000]):
        machine.cpu.reg_write(getattr(registers, prefix + str(index)), bits)
    machine.active = True
    result = machine.invoke('fn_002a47cc', [machine.cached_state, 7, 9, 1])
    machine.active = False
    return result


def observe(machine, result, call=1):
    p, read = machine.layout['pointerBytes'], machine.read_bytes
    pointer = lambda at: int.from_bytes(read(at, p), 'little')
    word = lambda at: int.from_bytes(read(at, 4), 'little')
    entry = machine.cached_state + machine.cached_layout['entry']
    vector_offset = 24 if p == 4 else 32
    if result != entry + vector_offset:
        raise ValueError('Game cache-miss caller did not return its actual owned vector')
    if struct.unpack('<4I', read(entry, 16)) != (call, call, 7, 0):
        raise ValueError('Game cache-miss logical refs/key/resource slot differ')
    if read(entry + (36 if p == 4 else 56), 4) != b'\x01\x01\xa5\xa5':
        raise ValueError('Game cache-miss mode/loaded/unknown bytes differ')
    task = pointer(entry + 16)
    heap = machine.state + machine.layout['heap'] + machine.layout['payloadOffset']
    stride = machine.layout['heapStride']
    if task != heap + stride:
        raise ValueError('Game cache did not own the actual produced file task')
    task_layout = machine.request_layout
    expected_layout = [60, 48, 8, 4, 8, 56, 4, 8, 12, 16, 24, 32, 4] if p == 4 else [88, 64, 16, 8, 16, 80, 8, 16, 24, 32, 40, 48, 8]
    if list(task_layout.values()) != expected_layout:
        raise ValueError('Game task layout differs from independently reviewed target/native storage')
    provider = task + task_layout['embedded']
    if pointer(task) != machine.expected_ops[0] or pointer(provider) != machine.expected_ops[2]:
        raise ValueError('Game produced task/provider operation identities differ')
    if pointer(task + task_layout['provider']) != provider or pointer(provider + task_layout['data']) != heap + stride * 4:
        raise ValueError('Actual task/provider/file data identities differ')
    control = pointer(task + task_layout['control'])
    if control != heap + stride * 2 or read(control, 2) != b'\x01\x00':
        raise ValueError('Actual produced task is not ready1/resolved ROM0')
    if read(control + 2, task_layout['path'] - 2) != bytes([machine.pattern]) * (task_layout['path'] - 2):
        raise ValueError('Game changed original/control native padding')
    path = pointer(control + task_layout['path'])
    expected_path = 'rom:/data/Effect/ef00007.pef'.encode('utf-16le') + b'\0\0'
    if path != heap + stride * 3 + 12 or read(path, len(expected_path)) != expected_path:
        raise ValueError('Game-owned file task did not retain its actual copied path')
    if pointer(provider + task_layout['heap']) != machine.request_heap or word(provider + task_layout['alignment']) != 128:
        raise ValueError('Game task user allocator/payload alignment changed')
    if read(provider + task_layout['dataBytes'], 16) != struct.pack('<4I', 2048, 0, 2048, 0):
        raise ValueError('Game task full U64 file/data lengths differ')
    if read(provider + task_layout['reserved'], 16) != bytes([machine.pattern]) * 16:
        raise ValueError('Game changed16 constructor-unwritten provider bytes')
    if p == 8 and read(provider + task_layout['alignment'] + 4, 4) != bytes([machine.pattern]) * 4:
        raise ValueError('Game changed native provider alignment padding')
    data = heap + stride * 4
    generated = session.device_reference.generated_file()
    for low, high in [(0, 0x200), (0x600, 2048)]:
        if read(data + low, high - low) != generated[low:high]:
            raise ValueError('Game changed non-resource file/container/preview bytes')
    primary = pointer(entry + (20 if p == 4 else 24))
    begin, end, capacity = [pointer(entry + vector_offset + index * p) for index in range(3)]
    if (primary, begin, end, capacity) != (heap + stride * 6, heap + stride * 8, heap + stride * 8 + p, heap + stride * 8 + 32 * p):
        raise ValueError('Actual game preview ownership/vector capacity differs')
    if pointer(begin) != heap + stride * 7:
        raise ValueError('Actual game preview vector entry differs')
    expected_primary = generated[0x608:0x748]
    expected_extra = bytearray(expected_primary)
    struct.pack_into('<3f', expected_extra, 260, 2, 4, 6)
    if read(primary, 320) != expected_primary or read(heap + stride * 7, 320) != expected_extra:
        raise ValueError('Actual game preview full records/translation differ')
    if read(begin + p, 31 * p) != bytes([machine.pattern]) * (31 * p):
        raise ValueError('Game changed uninitialized vector capacity')
    expected_cached = bytearray(machine.before_cached)
    entry_offset = machine.cached_layout['entry']
    expected_cached[entry_offset:entry_offset + 16] = struct.pack('<4I', call, call, 7, 0)
    for at in [entry_offset + 16, entry_offset + (20 if p == 4 else 24)] + [entry_offset + vector_offset + index * p for index in range(3)]:
        expected_cached[at:at + p] = read(machine.cached_state + at, p)
    flags = entry_offset + (36 if p == 4 else 56)
    expected_cached[flags:flags + 2] = b'\x01\x01'
    if read(machine.cached_state, len(expected_cached)) != expected_cached:
        raise ValueError('Game changed non-owned cache/task/provider/heap/padding fixture bytes')
    low = pointer(machine.cached_state + (4 if p == 4 else 8))
    if read(low, 52 if p == 4 or machine.original else 96) != bytes(52 if p == 4 or machine.original else 96):
        raise ValueError('Game changed its independently initialized blank lower ownership graph')
    proxy = SimpleNamespace(**machine.__dict__)
    proxy.original, proxy.read_bytes = machine.original, machine.read_bytes
    observation = owner.OwnerObservation(proxy, 0, image_override=(data + 0x200, 0x400))
    for slot, physical, label in [(1, task_layout['taskBytes'], 'file-task'), (2, task_layout['controlBytes'], 'file-control'),
                                   (4, 2048, 'serialized-file'), (5, p, 'archive-carrier'), (8, 32 * p, 'preview-vector')]:
        observation.typed_allocation(heap + stride * slot, physical, label)
    header = observation.snapshot()
    assert_header_padding(header['resourceRawHex'], machine.layout, machine.pattern)
    if machine.lifetime_violations:
        raise ValueError('Actual game crossed a retired allocation lifetime')
    return {'state': [call, call, 7, 0], 'previewPrimaryHex': read(primary, 320).hex(),
        'previewExtraHex': read(heap + stride * 7, 320).hex(), 'resource': resource_logical(header),
        'rawCachedHex': read(machine.cached_state, machine.cached_layout['bytes']).hex()}


def logical(row):
    return {key: value for key, value in row.items() if key != 'rawCachedHex'}


def run(build, output):
    if output.exists():
        raise ValueError('Preserve genuine four-target game cache-miss session')
    output.mkdir(parents=True)
    machines = {'original': Original(build / 'arm/effect_resource.elf'),
        'arm': Machine('arm', build / 'arm/effect_resource.elf'), 'windows': Native(build / 'windows'),
        'a64': Machine('a64', build / 'a64/effect_resource.elf')}
    rows = {}
    try:
        for profile, machine in machines.items():
            machine.prepare_cache()
            if profile == 'original':
                machine.request_layout = dict(zip(session.core.LAYOUT, struct.unpack('<13I', machine.read_bytes(
                    machine.graph['objects']['effect_request_layout066']['address'], 52)), strict=True))
            rows[profile] = [observe(machine, execute(machine), call) for call in range(1, 4)]
            (output / (profile + '.json')).write_text(json.dumps(rows[profile], indent=2) + '\n')
        if any([logical(row) for row in profile_rows] != [logical(row) for row in rows['original']] for profile_rows in rows.values()):
            raise ValueError('Genuine game cache-miss original/source graphs differ')
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'error': str(error), 'completedProfiles': list(rows),
            'sourceCreditGranted': 0}, indent=2) + '\n')
        raise
    report = {'status': 'four-target-game-cache-miss-real-file-task-XBB-preview-resource-session',
        'originalConditions': session.core.reference.conditions.serializable(machines['original'].condition_outcomes),
        'sourceCreditGranted': 0, 'applicationBootstrapOrCompleteCacheLifecycleQualified': False}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(report))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output.resolve())
