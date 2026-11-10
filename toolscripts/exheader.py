"""The ExHeader code set info: the image segments and their initialized extents.

The initialized byte counts, not the page counts, are the reporting denominator.
Page-alignment padding past an initialized extent belongs to no segment, so a
7,051,280-byte text segment inside 1,722 pages still measures 7,051,280 bytes.
"""

import struct


PAGE = 0x1000
SEGMENTS = (('text', 0x10), ('rodata', 0x20), ('data', 0x30))
NAME_BYTES = 8
FLAGS = 0x0d
BSS = 0x3c
STACK = 0x1c


def layout(exheader):
    """Return the measured layout of one ExHeader image, with code.bin offsets."""
    if len(exheader) != 2048:
        raise ValueError('An ExHeader is 2,048 bytes')
    result = {'name': exheader[:NAME_BYTES].rstrip(b'\0').decode('ascii', errors='replace'),
              'compressed': bool(exheader[FLAGS] & 1), 'segments': []}
    physical = 0
    for name, position in SEGMENTS:
        address, pages, initialized = struct.unpack_from('<III', exheader, position)
        if initialized > pages * PAGE:
            raise ValueError('Initialized %s bytes exceed the mapped page extent' % name)
        result['segments'].append({'name': name, 'address': address, 'pages': pages,
                                   'initializedBytes': initialized, 'codeBinOffset': physical})
        physical += pages * PAGE
    result['bssBytes'] = struct.unpack_from('<I', exheader, BSS)[0]
    result['stackBytes'] = struct.unpack_from('<I', exheader, STACK)[0]
    result['pageAlignedCodeBytes'] = physical
    return result


def segment(layout_value, name):
    for row in layout_value['segments']:
        if row['name'] == name:
            return row
    raise ValueError('The ExHeader declares no %s segment' % name)


def initialized_bytes(layout_value):
    return sum(row['initializedBytes'] for row in layout_value['segments']) + layout_value['bssBytes']
