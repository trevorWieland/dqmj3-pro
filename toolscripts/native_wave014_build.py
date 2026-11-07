import io
import json
from pathlib import Path

from elftools.elf.elffile import ELFFile
from native_material_wave011_build import ROOT, command, pin, save, sha
from module_link_graph import describe_object


SOURCE = ROOT / 'src/native/wave014'
WORK = ROOT / 'work/wave014'
FLAGS = ['--target=arm-none-eabi', '-mcpu=mpcore', '-mfpu=vfp', '-mfloat-abi=softfp', '-marm', '-O2',
    '-std=c11', '-ffreestanding', '-fno-builtin', '-ffp-contract=off', '-ffunction-sections', '-fdata-sections',
    '-fno-unwind-tables', '-fno-asynchronous-unwind-tables', '-fpack-struct=4', '-Wall', '-Wextra', '-Werror']
SOURCES = [SOURCE / name for name in ['matrix.c', 'trigonometry.c', 'projection.c']]
NAMES = ['fn_001ad06c', 'fn_001ad184', 'fn_0052534c', 'fn_0055492c', 'fn_0054befc']


def arm(folder, sources=SOURCES, extra_flags=()):
    folder.mkdir(parents=True, exist_ok=True)
    objects, descriptions = [], {}
    for index, source in enumerate(sources):
        output = folder / ('source-' + str(index) + '.o')
        command([ROOT / 'tools/clang-21/clang.exe', *FLAGS, *extra_flags, '-I', SOURCE, '-c', source, '-o', output], folder / ('compile-' + str(index) + '.json'))
        objects.append(output)
        elf = ELFFile(io.BytesIO(output.read_bytes()))
        table = elf.get_section_by_name('.symtab')
        for name in NAMES:
            symbols = table.get_symbol_by_name(name) or []
            if symbols and isinstance(symbols[0]['st_shndx'], int):
                descriptions[name] = describe_object(output, name)
    script, linked = folder / 'family.ld', folder / 'family.elf'
    script.write_text('SECTIONS { .text 0xf00000 : { *(.text*) } .rodata 0xf08000 : { *(.rodata*) }\n' +
        '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment) *(.note*) *(.llvm_addrsig) } }\n')
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'armelf', '--no-undefined', '--build-id=none',
        '--entry=fn_0054befc', '-T', script, *objects, '-o', linked], folder / 'link.json')
    elf = ELFFile(io.BytesIO(linked.read_bytes()))
    table = elf.get_section_by_name('.symtab')
    if any(symbol.name and symbol['st_shndx'] == 'SHN_UNDEF' for symbol in table.iter_symbols()):
        raise ValueError('Source math closure has unresolved dependencies')
    symbols = {symbol.name: symbol['st_value'] for symbol in table.iter_symbols() if symbol.name and
        symbol['st_info']['type'] in ['STT_FUNC', 'STT_OBJECT'] and isinstance(symbol['st_shndx'], int)}
    blocks, executable = [], []
    for section in elf.iter_sections():
        if section['sh_flags'] & 2 and section['sh_size']:
            if section['sh_type'] != 'SHT_PROGBITS':
                raise ValueError('Unexpected non-file-backed math family allocation')
            blocks.append((section['sh_addr'], section.data()))
            if section['sh_flags'] & 4:
                executable.append((section['sh_addr'], section['sh_addr'] + section['sh_size']))
    numeric = table.get_symbol_by_name('derived_sine_cosine')[0]
    section = elf.get_section(numeric['st_shndx'])
    offset = numeric['st_value'] - section['sh_addr']
    derived = section.data()[offset:offset + numeric['st_size']]
    expected = json.loads((ROOT / 'evidence/lanes/wave014/derived-table.json').read_text())['derivedSha256']
    if len(derived) != 4096 or sha(derived) != expected:
        raise ValueError('Compiler-derived numeric table differs from independent mathematical recipe')
    receipt = {'objects': [pin(path) for path in objects], 'linkedElf': pin(linked), 'linkerScript': pin(script),
        'sources': [pin(path) for path in sources], 'header': pin(SOURCE / 'projection.h'), 'table': pin(SOURCE / 'sine_table.inc'),
        'flags': [*FLAGS, *extra_flags], 'symbols': symbols, 'functions': descriptions, 'compiledDerivedTableSha256': sha(derived),
        'undefinedSymbols': [], 'originalInstructionDependencies': [], 'originalNumericTableRetained': False}
    save(folder / 'build.json', receipt)
    return blocks, executable, symbols, receipt


def windows(folder, sources=SOURCES):
    folder.mkdir(parents=True, exist_ok=True)
    objects = []
    for index, source in enumerate([*sources, SOURCE / 'platform_marker.c']):
        output = folder / ('source-' + str(index) + '.obj')
        command([ROOT / 'tools/clang-21/clang.exe', '--target=x86_64-pc-windows-msvc', '-O2', '-std=c11',
            '-ffreestanding', '-fno-builtin', '-ffp-contract=off', '-fpack-struct=4', '-Wall', '-Wextra', '-Werror',
            '-I', SOURCE, '-c', source, '-o', output], folder / ('compile-' + str(index) + '.json'))
        objects.append(output)
    target = folder / 'projection-family.dll'
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-flavor', 'link', '/dll', '/noentry', '/nodefaultlib',
        '/machine:x64', '/timestamp:0', '/out:' + str(target), *['/export:' + name for name in NAMES],
        '/export:derived_sine_cosine,data', *objects], folder / 'link.json')
    return target


def android(folder):
    folder.mkdir(parents=True, exist_ok=True)
    objects = []
    for index, source in enumerate(SOURCES):
        output = folder / ('source-' + str(index) + '.o')
        command([ROOT / 'tools/clang-21/clang.exe', '--target=aarch64-linux-android29', '-O2', '-std=c11',
            '-ffreestanding', '-fno-builtin', '-ffp-contract=off', '-fpack-struct=4', '-fPIC',
            '-Wall', '-Wextra', '-Werror', '-c', source, '-o', output], folder / ('compile-' + str(index) + '.json'))
        objects.append(output)
    target = folder / 'libprojection-family.so'
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-shared', '--no-undefined', '-z', 'max-page-size=16384',
        '-soname', 'libprojection-family.so', '-o', target, *objects], folder / 'link.json')
    return {'library': pin(target), 'objects': [pin(path) for path in objects], 'deviceExecuted': False}
