import io
import re

from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

from native_wave013_common import ROOT, FLAGS, command, record, sha


SOURCES=[*[ROOT/'src/native/wave032'/name for name in ['archive_lookup.c','archive_members.c','archive_owner.c']],
    ROOT/'toolscripts/native_archive032_fixture.c']


def objects(build, receipts, overrides=None, target='arm'):
    build.mkdir(parents=True, exist_ok=True)
    paths = []
    flags = FLAGS if target == 'arm' else ['--target=x86_64-pc-windows-msvc', '-O2', '-std=c11', '-ffreestanding',
                                            '-fno-builtin', '-ffunction-sections', '-Wall', '-Wextra', '-Werror']
    for source in SOURCES:
        selected = (overrides or {}).get(source.name, source)
        obj = build / (source.stem + ('.o' if target == 'arm' else '.obj'))
        command([ROOT / 'tools/clang-21/clang.exe', *flags, '-I', source.parent, '-c', selected, '-o', obj],
                build / (source.stem + '.log'), receipts)
        paths.append(obj)
    return paths


def arm(build, receipts, overrides=None):
    paths = objects(build, receipts, overrides)
    linked, script = build / 'owner_full.elf', build / 'owner_full.ld'
    script.write_text('SECTIONS { . = 0x900000; .text : { *(.text .text.*) } '
                      '. = ALIGN(4096); .rodata : { *(.rodata .rodata.*) } '
                      '. = ALIGN(4096); .data : { *(.data .data.*) } .bss : { *(.bss .bss.*) *(COMMON) } '
                      '/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment) *(.note*) *(.llvm_addrsig) } }\n')
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'armelf', '--no-undefined', '--entry=fn_00183688',
             '-T', script, *paths, '-o', linked], build / 'link.log', receipts)
    elf = ELFFile(io.BytesIO(linked.read_bytes()))
    table = elf.get_section_by_name('.symtab')
    functions, code_ranges, blocks, readonly, writable = {}, [], [], [], []
    allocated = {}
    for index, section in enumerate(elf.iter_sections()):
        if section['sh_flags'] & 2 and section['sh_size']:
            allocated[index] = section
            data = bytes(section['sh_size']) if section['sh_type'] == 'SHT_NOBITS' else section.data()
            blocks.append((section['sh_addr'], data))
            if section['sh_flags'] & 1:
                writable.append((section['sh_addr'], section['sh_addr'] + section['sh_size']))
            elif not section['sh_flags'] & 4:
                readonly.append((section['sh_addr'], section['sh_addr'] + section['sh_size']))
    mappings = sorted((symbol['st_value'], symbol.name.split('.')[0]) for symbol in table.iter_symbols()
                      if symbol.name.startswith('$') and symbol['st_shndx'] in allocated)
    if any(kind not in ['$a', '$d'] for address, kind in mappings):
        raise ValueError('Unexpected source execution mode')
    for symbol in table.iter_symbols():
        if symbol['st_info']['type'] != 'STT_FUNC' or not symbol['st_size']:
            continue
        section = allocated[symbol['st_shndx']]
        start, end = symbol['st_value'], symbol['st_value'] + symbol['st_size']
        raw = section.data()[start - section['sh_addr']:end - section['sh_addr']]
        modes = [(address, kind) for address, kind in mappings if start <= address < end]
        if not modes or modes[0] != (start, '$a'):
            raise ValueError('Source function mapping does not start in ARM code')
        spans = [(address, modes[index + 1][0] if index + 1 < len(modes) else end, kind)
                 for index, (address, kind) in enumerate(modes)]
        code_ranges.extend((low, high) for low, high, kind in spans if kind == '$a')
        functions[symbol.name] = {'address': start, 'bytes': len(raw), 'raw': raw, 'linkedSpanSha256': sha(raw),
                                  'mappingSpans': spans, 'poolBytes': sum(high - low for low, high, kind in spans if kind == '$d'),
                                  'canonicalOriginalAddress': int(symbol.name[3:], 16) if re.fullmatch('fn_[0-9a-f]{8}', symbol.name) else None}
    mutable_objects = [{'symbol': symbol.name, 'address': symbol['st_value'], 'bytes': symbol['st_size']}
                       for symbol in table.iter_symbols() if symbol['st_info']['type'] == 'STT_OBJECT'
                       and isinstance(symbol['st_shndx'], int) and symbol['st_shndx'] in allocated
                       and allocated[symbol['st_shndx']]['sh_flags'] & 1 and symbol['st_size']]
    expected_globals=['active_archive_services']
    if sorted(row['symbol'] for row in mutable_objects)!=sorted(expected_globals) or any(row['bytes']!=4 for row in mutable_objects):
        raise ValueError('Whole owner mutable service bindings differ')
    readonly_objects = [{'symbol':symbol.name,'address':symbol['st_value'],'bytes':symbol['st_size']}
        for symbol in table.iter_symbols() if symbol['st_info']['type']=='STT_OBJECT'
        and isinstance(symbol['st_shndx'],int) and symbol['st_shndx'] in allocated
        and not allocated[symbol['st_shndx']]['sh_flags'] & 1 and symbol['st_size']]
    records = []
    for path in paths:
        obj = ELFFile(io.BytesIO(path.read_bytes()))
        relocations = []
        for section in obj.iter_sections():
            if not isinstance(section, RelocationSection):
                continue
            target_section = obj.get_section(section['sh_info'])
            if target_section.name.startswith(('.ARM.exidx', '.ARM.extab')):
                continue
            symbols = obj.get_section(section['sh_link'])
            for relocation in section.iter_relocations():
                symbol = symbols.get_symbol(relocation['r_info_sym'])
                target = symbol.name
                if not target and isinstance(symbol['st_shndx'], int):
                    target = 'section:' + obj.get_section(symbol['st_shndx']).name
                relocations.append({'section': target_section.name, 'offset': relocation['r_offset'],
                                    'type': relocation['r_info_type'], 'symbol': target, 'format': section['sh_type']})
        for symbol in obj.get_section_by_name('.symtab').iter_symbols():
            if symbol.name not in functions or symbol['st_info']['type'] != 'STT_FUNC' or not symbol['st_size'] or not isinstance(symbol['st_shndx'], int):
                continue
            section = obj.get_section(symbol['st_shndx'])
            raw = section.data()[symbol['st_value']:symbol['st_value'] + symbol['st_size']]
            if symbol['st_value'] != 0 or symbol['st_size'] != section['sh_size']:
                raise ValueError('Source object function section is not complete')
            functions[symbol.name]['objectOrigin'] = {'object': record(path), 'section': section.name,
                'bytes': len(raw), 'sha256': sha(raw),
                'source': record((overrides or {}).get(next(source for source in SOURCES if source.stem == path.stem).name,
                                                     next(source for source in SOURCES if source.stem == path.stem))),
                'relocations': [row for row in relocations if row['section'] == section.name]}
        records.append({**record(path), 'relocations': relocations})
    return {'functions': functions, 'blocks': blocks, 'executableRanges': code_ranges, 'readonlyRanges': readonly,
            'writableRanges': writable, 'readonlyObjects':readonly_objects, 'mutableSourceObjects': mutable_objects, 'objects': records, 'linkedElf': record(linked), 'linkerScript': record(script)}


