import hashlib
from pathlib import Path
import struct


def fingerprint(raw):
    return {'bytes': len(raw), 'sha256': hashlib.sha256(raw).hexdigest()}


def elf(path, names):
    from elftools.elf.elffile import ELFFile
    rows = []
    with path.open('rb') as stream:
        image = ELFFile(stream)
        table = image.get_section_by_name('.symtab')
        symbols = list(table.iter_symbols())
        mapping = {}
        for symbol in symbols:
            if symbol.name.startswith(('$a', '$t', '$x', '$d')):
                mapping.setdefault(symbol['st_shndx'], []).append((symbol['st_value'], symbol.name[1]))
        for symbol in symbols:
            if symbol.name not in names or symbol['st_info']['type'] != 'STT_FUNC' or not isinstance(symbol['st_shndx'], int): continue
            section_index = symbol['st_shndx']
            section = image.get_section(section_index)
            start, size = symbol['st_value'], symbol['st_size']
            raw = section.data()[start:start + size]
            boundaries = sorted(mapping.get(section_index, []))
            points = sorted({start, start + size} | {offset for offset, kind in boundaries if start < offset < start + size})
            ranges = []
            for left, right in zip(points, points[1:]):
                state = next((kind for offset, kind in reversed(boundaries) if offset <= left), 'x' if image.elfclass == 64 else 'a')
                ranges.append({'sectionOffset': left, 'endExclusive': right, 'kind': 'literal-data' if state == 'd' else 'instructions',
                    'mode': 'data' if state == 'd' else 'Thumb' if state == 't' else 'A64' if state == 'x' else 'ARM',
                    **fingerprint(section.data()[left:right])})
            relocations = []
            for relocation_section in image.iter_sections():
                if relocation_section['sh_type'] not in ['SHT_REL', 'SHT_RELA'] or relocation_section['sh_info'] != section_index: continue
                relocation_symbols = image.get_section(relocation_section['sh_link'])
                for relocation in relocation_section.iter_relocations():
                    if start <= relocation['r_offset'] < start + size:
                        relocations.append({'offsetWithinSymbol': relocation['r_offset'] - start,
                            'type': relocation['r_info_type'], 'symbol': relocation_symbols.get_symbol(relocation['r_info_sym']).name,
                            'addend': relocation['r_addend'] if relocation.is_RELA() else None})
            rows.append({'symbol': symbol.name, 'objectSection': section.name, 'sectionOffset': start,
                'symbolStorageBytes': size, 'symbolStorage': fingerprint(raw), 'ranges': ranges, 'relocations': relocations})
    return rows


def coff(path, names):
    raw = path.read_bytes()
    machine, count, stamp, symbol_offset, symbol_count, optional, flags = struct.unpack_from('<HHIIIHH', raw)
    strings = symbol_offset + symbol_count * 18
    def string(offset): return raw[strings + offset:raw.index(0, strings + offset)].decode()
    def name_at(offset):
        name = raw[offset:offset + 8]
        if name[:4] == bytes(4): return string(struct.unpack_from('<I', name, 4)[0])
        if name[:1] == b'/': return string(int(name[1:].split(bytes(1))[0]))
        return name.split(bytes(1))[0].decode()
    sections = []
    for index in range(count):
        offset = 20 + optional + index * 40
        fields = struct.unpack_from('<IIIIIIHHI', raw, offset + 8)
        sections.append({'name': name_at(offset), 'size': fields[2], 'data': fields[3], 'relocations': fields[4], 'relocationCount': fields[6]})
    symbols = {}
    index = 0
    while index < symbol_count:
        offset = symbol_offset + index * 18
        value, section, kind, storage, auxiliary = struct.unpack_from('<IhHBB', raw, offset + 8)
        symbols[index] = {'name': name_at(offset), 'value': value, 'section': section, 'kind': kind}
        index += 1 + auxiliary
    rows = []
    for symbol in symbols.values():
        if symbol['name'] not in names or symbol['section'] <= 0 or not symbol['kind'] & 0x20: continue
        section = sections[symbol['section'] - 1]
        start, size = symbol['value'], section['size'] - symbol['value']
        data = raw[section['data'] + start:section['data'] + start + size]
        relocations = []
        for index in range(section['relocationCount']):
            offset, target, kind = struct.unpack_from('<IIH', raw, section['relocations'] + index * 10)
            if start <= offset < start + size:
                relocations.append({'offsetWithinSymbol': offset - start, 'type': kind, 'symbol': symbols[target]['name'], 'addend': None})
        rows.append({'symbol': symbol['name'], 'objectSection': section['name'], 'sectionOffset': start,
            'symbolStorageBytes': size, 'symbolStorage': fingerprint(data),
            'ranges': [{'sectionOffset': start, 'endExclusive': start + size, 'kind': 'instructions', 'mode': 'x86-64', **fingerprint(data)}],
            'relocations': relocations})
    return rows


def collect(build, names):
    result = {}
    for profile in ['arm', 'windows', 'a64']:
        result[profile] = []
        for path in sorted(path for path in (build / profile).iterdir() if path.suffix in ['.o', '.obj']):
            for row in coff(path, names) if profile == 'windows' else elf(path, names):
                result[profile].append({'object': path.name, 'objectIdentity': fingerprint(path.read_bytes()), **row})
        if len(result[profile]) != len(names): raise ValueError('Compiled candidate symbol closure incomplete')
    return {'profiles': result, 'originalBytesOrMatchingCreditAdded': 0,
        'classification': 'Compiler object function sections; ARM/A64 mapping symbols separate code and literal data. Windows function COMDAT text sections have external constant data represented by relocations. These are source-compiler extents, not original denominators.'}


if __name__ == '__main__':
    import argparse
    import json
    parser = argparse.ArgumentParser()
    parser.add_argument('--build', type=Path, required=True)
    parser.add_argument('--bindings', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    names = [row['sourceSymbol'] for row in json.loads(args.bindings.read_text())['candidates']]
    result = collect(args.build, names)
    assert not args.output.exists()
    args.output.write_text(json.dumps(result, indent=2) + '\n')
