import argparse
import importlib.util
import json
from pathlib import Path
import shutil
import sys


ROOT = Path(__file__).resolve().parents[2]
BASE = Path(__file__).resolve().parent
PREVIOUS = ROOT / 'work/native-file068/recovered-v1'


def run(output, source_root):
    spec = importlib.util.spec_from_file_location('frozen068_builder', PREVIOUS / 'build.py')
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    cached = module.builder.predecessor.cached
    extra, exports = cached.EXTRA, cached.EXPORTS
    cached.EXTRA = extra + ['../wave069-device/' + name for name in ['device_destroy069', 'stream_destroy069', 'embedded069', 'ipc069']] + ['../wave068-teardown/device_pool', '../wave068-bootstrap/filesystem',
        '../wave068-bootstrap/singleton', '../wave068-bootstrap/requests']
    cached.EXPORTS = exports + ['effect_file_bootstrap_initialize068', 'effect_file_bootstrap_shutdown068',
        'effect_file_filesystem_initialize068', 'effect_file_filesystem_shutdown068', 'effect_file_request_async068',
        'effect_file_device_pool_release068', 'effect_file_fixture_start068', 'effect_file_fixture_observe068',
        'effect_file_fixture_count068', 'effect_file_fixture_trace068', 'effect_file_fixture_teardown_prepare068',
        'effect_file_fixture_shutdown068', 'effect_file_fixture_pool_count068',
        'effect_file_fixture_pool_trace068', 'effect_file_fixture_pool_observe068', 'effect_file_sdk_device_destroy069', 'effect_file_sdk_stream_release069', 'effect_file_sdk_stream_destroy069', 'effect_file_sdk_stream_handle069', 'effect_file_sdk_embedded_destroy069', 'effect_file_sdk_file_close069', 'effect_file_fixture_sdk_count069', 'effect_file_fixture_sdk_trace069', 'effect_file_fixture_sdk_observe069', 'effect_branch_fixture_prepare070', 'effect_branch_fixture_start070', 'effect_branch_fixture_warm070', 'effect_branch_fixture_finish070', 'effect_branch_fixture_observe070', 'effect_branch_fixture_slot070', 'effect_branch_fixture_context070', 'effect_branch_fixture_thread_entry070', 'effect_branch_fixture_native_step070', 'effect_branch_fixture_sleep_yield070', 'effect_branch_fixture_join_yield070']
    try:
        return module.builder.build(output, {source_root / 'toolscripts/effect065_cached_composed_fixture.c':
            source_root / 'toolscripts/branch_source_fixture070.c'}, source_root=source_root)
    finally:
        cached.EXTRA, cached.EXPORTS = extra, exports


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--source', type=Path, default=BASE / 'source')
    parser.add_argument('--output', type=Path, default=BASE / 'build-v1')
    parser.add_argument('--stage', action='store_true')
    args = parser.parse_args()
    source = args.source.resolve()
    output = args.output.resolve()
    if args.stage:
        assert not source.exists()
        previous = ROOT / 'work/native-file069-device-destructor-v1/source-v2'
        for path in previous.rglob('*'):
            if path.is_file():
                destination = source / path.relative_to(previous)
                destination.parent.mkdir(parents=True, exist_ok=True)
                shutil.copyfile(path, destination)
        for name in ['branch_threads070.c', 'branch_source_fixture070.c']:
            shutil.copyfile(BASE / name, source / 'toolscripts' / name)
    result = run(output, source)
    print(json.dumps({'profiles': list(result['artifacts']),
        'artifacts': sum(len(row['objects']) + 1 for row in result['artifacts'].values()),
        'sourceCreditGranted': 0}))
