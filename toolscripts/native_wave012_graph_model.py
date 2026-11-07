from native_wave012_graph_memory import Memory, SIZE
import native_wave012_graph_algorithms as algorithms


OPERATIONS = {'erase': 0x4c2d98, 'copy_label': 0x7555f0, 'copy_wrapper': 0x755720,
              'closure': 0x4c1edc, 'populate': 0x4c2744, 'intern': 0x4c1de8,
              'transform': 0x4c2494, 'compare': 0x1010c8, 'copy_bytes': 0x301a9c,
              'copy_aligned': 0x17821c}


def encode(spec, base, pointer_bytes, seed=0):
    if pointer_bytes not in [4, 8] or spec['operation'] not in OPERATIONS:
        raise ValueError('Unknown native graph layout or operation')
    memory = Memory(base, pointer_bytes, seed)
    p = pointer_bytes
    operation = spec['operation']
    kinds, arguments, expected, result_kind = [], [], None, 'void'
    if operation in ['compare', 'copy_bytes', 'copy_aligned']:
        count = spec['bytes']
        if not 0 <= count <= 128:
            raise ValueError('Memory helper exceeds fixture buffer domain')
        left, right = base + 0x28000 + spec.get('left_align', 0), base + 0x29000 + spec.get('right_align', 0)
        raw = bytes((index * 13 + 91) & 255 for index in range(count))
        memory.put(left, raw)
        memory.put(right, raw)
        different = spec.get('different', -1)
        if different >= 0:
            if different >= count:
                raise ValueError('Memory difference outside buffer')
            memory.setu(left + different, spec.get('left_byte', 120), 1)
            memory.setu(right + different, spec.get('right_byte', 119 if spec.get('positive', True) else 121), 1)
        if operation == 'copy_aligned' and (left | right) & 3:
            raise ValueError('Aligned helper fixture is unaligned')
        memory.seal()
        if operation == 'compare':
            expected = 0
            if different >= 0:
                expected = spec.get('left_byte', 120) - spec.get('right_byte', 119 if spec.get('positive', True) else 121)
                if not (left | right) & 3 and different // 4 < count // 4 and different % 4 in [1, 2]:
                    expected <<= 8 * (different % 4)
            result_kind = 'int'
        else:
            memory.put(left, memory.get(right, count))
            expected, result_kind = left + count, 'pointer'
        arguments, kinds = [left, right, count], ['pointer', 'pointer', 'integer']
    elif operation in ['erase', 'copy_label', 'copy_wrapper']:
        ranges = spec.get('ranges', [])
        memory.label_init(memory.label, 3, 0x7654, base + 0x27000, spec.get('old_ranges', ranges), True)
        if operation != 'erase':
            memory.label_init(memory.source_label, spec.get('kind', 3), spec.get('value', 0xa55a),
                              base + 0x27100, ranges, True)
        memory.pressure(spec.get('free_slots'), spec.get('cursor', 0))
        memory.seal()
        result_kind = 'int'
        if operation == 'erase':
            point = spec['point']
            if not 0 <= point <= 65535:
                raise ValueError('Point outside u16 fixture domain')
            arguments, kinds = [memory.label + 2 * p, point], ['pointer', 'integer']
            expected = algorithms.erase(memory, memory.label + 2 * p, point)
        else:
            source = memory.label if spec.get('self_copy') else memory.source_label
            arena = memory.arena if spec.get('provided_arena', True) else 0
            target = memory.ptr(source) if operation == 'copy_wrapper' else memory.ptr(memory.target_slot)
            expected = algorithms.copy_label(memory, memory.label, source, target, arena)
            arguments = [memory.label, source, arena] if operation == 'copy_wrapper' else [memory.label, source, memory.target_slot, arena]
            kinds = ['pointer'] * len(arguments)
    else:
        count = spec.get('count', 4)
        if not 0 <= count <= 32:
            raise ValueError('State graph exceeds 32 source-state fixture domain')
        memory.nfa_init(count)
        memory.state_init(memory.current)
        initial = bytes(spec.get('members', [1] + [0] * (count - 1) if count else []))
        if len(initial) != count:
            raise ValueError('Membership vector length differs from source count')
        memory.put(memory.members, initial)
        memory.setp(memory.current + 9 * p, memory.members)
        memory.setu(memory.current + 10 * p, count)
        for edge in spec.get('edges', []):
            source, destination, kind, value, ranges = edge
            if not 0 <= source < count or not 0 <= destination < count:
                raise ValueError('NFA transition identifier outside state table')
            memory.nfa_edge(source, destination, kind, value, ranges)
        for destination, kind, value, ranges in spec.get('pending', []):
            if not 0 <= destination < count:
                raise ValueError('Pending destination outside state table')
            memory.pending_edge(destination, kind, value, ranges)
        for index, old in enumerate(spec.get('existing', [])):
            if len(old) != count:
                raise ValueError('Interned membership size mismatch')
            state = memory.reserve(3)
            memory.state_init(state)
            buffer = base + 0x2a000 + index * 128
            memory.put(buffer, bytes(old))
            memory.setp(state + 9 * p, buffer)
            memory.setu(state + 10 * p, count)
            memory.append(memory.context + p, state)
        memory.pressure(spec.get('free_slots'), spec.get('cursor', 0))
        memory.seal()
        if operation == 'closure':
            arguments, kinds = [memory.context, memory.members], ['pointer', 'pointer']
            algorithms.closure(memory, memory.members)
        elif operation == 'populate':
            arguments, kinds = [memory.context, memory.state_slot], ['pointer', 'pointer']
            expected, result_kind = algorithms.populate(memory, memory.current), 'int'
        elif operation == 'intern':
            arguments, kinds = [memory.result_slot, memory.context, memory.members], ['pointer'] * 3
            memory.setp(memory.result_slot, algorithms.intern(memory, memory.members))
        else:
            arguments, kinds = [memory.context, memory.state_slot], ['pointer', 'pointer']
            expected, result_kind = algorithms.transform(memory), 'int'
    return memory.layout(operation, OPERATIONS[operation], arguments, kinds, expected, result_kind)
