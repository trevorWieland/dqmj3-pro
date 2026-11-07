import ctypes

from native_wave012_ctor_runtime import immutable_equal
from native_wave013_common import sha
import native_wave013_nfa_data as services
import native_wave013_outer_layout as model


def execute(library, binding, specification, original, seed=0):
    buffer = ctypes.create_string_buffer(model.SIZE + 128)
    ctypes.memset(buffer, 0x5a, ctypes.sizeof(buffer))
    base = ctypes.addressof(buffer) + 64
    if ctypes.sizeof(ctypes.c_void_p) != 8 or base <= 0xffffffff:
        raise RuntimeError('NFA did not exercise full-width native pointers')
    layout = model.encode(specification, base, 8, seed)
    empty_array=(ctypes.c_ushort*1).in_dll(library,'pattern_empty_text')
    empty_address=ctypes.addressof(empty_array)
    if empty_array[0]!=0:
        raise RuntimeError('Source NUL UTF16 data service differs')
    projection = model.Projection(original['layout'], layout,
        owner_identity=(original['arenaIdentity'],base+0x200),
        constants={original['emptyLiteralAddress']:empty_address})
    for event in original['events']:
        if event['type'] == 'allocation':
            projection.allocate(event['address'], event['blocks'], event['kind'], event['caller'], event.get('count',0))
        elif event['type'] == 'write':
            projection.write(event['address'], event['bytes'], event['value'], event['pc'])
        else:
            raise ValueError('Unknown original semantic event')
    if 'leaf' not in specification:
        projection.caller_arena(original['arenaSnapshot'])
    masks = projection.qualified_masks(original['after'],original.get('quarantinedArenaOffsets'))
    ctypes.memmove(base, layout['before'], model.SIZE)
    def call(name, arguments, kinds, pointer=False):
        function = getattr(library, name)
        function.argtypes = [ctypes.c_void_p if kind == 'pointer' else ctypes.c_uint for kind in kinds]
        function.restype = None if pointer == 'void' else ctypes.c_void_p if pointer else ctypes.c_int
        return function(*arguments)
    if 'leaf' in specification:
        entry={'zero-any':'fn_00158f6c','zero-aligned':'fn_00301f50',
               'arena-constructor':'fn_004c3b08','arena-init':'fn_004c3974'}[specification['leaf']]
        arguments=[base+0x5000+specification.get('alignment',0),specification.get('bytes',0)]
        kinds,pointer=['pointer','integer'],True
        if specification['leaf']=='arena-constructor':
            arguments,kinds,pointer=[base+0x200],['pointer'],'void'
        elif specification['leaf']=='arena-init':
            arguments,kinds,pointer=[base+0x200,base+0x7400],['pointer','pointer'],'void'
        result=call(entry,arguments,kinds,pointer)
    else:
        result=call('pattern_process_candidates',[base+0x200,*layout['rootArguments']],
            ['pointer',*layout['rootArgumentKinds']],'void')
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
                if row['name']=='outputs.flags']
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
    expected_result = projection.pointer(original['result']) if specification.get('leaf','').startswith('zero-') else original['result']
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
    if base<=0xffffffff:
        raise RuntimeError('Canonical native call did not exercise full pointers')
    layout=model.encode(specification,base,8,seed)
    ctypes.memmove(base,layout['before'],model.SIZE)
    function=library.fn_004c3c20
    function.argtypes=[ctypes.c_void_p if kind=='pointer' else ctypes.c_uint for kind in layout['rootArgumentKinds']]
    function.restype=None
    function(*layout['rootArguments'])
    after=ctypes.string_at(base,model.SIZE)
    raw=bytes(buffer)
    if raw[:64]!=bytes([0x5a])*64 or raw[-64:]!=bytes([0x5a])*64:
        raise RuntimeError('Canonical native outer changed outer guards')
    count=len(specification.get('candidates',['a']))
    allowed=[(base+0x7400,base+0x8000+model.CAPACITY*32)]
    if count:
        allowed.append((base+0x4000,base+0x4000+count*4))
    if not immutable_equal(layout['before'],after,base,allowed) or not services.unchanged(binding):
        raise RuntimeError('Canonical native outer changed immutable input or non-scratch memory')
    expected=original['after'][0x4000:0x4000+count*4]
    actual=after[0x4000:0x4000+count*4]
    if actual!=expected:
        failure=RuntimeError('Canonical native flags differ after normal return')
        failure.details={'returnedNormally':True,'immutableMemoryPreserved':True,
            'actualFlags':list(actual),'expectedFlags':list(expected)}
        raise failure
    return {'returnedNormally':True,'flagsAgree':True,'immutableInputsAndOuterGuardsPreserved':True,
        'canonicalWindowsPointerIdentityProofClaimed':False,'scratchGraphCompared':False,
        'postReturnArenaOwnerLifetime':'expired canonical local object; observer never dereferences it',
        'fullGraphNativeProofUsesSeparateKnownCallerOwnedArenaApi':True}
