import hashlib
import json
from pathlib import Path
import subprocess
from elftools.elf.elffile import ELFFile
from native_state055_measure import ROOT, WORK, SOURCE, HEADER, pin


def command(arguments):
    result = subprocess.run([str(value) for value in arguments], capture_output=True)
    if result.returncode or result.stderr:
        raise ValueError(result.stderr.decode(errors='replace'))
    return dict(argv=[str(value) for value in arguments], returncode=result.returncode)


def load(path):
    with Path(path).open('rb') as handle:
        elf = ELFFile(handle)
        segments = [(row['p_vaddr'], row['p_memsz'], row['p_flags'], row.data())
                    for row in elf.iter_segments() if row['p_type'] == 'PT_LOAD']
        symbols = {row.name: row['st_value'] for row in elf.get_section_by_name('.symtab').iter_symbols() if row.name}
        functions = [(row['st_value'], row['st_value']+row['st_size']) for row in
                     elf.get_section_by_name('.symtab').iter_symbols() if row['st_info']['type'] == 'STT_FUNC' and row['st_size']]
    return segments, symbols, functions


def build(folder, source=None):
    folder = Path(folder).resolve()
    if not folder.is_relative_to(WORK):
        raise ValueError('055 output escaped owned path')
    folder.mkdir(parents=True, exist_ok=True)
    clang, linker = [ROOT/'tools/clang-21'/name for name in ['clang.exe', 'ld.lld.exe']]
    source = Path(source).resolve() if source else SOURCE
    flags = ['-std=c11', '-O2', '-ffreestanding', '-fno-builtin', '-fno-stack-protector',
             '-ffunction-sections', '-fdata-sections', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables',
             '-Wall', '-Wextra', '-Werror', '-I', SOURCE.parent]
    commands = []
    script = folder/'source.ld'
    script.write_text('SECTIONS { .state 0x8bf790 : { *(.bss.state_pair055) } .text 0xf00000 : { *(.text*) } .rodata 0xf20000 : { *(.rodata*) } .data 0xf30000 : { *(.data*) } .bss 0xf40000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) } }\n')
    for name, target, extra in [('arm', 'arm-none-eabi', ['-mcpu=mpcore', '-marm', '-mfpu=vfp', '-mfloat-abi=softfp']),
                                 ('a64', 'aarch64-linux-android21', ['-march=armv8-a', '-mno-outline-atomics'])]:
        obj, linked = folder/(name+'.o'), folder/(name+'.elf')
        commands.append(command([clang, '--target='+target, *extra, *flags, '-c', source, '-o', obj]))
        commands.append(command([linker, '-T', script, '-e', 'state_write055', obj, '-o', linked]))
    obj, dll = folder/'windows.obj', folder/'state055.dll'
    commands.append(command([clang, '--target=x86_64-pc-windows-msvc', *flags, '-c', source, '-o', obj]))
    commands.append(command([linker, '-flavor', 'link', '/dll', '/noentry', '/nodefaultlib', '/timestamp:0', '/out:'+str(dll), obj]))
    receipt = dict(schemaVersion=1, source=pin(source), header=pin(source.with_name('state055.h') if source.with_name('state055.h').is_file() else HEADER),
                   clang=pin(clang), linker=pin(linker), commands=commands,
                   artifacts=[pin(folder/name) for name in ['arm.elf', 'a64.elf', 'state055.dll']],
                   noOriginalExecutableBytesEmbedded=True, producer=pin(Path(__file__).resolve()))
    (folder/'build.json').write_text(json.dumps(receipt, indent=2)+'\n')
    return receipt


if __name__ == '__main__':
    print(json.dumps(build(WORK/'build')))
