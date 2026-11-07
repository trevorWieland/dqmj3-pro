import json
import subprocess
import sys
from pathlib import Path

ROOT = next(parent for parent in Path(__file__).resolve().parents
            if (parent/'AGENTS.md').is_file() and (parent/'config/build-units.json').is_file())
SOURCE_ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT/'work/native-stream056/public-stage-v1'
SOURCE = SOURCE_ROOT/'src/native/wave056/stream056.c'
sys.path.append(str(ROOT / 'toolscripts'))
from digest024_build import FLAGS, load, pin

SYMBOLS = ('fn_00733e28', 'fn_00739d08')


def command(arguments, log):
    result = subprocess.run([str(value) for value in arguments], cwd=ROOT,
                            capture_output=True, text=True, timeout=60)
    log.write_text(json.dumps(dict(argv=[str(value) for value in arguments],
                                   returncode=result.returncode, stdout=result.stdout,
                                   stderr=result.stderr), indent=2)+'\n')
    if result.returncode:
        raise RuntimeError(str(log))


def build(folder, target, source=None):
    folder.mkdir(parents=True, exist_ok=True)
    source = source or SOURCE
    compiler, linker = ROOT/'tools/clang-21/clang.exe', ROOT/'tools/clang-21/ld.lld.exe'
    profiles = dict(arm=['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-mfloat-abi=soft'],
                    windows=['--target=x86_64-pc-windows-msvc','-mno-incremental-linker-compatible'],
                    a64=['--target=aarch64-linux-android29', '-fPIC'])
    probe = SOURCE_ROOT/'toolscripts/native_stream056_layout.c'
    objects = []
    for index, translation in enumerate((source, probe)):
        obj = folder / ('stream' if index == 0 else 'layout')
        obj = obj.with_suffix('.o')
        command([compiler, *profiles[target], *FLAGS, '-I', source.parent,
                 '-c', translation, '-o', obj], folder/('compile'+str(index)+'.json'))
        objects.append(obj)
    if target == 'windows':
        output = folder / 'stream056.dll'
        command([linker, '-flavor', 'link', '/dll', '/noentry', '/nodefaultlib',
                 '/machine:x64', '/timestamp:0', *['/export:'+name for name in SYMBOLS],
                 '/export:stream056_layout,DATA', '/out:'+str(output), *objects], folder/'link.json')
    else:
        output, script = folder/'stream056.elf', folder/'stream056.ld'
        address = 0xf00000 if target == 'arm' else 0x110000000
        script.write_text('SECTIONS { .text '+hex(address)+' : { *(.text*) } '
                          '.rodata : { *(.rodata*) } .data : { *(.data*) *(.got*) } '
                          '.bss : { *(.bss*) *(COMMON) } /DISCARD/ : { *(.ARM.exidx*) '
                          '*(.ARM.extab*) *(.eh_frame*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n')
        machine = 'armelf' if target == 'arm' else 'aarch64elf'
        command([linker, '-m', machine, '--no-undefined', '--build-id=none',
                 '--entry='+SYMBOLS[0], '-T', script, *objects, '-o', output], folder/'link.json')
        if target == 'a64':
            command([linker, '-m', machine, '--shared', '--no-undefined', '--build-id=none',
                     '-z', 'max-page-size=16384', *objects, '-o', folder/'libstream056.so'], folder/'link-library.json')
    return output, dict(target=target, source=pin(source), header=pin(source.parent/'stream056.h'),
                        objects=[pin(path) for path in objects], artifact=pin(output),
                        compiler=pin(compiler), linker=pin(linker), flags=[*profiles[target], *FLAGS],
                        undefinedSymbols=[], originalCodeLinked=False)


if __name__ == '__main__':
    results = [build(WORK/'build'/target, target)[1] for target in ('arm','windows','a64')]
    (WORK/'build-profiles.json').write_text(json.dumps(results, indent=2)+'\n')
