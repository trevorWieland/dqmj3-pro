import ctypes
import hashlib
import json
import random
import struct
import time
from pathlib import Path

import native_effect065_build as common
from native_effect065_preview_oracle import Machine, LAYOUT, layout_from


ROOT = common.ROOT
FOLDER = ROOT / 'work/native-effect065/preview-build-v2'


class Translation(ctypes.Structure):
    _fields_ = [('x', ctypes.c_float), ('y', ctypes.c_float), ('z', ctypes.c_float)]


class Native:
    def __init__(self, dll):
        self.library = ctypes.CDLL(str(dll))
        for name in ['effect_preview_fixture065_state', 'effect_preview_fixture065_memory', 'effect_preview_fixture065_heap']:
            getattr(self.library, name).argtypes = []
            getattr(self.library, name).restype = ctypes.c_void_p
        self.layout = dict(zip(LAYOUT, list((ctypes.c_uint * len(LAYOUT)).in_dll(self.library, 'effect_preview_layout065')), strict=True))
        self.library.effect_bind_cache_memory065.argtypes = [ctypes.c_void_p]
        self.library.effect_bind_cache_memory065.restype = ctypes.c_int
        self.library.fn_002a41c4.argtypes = [ctypes.c_void_p, ctypes.c_uint, ctypes.c_void_p, Translation]
        self.library.fn_002a41c4.restype = None
        self.state = self.library.effect_preview_fixture065_state()
        self.library.effect_bind_cache_memory065(self.library.effect_preview_fixture065_memory())
        self.storage = (ctypes.c_ubyte * 0x10000)()
        self.base = ctypes.addressof(self.storage)
        if min(self.base, self.state) <= 0xffffffff:
            raise ValueError('Native preview pointer-widening profile is not above 4GiB')
        self.cache, self.entry, self.input = self.base + 0x100, self.base + 0x500, self.base + 0x1000
        self.pointer = 8

    def read(self, address, size):
        return ctypes.string_at(address, size)

    def put(self, address, value, size=None):
        size = self.pointer if size is None else size
        raw = (value & ((1 << (8 * size)) - 1)).to_bytes(size, 'little')
        ctypes.memmove(address, raw, size)

    def prepare(self, count, records):
        ctypes.memset(self.state, 0xa5, self.layout['fixtureBytes'])
        ctypes.memset(self.state, 0, 16)
        ctypes.memset(self.cache - 32, 0xa5, self.layout['cacheBytes'] + 64)
        ctypes.memset(self.entry - 32, 0xa5, self.layout['entryBytes'] + 64)
        self.put(self.cache + self.layout['cacheBegin'], self.entry)
        self.put(self.entry + self.layout['primary'], 0)
        ctypes.memset(self.entry + self.layout['vector'], 0, self.layout['vectorBytes'])
        raw = struct.pack('<II', 0x65000001, count & 0xffffffff) + records
        if len(raw) > 0xe000:
            raise ValueError('Native preview input exceeds initialized backing storage')
        ctypes.memmove(self.input, raw, len(raw))

    def invoke(self, name, args, translation=None):
        if name != 'fn_002a41c4':
            raise ValueError('Native preview API must remain explicit')
        xyz = Translation.from_buffer_copy(struct.pack('<3I', *translation))
        self.returned = False
        self.library.fn_002a41c4(*args, xyz)
        self.returned = True


def number(machine, address, size=4):
    return int.from_bytes(machine.read(address, size), 'little')


