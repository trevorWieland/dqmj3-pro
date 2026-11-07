import native_wave013_lexer_memory as lexer
from native_wave012_arena_oracle import STACK


CAPACITY = lexer.CAPACITY
SIZE = lexer.SIZE


def fields(kind, p):
    link = [('previous', 0, p, 'pointer'), ('next', p, p, 'pointer')]
    if kind == 'token':
        return link + [('kind', 2*p, 1, 'scalar'), ('value', 2*p+2, 2, 'scalar'), ('maximum', 2*p+4, 2, 'scalar')]
    if kind == 'state':
        return link + [('edge.previous', 2*p, p, 'pointer'), ('edge.next', 3*p, p, 'pointer'),
                       ('arena', 4*p, p, 'pointer'), ('identifier', 5*p, 4, 'scalar')]
    if kind == 'edge':
        return link + [('destination', 2*p, p, 'pointer'), ('kind', 3*p, 1, 'scalar'), ('value', 3*p+2, 2, 'scalar'),
                       ('range.previous', 4*p, p, 'pointer'), ('range.next', 5*p, p, 'pointer'), ('arena', 6*p, p, 'pointer')]
    if kind == 'range':
        return link + [('first', 2*p, 2, 'scalar'), ('last', 2*p+2, 2, 'scalar')]
    if kind == 'clone':
        return link + [('original', 2*p, p, 'pointer'), ('replacement', 3*p, p, 'pointer')]
    if kind == 'builder':
        return [('cursor', 0, p, 'pointer'), ('previous', p, p, 'pointer'), ('next', 2*p, p, 'pointer'),
                ('state_arena', 3*p, p, 'pointer'), ('accept', 4*p, p, 'pointer'),
                ('transition_arena', 5*p, p, 'pointer'), ('group_depth', 6*p, 4, 'scalar')]
    raise ValueError('Unqualified NFA object kind')


def encode(specification, base, p, seed):
    layout = lexer.encode({'operation': 'lex', 'units': specification.get('units', list(map(ord, specification.get('pattern', '')))),
                           **{key: specification[key] for key in ['cursor', 'free_slots'] if key in specification}}, base, p, seed)
    layout['fields'] = [row for row in layout['fields'] if row['name'] == 'token.slot' or not row['name'].startswith('token.')]
    for name, offset, size, kind in fields('builder', p):
        layout['fields'].append({'name': 'builder.' + name, 'offset': 0x2100 + offset, 'size': size, 'kind': kind})
    if 'range_cycles' in specification or 'range_steps' in specification or 'transition_helper' in specification:
        if 'range_cycles' in specification and not 1 <= specification['range_cycles'] <= 2000:
            raise ValueError('Range reuse workflow exceeds finite test domain')
        data = bytearray(layout['before'])
        for ring in [0x2400, 0x2440]:
            for name, offset in [('previous', 0), ('next', p), ('arena', 2*p)]:
                value = base + (0x200 if name == 'arena' else ring)
                data[ring+offset:ring+offset+p] = value.to_bytes(p, 'little')
                layout['fields'].append({'name': 'range.'+str(ring)+'.'+name, 'offset': ring+offset, 'size': p, 'kind': 'pointer'})
        layout['before'] = bytes(data)
    data = bytearray(layout['before'])
    units = specification.get('units', list(map(ord, specification.get('pattern', ''))))
    data[0x2600:0x2600+p] = (base+0x22000).to_bytes(p, 'little')
    data[0x2600+p:0x2600+p+4] = len(units).to_bytes(4, 'little')
    layout['before'] = bytes(data)
    layout['readable'].append((base+0x2600,base+0x2600+p+4))
    layout['specification'] = specification
    return layout


def allocation_role(caller):
    if caller in [0x4bf07c, 0x4bf15c, 0x4bf208]:
        return 'token', 1
    if caller in [0x4c04a0, 0x4c0ba8, 0x4c1d28, 0x4c362c]:
        return 'state', 2
    if caller == 0x4c367c:
        return 'clone', 1
    if caller in [0x4c2fa0, 0x4c2fec, 0x4c30a0, 0x4c3134, 0x4c318c, 0x4c330c,
                  0x4c347c, 0x4c3520, 0x4c3580, 0x7556c4]:
        return 'range', 1
    if caller in [0x4c0c00, 0x4c0d4c, 0x4c0e44, 0x4c0ec4, 0x4c1214, 0x4c176c,
                  0x4c1a10, 0x4c3718, 0x4c37b0, 0x75582c]:
        return 'edge', 2
    raise ValueError('Unreviewed original allocation callsite ' + hex(caller))


