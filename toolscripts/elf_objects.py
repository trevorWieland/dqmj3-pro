"""Little-endian ARM relocatable objects: allocated sections and function symbols.

Both sides of the measurement are real ELF objects. A target object holds
original bytes carved out of the user's code image; a base object holds what the
pinned compiler emitted for the same source file. This module reads those
objects and nothing else, so a claim about bytes is always a claim about an ELF.

Relocation types and referenced symbols are reported per section and per
function because they decide whether a comparison of raw bytes is meaningful and
whether a function can be placed in a linked image at all.
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
    for symbol in table.iter_symbols():
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
        functions[symbol.name] = {'size': symbol['st_size'],
                                  'mode': 'thumb' if symbol['st_value'] & 1 else 'arm',
                                  'section': section.name, 'offset': offset,
                                  'data': section.data()[offset:offset + symbol['st_size']],
                                  'relocations': sections[section.name]['relocations'],
                                  'references': sections[section.name]['references']}
    return {'sections': sections, 'functions': functions}


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
