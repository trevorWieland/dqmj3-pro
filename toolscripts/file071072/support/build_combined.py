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
    cached.EXTRA = extra + ['../wave072-construction/' + name for name in ['pool072', 'ipc072', 'device072']] + ['../wave071-namespace/namespace071'] + ['../wave069-device/' + name for name in ['device_destroy069', 'stream_destroy069', 'embedded069', 'ipc069']] + ['../wave068-teardown/device_pool', '../wave068-bootstrap/filesystem',
        '../wave068-bootstrap/singleton', '../wave068-bootstrap/requests']
    cached.EXPORTS = exports + ['effect_file_atomic_initialize072', 'effect_file_mutex_initialize072', 'effect_file_pool_initialize072', 'effect_file_pool_allocate072', 'effect_file_device_allocate072', 'effect_file_device_construct072', 'effect_file_stream_attach072', 'effect_file_open_direct072', 'effect_file_read_ipc072', 'effect_file_stream_read072', 'effect_file_cached_service072', 'effect_file_priority_ipc072', 'effect_file_priority072', 'effect_file_device_initialize072', 'effect_file_device_factory072', 'effect_construction_fixture_prepare072', 'effect_construction_fixture_start072', 'effect_construction_fixture_finish072', 'effect_construction_fixture_observe072', 'effect_construction_fixture_layout072', 'effect_construction_fixture_types072', 'effect_construction_fixture_probe072', 'effect_construction_fixture_dependencies072', 'effect_construction_fixture_dependency_results072', 'effect_combined_fixture_prepare071072', 'effect_combined_namespace_prepare071072', 'effect_combined_fixture_finish071072', 'effect_combined_fixture_observe071072', 'effect_combined_namespace_operation071072'] + ['effect_file_namespace_construct071', 'effect_file_namespace_alias071', 'effect_file_namespace_register071', 'effect_file_namespace_unmount071', 'effect_namespace_fixture_prepare071', 'effect_namespace_fixture_operation071', 'effect_namespace_fixture_input071', 'effect_namespace_fixture_observe071', 'effect_file_bootstrap_initialize068', 'effect_file_bootstrap_shutdown068',
        'effect_file_filesystem_initialize068', 'effect_file_filesystem_shutdown068', 'effect_file_request_async068',
        'effect_file_device_pool_release068', 'effect_file_fixture_start068', 'effect_file_fixture_observe068',
        'effect_file_fixture_count068', 'effect_file_fixture_trace068', 'effect_file_fixture_teardown_prepare068',
        'effect_file_fixture_shutdown068', 'effect_file_fixture_pool_count068',
        'effect_file_fixture_pool_trace068', 'effect_file_fixture_pool_observe068', 'effect_file_sdk_device_destroy069', 'effect_file_sdk_stream_release069', 'effect_file_sdk_stream_destroy069', 'effect_file_sdk_stream_handle069', 'effect_file_sdk_embedded_destroy069', 'effect_file_sdk_file_close069', 'effect_file_fixture_sdk_count069', 'effect_file_fixture_sdk_trace069', 'effect_file_fixture_sdk_observe069', 'effect_branch_fixture_prepare070', 'effect_branch_fixture_start070', 'effect_branch_fixture_warm070', 'effect_branch_fixture_finish070', 'effect_branch_fixture_observe070', 'effect_branch_fixture_slot070', 'effect_branch_fixture_context070', 'effect_branch_fixture_thread_entry070', 'effect_branch_fixture_native_step070', 'effect_branch_fixture_sleep_yield070', 'effect_branch_fixture_join_yield070']
    try:
        return module.builder.build(output, {source_root / 'toolscripts/effect065_cached_composed_fixture.c':
            source_root / 'toolscripts/combined_fixture071072.c'}, source_root=source_root)
    finally:
        cached.EXTRA, cached.EXPORTS = extra, exports


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--source', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    result = run(args.output.resolve(), args.source.resolve())
    print(json.dumps({'artifacts': sum(len(row['objects']) + 1 for row in result['artifacts'].values())}))
