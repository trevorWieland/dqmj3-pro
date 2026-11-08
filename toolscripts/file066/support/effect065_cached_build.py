import argparse
import json
from pathlib import Path

import effect065_owner_build as owner


common = owner.common
ROOT = common.ROOT
EXTRA = ['../wave065-owner/effect_registration', '../wave065/effect_preview',
    '../wave012/memory_ops', '../wave013/outer_arena', '../wave032/archive_owner',
    '../wave032/archive_lookup', '../wave032/archive_members',
    '../wave065-cached/effect_cached_services', '../wave065-cached/effect_cached_format',
    '../wave065-cached/effect_cached_request', '../wave065-cached/effect_cached_fetch']
EXPORTS = owner.graph.EXPORTS + ['effect_owner_fixture065', 'effect_owner_fixture_reset065',
    'effect_owner_fixture_registration065', 'effect_owner_fixture_callbacks065', 'effect_owner_fixture_layout065',
    'effect_cached_fixture065', 'effect_cached_fixture_reset065', 'effect_cached_fixture_heap065',
    'effect_cached_fixture_layout065', 'effect_cached_composed_reset065', 'effect_cached_composed_call065',
    'fn_002a47cc', 'fn_002a4674', 'fn_002a4a48', 'fn_002a4b8c', 'fn_005f0974']


def build(output, overrides=None, source_root=ROOT):
    output = Path(output).resolve()
    if output.exists():
        raise ValueError('Preserve cached composition build')
    output.mkdir(parents=True)
    selected_root = Path(source_root).resolve()
    resource_root = selected_root / 'src/native/wave065-resource'
    sources = [(resource_root / (name + '.c')).resolve() for name in owner.graph.NAMES + EXTRA]
    sources += [selected_root / 'src/native/wave065/effect_shader.c', selected_root / 'toolscripts/effect065_cached_composed_fixture.c']
    sources = [(overrides or {}).get(path, path) for path in sources]
    commands, artifacts = [], {}
    for profile, target in [('arm', 'arm-none-eabi'), ('windows', 'x86_64-pc-windows-msvc'), ('a64', 'aarch64-linux-gnu')]:
        directory = output / profile
        directory.mkdir()
        flags = ['--target=' + target, '-std=c11', '-ffreestanding', '-fno-builtin', '-fno-stack-protector',
            '-fno-unwind-tables', '-fno-asynchronous-unwind-tables', '-ffunction-sections', '-fdata-sections',
            '-O2', '-Wall', '-Wextra', '-Werror', '-I', resource_root]
        flags += ['-mcpu=mpcore', '-marm', '-mfpu=vfp', '-mfloat-abi=softfp'] if profile == 'arm' else []
        flags += ['-mno-incremental-linker-compatible'] if profile == 'windows' else []
        selected = sources + ([selected_root / 'toolscripts/native_effect065_resource_runtime.c'] if profile == 'windows' else [])
        objects = []
        for source in selected:
            obj = directory / (source.stem + '.o')
            common.command([common.TOOLS / 'clang.exe', *flags, '-c', source, '-o', obj], directory / (source.stem + '.log'), commands)
            objects.append(obj)
        if profile == 'windows':
            linked = directory / 'effect_resource.dll'
            mapping = directory / 'effect_resource.map'
            fixture_exports = ['effect_graph_fixture065', 'effect_graph_fixture_layout065',
                'effect_graph_fixture_original_allocator065', 'effect_graph_fixture_source_allocator065',
                'effect_graph_fixture_reset065', 'effect_graph_fixture_bind065', 'effect_graph_fixture_image065']
            common.command([common.TOOLS / 'ld.lld.exe', '-flavor', 'link', '/DLL', '/NOENTRY', '/NODEFAULTLIB', '/Brepro',
                '/OUT:' + str(linked), '/MAP:' + str(mapping), *['/EXPORT:' + name for name in EXPORTS + fixture_exports],
                *objects], directory / 'link.log', commands)
        else:
            linked, script = directory / 'effect_resource.elf', directory / 'effect_resource.ld'
            origin = '0xb80000' if profile == 'arm' else '0x112800000'
            script.write_text('SECTIONS { . = ' + origin + '; .text : { *(.text .text.*) } '
                '. = ALIGN(4096); .rodata : { *(.rodata .rodata.*) } '
                '. = ALIGN(4096); .data : { *(.data .data.*) } .bss : { *(.bss .bss.*) *(COMMON) } '
                '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) *(.comment) *(.note*) *(.llvm_addrsig) } }\n')
            common.command([common.TOOLS / 'ld.lld.exe', '-m', 'armelf' if profile == 'arm' else 'aarch64elf',
                '--no-undefined', '--entry=fn_002a47cc', '-T', script, *objects, '-o', linked], directory / 'link.log', commands)
        artifacts[profile] = {'objects': [common.pin(path) for path in objects], 'linked': common.pin(linked)}
    report = {'sources': [common.pin(path.resolve()) for path in sources], 'commands': commands,
        'artifacts': artifacts, 'sourceCreditGranted': 0}
    (output / 'build.json').write_text(json.dumps(report, indent=2) + '\n')
    return report


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    print(json.dumps({'profiles': list(build(args.output)['artifacts']), 'sourceCreditGranted': 0}))
