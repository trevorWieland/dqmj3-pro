import io
from pathlib import Path

from elftools.elf.elffile import ELFFile
from native_material_wave011_build import ROOT, command, pin, save
from module_link_graph import describe_object


SOURCE = ROOT / 'source/squirrel-wave010'
WORK = ROOT / 'work/squirrel-closure-release010'
SOURCES = [SOURCE / name for name in ['closure_release.c', 'vtables.c', 'fixture.c']]
SOURCES += [ROOT / 'source/squirrel-wave007' / name for name in ['array_release.c', 'vector_destroy.c', 'chain_unlink.c', 'vtables.c']]
SOURCES += [ROOT / 'source/squirrel-wave008' / name for name in ['generator_release.c', 'vtables.c', 'fixture_runtime.c']]
ENTRIES = ['fn_006a7610', 'fn_006a769c', 'fn_00202dcc', 'fn_00202e68', 'fn_00665bd4', 'fn_00665c60',
    'fn_0077f3f8', 'fn_0024d73c']
NAME_DEFINES = ['-Dsq_legacy_script_closure_release010=fn_006a7610', '-Dsq_legacy_script_closure_destroy010=fn_006a769c']
FLAGS = ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-O2', '-std=c11', '-ffreestanding', '-fno-builtin',
    '-ffunction-sections', '-fdata-sections', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables', '-Wall', '-Wextra', '-Werror', *NAME_DEFINES]


def arm(folder, sources=SOURCES):
    folder.mkdir(parents=True, exist_ok=True)
    objects, descriptions = [], {}
    for index, source in enumerate(sources):
        target = folder / ('source-' + str(index) + '.o')
        command([ROOT / 'tools/clang-21/clang.exe', *FLAGS, '-I', SOURCE, '-c', source, '-o', target], folder / ('compile-' + str(index) + '.json'))
        objects.append(target)
        elf = ELFFile(io.BytesIO(target.read_bytes()))
        symbols = elf.get_section_by_name('.symtab')
        for name in ENTRIES:
            found = symbols.get_symbol_by_name(name) or []
            if found and isinstance(found[0]['st_shndx'], int):
                descriptions[name] = describe_object(target, name)
    script, output = folder / 'release.ld', folder / 'release.elf'
    script.write_text('SECTIONS { .text 0xf00000 : { *(.text*) } .rodata 0xf08000 : { *(.rodata*) }\n' +
        '.data 0xf10000 : { *(.data*) } .bss 0xf20000 : { *(.bss*) *(COMMON) }\n' +
        '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment) *(.note*) *(.llvm_addrsig) } }\n')
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'armelf', '--no-undefined', '--build-id=none',
        '--entry=fn_006a7610', '-T', script, *objects, '-o', output], folder / 'link.json')
    elf = ELFFile(io.BytesIO(output.read_bytes()))
    table = elf.get_section_by_name('.symtab')
    if any(row.name and row['st_shndx'] == 'SHN_UNDEF' for row in table.iter_symbols()):
        raise ValueError('Source script-closure lifetime graph is unresolved')
    symbols = {row.name: row['st_value'] for row in table.iter_symbols() if row.name and
        isinstance(row['st_shndx'], int) and row['st_info']['type'] in ['STT_FUNC', 'STT_OBJECT']}
    sections = [(row['sh_addr'], row['sh_size'], row['sh_flags'], row.data() if row['sh_type'] == 'SHT_PROGBITS' else b'')
        for row in elf.iter_sections() if row['sh_flags'] & 2 and row['sh_size']]
    functions = {row.name: (row['st_value'], row['st_value'] + row['st_size']) for row in table.iter_symbols()
        if row['st_info']['type'] == 'STT_FUNC' and isinstance(row['st_shndx'], int)}
    receipt = {'objects': [pin(path) for path in objects], 'linkedElf': pin(output), 'linkerScript': pin(script),
        'sources': [pin(path) for path in sources], 'flags': FLAGS, 'functions': descriptions,
        'symbols': symbols, 'undefinedSymbols': [], 'originalCodeOrDataMappedBySource': False,
        'heapServiceIsAuthoredCFixture': True}
    save(folder / 'build.json', receipt)
    return sections, symbols, functions, receipt


def windows(folder, sources=SOURCES):
    folder.mkdir(parents=True, exist_ok=True)
    objects = []
    for index, source in enumerate(sources):
        target = folder / ('source-' + str(index) + '.obj')
        command([ROOT / 'tools/clang-21/clang.exe', '--target=x86_64-pc-windows-msvc', '-O2', '-std=c11', '-ffreestanding',
            '-fno-builtin', '-Wall', '-Wextra', '-Werror', *NAME_DEFINES, '-I', SOURCE, '-c', source, '-o', target], folder / ('compile-' + str(index) + '.json'))
        objects.append(target)
    output = folder / 'closure-release.dll'
    exports = [*ENTRIES, 'fixture_bind', 'fixture_prepare', 'fixture_snapshot', 'fixture_array_vtable', 'fixture_generator_vtable', 'fixture_closure_vtable', 'fixture_base_vtable', 'fixture_layout']
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-flavor', 'link', '/dll', '/noentry', '/nodefaultlib', '/machine:x64',
        '/timestamp:0', '/out:' + str(output), *['/export:' + name for name in exports], *objects], folder / 'link.json')
    return output


def android(folder):
    folder.mkdir(parents=True, exist_ok=True)
    objects = []
    for index, source in enumerate(SOURCES):
        target = folder / ('source-' + str(index) + '.o')
        command([ROOT / 'tools/clang-21/clang.exe', '--target=aarch64-linux-android29', '-O2', '-std=c11',
            '-ffreestanding', '-fno-builtin', '-fno-stack-protector', '-fPIC', '-ffunction-sections', '-fdata-sections',
            '-Wall', '-Wextra', '-Werror', *NAME_DEFINES, '-I', SOURCE, '-c', source, '-o', target], folder / ('compile-' + str(index) + '.json'))
        objects.append(target)
    library = folder / 'libclosure_release010.so'
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-shared', '--no-undefined', '-z', 'max-page-size=16384',
        '-soname', library.name, *objects, '-o', library], folder / 'library-link.json')
    script, output = folder / 'model.ld', folder / 'model.elf'
    script.write_text('SECTIONS { .text 0x4000000 : { *(.text*) } .rodata 0x4010000 : { *(.rodata*) }\n' +
        '.data 0x4020000 : { *(.data*) *(.got*) } .bss : { *(.bss*) *(COMMON) }\n' +
        '/DISCARD/ : { *(.eh_frame*) *(.comment) *(.note*) *(.llvm_addrsig) } }\n')
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'aarch64elf', '--no-undefined', '--build-id=none',
        '--entry=fn_006a7610', '-T', script, *objects, '-o', output], folder / 'model-link.json')
    elf = ELFFile(io.BytesIO(output.read_bytes()))
    symbols = {row.name: row['st_value'] for row in elf.get_section_by_name('.symtab').iter_symbols() if row.name and
        isinstance(row['st_shndx'], int) and row['st_info']['type'] in ['STT_FUNC', 'STT_OBJECT']}
    sections = [(row['sh_addr'], row['sh_size'], row['sh_flags'], row.data() if row['sh_type'] == 'SHT_PROGBITS' else b'')
        for row in elf.iter_sections() if row['sh_flags'] & 2 and row['sh_size']]
    return sections, symbols, {'actualAndroidObjects': [pin(path) for path in objects], 'sharedLibrary': pin(library),
        'modelElf': pin(output), 'originalCodeOrDataMapped': False, 'androidOperatingSystemExecuted': False}
