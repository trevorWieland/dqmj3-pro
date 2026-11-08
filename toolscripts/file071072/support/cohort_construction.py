import argparse
import atexit
import ctypes
import hashlib
import json
import os
from pathlib import Path
import struct
import sys
import types

ROOT = Path(__file__).resolve().parents[2]
BASE = Path(__file__).resolve().parent
sys.pycache_prefix = str(BASE / 'unwritten-bytecode')

def identity(path):
    raw = path.read_bytes()
    return {'bytes': len(raw), 'sha256': hashlib.sha256(raw).hexdigest()}

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
    guard, support = previous.install_guard()
    sys.pycache_prefix = str(BASE / 'unwritten-bytecode')
    paths = [path for tree in [source, build] for path in tree.rglob('*') if path.is_file()]
    paths += [Path(__file__).resolve(), snapshot, BASE / 'source-oracle.json']
    pins = {str(path): identity(path) for path in paths}
    guard.immutable.update(guard.path(path) for path in paths)
    guard.additional_forbidden_roots += [guard.path(source / name) for name in ['work', 'generated']]
    record = {'status': 'failed', 'profile': profile, 'case': case, 'sourceReturned': False,
        'sourceCreditGranted': 0, 'originalImageMapped': False}
    try:
        import effect_queue067_source_cpu as cpu
        import effect_queue067_native as native
        expected = json.loads((BASE / 'source-oracle.json').read_text())
        selected = expected['cases'][case]
        if profile == 'windows':
            machine = native.Native(build / 'windows')
            machine.owner_prepare(native.request.device_reference.generated_file())
            for name in ['observe', 'types']:
                function = getattr(machine.library, 'effect_construction_fixture_' + name + '072')
                function.argtypes, function.restype = [ctypes.c_uint], ctypes.c_void_p
            machine.library.effect_construction_fixture_layout072.argtypes = [ctypes.c_uint]
            machine.library.effect_construction_fixture_layout072.restype = ctypes.c_uint
            machine.library.effect_construction_fixture_prepare072.argtypes = [ctypes.c_uint, ctypes.c_void_p, ctypes.c_uint, ctypes.c_int]
            call = lambda name, args: getattr(machine.library, name)(*args)
            call('effect_construction_fixture_prepare072', [1, ctypes.addressof(machine.api), selected['mode'], selected['priority']])
            pointer_bytes = 8
            write = lambda address, data: ctypes.memmove(address, data, len(data))
        else:
            class Source(cpu.Machine):
                def code(self, processor, address, size, user):
                    if hasattr(self, 'construction_entries') and address in self.construction_entries: self.construction_seen.add(self.construction_entries[address])
                    super().code(processor, address, size, user)
                def write(self, processor, access, address, size, value, user):
                    if self.active:
                        for name in ['file_fixture068', 'teardown_fixture068', 'branch_fixture070', 'namespace_fixture071', 'construction_fixture072']:
                            row = self.graph['objects'].get(name)
                            if row and row['address'] <= address < address + size <= row['address'] + row['bytes']: return
                    super().write(processor, access, address, size, value, user)
            machine = Source(profile, build / profile / 'effect_resource.elf')
            if machine.original or hasattr(machine, 'reference'): raise ValueError('Construction source constructed original state')
            for name, row in machine.graph['functions'].items():
                if name.startswith(('effect_construction_', 'effect_file_', 'effect_branch_')): machine.functions[name] = row['address']
            machine.construction_entries = {row['address']: name for name, row in machine.graph['functions'].items() if name.startswith('effect_file_') and name.endswith('072')}
            machine.construction_seen = set()
            machine.setup()
            machine.owner_prepare(native.request.device_reference.generated_file())
            call = lambda name, args: machine.invoke(name, args)
            call('effect_construction_fixture_prepare072', [0, 0, selected['mode'], selected['priority'] & 0xffffffff])
            pointer_bytes = 4 if profile == 'arm' else 8
            write = lambda address, data: machine.cpu.mem_write(address, data)
        observe = lambda field: int(call('effect_construction_fixture_observe072', [field]) or 0)
        layout = [int(call('effect_construction_fixture_layout072', [index])) for index in range(79)]
        type_roles = {int(call('effect_construction_fixture_types072', [index]) or 0): name for index, name in enumerate(['device-type', 'embedded-type', 'stream-type', 'device-base-type', 'embedded-base-type'])}
        device_bytes, stream_bytes, pool_bytes = layout[76:]
        offsets = [value & 0xffff for value in layout[:76]]
        pointers = [bool(value >> 16) for value in layout[:76]]
        devices = [observe(15) + index * device_bytes for index in range(2)]
        streams = [observe(16) + index * stream_bytes for index in range(2)]
        workspaces = [observe(13 + index) + 64 for index in range(2)]
        def normalize(value):
            if value in type_roles: return type_roles[value]
            for index, base in enumerate(devices):
                if base <= value < base + device_bytes:
                    offset = value - base
                    if offset not in offsets: raise ValueError('Unmapped lifted device interior pointer')
                    return ['device', index, offsets.index(offset) * 4]
            for kind, bases, extent in [('stream', streams, stream_bytes), ('workspace', workspaces, 8736)]:
                for index, base in enumerate(bases):
                    if base <= value < base + extent: return [kind, index, value - base]
            return value
        def words(address):
            return [normalize(int.from_bytes(machine.read_bytes(address + offset, pointer_bytes if pointer else 4), 'little')) for offset, pointer in zip(offsets, pointers, strict=True)]
        probe = observe(12)
        before = bytes.fromhex(expected['constructor']['beforeHex'])
        write(probe, bytes([0xa5]) * device_bytes)
        for index, (offset, pointer) in enumerate(zip(offsets, pointers, strict=True)):
            value = int.from_bytes(before[index * 4:index * 4 + 4], 'little')
            write(probe + offset, value.to_bytes(pointer_bytes if pointer else 4, 'little'))
        call('effect_construction_fixture_probe072', [])
        record['constructorReturned'] = True
        record['constructor'] = words(probe)
        if record['constructor'] != expected['constructor']['after']: raise ValueError('Returned constructor differs')
        result = int(call('effect_construction_fixture_start072', [])) & 0xffffffff
        record['sourceReturned'] = observe(7) == 1
        record['factoryReturned'] = record['sourceReturned']
        objects = [words(observe(index + 1)) for index in range(2) if observe(index + 1)]
        trace = [list(struct.unpack('<8I', machine.read_bytes(observe(10) + index * 32, 32))) for index in range(observe(11))]
        record.update(result=result, objects=objects, trace=trace, deviceLive=observe(5), streamLive=observe(6),
            nativeGeometry={'pointerBytes': pointer_bytes, 'deviceBytes': device_bytes, 'streamBytes': stream_bytes, 'poolBytes': pool_bytes},
            allNativePointersHigh=pointer_bytes == 4 or min(devices + streams + workspaces + [probe]) > 0xffffffff)
        mismatch = [name for name in ['result', 'objects', 'trace', 'deviceLive', 'streamLive'] if record[name] != selected[name]]
        record['mismatch'] = mismatch
        if mismatch: raise ValueError('Returned construction differs: ' + ','.join(mismatch))
        def integer(address, size=4):
            return int.from_bytes(machine.read_bytes(address, size), 'little')
        state = observe(0)
        pool_addresses = [integer(state + index * pointer_bytes, pointer_bytes) for index in range(2)]
        pool_free_offset = offsets[55] - offsets[46]
        def chain_check(pool, base, stride, count, live):
            current = integer(pool + pool_free_offset, pointer_bytes)
            found = []
            while current:
                assert base <= current < base + stride * count and (current - base) % stride == 0
                slot = (current - base) // stride
                assert slot not in found
                found.append(slot)
                current = integer(current, pointer_bytes)
            assert found == list(range(live, count))
            return found
        record['independentFreeListsBeforeRelease'] = [chain_check(pool, base, stride, count, selected['deviceLive'])
            for pool, base, stride, count in zip(pool_addresses, [devices[0], streams[0]], [device_bytes, stream_bytes], [16, 32], strict=True)]
        checked_nodes = checked_payload = 0
        for index, device in enumerate([observe(slot + 1) for slot in range(2) if observe(slot + 1)]):
            for slot, entries, stride in [(0, 128 if index else 256, 32), (1, 8 if index else 16, 24)]:
                embedded = device + offsets[46 + slot * 15]
                backing = integer(device + offsets[53 + slot * 15], pointer_bytes)
                assert chain_check(embedded, backing, stride, entries, 0) == list(range(entries))
                for node in range(entries):
                    payload = machine.read_bytes(backing + node * stride + pointer_bytes, stride - pointer_bytes)
                    assert payload == bytes([0xa5]) * len(payload)
                    checked_nodes += 1
                    checked_payload += len(payload)
            if selected['mode'] == 0:
                assert machine.read_bytes(workspaces[index], 32).hex() == selected['tableHex'][index]
        record['independentWorkspaceNodes'] = checked_nodes
        record['independentPreservedPayloadBytes'] = checked_payload
        used = {offset + byte for offset, pointer in zip(offsets, pointers, strict=True) for byte in range(pointer_bytes if pointer else 4)}
        padding = [offset for offset in range(device_bytes) if offset not in used]
        assert all(machine.read_bytes(probe + offset, 1) == b'\xa5' for offset in padding)
        record['constructorPaddingCanaryBytes'] = len(padding)
        guard_bytes = 0
        for index in range(2 if selected['mode'] == 0 else 1):
            size = 8500 if selected['mode'] == 2 else 4320 if index else 8608
            assert machine.read_bytes(workspaces[index] - 64, 64) == bytes([0xa5]) * 64
            assert machine.read_bytes(workspaces[index] + size, 64) == bytes([0xa5]) * 64
            guard_bytes += 128
        record['workspaceGuardBytes'] = guard_bytes
        call('effect_construction_fixture_finish072', [])
        record['independentFreeListsAfterRelease'] = [chain_check(pool, base, stride, count, 0) for pool, base, stride, count in zip(pool_addresses, [devices[0], streams[0]], [device_bytes, stream_bytes], [16, 32], strict=True)]
        record['finishReturned'] = observe(7) == 2
        record['finalOwnership'] = {'deviceLive': observe(5), 'streamLive': observe(6), 'openRawHandles': observe(9), 'createdRawHandles': observe(8)}
        assert record['finalOwnership'] == {'deviceLive': 0, 'streamLive': 0, 'openRawHandles': 0, 'createdRawHandles': len(selected['objects']) if selected['mode'] != 2 else 1}
        final_trace = [list(struct.unpack('<8I', machine.read_bytes(observe(10) + index * 32, 32))) for index in range(observe(11))]
        closing = [[kind, index, 0, 0, 0, 0, 0, 0] for index in range(len(objects) - 1, -1, -1) for kind in [4, 3]]
        assert final_trace == trace + closing
        record.update(finalTrace=final_trace, status='passed', nativeWindowsMutexAndEventsExecuted=profile == 'windows',
            compiled072EntriesObserved=sorted(machine.construction_seen) if profile != 'windows' else None,
            physicalAndroidExecuted=False, hostFilesystemMounted=False, constructionAlgorithmsReplacedByPorts=False)
        if profile == 'windows': machine.library.effect_construction_fixture_dependency_results072.restype = ctypes.c_void_p
        previous_count = observe(8)
        call('effect_construction_fixture_dependencies072', [])
        pointer = int(call('effect_construction_fixture_dependency_results072', []) or 0)
        helper = list(struct.unpack('<22I', machine.read_bytes(pointer, 88)))
        expected_helper = [1, 1, 9, 0x06800002, 0, 0, 40, 40, 40, 4, 44, 24, 68, 4, 72, 0, 80, 0, selected['priority'] & 0xffffffff, 0, 0x08080040, 0]
        record['independentDependencyBodyResults'] = helper
        assert helper == expected_helper
        assert observe(9) == 0 and observe(8) == previous_count + 1
        expected_extra = [[0, 0, previous_count, 3, 1, 12, 1, 0], [1, previous_count, 0, 40, 0, 0, 0, 0], [2, selected['priority'] & 0xffffffff, 0, 0, 0, 0, 0, 0]] + [[kind, previous_count, 0, 0, 0, 0, 0, 0] for kind in [4, 3]]
        observed_extra = [list(struct.unpack('<8I', machine.read_bytes(observe(10) + index * 32, 32))) for index in range(len(final_trace), observe(11))]
        assert observed_extra == expected_extra
        record['independentDependencyTrace'] = observed_extra
        if profile != 'windows':
            record['compiled072EntriesObserved'] = sorted(machine.construction_seen)
            expected_entries = set(machine.construction_entries.values())
            if selected['mode'] == 2: expected_entries.remove('effect_file_priority072')
            assert set(record['compiled072EntriesObserved']) == expected_entries
        guard.assert_clean()
    finally:
        assert all(identity(Path(path)) == value for path, value in pins.items())
        assert all(identity(Path(path))['sha256'] == value for path, value in support.items())
        imports = []
        declared = {guard.path(path) for path in support}
        for name, module in list(sys.modules.items()):
            value = getattr(module, '__file__', None)
            if value and Path(value).suffix == '.py' and guard.path(value) in declared and Path(value).is_relative_to(ROOT / 'toolscripts'):
                imports.append({'module': name, 'actualSource': str(Path(value)), **identity(Path(value)), 'bytecodeCacheUsed': False})
        imports.append({'module': 'frozen068_source_guard', 'actualSource': str(snapshot), **identity(snapshot), 'bytecodeCacheUsed': False})
        assert not Path(sys.pycache_prefix).exists()
        record.update(immutableInputsUnchanged=True, inputPins=pins, supportPins=support, audit=guard.receipt(), freshSourceImports=imports, bytecodePrefixAbsent=True)
        (output / 'report.json').write_text(json.dumps(record, indent=2) + '\n')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('profile', choices=['arm', 'windows', 'a64'])
    parser.add_argument('case')
    parser.add_argument('output', type=Path)
    parser.add_argument('--source', type=Path, default=BASE / 'source-v4')
    parser.add_argument('--build', type=Path, default=BASE / 'build-v4')
    args = parser.parse_args()
    try:
        run(args.profile, args.case, args.build.resolve(), args.source.resolve(), args.output.resolve())
    except Exception as error:
        print(type(error).__name__ + ': ' + str(error), file=sys.stderr)
        sys.exit(1)
