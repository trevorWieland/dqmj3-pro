import argparse
import ctypes
import hashlib
import json
from pathlib import Path
import struct
import sys


ROOT = Path(__file__).resolve().parents[3]
BASE = Path(__file__).resolve().parent
sys.pycache_prefix = str(BASE / 'unwritten-bytecode')
sys.path.insert(0, str(ROOT / 'toolscripts'))
ADAPTER = ROOT / 'work/queue067-public-input-v1/public-tree/toolscripts'
sys.path.insert(0, str(ADAPTER))
from queue_file067_guard import Guard


def identity(path):
    data = path.read_bytes()
    return {'bytes': len(data), 'sha256': hashlib.sha256(data).hexdigest()}


def install_guard():
    manifest = json.loads((ROOT / 'work/queue067-public-input-v1/full-v1/manifest.json').read_text())
    pins = {}
    for row in manifest['support']:
        path = ROOT / row['logicalPath']
        assert identity(path) == {key: row[key] for key in ['bytes', 'sha256']}
        pins[str(path)] = row['sha256']
    bases = {'project': ROOT, 'python-base': Path(sys.base_prefix), 'absolute': Path()}
    for row in manifest['runtimeFiles']:
        path = bases[row['scope']] / row['path']
        assert identity(path) == {key: row[key] for key in ['bytes', 'sha256']}
        pins[str(path)] = row['sha256']
    for row in manifest['adapterFiles']:
        path = ROOT / 'toolscripts' / row['name'] if row['name'].startswith('effect_file066_') else ADAPTER / row['name']
        assert identity(path) == {key: row[key] for key in ['bytes', 'sha256']}
    manifest['referenceMetadata'] += manifest['support'] + [{'path': 'toolscripts'}]
    guard = Guard(ROOT, BASE, 'source', {}, manifest)
    guard.immutable.update(guard.path(path) for path in pins)
    guard.immutable.update(guard.path(path) for path in (BASE / 'source').rglob('*') if path.is_file())
    guard.immutable.add(guard.path(BASE / 'original-v1/report.json'))
    guard.immutable.add(guard.path(BASE / 'original-v2/report.json'))
    source_roots = [BASE / 'source'] + list(BASE.glob('*/source')) + list(BASE.glob('controls-v1/*/source'))
    guard.additional_forbidden_roots = [guard.path(path / name) for path in source_roots for name in ['work', 'generated']]
    guard.install()
    import native_wave013_file_owner_reference_image as image
    image.ReferenceImage = guard.block_original_constructor(image.ReferenceImage)
    return guard, pins


def trace_rows(raw):
    result = []
    for operation, kind, entries, entry_bytes, logical, option, low, high in raw:
        if operation == 0:
            row = {'operation': 'initialize'}
        elif operation == 1:
            row = {'operation': 'requirements', 'kind': kind, 'entries': entries, 'entryBytes': entry_bytes, 'option': option}
        elif operation == 2:
            row = {'operation': 'allocate', 'kind': kind, 'logicalBytes': logical}
        elif operation == 3:
            key = low | (high << 32)
            name = key.to_bytes(8, 'big').lstrip(b'\0').decode('ascii') + ':'
            row = {'operation': 'mount', 'kind': kind, 'scheme': name, 'entries': entries,
                'entryBytes': entry_bytes, 'logicalBytes': logical, 'option': option}
        else:
            row = {'operation': 'unexpected', 'raw': [operation, kind, entries, entry_bytes, logical, option, low, high]}
        result.append(row)
    return result


