import io
import json

from elftools.elf.elffile import ELFFile
from native_material_wave011_build import ROOT, WORK, SOURCE, HEADER, FLAGS, command, pin, save, sha


FOLDER = SOURCE.parent / 'helpers'
SOURCES = [SOURCE, FOLDER / 'core.c', FOLDER / 'texture.c', FOLDER / 'storage.c']


def frozen_constructor():
    path = ROOT / 'evidence/lanes/wave011-material/ready.json'
    if sha(path.read_bytes()) != 'f078097fee3edc59b0069b1492b8eec126296b1a78ff40e1aef63fa60a85576a':
        raise ValueError('Frozen original-dependency constructor receipt changed')
    report = json.loads(path.read_text())
    for row in report['files'] + report['readOnlyInputs']:
        if pin(ROOT / row['path']) != row:
            raise ValueError('Frozen constructor input changed: ' + row['path'])


def arm(folder, sources=SOURCES):
    frozen_constructor()
    folder.mkdir(parents=True, exist_ok=True)
    objects = []
    for index, source in enumerate(sources):
        output = folder / ('source-' + str(index) + '.o')
        command([ROOT / 'tools/clang-21/clang.exe', *FLAGS, '-fdata-sections', '-I', HEADER.parent, '-I', FOLDER,
            '-c', source, '-o', output], folder / ('compile-' + str(index) + '.json'))
        objects.append(output)
    script = folder / 'component.ld'
    script.write_text('SECTIONS {\n.vtable 0x857ed8 : { KEEP(*(.rodata.material_vtable)) }\n' +
        '.heap 0x89a918 : { KEEP(*(.material_heap)) }\n' +
        '.text 0xf00000 : { *(.text.fn_00554a30) *(.text*) }\n.rodata : { *(.rodata*) }\n' +
        '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment) *(.note*) *(.llvm_addrsig) } }\n')
    linked = folder / 'material-component.elf'
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'armelf', '--no-undefined', '--build-id=none',
        '--entry=fn_00554a30', '-T', script, *objects, '-o', linked], folder / 'link.json')
    elf = ELFFile(io.BytesIO(linked.read_bytes()))
    table = elf.get_section_by_name('.symtab')
    if any(symbol.name and symbol['st_shndx'] == 'SHN_UNDEF' for symbol in table.iter_symbols()):
        raise ValueError('Source-only constructor graph has an unresolved symbol')
    blocks, sections = [], []
    for section in elf.iter_sections():
        if section['sh_flags'] & 2 and section['sh_size']:
            if section['sh_type'] != 'SHT_PROGBITS':
                raise ValueError('Unexpected non-file-backed source allocation')
            blocks.append((section['sh_addr'], section.data()))
            sections.append({'name': section.name, 'address': section['sh_addr'], 'bytes': section['sh_size'],
                'sha256': sha(section.data()), 'executable': bool(section['sh_flags'] & 4)})
    symbols = {symbol.name: symbol['st_value'] for symbol in table.iter_symbols() if symbol.name and
        symbol['st_info']['type'] in ['STT_FUNC', 'STT_OBJECT'] and isinstance(symbol['st_shndx'], int)}
    if symbols['fn_00554a30'] != 0xf00000 or symbols['material_heap'] != 0x89a918 or symbols['material_vtable'] != 0x857ed8:
        raise ValueError('Owned source identity/service placement differs')
    receipt = {'sources': [pin(source) for source in sources], 'headers': [pin(HEADER), pin(FOLDER / 'services.h')],
        'objects': [pin(path) for path in objects], 'linkedElf': pin(linked), 'linkerScript': pin(script),
        'flags': FLAGS + ['-fdata-sections'], 'sections': sections, 'symbols': symbols,
        'undefinedSymbols': [], 'originalInstructionDependencies': [],
        'externalServices': ['heap allocation/release', 'texture resource accessor'],
        'materialVtable': 'Owned opaque constructor-component identity only; original virtual methods are not implemented',
        'allocatorScope': 'Construct-only runtime defaults; independent standalone allocator equivalence is not claimed',
        'sourceOnlyConstructorComponent': True, 'sourceOnlyGameBuild': False}
    save(folder / 'build.json', receipt)
    return blocks, receipt


def windows(folder, sources=SOURCES, extra_exports=()):
    frozen_constructor()
    folder.mkdir(parents=True, exist_ok=True)
    objects = []
    for index, source in enumerate(sources):
        output = folder / ('source-' + str(index) + '.obj')
        command([ROOT / 'tools/clang-21/clang.exe', '--target=x86_64-pc-windows-msvc', '-O2', '-std=c11',
            '-ffreestanding', '-fno-builtin', '-fpack-struct=4', '-Wall', '-Wextra', '-Werror', '-I', FOLDER,
            '-c', source, '-o', output],
            folder / ('compile-' + str(index) + '.json'))
        objects.append(output)
    library = folder / 'material-component.dll'
    exports = ['fn_00554a30', 'material_set_heap', 'material_storage_bytes', 'material_abi', *extra_exports]
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-flavor', 'link', '/dll', '/noentry', '/machine:x64',
        '/nodefaultlib', '/out:' + str(library), *['/export:' + name for name in exports], *objects], folder / 'link.json')
    return library


def android(folder):
    frozen_constructor()
    folder.mkdir(parents=True, exist_ok=True)
    objects = []
    for index, source in enumerate(SOURCES):
        output = folder / ('source-' + str(index) + '.o')
        command([ROOT / 'tools/clang-21/clang.exe', '--target=aarch64-linux-android29', '-O2', '-std=c11',
            '-ffreestanding', '-fno-builtin', '-fpack-struct=4', '-fdata-sections', '-fPIC', '-Wall', '-Wextra', '-Werror', '-c', source, '-o', output],
            folder / ('compile-' + str(index) + '.json'))
        objects.append(output)
    library = folder / 'libmaterial-component.so'
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-shared', '--no-undefined', '-z', 'max-page-size=16384',
        '-soname', 'libmaterial-component.so', '-o', library, *objects], folder / 'link.json')
    elf = ELFFile(io.BytesIO(library.read_bytes()))
    alignments = [segment['p_align'] for segment in elf.iter_segments() if segment['p_type'] == 'PT_LOAD']
    if elf['e_machine'] != 'EM_AARCH64' or not alignments or min(alignments) < 16384:
        raise ValueError('Android ARM64/16KiB contract differs')
    return {'library': pin(library), 'loadAlignments': alignments, 'deviceExecuted': False,
        'objects': [pin(path) for path in objects], 'sources': [pin(path) for path in SOURCES],
        'flags': ['--target=aarch64-linux-android29', '-O2', '-std=c11', '-ffreestanding', '-fno-builtin',
            '-fpack-struct=4', '-fdata-sections', '-fPIC', '-Wall', '-Wextra', '-Werror']}
