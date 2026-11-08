import hashlib
import struct


def u32(data, offset=0):
    return struct.unpack_from('<I', data, offset)[0]


class Observation:
    def __init__(self, machine):
        self.machine = machine
        self.layout = machine.layout
        self.pointer_bytes = self.layout['pointerBytes']
        self.state = machine.state
        self.read = machine.read_bytes
        self.allocation_count = self.word(self.state + self.layout['allocations'])
        self.aliases = {'reference': {}, 'emitter': {}}
        self.reverse_aliases = {'reference': {}, 'emitter': {}}
        self.typed_slots = {}

    def word(self, address):
        return u32(self.read(address, 4))

    def pointer(self, address):
        return int.from_bytes(self.read(address, self.pointer_bytes), 'little')

    def payload(self, slot):
        return self.state + self.layout['heap'] + slot * self.layout['heapStride'] + self.layout['payloadOffset']

    def token(self, value):
        if value == 0:
            return None
        if value == int.from_bytes(bytes([self.machine.pattern]) * self.pointer_bytes, 'little'):
            return 'unwritten-pattern'
        for field in ['resource', 'system']:
            if value == self.state + self.layout[field]:
                return field
        if value == self.machine.allocator:
            return 'allocator'
        words = self.state + self.layout.get('shaderWords', 0)
        if words <= value < words + 30 * 16:
            return ['shader-words', (value - words) // 16, (value - words) % 16]
        if self.machine.image <= value <= self.machine.image + self.machine.image_bytes:
            return ['image', value - self.machine.image]
        for slot in range(self.allocation_count):
            start = self.payload(slot)
            physical = self.word(self.state + self.layout['records'] + slot * 24 + 4)
            if start <= value <= start + physical:
                return ['allocation', slot, value - start]
        raise ValueError('Resource observer encountered an undeclared live pointer: ' + hex(value))

    def alias(self, kind, actual, canonical):
        old = self.aliases[kind].setdefault(canonical, actual)
        reverse = self.reverse_aliases[kind].setdefault(actual, canonical)
        if old != actual or reverse != canonical:
            raise ValueError('Resource runtime ' + kind + ' alias identity differs')

    def typed_allocation(self, pointer, physical, label):
        token = self.token(pointer)
        if not isinstance(token, list) or token[:1] != ['allocation'] or token[2] != 0:
            raise ValueError('Resource typed object does not begin at an actual owned allocation')
        slot = token[1]
        actual = self.word(self.state + self.layout['records'] + slot * 24 + 4)
        if actual != physical:
            raise ValueError('Resource physical budget differs for ' + label)
        self.typed_slots[slot] = label

    def snapshot(self, released=False):
        m, layout = self.machine, self.layout
        if any(self.read(at, len(before)) != before for at, before in m.readonly):
            raise ValueError('Resource changed immutable caller system/options/table/pool/allocator binding bytes')
        resource = self.state + layout['resource']
        result = {}
        for name in ['identity', 'system', 'serialized', 'names', 'textures', 'sets', 'allocator', 'shaders',
                     'primitives', 'transfer_context', 'materials']:
            result[name] = self.token(self.pointer(resource + layout['r_' + name]))
        for name in ['identifier', 'shader_count', 'primitive_count']:
            result[name] = self.word(resource + layout['r_' + name])
        for name in ['texture_storage', 'primitive_storage']:
            result[name] = self.read(resource + layout['r_' + name], 1)[0]
        result['resourceRawHex'] = self.read(resource, layout['resourceBytes']).hex()
        count = self.word(m.image + 8)
        sets_pointer = self.pointer(resource + layout['r_sets'])
        result['setsView'] = []
        if count and not released:
            if m.original:
                physical = count * 60
            else:
                references = sum(self.word(m.image + 0x48 + index * 28 + 0x10) for index in range(count)
                    if self.word(m.image + 0x48 + index * 28 + 0x14))
                span_bytes = 12 if self.pointer_bytes == 4 else 16
                physical = count * (layout['setBytes'] + span_bytes) + references * (layout['referenceBytes'] + layout['emitterBytes'])
            self.typed_allocation(sets_pointer, physical, 'set-views')
            for index in range(count):
                at = sets_pointer + index * layout['setBytes']
                raw_set = m.image + 0x48 + index * 28
                expected_refs = self.word(raw_set + 0x14)
                current = self.state_view(at + layout['s_current'], expected_refs)
                saved = self.state_view(at + layout['s_saved'], expected_refs)
                if current != saved or current['serialized'] != ['image', 0x48 + index * 28]:
                    raise ValueError('Resource saved/current complete set state differs')
                set_row = {'current': current, 'saved': saved,
                    'name': self.token(self.pointer(at + layout['s_name'])),
                    'flagAndPaddingHex': self.read(at + layout['s_flag'], 4).hex()}
                expected_name = self.word(m.image + 0x10) + self.word(raw_set + 8)
                if set_row['name'] != ['image', expected_name]:
                    raise ValueError('Resource set name does not use its actual names-table offset')
                if m.original and self.word(raw_set + 12) != m.image + expected_name:
                    raise ValueError('Original raw set-name fixup differs')
                for name in ['shaders', 'primitives', 'materials']:
                    set_row[name] = self.token(self.pointer(at + layout['s_' + name]))
                for name in ['shader_count', 'primitive_count']:
                    set_row[name] = self.word(at + layout['s_' + name])
                result['setsView'].append(set_row)
        result['shaderView'] = []
        if not released:
            shaders = self.pointer(resource + layout['r_shaders'])
            if count:
                self.typed_allocation(shaders, result['shader_count'] * self.pointer_bytes, 'shader-array')
            for index in range(result['shader_count']):
                at = self.pointer(shaders + index * self.pointer_bytes)
                p = self.pointer_bytes
                self.typed_allocation(at, 40 if p == 4 else 48, 'shader-binding')
                result['shaderView'].append({'pointer': self.token(at), 'unknown': self.word(at),
                    'program': self.token(self.pointer(at + p)), 'words': self.word(at + p * 2),
                    'borrowed': self.read(at + p * 2 + 4, 1)[0], 'paddingHex': self.read(at + p * 2 + 5, 3).hex(),
                    'keys': list(struct.unpack('<6I', self.read(at + p * 2 + 8, 24)))})
        result['primitiveView'] = []
        if result['primitive_count'] and not released:
            primitives = self.pointer(resource + layout['r_primitives'])
            self.typed_allocation(primitives, result['primitive_count'] * self.pointer_bytes, 'primitive-array')
            for index in range(result['primitive_count']):
                primitive = self.pointer(primitives + index * self.pointer_bytes)
                self.typed_allocation(primitive, layout['primitiveBytes'], 'primitive')
                result['primitiveView'].append(self.primitive_view(primitive))
        masked = bytearray(self.read(m.image, m.image_bytes))
        if count:
            for index in range(count):
                masked[0x48 + index * 28 + 12:0x48 + index * 28 + 16] = bytes(4)
                raw_set = m.image + 0x48 + index * 28
                reference = self.word(raw_set + 0x14)
                for item in range(self.word(raw_set + 0x10) if reference else 0):
                    slot = reference + item * 8
                    masked[slot + 4:slot + 8] = bytes(4)
                    emitter = self.word(m.image + slot)
                    if emitter:
                        record = m.image + emitter
                        fields = [0x3c, 0xb8, 0x134]
                        if self.word(record) == 1 and self.word(record + 0x548) & 1:
                            fields.append(0x628)
                        if self.word(record + 0x140):
                            fields.append(0x138)
                        for offset in fields:
                            masked[emitter + offset:emitter + offset + 4] = bytes(4)
        result['imageMaskedSha256'] = hashlib.sha256(masked).hexdigest()
        result['events'] = [list(struct.unpack('<6I', self.read(self.state + layout['log'] + index * 24, 24)))
            for index in range(self.word(self.state + layout['events']))]
        result['attempts'] = self.word(self.state + layout['attempts'])
        result['allocations'] = []
        for slot in range(self.allocation_count):
            raw = list(struct.unpack('<6I', self.read(self.state + layout['records'] + slot * 24, 24)))
            result['allocations'].append({'logicalBytes': raw[0], 'alignment': raw[2], 'region': raw[4], 'live': raw[5]})
            start = self.payload(slot)
            if slot not in self.typed_slots and not released:
                if raw[0] != raw[1]:
                    raise ValueError('Unclassified allocation widened without a typed observer')
                result['allocations'][-1]['payloadSha256'] = hashlib.sha256(self.read(start, raw[0])).hexdigest()
            if self.read(start - 128, 128) != bytes([m.pattern]) * 128 or self.read(start + raw[1], 8192 - raw[1] + 128) != bytes([m.pattern]) * (8192 - raw[1] + 128):
                raise ValueError('Resource allocation wrote beyond its independently declared physical budget')
        return result

    def state_view(self, at, expected_refs):
        p = self.pointer_bytes
        reference_pointer = self.pointer(at + p)
        count = self.word(at + p * 2)
        row = {'serialized': self.token(self.pointer(at)), 'count': count, 'identifier': self.word(at + p * 2 + 4)}
        if expected_refs == 0:
            if reference_pointer != 0:
                raise ValueError('Resource null reference-table identity differs')
            row['references'] = None
        else:
            row['references'] = ['image-reference-view', expected_refs]
            row['entries'] = []
            for item in range(count):
                slot = reference_pointer + item * self.layout['referenceBytes']
                self.alias('reference', slot, expected_refs + item * 8)
                relative = self.word(slot)
                emitter = self.pointer(slot + self.pointer_bytes)
                if relative != self.word(self.machine.image + expected_refs + item * 8):
                    raise ValueError('Resource reference offset changed')
                if relative == 0:
                    if emitter != 0:
                        raise ValueError('Resource null emitter did not stay null')
                    row['entries'].append(None)
                else:
                    self.alias('emitter', emitter, relative)
                    row['entries'].append(self.emitter_view(emitter, relative))
        return row

    def emitter_view(self, actual, relative):
        m = self.machine
        record = m.image + relative
        p = self.pointer_bytes
        if m.original:
            if actual != record:
                raise ValueError('Original emitter did not retain serialized-object identity')
            name = self.word(record + 0x3c)
            texture_pointers = [self.word(record + offset) for offset in [0xb8, 0x134, 0x628]]
            user_data = self.word(record + 0x138)
        else:
            self.token(actual)
            if self.pointer(actual) != record:
                raise ValueError('Typed emitter lost borrowed serialized-owner identity')
            name = self.pointer(actual + p)
            stride = 16 if p == 4 else 24
            texture_pointers = [self.pointer(actual + p * 2 + index * stride) for index in range(3)]
            user_data = self.pointer(actual + p * 2 + stride * 3)
        expected_name = self.word(m.image + 0x10) + self.word(record + 0x38)
        if self.token(name) != ['image', expected_name]:
            raise ValueError('Emitter name-table fixup differs')
        third = self.word(record) == 1 and self.word(record + 0x548) & 1
        textures = [self.token(texture_pointers[index]) for index in range(3 if third else 2)]
        if self.word(record + 0x140):
            expected_user = self.word(m.image + 0x24) + self.word(record + 0x13c)
            if self.token(user_data) != ['image', expected_user]:
                raise ValueError('Emitter user-data offset/owner differs')
        elif user_data != 0:
            raise ValueError('Current fresh-file emitter contract requires an unwritten null user-data slot')
        return {'serialized': ['image', relative], 'name': self.token(name), 'textures': textures, 'userData': self.token(user_data)}

    def primitive_view(self, primitive):
        result = {'pointer': self.token(primitive)}
        pointers = ['position_cpu', 'position_device', 'color_cpu', 'color_device', 'texcoord_cpu', 'texcoord_device',
            'indices_cpu', 'indices_device', 'position_effective', 'color_effective', 'texcoord_effective',
            'indices_effective', 'transfer_context', 'commands']
        fields = [name[2:] for name in self.layout if name.startswith('p_')]
        touched = set()
        for name in fields:
            offset = self.layout['p_' + name]
            if name in pointers:
                size = self.pointer_bytes
                result[name] = self.token(self.pointer(primitive + offset))
            elif name in ['enabled', 'storage']:
                size = 4
                result[name] = self.read(primitive + offset, size).hex()
            elif name in ['vertex_input', 'index_words']:
                size = 0x790 if name == 'vertex_input' else 12
                result[name] = self.read(primitive + offset, size).hex()
            else:
                size = 4
                result[name] = self.word(primitive + offset)
            touched.update(range(offset, offset + size))
        raw = self.read(primitive, self.layout['primitiveBytes'])
        if any(raw[offset] != self.machine.pattern for offset in range(len(raw)) if offset not in touched):
            raise ValueError('Primitive overwrote independently observed extra native ABI padding')
        return result


def logical(snapshot):
    return {name: value for name, value in snapshot.items() if name != 'resourceRawHex'}
