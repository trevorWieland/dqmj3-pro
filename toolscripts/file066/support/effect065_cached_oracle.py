import argparse
import ctypes
import json
import struct
from pathlib import Path
from types import SimpleNamespace
from unicorn import arm_const as ar, arm64_const as aa

import effect065_cached_reference as reference
import effect065_owner_oracle as owner
from native_effect065_resource_graph_observation import logical as resource_logical
import native_effect065_resource_conditions as conditions


class Translation(ctypes.Structure):
    _fields_ = [('x', ctypes.c_float), ('y', ctypes.c_float), ('z', ctypes.c_float)]


class Machine(reference.Machine):
    def execute(self):
        registers = aa if self.a64 else ar
        prefix = 'UC_ARM64_REG_S' if self.a64 else 'UC_ARM_REG_S'
        for index, bits in enumerate([0x3f800000, 0x40000000, 0x40400000]):
            self.cpu.reg_write(getattr(registers, prefix + str(index)), bits)
        self.active = True
        returned = self.invoke('fn_002a47cc', [self.cached_state + self.cached_layout['cache'], 7, 9, 1])
        self.active = False
        return returned

    def setup(self):
        raw = super().setup()
        self.before_cached = self.read_bytes(self.cached_state, self.cached_layout['bytes'])
        self.original_input = raw
        self.calls = 0
        return raw


class Native(owner.Native):
    def __init__(self, folder):
        super().__init__(folder / 'effect_resource.dll', folder / 'effect_resource.map')
        self.library.effect_cached_fixture065.restype = ctypes.c_void_p
        self.cached_state = self.library.effect_cached_fixture065()
        self.cached_layout = dict(zip(reference.LAYOUT,
            (ctypes.c_uint * len(reference.LAYOUT)).in_dll(self.library, 'effect_cached_fixture_layout065'), strict=True))
        self.library.effect_cached_composed_reset065.argtypes = [ctypes.c_uint, ctypes.c_int, ctypes.c_void_p]
        self.library.effect_cached_composed_call065.argtypes = [ctypes.c_int, ctypes.c_ubyte, Translation]
        self.library.effect_cached_composed_call065.restype = ctypes.c_void_p

    def setup(self):
        raw = reference.container()
        self.owner_prepare(raw)
        self.library.effect_cached_composed_reset065(0, 7, self.image)
        self.before_cached = self.read_bytes(self.cached_state, self.cached_layout['bytes'])
        self.original_input = raw
        self.calls = 0
        return raw

    def execute(self):
        self.returned = False
        returned = self.library.effect_cached_composed_call065(7, 9, Translation(1, 2, 3))
        self.returned = True
        return returned