class Projection:
    def __init__(self, original, native):
        self.original, self.native = original, native
        self.expected = bytearray(native['before'])
        self.allocations = {}
        self.masked = {}
        self.events = []
        self.translated_writes = []
        self.original_fields = original['fields']
        self.native_fields = {row['name']: row for row in native['fields']}

    def allocate(self, address, blocks, kind, caller):
        if not address:
            return
        offset = address - self.original['base'] - 0x8000
        slot, inside = divmod(offset, 16)
        if inside or not 0 <= slot <= CAPACITY - blocks:
            raise ValueError('Allocation escaped logical arena')
        row = {'slot': slot, 'blocks': blocks, 'kind': kind, 'caller': caller}
        for number in range(slot, slot + blocks):
            self.allocations[number] = row
        self.events.append({'type': 'allocation', **row})

    def pointer(self, value):
        if not value:
            return 0
        if STACK <= value < STACK + 8192:
            return None
        offset = value - self.original['base']
        if 0x8000 <= offset < 0x8000 + CAPACITY * 16:
            slot = (offset - 0x8000) // 16
            row = self.allocations.get(slot)
            if row is None:
                raise ValueError('Stored pointer targets unqualified allocation')
            inside = offset - 0x8000 - row['slot'] * 16
            candidates = [(a, b) for a, b in zip(fields(row['kind'], 4), fields(row['kind'], 8))
                          if a[1] == inside]
            if not candidates:
                raise ValueError('Stored pointer targets unqualified object interior')
            offset = 0x8000 + row['slot'] * 32 + candidates[0][1][1]
        elif 0x2100 <= offset < 0x211c:
            candidates = [(a, b) for a, b in zip(fields('builder', 4), fields('builder', 8)) if a[1] == offset - 0x2100]
            if not candidates:
                raise ValueError('Stored pointer targets unqualified builder interior')
            offset = 0x2100 + candidates[0][1][1]
        elif not 0 <= offset < SIZE:
            raise ValueError('Stored pointer escapes qualified fixture ownership')
        return self.native['base'] + offset

    def write(self, address, size, value, pc):
        offset = address - self.original['base']
        if not 0 <= offset < SIZE:
            return
        if 0x8000 <= offset < 0x8000 + CAPACITY * 16:
            slot = (offset - 0x8000) // 16
            allocation = self.allocations.get(slot)
            if allocation is None:
                raise ValueError('Write targets unqualified arena object')
            start = 0x8000 + allocation['slot'] * 16
            destination_start = 0x8000 + allocation['slot'] * 32
            kind = allocation['kind']
            original_fields = [{'name': name, 'offset': start + at, 'size': count, 'kind': role}
                               for name, at, count, role in fields(kind, 4)]
            destinations = {name: {'offset': destination_start + at, 'size': count}
                            for name, at, count, role in fields(kind, 8)}
        else:
            original_fields, destinations = self.original_fields, self.native_fields
        remaining = size
        for row in original_fields:
            low, high = max(offset, row['offset']), min(offset + size, row['offset'] + row['size'])
            if low >= high:
                continue
            target = destinations[row['name']]
            destination = target['offset'] + low - row['offset']
            count = high - low
            raw = ((value >> (8 * (low - offset))) & ((1 << (8 * count)) - 1)).to_bytes(count, 'little')
            if row['kind'] == 'pointer':
                if low != row['offset'] or count != 4:
                    raise ValueError('Partial original pointer write is unqualified')
                pointer = self.pointer(int.from_bytes(raw, 'little'))
                count = target['size']
                if pointer is None:
                    self.masked[destination] = {'originalAddress': self.original['base'] + row['offset'],
                                                'bytes': count, 'originalPrivateStackPointer': value, 'pc': pc}
                    remaining -= high - low
                    continue
                raw = pointer.to_bytes(count, 'little')
            for start, masked in list(self.masked.items()):
                if destination <= start and start + masked['bytes'] <= destination + count:
                    del self.masked[start]
            self.expected[destination:destination + count] = raw
            self.translated_writes.append((destination, count))
            remaining -= high - low
        if remaining:
            raise ValueError('Original wrote unqualified object bytes at ' + hex(address))
        self.events.append({'type': 'write', 'address': address, 'bytes': size, 'value': value, 'pc': pc})

    def qualified_masks(self, original_after):
        masks = []
        for start, row in self.masked.items():
            offset = row['originalAddress'] - self.original['base']
            slot, inside = divmod(offset - 0x8000, 16)
            if not 0 <= slot < CAPACITY or inside not in [0, 4] or original_after[0x1000 + slot] != 0:
                raise ValueError('Private stack pointer survives in a live/non-link field')
            masks.append((start, start + row['bytes']))
        return masks
