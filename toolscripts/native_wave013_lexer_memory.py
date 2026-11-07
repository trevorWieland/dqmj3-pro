import bisect
import random
import struct


SIZE = 0x40000
CAPACITY = 0xa40


def encode(spec, base, p, seed=0):
    if p not in [4, 8]:
        raise ValueError('Unqualified lexer pointer profile')
    data = bytearray(random.Random(seed).randbytes(SIZE))
    fields = []
    def field(name, offset, size, kind, value):
        fields.append({'name': name, 'offset': offset, 'size': size, 'kind': kind})
        data[offset:offset + size] = (value & ((1 << (8 * size)) - 1)).to_bytes(size, 'little')
    arena, flags, storage, context, token_slot, consumed, text, right = [base + value for value in
        [0x200, 0x1000, 0x8000, 0x2000, 0x600, 0x700, 0x22000, 0x23000]]
    operation = spec['operation']
    units = spec.get('units', [])
    if len(units) > 256 or any(not 0 <= value <= 65535 for value in units):
        raise ValueError('Lexer input exceeds finite UTF16 fixture domain')
    data[text - base:text - base + 2 * len(units)] = struct.pack('<' + 'H' * len(units), *units)
    other = spec.get('right', units)
    data[right - base:right - base + 2 * len(other)] = struct.pack('<' + 'H' * len(other), *other)
    field('arena.bitmap', 0x200, p, 'pointer', flags)
    field('arena.storage', 0x200 + p, p, 'pointer', storage)
    field('arena.next', 0x200 + 2 * p, 4, 'scalar', spec.get('cursor', 0))
    field('context.previous', 0x2000, p, 'pointer', context)
    field('context.next', 0x2000 + p, p, 'pointer', context)
    field('context.arena', 0x2000 + 2 * p, p, 'pointer', arena)
    field('context.text', 0x2000 + 3 * p, p, 'pointer', text)
    field('context.position', 0x2000 + 4 * p, 4, 'scalar', spec.get('position', 0))
    field('context.length', 0x2000 + 4 * p + 4, 4, 'scalar', len(units))
    field('context.depth', 0x2000 + 4 * p + 8, 4, 'scalar', spec.get('depth', 0))
    field('token.slot', 0x600, p, 'pointer', storage)
    field('consumed', 0x700, 4, 'scalar', 0x12345678)
    occupied = bytearray(CAPACITY)
    existing = 1 if operation == 'handler' else spec.get('existing', 0)
    if not 0 <= existing <= 8:
        raise ValueError('Too many initial token nodes')
    stride = 4 * p
    for index in range(CAPACITY):
        at = 0x8000 + index * stride
        previous = context if not index else storage + (index - 1) * stride
        following = context if index + 1 >= existing else storage + (index + 1) * stride
        if index >= existing:
            previous = following = context
        field('token.' + str(index) + '.previous', at, p, 'pointer', previous)
        field('token.' + str(index) + '.next', at + p, p, 'pointer', following)
        field('token.' + str(index) + '.kind', at + 2 * p, 1, 'scalar', 0x5a)
        field('token.' + str(index) + '.value', at + 2 * p + 2, 2, 'scalar', 0xa55a)
        field('token.' + str(index) + '.maximum', at + 2 * p + 4, 2, 'scalar', 0x5aa5)
    if existing:
        data[0x2000:0x2000 + p] = (storage + (existing - 1) * stride).to_bytes(p, 'little')
        data[0x2000 + p:0x2000 + 2 * p] = storage.to_bytes(p, 'little')
        occupied[:existing] = bytes([1]) * existing
    free = spec.get('free_slots')
    if free is not None:
        occupied[existing:] = bytes([1]) * (CAPACITY - existing)
        occupied[existing:min(CAPACITY, existing + free)] = bytes(min(CAPACITY - existing, free))
    data[0x1000:0x1000 + CAPACITY] = occupied
    fields.append({'name': 'bitmap', 'offset': 0x1000, 'size': CAPACITY, 'kind': 'bytes'})
    if operation == 'construct':
        entry, args, kinds, result_kind = 0x4bfeb8, [context], ['pointer'], 'pointer'
    elif operation == 'lex':
        entry, args, kinds, result_kind = 0x4befe0, [context, arena, text, len(units)], ['pointer'] * 3 + ['integer'], 'int'
    elif operation == 'handler':
        if not 0 <= spec.get('position', 0) < len(units):
            raise ValueError('Standalone handler requires a current code unit')
        entry, args, kinds, result_kind = spec['entry'], [context, token_slot], ['pointer'] * 2, 'int'
    elif operation == 'property':
        entry, args, kinds, result_kind = 0x4c3904, [text, spec.get('length', len(units)), consumed], ['pointer', 'integer', 'pointer'], 'unsigned'
    elif operation == 'compare':
        count = spec.get('length', len(units))
        if count > len(units) or count > len(other):
            raise ValueError('Comparison count exceeds typed buffers')
        entry, args, kinds, result_kind = 0x1006b6, [text, right, count], ['pointer', 'pointer', 'integer'], 'int'
    else:
        raise ValueError('Unknown lexer fixture operation')
    mutable = [(base + row['offset'], base + row['offset'] + row['size']) for row in fields]
    readable = [(arena, arena + 2 * p + 4), (context, context + 4 * p + 12), (token_slot, token_slot + p),
                (consumed, consumed + 4), (flags, flags + CAPACITY), (storage, storage + CAPACITY * stride),
                (text, text + len(units) * 2), (right, right + len(other) * 2)]
    return {'before': bytes(data), 'base': base, 'pointerBytes': p, 'fields': fields, 'arguments': args,
            'argumentKinds': kinds, 'returnKind': result_kind, 'canonicalEntry': entry,
            'mutable': mutable, 'readable': readable}


def translate_pointer(value, reference_layout, native_layout):
    if not value:
        return 0
    offset = value - reference_layout['base']
    if 0x8000 <= offset < 0x8000 + CAPACITY * 16:
        slot, inside = divmod(offset - 0x8000, 16)
        if inside:
            raise ValueError('Original stored unqualified interior token pointer')
        offset = 0x8000 + slot * 32
    if not 0 <= offset < SIZE:
        raise ValueError('Original stored pointer outside typed fixture ownership')
    return native_layout['base'] + offset


def translate_reference(reference_layout, reference_after, writes, native_layout):
    expected = bytearray(native_layout['before'])
    original_base = reference_layout['base']
    native_base = native_layout['base']
    native_fields = {row['name']: row for row in native_layout['fields']}
    mutable = []
    merged = []
    for start, size in sorted(writes):
        if merged and start <= merged[-1][1]:
            merged[-1] = (merged[-1][0], max(merged[-1][1], start + size))
        else:
            merged.append((start, start + size))
    starts = [start for start, end in merged]
    for row in reference_layout['fields']:
        start, end = original_base + row['offset'], original_base + row['offset'] + row['size']
        index = bisect.bisect_right(starts, end - 1) - 1
        if index < 0 or merged[index][1] <= start:
            continue
        destination = native_fields[row['name']]
        raw = reference_after[row['offset']:row['offset'] + row['size']]
        if row['kind'] == 'pointer':
            value = translate_pointer(int.from_bytes(raw, 'little'), reference_layout, native_layout)
            raw = value.to_bytes(destination['size'], 'little')
        expected[destination['offset']:destination['offset'] + destination['size']] = raw
        mutable.append((native_base + destination['offset'], native_base + destination['offset'] + destination['size']))
    return bytes(expected), mutable
