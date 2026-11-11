"""Write canonical C for classified shapes, grouped by family.

The emitter is the only place that spells C. It receives shapes that the
classifier proved from complete instruction extents and writes one file per
family, sharded so no file approaches the project's line limit. A shape's body
is a list of statements in the order the original instructions execute them, so
the emitted C keeps the original's store order instead of sorting it.

The files claim nothing on their own: the oracle compiles them and keeps only
the functions whose bytes equal the original. Every file says so in place.
"""

from pathlib import Path

COMPONENT = 'src/native/synth001'
TYPES_HEADER = 'small_types.h'
SHARD_LINES = 380

FAMILIES = {
    'zero_store_run': {
        'file': 'zero_store_runs',
        'title': 'Record field zeroing runs',
        'document': (
            'Each function below sets a run of record fields to zero. The\n'
            ' classifier proved that shape from the function\'s complete original\n'
            ' instruction extent: one constant materialised by a move, then stores\n'
            ' of that register into the record at fixed offsets. The offsets and\n'
            ' widths below come from those instructions, including the mixed\n'
            ' word/byte runs. Field order follows the original instruction order,\n'
            ' because store order is part of the bytes.'),
    },
    'constant_store_run': {
        'file': 'constant_store_runs',
        'title': 'Record field constant stores',
        'document': (
            'Each function below writes one constant into a run of record fields.'),
    },
    'constant_return': {
        'file': 'constant_returns',
        'title': 'Constant returns',
        'document': (
            'Each function below returns one constant and reads no memory. The\n'
            ' argument register is unused, so the signature declares no parameter:\n'
            ' the original instructions return before any argument is read.'),
    },
    'field_getter': {
        'file': 'field_getters',
        'title': 'Single-field getters',
        'document': (
            'Each function below reads one field from a caller-supplied record and\n'
            ' returns it. The offset, access width and sign extension are the ones\n'
            ' the original instruction encodes (word, halfword, byte, signed or\n'
            ' unsigned). The return type is the 32-bit value the ABI carries home.'),
    },
    'field_setter': {
        'file': 'field_setters',
        'title': 'Single-field setters',
        'document': (
            'Each function below writes its second argument into one record field.\n'
            ' The store width is the width the original instruction uses, so a\n'
            ' halfword or byte field truncates the argument.'),
    },
    'field_copy': {
        'file': 'field_copies',
        'title': 'Record field copies',
        'document': (
            'Each function below copies one 32-bit record field onto another field\n'
            ' of the same record.'),
    },
    'pointer_getter': {
        'file': 'pointer_field_reads',
        'title': 'Reads through a pointer held in the record',
        'document': (
            'Each function below loads a pointer from the record, adds a fixed\n'
            ' subobject offset and reads one field there. Both offsets are the ones\n'
            ' the original load instructions encode.'),
    },
    'pointer_offset': {
        'file': 'subobject_addresses',
        'title': 'Addresses of subobjects of a pointed-to record',
        'document': (
            'Each function below returns a pointer field with a fixed subobject\n'
            ' offset added, without reading through it.'),
    },
    'base_plus_field': {
        'file': 'record_advance',
        'title': 'Record addresses advanced by a field',
        'document': (
            'Each function below returns the record address advanced by a 32-bit\n'
            ' field, the shape of a variable-length record walk.'),
    },
    'pair_setter': {
        'file': 'pair_setters',
        'title': 'Adjacent two-word setters',
        'document': (
            'Each function below stores its second and third arguments into two\n'
            ' adjacent words of the record. The original writes them with one\n'
            ' store-multiple instruction; the offsets below are the base the\n'
            ' original advances to.'),
    },
    'pair_copy': {
        'file': 'word_pair_copies',
        'title': 'Word copies between two caller pointers',
        'document': (
            'Each function below copies the first words of its source argument into\n'
            ' its destination argument, the bounded copy the original performs with\n'
            ' one load-multiple and one store-multiple.'),
    },
    'store_through_pointer': {
        'file': 'pointer_field_writes',
        'title': 'Writes through a pointer held in the record',
        'document': (
            'Each function below loads a pointer from the record and stores a\n'
            ' constant into its subobject.'),
    },
}

FAMILY_ORDER = list(FAMILIES)


def _add(family, file, title, document):
    FAMILIES[family] = {'file': file, 'title': title, 'document': document}
    FAMILY_ORDER.append(family)


_add('empty_function', 'empty_functions', 'Empty functions',
     'Each function below does nothing. The original body is a single return,\n'
     ' so the source body is empty and the compiler emits that same return.')
_add('indexed_getter', 'indexed_getters', 'Indexed field getters',
     'Each function below indexes into the record and reads a field. The stride\n'
     ' and the field offset are the arithmetic the original instructions perform:\n'
     ' the multiplier comes from the shift the compiler chose, and the constant\n'
     ' from the displacement. Nothing here assumes a table type; the emitted\n'
     ' expression is the address arithmetic the bytes encode.')
_add('indexed_address', 'indexed_addresses', 'Indexed record addresses',
     'Each function below returns a record address advanced by an index and a\n'
     ' constant, without reading through it.')
_add('pointer_address', 'pointer_addresses', 'Addresses derived from a pointed-to record',
     'Each function below follows a pointer held in the record and returns an\n'
     ' address inside the pointee, optionally indexed and advanced by a constant.')
