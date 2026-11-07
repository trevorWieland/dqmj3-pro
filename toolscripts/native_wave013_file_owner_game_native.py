import ctypes

from native_wave012_ctor_runtime import immutable_equal
from native_wave013_common import sha
import native_wave013_nfa_data as unicode_services
import native_wave013_file_owner_game_state as model
from native_wave013_file_owner_game_projection import Projection
from native_wave013_file_owner_game_runtime import CALLBACKS
from native_wave013_file_owner_game_compare import SemanticMismatch


def execute(library,binding,specification,original,abi,seed=0,canonical=False):
    buffer=ctypes.create_string_buffer(model.SIZE+128);ctypes.memset(buffer,0x5a,ctypes.sizeof(buffer))
    base=ctypes.addressof(buffer)+64
    if ctypes.sizeof(ctypes.c_void_p)!=8 or base<=0xffffffff:raise RuntimeError('Owner did not exercise native widened pointers')
    callbacks={name:ctypes.cast(getattr(library,symbol),ctypes.c_void_p).value for name,symbol in CALLBACKS.items()}
    callbacks['game_heap_operations']=ctypes.addressof((ctypes.c_ubyte*16).in_dll(library,'pattern_game_heap_operations'))
    canonical=canonical and specification.get('game_operation')=='check'
    owner_ops=ctypes.addressof((ctypes.c_ubyte*48).in_dll(library,'pattern_file_owner_operations'))
    stream_ops=ctypes.addressof((ctypes.c_ubyte*96).in_dll(library,'pattern_owner_stream_operations'))
    empty=(ctypes.c_ushort*1).in_dll(library,'pattern_empty_text');empty_address=ctypes.addressof(empty)
    if empty[0]!=0:raise RuntimeError('Owner immutable empty text differs')
    layout=model.encode(specification,base,8,seed,abi,callbacks,owner_ops,stream_ops)
    value=Projection(original['layout'],layout,constants={original['emptyLiteralAddress']:empty_address})
    for event in original['events']:
        if event['type']=='arena_epoch':value.owner_identity=(event['address'],base+0x200)
        elif event['type']=='allocation':
            if not canonical:value.allocate(event['address'],event['blocks'],event['kind'],event['caller'],event['count'])
        elif event['type']=='external_heap':value.external_heap(event)
        elif not canonical or not 0x7400<=event['address']-original['layout']['base']<0x8000+model.CAPACITY*16:
            value.write(event['address'],event['bytes'],event['value'],event['pc'])
    if not canonical and original['arenaSnapshot'] is not None:value.caller_arena(original['arenaSnapshot'])
    value.service_expectations(original)
    masks=[] if canonical else value.qualified_masks(original['after'],original['quarantinedArenaOffsets'])
    ctypes.memmove(base,layout['before'],model.SIZE)
    def call(name,args,kinds,result='unsigned'):
        function=getattr(library,name)
        function.argtypes=[ctypes.c_void_p if kind=='pointer' else ctypes.c_uint for kind in kinds]
        function.restype=None if result=='void' else ctypes.c_void_p if result=='pointer' else ctypes.c_uint
        return function(*args)
    for name,offset in [('pattern_owner_bind_sync',0x5700),('pattern_owner_bind_locale',0x5600),('pattern_owner_bind_services',0x5800),('pattern_game_filter_bind_services',model.GAME_SERVICES)]:
        if call(name,[base+offset],['pointer'])!=1:raise RuntimeError('Owner native service binding rejected')
    operation=specification.get('game_operation','initialize')
    if operation=='construct':result=call('fn_00246e68',[base+model.SLOT],['pointer'],'void')
    elif operation=='initialize':result=call('fn_00246e00',[base+model.SLOT],['pointer'])
    elif operation=='destroy':result=call('fn_00246e74',[base+model.SLOT],['pointer'],'void')
    elif operation=='check':
        args=[base+model.SLOT,layout['gameTextPointer']]
        result=call('fn_006b5424' if canonical else 'pattern_game_filter_check',args if canonical else [base+0x200,*args],
            ['pointer','pointer'] if canonical else ['pointer','pointer','pointer'])
    else:raise ValueError('Unknown game source operation')
    after=ctypes.string_at(base,model.SIZE);guards=bytes(buffer)
    if guards[:64]!=bytes([0x5a])*64 or guards[-64:]!=bytes([0x5a])*64:raise RuntimeError('Owner native changed outer guards')
    if empty[0]!=0 or not unicode_services.unchanged(binding):raise RuntimeError('Owner native changed immutable Unicode/text service')
    allowed=[(base+row['offset'],base+row['offset']+row['size']) for row in layout['fields']]
    allowed.append((base+0x7400,base+0x8000+model.CAPACITY*32))
    if not immutable_equal(layout['before'],after,base,allowed):raise RuntimeError('Owner native changed immutable fixture bytes')
    low,high=ctypes.c_size_t(),ctypes.c_size_t()
    limits=ctypes.WinDLL('kernel32').GetCurrentThreadStackLimits
    limits.argtypes=[ctypes.POINTER(ctypes.c_size_t),ctypes.POINTER(ctypes.c_size_t)];limits.restype=None
    limits(ctypes.byref(low),ctypes.byref(high))
    for start,end in masks:
        pointer=int.from_bytes(after[start:end],'little')
        if end-start!=8 or not low.value<=pointer<high.value:raise RuntimeError('Owner excluded private link is outside native thread stack')
    ignored={index for start,end in masks for index in range(start,end)}
    if canonical:ignored.update(range(0x7400,0x8000+model.CAPACITY*32))
    differences=[index for index,(a,b) in enumerate(zip(value.expected,after)) if a!=b and index not in ignored]
    expected_result=original['result']
    actual={'result':result,'returnedNormally':True,'immutableMemoryPreserved':True,'memorySha256':sha(after)}
    if result!=expected_result or differences:
        raise SemanticMismatch(actual,original,'native owner return/typed fields differ: '+str(differences[:20]))
    return {'returnedNormally':True,'immutableMemoryPreserved':True,'truePointersAbove32Bits':True,
        'fullFixtureBytesObserved':model.SIZE,'excludedRetiredPrivatePointerBytes':sum(end-start for start,end in masks),
        'everyOtherComparedByteAgrees':True,'fullGraphCompared':not canonical,
        'canonicalWindowsScratchGraphProofClaimed':False,'expiredArenaOwnersNeverDereferencedByObserver':True,
        'logicalOwnerSnapshotCompared':bool(int.from_bytes(after[0x40000+abi['ownerRetired']:0x40004+abi['ownerRetired']],'little')),
        'wholeMemoryEquivalenceClaimed':False,'actualMemorySha256':sha(after),'projectedMemorySha256':sha(value.expected)}
