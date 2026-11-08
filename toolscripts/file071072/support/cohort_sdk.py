import argparse
import ctypes
import hashlib
import importlib.util
import json
from pathlib import Path
import struct
import sys
import types


ROOT = Path(__file__).resolve().parents[2]
BASE = Path(__file__).resolve().parent
sys.pycache_prefix = str(BASE / 'unwritten-bytecode')


def identity(path):
    data = path.read_bytes()
    return {'bytes': len(data), 'sha256': hashlib.sha256(data).hexdigest()}


def write(path, value):
    path.write_text(json.dumps(value, indent=2) + '\n')


def decode_trace(raw):
    rows = []
    for op, kind, entries, entry_bytes, logical, option, low, high in raw:
        key = low | (high << 32)
        scheme = key.to_bytes(8, 'big').lstrip(b'\0').decode('ascii') + ':' if key else None
        if op == 0: row = {'operation': 'initialize'}
        elif op == 1: row = {'operation': 'requirements', 'kind': kind, 'entries': entries, 'entryBytes': entry_bytes, 'option': option}
        elif op == 2: row = {'operation': 'allocate', 'kind': kind, 'logicalBytes': logical}
        elif op == 3: row = {'operation': 'mount', 'kind': kind, 'scheme': scheme, 'entries': entries, 'entryBytes': entry_bytes, 'logicalBytes': logical, 'option': option}
        elif op == 5: row = {'operation': 'unmount', 'scheme': scheme}
        elif op == 6: row = {'operation': 'release', 'kind': kind, 'logicalBytes': logical}
        else: raise ValueError('Unqualified service operation')
        rows.append(row)
    return rows


