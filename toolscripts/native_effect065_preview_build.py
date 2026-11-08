import json
from pathlib import Path

import native_effect065_build as common


ROOT = common.ROOT
EXPORTS = ['fn_002a41c4', 'fn_005e6a68', 'fn_005e7318', 'effect_bind_cache_memory065',
    'effect_preview_fixture065_reset', 'effect_preview_fixture065_memory', 'effect_preview_fixture065_heap',
    'effect_preview_fixture065_state', 'effect_preview_fixture065_seed', 'effect_preview_layout065']
SOURCES = [ROOT / path for path in ['src/native/wave065/effect_preview.c',
    'src/native/wave012/memory_ops.c', 'src/native/wave013/outer_arena.c',
    'toolscripts/native_effect065_preview_fixture.c']]


def build(output, overrides=None):
    output = Path(output)
    output.mkdir(parents=True, exist_ok=True)
    receipts, result = [], {}
    for profile, target in [('arm', 'arm-none-eabi'), ('windows', 'x86_64-pc-windows-msvc'), ('a64', 'aarch64-linux-gnu')]:
        folder = output / profile
        folder.mkdir(exist_ok=True)
        objects = []
        flags = ['--target=' + target, '-std=c11', '-ffreestanding', '-fno-builtin', '-fno-stack-protector',
            '-fno-unwind-tables', '-fno-asynchronous-unwind-tables', '-ffunction-sections', '-fdata-sections',
            '-O2', '-Wall', '-Wextra', '-Werror', '-I', ROOT / 'src/native/wave065']
        if profile == 'arm':
            flags += ['-mcpu=mpcore', '-marm', '-mfpu=vfp', '-mfloat-abi=softfp']
        for index, source in enumerate(SOURCES):
            selected = (overrides or {}).get(source.name, source)
            obj = folder / (str(index) + '-' + source.stem + '.o')
            common.command([common.TOOLS / 'clang.exe', *flags, '-c', selected, '-o', obj],
                           folder / (source.stem + '.log'), receipts)
            objects.append(obj)
        if profile == 'windows':
            linked = folder / 'effect_preview.dll'
            common.command([common.TOOLS / 'ld.lld.exe', '-flavor', 'link', '/DLL', '/NOENTRY', '/NODEFAULTLIB',
                '/Brepro', '/OUT:' + str(linked), *['/EXPORT:' + name for name in EXPORTS], *objects], folder / 'link.log', receipts)
        else:
            linked, script = folder / 'effect_preview.elf', folder / 'effect.ld'
            origin = '0xa80000' if profile == 'arm' else '0x111800000'
            script.write_text('SECTIONS { . = ' + origin + '; .text : { *(.text .text.*) } '
                '. = ALIGN(4096); .rodata : { *(.rodata .rodata.*) } '
                '. = ALIGN(4096); .data : { *(.data .data.*) } .bss : { *(.bss .bss.*) *(COMMON) } '
                '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) *(.comment) *(.note*) *(.llvm_addrsig) } }\n')
            common.command([common.TOOLS / 'ld.lld.exe', '-m', 'armelf' if profile == 'arm' else 'aarch64elf',
                '--no-undefined', '--entry=fn_002a41c4', '-T', script, *objects, '-o', linked], folder / 'link.log', receipts)
        result[profile] = {'objects': [common.pin(obj) for obj in objects], 'linked': common.pin(linked)}
    report = {'sources': [common.pin((overrides or {}).get(source.name, source)) for source in SOURCES],
        'headers': [common.pin(ROOT / 'src/native/wave065/effect_preview.h')],
        'commands': receipts, 'artifacts': result, 'sourceCreditGranted': 0,
        'floatABI': 'Explicit aapcs-vfp attribute on ARM preview API; native platform float/HFA ABI on Windows/A64'}
    (output / 'build.json').write_text(json.dumps(report, indent=2) + '\n')
    return result


if __name__ == '__main__':
    print(json.dumps(build(ROOT / 'work/native-effect065/preview-build-v1')))
