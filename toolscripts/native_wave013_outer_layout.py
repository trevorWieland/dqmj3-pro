import native_wave013_lexer_memory as lexer
from native_wave012_arena_oracle import STACK


class UnsupportedRepresentation(ValueError):
    pass


CAPACITY = lexer.CAPACITY
SIZE = lexer.SIZE


def fields(kind, p, count=0):
    link = [('previous', 0, p, 'pointer'), ('next', p, p, 'pointer')]
    if kind == 'lexer':
        return link+[('arena',2*p,p,'pointer'),('text',3*p,p,'pointer'),('position',4*p,4,'scalar'),
                     ('length',4*p+4,4,'scalar'),('class_depth',4*p+8,4,'scalar')]
    if kind == 'cursor':
        return [('state',0,p,'pointer')]
    if kind == 'literal_cursor':
        return [('token',0,p,'pointer')]
    if kind == 'literal':
        return [('text',0,p,'pointer'),('length',p,4,'scalar')]
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
    if kind == 'compiled':
        return link + [('transition.previous', 2*p, p, 'pointer'), ('transition.next', 3*p, p, 'pointer'),
                       ('transition_arena', 4*p, p, 'pointer'), ('pending.previous', 5*p, p, 'pointer'),
                       ('pending.next', 6*p, p, 'pointer'), ('pending_arena', 7*p, p, 'pointer'),
                       ('data_arena', 8*p, p, 'pointer'), ('members', 9*p, p, 'pointer'),
                       ('member_count', 10*p, 4, 'scalar'), ('result', 10*p+4, 1, 'scalar')]
    if kind == 'pointer_table':
        return [('source.'+str(index), index*p, p, 'pointer') for index in range(count)]
    if kind == 'membership':
        return [('bytes', 0, count, 'bytes')]
    if kind == 'compiler':
        return [('data_arena', 0, p, 'pointer'), ('previous', p, p, 'pointer'), ('next', 2*p, p, 'pointer'),
                ('state_arena', 3*p, p, 'pointer'), ('source_count', 4*p, 4, 'scalar'), ('sources', 5*p, p, 'pointer')]
    if kind == 'builder':
        return [('cursor', 0, p, 'pointer'), ('previous', p, p, 'pointer'), ('next', 2*p, p, 'pointer'),
                ('state_arena', 3*p, p, 'pointer'), ('accept', 4*p, p, 'pointer'),
                ('transition_arena', 5*p, p, 'pointer'), ('group_depth', 6*p, 4, 'scalar')]
    raise ValueError('Unqualified NFA object kind')


def encode(specification,base,p,seed):
    from native_wave013_nfa_layout import encode as nfa_encode
    layout=nfa_encode(specification,base,p,seed)
    candidates=specification.get('candidates',['a'])
    flags=specification.get('flags',[0]*len(candidates))
    if len(candidates)>16 or len(flags)!=len(candidates):
        raise ValueError('Outer candidate/flag count exceeds finite contract')
    bit=specification.get('bit_index',0)
    if not -128<=bit<=127:
        raise ValueError('Outer signed byte representation exceeds its domain')
    data=bytearray(layout['before'])
    data[0x301b]=bit&255
    data[0x3020:0x3020+p]=(base+0x7400).to_bytes(p,'little')
    for index,(text,flag) in enumerate(zip(candidates,flags)):
        units=list(map(ord,text))
        if len(units)>120 or any(value>65535 for value in units):
            raise ValueError('Outer candidate exceeds bounded UTF16 domain')
        offset=0x23000+index*256
        raw=b''.join(value.to_bytes(2,'little') for value in [*units,0])
        data[offset:offset+len(raw)]=raw
        data[0x4200+index*p:0x4200+(index+1)*p]=(base+offset).to_bytes(p,'little')
        data[0x4000+index*4:0x4000+(index+1)*4]=(flag&0xffffffff).to_bytes(4,'little')
        layout['readable'].append((base+offset,base+offset+len(raw)))
    if 'leaf' in specification:
        layout['fields'].append({'name':'leaf.output','offset':0x5000,'size':128,'kind':'bytes'})
        layout['readable'].append((base+0x5000,base+0x5080))
    layout['fields'].append({'name':'scratch.bitmap_and_header','offset':0x7400,'size':3072,'kind':'bytes'})
    if flags:
        layout['fields'].append({'name':'outputs.flags','offset':0x4000,'size':4*len(flags),'kind':'bytes'})
    layout['readable'] += [(base+0x3000,base+0x3020+p),(base+0x7400,base+0x8000)]
    if candidates:
        layout['readable'] += [(base+0x4200,base+0x4200+p*len(candidates)),(base+0x4000,base+0x4000+4*len(flags))]
    layout['before']=bytes(data)
    layout['rootArguments']=[base+0x3000,base+0x4000,base+0x22000,len(specification.get('pattern','')),base+0x4200,len(candidates)]
    layout['rootArgumentKinds']=['pointer','pointer','pointer','integer','pointer','integer']
    return layout


