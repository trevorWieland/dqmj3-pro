from pathlib import Path

import squirrel_state045_build as shared
from native_wave013_common import ROOT, command


SOURCES = [*shared.SOURCES, *sorted((ROOT / 'source/squirrel-wave049').glob('*.c')),
    ROOT / 'source/squirrel-wave004/runtime.c',
    ROOT / 'source/squirrel-wave016/native_create.c',
    ROOT / 'source/squirrel-wave022/call_frames.c']


def arm(folder, receipts, overrides=None):
    previous = shared.SOURCES
    shared.SOURCES = SOURCES
    try:
        return shared.arm(folder, receipts, overrides)
    finally:
        shared.SOURCES = previous


def a64(folder, receipts, overrides=None):
    previous = shared.SOURCES
    shared.SOURCES = SOURCES
    try:
        return shared.a64(folder, receipts, overrides)
    finally:
        shared.SOURCES = previous


def windows(folder, receipts, overrides=None):
    previous = shared.SOURCES
    shared.SOURCES = SOURCES
    try:
        paths = shared.objects(folder, receipts, overrides, 'windows')
    finally:
        shared.SOURCES = previous
    dll = folder / 'startup049.dll'
    exports = ['fn_00146994', 'fn_001544a0', 'fn_00158fd0', 'fn_0014c4c8',
        'fn_0015467c', 'fn_0014a6a0', 'fn_00158128', 'fn_001580cc', 'fn_001581d0',
        'fn_00177160', 'fn_00177270', 'fn_00166f0c', 'fn_00173cd0', 'fn_00173cb8',
        'sq_startup_bind040', 'sq_startup_bind_memory045', 'sq_fixture_allocate045',
        'sq_fixture_resize045', 'sq_fixture_release045', 'fn_00173d14', 'sq_vm_push022']
    import json
    bindings = json.loads((ROOT / 'evidence/lanes/squirrel-state040/initialization045-table-bindings.json').read_text())['bindings']
    exports.extend(row['sourceSymbol'] for row in bindings)
    data = ['sq_fixture_vm_operations045', 'sq_sdk_operations045', 'sq_startup_layout040',
        'sq_fixture_null045', 'sq_fixture_layout045', 'sq_table_vtable019',
        'sq_native_closure_vtable013', 'sq_string_vtable015', 'sq_fixture_frame_layout049']
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-flavor', 'link', '/dll', '/noentry',
        '/machine:x64', '/nodefaultlib', '/OPT:NOICF', '/out:' + str(dll),
        *['/export:' + name for name in exports],
        *['/export:' + name + ',data' for name in data], *paths], folder / 'link.log', receipts)
    return dll
