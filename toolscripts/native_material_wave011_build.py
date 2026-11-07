import hashlib
import io
import json
import subprocess
from pathlib import Path

from elftools.elf.elffile import ELFFile
from module_link_graph import describe_object


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/wave011-material'
SOURCE = ROOT / 'src/native/wave011-material/material.c'
HEADER = SOURCE.with_suffix('.h')
ENTRY = 0xf00000
DEPENDENCIES = {'fn_00101a1c': 0x101a1d, 'fn_0017d8f8': 0x17d8f8, 'fn_005549f0': 0x5549f0,
    'fn_0019fdf4': 0x19fdf4, 'fn_005525ac': 0x5525ac, 'fn_0019501c': 0x19501c,
    'fn_0019fbb0': 0x19fbb0, 'fn_005524ec': 0x5524ec, 'fn_00166824': 0x166824,
    'material_vtable': 0x857ed8}
FLAGS = ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-O2', '-std=c11', '-ffreestanding',
    '-fno-builtin', '-ffunction-sections', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables',
    '-Wall', '-Wextra', '-Werror']


def sha(data):
    return hashlib.sha256(data).hexdigest()


def pin(path):
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': path.stat().st_size, 'sha256': sha(path.read_bytes())}


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def command(argv, log):
    if log.exists():
        index = 1
        while log.with_name(log.stem + '-prior-' + str(index) + log.suffix).exists():
            index += 1
        log.rename(log.with_name(log.stem + '-prior-' + str(index) + log.suffix))
    process = subprocess.run([str(item) for item in argv], capture_output=True, timeout=120)
    save(log, {'argv': [str(item) for item in argv], 'exitCode': process.returncode,
        'stdout': process.stdout.decode(errors='replace'), 'stderr': process.stderr.decode(errors='replace')})
    if process.returncode or process.stderr:
        raise RuntimeError('Build failed or emitted diagnostics: ' + str(log))


def build(folder, source=SOURCE):
    folder.mkdir(parents=True, exist_ok=True)
    obj, linked, script = folder / 'material.o', folder / 'material.elf', folder / 'material.ld'
    command([ROOT / 'tools/clang-21/clang.exe', *FLAGS, '-I', HEADER.parent, '-c', source, '-o', obj], folder / 'compile.json')
    description = describe_object(obj, 'fn_00554a30')
    actual = {row['symbol'] for row in description['relocations']}
    if actual != set(DEPENDENCIES):
        raise ValueError('Actual constructor dependencies differ: ' + repr(actual))
    script.write_text('\n'.join(name + ' = ' + hex(address) + ';' for name, address in DEPENDENCIES.items()) +
        '\nSECTIONS { .text ' + hex(ENTRY) + ' : { *(.text*) } .rodata : { *(.rodata*) }\n' +
        '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment) *(.note*) *(.llvm_addrsig) } }\n')
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'armelf', '--no-undefined', '--build-id=none',
        '--entry=fn_00554a30', '-T', script, obj, '-o', linked], folder / 'link.json')
    elf = ELFFile(io.BytesIO(linked.read_bytes()))
    table = elf.get_section_by_name('.symtab')
    symbol = table.get_symbol_by_name('fn_00554a30')[0]
    if symbol['st_value'] != ENTRY:
        raise ValueError('Source constructor placement differs')
    blocks, sections = [], []
    for section in elf.iter_sections():
        if section['sh_flags'] & 2 and section['sh_size']:
            if section['sh_type'] != 'SHT_PROGBITS':
                raise ValueError('Unexpected non-file-backed source allocation')
            blocks.append((section['sh_addr'], section.data()))
            sections.append({'name': section.name, 'address': section['sh_addr'], 'bytes': section['sh_size'],
                'sha256': sha(section.data()), 'executable': bool(section['sh_flags'] & 4)})
    if any(item.name and item['st_shndx'] == 'SHN_UNDEF' for item in table.iter_symbols()):
        raise ValueError('Unresolved source link')
    receipt = {'source': pin(source), 'header': pin(HEADER), 'object': pin(obj), 'linkedElf': pin(linked),
        'linkerScript': pin(script), 'flags': FLAGS, 'function': description, 'linkedSections': sections,
        'dependencies': DEPENDENCIES, 'containsOriginalInstructions': False,
        'runsWithOriginalDependenciesInPrivateOracle': True, 'sourceOnlyGameBuild': False}
    save(folder / 'build.json', receipt)
    return blocks, receipt
