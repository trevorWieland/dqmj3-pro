from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

from native_sampled_key053_measure import digest, pin


def graph(path):
    path = path.resolve()
    with path.open('rb') as stream:
        elf = ELFFile(stream)
        table = elf.get_section_by_name('.symtab')
        symbols = list(table.iter_symbols())
        functions = {row.name: {'address': row['st_value'], 'bytes': row['st_size'],
                               'section': row['st_shndx']}
                     for row in symbols if row['st_info']['type'] == 'STT_FUNC' and row['st_size']}
        blocks, readable, executable = [], [], []
        for index, section in enumerate(elf.iter_sections()):
            if not section['sh_flags'] & 2 or not section['sh_size']:
                continue
            start, end = section['sh_addr'], section['sh_addr'] + section['sh_size']
            data = bytes(section['sh_size']) if section['sh_type'] == 'SHT_NOBITS' else section.data()
            blocks.append({'start': start, 'endExclusive': end, 'data': data,
                           'name': section.name, 'writable': bool(section['sh_flags'] & 1)})
            if section['sh_flags'] & 4:
                mappings = sorted({(row['st_value'], row.name[1]) for row in symbols
                                   if row['st_shndx'] == index and row.name.startswith(('$a', '$d', '$t'))})
                if elf.elfclass == 64:
                    mappings = [(start, 'a')]
                if not mappings or mappings[0][0] != start:
                    raise ValueError('Source executable mapping begins without a mode')
                for at, (address, mode) in enumerate(mappings):
                    limit = mappings[at + 1][0] if at + 1 < len(mappings) else end
                    if mode == 't':
                        raise ValueError('Source graph unexpectedly contains Thumb')
                    if mode == 'd':
                        readable.append((address, limit))
                    else:
                        for function in functions.values():
                            if function['section'] == index:
                                low = max(address, function['address'])
                                high = min(limit, function['address'] + function['bytes'])
                                if high > low:
                                    executable.append((low, high))
            elif not section['sh_flags'] & 1:
                readable.append((start, end))
        addresses = {at for low, high in executable for at in range(low, high, 4)}
        for name, function in functions.items():
            section = elf.get_section(function['section'])
            offset = function['address'] - section['sh_addr']
            function['sha256'] = digest(section.data()[offset:offset + function['bytes']])
            function['instructionAddresses'] = sorted(address for address in addresses
                if function['address'] <= address < function['address'] + function['bytes'])
        return {'artifact': pin(path), 'functions': functions,
                'blocks': blocks, 'executableAddresses': addresses, 'readableRanges': readable,
                'classBits': elf.elfclass, 'machine': elf['e_machine']}


def object_record(path):
    path = path.resolve()
    with path.open('rb') as stream:
        elf = ELFFile(stream)
        relocations = []
        for section in elf.iter_sections():
            if not isinstance(section, RelocationSection):
                continue
            symbols = elf.get_section(section['sh_link'])
            for row in section.iter_relocations():
                symbol = symbols.get_symbol(row['r_info_sym'])
                relocations.append({'section': elf.get_section(section['sh_info']).name,
                                    'offset': row['r_offset'], 'type': row['r_info_type'],
                                    'symbol': symbol.name,
                                    'addend': row['r_addend'] if row.is_RELA() else None})
        table = elf.get_section_by_name('.symtab')
        symbols = [{'name': row.name, 'offset': row['st_value'], 'bytes': row['st_size'],
                    'section': elf.get_section(row['st_shndx']).name}
                   for row in table.iter_symbols() if row['st_info']['type'] == 'STT_FUNC'
                   and row['st_size'] and isinstance(row['st_shndx'], int)]
        return {'artifact': pin(path), 'relocations': relocations, 'functions': symbols,
                'sections': [{'name': section.name, 'bytes': section['sh_size'],
                              'sha256': digest(section.data())}
                             for section in elf.iter_sections()
                             if section['sh_flags'] & 2 and section['sh_size'] and
                             section['sh_type'] != 'SHT_NOBITS']}


def public_graph(value):
    return {'artifact': value['artifact'], 'functions': value['functions'],
            'classBits': value['classBits'], 'machine': value['machine'],
            'executableAddresses': sorted(value['executableAddresses']),
            'readableRanges': value['readableRanges'],
            'blocks': [{**{key: item for key, item in block.items() if key != 'data'},
                        'sha256': digest(block['data'])} for block in value['blocks']]}
