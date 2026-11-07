from squirrel_state045_model import SIZE, POOL, CAPACITY, SHARED, VM, SERVICES
from squirrel_state045_model import MEMORY_SERVICES, INPUT, VECTOR, CONTEXT, SDK_HEAP
from squirrel_state045_model import abi, native_abi, allocations, verified_heap, mask_state
from squirrel_state045_model import state as inherited_state


FRAME_KEYS = ['frameBytes', 'instruction', 'literals', 'closure', 'generator', 'traps',
    'previousBase', 'previousTop', 'target', 'calls', 'root', 'varargsSize', 'varargsBase']


def frame_abi(graph):
    row = next(row for row in graph['readonlyObjects'] if row['symbol'] == 'sq_fixture_frame_layout049')
    raw = next(data[row['address']-at:row['address']-at+row['bytes']] for at, data in graph['blocks']
        if at <= row['address'] < row['address']+row['bytes'] <= at+len(data))
    return dict(zip(FRAME_KEYS, [int.from_bytes(raw[index:index+4], 'little')
        for index in range(0, len(raw), 4)], strict=True))


def state(name, base, a, c, addresses, seed=0, mask=b'a|tn'):
    result = inherited_state('mask' if name == 'factory' else name,
                             base, a, c, addresses, seed, mask)
    result['name'] = name
    result['stackSize'] = 64
    return result
