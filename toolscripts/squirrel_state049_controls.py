import argparse
import ctypes
import json
import time
from pathlib import Path

from native_wave013_common import ROOT, record, save
import squirrel_state049_build as build
from squirrel_state049_cases import identity
from squirrel_state049_model import FRAME_KEYS, frame_abi
from squirrel_state049_oracle import execute
from squirrel_state049_native import execute as windows, maps as windows_maps
from squirrel_state049_a64 import execute as a64
from squirrel_state049_observe import Observer, source_maps


MUTATIONS = [
    ('game-integer-size', 'base_register.c', 'new_constant(vm,"_intsize_",4);', 'new_constant(vm,"_intsize_",8);'),
    ('initial-call-capacity', 'vm_initialize.c', 'vm->allocated_calls=4;', 'vm->allocated_calls=5;'),
    ('native-depth', 'vm_initialize.c', 'return 1;', 'vm->native_depth=1;\n    return 1;'),
    ('factory-thread-retain', 'factory.c', 'sq_prefix_release(object.type,object.value);',
        'sq_prefix_retain(object.type,object.value);'),
    ('closure-parameter-count', 'closure_api.c', 'closure->parameter_check=parameters;',
        'closure->parameter_check=parameters+1;'),
    ('base-stack-pop', 'base_register.c', 'fn_00173cb8(vm,1);', 'fn_00173cb8(vm,0);'),
    ('typed-vm-allocation-budget', 'factory.c', 'sq_startup_allocate045(sizeof(*vm),',
        'sq_startup_allocate045(sizeof(*vm)+8,')]


def run(folder, expected_path):
    folder.mkdir(parents=True, exist_ok=True)
    started = time.monotonic()
    receipts, rows = [], []
    expected = json.loads(expected_path.read_text())
    expected_identity = identity(expected)
    for label, filename, before, after in MUTATIONS:
        source = ROOT / 'source/squirrel-wave049' / filename
        text = source.read_text()
        if text.count(before) != 1:
            raise ValueError('049 semantic mutation is ambiguous: ' + label)
        work = folder / label
        work.mkdir()
        wrong = work / filename
        wrong.write_text(text.replace(before, after))
        overrides = {filename: wrong}
        arm = build.arm(work / 'arm', receipts, overrides)
        dll = build.windows(work / 'windows', receipts, overrides)
        high = build.a64(work / 'a64', receipts, overrides)
        library = ctypes.CDLL(str(dll))
        native_frame = dict(zip(FRAME_KEYS,
            list((ctypes.c_uint * len(FRAME_KEYS)).in_dll(library, 'sq_fixture_frame_layout049')), strict=True))
        profiles = []
        for platform, result, mapping, frame in [
            ('arm', execute(arm, 'factory', seed=49), source_maps(arm), frame_abi(arm)),
            ('windows', windows(library, 'factory', 49), windows_maps(library), native_frame),
            ('a64', a64(high, 'factory', 49), source_maps(high), frame_abi(high))]:
            result['frameAbi'] = frame
            if not result['returnedNormally']:
                raise ValueError('049 wrong source failed to return normally')
            actual, error = None, None
            try:
                actual = Observer(result, *mapping).observe()
            except ValueError as exception:
                error = str(exception)
            if actual == expected:
                raise ValueError('049 normally returning semantic mutation was accepted: ' + label + '/' + platform)
            profiles.append({'platform': platform, 'returnedNormally': True,
                'callerGuardsPreserved': True, 'sourceOnlyExecution': True,
                'semanticMismatchDetected': True, 'expectedStateSha256': expected_identity,
                'wrongStateSha256': identity(actual) if actual is not None else None,
                'typedObserverRejection': error})
        rows.append({'label': label, 'source': record(source), 'wrongSource': record(wrong), 'profiles': profiles})
        save(folder / 'progress.json', {'completedNormallyReturningControls': rows,
            'compilerReceipts': receipts, 'sourceCreditGranted': 0})
        print(json.dumps({'control': label, 'elapsedSeconds': time.monotonic()-started}), flush=True)
    save(folder / 'controls.json', {'status': 'normally-returning-wrong-factory-graphs-rejected',
        'producer': record(Path(__file__)), 'expectedOriginalState': record(expected_path),
        'controls': len(rows), 'platformExecutions': 3*len(rows), 'rows': rows,
        'compilerReceipts': receipts, 'elapsedSeconds': time.monotonic()-started,
        'sourceCreditGranted': 0})


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--work', type=Path, required=True)
    parser.add_argument('--expected', type=Path, required=True)
    args = parser.parse_args()
    run(args.work.resolve(), args.expected.resolve())
