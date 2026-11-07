import random
import struct

from native_wave012_arena_model import CAPACITY, bitmap, apply


SIZE = 0x20000
OPERATIONS = {'single': 0x7555b4, 'default_a': 0x7555cc, 'default_b': 0x755798,
              'destroy': 0x7557bc, 'state_default': 0x4bff74, 'state_init': 0x4bfedc}


def fixtures():
    cases = []
    for character in [0, 1, 32767, 32768, 65535]:
        for nodes in [0, 2]:
            cases.append({'operation': 'single', 'character': character, 'nodes': nodes})
    for operation in ['default_a', 'default_b', 'destroy']:
        for nodes in [0, 1, 3, 16]:
            for owner in [False, True]:
                cases.append({'operation': operation, 'nodes': nodes, 'owner': owner})
    for initial in [-128, 0, 127]:
        cases.append({'operation': 'state_default', 'result': initial})
    for members in [0, 1, 15, 16, 17, 31, 32, 127, 128]:
        for clear in [-1, 0, 1]:
            for pattern in ['empty', 'full', 'alternating', 'middle-free']:
                for cursor in [0, CAPACITY]:
                    cases.append({'operation': 'state_init', 'members': members, 'clear': clear,
                                  'pattern': pattern, 'next': cursor})
    return cases


def encode(specification, base, pointer_bytes, seed=0):
    p = pointer_bytes
    stride = 4 * p
    if p not in [4, 8] or specification['operation'] not in OPERATIONS:
        raise ValueError('Invalid constructor profile or operation')
    nodes_count = specification.get('nodes', 0)
    members = specification.get('members', 0)
    if not 0 <= nodes_count <= 16 or not 0 <= members <= 128:
        raise ValueError('Constructor fixture outside finite graph domain')
    rng = random.Random(seed)
    before = bytearray(rng.randbytes(SIZE))
    arena, destination, label, data, flags, storage = [base + value for value in [0x100, 0x200, 0x400, 0x800, 0x1000, 0x4000]]
    head = label + 2 * p
    node_slots = [1 + 2 * index for index in range(nodes_count)]
    nodes = [storage + index * stride for index in node_slots]
    occupied = bytearray(bitmap(specification))
    for slot in node_slots:
        occupied[slot] = 1
    def pointer(memory, address, value):
        struct.pack_into('<I' if p == 4 else '<Q', memory, address - base, value)
    pointer(before, arena, flags)
    pointer(before, arena + p, storage)
    struct.pack_into('<I', before, arena - base + 2 * p, specification.get('next', 0))
    before[flags - base:flags - base + CAPACITY] = occupied
    pointer(before, destination, base + 0x1a000)
    pointer(before, label, base + 0x1b000)
    before[label - base + p] = specification.get('kind', 3)
    struct.pack_into('<H', before, label - base + p + 2, 0xa55a)
    pointer(before, head, nodes[-1] if nodes else head)
    pointer(before, head + p, nodes[0] if nodes else head)
    pointer(before, label + 4 * p, arena if specification.get('owner', True) else 0)
    for index, node in enumerate(nodes):
        pointer(before, node, nodes[index - 1] if index else head)
        pointer(before, node + p, nodes[index + 1] if index + 1 < len(nodes) else head)
        struct.pack_into('<HH', before, node - base + 2 * p, index * 3, index * 3 + 7)
    pointer(before, data, head if specification['operation'] == 'state_default' else data)
    pointer(before, data + p, head if specification['operation'] == 'state_default' else data)
    pointer(before, data + 2 * p, 0 if specification['operation'] == 'state_init' else arena)
    pointer(before, data + 3 * p, head if specification['operation'] == 'state_default' else data + 3 * p)
    pointer(before, data + 4 * p, head if specification['operation'] == 'state_default' else data + 3 * p)
    for offset in [5 * p, 6 * p]:
        pointer(before, data + offset, 0 if specification['operation'] == 'state_init' else arena)
    pointer(before, data + 7 * p, base + 0x1c000)
    struct.pack_into('<I', before, data - base + 8 * p, 7)
    struct.pack_into('<b', before, data - base + 8 * p + 4, specification.get('result', -37))
    after = bytearray(before)
    mutable, expected_return = [], None
    operation = specification['operation']
    arguments = [label]
    if operation == 'single':
        character = specification['character']
        if not 0 <= character <= 65535:
            raise ValueError('Character outside u16')
        arguments += [destination, character]
        pointer(after, label, base + 0x1a000)
        after[label - base + p] = 2
        struct.pack_into('<H', after, label - base + p + 2, character)
        mutable = [(label, label + p), (label + p, label + p + 1), (label + p + 2, label + p + 4)]
    elif operation in ['default_a', 'default_b']:
        pointer(after, label, 0)
        after[label - base + p] = 1
        pointer(after, head, head)
        pointer(after, head + p, head)
        pointer(after, label + 4 * p, 0)
        mutable = [(label, label + p + 1), (head, head + 3 * p)]
    elif operation == 'destroy':
        expected_return = label
        if specification.get('owner', True):
            for slot in node_slots:
                after[flags - base + slot] = 0
            pointer(after, head, head)
            pointer(after, head + p, head)
            pointer(after, label + 4 * p, 0)
            mutable = [(head, head + 3 * p), (flags, flags + CAPACITY)]
    elif operation == 'state_default':
        arguments = [data]
        pointer(after, data, data)
        pointer(after, data + p, data)
        pointer(after, data + 3 * p, data + 3 * p)
        pointer(after, data + 4 * p, data + 3 * p)
        for offset in [2 * p, 5 * p, 6 * p, 7 * p]:
            pointer(after, data + offset, 0)
        struct.pack_into('<I', after, data - base + 8 * p, 0)
        struct.pack_into('<b', after, data - base + 8 * p + 4, 0)
        mutable = [(data, data + 8 * p + 5)]
    else:
        arguments = [data, arena, members, specification['clear'] & 0xffffffff]
        allocation = apply(occupied, specification.get('next', 0), (members + 15) >> 4)
        result = 0 if allocation['slot'] is None else storage + allocation['slot'] * stride
        pointer(after, data + 6 * p, arena)
        pointer(after, data + 7 * p, result)
        struct.pack_into('<I', after, data - base + 8 * p, members)
        struct.pack_into('<I', after, arena - base + 2 * p, allocation['next'])
        after[flags - base:flags - base + CAPACITY] = allocation['occupied']
        mutable = [(data + 6 * p, data + 8 * p + 4), (data + 2 * p, data + 3 * p),
                   (data + 5 * p, data + 6 * p), (flags, flags + CAPACITY), (arena + 2 * p, arena + 2 * p + 4)]
        expected_return = int(result != 0)
        if result:
            pointer(after, data + 2 * p, arena)
            pointer(after, data + 5 * p, arena)
            if specification['clear']:
                after[result - base:result - base + members] = bytes(members)
                mutable.append((result, result + members))
    readable = [(arena, arena + 2 * p + 4), (destination, destination + p), (label, label + 5 * p),
                (data, data + 8 * p + 5), (flags, flags + CAPACITY)]
    readable += [(node, node + 2 * p + 4) for node in nodes]
    return {'before': bytes(before), 'after': bytes(after), 'arguments': arguments, 'expectedReturn': expected_return,
            'mutable': mutable, 'readable': readable, 'base': base, 'operation': operation,
            'canonicalEntry': OPERATIONS[operation], 'pointerBytes': p, 'physicalBlockBytes': stride}
