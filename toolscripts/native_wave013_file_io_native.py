import ctypes

from native_wave012_ctor_runtime import immutable_equal
from native_wave013_common import sha
import native_wave013_nfa_data as services
import native_wave013_file_io_layout as model


def execute(library, binding, specification, original, seed=0):
    buffer = ctypes.create_string_buffer(model.SIZE + 128)
    ctypes.memset(buffer, 0x5a, ctypes.sizeof(buffer))
    base = ctypes.addressof(buffer) + 64
    if ctypes.sizeof(ctypes.c_void_p) != 8 or base <= 0xffffffff:
        raise RuntimeError('NFA did not exercise full-width native pointers')
    callbacks={name:ctypes.cast(getattr(library,symbol),ctypes.c_void_p).value for name,symbol in [('size','pattern_fixture_size'),('read','pattern_fixture_read')]}
    layout = model.encode(specification, base, 8, seed,callbacks)
    empty_array=(ctypes.c_ushort*1).in_dll(library,'pattern_empty_text')
    empty_address=ctypes.addressof(empty_array)
    if empty_array[0]!=0:
        raise RuntimeError('Source NUL UTF16 data service differs')
    projection = model.Projection(original['layout'], layout,
        constants={original['emptyLiteralAddress']:empty_address})
    for event in original['events']:
        if event['type']=='arena_epoch':
            projection.owner_identity=(event['address'],base+0x200)
        elif event['type'] == 'allocation':
            projection.allocate(event['address'], event['blocks'], event['kind'], event['caller'], event.get('count',0))
        elif event['type'] == 'write':
            projection.write(event['address'], event['bytes'], event['value'], event['pc'])
        else:
            raise ValueError('Unknown original semantic event')
    if original['arenaSnapshot'] is not None:
        projection.caller_arena(original['arenaSnapshot'])
    masks = projection.qualified_masks(original['after'],original.get('quarantinedArenaOffsets'))
    ctypes.memmove(base, layout['before'], model.SIZE)
    def call(name, arguments, kinds, pointer=False):
        function = getattr(library, name)
        function.argtypes = [ctypes.c_void_p if kind == 'pointer' else ctypes.c_uint for kind in kinds]
        function.restype = None if pointer == 'void' else ctypes.c_void_p if pointer else ctypes.c_uint
        return function(*arguments)
    result=call('pattern_process_file_rules',[base+0x200,*layout['rootArguments']],
        ['pointer',*layout['rootArgumentKinds']])
    lexical,nfa_result,compiler_result,matcher_result=None,None,None,None
    after = ctypes.string_at(base, model.SIZE)
    guards = bytes(buffer)
    if guards[:64] != bytes([0x5a])*64 or guards[-64:] != bytes([0x5a])*64:
        raise RuntimeError('Native NFA changed its outer memory guards')
    if empty_array[0]!=0:
        raise RuntimeError('Native outer changed its immutable empty literal')
    if not services.unchanged(binding):
        raise RuntimeError('Native NFA changed immutable Unicode data')
    allowed = [(base+start,base+start+count) for start,count in projection.translated_writes]
    allowed += [(base+low,base+high) for low,high in masks]
    allowed += [(base+row['offset'],base+row['offset']+row['size']) for row in layout['fields']
                if row['name'].startswith('outputs.') or row['name'].startswith('provider.') or row['name'].startswith('arena.')]
    allowed.append((base+0x7400,base+0x8000+model.CAPACITY*32))
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
    expected_result = original['result']
    if (result != expected_result or lexical != original['lexical'] or differences
        or nfa_result != original['nfaResult'] or compiler_result != original['compilerResult']
        or matcher_result != original['matcherResult']):
        failure = RuntimeError('Native NFA returned normally with different defined non-private memory')
        failure.details = {'returnedNormally': True, 'immutableMemoryPreserved': True,
                           'originalResult': original['result'], 'sourceResult': result,
                           'differentOffsets': differences[:20], 'actualMemorySha256': sha(after),
                           'projectedMemorySha256': sha(projection.expected)}
        raise failure
    return {'returnedNormally': True, 'immutableMemoryPreserved': True, 'truePointersAbove32Bits': True,
            'fullTranslatedFixtureBytesCompared': model.SIZE, 'excludedRetiredPrivatePointerBytes': len(ignored),
            'everyOtherByteAgrees': True, 'excludedPointersVerifiedInNativeThreadStack': True,
            'untouchedRawBufferPaddingPointerFields':sum(row.get('qualification')=='untouched-historical-pointer-in-current-raw-membership-padding' for row in projection.masked.values()), 'wholeMemoryEquivalenceClaimed': False,
            'actualMemorySha256': sha(after), 'projectedMemorySha256': sha(projection.expected),
            'originalAllocationEvents': len(projection.events)-sum(row['type']=='write' for row in projection.events)}


def canonical(library,binding,specification,original,seed=0):
    buffer=ctypes.create_string_buffer(model.SIZE+128)
    ctypes.memset(buffer,0x5a,ctypes.sizeof(buffer))
    base=ctypes.addressof(buffer)+64
    callbacks={name:ctypes.cast(getattr(library,symbol),ctypes.c_void_p).value for name,symbol in [('size','pattern_fixture_size'),('read','pattern_fixture_read')]}
    layout=model.encode(specification,base,8,seed,callbacks)
    projection=model.Projection(original['layout'],layout)
    for event in original['events']:
        if event['type']!='write':
            continue
        offset=event['address']-original['layout']['base']
        if 0x7400<=offset<0x8000+model.CAPACITY*16:
            continue
        projection.write(event['address'],event['bytes'],event['value'],event['pc'])
    ctypes.memmove(base,layout['before'],model.SIZE)
    function=library.fn_004c4104
    function.argtypes=[ctypes.c_void_p if kind=='pointer' else ctypes.c_uint for kind in layout['rootArgumentKinds']]
    function.restype=ctypes.c_uint
    result=function(*layout['rootArguments'])
    after=ctypes.string_at(base,model.SIZE)
    raw=bytes(buffer)
    if raw[:64]!=bytes([0x5a])*64 or raw[-64:]!=bytes([0x5a])*64 or not services.unchanged(binding):
        raise RuntimeError('Canonical file source changed guards or Unicode data')
    scratch=(0x7400,0x8000+model.CAPACITY*32)
    allowed=[(base+scratch[0],base+scratch[1])]
    allowed += [(base+row['offset'],base+row['offset']+row['size']) for row in layout['fields']
                if row['name'].startswith('outputs.') or row['name'].startswith('provider.')]
    if not immutable_equal(layout['before'],after,base,allowed):
        raise RuntimeError('Canonical file source changed immutable inputs or non-output fixture bytes')
    differences=[index for index,(a,b) in enumerate(zip(projection.expected,after)) if a!=b and not scratch[0]<=index<scratch[1]]
    if result!=original['result'] or differences:
        failure=RuntimeError('Canonical file source returned normally with different persistent buffers/IO state')
        failure.details={'returnedNormally':True,'immutableMemoryPreserved':True,'actualReturn':result,
            'expectedReturn':original['result'],'differentOffsets':differences[:20]}
        raise failure
    return {'returnedNormally':True,'persistentBuffersFlagsAndIoStateAgree':True,
        'canonicalWindowsScratchGraphProofClaimed':False,'scratchGraphCompared':False,
        'expiredArenaOwnersNeverDereferencedByObserver':True,
        'fullGraphNativeProofUsesSeparateKnownCallerOwnedArenaApi':True}
