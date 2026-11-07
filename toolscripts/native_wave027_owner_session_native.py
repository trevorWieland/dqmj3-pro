import ctypes

from native_wave012_ctor_runtime import immutable_equal
from native_wave013_common import sha
from native_wave013_file_owner_game_runtime import CALLBACKS
from native_wave013_file_owner_game_compare import SemanticMismatch
from native_wave027_owner_session_compare import compare
import native_wave027_owner_session_state as model
import native_wave013_nfa_data as unicode_services


def execute(library,binding,specification,original,abi,seed=0):
    buffer=ctypes.create_string_buffer(model.SIZE+128);ctypes.memset(buffer,0x5a,ctypes.sizeof(buffer))
    base=ctypes.addressof(buffer)+64
    if ctypes.sizeof(ctypes.c_void_p)!=8 or base<=0xffffffff or base%8:
        raise RuntimeError('Session requires aligned actual native widened pointers')
    def function(name):return ctypes.cast(getattr(library,name),ctypes.c_void_p).value
    def object(name):return ctypes.addressof((ctypes.c_ubyte*1).in_dll(library,name))
    callbacks={key:function(name) for key,name in CALLBACKS.items()}
    callbacks.update({key:function(name) for key,name in {
        'session_work':'owner_archive_work','session_mount':'owner_archive_mount','session_unmount':'owner_archive_unmount',
        'session_open':'owner_archive_open','session_release':'owner_archive_release','session_delete':'owner_archive_delete',
        'session_failure':'owner_archive_failure'}.items()})
    callbacks.update({'game_heap_operations':object('pattern_game_heap_operations'),
        'archive_operations':object('owner_session_archive_operations'),'archive_file_operations':object('owner_archive_file_operations')})
    layout=model.encode({**specification,'portable_arm':True},base,8,seed,abi,callbacks,
        object('pattern_file_owner_operations'),object('pattern_owner_stream_operations'))
    ctypes.memmove(base,layout['before'],model.SIZE)
    def call(name,args,void=False):
        value=getattr(library,name);value.argtypes=[ctypes.c_void_p]*len(args)
        value.restype=None if void else ctypes.c_uint
        return value(*args)
    for name,offset in [('pattern_owner_bind_sync',0x5700),('pattern_owner_bind_locale',0x5600),
        ('pattern_owner_bind_services',0x5800),('pattern_game_filter_bind_services',model.GAME_SERVICES)]:
        if call(name,[base+offset])!=1:raise RuntimeError('Session native service binding rejected')
    call('fn_00246e68',[base+model.SLOT],True)
    initialized=call('fn_00246e00',[base+model.SLOT])
    stages=[{'stage':'initialized','result':initialized,'memory':ctypes.string_at(base,model.SIZE)}]
    result=call('pattern_game_filter_check',[base+0x200,base+model.SLOT,layout['gameTextPointer']])
    stages.append({'stage':'checked','result':result,'memory':ctypes.string_at(base,model.SIZE)})
    call('fn_00246e74',[base+model.SLOT],True)
    after=ctypes.string_at(base,model.SIZE);guards=bytes(buffer)
    if guards[:64]!=bytes([0x5a])*64 or guards[-64:]!=bytes([0x5a])*64:
        raise RuntimeError('Session native changed outer guards')
    allowed=[(base+row['offset'],base+row['offset']+row['size']) for row in layout['fields']]
    allowed.append((base+0x7400,base+0x8000+model.CAPACITY*32))
    if not immutable_equal(layout['before'],after,base,allowed):raise RuntimeError('Session native changed immutable fixture')
    empty=object('pattern_empty_text')
    if ctypes.string_at(empty,2)!=bytes(2) or not unicode_services.unchanged(binding):
        raise RuntimeError('Session native changed immutable text/data provider')
    arena=after[0x200:0x218];constructed=arena!=layout['before'][0x200:0x218]
    snapshot=[int.from_bytes(arena[0:8],'little'),int.from_bytes(arena[8:16],'little'),int.from_bytes(arena[16:20],'little')] if constructed else None
    low,high=ctypes.c_size_t(),ctypes.c_size_t();limits=ctypes.WinDLL('kernel32').GetCurrentThreadStackLimits
    limits.argtypes=[ctypes.POINTER(ctypes.c_size_t),ctypes.POINTER(ctypes.c_size_t)];limits.restype=None
    limits(ctypes.byref(low),ctypes.byref(high))
    actual={'layout':layout,'after':after,'result':result,'returnedNormally':True,'immutableMemoryPreserved':True,
        'memorySha256':sha(after),'arenaIdentities':[base+0x200] if constructed else [],'arenaSnapshot':snapshot,
        'emptyLiteralAddress':empty,'lifetime':{'readBeforeReinitialization':[]},'ownershipReadViolations':[],
        'quarantinedArenaOffsets':[],'stageSnapshots':stages,'stackRange':[low.value,high.value],
        'nativeReadInstructionObserverActive':False,'knownCallerArena':base+0x200,'sourceOnlyNativeLibrary':True,'callerArenaKnownBeforeInvocation':True}
    verdict=compare(actual,original)
    return actual,{**verdict,'trueNativePointersAbove32Bits':True,'nativeActualAlignmentChecked':True,
        'nativeReadInstructionObserverActive':False,'nativeCanonicalScratchPointerIdentityClaimed':False,
        'callerOwnedPortableArenaObserved':True,'nativeConstructorInvocationCountObserved':False,'immutableUnicodeAndArchiveDataPreserved':True}
