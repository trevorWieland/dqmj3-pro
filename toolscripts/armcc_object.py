"""Turn an armcc object into one section per function, keeping its relocations.

armcc 4.1 emits a translation unit as a single ``.text`` section: function
symbols carry their code size, and literal pools or alignment padding sit in the
gaps between them. The project's measurement, selection and image link all work
per function, so they need one section named ``.text.<symbol>`` per function --
that is what Clang's ``-ffunction-sections`` provides and what armcc does not.

This module rewrites an armcc ET_REL object without touching its code bytes: a
function's output section spans from its symbol address to the next function
symbol (or the end of ``.text``), so trailing literal pools stay inside the
function they belong to. Relocations are re-based into the new sections, data
sections are kept so ``ld.lld -r`` can still resolve or discard their
references, and only symbols a kept relocation uses survive. The result is the
same compiler output, addressed per function.

Nothing here decides whether compiled bytes match the original; that stays with
``objdiff_objects`` and ``image_link``.
"""

import io
import struct
from pathlib import Path

from elftools.elf.elffile import ELFFile


ELF_HEADER = struct.Struct('<16sHHIIIIIHHHHHH')
SECTION_HEADER = struct.Struct('<IIIIIIIIII')
SYMBOL = struct.Struct('<IIIBBH')
REL = struct.Struct('<II')
RELA = struct.Struct('<IIi')

ET_REL = 1
EM_ARM = 40
SHT_NULL = 0
SHT_PROGBITS = 1
SHT_SYMTAB = 2
SHT_STRTAB = 3
SHT_RELA = 4
SHT_NOBITS = 8
SHT_REL = 9
SHF_ALLOC = 2
SHF_EXECINSTR = 4
SHN_UNDEF = 0
SHN_ABS = 0xfff1
STB_LOCAL = 0
STT_NOTYPE = 0
STT_FUNC = 2
STT_SECTION = 3
STT_FILE = 4
MAPPING_CODE = '$a'

SECTION_TYPES = {'SHT_PROGBITS': SHT_PROGBITS, 'SHT_NOBITS': SHT_NOBITS}
BINDS = {'STB_LOCAL': 0, 'STB_GLOBAL': 1, 'STB_WEAK': 2, 'STB_GNU_UNIQUE': 10}
TYPES = {'STT_NOTYPE': 0, 'STT_OBJECT': 1, 'STT_FUNC': 2, 'STT_SECTION': 3,
         'STT_FILE': 4, 'STT_COMMON': 5, 'STT_TLS': 6, 'STT_ARM_TFUNC': 13}


class SplitError(ValueError):
    """The object cannot be represented as one section per function."""


def _bind(symbol):
    return BINDS.get(symbol['st_info']['bind'], 0)


def _type(symbol):
    return TYPES.get(symbol['st_info']['type'], 0)


def _parse(path):
    elf = ELFFile(io.BytesIO(Path(path).read_bytes()))
    if (elf.elfclass != 32 or not elf.little_endian or elf['e_machine'] != 'EM_ARM'
            or elf['e_type'] != 'ET_REL'):
        raise SplitError('Expected a little-endian ARM32 relocatable object: ' + str(path))
    sections = list(elf.iter_sections())
    table = elf.get_section_by_name('.symtab')
    if table is None:
        raise SplitError('Missing ELF symbol table: ' + str(path))
    return elf, sections, list(table.iter_symbols())


def _text_sections(sections):
    return [index for index, section in enumerate(sections)
            if section['sh_flags'] & SHF_ALLOC and section['sh_flags'] & SHF_EXECINSTR
            and section['sh_size']]


def _function_ranges(symbols, text_index, text_size):
    """Function symbols in address order, with the extent each one occupies.

    A function's extent runs to the next function symbol, so literal pools and
    inter-function alignment stay with the function armcc placed them after.
    armcc reports only the code size in ``st_size``; the extent is what a linker
    would place.
    """
    functions = []
    for index, symbol in enumerate(symbols):
        if (_type(symbol) == STT_FUNC and symbol['st_size']
                and symbol['st_shndx'] == text_index):
            functions.append((symbol['st_value'], index, symbol))
    functions.sort(key=lambda row: (row[0], row[1]))
    ranges = []
    for position, (start, index, symbol) in enumerate(functions):
        if start & 3:
            raise SplitError('Function %s is not four-byte aligned' % symbol.name)
        end = functions[position + 1][0] if position + 1 < len(functions) else text_size
        if end <= start or end > text_size:
            raise SplitError('Function %s has no representable extent' % symbol.name)
        if ranges and ranges[-1]['end'] > start:
            raise SplitError('Function extents overlap at %s' % symbol.name)
        ranges.append({'name': symbol.name, 'symbolIndex': index, 'start': start, 'end': end,
                       'codeSize': symbol['st_size'], 'symbol': symbol})
    return ranges


