import ctypes

import native_wave009_oracle as intervals
import native_wave010_model as model


class NativeLink(ctypes.Structure):
    pass


NativeLink._fields_ = [('unknown_00', ctypes.c_uint), ('next', ctypes.POINTER(NativeLink))]


class NativeState(ctypes.Structure):
    _fields_ = [('unknown_00', ctypes.c_uint * 2), ('transitions', NativeLink),
                ('unknown_10', ctypes.c_uint * 7), ('result', ctypes.c_byte)]


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
        instance.result = specification['result']
        sentinel = ctypes.pointer(instance.transitions)
        edges = [allocate(NativeEdge) for _ in specification['edges']]
        instance.transitions.next = ctypes.pointer(edges[0].link) if edges else sentinel
        for index, (edge, spec) in enumerate(zip(edges, specification['edges'])):
            edge.link.next = ctypes.pointer(edges[index + 1].link) if index + 1 < len(edges) else sentinel
            edge.label.destination = ctypes.addressof(states[spec['destination']])
            edge.label.kind, edge.label.value = spec['kind'], spec.get('value', 0)
            inner = ctypes.pointer(edge.label.intervals)
            nodes = [allocate(intervals.NativeNode) for _ in spec.get('ranges', [])]
            edge.label.intervals.next = ctypes.pointer(nodes[0]) if nodes else inner
            for number, (node, bounds) in enumerate(zip(nodes, spec.get('ranges', []))):
                node.first, node.last = bounds
                node.next = ctypes.pointer(nodes[number + 1]) if number + 1 < len(nodes) else inner
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
