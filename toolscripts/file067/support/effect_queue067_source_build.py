import argparse
import json
from pathlib import Path

import effect_request066_build as predecessor


ROOT = predecessor.ROOT


def build(output, overrides=None, source_root=ROOT):
    selected_root = Path(source_root).resolve()
    cached = predecessor.cached
    exports, extra = cached.EXPORTS, cached.EXTRA
    cached.EXTRA = extra + ['../wave067-queue/' + name for name in ['queue_memory', 'queue_store', 'queue_worker', 'queue_manager']]
    cached.EXPORTS = exports + ['effect_queue_manager_construct067', 'effect_queue_manager_destroy067', 'effect_queue_request_async067',
        'effect_queue_push067', 'effect_queue_store_clear067', 'effect_queue_worker_run067', 'effect_queue_worker_finalize067',
        'effect_queue_fixture_initialize067', 'effect_queue_fixture_manager_allocate067', 'effect_queue_fixture_state067',
        'effect_queue_fixture_native_step067', 'effect_queue_fixture_thread_entry067', 'effect_queue_fixture_yield067',
        'effect_queue_fixture_join_yield067', 'effect_queue_fixture_layout067', 'effect_queue_layout067',
        'effect_queue_fixture_context067',
        'effect_request_trace_files067',
        'effect_queue_manager_operations067']
    replacements = {selected_root / 'toolscripts/effect065_cached_composed_fixture.c': selected_root / 'toolscripts/effect_queue067_source_fixture.c'}
    replacements.update(overrides or {})
    try:
        return predecessor.build(output, replacements, source_root=selected_root)
    finally:
        cached.EXPORTS, cached.EXTRA = exports, extra


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    print(json.dumps({'profiles': list(build(args.output)['artifacts']), 'sourceCreditGranted': 0}))