_add('record_address', 'record_addresses', 'Record addresses advanced by a constant',
     'Each function below returns the record address advanced by a constant.')
_add('indexed_store', 'indexed_stores', 'Indexed field stores',
     'Each function below writes through an indexed record address. The stride,\n'
     ' the field offset and the written expression are the ones the original\n'
     ' instructions compute.')
_add('pointer_store', 'pointer_stores', 'Stores through a pointed-to record',
     'Each function below follows the pointer in the record and writes one\n'
     ' expression into the pointee.')
_add('field_increment', 'field_increments', 'Record field increments',
     'Each function below adds a constant to one 32-bit record field in place.')
_add('conditional_field_store', 'conditional_stores', 'Field stores guarded by a comparison',
     'Each function below reads one field, compares it with a literal and stores\n'
     ' the read value into another field only when they are equal. The comparison\n'
     ' is the original conditional store instruction; the read value is stored,\n'
     ' not the argument.')
_add('field_equality', 'field_equalities', 'Field equality tests',
     'Each function below compares one 32-bit record field with its argument and\n'
     ' returns 1 or 0. The original computes both arms with conditional moves.')


def _signature(shape):
    parameters = ', '.join('%s %s' % (kind, name) for _, kind, name in shape.params) or 'void'
    return '%s %s(%s)' % (shape.returns, shape.name, parameters)


def render_function(shape):
    """One function as C lines: one line when short, a block when long."""
    head = _signature(shape)
    if not shape.body:
        return ['%s { }' % head]
    body = ' '.join(shape.body)
    if len(shape.body) <= 2 and len(head) + len(body) <= 150:
        return ['%s { %s }' % (head, body)]
    return [head, '{'] + ['    ' + statement for statement in shape.body] + ['}']


def render_file(family, shapes, shard, shards):
    """One source file: family documentation, then the functions."""
    description = FAMILIES[family]
    title = description['title']
    if shards > 1:
        title += ', part %d of %d' % (shard + 1, shards)
    lines = ['/*', ' * ' + title + '.', ' *',
             ' * Recovered by pattern from the original image. Every instruction of each',
             ' * function\'s original extent matches one shape and only one; the offsets,',
             ' * widths and constants below are the ones those instructions encode.',
             ' *']
    for row in description['document'].splitlines():
        lines.append(' *' + (' ' + row if row else ''))
    lines += [' *',
              ' * A function is present only because compiling this exact source with the',
              ' * measured compiler profile reproduced its original instructions byte for',
              ' * byte. A candidate that did not match was deleted, not kept as a draft.',
              ' */',
              '#include "%s"' % TYPES_HEADER,
              '']
    for shape in shapes:
        lines += render_function(shape)
        lines.append('')
    return '\n'.join(lines).rstrip('\n') + '\n'


def render_types():
    return '\n'.join([
        '/* The integer widths the recovered signatures are written in.',
        ' *',
        ' * uptr is an integer the width of a pointer on the target being compiled:',
        ' * 32 bits on the measured ARM image, 64 bits on the public x86-64 and',
        ' * AArch64 component builds. A 32-bit pointer field is widened through it so',
        ' * the source compiles off the measured target without a pointer cast that',
        ' * narrows or widens silently.',
        ' */',
        'typedef unsigned char u8;',
        'typedef unsigned short u16;',
        'typedef unsigned int u32;',
        'typedef signed char s8;',
        'typedef short s16;',
        '#if __SIZEOF_POINTER__ == 8',
        'typedef unsigned long long uptr;',
        '#else',
        'typedef unsigned long uptr;',
        '#endif',
        ''])


def group(shapes):
    """Shapes by family, address order within a family."""
    grouped = {}
    for shape in shapes:
        if shape.family not in FAMILIES:
            raise ValueError('No file declared for family ' + shape.family)
        grouped.setdefault(shape.family, []).append(shape)
    for family in grouped:
        grouped[family].sort(key=lambda item: int(item.name[3:], 16))
    return grouped


def files(root, shapes):
    """The complete emitted tree: [(relative path, text)] including the header."""
    grouped = group(shapes)
    result = [(COMPONENT + '/' + TYPES_HEADER, render_types())]
    for family in FAMILY_ORDER:
        members = grouped.get(family)
        if not members:
            continue
        shards = _shards(members)
        for index, shard in enumerate(shards):
            name = FAMILIES[family]['file']
            if len(shards) > 1:
                name += '_%02d' % index
            result.append((COMPONENT + '/' + name + '.c',
                           render_file(family, shard, index, len(shards))))
    return result


def _shards(shapes):
    """Split a family so no file exceeds the shard line budget."""
    shards, current, height = [], [], 0
    for shape in shapes:
        height += len(render_function(shape)) + 1
        if current and height > SHARD_LINES:
            shards.append(current)
            current, height = [], len(render_function(shape)) + 1
        current.append(shape)
    if current:
        shards.append(current)
    return shards


def write(root, shapes):
    """Write the emitted tree under the repository root; return its paths."""
    written = []
    for relative, text in files(root, shapes):
        path = Path(root) / relative
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(text, encoding='utf-8')
        written.append(relative)
    return written
