import argparse
import hashlib
import io
import json
from pathlib import Path
import subprocess
import sys
from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parents[1]


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def build(output):
    output = (ROOT / output).resolve()
    if not output.is_relative_to((ROOT / 'work').resolve()):
        raise ValueError('Android component build must stay under work/')
    output.mkdir(parents=True, exist_ok=False)
    source = ROOT / 'src/native/wave055/controller-v5'
    dependency = ROOT / 'src/native/wave055'
    sources = sorted(source.glob('*.c')) + [dependency / name for name in
        ['state055.c', 'controller-deps-v1/helpers055.c', 'controller-deps-v1/resource055.c']]
    assert len(sources) == 19
    compiler, linker = ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe'
    flags = ['--target=aarch64-linux-android29', '-std=c11', '-O2', '-ffreestanding', '-fno-builtin',
        '-fno-stack-protector', '-ffp-contract=off', '-fPIC', '-ffunction-sections', '-fdata-sections',
        '-Wall', '-Wextra', '-Werror', '-I', str(source), '-I', str(dependency / 'controller-deps-v1'), '-I', str(dependency)]
    inputs = [pin(path) for path in sources]
    objects, commands = [], []
    for index, path in enumerate(sources):
        obj = output / f'{index:02d}-{path.stem}.o'
        argv = [str(compiler), *flags, '-c', str(path), '-o', str(obj)]
        result = subprocess.run(argv, capture_output=True)
        (output / f'{index:02d}-compile.log').write_bytes(result.stdout + result.stderr)
        if result.returncode:
            raise ValueError('Android component compilation failed')
        objects.append(obj)
        commands.append(argv)
    library = output / 'libcontroller055.so'
    argv = [str(linker), '-flavor', 'gnu', '-shared', '-Bsymbolic', '--no-undefined', '--hash-style=sysv',
        '-soname', library.name, '-z', 'max-page-size=16384', '-z', 'common-page-size=16384',
        *map(str, objects), '-o', str(library)]
    result = subprocess.run(argv, capture_output=True)
    (output / 'link.log').write_bytes(result.stdout + result.stderr)
    if result.returncode:
        raise ValueError('Android component link failed')
    commands.append(argv)
    elf = ELFFile(io.BytesIO(library.read_bytes()))
    assert elf.elfclass == 64 and elf['e_machine'] == 'EM_AARCH64'
    segments = [dict(address=p['p_vaddr'], fileBytes=p['p_filesz'], memoryBytes=p['p_memsz'],
                     alignment=p['p_align'], flags=p['p_flags']) for p in elf.iter_segments() if p['p_type'] == 'PT_LOAD']
    assert all(p['alignment'] >= 16384 and p['flags'] != 7 for p in segments)
    assert not any(t.entry.d_tag in ['DT_NEEDED', 'DT_TEXTREL'] for t in elf.get_section_by_name('.dynamic').iter_tags())
    assert not any(s.name and s['st_shndx'] == 'SHN_UNDEF' for s in elf.get_section_by_name('.dynsym').iter_symbols())
    assert inputs == [pin(path) for path in sources]
    report = dict(status='source-only-android-controller-component-linked', compiler=pin(compiler), linker=pin(linker),
        sources=inputs, sourceUnits=19, commands=commands, library=pin(library), loadSegments=segments,
        originalGameImageOrAssetPackaged=False, wholeGameBuild=False, deviceExecutionClaimed=False,
        producer=pin(Path(__file__)))
    (output / 'build.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(sourceUnits=19, library=pin(library), wholeGameBuild=False)))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', default='work/controller055-android-component')
    build(parser.parse_args().output)
