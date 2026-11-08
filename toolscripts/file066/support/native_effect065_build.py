import hashlib
import io
import json
import subprocess
from pathlib import Path

from elftools.elf.elffile import ELFFile


ROOT = Path(__file__).resolve().parents[1]
TOOLS = ROOT / 'tools/clang-21'
EXPORTS = ['effect_bind_shader_pool065', 'fn_0053a688', 'fn_0053e2c4', 'fn_0017db84']
FIXTURE_EXPORTS = ['effect_fixture_allocator065_reset', 'effect_fixture_allocator065_releases',
                   'effect_fixture_allocator065_invalid', 'effect_fixture_allocator065_last']


def pin(path):
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': path.stat().st_size,
            'sha256': hashlib.sha256(path.read_bytes()).hexdigest()}


def command(argv, log, receipts):
    run = subprocess.run(list(map(str, argv)), cwd=ROOT, capture_output=True)
    log.write_bytes(run.stdout + run.stderr)
    receipts.append({'argv': list(map(str, argv)), 'exitCode': run.returncode, 'log': pin(log)})
    if run.returncode:
        raise ValueError('Effect source compilation failed: ' + str(log))


def read_elf(path):
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    table = elf.get_section_by_name('.symtab')
    allocated = {index: section for index, section in enumerate(elf.iter_sections())
                 if section['sh_flags'] & 2 and section['sh_size']}
    mapping = sorted((symbol['st_value'], symbol.name.split('.')[0], symbol['st_shndx'])
        for symbol in table.iter_symbols() if symbol.name.startswith('$') and symbol['st_shndx'] in allocated)
    functions, owned_code = {}, []
    for symbol in table.iter_symbols():
        if symbol['st_info']['type'] != 'STT_FUNC' or not symbol['st_size']:
            continue
        section_index = symbol['st_shndx']
        section = allocated[section_index]
        start, end = symbol['st_value'], symbol['st_value'] + symbol['st_size']
        points = [(address, kind) for address, kind, index in mapping
                  if index == section_index and start <= address < end]
        if not points or points[0][0] != start:
            raise ValueError('Effect source function lacks exact initial mapping symbol')
        spans = []
        for index, (address, kind) in enumerate(points):
            high = points[index + 1][0] if index + 1 < len(points) else end
            if kind not in ['$a', '$x', '$d']:
                raise ValueError('Unsupported effect source instruction mode')
            spans.append({'start': address, 'endExclusive': high, 'kind': kind})
            if kind != '$d':
                owned_code.append((address, high))
        raw = section.data()[start - section['sh_addr']:end - section['sh_addr']]
        row = {'address': start, 'bytes': len(raw), 'sha256': hashlib.sha256(raw).hexdigest(), 'mappingSpans': spans}
        if symbol.name in functions:
            raise ValueError('Duplicate public effect source symbol')
        functions[symbol.name] = row
    objects = {symbol.name: {'address': symbol['st_value'], 'bytes': symbol['st_size']}
        for symbol in table.iter_symbols() if symbol['st_info']['type'] == 'STT_OBJECT'
        and symbol['st_size'] and symbol['st_shndx'] in allocated}
    segments = [{'address': segment['p_vaddr'], 'bytes': segment['p_memsz'],
                 'fileBytes': segment.data(), 'flags': segment['p_flags']}
                for segment in elf.iter_segments() if segment['p_type'] == 'PT_LOAD' and segment['p_memsz']]
    return {'functions': functions, 'ownedCodeRanges': owned_code, 'segments': segments, 'objects': objects}


def build(output, override=None, fixture=False):
    output = Path(output)
    output.mkdir(parents=True, exist_ok=True)
    source = Path(override) if override else ROOT / 'src/native/wave065/effect_shader.c'
    receipts, results = [], {}
    for profile, target in [('arm', 'arm-none-eabi'), ('windows', 'x86_64-pc-windows-msvc'), ('a64', 'aarch64-linux-gnu')]:
        folder = output / profile
        folder.mkdir(exist_ok=True)
        obj = folder / 'effect_shader.o'
        flags = ['--target=' + target, '-std=c11', '-ffreestanding', '-fno-builtin', '-fno-stack-protector',
                 '-ffunction-sections', '-fdata-sections', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables',
                 '-O2', '-Wall', '-Wextra', '-Werror', '-I', ROOT / 'src/native/wave065']
        if profile == 'arm':
            flags += ['-mcpu=mpcore', '-marm']
        command([TOOLS / 'clang.exe', *flags, '-c', source, '-o', obj], folder / 'compile.log', receipts)
        objects = [obj]
        if fixture:
            fixture_obj = folder / 'shader_fixture.o'
            command([TOOLS / 'clang.exe', *flags, '-c', ROOT / 'toolscripts/native_effect065_shader_fixture.c',
                     '-o', fixture_obj], folder / 'fixture-compile.log', receipts)
            objects.append(fixture_obj)
        if profile == 'windows':
            linked = folder / 'effect_shader.dll'
            command([TOOLS / 'ld.lld.exe', '-flavor', 'link', '/DLL', '/NOENTRY', '/NODEFAULTLIB', '/Brepro',
                     '/OUT:' + str(linked), *['/EXPORT:' + name for name in EXPORTS + (FIXTURE_EXPORTS if fixture else [])],
                     *objects], folder / 'link.log', receipts)
        else:
            linked = folder / 'effect_shader.elf'
            script = folder / 'effect.ld'
            origin = '0x980000' if profile == 'arm' else '0x110800000'
            script.write_text('SECTIONS { . = ' + origin + '; .text : { *(.text .text.*) } '
                '. = ALIGN(4096); .rodata : { *(.rodata .rodata.*) } '
                '. = ALIGN(4096); .data : { *(.data .data.*) } .bss : { *(.bss .bss.*) *(COMMON) } '
                '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.eh_frame*) *(.comment) *(.note*) *(.llvm_addrsig) } }\n')
            machine = 'armelf' if profile == 'arm' else 'aarch64elf'
            command([TOOLS / 'ld.lld.exe', '-m', machine, '--no-undefined', '--entry=fn_0053e2c4',
                     '-T', script, *objects, '-o', linked], folder / 'link.log', receipts)
        results[profile] = {'object': pin(obj), 'linked': pin(linked)}
    (output / 'build.json').write_text(json.dumps({'sources': [pin(source),
        *[pin(ROOT / 'src/native/wave065' / name) for name in ['effect_shader.h', 'effect_services.h']],
        *([pin(ROOT / 'toolscripts/native_effect065_shader_fixture.c')] if fixture else [])],
        'tools': [pin(TOOLS / name) for name in ['clang.exe', 'ld.lld.exe']],
        'artifacts': results, 'commands': receipts, 'sourceCreditGranted': 0}, indent=2) + '\n')
    return results


if __name__ == '__main__':
    print(json.dumps(build(ROOT / 'work/native-effect065/shader-build-v4', fixture=True)))
