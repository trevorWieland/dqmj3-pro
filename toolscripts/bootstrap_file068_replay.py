import argparse
import ctypes
import importlib
import json
from pathlib import Path
import shutil
import struct
import subprocess
import sys
import time

import bootstrap_file068_inputs as inputs
from bootstrap_file068_guard import Guard
from queue_file067_loader import FreshSources


PROBES = ['open', 'stat', 'lstat', 'listdir', 'scandir', 'resolve', 'original-constructor',
    'image-read', 'metadata-write', 'named-library', 'absolute-library', 'tiny-history']


def write(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n')


def compare_artifacts(recipe, expected):
    rows = []
    for profile, actual in recipe['artifacts'].items():
        old = expected[profile]
        for a, b in zip(old['objects'] + [old['linked']], actual['objects'] + [actual['linked']], strict=True):
            if (a['bytes'], a['sha256']) != (b['bytes'], b['sha256']):
                raise ValueError('Public068 compiler/linker artifact identity differs')
            rows.append({'profile': profile, 'bytes': b['bytes'], 'sha256': b['sha256']})
    return rows


def build_source(root, target, directory, source_root):
    module = importlib.import_module('build')
    common = module.builder.predecessor.cached.common
    common.ROOT, common.TOOLS = target, root / 'tools/clang-21'
    return module.run(directory, source_root)


def observe_original(target):
    trace = importlib.import_module('original_trace')
    base = trace.singleton_replay.singleton_bootstrap.patch_provider.fs_priority.run_component.romfs_constructor_view.generated_romfs_provider.romfs_mount_pool_v3.romfs_mount_frontier.romfs_large
    base.ELF = target / 'build/arm/effect_resource.elf'
    base.romfs_close.romfs_read.sdk_initialized_v2.sdk_initialized.romfs_handle.ipc_buffers.fs_contract.RESPOND_PRIORITY = True
    machine = trace.Machine(base.ELF)
    machine.setup()
    machine.active = True
    machine.invoke('file_bootstrap068', [])
    machine.active = False
    manager = int.from_bytes(machine.read_bytes(0x898154, 4), 'little')
    worker = int.from_bytes(machine.read_bytes(manager + 4, 4), 'little')
    registry = []
    for index in range(32):
        words = struct.unpack('<4I', machine.read_bytes(0x8e3470 + index * 16, 16))
        if any(words):
            registry.append({'key': words[0] | (words[1] << 32), 'devicePointer': words[2], 'flags': words[3]})
    allocations = machine.allocations()
    logical = {row['pointer']: row['record'][0] for row in allocations}
    state = struct.unpack('<3I', machine.read_bytes(0x89a4e8, 12))
    rom, patch = state[1:]
    semantic = {'trace': trace.TRACE,
        'logicalAllocations': [{'bytes': row['record'][0], 'live': bool(row['record'][5])} for row in allocations],
        'manager': bool(manager), 'rom': bool(rom), 'patch': bool(patch), 'worker': bool(worker),
        'workerRunning': machine.read_bytes(worker + 0x1008, 1)[0],
        'pending': int(bool(int.from_bytes(machine.read_bytes(worker + 0x1018, 4), 'little'))),
        'deferred': int(bool(int.from_bytes(machine.read_bytes(worker + 0x101c, 4), 'little'))),
        'current': int(bool(int.from_bytes(machine.read_bytes(worker + 0x1020, 4), 'little'))),
        'romLogicalBytes': logical[rom], 'patchLogicalBytes': logical[patch],
        'romMounted': int(any(row['key'] == int.from_bytes(b'rom', 'big') for row in registry)),
        'patchMounted': int(any(row['key'] == int.from_bytes(b'patch', 'big') for row in registry)),
        'romWorkspaceIdentity': rom == trace.WORK[0], 'patchWorkspaceIdentity': patch == trace.WORK[5],
        'threadCreates': int(machine.thread_contract is not None), 'unknown00': state[0],
        'romKind': trace.TRACE[1]['kind'], 'patchKind': trace.TRACE[4]['kind'], 'returned': 1}
    guards = []
    for row in allocations:
        pointer, physical = row['pointer'], row['record'][1]
        tail = machine.layout['heapStride'] - machine.layout['payloadOffset'] - physical
        if machine.read_bytes(pointer - 128, 128) != bytes([0xa5]) * 128 or machine.read_bytes(pointer + physical, tail) != bytes([0xa5]) * tail:
            raise ValueError('Public068 actual-original allocation guard changed')
        guards.append({'beforeBytes': 128, 'tailBytes': tail})
    return {'semantic': semantic, 'registry': registry, 'allocationGuards': guards,
        'threadContract': machine.thread_contract, 'workerScheduled': False,
        'instructionWitnesses': list(machine.witnesses.values()), 'kernelContracts': machine.kernel_contracts,
        'ipcAttempts': machine.ipc_attempts, 'sourceCreditGranted': 0}


def source_case(target, guard, profile, build, output, control=False):
    output.parent.mkdir(parents=True, exist_ok=True)
    module = importlib.import_module('cohort')
    module.BASE = target
    module.install_guard = lambda: (guard, {})
    sys.pycache_prefix = str(target / 'unwritten-bytecode')
    try:
        module.run(profile, build, output)
    except ValueError as error:
        if not control or str(error) != '068 authored bootstrap differs from actual original service trace/ownership graph':
            raise
    row = json.loads((output / 'report.json').read_text())
    if control:
        if row['status'] != 'source-observer-mismatch' or row['semantic']['returned'] != 1:
            raise ValueError('Public068 control did not return before independent observer rejection')
    elif row['status'] != 'passed':
        raise ValueError('Public068 source child did not pass')
    return {'profile': profile, 'sourceReturned': row['semantic']['returned'] == 1,
        'independentObserverRejected': control, 'report': str(output / 'report.json')}


def controls_build(root, output, manifest, guard):
    module = importlib.import_module('controls')
    frozen = json.loads((output / 'metadata/control-build-identities.json').read_text())['artifacts']
    source_rows = json.loads((output / 'metadata/source-controls.json').read_text())['controls']
    expected_sources = {row['name']: row['source'] for row in source_rows}
    results = []
    for name, filename, old, new in module.MUTATIONS:
        target = output / 'controls' / name
        for row in manifest['productionAndFixtures']:
            destination = target / 'source' / row['logicalPath']
            destination.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(output / 'source' / row['logicalPath'], destination)
        changed = target / 'source/src/native/wave068-bootstrap' / filename
        text = changed.read_text()
        if text.count(old) != 1:
            raise ValueError('Public068 source control target differs')
        text = text.replace(old, new)
        if name == 'allocation-order':
            marker = '        state->manager = manager;\n    }\n}'
            if text.count(marker) != 1:
                raise ValueError('Public068 allocation-order control target differs')
            text = text.replace(marker, marker[:-1] + '    effect_file_filesystem_initialize068(state, 1);\n}')
        changed.write_text(text)
        inputs.checked(changed, expected_sources[name])
        guard.immutable.update(guard.path(target / 'source' / row['logicalPath']) for row in manifest['productionAndFixtures'])
        recipe = build_source(root, output, target / 'build', target / 'source')
        results.append({'control': name, 'exactArtifacts': compare_artifacts(recipe, frozen[name])})
    return results


def probe(root, output, name):
    import os
    history = root / 'work/undeclared068-public-history/absent.bin'
    operations = {'open': history.read_bytes, 'stat': history.stat, 'lstat': history.lstat,
        'listdir': lambda: os.listdir(history.parent), 'scandir': lambda: os.scandir(history.parent),
        'resolve': history.resolve,
        'image-read': lambda: (root / 'generated/update-content0/code.bin').read_bytes(),
        'metadata-write': lambda: (output / 'original-v2/report.json').write_text('forbidden'),
        'named-library': lambda: ctypes.CDLL('undeclared068.dll'),
        'absolute-library': lambda: ctypes.CDLL(str(root / 'tools/clang-21/undeclared068.dll')),
        'tiny-history': lambda: (output / 'tiny/source/work/absent.bin').stat()}
    try:
        if name == 'original-constructor':
            importlib.import_module('native_wave013_file_owner_reference_image').ReferenceImage()
        else:
            operations[name]()
    except ValueError:
        pass


def child(root, output, mode, profile, control, selected_probe):
    manifest = json.loads((output / 'manifest.json').read_text())
    target = inputs.tiny_copy(output, manifest) if mode == 'tiny-build' else output / 'tiny' if mode == 'tiny' else output
    before = inputs.verify(root, output, manifest, mode)
    anchor = target / 'source' if mode.startswith('tiny') else root
    mappings = {root / row['legacyRequest']: output / 'metadata' / row['snapshot'] for row in manifest['metadataSnapshots']}
    guard = Guard(root, output, 'original' if mode == 'original' else 'source', mappings, manifest, anchor)
    guard.additional_forbidden_roots += [guard.path(output / 'tiny/source' / name) for name in ['work', 'generated']]
    guard.immutable.update(guard.path(path) for path in before if guard.within(guard.path(path), guard.path(output)))
    loader = FreshSources(anchor, output, manifest, guard, target / 'code')
    guard.install()
    loader.install()
    sys.pycache_prefix = str(target / 'unwritten-bytecode')
    started = time.monotonic()
    record = {'status': 'failed', 'mode': mode, 'profile': profile, 'control': control, 'probe': selected_probe,
        'sourceCreditGranted': 0, 'workerScheduled': False, 'wholeGameQualified': False}
    label = selected_probe or '-'.join(value for value in [mode, control, profile] if value)
    try:
        if selected_probe:
            probe(root, output, selected_probe)
        elif mode in ['build', 'tiny-build']:
            recipe = build_source(root, target, target / 'build', target / 'source')
            record['exactArtifacts'] = compare_artifacts(recipe, manifest['originalBuildArtifacts'])
        elif mode == 'original':
            observed = observe_original(output)
            expected = json.loads((output / 'metadata/observed-original.json').read_text())
            write(output / 'actual-original-observation.json', observed)
            if observed['semantic'] != expected['semantic']:
                raise ValueError('Public068 actual original differs from frozen independent normalized observation')
            record['actualOriginalReturned'] = True
        elif mode in ['source', 'tiny', 'control']:
            folder = target / 'profiles' / profile if mode != 'control' else output / 'controls' / control / 'profiles' / profile
            build = target / 'build' if mode != 'control' else output / 'controls' / control / 'build'
            record['case'] = source_case(target, guard, profile, build, folder, mode == 'control')
        elif mode == 'controls-build':
            record['controls'] = controls_build(root, output, manifest, guard)
        guard.assert_clean()
        if inputs.verify(root, output, manifest, mode) != before:
            raise ValueError('Public068 immutable input bytes changed')
        record['status'] = 'passed'
    finally:
        try:
            unchanged = inputs.verify(root, output, manifest, mode) == before
        except Exception as error:
            unchanged = False
            record['integrityFailure'] = str(error)
        record.update(elapsedSeconds=time.monotonic() - started, inputPins=before,
            immutableInputsUnchanged=unchanged,
            audit=guard.receipt(), freshSourceImports=loader.loaded,
            originalImageAccessPermitted=mode == 'original')
        write(output / ('receipt-' + label + '.json'), record)


def run(root, public, intake, output, source_only=False, smoke=False):
    inputs.materialize(root, public, intake, output)
    script = output / 'adapter' / Path(__file__).name
    children = []

    def invoke(mode, profile=None, control=None, selected_probe=None):
        label = selected_probe or '-'.join(value for value in [mode, control, profile] if value)
        argv = [sys.executable, '-B', str(script), '--root', str(root), '--output', str(output), '--child', mode]
        for flag, value in [('--profile', profile), ('--control', control), ('--probe', selected_probe)]:
            if value:
                argv += [flag, value]
        with (output / (label + '.log')).open('wb') as stream:
            result = subprocess.run(argv, stdout=stream, stderr=subprocess.STDOUT, timeout=1800, cwd=root)
        receipt = json.loads((output / ('receipt-' + label + '.json')).read_text())
        if selected_probe:
            if result.returncode == 0 or receipt['status'] != 'failed' or not (receipt['audit']['forbiddenAccessAttempts'] or receipt['audit']['originalImageConstructorAttempts']):
                raise ValueError('Public068 caught attempt escaped persistent rejection')
        elif result.returncode or receipt['status'] != 'passed' or not receipt['immutableInputsUnchanged']:
            write(output / 'failure.json', {'status': 'preserved-public068-child-failure', 'child': label, 'exitCode': result.returncode})
            raise ValueError('Public068 child failed; preserve ' + label + '.log')
        row = {'child': label, 'exitCode': result.returncode, 'persistentProbeRejected': bool(selected_probe)}
        children.append(row)
        print(json.dumps(row), flush=True)

    invoke('build')
    if not source_only:
        invoke('original')
    for profile in ['arm'] if smoke else ['arm', 'windows', 'a64']:
        invoke('source', profile)
    if not smoke:
        invoke('controls-build')
        for control in ['cache-count', 'patch-name', 'allocation-order']:
            for profile in ['arm', 'windows', 'a64']:
                invoke('control', profile, control)
    invoke('tiny-build')
    for profile in ['arm'] if smoke else ['arm', 'windows', 'a64']:
        invoke('tiny', profile)
    for name in PROBES:
        invoke('source', selected_probe=name)
    write(output / 'ready.json', {'status': 'public068-fresh-source-transport-passed', 'children': children,
        'sourceOnly': source_only, 'smokeOnly': smoke, 'sourceCreditGranted': 0, 'workerScheduled': False,
        'taskFieldConcurrentPollingQualified': False, 'nativeWindowsOSFilesystemMounted': False,
        'physicalAndroidBootstrapExecuted': False, 'wholeGameQualified': False})


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--root', required=True, type=Path)
    parser.add_argument('--public-root', type=Path)
    parser.add_argument('--intake', type=Path)
    parser.add_argument('--output', required=True, type=Path)
    parser.add_argument('--source-only', action='store_true')
    parser.add_argument('--smoke', action='store_true')
    parser.add_argument('--child', choices=['build', 'original', 'source', 'tiny-build', 'tiny', 'controls-build', 'control'])
    parser.add_argument('--profile', choices=['arm', 'windows', 'a64'])
    parser.add_argument('--control', choices=['cache-count', 'patch-name', 'allocation-order'])
    parser.add_argument('--probe', choices=PROBES)
    args = parser.parse_args()
    root, output = args.root.resolve(), args.output.resolve()
    if not output.is_relative_to(root / 'work') or output == root / 'work':
        raise ValueError('Public068 output escaped its owned workspace')
    if args.child:
        child(root, output, args.child, args.profile, args.control, args.probe)
    else:
        run(root, args.public_root.resolve() if args.public_root else root, args.intake.resolve(), output, args.source_only, args.smoke)
