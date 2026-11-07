import hashlib
import json
import subprocess
from pathlib import Path

from native_sampled_key053_measure import ROOT, ENTRIES, pin


SOURCES = sorted((ROOT / 'src/native/wave053').glob('*.c'))
COMMON = ['-std=c11', '-O3', '-ffp-contract=off', '-ffreestanding', '-fno-builtin',
          '-ffunction-sections', '-fdata-sections', '-fno-unwind-tables',
          '-fno-asynchronous-unwind-tables', '-Wall', '-Wextra', '-Werror']
PROFILES = {
    'arm': ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-mfpu=vfp', '-mfloat-abi=softfp'],
    'windows': ['--target=x86_64-pc-windows-msvc'],
    'a64': ['--target=aarch64-none-elf'],
    'android': ['--target=aarch64-linux-android35', '-fPIC']
}


def command(argv, log, receipts):
    result = subprocess.run([str(item) for item in argv], cwd=ROOT, capture_output=True, timeout=120)
    log.write_bytes(result.stdout + result.stderr)
    receipts.append({'argv': [str(item) for item in argv], 'exitCode': result.returncode,
                     'log': pin(log)})
    if result.returncode:
        raise ValueError('Sampled-key compilation failed: ' + str(log))


def build(folder, profile, receipts, overrides=None):
    folder.mkdir(parents=True, exist_ok=True)
    objects = []
    for source in SOURCES:
        selected = (overrides or {}).get(source.name, source)
        target = folder / (source.stem + ('.obj' if profile == 'windows' else '.o'))
        command([ROOT / 'tools/clang-21/clang.exe', *PROFILES[profile], *COMMON,
                 '-I', source.parent, '-c', selected, '-o', target],
                folder / (source.stem + '.log'), receipts)
        objects.append(target)
    linker = ROOT / 'tools/clang-21/ld.lld.exe'
    if profile == 'windows':
        output = folder / 'sampled_key053.dll'
        exports = ['fn_' + format(entry, '08x') for entry in ENTRIES]
        exports += ['sampled_key_floor_bits053']
        command([linker, '-flavor', 'link', '/dll', '/noentry', '/nodefaultlib', '/machine:x64',
                 '/OPT:NOICF', '/out:' + str(output),
                 *['/export:' + item for item in exports], '/export:sampled_key_layout053,data',
                 *objects], folder / 'link.log', receipts)
    elif profile == 'android':
        output = folder / 'sampled_key053.so'
        command([linker, '-m', 'aarch64elf', '-shared', '--no-undefined', '-z', 'max-page-size=16384',
                 *objects, '-o', output], folder / 'link.log', receipts)
    else:
        output = folder / 'sampled_key053.elf'
        script = folder / 'sampled_key053.ld'
        start = 0x900000 if profile == 'arm' else 0x100900000
        script.write_text('SECTIONS { . = ' + hex(start) + '; '
                          '.text : { *(.text .text.*) } . = ALIGN(4096); '
                          '.rodata : { *(.rodata .rodata.*) } . = ALIGN(4096); '
                          '.data : { *(.data .data.*) } .bss : { *(.bss .bss.*) *(COMMON) } '
                          '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment) '
                          '*(.note*) *(.llvm_addrsig) } }\n')
        command([linker, '-m', 'armelf' if profile == 'arm' else 'aarch64elf', '--no-undefined',
                 '--entry=fn_0075c360', '-T', script, *objects, '-o', output],
                folder / 'link.log', receipts)
    return output


if __name__ == '__main__':
    receipts = []
    files = {profile: pin(build(ROOT / 'work/sampled-key053/build' / profile, profile, receipts))
             for profile in PROFILES}
    print(json.dumps({'outputs': files, 'compilerReceipts': len(receipts)}))
