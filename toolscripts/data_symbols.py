"""Data symbols whose name carries the address they must have.

The decompiler names an untyped data location ``DAT_<address>``: the suffix is
the address of the object in the original image. Reconstructed source that came
from that corpus therefore declares the symbol and refers to it by name, and the
build has to give the name that address, exactly as it already gives every split
function the address the split records.

Two things make this sound rather than a shortcut:

* the address comes from the name the decompiler emitted, not from a fitted
  byte, and it is only accepted when it falls inside a segment the ExHeader
  declares as initialized (text, rodata or data) or inside BSS;
* a function is still compared byte for byte. If the address were wrong, the
  literal-pool word the compiler emits for the reference would differ from the
  original word, so the function would fail to match. A wrong address can never
  create credit; it can only lose it.

Nothing here patches an instruction or writes a byte of the image.
"""

import re

NAME = re.compile(r'^_?DAT_([0-9a-f]{8})$')


def address_of(name):
    """The image address a ``DAT_<address>`` name states, or None."""
    match = NAME.match(name)
    return int(match.group(1), 16) if match else None


def extents(layout):
    """Every address range a declared symbol may name."""
    ranges = [(segment['address'], segment['address'] + segment['initializedBytes'])
              for segment in layout['segments'] if segment['initializedBytes']]
    data = [segment for segment in layout['segments'] if segment['name'] == 'data'][0]
    if layout['bssBytes']:
        ranges.append((data['address'] + data['initializedBytes'],
                       data['address'] + data['initializedBytes'] + layout['bssBytes']))
    return ranges


def inside(address, ranges):
    return any(start <= address < end for start, end in ranges)


def undefined(paths):
    """Every undefined symbol name in these relocatable objects."""
    from elftools.elf.elffile import ELFFile
    from pathlib import Path

    names = set()
    for path in paths:
        with Path(path).open('rb') as stream:
            elf = ELFFile(stream)
            table = elf.get_section_by_name('.symtab')
            if table is None:
                continue
            for symbol in table.iter_symbols():
                if symbol.name and symbol['st_shndx'] == 'SHN_UNDEF':
                    names.add(symbol.name)
    return names


def definitions(names, layout):
    """Linker-script definitions for the names whose address the image can give."""
    ranges = extents(layout)
    resolved = []
    for name in sorted(names):
        address = address_of(name)
        if address is not None and inside(address, ranges):
            resolved.append((name, address))
    return resolved
