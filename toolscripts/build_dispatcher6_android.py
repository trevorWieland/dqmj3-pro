import argparse
import io
import json
from pathlib import Path
import subprocess
from elftools.elf.elffile import ELFFile
import native_stream061_stage as common

ROOT = Path(__file__).resolve().parents[1]


def build(output):
    output = (ROOT / output).resolve()
    if not output.is_relative_to((ROOT / 'work').resolve()):
        raise ValueError('Android component output must stay under work/')
    output.mkdir(parents=True, exist_ok=False)
    manifest = common.read(ROOT / 'evidence/lanes/native-state055/dispatcher-v6-public/stage-inputs.json')
    inputs = [row['publicInput'] for row in manifest['files']
        if row['publicInput']['path'].startswith('src/native/')
        and Path(row['publicInput']['path']).suffix in ['.c', '.h']]
    sources = [ROOT / row['path'] for row in inputs if row['path'].endswith('.c')]
    if len(inputs) != 20 or len(sources) != 12:
        raise ValueError('Complete dispatcher production source/header roster differs')
    for row in inputs:
        if common.pin(ROOT / row['path']) != row:
            raise ValueError('Frozen dispatcher Android build input differs')
    by_path = {row['path']: row for row in inputs}
    for name in ['apply_bindings055.h', 'apply_types055.h', 'resource_view055.h']:
        snapshot = by_path['src/native/wave055/controller-v5/source/' + name]
        row = common.pin(ROOT / 'src/native/wave055/controller-v5' / name)
        if (row['sha256'], row['bytes']) != (snapshot['sha256'], snapshot['bytes']):
            raise ValueError('Existing quoted controller header differs from its frozen snapshot')
        inputs.append(row)
    compiler, linker = ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe'
    flags = ['--target=aarch64-linux-android29', '-std=c11', '-O2', '-ffreestanding', '-fno-builtin',
        '-fno-stack-protector', '-ffp-contract=off', '-fPIC', '-ffunction-sections', '-fdata-sections',
        '-Wall', '-Wextra', '-Werror', '-I', str(ROOT / 'src/native/wave055'),
        '-I', str(ROOT / 'src/native/wave055/controller-deps-v1')]
    objects, commands = [], []
    for index, source in enumerate(sources):
        obj = output / f'{index:02d}-{source.stem}.o'
        argv = [str(compiler), *flags, '-c', str(source), '-o', str(obj)]
        result = subprocess.run(argv, capture_output=True)
        (output / f'{index:02d}-compile.log').write_bytes(result.stdout + result.stderr)
        if result.returncode:
            raise ValueError('Android dispatcher source compilation failed')
        objects.append(obj)
        commands.append(argv)
    library = output / 'libdispatcher6.so'
    argv = [str(linker), '-flavor', 'gnu', '-shared', '-Bsymbolic', '--no-undefined', '--hash-style=sysv',
        '-soname', library.name, '-z', 'max-page-size=16384', '-z', 'common-page-size=16384',
        *map(str, objects), '-o', str(library)]
    result = subprocess.run(argv, capture_output=True)
    (output / 'link.log').write_bytes(result.stdout + result.stderr)
    if result.returncode:
        raise ValueError('Android dispatcher link failed')
    commands.append(argv)
    elf = ELFFile(io.BytesIO(library.read_bytes()))
    segments = [dict(address=p['p_vaddr'], fileBytes=p['p_filesz'], memoryBytes=p['p_memsz'],
        alignment=p['p_align'], flags=p['p_flags']) for p in elf.iter_segments() if p['p_type'] == 'PT_LOAD']
    if elf.elfclass != 64 or elf['e_machine'] != 'EM_AARCH64' or not segments or any(
            p['alignment'] < 16384 or p['flags'] == 7 for p in segments):
        raise ValueError('Android dispatcher architecture/segment contract differs')
    if (any(t.entry.d_tag in ['DT_NEEDED', 'DT_TEXTREL'] for t in elf.get_section_by_name('.dynamic').iter_tags())
            or any(s.name and s['st_shndx'] == 'SHN_UNDEF'
                for s in elf.get_section_by_name('.dynsym').iter_symbols())):
        raise ValueError('Android dispatcher has an external dependency, text relocation or undefined symbol')
    for row in inputs:
        if common.pin(ROOT / row['path']) != row:
            raise ValueError('Dispatcher source changed during Android build')
    report = dict(status='source-only-android-dispatcher-component-linked', sourceUnits=12,
        inputs=inputs, compiler=common.pin(compiler), linker=common.pin(linker), commands=commands,
        library=common.pin(library), loadSegments=segments, originalGameImageOrAssetPackaged=False,
        deviceExecutionClaimed=False, wholeGameBuild=False, producer=common.pin(Path(__file__)))
    common.write(output / 'build.json', report)
    print(json.dumps(dict(sourceUnits=12, library=common.pin(library), wholeGameBuild=False)))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', default='work/dispatcher6-android-component')
    build(parser.parse_args().output)
