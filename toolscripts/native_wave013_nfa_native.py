import ctypes

from native_wave012_ctor_runtime import immutable_equal
from native_wave013_common import sha
import native_wave013_nfa_data as services
import native_wave013_nfa_layout as model


def execute(library, binding, specification, original, seed=0):
    buffer = ctypes.create_string_buffer(model.SIZE + 128)
    ctypes.memset(buffer, 0x5a, ctypes.sizeof(buffer))
    base = ctypes.addressof(buffer) + 64
    if ctypes.sizeof(ctypes.c_void_p) != 8 or base <= 0xffffffff:
        raise RuntimeError('NFA did not exercise full-width native pointers')
    layout = model.encode(specification, base, 8, seed)
    projection = model.Projection(original['layout'], layout)
    for event in original['events']:
        if event['type'] == 'allocation':
            projection.allocate(event['address'], event['blocks'], event['kind'], event['caller'])
        elif event['type'] == 'write':
            projection.write(event['address'], event['bytes'], event['value'], event['pc'])
        else:
            raise ValueError('Unknown original semantic event')
    masks = projection.qualified_masks(original['after'])
    ctypes.memmove(base, layout['before'], model.SIZE)
    def call(name, arguments, kinds, pointer=False):
        function = getattr(library, name)
        function.argtypes = [ctypes.c_void_p if kind == 'pointer' else ctypes.c_uint for kind in kinds]
        function.restype = None if pointer == 'void' else ctypes.c_void_p if pointer else ctypes.c_int
        return function(*arguments)
    context, arena, text, builder = [base+value for value in [0x2000,0x200,0x22000,0x2100]]
    if 'direct_callback' in specification:
        lexical = None
        call('fn_004c1dc0', [builder], ['pointer'], True)
        result = call('fn_'+format(specification['direct_callback'],'08x'),
                      [builder,base+0x600,base+0x680,base+0x690], ['pointer']*4)
    elif 'transition_helper' in specification:
        lexical = None
        result = call('fn_00755818', [base+0x600,base+0x2400], ['pointer']*2, 'void')
    elif 'range_cycles' in specification or 'range_steps' in specification:
        lexical, result = None, 1
        steps = specification.get('range_steps', [{'insert': specification.get('range_initial', [1,5])},
                *[{'complement': True} for unused in range(specification.get('range_cycles', 0))]])
        for step in steps:
            if not result:
                break
            if 'insert' in step:
                result = call('fn_004c2e84', [base+0x2400,*step['insert']], ['pointer','integer','integer'])
            elif 'complement' in step:
                result = call('fn_004c3070', [base+0x2400], ['pointer'])
            elif 'intersection' in step or 'union' in step:
                operation = 'intersection' if 'intersection' in step else 'union'
                for first,last in step[operation]:
                    result = call('fn_004c2e84', [base+0x2440,first,last], ['pointer','integer','integer'])
                    if not result:
                        break
                if result:
                    result = call('fn_004c33dc' if operation == 'intersection' else 'fn_004c3028',
                                  [base+0x2400,base+0x2440], ['pointer','pointer'])
            else:
                raise ValueError('Unknown native range workflow operation')
    else:
        api_result = call('pattern_compile_nfa', [builder,context,arena,base+0x2600], ['pointer']*4)
        owner = int.from_bytes(ctypes.string_at(builder+24,8),'little')
        lexical, result = (0,api_result) if owner else (api_result,None)
    after = ctypes.string_at(base, model.SIZE)
    guards = bytes(buffer)
    if guards[:64] != bytes([0x5a])*64 or guards[-64:] != bytes([0x5a])*64:
        raise RuntimeError('Native NFA changed its outer memory guards')
    if not services.unchanged(binding):
        raise RuntimeError('Native NFA changed immutable Unicode data')
    allowed = [(base+start,base+start+count) for start,count in projection.translated_writes]
    allowed += [(base+low,base+high) for low,high in masks]
    if not immutable_equal(layout['before'], after, base, allowed):
        raise RuntimeError('Native NFA changed bytes outside original-written typed fields')
    stack_low, stack_high = ctypes.c_size_t(), ctypes.c_size_t()
    limits = ctypes.WinDLL('kernel32').GetCurrentThreadStackLimits
    limits.argtypes = [ctypes.POINTER(ctypes.c_size_t), ctypes.POINTER(ctypes.c_size_t)]
    limits.restype = None
    limits(ctypes.byref(stack_low), ctypes.byref(stack_high))
    if not 0 < stack_low.value < stack_high.value:
        raise RuntimeError('Native private stack bounds are unavailable')
    for low,high in masks:
        pointer = int.from_bytes(after[low:high], 'little')
        if high-low != 8 or not stack_low.value <= pointer < stack_high.value:
            raise RuntimeError('Excluded retired link does not point into this native thread stack')
    ignored = {index for low,high in masks for index in range(low,high)}
    differences = [i for i,(a,b) in enumerate(zip(projection.expected,after)) if a != b and i not in ignored]
    if result != original['result'] or lexical != original['lexical'] or differences:
        failure = RuntimeError('Native NFA returned normally with different defined non-private memory')
        failure.details = {'returnedNormally': True, 'immutableMemoryPreserved': True,
                           'originalResult': original['result'], 'sourceResult': result,
                           'differentOffsets': differences[:20], 'actualMemorySha256': sha(after),
                           'projectedMemorySha256': sha(projection.expected)}
        raise failure
    return {'returnedNormally': True, 'immutableMemoryPreserved': True, 'truePointersAbove32Bits': True,
            'fullTranslatedFixtureBytesCompared': model.SIZE, 'excludedRetiredPrivatePointerBytes': len(ignored),
            'everyOtherByteAgrees': True, 'excludedPointersVerifiedInNativeThreadStack': True, 'wholeMemoryEquivalenceClaimed': False,
            'actualMemorySha256': sha(after), 'projectedMemorySha256': sha(projection.expected),
            'originalAllocationEvents': len(projection.events)-sum(row['type']=='write' for row in projection.events)}
