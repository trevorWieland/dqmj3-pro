import argparse
import json
from pathlib import Path

import effect065_cached_build as cached


ROOT = cached.ROOT


def build(output, overrides=None, source_root=ROOT):
    selected_root = Path(source_root).resolve()
    exports, extra = cached.EXPORTS, cached.EXTRA
    names = ['request_memory', 'request_strings', 'request_control', 'request_task', 'request_provider', 'request_factory', 'request_lower']
    cached.EXTRA = extra + ['../wave066-request/' + name for name in names]
    cached.EXPORTS = exports + ['effect_request_user_heap066', 'effect_request_fixture_bind066',
        'effect_request_device_prepare066', 'effect_request_device_layout066',
        'effect_request_device_configure066',
        'effect_request_source_files_bind066', 'effect_request_source_streams066', 'effect_request_source_stream_layout066',
        'effect_request_cache_miss_prepare066',
        'effect_request_cache_source_bind066',
        'effect_request_fixture_task_allocate066', 'effect_request_layout066',
        'effect_request_construct066', 'effect_request_ready066', 'effect_request_bytes066',
        'effect_request_length066', 'effect_request_destroy066', 'effect_request_load066',
        'effect_request_empty_path066',
        'effect_request_sync066', 'effect_request_async066',
        'effect_request_task_operations066', 'effect_request_base_operations066', 'effect_request_provider_operations066']
    try:
        replacements = {selected_root / 'toolscripts/effect065_cached_composed_fixture.c':
            selected_root / 'toolscripts/effect_request066_cache_fixture.c'}
        replacements.update(overrides or {})
        return cached.build(output, replacements, source_root=selected_root)
    finally:
        cached.EXPORTS, cached.EXTRA = exports, extra


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    print(json.dumps({'profiles': list(build(args.output)['artifacts']), 'sourceCreditGranted': 0}))