def _relocations(sections):
    grouped = {}
    for section in sections:
        if section['sh_type'] not in ('SHT_REL', 'SHT_RELA'):
            continue
        reloc_kind = SHT_RELA if section['sh_type'] == 'SHT_RELA' else SHT_REL
        for relocation in section.iter_relocations():
            grouped.setdefault(section['sh_info'], []).append({
                'offset': relocation['r_offset'], 'type': relocation['r_info_type'],
                'symbol': relocation['r_info_sym'],
                'addend': relocation['r_addend'] if reloc_kind == SHT_RELA else None,
                'kind': reloc_kind})
    return grouped


def _copy_symbol(symbol):
    return {'name': symbol.name, 'value': symbol['st_value'], 'size': symbol['st_size'],
            'info': _bind(symbol) << 4 | _type(symbol), 'other': 0,
            'section': symbol['st_shndx']}


def _layout(path):
    """Parse the object and plan every output section and symbol."""
    elf, sections, symbols = _parse(path)
    texts = _text_sections(sections)
    if len(texts) > 1:
        raise SplitError('Expected one executable section, found %d' % len(texts))
    text_index = texts[0] if texts else None
    text_size = sections[text_index]['sh_size'] if text_index is not None else 0
    ranges = _function_ranges(symbols, text_index, text_size) if text_index is not None else []
    # A switch table is inline code followed by data words, and armcc anchors it
    # with a zero-size STT_FUNC symbol (__switch) that the table relocations
    # name. Such anchors are not function extents of their own: keep them inside
    # the enclosing function with their offset rebased.
    anchors = []
    for index, symbol in enumerate(symbols):
        if (_type(symbol) == STT_FUNC and not symbol['st_size']
                and symbol['st_shndx'] == text_index):
            owner = next((item for item in ranges
                          if item['start'] <= symbol['st_value'] < item['end']), None)
            if owner is None:
                raise SplitError('Code anchor %s is outside every function' % symbol.name)
            anchors.append((index, symbol, owner))
    relocations = _relocations(sections)

    output, section_of_old, skipped = [], {}, set()
    for row in ranges:
        output.append({'name': '.text.' + row['name'], 'flags': SHF_ALLOC | SHF_EXECINSTR,
                       'type': SHT_PROGBITS, 'align': 4,
                       'data': sections[text_index].data()[row['start']:row['end']],
                       'relocations': [], 'oldSection': text_index, 'function': row})
        section_of_old[('function', row['symbolIndex'])] = len(output) - 1
    for index, section in enumerate(sections):
        if index == text_index or not section['sh_flags'] & SHF_ALLOC or not section['sh_size']:
            continue
        if section['sh_type'] not in SECTION_TYPES:
            # Unwind indexes and other note-like allocated sections are not
            # measured and are not needed to link code. Skip them whole.
            skipped.add(index)
            continue
        kind = SECTION_TYPES[section['sh_type']]
        # armcc may emit several allocated sections with one name (two
        # .constdata records in one unit). Keep their bytes separate but give
        # each a unique name so the object is readable and each is addressable.
        name = section.name
        suffix = 1
        while any(item['name'] == name for item in output):
            name = '%s.%d' % (section.name, suffix)
            suffix += 1
        output.append({'name': name, 'flags': section['sh_flags'], 'type': kind,
                       'align': section['sh_addralign'],
                       'data': None if kind == SHT_NOBITS else section.data(),
                       'relocations': [], 'oldSection': index})
        section_of_old[('section', index)] = len(output) - 1
    if text_index is not None:
        section_of_old[('section', text_index)] = None

    # Distribute relocations. A relocation outside every function extent would
    # not be carried, so refuse rather than silently dropping a reference.
    for old_index, rows in relocations.items():
        if old_index == text_index:
            for row in rows:
                owner = next((item for item in ranges
                              if item['start'] <= row['offset'] < item['end']), None)
                if owner is None:
                    raise SplitError('Relocation at 0x%x is outside every function' % row['offset'])
                target = output[section_of_old[('function', owner['symbolIndex'])]]
                target['relocations'].append(dict(row, offset=row['offset'] - owner['start']))
        elif ('section', old_index) in section_of_old:
            output[section_of_old[('section', old_index)]]['relocations'].extend(rows)
        elif old_index in skipped:
            continue
        elif sections[old_index]['sh_flags'] & SHF_ALLOC and sections[old_index]['sh_size']:
            raise SplitError('Relocation targets an allocated section that is not carried')
        # Relocations for unallocated sections (debug information) are not part
        # of the measured object and are dropped with those sections.

    referenced = {row['symbol'] for section in output for row in section['relocations']}
    entries, old_to_entry = [], {}
    section_entries = []
    for position, section in enumerate(output):
        entries.append({'name': section['name'], 'value': 0, 'size': 0,
                        'info': STB_LOCAL << 4 | STT_SECTION, 'other': 0,
                        'section': position + 1})
        section_entries.append(entries[-1])
    for old_index, symbol in enumerate(symbols):
        if _type(symbol) == STT_SECTION and isinstance(symbol['st_shndx'], int):
            # A relocation may name a section symbol instead of a file-scope
            # symbol; point it at the section symbol we just rebuilt.
            target = section_of_old.get(('section', symbol['st_shndx']))
            if target is not None:
                old_to_entry[old_index] = section_entries[target]
    for old_index, symbol in enumerate(symbols):
        if old_index == 0 or _type(symbol) in (STT_FILE, STT_SECTION):
            continue
        if symbol['st_shndx'] == text_index:
            continue  # mapping symbols and function symbols are rebuilt below
        if isinstance(symbol['st_shndx'], int) and ('section', symbol['st_shndx']) in section_of_old \
                and section_of_old[('section', symbol['st_shndx'])] is not None:
            entry = _copy_symbol(symbol)
            entry['section'] = section_of_old[('section', symbol['st_shndx'])] + 1
            entries.append(entry)
            old_to_entry[old_index] = entry
        elif symbol['st_shndx'] == 'SHN_UNDEF' and old_index in referenced:
            entry = _copy_symbol(symbol)
            entry['section'] = SHN_UNDEF
            entries.append(entry)
            old_to_entry[old_index] = entry
        elif symbol['st_shndx'] == 'SHN_ABS' and old_index in referenced:
            entry = _copy_symbol(symbol)
            entry['section'] = SHN_ABS
            entries.append(entry)
            old_to_entry[old_index] = entry
    for row in ranges:
        section_index = section_of_old[('function', row['symbolIndex'])]
        entry = _copy_symbol(row['symbol'])
        entry.update(value=0, size=row['end'] - row['start'], section=section_index + 1)
        entries.append(entry)
        old_to_entry[row['symbolIndex']] = entry
        entries.append({'name': MAPPING_CODE, 'value': 0, 'size': 0,
                        'info': STB_LOCAL << 4 | STT_NOTYPE, 'other': 0,
                        'section': section_index + 1})
    for index, symbol, owner in anchors:
        section_index = section_of_old[('function', owner['symbolIndex'])]
        entry = _copy_symbol(symbol)
        entry.update(value=symbol['st_value'] - owner['start'], size=0,
                     section=section_index + 1)
        entries.append(entry)
        old_to_entry[index] = entry
    for section in output:
        for row in section['relocations']:
            if row['symbol'] not in old_to_entry:
                symbol = symbols[row['symbol']] if row['symbol'] < len(symbols) else None
                detail = ('%s type %s section %s' % (symbol.name, symbol['st_info']['type'],
                                                     symbol['st_shndx'])) if symbol else 'null'
                raise SplitError('Relocation references a symbol that is not carried: ' + detail)
    return elf, output, entries, old_to_entry, ranges