def windows(build,receipts,overrides=None):
    paths=objects(build,receipts,overrides,'windows');dll=build/'archive.dll'
    exports=['fn_00118624','fn_00183688','fn_00176d74','fn_005f5cac','fn_005f5cd8','fn_005f5d3c','fn_005f5d14',
        'fn_006edd88','fn_006eddc0','fn_006eddec','fn_006ede0c','fn_006ede48','fn_006ede84','fn_006edeb4',
        'archive_bind_services','archive_fixture_allocate','archive_fixture_release']
    command([ROOT/'tools/clang-21/ld.lld.exe','-flavor','link','/dll','/noentry','/machine:x64','/nodefaultlib',
        '/out:'+str(dll),*['/export:'+name for name in exports],'/export:archive_operations,data',
        '/export:archive_fixture_heap_operations,data','/export:archive032_layout_values,data',*paths],build/'link.log',receipts)
    return dll


def a64(build, receipts, overrides=None):
    build.mkdir(parents=True,exist_ok=True);paths=[]
    for source in SOURCES:
        selected=(overrides or {}).get(source.name,source)
        obj=build/(source.stem+'.o')
        command([ROOT/'tools/clang-21/clang.exe','--target=aarch64-linux-android29','-O2','-std=c11',
            '-ffreestanding','-fno-builtin','-fno-stack-protector','-fno-pic','-fno-pie','-ffunction-sections',
            '-fno-unwind-tables','-fno-asynchronous-unwind-tables','-Wall','-Wextra','-Werror',
            '-I',source.parent,'-c',selected,'-o',obj],build/(source.stem+'.log'),receipts)
        paths.append(obj)
    linked,script=build/'owner_session.elf',build/'owner_session.ld'
    script.write_text('SECTIONS { . = 0x110000000; .text : { *(.text .text.*) } '
        '. = ALIGN(16384); .rodata : { *(.rodata .rodata.*) } '
        '. = ALIGN(16384); .data : { *(.data .data.*) } .bss : { *(.bss .bss.*) *(COMMON) } '
        '/DISCARD/ : { *(.eh_frame*) *(.comment*) *(.note*) *(.llvm_addrsig) } }\n')
    command([ROOT/'tools/clang-21/ld.lld.exe','-m','aarch64elf','--no-undefined','--build-id=none',
        '--entry=fn_00183688','-T',script,*paths,'-o',linked],build/'link.log',receipts)
    elf = ELFFile(io.BytesIO(linked.read_bytes()))
    table = elf.get_section_by_name('.symtab')
    functions, code_ranges, blocks, readonly, writable = {}, [], [], [], []
    allocated = {}
    for index, section in enumerate(elf.iter_sections()):
        if section['sh_flags'] & 2 and section['sh_size']:
            allocated[index] = section
            data = bytes(section['sh_size']) if section['sh_type'] == 'SHT_NOBITS' else section.data()
            blocks.append((section['sh_addr'], data))
            if section['sh_flags'] & 1:
                writable.append((section['sh_addr'], section['sh_addr'] + section['sh_size']))
            elif not section['sh_flags'] & 4:
                readonly.append((section['sh_addr'], section['sh_addr'] + section['sh_size']))
    mappings = sorted((symbol['st_value'], symbol.name.split('.')[0]) for symbol in table.iter_symbols()
                      if symbol.name.startswith('$') and symbol['st_shndx'] in allocated)
    if any(kind not in ['$x', '$d'] for address, kind in mappings):
        raise ValueError('Unexpected source execution mode')
    for symbol in table.iter_symbols():
        if symbol['st_info']['type'] != 'STT_FUNC' or not symbol['st_size']:
            continue
        section = allocated[symbol['st_shndx']]
        start, end = symbol['st_value'], symbol['st_value'] + symbol['st_size']
        raw = section.data()[start - section['sh_addr']:end - section['sh_addr']]
        modes = [(address, kind) for address, kind in mappings if start <= address < end]
        if not modes or modes[0] != (start, '$x'):
            raise ValueError('Source function mapping does not start in ARM code')
        spans = [(address, modes[index + 1][0] if index + 1 < len(modes) else end, kind)
                 for index, (address, kind) in enumerate(modes)]
        code_ranges.extend((low, high) for low, high, kind in spans if kind == '$x')
        functions[symbol.name] = {'address': start, 'bytes': len(raw), 'raw': raw, 'linkedSpanSha256': sha(raw),
                                  'mappingSpans': spans, 'poolBytes': sum(high - low for low, high, kind in spans if kind == '$d'),
                                  'canonicalOriginalAddress': int(symbol.name[3:], 16) if re.fullmatch('fn_[0-9a-f]{8}', symbol.name) else None}
    mutable_objects = [{'symbol': symbol.name, 'address': symbol['st_value'], 'bytes': symbol['st_size']}
                       for symbol in table.iter_symbols() if symbol['st_info']['type'] == 'STT_OBJECT'
                       and isinstance(symbol['st_shndx'], int) and symbol['st_shndx'] in allocated
                       and allocated[symbol['st_shndx']]['sh_flags'] & 1 and symbol['st_size']]
    expected_globals=['active_archive_services']
    if sorted(row['symbol'] for row in mutable_objects)!=sorted(expected_globals) or any(row['bytes']!=8 for row in mutable_objects):
        raise ValueError('Whole owner mutable service bindings differ')
    readonly_objects = [{'symbol':symbol.name,'address':symbol['st_value'],'bytes':symbol['st_size']}
        for symbol in table.iter_symbols() if symbol['st_info']['type']=='STT_OBJECT'
        and isinstance(symbol['st_shndx'],int) and symbol['st_shndx'] in allocated
        and not allocated[symbol['st_shndx']]['sh_flags'] & 1 and symbol['st_size']]
    records = []
    for path in paths:
        obj = ELFFile(io.BytesIO(path.read_bytes()))
        relocations = []
        for section in obj.iter_sections():
            if not isinstance(section, RelocationSection):
                continue
            target_section = obj.get_section(section['sh_info'])
            if target_section.name.startswith(('.ARM.exidx', '.ARM.extab')):
                continue
            symbols = obj.get_section(section['sh_link'])
            for relocation in section.iter_relocations():
                symbol = symbols.get_symbol(relocation['r_info_sym'])
                target = symbol.name
                if not target and isinstance(symbol['st_shndx'], int):
                    target = 'section:' + obj.get_section(symbol['st_shndx']).name
                relocations.append({'section': target_section.name, 'offset': relocation['r_offset'],
                                    'type': relocation['r_info_type'], 'symbol': target, 'format': section['sh_type']})
        for symbol in obj.get_section_by_name('.symtab').iter_symbols():
            if symbol.name not in functions or symbol['st_info']['type'] != 'STT_FUNC' or not symbol['st_size'] or not isinstance(symbol['st_shndx'], int):
                continue
            section = obj.get_section(symbol['st_shndx'])
            raw = section.data()[symbol['st_value']:symbol['st_value'] + symbol['st_size']]
            if symbol['st_value'] != 0 or symbol['st_size'] != section['sh_size']:
                raise ValueError('Source object function section is not complete')
            functions[symbol.name]['objectOrigin'] = {'object': record(path), 'section': section.name,
                'bytes': len(raw), 'sha256': sha(raw),
                'source': record((overrides or {}).get(next(source for source in SOURCES if source.stem == path.stem).name,
                                                     next(source for source in SOURCES if source.stem == path.stem))),
                'relocations': [row for row in relocations if row['section'] == section.name]}
        records.append({**record(path), 'relocations': relocations})
    return {'functions': functions, 'blocks': blocks, 'executableRanges': code_ranges, 'readonlyRanges': readonly,
            'writableRanges': writable, 'readonlyObjects':readonly_objects, 'mutableSourceObjects': mutable_objects, 'objects': records, 'linkedElf': record(linked), 'linkerScript': record(script)}

