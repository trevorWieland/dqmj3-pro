"""Translation-unit data: the address a unit's constant tables had in the image.

A function is not only its instructions. A function that loads a table the
compiler placed in a different section -- zlib's ``configuration_table``, the
CRC tables, the fixed-code trees -- cannot be placed by its code alone: the
literal-pool word that names the table is a relocation, and until the table has
the address it had in the original image that word cannot equal the original
word. This module proves that address from the image itself instead of assuming
it.

**Where the address comes from.** armcc leaves every reference to the table as
an ``R_ARM_ABS32`` relocation whose addend is the word in the object. In the
original image the same word holds the address the linker resolved. The
difference is the section address::

    section address = original word - object addend - symbol value

The same rule applies one level up: a descriptor in ``.data`` that points at a
table in ``.constdata`` is itself referenced by a function, so the descriptor's
address proves the table's. Every observation of a section must agree; a
disagreement is an error, never a vote.

**What is not placed.** A section referenced through a relocation other than
``R_ARM_ABS32`` has no word to read and is not guessed at. A section that no
observation proves is not placed. A function that loads either is reported
unplaceable rather than linked against an address the build invented, which is
the same rule the split already applies to functions.

**What is proven afterwards.** The placed image still has to hold the section
at the proven address with the proven size; the image link compares those bytes
with the original. Placing a table and then not comparing it would make the
image-identity claim weaker, not stronger.

Nothing here rewrites an instruction or a byte of the image.
"""


ABS32 = 2
TARGET1 = 38
WORD = 4


def image_offset(layout, address, size):
    """The code image offset of an initialized range, or ValueError.

    The image is the three initialized segments concatenated at page extents; a
    range that crosses a segment boundary is not one object and is refused.
    """
    for segment in layout['segments']:
        if not segment['initializedBytes']:
            continue
        if (segment['address'] <= address
                and address + size <= segment['address'] + segment['initializedBytes']):
            return segment['codeBinOffset'] + address - segment['address']
    raise ValueError('0x%08x is not inside one initialized segment' % address)


def _word(data, offset, what):
    if offset < 0 or offset + WORD > len(data):
        raise ValueError('%s is outside its section at offset %d' % (what, offset))
    return int.from_bytes(data[offset:offset + WORD], 'little')


def _segment_range(layout, name):
    for segment in layout['segments']:
        if segment['name'] == name:
            return segment['address'], segment['address'] + segment['initializedBytes']
    raise ValueError('The ExHeader declares no %s segment' % name)


def _data_range(layout, section):
    """The address range a non-text section of this kind may occupy."""
    if section['kind'] == 'bss':
        data = [row for row in layout['segments'] if row['name'] == 'data'][0]
        start = data['address'] + data['initializedBytes']
        return start, start + layout['bssBytes']
    # armcc puts translation-unit const data in .constdata, which the original
    # link placed in rodata; writable unit data lands in data.
    return _segment_range(layout, 'rodata')[0], _segment_range(layout, 'data')[1]


def _accepted(section, address, layout):
    """Check one proven address against the segment, alignment and extent."""
    size = section['size']
    if size <= 0:
        raise ValueError('A placed data section must have bytes')
    if address % max(section.get('align') or 1, 1):
        raise ValueError('Data section would be placed at an unaligned 0x%08x' % address)
    start, end = _data_range(layout, section)
    if address < start or address + size > end:
        raise ValueError('Data section 0x%08x..0x%08x escapes its segment'
                         % (address, address + size))


def observations(read, section_name, base_address, layout, image):
    """The sections this one names, and the address each approved reference proves.

    Only an ABS32 (or the equivalent TARGET1) relocation has a word in the
    image to read. A relocation of another kind that names a data section is
    reported as unprovable rather than interpreted.
    """
    section = read['sections'][section_name]
    proven, unprovable = {}, set()
    for row in section['rows']:
        target = row.get('target')
        if target is None or target not in read['sections']:
            continue
        target_section = read['sections'][target]
        if target_section['kind'] == 'code':
            continue
        if row['type'] not in (ABS32, TARGET1) or target_section['kind'] != 'data':
            unprovable.add(target)
            continue
        if base_address is None:
            continue
        offset = image_offset(layout, base_address + row['offset'], WORD)
        original = _word(image, offset, 'the original image')
        if row.get('rela'):
            addend = row['addend']
        else:
            addend = _word(section['data'] or b'', row['offset'], section_name)
        proven.setdefault(target, set()).add(original - addend - row['value'])
    return proven, unprovable