def observe(machine, returned):
    machine.calls += 1
    p = machine.layout['pointerBytes']
    entry = machine.cached_state + machine.cached_layout['entry']
    vector_offset = 24 if p == 4 else 32
    if returned != entry + vector_offset:
        raise ValueError('Actual cached caller return is not its caller-owned preview vector')
    read = machine.read_bytes
    word = lambda address: int.from_bytes(read(address, 4), 'little')
    pointer = lambda address: int.from_bytes(read(address, p), 'little')
    result = {'references': word(entry), 'resourceReferences': word(entry + 4), 'key': word(entry + 8),
        'resourceSlot': word(entry + 12), 'modeAndUntouchedHex': read(entry + (36 if p == 4 else 56), 4).hex()}
    if pointer(entry + 16) != machine.cached_state + machine.cached_layout['task']:
        raise ValueError('Actual cached request ownership changed')
    result['providerCalls'] = word(machine.cached_state + machine.cached_layout['provider'] + p * 2)
    if (result['references'], result['resourceReferences'], result['key'], result['resourceSlot'], result['providerCalls']) != (1 + machine.calls, machine.calls, 7, 0, 1):
        raise ValueError('Cached references/key/slot/provider count differ from independent caller model')
    primary = pointer(entry + (20 if p == 4 else 24))
    begin, end, capacity = [pointer(entry + vector_offset + index * p) for index in range(3)]
    if not begin or not begin <= end <= capacity or (end - begin) % p or (capacity - begin) % p:
        raise ValueError('Actual preview vector bounds differ')
    result['previewCount'], result['previewCapacity'] = (end - begin) // p, (capacity - begin) // p
    result['primaryRawHex'] = read(primary, 320).hex()
    result['previewsRawHex'] = [read(pointer(begin + index * p), 320).hex() for index in range(result['previewCount'])]
    if (result['previewCount'], result['previewCapacity']) != (1, 32):
        raise ValueError('Actual frozen preview growth differs from independent one-record model')
    expected_primary = machine.original_input[0x8008:0x8148]
    expected_preview = bytearray(expected_primary)
    struct.pack_into('<3f', expected_preview, 260, 2, 4, 6)
    if result['primaryRawHex'] != expected_primary.hex() or result['previewsRawHex'] != [expected_preview.hex()]:
        raise ValueError('Actual full preview records differ from independent translated-data model')
    if read(begin + p, 31 * p) != bytes([machine.pattern]) * (31 * p):
        raise ValueError('Preview vector changed uninitialized capacity bytes')
    proxy = SimpleNamespace(**machine.__dict__)
    proxy.original, proxy.read_bytes = machine.original, machine.read_bytes
    observation = owner.OwnerObservation(proxy, result['resourceSlot'], image_override=(machine.image + 0x1000, 0x6000))
    for slot in range(observation.allocation_count):
        record = struct.unpack('<6I', read(machine.state + machine.layout['records'] + slot * 24, 24))
        if record[3] == 0x650032:
            if record[:2] != (4, p) or record[5] != 0:
                raise ValueError('Archive owner logical/native budget or destruction differs')
            observation.typed_allocation(observation.payload(slot), p, 'cached-archive-carrier')
            if pointer(observation.payload(slot)) != machine.image:
                raise ValueError('Retained archive carrier does not preserve its measured borrowed XBB identity')
    records = [struct.unpack('<6I', read(machine.state + machine.layout['records'] + slot * 24, 24))
        for slot in range(observation.allocation_count)]
    previews = [slot for slot, record in enumerate(records) if record[3] == 0x650104]
    vectors = [slot for slot, record in enumerate(records) if record[3] == 0x650105]
    if len(previews) != 2 or len(vectors) != 1 or primary != observation.payload(previews[0]) or pointer(begin) != observation.payload(previews[1]) or begin != observation.payload(vectors[0]):
        raise ValueError('Preview ownership differs from independently recorded allocation roles/order')
    for slot in previews:
        if records[slot][:3] != (320, 320, 4) or records[slot][5] != 1:
            raise ValueError('Live preview allocation byte/alignment contract differs')
    expected = bytearray(machine.before_cached)
    offset = machine.cached_layout['entry']
    expected[offset:offset + 16] = struct.pack('<4I', 1 + machine.calls, machine.calls, 7, 0)
    for at in [offset + (20 if p == 4 else 24)] + [offset + vector_offset + index * p for index in range(3)]:
        expected[at:at + p] = read(machine.cached_state + at, p)
    provider_calls = machine.cached_layout['provider'] + 2 * p
    expected[provider_calls:provider_calls + 4] = struct.pack('<I', 1)
    if read(machine.cached_state, len(expected)) != bytes(expected):
        raise ValueError('Cached call changed untouched caller/task/provider/heap/padding bytes')
    for low, high in [(0, 0x1000), (0x7000, len(machine.original_input))]:
        if read(machine.image + low, high - low) != machine.original_input[low:high]:
            raise ValueError('Cached call changed non-resource XBB/name/preview/caller bytes')
    if read(machine.base, 128) != bytes([0xc7]) * 128 or read(machine.image + len(machine.original_input), 0x10000 - 128 - len(machine.original_input)) != bytes([0xc7]) * (0x10000 - 128 - len(machine.original_input)):
        raise ValueError('Cached call changed complete caller outer guards')
    observation.typed_allocation(begin, result['previewCapacity'] * p, 'cached-preview-pointer-vector')
    result['resource'] = observation.snapshot()
    result['rawCachedHex'] = read(machine.cached_state, machine.cached_layout['bytes']).hex()
    return result


def logical(row):
    return {key: resource_logical(value) if key == 'resource' else value for key, value in row.items() if key != 'rawCachedHex'}


def run(build, output):
    if output.exists():
        raise ValueError('Preserve cached original/source observations')
    output.mkdir(parents=True)
    results = {}
    machines = {'original': Machine(build / 'arm/effect_resource.elf'),
        'arm': Machine(build / 'arm/effect_resource.elf', 'arm'),
        'windows': Native(build / 'windows'), 'a64': Machine(build / 'a64/effect_resource.elf', 'a64')}
    for profile, machine in machines.items():
        try:
            machine.setup()
            results[profile] = [observe(machine, machine.execute()) for unused in range(3)]
        except Exception as error:
            (output / 'failure.json').write_text(json.dumps({'profile': profile, 'error': str(error),
                'returned': getattr(machine, 'returned', False), 'completedProfiles': list(results), 'sourceCreditGranted': 0}, indent=2) + '\n')
            raise
        (output / (profile + '.json')).write_text(json.dumps(results[profile], indent=2) + '\n')
    baseline = [logical(row) for row in results['original']]
    if any([logical(row) for row in rows] != baseline for rows in results.values()):
        (output / 'comparison-failure.json').write_text(json.dumps({'equal': False, 'sourceCreditGranted': 0}) + '\n')
        raise ValueError('Actual original/source cached composition observations differ')
    original = machines['original']
    canonical = original.reference.functions[0x2a47cc]
    pcs = [pc for span in canonical['ranges'] for pc in range(span['start'], span['endExclusive'], 4)]
    report = {'status': 'four-target-cached-composition-observations-match', 'profiles': list(results),
        'consecutiveCallsPerProfile': 3,
        'originalInstructionWitnesses': sorted(original.witnesses.values(), key=lambda row: row['address']),
        'originalConditions': conditions.serializable(original.condition_outcomes),
        'callerCoverage': {'entry': 0x2a47cc, 'canonicalInstructionBytes': canonical['textBodyBytes'],
            'canonicalPCs': len(pcs), 'visitedPCs': sum(pc in original.pcs for pc in pcs),
            'conditionSatisfiedPCs': sum(original.condition_outcomes.get(pc, {}).get('conditionSatisfied', 0) > 0 for pc in pcs),
            'unvisitedPCAddresses': [pc for pc in pcs if pc not in original.pcs],
            'wholeFunctionQualified': False},
        'sourceCreditGranted': 0}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(report))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('build', type=Path)
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    run(args.build.resolve(), args.output.resolve())
