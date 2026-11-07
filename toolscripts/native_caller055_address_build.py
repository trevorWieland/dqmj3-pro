import json
from pathlib import Path
import sys
from native_caller055_measure import ROOT, WORK, SOURCE, pin

sys.path.insert(0, str(ROOT/'toolscripts'))
from native_state055_build import command


def build(folder, source=None):
    folder = Path(folder).resolve()
    assert folder.is_relative_to(WORK)
    folder.mkdir(parents=True, exist_ok=True)
    source = Path(source).resolve() if source else SOURCE/'address055.c'
    clang = ROOT/'tools/clang-21/clang.exe'
    linker = ROOT/'tools/clang-21/ld.lld.exe'
    flags = ['-std=c11', '-O2', '-fno-inline', '-ffreestanding', '-fno-builtin', '-fno-stack-protector',
             '-ffunction-sections', '-fdata-sections', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables',
             '-Wall', '-Wextra', '-Werror', '-I', SOURCE]
    script = folder/'source.ld'
    script.write_text('SECTIONS { .first 0x8c0324 : { *(.bss.address_first055) } .offsets 0x8c33a0 : { *(.bss.address_offsets055) } .second 0x8c33a8 : { *(.bss.address_second055) } .region 0x8c33b8 : { *(.bss.address_region055) } .text 0xf10000 : { *(.text*) } .rodata 0xf30000 : { *(.rodata*) } .data 0xf40000 : { *(.data*) } .bss 0xf50000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) } }\n', encoding='utf-8')
    commands = []
    for name, target, extra in [('arm', 'arm-none-eabi', ['-mcpu=mpcore', '-marm', '-mfpu=vfp', '-mfloat-abi=softfp']),
                                 ('a64', 'aarch64-linux-android21', ['-march=armv8-a', '-mno-outline-atomics'])]:
        obj, linked = folder/(name+'.o'), folder/(name+'.elf')
        commands.append(command([clang, '--target='+target, *extra, *flags, '-c', source, '-o', obj]))
        commands.append(command([linker, '-T', script, '-e', 'address_convert_entry055', obj, '-o', linked]))
    obj, dll = folder/'windows.obj', folder/'address055.dll'
    commands.append(command([clang, '--target=x86_64-pc-windows-msvc', *flags, '-c', source, '-o', obj]))
    commands.append(command([linker, '-flavor', 'link', '/dll', '/noentry', '/nodefaultlib', '/timestamp:0', '/out:'+str(dll), obj]))
    result = dict(source=pin(source), header=pin(source.with_name('address055.h') if source.with_name('address055.h').is_file() else SOURCE/'address055.h'),
                  clang=pin(clang), linker=pin(linker), commands=commands,
                  artifacts=[pin(folder/name) for name in ['arm.elf', 'a64.elf', 'address055.dll']],
                  originalExecutableInSourceObjects=False, producer=pin(Path(__file__).resolve()))
    (folder/'build.json').write_text(json.dumps(result, indent=2)+'\n', encoding='utf-8')
    return result


if __name__ == '__main__':
    print(json.dumps(build(WORK/'address-build')))
