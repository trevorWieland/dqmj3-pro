"""Turn an armcc object into one section per function, keeping its relocations.

armcc 4.1 has two object layouts this module must accept:

* by default it emits a translation unit as a single ``.text`` section: function
  symbols carry their code size, and literal pools or alignment padding sit in
  the gaps between them;
* with ``--split_sections`` it emits one ``i.<symbol>`` section per function,
  with that function's literal pool already in its own section.

The project's measurement, selection and image link all work per function, so
both layouts are rewritten to one section named ``.text.<symbol>`` per function
-- that is what Clang's ``-ffunction-sections`` provides and what armcc does not.
The single-``.text`` path still works for a unit that does not request the flag.
This module rewrites an armcc ET_REL object without touching its code bytes: in
the single-layout case a function's output section spans from its symbol address
to the next function symbol (or the end of ``.text``); in the split-layout case
it is exactly the ``i.<symbol>`` section. Either way a trailing literal pool or
the inline data armcc emits for a function stays inside the section of the
function it belongs to. The symbol keeps the *code* size, not the section extent:
armcc marks the first byte after the instructions with a ``$d`` mapping symbol,
and the bytes from there to the end of the section are data the code addresses --
a literal pool, a switch table, or the string literals armcc embeds for one
function. The split layout is read with the same mapping-symbol rule, within the
function's own section.

The symbol keeps the code size so a pooled function is measured as
instructions plus its own data, not as one oversized extent.

Relocations are re-based into the new sections, data sections are kept so
``ld.lld -r`` can still resolve or discard their references, and only symbols a
kept relocation uses survive. The result is the same compiler output, addressed
per function.

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
MAPPING_DATA = '$d'

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


def _data_marks(symbols, text_index):
    """Instruction addresses where armcc switches to data inside ``.text``.

    armcc anchors the transition with a zero-size ``$d`` mapping symbol, the ARM
    ELF convention for "the bytes from here are not instructions". A function's
    code ends at the first such mark inside its extent.
    """
    return sorted({symbol['st_value'] for symbol in symbols
                   if _type(symbol) == STT_NOTYPE and symbol.name == MAPPING_DATA
                   and symbol['st_shndx'] == text_index and not symbol['st_size']})


def _function_ranges(symbols, text_index, text_size):
    """Function symbols in address order, with the extent and code size each one has.

    A function's extent runs to the next function symbol, so literal pools,
    inline string literals and inter-function alignment stay with the function
    armcc placed them after. The code size runs only to the first ``$d`` mapping
    symbol inside that extent, so a pool is measured as data rather than being
    mistaken for instructions.
    """
    functions = []
    for index, symbol in enumerate(symbols):
        if (_type(symbol) == STT_FUNC and symbol['st_size']
                and symbol['st_shndx'] == text_index):
            functions.append((symbol['st_value'], index, symbol))
    functions.sort(key=lambda row: (row[0], row[1]))
    marks = _data_marks(symbols, text_index)
    ranges = []
    for position, (start, index, symbol) in enumerate(functions):
        if start & 3:
            raise SplitError('Function %s is not four-byte aligned' % symbol.name)
        end = functions[position + 1][0] if position + 1 < len(functions) else text_size
        if end <= start or end > text_size:
            raise SplitError('Function %s has no representable extent' % symbol.name)
        if ranges and ranges[-1]['end'] > start:
            raise SplitError('Function extents overlap at %s' % symbol.name)
        first_data = next((mark for mark in marks if start < mark < end), end)
        ranges.append({'name': symbol.name, 'symbolIndex': index, 'start': start, 'end': end,
                       'codeSize': first_data - start, 'symbol': symbol})
    return ranges


def _split_ranges(sections, symbols, texts):
    """Function ranges for armcc ``--split_sections`` output.

    Each executable section is named ``i.<symbol>`` and holds exactly that
    function at offset zero, followed by the function's literal pool when it has
    one. The section extent is therefore the function's extent, and the ``$d``
    mapping symbol inside the section marks where its instructions end.
    """
    ranges, by_section, covered = [], {}, set()
    for text_index in texts:
        section = sections[text_index]
        name = section.name
        if not name.startswith('i.') or len(name) == 2:
            raise SplitError('Unexpected executable section in a split object: ' + name)
        expected = name[2:]
        functions = [(index, symbol) for index, symbol in enumerate(symbols)
                     if _type(symbol) == STT_FUNC and symbol['st_size']
                     and symbol['st_shndx'] == text_index]
        if len(functions) != 1:
            raise SplitError('Section %s must hold exactly one function, found %d'
                             % (name, len(functions)))
        index, symbol = functions[0]
        if symbol.name != expected:
            raise SplitError('Section %s holds function %s' % (name, symbol.name))
        start = symbol['st_value'] & ~1
        if start != 0:
            raise SplitError('Function %s does not start its own section' % symbol.name)
        end = section['sh_size']
        if not end:
            raise SplitError('Function %s has an empty section' % symbol.name)
        marks = sorted({mark['st_value'] for mark in symbols
                        if _type(mark) == STT_NOTYPE and mark.name == MAPPING_DATA
                        and mark['st_shndx'] == text_index and not mark['st_size']})
        first_data = next((mark for mark in marks if 0 < mark < end), end)
        if first_data < end:
            code_size = first_data - start
        else:
            # No $d mark: the function's symbol size is its code size, and any
            # remaining section bytes are alignment padding, not code.
            code_size = symbol['st_size']
        if code_size <= start or code_size > end:
            raise SplitError('Function %s has no representable code extent' % symbol.name)
        row = {'name': symbol.name, 'symbolIndex': index, 'start': start, 'end': end,
               'codeSize': code_size, 'symbol': symbol, 'oldSection': text_index}
        ranges.append(row)
        by_section[text_index] = row
        covered.add(index)
    for index, symbol in enumerate(symbols):
        if (_type(symbol) == STT_FUNC and symbol['st_size'] and isinstance(symbol['st_shndx'], int)
                and index not in covered):
            raise SplitError('Function %s is not in an executable section' % symbol.name)
    return ranges, by_section


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
    split_layout = bool(texts) and sections[texts[0]].name.startswith('i.')
    if split_layout and len(texts) != sum(1 for index in texts
                                          if sections[index].name.startswith('i.')):
        raise SplitError('Executable sections mix i.<symbol> and non-split names')
    if not split_layout and len(texts) > 1:
        raise SplitError('Expected one executable section, found %d' % len(texts))
    text_index = None if split_layout else (texts[0] if texts else None)
    text_size = sections[text_index]['sh_size'] if text_index is not None else 0
    if split_layout:
        ranges, by_section = _split_ranges(sections, symbols, texts)
    else:
        ranges = _function_ranges(symbols, text_index, text_size) if text_index is not None else []
        by_section = {}
    function_sections = set(texts) if split_layout else ({text_index} if text_index is not None else set())

    # A switch table is inline code followed by data words, and armcc anchors it
    # with a zero-size STT_FUNC symbol (__switch) that the table relocations
    # name. Such anchors are not function extents of their own: keep them inside
    # the enclosing function with their offset rebased.
    anchors = []
    for index, symbol in enumerate(symbols):
        if _type(symbol) == STT_FUNC and not symbol['st_size'] \
                and symbol['st_shndx'] in function_sections:
            if split_layout:
                owner = by_section.get(symbol['st_shndx'])
            else:
                owner = next((item for item in ranges
                              if item['start'] <= symbol['st_value'] < item['end']), None)
            if owner is None:
                raise SplitError('Code anchor %s is outside every function' % symbol.name)
            anchors.append((index, symbol, owner))
    relocations = _relocations(sections)

    output, section_of_old, skipped = [], {}, set()
    for row in ranges:
        old = row.get('oldSection', text_index)
        output.append({'name': '.text.' + row['name'], 'flags': SHF_ALLOC | SHF_EXECINSTR,
                       'type': SHT_PROGBITS, 'align': 4,
                       'data': sections[old].data()[row['start']:row['end']],
                       'relocations': [], 'oldSection': old, 'function': row})
        section_of_old[('function', row['symbolIndex'])] = len(output) - 1
    for index, section in enumerate(sections):
        if index in function_sections or not section['sh_flags'] & SHF_ALLOC or not section['sh_size']:
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
    # A relocation may name the section itself. In the split layout each
    # i.<symbol> section symbol now names the rebuilt .text.<symbol> section; in
    # the single-.text layout the per-function sections replace it, so there is
    # no one section to point at.
    for index in function_sections:
        section_of_old[('section', index)] = None
    if split_layout:
        for index, row in by_section.items():
            section_of_old[('section', index)] = section_of_old[('function', row['symbolIndex'])]

    # Distribute relocations. A relocation outside every function extent would
    # not be carried, so refuse rather than silently dropping a reference.
    for old_index, rows in relocations.items():
        if old_index in by_section:
            # A split section is one function: its relocations are already
            # relative to the section start.
            row = by_section[old_index]
            target = output[section_of_old[('function', row['symbolIndex'])]]
            target['relocations'].extend(dict(item) for item in rows)
        elif old_index == text_index:
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
        if symbol['st_shndx'] in function_sections:
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
        entry.update(value=0, size=row['codeSize'], section=section_index + 1)
        entries.append(entry)
        old_to_entry[row['symbolIndex']] = entry
        entries.append({'name': MAPPING_CODE, 'value': 0, 'size': 0,
                        'info': STB_LOCAL << 4 | STT_NOTYPE, 'other': 0,
                        'section': section_index + 1})
        if row['codeSize'] < row['end'] - row['start']:
            # Keep the data boundary visible in the rebuilt object: the bytes
            # after the instructions are the function's own data, not code.
            entries.append({'name': MAPPING_DATA, 'value': row['codeSize'], 'size': 0,
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