def run(profile, build, source, output):
    assert output.is_relative_to(BASE) and not output.exists() and build.is_relative_to(BASE) and source.is_relative_to(BASE)
    output.mkdir(parents=True)
    frozen_guard = ROOT / 'work/native-file068/recovered-v1/cohort.py'
    snapshot = BASE / 'frozen-source-guard.py'
    if snapshot.exists():
        assert identity(snapshot) == identity(frozen_guard)
    else:
        snapshot.write_bytes(frozen_guard.read_bytes())
    previous = types.ModuleType('frozen068_source_guard')
    previous.__file__ = str(frozen_guard)
    exec(compile(snapshot.read_bytes(), str(snapshot), 'exec'), previous.__dict__)
    previous.BASE = BASE
    sys.pycache_prefix = str(BASE / 'unwritten-bytecode')
    guard, support_pins = previous.install_guard()
    for name in ['work', 'generated']:
        guard.additional_forbidden_roots.append(guard.path(source / name))
    oracle_path = BASE / 'sdk069-oracle.json'
    selected_inputs = [path for path in source.rglob('*') if path.is_file()]
    selected_inputs += [path for path in build.rglob('*') if path.is_file()]
    selected_inputs += [oracle_path, Path(__file__).resolve(), snapshot]
    pins = {str(path): identity(path) for path in selected_inputs}
    guard.immutable.update(guard.path(path) for path in selected_inputs)
    record = {'status': 'failed', 'profile': profile, 'sourceCreditGranted': 0,
        'originalImageMapped': False, 'sourceReturned': False, 'workerObservationDomain': 'before-start/paused-event/join'}
    try:
        import effect_queue067_source_cpu as cpu
        import effect_queue067_native as native
        if profile == 'windows':
            machine = native.Native(build / 'windows')
            machine.owner_prepare(native.request.device_reference.generated_file())
            for name in ['effect_file_fixture_observe068', 'effect_file_fixture_pool_observe068', 'effect_file_fixture_sdk_observe069']:
                function = getattr(machine.library, name)
                function.argtypes = [ctypes.c_uint]
                function.restype = ctypes.c_void_p
            for name in ['effect_file_fixture_trace068', 'effect_file_fixture_pool_trace068', 'effect_file_fixture_sdk_trace069']:
                getattr(machine.library, name).restype = ctypes.c_void_p
            for name in ['effect_file_fixture_count068', 'effect_file_fixture_pool_count068', 'effect_file_fixture_sdk_count069']:
                getattr(machine.library, name).restype = ctypes.c_uint
            machine.library.effect_file_fixture_teardown_prepare068.argtypes = [ctypes.c_uint, ctypes.c_void_p]
            machine.library.effect_file_fixture_teardown_prepare068(1, ctypes.addressof(machine.api))
            call = lambda name, args: getattr(machine.library, name)(*args)
        else:
            class Source(cpu.Machine):
                def write(self, processor, access, address, size, value, user):
                    if self.active:
                        for name in ['file_fixture068', 'teardown_fixture068']:
                            row = self.graph['objects'].get(name)
                            if row and row['address'] <= address < address + size <= row['address'] + row['bytes']:
                                return
                    super().write(processor, access, address, size, value, user)

                def shutdown_bootstrap(self):
                    self.phase, self.pause, self.active = 'join', None, True
                    try:
                        self.invoke('effect_file_fixture_shutdown068', [])
                    except ValueError as error:
                        if str(error) != 'Texture actual caller return/integer/float ABI differs' or not self.pause:
                            raise
                    parent = self.cpu.context_save()
                    if self.pause != 'effect_queue_fixture_join_yield067' or self.worker_context is None:
                        raise ValueError('Source shutdown failed to wait for actual compiled live worker')
                    self.phase, self.active = None, False
                    self.invoke('effect_queue_fixture_context067', [1])
                    self.stack = self.worker_stack
                    self.cpu.context_restore(self.worker_context)
                    self.ignore_marker, self.active, self.returned = True, True, False
                    self.cpu.emu_start(self.pc(), self.stop + 4, count=2000000)
                    if not self.returned or not self.word(self.qstate + self.f['exited']):
                        raise ValueError('Compiled source worker failed to exit before source join')
                    self.active, self.stack = False, self.parent_stack
                    self.invoke('effect_queue_fixture_context067', [0])
                    self.cpu.context_restore(parent)
                    self.phase, self.ignore_marker, self.active, self.returned = 'join', True, True, False
                    self.cpu.emu_start(self.pc(), self.stop + 4, count=2000000)
                    self.phase, self.active = None, False
                    if not self.returned:
                        raise ValueError('Compiled application shutdown did not restore its actual caller')
                    registers = cpu.a64 if self.a64 else cpu.arm
                    sp = cpu.a64.UC_ARM64_REG_SP if self.a64 else cpu.arm.UC_ARM_REG_SP
                    integer = [(getattr(registers, ('UC_ARM64_REG_X' if self.a64 else 'UC_ARM_REG_R') + str(index)),
                        (0x6500000000000000 if self.a64 else 0x65000000) + index) for index in (range(19, 30) if self.a64 else range(4, 12))]
                    floating = [(getattr(registers, ('UC_ARM64_REG_D' if self.a64 else 'UC_ARM_REG_D') + str(index)),
                        0x3fe0000000000000 + index) for index in range(8, 16)]
                    if self.cpu.reg_read(sp) != self.parent_stack + 0xffe0 or any(self.cpu.reg_read(reg) != value for reg, value in integer + floating):
                        raise ValueError('Compiled application shutdown changed caller stack/integer/floating ABI')

            machine = Source(profile, build / profile / 'effect_resource.elf')
            if machine.original or hasattr(machine, 'reference'):
                raise ValueError('Source shutdown instantiated original machine state')
            for name, row in machine.graph['functions'].items():
                if name.startswith('effect_file_'):
                    machine.functions[name] = row['address']
            machine.setup()
            machine.owner_prepare(native.request.device_reference.generated_file())
            machine.invoke('effect_file_fixture_teardown_prepare068', [0, 0])
            call = lambda name, args: machine.invoke(name, args)
        get = lambda field: int(call('effect_file_fixture_observe068', [field]) or 0)
        pool_get = lambda field: int(call('effect_file_fixture_pool_observe068', [field]) or 0)
        if profile != 'windows': machine.active = True
        call('effect_file_fixture_start068', [])
        if profile != 'windows': machine.active = False
        machine.manager, machine.worker = get(0), get(3)
        if not machine.manager or not machine.worker:
            raise ValueError('Source shutdown setup lacks its independently constructed manager/worker')
        if profile == 'windows':
            if call('effect_queue_fixture_native_step067', []) != 0:
                raise ValueError('Real Windows source worker failed to reach its event pause')
            call('effect_file_fixture_shutdown068', [])
        else:
            machine.step()
            machine.shutdown_bootstrap()
        record['sourceReturned'] = bool(pool_get(3))
        count = call('effect_file_fixture_count068', [])
        pointer = call('effect_file_fixture_trace068', [])
        trace = decode_trace(list(struct.iter_unpack('<8I', machine.read_bytes(pointer, count * 32))))
        pool_count = call('effect_file_fixture_pool_count068', [])
        pool_pointer = call('effect_file_fixture_pool_trace068', [])
        pool_trace = [list(row) for row in struct.iter_unpack('<5I', machine.read_bytes(pool_pointer, pool_count * 20))]
        logical = []
        guard_bytes = 0
        for index in range(int.from_bytes(machine.read_bytes(machine.state + machine.layout['allocations'], 4), 'little')):
            values = struct.unpack('<6I', machine.read_bytes(machine.state + machine.layout['records'] + index * 24, 24))
            address = machine.state + machine.layout['heap'] + index * machine.layout['heapStride'] + machine.layout['payloadOffset']
            tail = machine.layout['heapStride'] - machine.layout['payloadOffset'] - values[1]
            if machine.read_bytes(address - 128, 128) != bytes([0xa5]) * 128 or machine.read_bytes(address + values[1], tail) != bytes([0xa5]) * tail:
                raise ValueError('Source shutdown changed allocation redzones or unused backing')
            guard_bytes += 128 + tail
            logical.append({'bytes': values[0], 'live': bool(values[5])})
        semantic = {'serviceTrace': trace, 'poolTrace': pool_trace, 'logicalAllocations': logical,
            'manager': bool(get(0)), 'rom': bool(get(1)), 'patch': bool(get(2)), 'romMounted': get(12), 'patchMounted': get(13),
            'poolLiveCount': pool_get(0), 'poolFreeHead': pool_get(1), 'poolDepth': pool_get(2),
            'poolFreeLinks': [pool_get(index) for index in range(5, 21)],
            'opaquePreservedAcrossPoolWrapperAfterCallback': bool(pool_get(21)),
            'threadPlatform': {name: machine.word(machine.qstate + machine.f[name]) for name in ['creates', 'joins', 'closes', 'sleeps', 'exited']}}
        sdk_count = call('effect_file_fixture_sdk_count069', [])
        sdk_pointer = call('effect_file_fixture_sdk_trace069', [])
        sdk_trace = [list(row) for row in struct.iter_unpack('<8I', machine.read_bytes(sdk_pointer, sdk_count * 32))]
        sdk_get = lambda field: int(call('effect_file_fixture_sdk_observe069', [field]) or 0)
        semantic.update(sdkTrace=sdk_trace, streamPoolLiveCount=sdk_get(0), streamPoolFreeHead=sdk_get(1),
            streamPoolDepth=sdk_get(2), sdkFinalIPCWords=[sdk_get(3), sdk_get(4)],
            sdkDeviceReturns=sdk_get(5), sdkStreamReturns=sdk_get(6), sdkEmbeddedReturns=sdk_get(7),
            streamPoolFreeLinks=[sdk_get(field) for field in range(8, 40)],
            streamHandles=[sdk_get(40), sdk_get(41)], deviceViewsCleared=[bool(sdk_get(42)), bool(sdk_get(43))],
            sdkUntouchedDeviceBytesPreserved=bool(sdk_get(44)))
        oracle = json.loads(oracle_path.read_text())
        expected = {key: oracle[key] for key in semantic}
        mismatch = [key for key in semantic if semantic[key] != expected[key]]
        record.update(semantic=semantic, expected=expected, mismatch=mismatch,
            redzoneAndUnusedBackingBytes=guard_bytes,
            nativeWindowsThreadMutexEventsExecuted=profile == 'windows', physicalAndroidExecuted=False,
            hostOSFilesystemMounted=False, SDKDeviceDestructor124BSourceCExecuted=True, SDKAlgorithmCallbackRemaining=False)
        if mismatch:
            raise ValueError('Returned source shutdown differs from independent original observer: ' + ','.join(mismatch))
        guard.assert_clean()
        record['status'] = 'passed'
    finally:
        unchanged = all(identity(Path(path)) == value for path, value in pins.items())
        support_unchanged = all(identity(Path(path))['sha256'] == value for path, value in support_pins.items())
        imports = []
        selected_support = {guard.path(path): value for path, value in support_pins.items()}
        for name, module in list(sys.modules.items()):
            value = getattr(module, '__file__', None)
            if value and Path(value).suffix == '.py' and guard.path(value) in selected_support and Path(value).is_relative_to(ROOT / 'toolscripts'):
                imports.append({'module': name, 'actualSource': str(Path(value)), **identity(Path(value)), 'bytecodeCacheUsed': False})
        imports.append({'module': 'frozen068_source_guard', 'actualSource': str(snapshot), **identity(snapshot), 'bytecodeCacheUsed': False, 'logicalAnchorOnly': str(frozen_guard)})
        assert not Path(sys.pycache_prefix).exists()
        record.update(immutableInputsUnchanged=unchanged and support_unchanged,
            inputPins=pins, supportPins=support_pins, audit=guard.receipt(),
            freshSourceImports=imports, bytecodePrefixAbsent=True)
        write(output / 'report.json', record)
        if not unchanged or not support_unchanged:
            raise ValueError('Source shutdown immutable input bytes changed')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('profile', choices=['arm', 'windows', 'a64'])
    parser.add_argument('output', type=Path)
    parser.add_argument('--build', type=Path, default=BASE / 'build-v2')
    parser.add_argument('--source', type=Path, default=BASE / 'source-v2')
    args = parser.parse_args()
    run(args.profile, args.build.resolve(), args.source.resolve(), args.output.resolve())
