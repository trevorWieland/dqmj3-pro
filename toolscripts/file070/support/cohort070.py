import argparse
import ctypes
import hashlib
import json
from pathlib import Path
import struct
import sys
import types


ROOT = Path(__file__).resolve().parents[2]
BASE = Path(__file__).resolve().parent
sys.pycache_prefix = str(BASE / 'unwritten-bytecode')
MODES = {'alias': 0, 'null-equal': 1, 'warm': 2}


def identity(path):
    data = path.read_bytes()
    return {'bytes': len(data), 'sha256': hashlib.sha256(data).hexdigest()}


def trace_rows(raw):
    rows = []
    for op, kind, entries, entry_bytes, logical, option, low, high in raw:
        key = low | high << 32
        scheme = key.to_bytes(8, 'big').lstrip(b'\0').decode('ascii') + ':' if key else None
        if op == 0: row = {'operation': 'initialize'}
        elif op == 1: row = {'operation': 'requirements', 'kind': kind, 'entries': entries, 'entryBytes': entry_bytes, 'option': option}
        elif op == 2: row = {'operation': 'allocate', 'kind': kind, 'logicalBytes': logical}
        elif op == 3: row = {'operation': 'mount', 'kind': kind, 'scheme': scheme, 'entries': entries, 'entryBytes': entry_bytes, 'logicalBytes': logical, 'option': option}
        elif op == 4: row = {'operation': 'alias', 'scheme': scheme, 'target': kind.to_bytes(4, 'big').lstrip(b'\0').decode('ascii') + ':'}
        elif op == 5: row = {'operation': 'unmount', 'scheme': scheme}
        elif op == 6: row = {'operation': 'release', 'kind': kind, 'logicalBytes': logical}
        else: raise ValueError('Unqualified source service operation')
        rows.append(row)
    return rows


