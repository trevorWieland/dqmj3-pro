"""Absolute data symbols the source addresses by name.

The original game refers to some constants by address -- a binding's own name
string is the case that matters here: the binding loads a four-byte pointer to
one shared copy in rodata and never embeds the characters.  A C compiler can
only reproduce that access if the name is a symbol whose address the linker
knows; writing the address as an integer literal instead makes the compiler
constant-fold it and hoist the load, which changes both instructions and pool.

So the build defines these symbols at their original addresses, exactly as it
already places functions at the addresses the split gives them.  The map lives
in ``config/script-constants.json`` and every entry is checked against the
original image bytes before any object is built, so a wrong or stale address
fails the build rather than silently producing a different constant.

``config/data-symbols.json`` is the same mechanism for the unnamed data
addresses a synthesised pool-loading function uses as a base: ``g_008924e0`` is
the four-byte-aligned data address ``0x008924e0``.  Each entry records one
instruction-address ``site`` whose literal-pool word holds that address, and
``verify`` reads the word back from the original image.  The address is
therefore not a guess: it is the word the original function loads, named so a
compiler can emit the same relocation instead of folding a number.

This does not weaken the measurement: the symbols are data addresses, no
instruction is patched or synthesised, and a function still counts only when
the bytes the compiler emitted equal the original's.
"""

import json
from pathlib import Path


CONFIG = 'config/script-constants.json'
DATA_CONFIG = 'config/data-symbols.json'


def _load_rows(path, table):
    if not path.is_file():
        return
    document = json.loads(path.read_text(encoding='utf-8'))
    if document.get('schemaVersion') != 1:
        raise ValueError('Unsupported absolute-symbol schema in ' + path.name)
    for row in document['symbols']:
        name = row['name']
        if not name or name in table:
            raise ValueError('Absolute symbol name is empty or duplicated: ' + name)
        address = int(row['address'], 16)
        if row.get('text') is None and address % 4:
            raise ValueError('%s: data address 0x%08x is not four-byte aligned'
                             % (name, address))
        table[name] = {'name': name, 'address': address,
                       'text': row.get('text'),
                       'site': int(row['site'], 16) if row.get('site') else None}


def load(root):
    """The declared constants: name, image address, and the bytes or site to check."""
    table = {}
    _load_rows(Path(root) / CONFIG, table)
    _load_rows(Path(root) / DATA_CONFIG, table)
    return table


def verify(constants, image, text):
    """Check every constant against the original code image.

    A string constant is checked by reading its characters at the declared
    address.  A data symbol is checked by reading the literal-pool word at the
    recorded site: the word must be the symbol's own address, which is what the
    original function loaded.
    """
    origin = text['codeBinOffset'] - text['address']
    for constant in constants.values():
        if constant['text'] is not None:
            expected = constant['text'].encode('utf-8') + b'\x00'
            offset = origin + constant['address']
            found = image[offset:offset + len(expected)]
            if found != expected:
                raise ValueError('%s: 0x%08x does not hold %r in the original image'
                                 % (constant['name'], constant['address'], constant['text']))
            continue
        site = constant['site']
        if site is None:
            raise ValueError('%s: a data symbol needs a literal-pool site' % constant['name'])
        offset = origin + site
        found = int.from_bytes(image[offset:offset + 4], 'little')
        if found != constant['address']:
            raise ValueError('%s: pool site 0x%08x holds 0x%08x, not 0x%08x'
                             % (constant['name'], site, found, constant['address']))


def definitions(constants):
    """Linker-script definitions: every symbol at its original address."""
    return [(constant['name'], constant['address'])
            for constant in sorted(constants.values(), key=lambda row: row['name'])]