def reachable(read, section_name):
    """The data sections this section needs, transitively."""
    sections = read['sections']
    needed, seen = set(), {section_name}
    stack = [section_name]
    while stack:
        current = stack.pop()
        for row in sections[current]['rows']:
            target = row.get('target')
            if target is None or target not in sections:
                continue
            if sections[target]['kind'] == 'code':
                continue
            if target not in needed:
                needed.add(target)
                stack.append(target)
    return needed


def _output_name(label, index, section):
    """A section name that is unique across the whole link.

    Two units may both emit a ``.constdata``; the placement link has one
    namespace, so the unit's label and the section's position in its plan are
    part of the name. The prefix is not matched by the linker script's discard
    patterns, so an unplanned section can never be placed by accident.
    """
    safe = ''.join(character if character.isalnum() or character in '._-' else '_'
                   for character in label)
    return '.unitdata.%s.%d.%s' % (safe, index, section.lstrip('.'))


def plan(read, measured, functions, layout, image, label):
    """Prove the address of every table the measured functions load.

    ``read`` is ``elf_objects.read`` of the unit's split object, ``measured``
    are the function names this unit may place, ``functions`` is the split and
    ``label`` names the unit in the output section names. The result records,
    per kept section, the proven address, size and output name; per function,
    the sections it needs; and per unplaceable function, the sections that
    could not be proven.
    """
    sections = read['sections']
    proven, unprovable = {}, set()
    for name in measured:
        section_name = '.text.' + name
        if section_name not in sections:
            raise ValueError('The unit object has no section for ' + name)
        symbol = functions.by_name[name]
        offset = read['functions'][name]['offset'] if name in read['functions'] else 0
        found, refused = observations(read, section_name, symbol.address - offset,
                                      layout, image)
        for target, values in found.items():
            proven.setdefault(target, set()).update(values)
        unprovable.update(refused)
    # A section is proven only when every observation agrees; then its own
    # relocations prove the next level, until nothing new is learned.
    known = {}
    while True:
        learned = False
        for name in sorted(proven):
            values = proven[name]
            if len(values) > 1:
                raise ValueError('Two references disagree about %s: %s'
                                 % (name, ', '.join('0x%08x' % value for value in sorted(values))))
            if not values:
                continue
            address = next(iter(values))
            if name in known:
                if known[name] != address:
                    raise ValueError('A later reference moves data section ' + name)
                continue
            _accepted(sections[name], address, layout)
            known[name] = address
            learned = True
            found, refused = observations(read, name, address, layout, image)
            for target, values in found.items():
                proven.setdefault(target, set()).update(values)
            unprovable.update(refused)
        if not learned:
            break
    ordered = sorted(known.items())
    for (first, address), (second, other) in zip(ordered, ordered[1:]):
        if address + sections[first]['size'] > other:
            raise ValueError('Two data sections would overlap at 0x%08x' % other)
    needed = {name: reachable(read, '.text.' + name) for name in measured}
    hopeless = {name: sorted(section for section in needed[name]
                             if section in unprovable or section not in known)
                for name in measured}
    keep = set()
    for name in measured:
        if not hopeless[name]:
            keep.update(needed[name])
    records = {}
    for index, name in enumerate(sorted(keep)):
        records[name] = {'address': known[name], 'size': sections[name]['size'],
                         'kind': sections[name]['kind'],
                         'align': sections[name].get('align') or 1,
                         'name': _output_name(label, index, name)}
    return {'sections': records,
            'keep': sorted(keep),
            'needed': {name: sorted(needed[name]) for name in measured},
            'hopeless': {name: values for name, values in hopeless.items() if values}}


def check_placed(placement, planned):
    """Refuse a link that did not put every planned section where it was proven.

    ``placement`` is ``elf_objects.placed_sections`` of the linked image and
    ``planned`` the planned records keyed by their output name. Byte equality
    is the image link's job; this only proves the section is present, at its
    address and at its size.
    """
    for name, expected in sorted(planned.items()):
        found = placement.get(name)
        if found is None:
            raise ValueError('The placement link did not place data section ' + name)
        if found['size'] != expected['size']:
            raise ValueError('Placing data section %s changed its size' % name)
        if found['address'] != expected['address']:
            raise ValueError('The placement link moved data section ' + name)


def check_record(record, layout):
    """Check a recorded placement against the ExHeader layout."""
    _accepted({'size': record['size'], 'kind': record['kind'],
               'align': record.get('align') or 1}, record['address'], layout)
