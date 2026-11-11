"""Little-endian ARM relocatable objects: allocated sections and function symbols.

Both sides of the measurement are real ELF objects. A target object holds
original bytes carved out of the user's code image; a base object holds what the
pinned compiler emitted for the same source file, placed by the linker at the
original addresses. This module reads those objects and nothing else, so a claim
about bytes is always a claim about an ELF.

Relocation types and referenced symbols are reported per section and per
function because they decide whether a comparison of raw bytes is meaningful and
whether a function can be placed in a linked image at all.

A function symbol covers its instructions. The bytes a compiler places after
those instructions -- a literal pool, a switch table, embedded string literals --
are the section's tail, reported separately so a reader can compare code with
code and the function's own data as data.
"""

import io
from pathlib import Path

from elftools.elf.elffile import ELFFile


ALLOCATED = 2
EXECUTABLE = 4
RELOCATION_TYPES = ('SHT_REL', 'SHT_RELA')


def read(path):
    """Return the allocated sections and the function symbols of an ARM object."""
    elf = ELFFile(io.BytesIO(Path(path).read_bytes()))
    if elf.elfclass != 32 or not elf.little_endian or elf['e_machine'] != 'EM_ARM' or elf['e_type'] != 'ET_REL':
        raise ValueError('Expected a little-endian ARM32 relocatable object: ' + str(path))
    sections = {}
    for index, section in enumerate(elf.iter_sections()):
        if not section['sh_flags'] & ALLOCATED or not section['sh_size']:
            continue
        if section.name in sections:
            raise ValueError('Duplicate allocated section name in ' + str(path))
        code = bool(section['sh_flags'] & EXECUTABLE)
        kind = 'code' if code else 'bss' if section['sh_type'] == 'SHT_NOBITS' else 'data'
        sections[section.name] = {'size': section['sh_size'], 'kind': kind, 'index': index,
                                  'relocations': {}, 'references': set(),
                                  'data': None if kind == 'bss' else section.data()}
    apply_relocations(elf, sections)
    table = elf.get_section_by_name('.symtab')
    if table is None:
        raise ValueError('Missing ELF symbol table: ' + str(path))
    functions = {}
    defined = set()
    for symbol in table.iter_symbols():
        if not symbol.name or not isinstance(symbol['st_shndx'], int):
            continue
        home = elf.get_section(symbol['st_shndx'])
        if home is not None and home['sh_flags'] & ALLOCATED:
            # Every name this object gives an address to, including the
            # zero-size mapping and switch anchors a relocation may name.
            defined.add(symbol.name)
        if symbol['st_info']['type'] != 'STT_FUNC' or not symbol['st_size']:
            continue
        if not isinstance(symbol['st_shndx'], int):
            raise ValueError('Function symbol is not section-defined: ' + symbol.name)
        section = elf.get_section(symbol['st_shndx'])
        if not section['sh_flags'] & EXECUTABLE:
            raise ValueError('Function symbol is outside an executable section: ' + symbol.name)
        offset = (symbol['st_value'] & ~1) - section['sh_addr']
        if offset < 0 or offset + symbol['st_size'] > section['sh_size']:
            raise ValueError('Function symbol exceeds its section: ' + symbol.name)
        if symbol.name in functions:
            raise ValueError('Duplicate function symbol: ' + symbol.name)
        extent = section['sh_size'] - section['sh_addr'] - offset
        functions[symbol.name] = {'size': symbol['st_size'],
                                  'mode': 'thumb' if symbol['st_value'] & 1 else 'arm',
                                  'section': section.name, 'offset': offset,
                                  'extent': extent,
                                  'data': section.data()[offset:offset + symbol['st_size']],
                                  'tail': section.data()[offset + symbol['st_size']:offset + extent],
                                  'relocations': sections[section.name]['relocations'],
                                  'references': sections[section.name]['references']}
    return {'sections': sections, 'functions': functions, 'defined': defined}


def placed_sections(path):
    """The allocated sections of a linked image, keyed by name.

    A placement link writes each measured function at the address the split gives
    it, so its sections are the linker's own bytes for those functions. The file
    offset is reported with the bytes because the measurement carves the image
    with ``.incbin`` rather than rewriting sections by hand.
    """
    elf = ELFFile(io.BytesIO(Path(path).read_bytes()))
    if elf.elfclass != 32 or not elf.little_endian or elf['e_machine'] != 'EM_ARM':
        raise ValueError('Expected a little-endian ARM32 image: ' + str(path))
    result = {}
    for section in elf.iter_sections():
        if not section['sh_flags'] & ALLOCATED or not section['sh_size']:
            continue
        if section['sh_type'] == 'SHT_NOBITS':
            continue
        result[section.name] = {'address': section['sh_addr'], 'size': section['sh_size'],
                                'offset': section['sh_offset'], 'data': section.data()}
    table = elf.get_section_by_name('.symtab')
    symbols = {}
    if table is not None:
        for symbol in table.iter_symbols():
            if symbol['st_info']['type'] == 'STT_FUNC' and symbol['st_size']:
                symbols[symbol.name] = {'address': symbol['st_value'] & ~1,
                                        'size': symbol['st_size'],
                                        'mode': 'thumb' if symbol['st_value'] & 1 else 'arm'}
    return {'sections': result, 'functions': symbols}


def apply_relocations(elf, sections):
    """Record, once per section, the relocation types and referenced symbol names."""
    table = elf.get_section_by_name('.symtab')
    by_index = {section['index']: section for section in sections.values()}
    for candidate in elf.iter_sections():
        if candidate['sh_type'] not in RELOCATION_TYPES:
            continue
        target = by_index.get(candidate['sh_info'])
        if target is None:
            continue
        for relocation in candidate.iter_relocations():
            kind = relocation['r_info_type']
            target['relocations'][kind] = target['relocations'].get(kind, 0) + 1
            if table is None:
                continue
            symbol = table.get_symbol(relocation['r_info_sym'])
            if symbol.name and symbol['st_info']['type'] != 'STT_SECTION':
                target['references'].add(symbol.name)
