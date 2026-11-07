import io
from pathlib import Path

from elftools.elf.elffile import ELFFile

from module_link_graph import describe_object
from native_wave009 import ROOT, FLAGS, command, record, sha


SOURCE = ROOT / 'src/native/wave010/match_state.c'
HEADER = SOURCE.with_suffix('.h')
INTERVAL_SOURCE = ROOT / 'src/native/wave009/interval_set.c'
INTERVAL_HEADER = INTERVAL_SOURCE.with_suffix('.h')
PLACEMENTS = {'fn_004becdc': 0x900000, 'fn_004bed30': 0x901000, 'fn_00780578': 0x902000}


def arm(source, build, receipts):
    build.mkdir(parents=True, exist_ok=True)
    obj, interval_obj, linked = build / 'matcher.o', build / 'intervals.o', build / 'matcher.elf'
    for original, output, name in [(source, obj, 'matcher'), (INTERVAL_SOURCE, interval_obj, 'intervals')]:
        command([ROOT / 'tools/clang-21/clang.exe', *FLAGS, '-I', HEADER.parent, '-c', original, '-o', output],
                build / (name + '-compile.log'), receipts)
    descriptions = {name: describe_object(obj if name != 'fn_00780578' else interval_obj, name) for name in PLACEMENTS}
    script = build / 'matcher.ld'
    script.write_text('SECTIONS {\n' + '\n'.join('.text.' + name + ' ' + hex(address) +
                      ' : { KEEP(*(.text.' + name + ')) }' for name, address in PLACEMENTS.items()) +
                      '\n.rodata 0x903000 : { *(.rodata*) }\n' +
                      '/DISCARD/ : { *(.text.fn_007805e4) *(.ARM.exidx*) *(.ARM.extab*) *(.comment) *(.note*) *(.llvm_addrsig) }\n}\n')
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'armelf', '--no-undefined', '--build-id=none',
             '--entry=fn_004bed30', '-T', script, obj, interval_obj, '-o', linked], build / 'link.log', receipts)
    elf = ELFFile(io.BytesIO(linked.read_bytes()))
    table = elf.get_section_by_name('.symtab')
    if any(symbol.name and symbol['st_shndx'] == 'SHN_UNDEF' for symbol in table.iter_symbols()):
        raise ValueError('Full-source matcher graph has unresolved symbols')
    blocks, executable, sections = [], [], []
    for section in elf.iter_sections():
        if not section['sh_flags'] & 2 or not section['sh_size']:
            continue
        if section['sh_type'] != 'SHT_PROGBITS':
            raise ValueError('Unexpected non-file-backed matcher allocation')
        start, raw = section['sh_addr'], section.data()
        blocks.append((start, raw))
        if section['sh_flags'] & 4:
            executable.append((start, start + len(raw)))
        sections.append({'section': section.name, 'address': start, 'bytes': len(raw), 'sha256': sha(raw),
                         'executable': bool(section['sh_flags'] & 4)})
    functions = {}
    for name, address in PLACEMENTS.items():
        symbols = table.get_symbol_by_name(name) or []
        if len(symbols) != 1 or symbols[0]['st_value'] != address or symbols[0]['st_info']['type'] != 'STT_FUNC':
            raise ValueError('Genuine source symbol placement differs')
        symbol = symbols[0]
        section = elf.get_section(symbol['st_shndx'])
        if section['sh_addr'] != address or section['sh_size'] != symbol['st_size']:
            raise ValueError('Compiler function omits its complete section')
        mappings = [(item.name.split('.')[0], item['st_value']) for item in table.iter_symbols()
                    if item['st_shndx'] == symbol['st_shndx'] and item.name.startswith('$')]
        if mappings != [('$a', address)]:
            raise ValueError('Unexpected literal-pool or instruction-mode mapping in this frozen profile')
        functions[name] = {**descriptions[name], 'linkedAddress': address, 'poolBytes': 0,
                           'compilerMappingSymbols': [{'name': kind, 'address': location} for kind, location in mappings],
                           'instructionRanges': [{'start': address, 'bytes': section['sh_size'], 'endExclusive': address + section['sh_size']}], 'linkedSpanSha256': sha(section.data()),
                           'completeSectionBytes': section['sh_size']}
    return {'blocks': blocks, 'executable': executable, 'functions': functions, 'sections': sections,
            'objects': [record(obj), record(interval_obj)], 'linkedElf': record(linked), 'linkerScript': record(script)}


def windows(source, build, receipts):
    build.mkdir(parents=True, exist_ok=True)
    objects = []
    for original, name in [(source, 'matcher'), (INTERVAL_SOURCE, 'intervals')]:
        obj = build / (name + '.windows.obj')
        command([ROOT / 'tools/clang-21/clang.exe', '--target=x86_64-pc-windows-msvc', '-O2', '-std=c11',
                 '-ffreestanding', '-fno-builtin', '-Wall', '-Wextra', '-Werror', '-I', HEADER.parent,
                 '-c', original, '-o', obj], build / (name + '-windows-compile.log'), receipts)
        objects.append(obj)
    dll = build / 'matcher.dll'
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-flavor', 'link', '/dll', '/noentry', '/machine:x64',
             '/nodefaultlib', '/out:' + str(dll), '/export:fn_004becdc', '/export:fn_004bed30', *objects],
            build / 'windows-link.log', receipts)
    return dll


def android(source, build, receipts):
    build.mkdir(parents=True, exist_ok=True)
    objects = []
    for original, name in [(source, 'matcher'), (INTERVAL_SOURCE, 'intervals')]:
        obj = build / (name + '.android.o')
        command([ROOT / 'tools/clang-21/clang.exe', '--target=aarch64-linux-android29', '-O2', '-std=c11',
                 '-ffreestanding', '-fno-builtin', '-fPIC', '-Wall', '-Wextra', '-Werror', '-I', HEADER.parent,
                 '-c', original, '-o', obj], build / (name + '-android-compile.log'), receipts)
        objects.append(obj)
    shared = build / 'libmatcher.so'
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-shared', '--no-undefined', '-z', 'max-page-size=16384',
             '-soname', 'libmatcher.so', '-o', shared, *objects], build / 'android-link.log', receipts)
    elf = ELFFile(io.BytesIO(shared.read_bytes()))
    loads = [segment['p_align'] for segment in elf.iter_segments() if segment['p_type'] == 'PT_LOAD']
    if elf['e_machine'] != 'EM_AARCH64' or not loads or any(value < 16384 for value in loads):
        raise ValueError('Android arm64/16 KiB load contract differs')
    return {'library': record(shared), 'loadAlignments': loads, 'api': 29, 'deviceExecuted': False}
