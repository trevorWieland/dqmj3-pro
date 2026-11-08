import json
from pathlib import Path

import native_effect065_build as common


ROOT = common.ROOT
EXPORTS = ['fn_0016771c', 'fn_0015d210', 'fn_0015d258', 'fn_0015d21c', 'fn_0014db24', 'fn_0015d0e0',
    'effect_bind_command_base065', 'fn_0044f3b8', 'fn_001830e0', 'fn_006cf79c']
EXPORTS += ['effect_bind_texture_services065', 'fn_0044e7b4', 'fn_00535da8', 'fn_00535dec',
    'effect_texture_fixture065_services', 'effect_texture_fixture065_state', 'effect_texture_fixture065_reset',
    'effect_texture_fixture_layout065']


def build(output, source=None):
    if output.exists():
        raise ValueError('Preserve resource vertex build')
    output.mkdir(parents=True)
    source = source or ROOT / 'src/native/wave065-resource/effect_vertex.c'
    commands, artifacts = [], {}
    for profile, target in [('arm', 'arm-none-eabi'), ('windows', 'x86_64-pc-windows-msvc'), ('a64', 'aarch64-linux-gnu')]:
        directory = output / profile
        directory.mkdir()
        obj = directory / 'effect_vertex.o'
        flags = ['--target=' + target, '-std=c11', '-ffreestanding', '-fno-builtin', '-fno-stack-protector',
            '-fno-unwind-tables', '-fno-asynchronous-unwind-tables', '-ffunction-sections', '-fdata-sections',
            '-O2', '-Wall', '-Wextra', '-Werror', '-I', ROOT / 'src/native/wave065-resource']
        if profile == 'arm':
            flags += ['-mcpu=mpcore', '-marm']
        elif profile == 'windows':
            flags += ['-mno-incremental-linker-compatible']
        common.command([common.TOOLS / 'clang.exe', *flags, '-c', source, '-o', obj], directory / 'compile.log', commands)
        objects = [obj]
        for extra in [ROOT / 'src/native/wave065-resource/effect_commands.c',
                ROOT / 'src/native/wave065-resource/effect_texture.c', ROOT / 'toolscripts/native_effect065_resource_texture_fixture.c'] + ([ROOT / 'toolscripts/native_effect065_resource_runtime.c'] if profile == 'windows' else []):
            target_object = directory / (extra.stem + '.o')
            common.command([common.TOOLS / 'clang.exe', *flags, '-c', extra, '-o', target_object], directory / (extra.stem + '.log'), commands)
            objects.append(target_object)
        if profile == 'windows':
            linked = directory / 'effect_vertex.dll'
            common.command([common.TOOLS / 'ld.lld.exe', '-flavor', 'link', '/DLL', '/NOENTRY', '/NODEFAULTLIB', '/Brepro',
                '/OUT:' + str(linked), *['/EXPORT:' + name for name in EXPORTS], *objects], directory / 'link.log', commands)
        else:
            linked = directory / 'effect_vertex.elf'
            script = directory / 'effect_vertex.ld'
            origin = '0xb80000' if profile == 'arm' else '0x112800000'
            script.write_text('SECTIONS { . = ' + origin + '; .text : { *(.text .text.*) } '
                '. = ALIGN(4096); .rodata : { *(.rodata .rodata.*) } '
                '. = ALIGN(4096); .data : { *(.data .data.*) } .bss : { *(.bss .bss.*) *(COMMON) } '
                '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) *(.comment) *(.note*) *(.llvm_addrsig) } }\n')
            common.command([common.TOOLS / 'ld.lld.exe', '-m', 'armelf' if profile == 'arm' else 'aarch64elf',
                '--no-undefined', '--entry=fn_0015d0e0', '-T', script, *objects, '-o', linked], directory / 'link.log', commands)
        artifacts[profile] = {'objects': [common.pin(path) for path in objects], 'linked': common.pin(linked)}
    report = {'source': common.pin(source), 'headers': [common.pin(ROOT / 'src/native/wave065-resource/effect_vertex.h'),
        common.pin(ROOT / 'src/native/wave065/effect_shader.h'), common.pin(ROOT / 'src/native/wave065/effect_services.h')],
        'additionalSources': [common.pin(ROOT / 'src/native/wave065-resource/effect_commands.c'),
            common.pin(ROOT / 'src/native/wave065-resource/effect_texture.c'),
            common.pin(ROOT / 'toolscripts/native_effect065_resource_texture_fixture.c'),
            common.pin(ROOT / 'toolscripts/native_effect065_resource_runtime.c')],
        'commands': commands, 'artifacts': artifacts, 'sourceCreditGranted': 0}
    (output / 'build.json').write_text(json.dumps(report, indent=2) + '\n')
    return artifacts


if __name__ == '__main__':
    print(json.dumps(build(ROOT / 'work/native-effect065/resource/vertex-build-v1')))
