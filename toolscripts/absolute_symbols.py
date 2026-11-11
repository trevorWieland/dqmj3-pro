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

This does not weaken the measurement: the symbols are data addresses, no
instruction is patched or synthesised, and a function still counts only when
the bytes the compiler emitted equal the original's.
"""

import json
from pathlib import Path


CONFIG = 'config/script-constants.json'


def load(root):
    """The declared constants: name, image address and the bytes to find there."""
    document = json.loads((Path(root) / CONFIG).read_text(encoding='utf-8'))
    if document.get('schemaVersion') != 1:
        raise ValueError('Unsupported absolute-symbol schema')
    table = {}
    for row in document['symbols']:
        name = row['name']
        if not name or name in table:
            raise ValueError('Absolute symbol name is empty or duplicated: ' + name)
        address = int(row['address'], 16)
        table[name] = {'name': name, 'address': address, 'text': row['text']}
    return table


def verify(constants, image, text):
    """Check every constant's declared text against the original code image."""
    origin = text['codeBinOffset'] - text['address']
    for constant in constants.values():
        expected = constant['text'].encode('utf-8') + b'\x00'
        offset = origin + constant['address']
        found = image[offset:offset + len(expected)]
        if found != expected:
            raise ValueError('%s: 0x%08x does not hold %r in the original image'
                             % (constant['name'], constant['address'], constant['text']))


def definitions(constants):
    """Linker-script definitions: every symbol at its original address."""
    return [(constant['name'], constant['address'])
            for constant in sorted(constants.values(), key=lambda row: row['name'])]
