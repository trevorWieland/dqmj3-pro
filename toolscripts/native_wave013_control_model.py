from native_wave012_graph_memory import Memory, SIZE
from native_wave012_graph_algorithms import closure, intern


OPERATIONS = {'control': 0x4c281c, 'construct_control': 0x755584}


def encode(spec, base, pointer_bytes, seed=0):
    if pointer_bytes not in [4, 8] or spec['operation'] not in OPERATIONS:
        raise ValueError('Unknown control graph layout or operation')
    memory = Memory(base, pointer_bytes, seed)
    p = pointer_bytes
    operation = spec['operation']
    if operation == 'construct_control':
        memory.label_init(memory.label, 3, 0xa55a, base + 0x27000, [[1, 3]])
        memory.seal()
        memory.setp(memory.label, memory.ptr(memory.target_slot))
        memory.setu(memory.label + p, 4, 1)
        memory.setu(memory.label + p + 2, spec['bit'], 1)
        return memory.layout(operation, OPERATIONS[operation], [memory.label, memory.target_slot, spec['bit']],
                             ['pointer', 'pointer', 'integer'], None, 'void')
    count = spec.get('count', 4)
    if not 0 <= count <= 32:
        raise ValueError('Control fixture exceeds32 source states')
    memory.nfa_init(count)
    memory.state_init(memory.current)
    members = bytes(spec.get('members', [0] * count))
    if len(members) != count:
        raise ValueError('Membership vector length differs')
    memory.put(memory.members, members)
    memory.setp(memory.current + 9 * p, memory.members)
    memory.setu(memory.current + 10 * p, count)
    for source, destination, kind, value, ranges in spec.get('edges', []):
        if not 0 <= source < count or not 0 <= destination < count:
            raise ValueError('NFA source or destination outside table')
        memory.nfa_edge(source, destination, kind, value, ranges)
    for destination, bit in spec.get('pending', []):
        if not 0 <= destination < count or not 0 <= bit <= 255:
            raise ValueError('Control destination/bit outside finite domain')
        memory.pending_edge(destination, 4, bit)
    for index, old in enumerate(spec.get('existing', [])):
        if len(old) != count:
            raise ValueError('Interned membership size differs')
        state = memory.reserve(3)
        memory.state_init(state)
        buffer = base + 0x2a000 + index * 128
        memory.put(buffer, bytes(old))
        memory.setp(state + 9 * p, buffer)
        memory.setu(state + 10 * p, count)
        memory.append(memory.context + p, state)
    memory.pressure(spec.get('free_slots'), spec.get('cursor', 0))
    memory.seal()
    expected = transform(memory)
    return memory.layout(operation, OPERATIONS[operation], [memory.context, memory.state_slot],
                         ['pointer', 'pointer'], expected, 'int')


def transform(memory):
    p, state = memory.p, memory.current
    head = state + 5 * p
    link = memory.ptr(head + p)
    count = memory.source_count
    while link != head:
        selected = link
        blocks = (count + 15) >> 4
        members = memory.allocate(blocks)
        if not members:
            return 0
        old_members = memory.ptr(state + 9 * p)
        memory.put(members, memory.get(old_members, count))
        destination = memory.ptr(selected + 2 * p)
        memory.setu(members + memory.uint(destination + 5 * p), 1, 1)
        bit = memory.uint(selected + 3 * p + 2, 1)
        other = memory.ptr(head + p)
        while other != head:
            following = memory.ptr(other + p)
            if other != selected and memory.uint(other + 3 * p + 2, 1) == bit:
                destination = memory.ptr(other + 2 * p)
                memory.setu(members + memory.uint(destination + 5 * p), 1, 1)
                memory.remove(other)
                memory.destroy(other + 2 * p)
                memory.free(other, 2)
            other = following
        closure(memory, members)
        if memory.get(members, count) != memory.get(old_members, count):
            target = intern(memory, members)
            if not target:
                return 0
            edge = memory.allocate(2)
            if not edge:
                return 0
            memory.label_default(edge + 2 * p)
            memory.append(state + 2 * p, edge)
            memory.setp(edge + 2 * p, target)
            memory.setu(edge + 3 * p, 4, 1)
            memory.setu(edge + 3 * p + 2, bit, 1)
        memory.free(members, blocks)
        link = memory.ptr(selected + p)
        memory.remove(selected)
        memory.destroy(selected + 2 * p)
        memory.free(selected, 2)
    return 1


def fixtures():
    cases = [{'operation': 'construct_control', 'bit': bit} for bit in range(256)]
    patterns = [[], [[0, 0]], [[0, 0], [1, 0]], [[0, 0], [1, 1]],
                [[0, 255], [1, 255], [2, 31]], [[0, 32], [1, 128], [2, 32]],
                [[2, 7], [1, 3], [0, 7], [3, 3]]]
    for pending in patterns:
        for initial in [[0, 0, 0, 0], [1, 0, 0, 0], [1, 1, 1, 1]]:
            for free in [0, 1, 2, 3, 4, 5, 6, 8, 12, 24, None]:
                for epsilon in [False, True]:
                    edges = [[0, 1, 1, 0, []], [1, 2, 1, 0, []], [2, 0, 1, 0, []]] if epsilon else []
                    cases.append({'operation': 'control', 'count': 4, 'pending': pending, 'members': initial,
                                  'free_slots': free, 'edges': edges})
    for count in [0, 1, 3, 17, 32]:
        for initial in [[0] * count, [7] * count]:
            cases.append({'operation': 'control', 'count': count, 'members': initial,
                          'pending': [[0, 255]] if count else []})
    for bit in range(256):
        cases.append({'operation': 'control', 'count': 2, 'pending': [[0, bit], [1, bit]],
                      'existing': [[1, 1]]})
    return cases
