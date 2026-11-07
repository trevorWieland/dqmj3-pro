from pathlib import Path

from digest024_build import ROOT, FLAGS, command, load, pin, save


SOURCE = ROOT / 'src/native/wave054/crc.c'
SYMBOLS = ('fn_007305b8', 'fn_00736734')


def build(folder, target, source=SOURCE):
    folder.mkdir(parents=True, exist_ok=True)
    compiler = ROOT / 'tools/clang-21/clang.exe'
    linker = ROOT / 'tools/clang-21/ld.lld.exe'
    obj = folder / 'crc.o'
    profiles = {
        'arm': ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-mfloat-abi=soft'],
        'windows': ['--target=x86_64-pc-windows-msvc'],
        'a64': ['--target=aarch64-linux-android29', '-fPIC'],
    }
    command([compiler, *profiles[target], *FLAGS, '-I', source.parent,
             '-c', source, '-o', obj], folder / 'compile.json')
    if target == 'windows':
        output = folder / 'crc054.dll'
        command([linker, '-flavor', 'link', '/dll', '/noentry', '/nodefaultlib',
                 '/machine:x64', '/timestamp:0', *['/export:' + name for name in SYMBOLS],
                 '/out:' + str(output), obj], folder / 'link.json')
    else:
        output, script = folder / 'crc054.elf', folder / 'crc054.ld'
        address = 0xf00000 if target == 'arm' else 0x110000000
        script.write_text('SECTIONS { .text ' + hex(address) + ' : { *(.text*) } '
                          '.rodata : { *(.rodata*) } .data : { *(.data*) *(.got*) } '
                          '.bss : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.ARM.exidx*) '
                          '*(.ARM.extab*) *(.eh_frame*) *(.comment*) *(.note*) '
                          '*(.llvm_addrsig) } }\n')
        machine = 'armelf' if target == 'arm' else 'aarch64elf'
        command([linker, '-m', machine, '--no-undefined', '--build-id=none',
                 '--entry=' + SYMBOLS[0], '-T', script, obj, '-o', output], folder / 'link.json')
        if target == 'a64':
            library = folder / 'libcrc054.so'
            command([linker, '-m', machine, '--shared', '--no-undefined', '--build-id=none',
                     '-z', 'max-page-size=16384', obj, '-o', library], folder / 'link-library.json')
    return output, dict(target=target, source=pin(source), object=pin(obj),
                        linkedArtifact=pin(output), flags=[*profiles[target], *FLAGS],
                        undefinedSymbols=[], originalCodeLinked=False)
