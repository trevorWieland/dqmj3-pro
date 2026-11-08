import json
from pathlib import Path

import native_effect065_build as common


ROOT = common.ROOT
SOURCE_ROOT = ROOT / 'src/native/wave065-resource'
NAMES = ['effect_resource', 'effect_resource_memory', 'effect_resource_shaders', 'effect_resource_primitives',
    'effect_resource_sets', 'effect_resource_release', 'effect_vertex', 'effect_commands', 'effect_texture', 'effect_device', 'effect_port_runtime']
EXPORTS = ['effect_resource_allocator_init065', 'effect_bind_shader_pool065', 'effect_bind_texture_services065',
    'effect_bind_command_base065', 'effect_bind_device_services065', 'fn_0053fe5c', 'fn_005411a4', 'fn_0053ea1c', 'fn_00160c68']


def build(output, fixture=None, overrides=None):
    output = Path(output).resolve()
    if output.exists():
        raise ValueError('Preserve complete resource graph build')
    output.mkdir(parents=True)
    sources = [SOURCE_ROOT / (name + '.c') for name in NAMES] + [ROOT / 'src/native/wave065/effect_shader.c']
    if overrides:
        sources = [overrides.get(path, path) for path in sources]
    if fixture:
        sources.append(Path(fixture))
    commands, artifacts = [], {}
    for profile, target in [('arm', 'arm-none-eabi'), ('windows', 'x86_64-pc-windows-msvc'), ('a64', 'aarch64-linux-gnu')]:
        directory = output / profile
        directory.mkdir()
        flags = ['--target=' + target, '-std=c11', '-ffreestanding', '-fno-builtin', '-fno-stack-protector',
            '-fno-unwind-tables', '-fno-asynchronous-unwind-tables', '-ffunction-sections', '-fdata-sections',
            '-O2', '-Wall', '-Wextra', '-Werror', '-I', SOURCE_ROOT]
        if profile == 'arm':
            flags += ['-mcpu=mpcore', '-marm']
        elif profile == 'windows':
            flags += ['-mno-incremental-linker-compatible']
        selected = sources + ([ROOT / 'toolscripts/native_effect065_resource_runtime.c'] if profile == 'windows' else [])
        objects = []
        for source in selected:
            obj = directory / (source.stem + '.o')
            common.command([common.TOOLS / 'clang.exe', *flags, '-c', source, '-o', obj], directory / (source.stem + '.log'), commands)
            objects.append(obj)
        if profile == 'windows':
            linked = directory / 'effect_resource.dll'
            common.command([common.TOOLS / 'ld.lld.exe', '-flavor', 'link', '/DLL', '/NOENTRY', '/NODEFAULTLIB', '/Brepro',
                '/OUT:' + str(linked), *['/EXPORT:' + name for name in EXPORTS],
                *(['/EXPORT:effect_graph_fixture065', '/EXPORT:effect_graph_fixture_layout065',
                    '/EXPORT:effect_graph_fixture_original_allocator065', '/EXPORT:effect_graph_fixture_source_allocator065',
                    '/EXPORT:effect_graph_fixture_reset065', '/EXPORT:effect_graph_fixture_bind065', '/EXPORT:effect_graph_fixture_image065'] if fixture else []),
                *objects], directory / 'link.log', commands)
        else:
            linked = directory / 'effect_resource.elf'
            script = directory / 'effect_resource.ld'
            origin = '0xb80000' if profile == 'arm' else '0x112800000'
            script.write_text('SECTIONS { . = ' + origin + '; .text : { *(.text .text.*) } '
                '. = ALIGN(4096); .rodata : { *(.rodata .rodata.*) } '
                '. = ALIGN(4096); .data : { *(.data .data.*) } .bss : { *(.bss .bss.*) *(COMMON) } '
                '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) *(.comment) *(.note*) *(.llvm_addrsig) } }\n')
            common.command([common.TOOLS / 'ld.lld.exe', '-m', 'armelf' if profile == 'arm' else 'aarch64elf',
                '--no-undefined', '--entry=fn_0053fe5c', '-T', script, *objects, '-o', linked], directory / 'link.log', commands)
        artifacts[profile] = {'objects': [common.pin(path) for path in objects], 'linked': common.pin(linked)}
    headers = sorted(SOURCE_ROOT.glob('*.h')) + [ROOT / 'src/native/wave065/effect_shader.h', ROOT / 'src/native/wave065/effect_services.h']
    report = {'sources': [common.pin(path) for path in sources], 'headers': [common.pin(path) for path in headers],
        'windowsRuntime': common.pin(ROOT / 'toolscripts/native_effect065_resource_runtime.c'),
        'commands': commands, 'artifacts': artifacts, 'sourceCreditGranted': 0}
    (output / 'build.json').write_text(json.dumps(report, indent=2) + '\n')
    return artifacts


if __name__ == '__main__':
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument('output', type=Path)
    args = parser.parse_args()
    print(json.dumps(build(args.output)))