class _Writer:
    """Emit a minimal ELF32 object: sections, symbols, REL/RELA, string tables."""

    def __init__(self):
        self.blob = bytearray(ELF_HEADER.size)
        self.sections = []

    def align(self, alignment):
        while len(self.blob) % max(alignment, 1):
            self.blob.append(0)

    def add(self, name, kind, flags, align, data, link=0, info=0, entsize=0):
        self.align(align)
        section = {'name': name, 'type': kind, 'flags': flags, 'align': align,
                   'offset': len(self.blob), 'size': len(data or b''), 'link': link,
                   'info': info, 'entsize': entsize}
        self.sections.append(section)
        if data:
            self.blob.extend(data)
        return len(self.sections) - 1


def _string_table():
    strings = bytearray(b'\0')
    offsets = {}

    def intern(text):
        if text not in offsets:
            offsets[text] = len(strings)
            strings.extend(text.encode('utf-8') + b'\0')
        return offsets[text]
    return strings, intern


def write(path, layout):
    """Write the split object and return its section/symbol/function counts."""
    elf, output, entries, old_to_entry, ranges = layout
    locals_ = [entry for entry in entries if entry['info'] >> 4 == STB_LOCAL]
    globals_ = [entry for entry in entries if entry['info'] >> 4 != STB_LOCAL]
    ordered = locals_ + globals_
    index = {id(entry): position for position, entry in enumerate(ordered)}
    strings, intern = _string_table()

    writer = _Writer()
    writer.add('', SHT_NULL, 0, 1, b'')
    section_index = {}
    for position, section in enumerate(output):
        section_index[position] = writer.add(
            section['name'], section['type'], section['flags'], section['align'],
            None if section['type'] == SHT_NOBITS else section['data'])
    payloads = []
    for position, section in enumerate(output):
        if not section['relocations']:
            continue
        kind = section['relocations'][0]['kind']
        payload = bytearray()
        for row in section['relocations']:
            symbol = (index[id(old_to_entry[row['symbol']])] + 1) << 8 | row['type']
            if kind == SHT_RELA:
                payload.extend(RELA.pack(row['offset'], symbol, row['addend']))
            else:
                payload.extend(REL.pack(row['offset'], symbol))
        payloads.append((position, kind, bytes(payload)))
    symbol_table_index = len(writer.sections)
    string_table_index = symbol_table_index + 1
    symbols_blob = bytearray(SYMBOL.pack(0, 0, 0, 0, 0, 0))
    for entry in ordered:
        symbols_blob.extend(SYMBOL.pack(intern(entry['name']), entry['value'], entry['size'],
                                        entry['info'], entry['other'], entry['section']))
    writer.add('.symtab', SHT_SYMTAB, 0, 4, bytes(symbols_blob), link=string_table_index,
               info=len(locals_) + 1, entsize=SYMBOL.size)
    writer.add('.strtab', SHT_STRTAB, 0, 1, bytes(strings))
    for position, kind, payload in payloads:
        writer.add('.rela' if kind == SHT_RELA else '.rel' + output[position]['name'],
                   kind, 0, 4, payload, link=symbol_table_index,
                   info=section_index[position], entsize=RELA.size if kind == SHT_RELA else REL.size)
    shstrtab_strings, shstrtab_intern = _string_table()
    for section in writer.sections[1:]:
        shstrtab_intern(section['name'])
    shstrtab_intern('.shstrtab')
    shstrtab_index = writer.add('.shstrtab', SHT_STRTAB, 0, 1, bytes(shstrtab_strings))
    section_headers_offset = len(writer.blob)
    writer.blob.extend(SECTION_HEADER.pack(*[0] * 10))
    for section in writer.sections[1:]:
        writer.blob.extend(SECTION_HEADER.pack(
            shstrtab_intern(section['name']), section['type'], section['flags'], 0,
            section['offset'], section['size'], section['link'], section['info'],
            section['align'], section['entsize']))
    header = ELF_HEADER.pack(b'\x7fELF\x01\x01\x01' + b'\0' * 9, ET_REL, EM_ARM, 1, 0, 0,
                             section_headers_offset, elf['e_flags'], ELF_HEADER.size, 0, 0,
                             SECTION_HEADER.size, len(writer.sections), shstrtab_index)
    writer.blob[0:ELF_HEADER.size] = header
    Path(path).write_bytes(bytes(writer.blob))
    return {'sections': len(writer.sections), 'symbols': len(ordered),
            'functions': len(ranges), 'eFlags': elf['e_flags'],
            'functionSizes': [{'name': row['name'], 'codeSize': row['codeSize'],
                               'extent': row['end'] - row['start']} for row in ranges]}


def split(path, target):
    """Rewrite the armcc object at ``path`` as per-function sections at ``target``."""
    return write(target, _layout(path))
