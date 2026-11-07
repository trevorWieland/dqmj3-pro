import argparse
import ctypes
import json
import pickle
import time
from pathlib import Path

from native_archive032_gzip_reference import ReferenceImage
from native_wave013_common import ROOT, record, save, sha
from squirrel_state049_model import FRAME_KEYS, frame_abi
from squirrel_state049_observe import Observer, original_maps, source_maps
from squirrel_state049_oracle import execute as arm_execute
from squirrel_state049_native import execute as native_execute, maps as native_maps
from squirrel_state049_a64 import execute as a64_execute


def cases():
    rows = [{'name': 'cold-' + str(size) + '-' + str(seed), 'scenario': 'cold',
        'stackSize': size, 'seed': seed, 'input': 'caller_value'}
        for size in [3, 4, 7, 16, 64, 255, 512, 1024] for seed in [0, 15]]
    rows.extend({'name': scenario, 'scenario': scenario, 'stackSize': 64,
        'seed': index, 'input': text} for index, (scenario, text) in enumerate([
            ('push-pop', 'temporary_value'), ('name-negative', 'renamed_assert'),
            ('name-positive', 'positive_assert'), ('valid-mask', 'n|fs.t'),
            ('invalid-mask', 'a@'), ('mask-clear', ''), ('wrong-type-name', 'unused'),
            ('wrong-type-mask', 'n'), ('null-key', ''), ('slot-integer', 'caller_key'),
            ('non-table', '')]))
    return rows


def identity(value):
    return sha(json.dumps(value, sort_keys=True, separators=(',', ':')).encode())


def run(graphs, output, selection=None):
    output.mkdir(parents=True, exist_ok=True)
    started = time.monotonic()
    arm, dll, high, receipts = pickle.loads(graphs.read_bytes())
    reference = ReferenceImage()
    library = ctypes.CDLL(str(dll))
    native_frame = dict(zip(FRAME_KEYS,
        list((ctypes.c_uint * len(FRAME_KEYS)).in_dll(library, 'sq_fixture_frame_layout049')), strict=True))
    rows, paths, reference_instructions = [], set(), {}
    for case in cases():
        if selection and case['name'] not in selection:
            continue
        seed, size, scenario = case['seed'], case['stackSize'], case['scenario']
        text = case['input'].encode('ascii')
        original = arm_execute(arm, 'factory', reference, seed, text,
            flags=seed, thumb=bool(seed & 1), stack_size=size, scenario=scenario)
        original['frameAbi'] = frame_abi(arm)
        observer = Observer(original, *original_maps(reference.image))
        expected = observer.observe()
        profiles = {}
        results = [('arm', arm_execute(arm, 'factory', seed=seed, mask=text,
            flags=seed, thumb=bool(seed & 1), stack_size=size, scenario=scenario), source_maps(arm), frame_abi(arm)),
            ('windows', native_execute(library, 'factory', seed, text, size, scenario), native_maps(library), native_frame),
            ('a64', a64_execute(high, 'factory', seed, text, seed, size, scenario), source_maps(high), frame_abi(high))]
        for profile, result, mapping, frame in results:
            result['frameAbi'] = frame
            actual_observer = Observer(result, *mapping)
            actual = actual_observer.observe()
            save(output / (case['name'] + '-' + profile + '-state.json'), actual)
            if actual != expected or result['apiResults'] != original['apiResults']:
                save(output / (case['name'] + '-expected-state.json'), expected)
                raise ValueError('049 typed factory/caller graph differs: ' + case['name'] + '/' + profile)
            profiles[profile] = {'returnedNormally': True, 'sourceOnlyExecution': True,
                'callerGuardsPreserved': True, 'stateSha256': identity(actual),
                'liveAllocationRoles': len(actual_observer.roles), 'apiResults': result['apiResults'],
                'portableAllocationAccounting': sorted(actual_observer.roles.values(), key=lambda row: row['role'])}
        paths.update(original['codePath'])
        reference_instructions.update({(row['address'], row['mode']): row for row in original['referenceInstructions']})
        rows.append({'case': case, 'originalStateSha256': identity(expected),
            'originalSdkLiveBlocks': len(original['sdkLiveAllocations']), 'originalApiResults': original['apiResults'],
            'originalAllocationAccounting': sorted(observer.roles.values(), key=lambda row: row['role']),
            'profiles': profiles, 'allQualifiedProfilesAgree': True})
        save(output / 'rows.json', rows)
        print(json.dumps({'case': case['name'], 'roles': len(observer.roles),
            'elapsedSeconds': time.monotonic() - started}), flush=True)
    receipt = {'status': 'bounded-root-factory-and-caller-graph-four-profiles-agree-not-admission',
        'producer': record(Path(__file__)), 'cases': len(rows), 'rows': record(output / 'rows.json'),
        'originalCodePath': sorted(paths), 'referenceInstructions': list(reference_instructions.values()),
        'elapsedSeconds': time.monotonic() - started, 'sourceCreditGranted': 0,
        'allocationFailureQualified': False, 'sdkPrivateRepresentationForcedEqual': False}
    save(output / 'receipt.json', receipt)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--graphs', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--case', action='append')
    args = parser.parse_args()
    run(args.graphs.resolve(), args.output.resolve(), args.case)