def run(profile, build, output):
    if not output.is_relative_to(BASE) or output == BASE or not build.is_relative_to(BASE):
        raise ValueError('068 source outputs/build escaped the exclusive recovered workspace')
    output.mkdir(exist_ok=False)
    guard, support_pins = install_guard()
    import effect_queue067_source_cpu as cpu
    import effect_queue067_native as native
    if profile == 'windows':
        machine = native.Native(build / 'windows')
        machine.owner_prepare(native.request.device_reference.generated_file())
        machine.library.effect_file_fixture_prepare068.argtypes = [ctypes.c_uint, ctypes.c_void_p]
        machine.library.effect_file_fixture_observe068.argtypes = [ctypes.c_uint]
        machine.library.effect_file_fixture_observe068.restype = ctypes.c_void_p
        machine.library.effect_file_fixture_trace068.restype = ctypes.c_void_p
        machine.library.effect_file_fixture_count068.restype = ctypes.c_uint
        machine.library.effect_file_fixture_prepare068(1, ctypes.addressof(machine.api))
        get = lambda index: int(machine.library.effect_file_fixture_observe068(index) or 0)
        services = get(22)
        before_services = machine.read_bytes(services, get(24))
        machine.library.effect_file_fixture_start068()
        count = machine.library.effect_file_fixture_count068()
        trace_pointer = machine.library.effect_file_fixture_trace068()
    else:
        class Source(cpu.Machine):
            def __init__(self, selected_profile, elf):
                super().__init__(selected_profile, elf)
                self.boot_fixture = self.graph['objects']['file_fixture068']

            def write(self, processor, access, address, size, value, user):
                if self.active and hasattr(self, 'boot_fixture'):
                    row = self.boot_fixture
                    if row['address'] <= address < address + size <= row['address'] + row['bytes']:
                        return
                super().write(processor, access, address, size, value, user)

        machine = Source(profile, build / profile / 'effect_resource.elf')
        if machine.original or hasattr(machine, 'reference'):
            raise ValueError('068 source child instantiated an original reference image')
        for name, row in machine.graph['functions'].items():
            if name.startswith('effect_file_'):
                machine.functions[name] = row['address']
        machine.setup()
        machine.owner_prepare(native.request.device_reference.generated_file())
        machine.invoke('effect_file_fixture_prepare068', [0, 0])
        get = lambda index: machine.invoke('effect_file_fixture_observe068', [index])
        services = get(22)
        before_services = machine.read_bytes(services, get(24))
        machine.active = True
        machine.invoke('effect_file_fixture_start068', [])
        machine.active = False
        count = machine.invoke('effect_file_fixture_count068', [])
        trace_pointer = machine.invoke('effect_file_fixture_trace068', [])
    observed = [get(index) for index in range(26)]
    if machine.read_bytes(services, get(24)) != before_services:
        raise ValueError('068 source bootstrap changed immutable C service operations')
    if count > 32:
        raise ValueError('068 compiled C service trace exceeded capacity')
    trace = trace_rows(list(struct.iter_unpack('<8I', machine.read_bytes(trace_pointer, count * 32))))
    original_record = json.loads((BASE / 'original-v2/report.json').read_text())
    expected = original_record['actualOriginalServiceTrace']
    allocations = []
    guards = []
    number = int.from_bytes(machine.read_bytes(machine.state + machine.layout['allocations'], 4), 'little')
    for index in range(number):
        values = struct.unpack('<6I', machine.read_bytes(machine.state + machine.layout['records'] + index * 24, 24))
        pointer = machine.state + machine.layout['heap'] + index * machine.layout['heapStride'] + machine.layout['payloadOffset']
        before = machine.read_bytes(pointer - 128, 128)
        tail_bytes = machine.layout['heapStride'] - machine.layout['payloadOffset'] - values[1]
        after = machine.read_bytes(pointer + values[1], tail_bytes)
        if before != bytes([0xa5]) * 128 or after != bytes([0xa5]) * tail_bytes:
            raise ValueError('068 authored cold bootstrap changed allocation guard or unused backing')
        allocations.append({'logicalBytes': values[0], 'physicalBytes': values[1], 'alignment': values[2], 'live': bool(values[5]), 'pointer': pointer})
        guards.append({'beforeBytes': 128, 'tailBytes': tail_bytes})
    semantic = {'trace': trace, 'logicalAllocations': [{'bytes': row['logicalBytes'], 'live': row['live']} for row in allocations],
        'manager': bool(observed[0]), 'rom': bool(observed[1]), 'patch': bool(observed[2]), 'worker': bool(observed[3]),
        'workerRunning': observed[4], 'pending': observed[5], 'deferred': observed[6], 'current': observed[7],
        'romLogicalBytes': observed[8], 'patchLogicalBytes': observed[9], 'romMounted': observed[12], 'patchMounted': observed[13],
        'romWorkspaceIdentity': observed[14] == observed[1], 'patchWorkspaceIdentity': observed[15] == observed[2],
        'threadCreates': observed[18], 'unknown00': observed[19], 'romKind': observed[20], 'patchKind': observed[21], 'returned': observed[25]}
    expected_semantic = original_record['semantic']
    if profile != 'arm' and min(observed[index] for index in [0, 1, 2, 3, 14, 15, 16, 17, 22]) <= 0xffffffff:
        raise ValueError('068 modern source profile lost full native pointer identity')
    guard.assert_clean()
    for path, sha in support_pins.items():
        if identity(Path(path))['sha256'] != sha:
            raise ValueError('068 source helper changed during execution')
    report = {'status': 'passed' if semantic == expected_semantic else 'source-observer-mismatch', 'profile': profile,
        'semantic': semantic, 'expectedSemantic': expected_semantic, 'allocations': allocations, 'allocationGuards': guards,
        'nativePointers': observed, 'originalImageInstantiated': False, 'audit': guard.receipt(),
        'sourceCreditGranted': 0, 'workerScheduled': False, 'wholeGameQualified': False,
        'limits': ['Filesystem services are compiled typed C fixtures, not recovered SDK filesystem algorithms or host OS filesystem mounts.',
            'Only cold successful initialization executes; source shutdown, alias, replacement, failure and global request dispatch remain unqualified.',
            'Windows uses real parked native threads; ARM/AArch64 profiles execute source CPU models.']}
    (output / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
    if report['status'] != 'passed':
        raise ValueError('068 authored bootstrap differs from actual original service trace/ownership graph')
    print(json.dumps({'profile': profile, 'status': report['status']}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('profile', choices=['arm', 'a64', 'windows'])
    parser.add_argument('output', type=Path)
    parser.add_argument('--build', type=Path, default=BASE / 'build-v1')
    args = parser.parse_args()
    run(args.profile, args.build.resolve(), args.output.resolve())