def allocation_role(caller,count=0):
    roots={0x4c3c58:('lexer',2),0x4c3c70:('literal',1),0x4c3c88:('builder',2),
           0x4c3ca0:('compiler',2),0x4c3cb8:('cursor',1)}
    if caller in roots:
        return roots[caller]
    from native_wave013_nfa_layout import allocation_role as nfa_role
    if caller in [0x4bff00,0x4c1fbc,0x4c24f8,0x4c2858]:
        return 'membership',(count+15)>>4
    if caller in [0x4c1e44,0x4c2aa0]:
        return 'compiled',3
    if caller == 0x4c2a50:
        return 'pointer_table',(count*4+15)>>4
    if caller in [0x4c2050,0x4c2d3c,0x4c2e3c]:
        return 'range',1
    if caller in [0x4c226c,0x4c26b4,0x4c27a8,0x4c295c]:
        return 'edge',2
    return nfa_role(caller)


class Projection:
    def __init__(self, original, native, owner_identity=None, constants=None):
        self.original, self.native = original, native
        self.p=native['pointerBytes']
        self.stride=4*self.p
        self.owner_identity=owner_identity
        self.constants=constants or {}
        self.expected = bytearray(native['before'])
        self.allocations = {}
        self.masked = {}
        self.events = []
        self.translated_writes = []
        self.original_fields = original['fields']
        self.native_fields = {row['name']: row for row in native['fields']}

    def allocate(self, address, blocks, kind, caller, count=0):
        if not address:
            return
        offset = address - self.original['base'] - 0x8000
        slot, inside = divmod(offset, 16)
        if inside or not 0 <= slot <= CAPACITY - blocks:
            raise ValueError('Allocation escaped logical arena')
        row = {'slot': slot, 'blocks': blocks, 'kind': kind, 'caller': caller, 'count': count}
        for number in range(slot, slot + blocks):
            self.allocations[number] = row
        self.events.append({'type': 'allocation', **row})

    def pointer(self, value, field_name=None):
        if not value:
            return 0
        if self.owner_identity and value==self.owner_identity[0]:
            if field_name not in ['arena','state_arena','transition_arena','data_arena','pending_arena']:
                raise ValueError('Invocation arena identity stored outside a measured scratch-owner field')
            return self.owner_identity[1]
        if field_name=='arena.storage' and value==self.original['base']+0x8000:
            return self.native['base']+0x8000
        if value in self.constants:
            if field_name!='text':
                raise ValueError('NUL literal identity stored outside the measured literal text field')
            return self.constants[value]
        if STACK <= value < STACK + 8192:
            return None
        offset = value - self.original['base']
        if 0x8000 <= offset < 0x8000 + CAPACITY * 16:
            slot = (offset - 0x8000) // 16
            row = self.allocations.get(slot)
            if row is None:
                raise ValueError('Stored pointer targets unqualified allocation')
            inside = offset - 0x8000 - row['slot'] * 16
            candidates = [(a, b) for a, b in zip(fields(row['kind'], 4, row['count']), fields(row['kind'], self.p, row['count']))
                          if a[1] == inside]
            if not candidates:
                raise ValueError('Stored pointer targets unqualified object interior')
            offset = 0x8000 + row['slot'] * self.stride + candidates[0][1][1]
        elif 0x2100 <= offset < 0x211c:
            candidates = [(a, b) for a, b in zip(fields('builder', 4), fields('builder', self.p)) if a[1] == offset - 0x2100]
            if not candidates:
                raise ValueError('Stored pointer targets unqualified builder interior')
            offset = 0x2100 + candidates[0][1][1]
        elif 0x2700 <= offset < 0x2718:
            candidates = [(a,b) for a,b in zip(fields('compiler',4),fields('compiler',self.p)) if a[1]==offset-0x2700]
            if not candidates:
                raise ValueError('Stored pointer targets unqualified compiler interior')
            offset=0x2700+candidates[0][1][1]
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
            destination_start = 0x8000 + allocation['slot'] * self.stride
            kind = allocation['kind']
            original_fields = [{'name': name, 'offset': start + at, 'size': count, 'kind': role}
                               for name, at, count, role in fields(kind, 4, allocation['count'])]
            destinations = {name: {'offset': destination_start + at, 'size': count}
                            for name, at, count, role in fields(kind, self.p, allocation['count'])}
        else:
            original_fields, destinations = self.original_fields, self.native_fields
        for masked in self.masked.values():
            masked['remainingOriginalOffsets'] = [at for at in masked['remainingOriginalOffsets']
                                                  if not offset <= at < offset+size]
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
                pointer = self.pointer(int.from_bytes(raw, 'little'),row['name'])
                count = target['size']
                if pointer is None:
                    self.masked[destination] = {'originalAddress': self.original['base'] + row['offset'],
                                                'bytes': count, 'originalPrivateStackPointer': value, 'pc': pc,
                                                'remainingNativeOffsets': list(range(destination,destination+count)),
                                                'remainingOriginalOffsets': list(range(row['offset'],row['offset']+4))}
                    remaining -= high - low
                    continue
                raw = pointer.to_bytes(count, 'little')
            for start, masked in list(self.masked.items()):
                remaining_offsets = [at for at in masked['remainingNativeOffsets'] if not destination <= at < destination+count]
                if remaining_offsets:
                    masked['remainingNativeOffsets'] = remaining_offsets
                else:
                    del self.masked[start]
            self.expected[destination:destination + count] = raw
            self.translated_writes.append((destination, count))
            remaining -= high - low
        if remaining:
            raise ValueError('Original wrote unqualified object bytes at ' + hex(address))
        self.events.append({'type': 'write', 'address': address, 'bytes': size, 'value': value, 'pc': pc})

    def qualified_masks(self, original_after, quarantined=None):
        masks = []
        quarantined = set(quarantined or [])
        for start, row in self.masked.items():
            offset = row['originalAddress'] - self.original['base']
            slot, inside = divmod(offset - 0x8000, 16)
            if not 0 <= slot < CAPACITY or inside not in [0,4]:
                raise ValueError('Private stack pointer survives in a non-link field')
            complete = (row['remainingNativeOffsets'] == list(range(start,start+self.p))
                        and row['remainingOriginalOffsets'] == list(range(offset,offset+4)))
            if not complete:
                raise UnsupportedRepresentation('Historical private-pointer field was partially initialized; fragments are outside this packet contract')
            allocation = self.allocations[slot]
            if original_after[0x7400+slot]:
                target_start = 0x8000 + allocation['slot']*16
                native_start = 0x8000 + allocation['slot']*self.stride
                outside = (allocation['kind'] == 'membership' and offset-target_start >= allocation['count']
                           and start-native_start >= allocation['count']
                           and offset+4 <= target_start+allocation['blocks']*16
                           and start+self.p <= native_start+allocation['blocks']*self.stride)
                if not outside or not all(at in quarantined for at in range(offset,offset+4)):
                    raise ValueError('Private stack pointer survives in a live/non-link field')
                row['qualification'] = 'untouched-historical-pointer-in-current-raw-membership-padding'
                row['currentRawMembershipBytes'] = allocation['count']
            else:
                row['qualification'] = 'retired-link-in-free-slot'
            masks.append((start,start+row['bytes']))
        return masks

    def caller_arena(self,snapshot):
        for index,(name,size) in enumerate([('occupied',self.p),('storage',self.p),('next',4)]):
            value=snapshot[index]
            if index<2:
                value=self.pointer(value)
            offset=0x200+index*self.p
            self.expected[offset:offset+size]=value.to_bytes(size,'little')
            self.translated_writes.append((offset,size))
