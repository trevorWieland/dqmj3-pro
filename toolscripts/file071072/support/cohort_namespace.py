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


def identity(path):
    raw = path.read_bytes()
    return {'bytes': len(raw), 'sha256': hashlib.sha256(raw).hexdigest()}


def actions(case):
    if case == 'holes':
        return [(0, 'a:', 'patch:'), (0, 'bad:', 'none:'), (0, 'patch:', 'rom:'), (1, 'none:'),
            (1, 'a:'), (0, 'a:', 'rom:'), (1, 'patch:'), (0, 'a:', 'rom:'), (1, 'a:'), (1, 'a:')]
    if case == 'capacity':
        return [(0, 'n%02d:' % index, 'rom:') for index in range(30)] + [(0, 'full:', 'n29:'),
            (0, 'tail:', 'n29:'), (0, 'n29:', 'rom:')] + [(1, 'n%02d:' % index) for index in range(30)]
    return [(2, 'seven77', 0xab, 0x81), (2, b'\x80', 0x80, 0x80), (0, 'x:', 'seven77:'),
        (0, 'hi:', b'\x80:'), (0, 'missing:', 'seven77'), (1, 'x:'), (1, 'hi:'),
        (1, 'seven77'), (1, b'\x80'), (2, ':', 0, 1), (0, 'empty:', ':')]


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
    guard.additional_forbidden_roots += [guard.path(source / name) for name in ['work', 'generated']]
    paths = [path for tree in [source, build] for path in tree.rglob('*') if path.is_file()]
    paths += [Path(__file__).resolve(), snapshot, BASE / 'namespace-oracle.json']
    pins = {str(path): identity(path) for path in paths}
    guard.immutable.update(guard.path(path) for path in paths)
    record = {'status': 'failed', 'profile': profile, 'case': case, 'sourceReturned': False,
        'sourceCreditGranted': 0, 'originalImageMapped': False, 'stages': []}
    try:
        import effect_queue067_source_cpu as cpu
        import effect_queue067_native as native
        if profile == 'windows':
            machine = native.Native(build / 'windows')
            machine.owner_prepare(native.request.device_reference.generated_file())
            for name in ['effect_namespace_fixture_input071', 'effect_namespace_fixture_observe071',
                'effect_file_fixture_pool_observe068', 'effect_file_fixture_sdk_observe069']:
                function = getattr(machine.library, name)
                function.argtypes, function.restype = [ctypes.c_uint], ctypes.c_void_p
            machine.library.effect_combined_namespace_prepare071072.argtypes = [ctypes.c_uint, ctypes.c_void_p]
            machine.library.effect_combined_namespace_operation071072.argtypes = [ctypes.c_uint, ctypes.c_int, ctypes.c_int]
            machine.library.effect_combined_namespace_operation071072.restype = ctypes.c_uint
            call = lambda name, args: getattr(machine.library, name)(*args)
            call('effect_combined_namespace_prepare071072', [1, ctypes.addressof(machine.api)])
            pointer_bytes = 8
            write = lambda address, data: ctypes.memmove(address, data, len(data))
        else:
            class Source(cpu.Machine):
                def write(self, processor, access, address, size, value, user):
                    if self.active:
                        for name in ['file_fixture068', 'teardown_fixture068', 'branch_fixture070', 'namespace_fixture071', 'construction_fixture072']:
                            row = self.graph['objects'].get(name)
                            if row and row['address'] <= address < address + size <= row['address'] + row['bytes']: return
                    super().write(processor, access, address, size, value, user)
            machine = Source(profile, build / profile / 'effect_resource.elf')
            if machine.original or hasattr(machine, 'reference'): raise ValueError('Namespace source constructed original state')
            for name, row in machine.graph['functions'].items():
                if name.startswith(('effect_namespace_', 'effect_file_', 'effect_branch_', 'effect_combined_')): machine.functions[name] = row['address']
            machine.setup()
            machine.owner_prepare(native.request.device_reference.generated_file())
            call = lambda name, args: machine.invoke(name, args)
            call('effect_combined_namespace_prepare071072', [0, 0])
            pointer_bytes = 4 if profile == 'arm' else 8
            write = lambda address, data: machine.cpu.mem_write(address, data)
        observe = lambda field: int(call('effect_namespace_fixture_observe071', [field]) or 0)
        record['sourceReturned'] = observe(7) == 1
        expected = json.loads((BASE / 'namespace-oracle.json').read_text())[case]
        constructor = {'returnsReceiver': observe(3) == 1, 'keyCleared': observe(4) == 0,
            'deviceCleared': observe(5) == 0, 'flags': observe(6)}
        record['constructor'] = constructor
        if constructor != {'returnsReceiver': True, 'keyCleared': True, 'deviceCleared': True, 'flags': 0x0f0e0d0c}:
            record['mismatch'] = ['constructor']
            raise ValueError('Returned namespace constructor differs')
        def capture(index, result):
            stride = 16 if pointer_bytes == 4 else 24
            data = machine.read_bytes(observe(0), 32 * stride)
            rows = []
            for offset in range(32):
                start = offset * stride
                rows.append([int.from_bytes(data[start:start + 8], 'little'),
                    int.from_bytes(data[start + 8:start + 8 + pointer_bytes], 'little'),
                    int.from_bytes(data[start + 8 + pointer_bytes:start + 12 + pointer_bytes], 'little')])
            devices = sorted({row[1] for row in rows if row[1]})
            allocations = []
            guards = 0
            count = call('effect_branch_fixture_observe070', [0])
            for slot in range(count):
                values = struct.unpack('<6I', machine.read_bytes(machine.state + machine.layout['records'] + slot * 24, 24))
                pointer = machine.state + machine.layout['heap'] + slot * machine.layout['heapStride'] + machine.layout['payloadOffset']
                tail = machine.layout['heapStride'] - machine.layout['payloadOffset'] - values[1]
                if machine.read_bytes(pointer - 128, 128) != bytes([0xa5]) * 128 or machine.read_bytes(pointer + values[1], tail) != bytes([0xa5]) * tail:
                    raise ValueError('Namespace source changed allocation backing guard')
                allocations.append({'bytes': values[0], 'live': bool(values[5])})
                guards += 128 + tail
            semantic = {'operation': expected['stages'][index]['operation'], 'result': result,
                'registry': [{'key': row[0], 'device': devices.index(row[1]) if row[1] else None, 'flags': row[2]} for row in rows],
                'deviceLiveCount': int(call('effect_file_fixture_pool_observe068', [0]) or 0),
                'streamLiveCount': int(call('effect_file_fixture_sdk_observe069', [0]) or 0), 'defaultDevice': bool(observe(1)),
                'deviceDestructions': observe(2), 'streamDestructions': int(call('effect_file_fixture_sdk_observe069', [6]) or 0),
                'filesystemAllocations': allocations}
            record['stages'].append({'semantic': semantic, 'expected': expected['stages'][index], 'allocationGuardBytes': guards})
            mismatch = [key for key in semantic if semantic[key] != expected['stages'][index][key]]
            if mismatch:
                record.update(mismatch=mismatch, mismatchStage=index)
                raise ValueError('Returned namespace source differs from independent original: ' + ','.join(mismatch))
        capture(0, 0)
        sequence = actions(case) + [(3,)]
        for index, action in enumerate(sequence, 1):
            opcode = action[0]
            config = borrowed = 0
            if opcode != 3:
                for slot, value in enumerate(action[1:3] if opcode == 0 else action[1:2]):
                    raw = value if isinstance(value, bytes) else value.encode('ascii')
                    write(call('effect_namespace_fixture_input071', [slot]), raw + bytes(16 - len(raw)))
                if opcode == 2: config, borrowed = action[2:]
            result = int(call('effect_combined_namespace_operation071072', [opcode, config, borrowed]) or 0) & 0xffffffff
            record['sourceReturned'] = observe(7) == 1
            capture(index, result)
        guard.assert_clean()
        record.update(status='passed', mismatch=[], nativeWindowsMutexAndEventsExecuted=profile == 'windows',
            physicalAndroidExecuted=False, hostFilesystemMounted=False, namespaceAlgorithmsReplacedByPorts=False,
            deviceConstructionRemainsQualificationPort=True)
    finally:
        unchanged = all(identity(Path(path)) == value for path, value in pins.items())
        support_unchanged = all(identity(Path(path))['sha256'] == value for path, value in support.items())
        imports = []
        declared = {guard.path(path) for path in support}
        for name, module in list(sys.modules.items()):
            value = getattr(module, '__file__', None)
            if value and Path(value).suffix == '.py' and guard.path(value) in declared and Path(value).is_relative_to(ROOT / 'toolscripts'):
                imports.append({'module': name, 'actualSource': str(Path(value)), **identity(Path(value)), 'bytecodeCacheUsed': False})
        imports.append({'module': 'frozen068_source_guard', 'actualSource': str(snapshot), **identity(snapshot), 'bytecodeCacheUsed': False})
        assert not Path(sys.pycache_prefix).exists()
        record.update(immutableInputsUnchanged=unchanged and support_unchanged, inputPins=pins, supportPins=support,
            audit=guard.receipt(), freshSourceImports=imports, bytecodePrefixAbsent=True)
        (output / 'report.json').write_text(json.dumps(record, indent=2) + '\n')
        if not unchanged or not support_unchanged: raise ValueError('Namespace source inputs mutated')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('profile', choices=['arm', 'windows', 'a64'])
    parser.add_argument('case', choices=['holes', 'capacity', 'bytes'])
    parser.add_argument('output', type=Path)
    parser.add_argument('--source', type=Path, default=BASE / 'source-v1')
    parser.add_argument('--build', type=Path, default=BASE / 'build-v1')
    args = parser.parse_args()
    run(args.profile, args.case, args.build.resolve(), args.source.resolve(), args.output.resolve())
