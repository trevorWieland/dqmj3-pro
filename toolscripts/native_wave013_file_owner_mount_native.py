import ctypes

from native_wave013_common import sha
from native_wave013_file_owner_mount_state import encode,SIZE,OWNER
from native_wave013_file_owner_runtime import CALLBACKS
from native_wave013_file_owner_mount_projection import Projection
from native_wave012_ctor_runtime import immutable_equal


def execute(library,specification,original,abi,seed=0):
    buffer=ctypes.create_string_buffer(SIZE+128);ctypes.memset(buffer,0x5a,ctypes.sizeof(buffer))
    base=ctypes.addressof(buffer)+64
    if ctypes.sizeof(ctypes.c_void_p)!=8 or base<=0xffffffff:raise RuntimeError('Mount proof did not exercise widened native pointers')
    callbacks={name:ctypes.cast(getattr(library,symbol),ctypes.c_void_p).value for name,symbol in CALLBACKS.items()}
    owner_ops=ctypes.addressof((ctypes.c_ubyte*48).in_dll(library,'pattern_file_owner_operations'))
    stream_ops=ctypes.addressof((ctypes.c_ubyte*96).in_dll(library,'pattern_owner_stream_operations'))
    layout=encode(specification,base,8,seed,abi,callbacks,owner_ops,stream_ops)
    expected=Projection(original['layout'],layout)
    for event in original['events']:
        if event['type']=='external_heap':expected.external_heap(event)
        else:expected.write(event['address'],event['bytes'],event['value'],event['pc'])
    expected.service_expectations(original)
    ctypes.memmove(base,layout['before'],SIZE)
    for name,offset in [('pattern_owner_bind_sync',0x5700),('pattern_owner_bind_services',0x5800)]:
        function=getattr(library,name);function.argtypes=[ctypes.c_void_p];function.restype=ctypes.c_int
        if function(base+offset)!=1:raise RuntimeError('Native mount service binding refused')
    operation=specification['operation']
    name='fn_0044f54c' if operation=='allocate' else 'fn_004c3e08' if operation=='initialize' else 'fn_004c4068'
    function=getattr(library,name);function.argtypes=[ctypes.c_void_p,ctypes.c_uint] if operation=='allocate' else [ctypes.c_void_p]
    function.restype=None if operation=='allocate' else ctypes.c_uint
    result=function(base+OWNER+8,specification.get('requested_bytes',65536)) if operation=='allocate' else function(base+OWNER)
    after=ctypes.string_at(base,SIZE);raw=bytes(buffer)
    if raw[:64]!=bytes([0x5a])*64 or raw[-64:]!=bytes([0x5a])*64:raise RuntimeError('Native mount changed outer guards')
    mutable=[(base+row['offset'],base+row['offset']+row['size']) for row in layout['fields']]
    if not immutable_equal(layout['before'],after,base,mutable):raise RuntimeError('Native mount changed immutable fixture bytes')
    differences=[index for index,(a,b) in enumerate(zip(expected.expected,after)) if a!=b]
    if result!=original['result'] or differences:
        error=RuntimeError('Normally returning native mount source differs: '+str(list(map(hex,differences[:20]))))
        error.details={'returnedNormally':True,'immutableMemoryPreserved':True,'result':result,'expectedResult':original['result']}
        raise error
    return {'returnedNormally':True,'immutableMemoryPreserved':True,'truePointersAbove32Bits':True,
        'allNativeFixtureBytesCompared':SIZE,'gameOwnedTypedFieldsAgree':True,'actualMemorySha256':sha(after),
        'originalOpaquePlatformWorkWrites':expected.platform_work_writes,'nativePlatformWorkPreserved':True,
        'wholeMemoryEquivalenceClaimed':False,'originalSdkCacheLayoutCopiedToNative':False}
