import io

from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

from native_wave012_common import ROOT, FLAGS, command, record, sha


SOURCES = [ROOT / ('src/native/wave012/' + name) for name in ['fixed_arena.c', 'label_ops.c', 'state_storage.c']]
SIZES = {0x4bfedc: 152, 0x4bff74: 52, 0x4c3994: 52, 0x4c39c8: 320,
         0x7555b4: 24, 0x7555cc: 36, 0x755798: 36, 0x7557bc: 92}
PLACEMENTS = {address: 0x900000 + index * 4096 for index, address in enumerate(SIZES)}


def arm(build, receipts, overrides=None):
    build.mkdir(parents=True, exist_ok=True)
    objects, elves = [], []
    for source in SOURCES:
        selected = (overrides or {}).get(source.name, source)
        obj = build / (source.stem + '.o')
        command([ROOT / 'tools/clang-21/clang.exe', *FLAGS, '-I', source.parent, '-c', selected, '-o', obj],
                build / (source.stem + '.log'), receipts)
        objects.append(obj)
        elves.append(ELFFile(io.BytesIO(obj.read_bytes())))
    linked, script = build / 'constructors.elf', build / 'constructors.ld'
    script.write_text('SECTIONS {\n' + '\n'.join('.text.fn_' + format(address, '08x') + ' ' + hex(placed) +
                      ' : { KEEP(*(.text.fn_' + format(address, '08x') + ')) }' for address, placed in PLACEMENTS.items()) +
                      '\n/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment) *(.note*) *(.llvm_addrsig) }\n}\n')
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'armelf', '--no-undefined', '--entry=fn_007555cc',
             '-T', script, *objects, '-o', linked], build / 'link.log', receipts)
    elf = ELFFile(io.BytesIO(linked.read_bytes()))
    symbols = elf.get_section_by_name('.symtab')
    functions, blocks = {}, []
    for address, placed in PLACEMENTS.items():
        name = 'fn_' + format(address, '08x')
        found = symbols.get_symbol_by_name(name)
        if len(found or []) != 1:
            raise ValueError('Missing genuine source function')
        symbol = found[0]
        section = elf.get_section(symbol['st_shndx'])
        if symbol['st_value'] != placed or symbol['st_size'] != section['sh_size'] or section['sh_addr'] != placed:
            raise ValueError('Incomplete constructor section placement')
        mapping = [(entry.name.split('.')[0], entry['st_value']) for entry in symbols.iter_symbols()
                   if entry['st_shndx'] == symbol['st_shndx'] and entry.name.startswith('$')]
        if mapping != [('$a', placed)]:
            raise ValueError('Constructor needs explicit non-ARM/pool review')
        original = next(candidate for candidate in elves if candidate.get_section_by_name('.text.' + name) is not None)
        original_section = original.get_section_by_name('.text.' + name)
        index = next(i for i, item in enumerate(original.iter_sections()) if item.name == original_section.name)
        relocations = []
        for relocation_section in original.iter_sections():
            if isinstance(relocation_section, RelocationSection) and relocation_section['sh_info'] == index:
                table = original.get_section(relocation_section['sh_link'])
                for item in relocation_section.iter_relocations():
                    target = table.get_symbol(item['r_info_sym']).name
                    if target not in {'fn_' + format(value, '08x') for value in PLACEMENTS} or item['r_info_type'] not in [28, 29]:
                        raise ValueError('Unexpected source constructor dependency')
                    relocations.append({'offset': item['r_offset'], 'type': item['r_info_type'], 'symbol': target,
                                        'format': relocation_section['sh_type']})
        raw = section.data()
        functions[address] = {'symbol': name, 'address': placed, 'bytes': len(raw), 'raw': raw,
                              'objectSpanSha256': sha(original_section.data()), 'linkedSpanSha256': sha(raw),
                              'poolBytes': 0, 'relocations': relocations}
        blocks.append((placed, raw))
    return {'functions': functions, 'blocks': blocks, 'objects': [record(path) for path in objects],
            'linkedElf': record(linked), 'linkerScript': record(script)}


def windows(build, receipts, overrides=None):
    build.mkdir(parents=True, exist_ok=True)
    objects = []
    for source in SOURCES:
        selected = (overrides or {}).get(source.name, source)
        obj = build / (source.stem + '.obj')
        command([ROOT / 'tools/clang-21/clang.exe', '--target=x86_64-pc-windows-msvc', '-O2', '-std=c11',
                 '-ffreestanding', '-fno-builtin', '-Wall', '-Wextra', '-Werror', '-I', source.parent,
                 '-c', selected, '-o', obj], build / (source.stem + '.log'), receipts)
        objects.append(obj)
    dll = build / 'constructors.dll'
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-flavor', 'link', '/dll', '/noentry', '/machine:x64', '/nodefaultlib',
             '/out:' + str(dll), *['/export:fn_' + format(address, '08x') for address in PLACEMENTS], *objects],
            build / 'link.log', receipts)
    return dll
