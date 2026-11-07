from squirrel_state049_model import INPUT, VECTOR


CANONICAL = {'fn_00173cb8': 0x173cb8, 'fn_00173d14': 0x173d14,
    'fn_001580cc': 0x1580cc, 'fn_00158128': 0x158128,
    'fn_00177160': 0x177160, 'fn_00177270': 0x177270,
    'fn_00166f0c': 0x166f0c, 'sq_vm_push022': 0x173d1c}


def perform(vm, state, invoke, read, write):
    scenario = state['scenario']
    if scenario == 'cold':
        return []
    a, c, base = state['abi'], state['core'], state['base']
    pointer_bytes = a['pointerBytes']
    get = lambda at, size=4: int.from_bytes(read(at, size), 'little')
    pointer = lambda at: get(at, pointer_bytes)
    results = []

    def call(name, arguments, result=False):
        value = invoke(name, arguments)
        if result:
            value = int(value) & 0xffffffff
            results.append({'function': name, 'result': value - (1 << 32) if value & 0x80000000 else value})

    def push_integer(value):
        call('fn_001580cc', [vm, value])

    def push_closure():
        root = vm + c['root']
        if get(root) != 0x0a000020:
            raise ValueError('049 caller requires the actual initialized root table')
        table = pointer(root + c['objectValue'])
        nodes = pointer(table + a['tableNodes'])
        count = get(table + a['tableCount'])
        if count > 1024:
            raise ValueError('049 caller lookup exceeds declared table shape')
        selected = None
        for index in range(count):
            node = nodes + index * a['nodeBytes']
            key = node + a['nodeKey']
            if get(key) != 0x08000010:
                continue
            string = pointer(key + c['objectValue'])
            size = get(string + a['stringLength'])
            if size != 6 or read(string + a['stringValue'], size) != b'assert':
                continue
            value = node + a['nodeValue']
            if get(value) != 0x08000200 or selected is not None:
                raise ValueError('049 actual named root method is absent or ambiguous')
            selected = pointer(value + c['objectValue'])
        if selected is None:
            raise ValueError('049 actual root lacks the measured assert registration')
        raw = bytearray(c['objectBytes'])
        raw[:4] = (0x08000200).to_bytes(4, 'little')
        raw[c['objectValue']:c['objectValue']+pointer_bytes] = selected.to_bytes(pointer_bytes, 'little')
        write(base + VECTOR, raw)
        call('sq_vm_push022', [vm, base + VECTOR])

    if scenario == 'push-pop':
        push_integer(-2147483648)
        call('fn_00158128', [vm, base + INPUT, -1])
        call('fn_00173cb8', [vm, 2])
    elif scenario in ['name-negative', 'name-positive']:
        push_closure()
        call('fn_00177160', [vm, -1 if scenario == 'name-negative' else 1, base + INPUT], True)
        call('fn_00173cb8', [vm, 1])
    elif scenario in ['valid-mask', 'invalid-mask', 'mask-clear']:
        push_closure()
        call('fn_00177270', [vm, -99999, 0 if scenario == 'mask-clear' else base + INPUT], True)
        call('fn_00173cb8', [vm, 1])
    elif scenario in ['wrong-type-name', 'wrong-type-mask']:
        push_integer(42)
        name = 'fn_00177160' if scenario == 'wrong-type-name' else 'fn_00177270'
        call(name, [vm, -1, base + INPUT], True)
        call('fn_00173cb8', [vm, 1])
    elif scenario in ['null-key', 'slot-integer']:
        call('fn_00173d14', [vm])
        call('fn_00158128', [vm, 0 if scenario == 'null-key' else base + INPUT, -1])
        push_integer(123)
        call('fn_00166f0c', [vm, -3, 0], True)
        call('fn_00173cb8', [vm, 3 if scenario == 'null-key' else 1])
    elif scenario == 'non-table':
        for value in [13, 17, 19]:
            push_integer(value)
        call('fn_00166f0c', [vm, -3, 0], True)
        call('fn_00173cb8', [vm, 3])
    else:
        raise ValueError('049 caller scenario is not declared')
    return results
