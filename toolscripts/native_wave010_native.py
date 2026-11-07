import ctypes

import native_wave009_oracle as intervals
import native_wave010_model as model


NativeLink = intervals.NativeLink


class NativeStateData(ctypes.Structure):
    _fields_ = [('transitions', NativeLink), ('transition_arena', ctypes.c_void_p),
                ('pending', NativeLink), ('pending_arena', ctypes.c_void_p), ('data_arena', ctypes.c_void_p),
                ('members', ctypes.POINTER(ctypes.c_ubyte)), ('member_count', ctypes.c_uint), ('result', ctypes.c_byte)]


class NativeState(ctypes.Structure):
    _fields_ = [('collection', NativeLink), ('data', NativeStateData)]


class NativeCursor(ctypes.Structure):
    _fields_ = [('state', ctypes.POINTER(NativeState))]


class NativeContext(ctypes.Structure):
    _fields_ = [('unknown_00', ctypes.c_uint), ('initial', ctypes.POINTER(NativeState))]


class NativeEdge(ctypes.Structure):
    _fields_ = [('link', NativeLink), ('label', intervals.NativeSet)]


class NativeMismatch(RuntimeError):
    def __init__(self, actual_result, actual_state, answer):
        self.details = {'nativeWindowsReturnedNormally': True, 'guardedGraphOutsideCursorPreserved': True,
                        'actualResult': actual_result, 'actualState': actual_state, 'expected': answer}
        super().__init__('Native Windows returned a different state or result')


def encode(case, operation):
    model.validate(case)
    allocations = []
    def allocate(kind):
        storage = ctypes.create_string_buffer(ctypes.sizeof(kind) + 128)
        ctypes.memset(storage, 0x5a, ctypes.sizeof(storage))
        instance = kind.from_buffer(storage, 64)
        allocations.append(storage)
        return instance
    states = [allocate(NativeState) for _ in case['states']]
    cursor, context = allocate(NativeCursor), allocate(NativeContext)
    cursor.state = ctypes.pointer(states[case['initial'] if operation == 'control' else len(states) - 1])
    context.initial = ctypes.pointer(states[case['initial']])
    text = allocate(ctypes.c_ushort * (len(case['text']) + 1))
    text[:] = [*case['text'], 0]
    for instance, specification in zip(states, case['states']):
        instance.data.result = specification['result']
        instance.collection.previous = ctypes.pointer(instance.collection)
        instance.collection.next = ctypes.pointer(instance.collection)
        instance.data.transition_arena = None
        instance.data.pending.previous = ctypes.pointer(instance.data.pending)
        instance.data.pending.next = ctypes.pointer(instance.data.pending)
        instance.data.pending_arena, instance.data.data_arena = None, None
        instance.data.members, instance.data.member_count = None, 0
        sentinel = ctypes.pointer(instance.data.transitions)
        edges = [allocate(NativeEdge) for _ in specification['edges']]
        instance.data.transitions.previous = ctypes.pointer(edges[-1].link) if edges else sentinel
        instance.data.transitions.next = ctypes.pointer(edges[0].link) if edges else sentinel
        for index, (edge, spec) in enumerate(zip(edges, specification['edges'])):
            edge.link.previous = ctypes.pointer(edges[index - 1].link) if index else sentinel
            edge.link.next = ctypes.pointer(edges[index + 1].link) if index + 1 < len(edges) else sentinel
            edge.label.destination = ctypes.addressof(states[spec['destination']])
            edge.label.kind, edge.label.value.character = spec['kind'], spec.get('value', 0)
            inner = ctypes.pointer(edge.label.intervals.head)
            edge.label.intervals.owner = None
            nodes = [allocate(intervals.NativeNode) for _ in spec.get('ranges', [])]
            edge.label.intervals.head.previous = ctypes.pointer(nodes[-1].link) if nodes else inner
            edge.label.intervals.head.next = ctypes.pointer(nodes[0].link) if nodes else inner
            for number, (node, bounds) in enumerate(zip(nodes, spec.get('ranges', []))):
                node.first, node.last = bounds
                node.link.previous = ctypes.pointer(nodes[number - 1].link) if number else inner
                node.link.next = ctypes.pointer(nodes[number + 1].link) if number + 1 < len(nodes) else inner
    return {'states': states, 'cursor': cursor, 'context': context, 'text': text, 'allocations': allocations}


def execute(library, case, operation='match', mask=0):
    graph = encode(case, operation)
    states, cursor = graph['states'], graph['cursor']
    answer = model.match(case) if operation == 'match' else {
        'result': None, 'state': model.control(case['states'], case['initial'], mask)[0]}
    function = getattr(library, 'fn_004bed30' if operation == 'match' else 'fn_004becdc')
    if operation == 'match':
        function.argtypes = [ctypes.POINTER(NativeCursor), ctypes.POINTER(NativeContext), ctypes.POINTER(ctypes.c_ushort)]
        function.restype = ctypes.c_int
        arguments = [ctypes.byref(cursor), ctypes.byref(graph['context']), graph['text']]
    else:
        function.argtypes = [ctypes.POINTER(NativeCursor), ctypes.c_uint]
        function.restype = None
        arguments = [ctypes.byref(cursor), mask]
    before = [bytes(storage) for storage in graph['allocations']]
    result = function(*arguments)
    after = [bytes(storage) for storage in graph['allocations']]
    cursor_index = len(states)
    for index, (old, new) in enumerate(zip(before, after)):
        if index == cursor_index:
            old, new = old[:64] + old[64 + ctypes.sizeof(cursor):], new[:64] + new[64 + ctypes.sizeof(cursor):]
        if old != new:
            raise RuntimeError('Native Windows changed a graph field, input, padding or guard outside cursor')
    destination = ctypes.cast(cursor.state, ctypes.c_void_p).value
    by_address = {ctypes.addressof(state): index for index, state in enumerate(states)}
    state = by_address.get(destination)
    if result != answer['result'] or state != answer['state']:
        raise NativeMismatch(result, state, answer)
    if ctypes.sizeof(ctypes.c_void_p) != 8 or any(address <= 0xffffffff for address in by_address):
        raise RuntimeError('Host64 proof did not exercise true pointers above 32 bits')
    return {'result': result, 'state': state, 'nativeWindowsReturnedNormally': True,
            'guardedGraphOutsideCursorPreserved': True, 'truePointersAbove32Bits': True}