def allocation_records(machine):
    p, layout = machine.pointer, machine.layout
    count = number(machine, machine.state + 4)
    if count > 256 or number(machine, machine.state + 12):
        raise ValueError('Preview allocation fixture capacity/ownership failure')
    result = []
    for index in range(count):
        at = machine.state + layout['allocations'] + index * layout['recordBytes']
        row = {'address': number(machine, at, p), 'role': number(machine, at + layout['role']),
            'logical': number(machine, at + layout['logical']), 'physical': number(machine, at + layout['physical'], p),
            'live': number(machine, at + layout['live'])}
        low = machine.state + layout['arena']
        if row['role'] not in [0, 1] or not low + 32 <= row['address'] < row['address'] + row['physical'] <= low + 262144 - 32:
            raise ValueError('Preview allocation metadata is outside typed provider backing')
        if row['role'] == 0 and row['logical'] != 320 or row['role'] == 1 and (row['logical'] == 0 or row['logical'] % 4):
            raise ValueError('Preview logical allocation type/size differs')
        if row['physical'] != (320 if row['role'] == 0 else row['logical'] // 4 * p):
            raise ValueError('Preview logical/native allocation budget differs')
        if machine.read(row['address'] - 32, 32) != bytes([0xa5]) * 32 or machine.read(row['address'] + row['physical'], 32) != bytes([0xa5]) * 32:
            raise ValueError('Preview provider allocation guards changed')
        result.append(row)
    return result


def preserved_provider_bytes(machine, records, releases):
    layout, p = machine.layout, machine.pointer
    raw = machine.read(machine.state, layout['fixtureBytes'])
    mutable = bytearray(len(raw))
    mutable[:16] = bytes([1]) * 16
    cursor = 0
    for index, record in enumerate(records):
        at = layout['allocations'] + index * layout['recordBytes']
        for offset, size in [(0, p), (layout['role'], 4), (layout['logical'], 4), (layout['physical'], p), (layout['live'], 4)]:
            mutable[at + offset:at + offset + size] = bytes([1]) * size
        begin = record['address'] - machine.state
        expected = layout['arena'] + ((cursor + 47) & ~15)
        if begin != expected:
            raise ValueError('Preview provider allocation order/alignment/bounds differ')
        cursor = begin - layout['arena'] + record['physical'] + 32
        mutable[begin:begin + record['physical']] = bytes([1]) * record['physical']
        if record['live'] != (0 if index in releases else 1):
            raise ValueError('Preview release log and complete live allocation state differ')
    if number(machine, machine.state) != cursor or len(set(releases)) != len(releases):
        raise ValueError('Preview provider cursor or one-release ownership differs')
    start = layout['released']
    mutable[start:start + 4 * len(releases)] = bytes([1]) * (4 * len(releases))
    if any(value != 0xa5 for index, value in enumerate(raw) if not mutable[index]):
        raise ValueError('Preview changed unused provider storage, metadata padding or non-private bytes')


def observe(machine, before_cache, before_entry):
    p, layout = machine.pointer, machine.layout
    records = allocation_records(machine)
    identities = {row['address']: index for index, row in enumerate(records)}
    def identity(pointer):
        if pointer == 0:
            return None
        if pointer not in identities:
            raise ValueError('Preview exposed an unknown or truncated owned pointer')
        return identities[pointer]
    primary = identity(number(machine, machine.entry + layout['primary'], p))
    pointers = [number(machine, machine.entry + layout['vector'] + offset, p) for offset in range(0, 3 * p, p)]
    begin, end, capacity = pointers
    vector = None if begin == 0 else identity(begin)
    if begin == 0 and (end != 0 or capacity != 0):
        raise ValueError('Preview invalid/null vector metadata is outside current qualified domain')
    if begin and (end < begin or capacity < end or (end - begin) % p or (capacity - begin) % p):
        raise ValueError('Preview vector bounds differ from complete initialized native pointer slots')
    values = []
    for index, row in enumerate(records):
        raw = machine.read(row['address'], row['physical'])
        if row['role'] == 0:
            value = {'previewBytes': raw.hex()}
        else:
            slots = []
            for offset in range(0, len(raw), p):
                slot = raw[offset:offset + p]
                slots.append('uninitialized-a5' if slot == bytes([0xa5]) * p else identity(int.from_bytes(slot, 'little')))
            value = {'vectorSlots': slots}
        values.append({'role': row['role'], 'logicalBytes': row['logical'], 'live': row['live'], **value})
    release_count = number(machine, machine.state + 8)
    if release_count > len(records):
        raise ValueError('Preview release count exceeds one-release allocation ownership')
    releases = [number(machine, machine.state + layout['released'] + index * 4) for index in range(release_count)]
    if any(index >= len(records) for index in releases):
        raise ValueError('Preview release event references an unknown allocation')
    preserved_provider_bytes(machine, records, releases)
    after_entry = machine.read(machine.entry - 32, layout['entryBytes'] + 64)
    mutable = set()
    for start in [layout['primary'], layout['vector'], layout['vector'] + p, layout['vector'] + 2 * p]:
        mutable.update(range(32 + start, 32 + start + p))
    if any(a != b for index, (a, b) in enumerate(zip(before_entry, after_entry, strict=True)) if index not in mutable):
        raise ValueError('Preview changed preserved caller fields or outer/ABI-padding bytes')
    if machine.read(machine.cache - 32, layout['cacheBytes'] + 64) != before_cache:
        raise ValueError('Preview changed its borrowed cache-view storage')
    return {'primary': primary, 'vectorAllocation': vector, 'size': 0 if not begin else (end - begin) // p,
        'capacity': 0 if not begin else (capacity - begin) // p, 'allocations': values, 'releases': releases}


def run(output):
    output = Path(output)
    if output.exists():
        raise ValueError('Preserve preview attempt and case rows')
    output.mkdir(parents=True)
    machines = [Machine('original', FOLDER / 'arm/effect_preview.elf'), Machine('arm', FOLDER / 'arm/effect_preview.elf'),
        Native(FOLDER / 'windows/effect_preview.dll'), Machine('a64', FOLDER / 'a64/effect_preview.elf')]
    rows, started = [], time.monotonic()
    for index, count in enumerate([-1, 0, 1, 2, 31, 32, 33, 63, 64, 65, 103, 104, 105, 129]):
        records = bytearray(random.Random(65000 + index).randbytes(320 * max(1, count)))
        for item in range(max(1, count)):
            struct.pack_into('<3f', records, item * 320 + 260, item + 0.25, -item - 0.5, item * 2.0)
        translation = list(struct.unpack('<3I', struct.pack('<3f', 10.5, -2.25, 1.0)))
        observations = []
        try:
            for machine in machines:
                machine.prepare(count, records)
                cache = machine.read(machine.cache - 32, machine.layout['cacheBytes'] + 64)
                entry = machine.read(machine.entry - 32, machine.layout['entryBytes'] + 64)
                input_before = machine.read(machine.input, 8 + len(records))
                machine.invoke('fn_002a41c4', [machine.cache, 0, machine.input], translation)
                if machine.read(machine.input, 8 + len(records)) != input_before:
                    raise ValueError('Preview changed borrowed serialized records')
                observations.append(observe(machine, cache, entry))
            if any(value != observations[0] for value in observations[1:]):
                raise ValueError('Preview four-target ownership/complete record comparison differs')
            previews = [row['previewBytes'] for row in observations[0]['allocations'] if row['role'] == 0]
            expected = [bytes(records[:320])]
            for item in range(max(0, count)):
                raw = bytearray(records[item * 320:(item + 1) * 320])
                original = struct.unpack_from('<3f', raw, 260)
                struct.pack_into('<3f', raw, 260, original[0] + 10.5, original[1] - 2.25, original[2] + 1.0)
                expected.append(bytes(raw))
            if previews != [raw.hex() for raw in expected]:
                raise ValueError('Preview differs from independent serialized-record/translation model')
        except Exception as error:
            (output / 'failure.json').write_text(json.dumps({'case': count, 'error': str(error),
                'observations': observations, 'completed': len(rows), 'sourceCreditGranted': 0}, indent=2) + '\n')
            raise
        rows.append({'count': count, 'translationBits': translation, 'inputSha256': hashlib.sha256(records).hexdigest(),
            'observation': observations[0], 'floatStatusAfterMachineTargets': [getattr(machine, 'fp_after', None) for machine in machines]})
        print(json.dumps({'completed': len(rows), 'count': count}), flush=True)
    (output / 'rows.json').write_text(json.dumps(rows, indent=2) + '\n')
    report = {'status': 'bounded-preview-four-target-record-and-ownership-comparison', 'sets': len(rows),
        'elapsedSeconds': time.monotonic() - started, 'rows': common.pin(output / 'rows.json'),
        'targets': ['actual-original-ARM-with-real-SDK-allocation', 'source-ARM', 'Windows', 'high-AArch64'],
        'sourceCreditGranted': 0, 'limits': ['All allocator requests succeed within bounded fixture capacity.',
            'Finite normal binary32 values and incoming FPSCR/FPSR zero; no universal floating-point regime claim.',
            'Vector slots are compared as owned pointer identities; every unused byte remains the generated A5 pattern.',
            'The outer effect cache, file/task pipeline, resource constructor and GPU remain unqualified.']}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    (output / 'reference-instructions.json').write_text(json.dumps(list(machines[0].witnesses.values()), indent=2) + '\n')
    (output / 'reference-inputs.json').write_text(json.dumps(machines[0].reference.pins, indent=2) + '\n')
    print(json.dumps(report))


if __name__ == '__main__':
    run(ROOT / 'work/native-effect065/preview-corpus-v1')