def run(profile, case, build, source, output):
    assert output.is_relative_to(BASE) and not output.exists() and build.is_relative_to(BASE) and source.is_relative_to(BASE)
    output.mkdir(parents=True)
    frozen = ROOT / 'work/native-file068/recovered-v1/cohort.py'
    snapshot = BASE / 'frozen-source-guard.py'
    if snapshot.exists(): assert identity(snapshot) == identity(frozen)
    else: snapshot.write_bytes(frozen.read_bytes())
    previous = types.ModuleType('frozen068_source_guard')
    previous.__file__ = str(frozen)
    exec(compile(snapshot.read_bytes(), str(snapshot), 'exec'), previous.__dict__)
    previous.BASE = BASE
    sys.pycache_prefix = str(BASE / 'unwritten-bytecode')
    guard, support_pins = previous.install_guard()
    guard.additional_forbidden_roots += [guard.path(source / name) for name in ['work', 'generated']]
    oracle_path = BASE / 'source-oracle.json'
    paths = [path for tree in [source, build] for path in tree.rglob('*') if path.is_file()]
    paths += [oracle_path, Path(__file__).resolve(), snapshot, BASE / 'source_cpu.py']
    pins = {str(path): identity(path) for path in paths}
    guard.immutable.update(guard.path(path) for path in paths)
    record = {'status': 'failed', 'profile': profile, 'case': case, 'sourceCreditGranted': 0,
        'sourceReturned': False, 'originalImageMapped': False, 'stages': {},
        'taskObservationDomain': 'before-start/paused-event/join'}
    try:
        import effect_queue067_native as native
        if profile == 'windows':
            machine = native.Native(build / 'windows')
            machine.owner_prepare(native.request.device_reference.generated_file())
            for name in ['effect_file_fixture_observe068', 'effect_file_fixture_pool_observe068', 'effect_file_fixture_sdk_observe069', 'effect_branch_fixture_observe070']:
                function = getattr(machine.library, name)
                function.argtypes = [ctypes.c_uint]
                function.restype = ctypes.c_void_p
            machine.library.effect_branch_fixture_slot070.argtypes = [ctypes.c_uint, ctypes.c_uint]
            machine.library.effect_branch_fixture_slot070.restype = ctypes.c_void_p
            machine.library.effect_file_fixture_trace068.restype = ctypes.c_void_p
            machine.library.effect_file_fixture_count068.restype = ctypes.c_uint
            machine.library.effect_branch_fixture_prepare070.argtypes = [ctypes.c_uint, ctypes.c_void_p, ctypes.c_uint]
            machine.library.effect_branch_fixture_native_step070.argtypes = [ctypes.c_uint]
            machine.library.effect_branch_fixture_native_step070.restype = ctypes.c_uint
            machine.library.effect_branch_fixture_prepare070(1, ctypes.addressof(machine.api), MODES[case])
            call = lambda name, args: getattr(machine.library, name)(*args)
            action = lambda name: call(name, [])
            def schedule(index):
                if call('effect_branch_fixture_native_step070', [index]) != 0:
                    raise ValueError('Native worker failed to reach its indexed event pause')
        else:
            import source_cpu
            machine = source_cpu.Machine(profile, build / profile / 'effect_resource.elf')
            if machine.original or hasattr(machine, 'reference'):
                raise ValueError('Branch source created original machine state')
            machine.setup()
            machine.owner_prepare(native.request.device_reference.generated_file())
            machine.invoke('effect_branch_fixture_prepare070', [0, 0, MODES[case]])
            call = lambda name, args: machine.invoke(name, args)
            action, schedule = machine.action, machine.schedule
        get = lambda field: int(call('effect_file_fixture_observe068', [field]) or 0)
        branch = lambda field: int(call('effect_branch_fixture_observe070', [field]) or 0)
        expected = json.loads(oracle_path.read_text())[case]

        def capture(stage):
            allocations = []
            guard_bytes = 0
            for index in range(branch(0)):
                values = struct.unpack('<6I', machine.read_bytes(machine.state + machine.layout['records'] + index * 24, 24))
                pointer = machine.state + machine.layout['heap'] + index * machine.layout['heapStride'] + machine.layout['payloadOffset']
                tail = machine.layout['heapStride'] - machine.layout['payloadOffset'] - values[1]
                if machine.read_bytes(pointer - 128, 128) != bytes([0xa5]) * 128 or machine.read_bytes(pointer + values[1], tail) != bytes([0xa5]) * tail:
                    raise ValueError('Branch source changed allocation redzone or unused backing')
                guard_bytes += 128 + tail
                allocations.append({'pointer': pointer, 'bytes': values[0], 'live': bool(values[5])})
            identify = lambda pointer: next((index for index, row in enumerate(allocations) if pointer == row['pointer']), None)
            count = call('effect_file_fixture_count068', [])
            pointer = call('effect_file_fixture_trace068', [])
            trace = trace_rows(list(struct.iter_unpack('<8I', machine.read_bytes(pointer, count * 32))))
            semantic = {'managerAllocation': identify(get(0)), 'filesystemAllocationIds': [identify(get(1)), identify(get(2))],
                'allocationRecords': [{'bytes': row['bytes'], 'live': row['live']} for row in allocations],
                'namespaceDevices': [value if value < 16 else None for value in [branch(12), branch(13)]],
                'namespaceFlags': [branch(14), branch(15)], 'mounted': [bool(get(12)), bool(get(13))],
                'platform': dict(zip(['creates', 'joins', 'closes', 'sleeps', 'exited'], [branch(field) for field in range(3, 8)], strict=True)),
                'sdkLive': [int(call('effect_file_fixture_pool_observe068', [0]) or 0), int(call('effect_file_fixture_sdk_observe069', [0]) or 0)],
                'serviceTrace': trace}
            record['stages'][stage] = {'semantic': semantic, 'expected': expected[stage], 'allocationGuardBytes': guard_bytes}
            mismatch = [key for key in semantic if semantic[key] != expected[stage][key]]
            if mismatch:
                record.update(mismatchStage=stage, mismatch=mismatch)
                raise ValueError('Returned source branch differs from independent original observer: ' + ','.join(mismatch))

        action('effect_branch_fixture_start070')
        record['sourceReturned'] = branch(8) == 1
        capture('start')
        if case == 'warm':
            schedule(0)
            action('effect_branch_fixture_warm070')
            record['sourceReturned'] = branch(8) == 2
            capture('warm')
            schedule(1)
        action('effect_branch_fixture_finish070')
        record['sourceReturned'] = branch(9) == 1
        capture('final')
        guard.assert_clean()
        record.update(status='passed', mismatch=[], nativeWindowsThreadMutexEventsExecuted=profile == 'windows',
            physicalAndroidExecuted=False, hostOSFilesystemMounted=False, warmMountedDuplicateQualified=False,
            nonnullEqualPointerQualified=False)
    finally:
        unchanged = all(identity(Path(path)) == value for path, value in pins.items())
        support_unchanged = all(identity(Path(path))['sha256'] == value for path, value in support_pins.items())
        imports = []
        declared = {guard.path(path) for path in support_pins}
        for name, module in list(sys.modules.items()):
            value = getattr(module, '__file__', None)
            if value and Path(value).suffix == '.py' and guard.path(value) in declared and Path(value).is_relative_to(ROOT / 'toolscripts'):
                imports.append({'module': name, 'actualSource': str(Path(value)), **identity(Path(value)), 'bytecodeCacheUsed': False})
        imports.append({'module': 'frozen068_source_guard', 'actualSource': str(snapshot), **identity(snapshot), 'bytecodeCacheUsed': False, 'logicalAnchorOnly': str(frozen)})
        if profile != 'windows': imports.append({'module': 'source_cpu', 'actualSource': str(BASE / 'source_cpu.py'), **identity(BASE / 'source_cpu.py'), 'bytecodeCacheUsed': False})
        assert not Path(sys.pycache_prefix).exists()
        record.update(immutableInputsUnchanged=unchanged and support_unchanged, inputPins=pins, supportPins=support_pins,
            audit=guard.receipt(), freshSourceImports=imports, bytecodePrefixAbsent=True)
        (output / 'report.json').write_text(json.dumps(record, indent=2) + '\n')
        if not unchanged or not support_unchanged:
            raise ValueError('Branch source immutable input bytes changed')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('profile', choices=['arm', 'windows', 'a64'])
    parser.add_argument('case', choices=MODES)
    parser.add_argument('output', type=Path)
    parser.add_argument('--source', type=Path, default=BASE / 'source-v2')
    parser.add_argument('--build', type=Path, default=BASE / 'build-v2')
    args = parser.parse_args()
    run(args.profile, args.case, args.build.resolve(), args.source.resolve(), args.output.resolve())
