import io

from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

from native_wave013_common import ROOT, FLAGS, command, record, sha


from native_wave012_graph_build import SOURCES as PRIOR_SOURCES, SIZES as PRIOR_SIZES


SOURCES = [*PRIOR_SOURCES, ROOT / 'src/native/wave013/control_compile.c']
SIZES = {**PRIOR_SIZES, 0x4c281c: 484, 0x755584: 24}
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
    linked, script = build / 'graph.elf', build / 'graph.ld'
    script.write_text('SECTIONS {\n' + '\n'.join('.text.fn_' + format(address, '08x') + ' ' + hex(placed) +
                      ' : { KEEP(*(.text.fn_' + format(address, '08x') + ')) }' for address, placed in PLACEMENTS.items()) +
                      '\n/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment) *(.note*) *(.llvm_addrsig) }\n}\n')
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'armelf', '--no-undefined', '--entry=fn_007555cc',
             '-T', script, *objects, '-o', linked], build / 'link.log', receipts)
    elf = ELFFile(io.BytesIO(linked.read_bytes()))
    symbols = elf.get_section_by_name('.symtab')
    functions, blocks, executable_ranges = {}, [], []
    for address, placed in PLACEMENTS.items():
        name = 'fn_' + format(address, '08x')
        found = symbols.get_symbol_by_name(name)
        if len(found or []) != 1:
            raise ValueError('Missing genuine source function')
        symbol = found[0]
        section = elf.get_section(symbol['st_shndx'])
        if symbol['st_value'] != placed or symbol['st_size'] != section['sh_size'] or section['sh_addr'] != placed:
            raise ValueError('Incomplete graph section placement')
        mapping = [(entry.name.split('.')[0], entry['st_value']) for entry in symbols.iter_symbols()
                   if entry['st_shndx'] == symbol['st_shndx'] and entry.name.startswith('$')]
        if not mapping or mapping[0] != ('$a', placed) or any(kind not in ['$a', '$d'] for kind, value in mapping):
            raise ValueError('Graph needs explicit unexpected mapping review')
        mapped = [(kind, start, mapping[index + 1][1] if index + 1 < len(mapping) else placed + section['sh_size'])
                  for index, (kind, start) in enumerate(mapping)]
        pools = [(start, end) for kind, start, end in mapped if kind == '$d']
        code = [(start, end) for kind, start, end in mapped if kind == '$a']
        executable_ranges.extend(code)
        original = next(candidate for candidate in elves if candidate.get_section_by_name('.text.' + name) is not None)
        original_section = original.get_section_by_name('.text.' + name)
        index = next(i for i, item in enumerate(original.iter_sections()) if item.name == original_section.name)
        relocations = []
        for relocation_section in original.iter_sections():
            if isinstance(relocation_section, RelocationSection) and relocation_section['sh_info'] == index:
                table = original.get_section(relocation_section['sh_link'])
                for item in relocation_section.iter_relocations():
                    target_symbol = table.get_symbol(item['r_info_sym'])
                    target = target_symbol.name
                    local_pool = (item['r_info_type'] == 2 and target_symbol['st_shndx'] == index and
                                  any(start <= placed + item['r_offset'] < end for start, end in pools))
                    if local_pool:
                        target = 'section:' + original_section.name
                        resolved = int.from_bytes(section.data()[item['r_offset']:item['r_offset'] + 4], 'little')
                        if not any(start <= resolved < end for start, end in code):
                            raise ValueError('Compiler switch entry escapes own executable spans')
                    elif target not in {'fn_' + format(value, '08x') for value in PLACEMENTS} or item['r_info_type'] not in [28, 29]:
                        raise ValueError('Unexpected source graph dependency')
                    relocations.append({'offset': item['r_offset'], 'type': item['r_info_type'], 'symbol': target,
                                        'format': relocation_section['sh_type']})
        raw = section.data()
        functions[address] = {'symbol': name, 'address': placed, 'bytes': len(raw), 'raw': raw,
                              'objectSpanSha256': sha(original_section.data()), 'linkedSpanSha256': sha(raw),
                              'poolBytes': sum(end - start for start, end in pools), 'mappingSymbols': mapping, 'relocations': relocations}
        blocks.append((placed, raw))
    return {'functions': functions, 'blocks': blocks, 'executableRanges': executable_ranges, 'objects': [record(path) for path in objects],
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
    dll = build / 'graph.dll'
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-flavor', 'link', '/dll', '/noentry', '/machine:x64', '/nodefaultlib',
             '/out:' + str(dll), *['/export:fn_' + format(address, '08x') for address in PLACEMENTS], *objects],
            build / 'link.log', receipts)
    return dll
