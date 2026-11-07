import json
from pathlib import Path
import sys
from native_caller055_measure import ROOT, WORK, SOURCE, pin

sys.path.insert(0, str(ROOT/'toolscripts'))
from native_state055_build import command


def build(folder, selector=None,address=None,writer=None):
    folder = Path(folder).resolve()
    assert folder.is_relative_to(WORK)
    folder.mkdir(parents=True, exist_ok=True)
    clang, linker = [ROOT/'tools/clang-21'/name for name in ['clang.exe', 'ld.lld.exe']]
    selector = Path(selector).resolve() if selector else SOURCE/'selector055.c'
    address = Path(address).resolve() if address else SOURCE/'address055.c'
    writer = Path(writer).resolve() if writer else ROOT/'src/native/wave055/state055.c'
    sources = [selector,address,writer]
    headers = [source.with_suffix('.h') if source.with_suffix('.h').is_file() else SOURCE/source.with_suffix('.h').name for source in sources]
    flags = ['-std=c11', '-O2', '-fno-inline', '-ffp-contract=off', '-ffreestanding', '-fno-builtin', '-fno-stack-protector',
             '-ffunction-sections', '-fdata-sections', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables',
             '-Wall', '-Wextra', '-Werror', '-I', SOURCE, '-I', ROOT/'src/native/wave055']
    script = folder/'source.ld'
    script.write_text('SECTIONS { .pair 0x8bf790 : { *(.bss.state_pair055) } .context 0x8bfab0 : { *(.bss.state_context_select055) } .first 0x8c0324 : { *(.bss.address_first055) } .offsets 0x8c33a0 : { *(.bss.address_offsets055) } .second 0x8c33a8 : { *(.bss.address_second055) } .region 0x8c33b8 : { *(.bss.address_region055) } .text 0xf10000 : { *(.text*) } .rodata 0xf30000 : { *(.rodata*) } .data 0xf40000 : { *(.data*) } .bss 0xf50000 : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.comment) *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) } }\n', encoding='utf-8')
    commands = []
    for name, target, extra in [('arm', 'arm-none-eabi', ['-mcpu=mpcore', '-marm', '-mfpu=vfp', '-mfloat-abi=softfp']),
                                 ('a64', 'aarch64-linux-android21', ['-march=armv8-a', '-mno-outline-atomics']),
                                 ('windows', 'x86_64-pc-windows-msvc', [])]:
        objects = []
        for index, source in enumerate(sources):
            obj = folder/(name+'-'+str(index)+'.o')
            commands.append(command([clang, '--target='+target, *extra, *flags, '-c', source, '-o', obj]))
            objects.append(obj)
        if name == 'windows':
            marker = folder/'windows-marker.c'
            marker.write_text('int _fltused;\n', encoding='ascii')
            obj = folder/'windows-marker.o'
            commands.append(command([clang, '--target='+target, *flags, '-c', marker, '-o', obj]))
            objects.append(obj)
            commands.append(command([linker, '-flavor', 'link', '/dll', '/noentry', '/nodefaultlib', '/timestamp:0', '/out:'+str(folder/'selector055.dll'), *objects]))
        else:
            commands.append(command([linker, '-T', script, '-e', 'state_select055', *objects, '-o', folder/(name+'.elf')]))
    result = dict(sources=[pin(path) for path in sources], headers=[pin(path) for path in headers],
                  clang=pin(clang), linker=pin(linker), commands=commands,
                  windowsOnlyMarker=pin(folder/'windows-marker.c'),
                  artifacts=[pin(folder/name) for name in ['arm.elf', 'a64.elf', 'selector055.dll']],
                  originalExecutableInSourceObjects=False, producer=pin(Path(__file__).resolve()))
    (folder/'build.json').write_text(json.dumps(result, indent=2)+'\n', encoding='utf-8')
    return result


if __name__ == '__main__':
    print(json.dumps(build(WORK/'selector-build')))
