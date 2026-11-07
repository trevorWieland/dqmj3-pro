import ctypes
import json

from native_wave012_ctor_runtime import immutable_equal
from native_wave013_common import ROOT
import squirrel_state045_model as model


def execute(library,name,seed=0,mask=b'a|tn'):
    a,c=model.native_abi(library);buffer=ctypes.create_string_buffer(model.SIZE+128)
    ctypes.memset(buffer,0x5a,ctypes.sizeof(buffer));base=ctypes.addressof(buffer)+64
    if base<=0xffffffff or base%8:raise ValueError('045 native execution requires widened aligned backing')
    function=lambda symbol:ctypes.cast(getattr(library,symbol),ctypes.c_void_p).value
    data=lambda symbol:ctypes.addressof((ctypes.c_ubyte*1).in_dll(library,symbol))
    addresses={'allocate':function('sq_fixture_allocate045'),'resize':function('sq_fixture_resize045'),
        'release':function('sq_fixture_release045'),'operations':data('sq_fixture_vm_operations045'),
        'template':data('sq_fixture_null045'),'sdkOperations':data('sq_sdk_operations045')}
    state=model.state(name,base,a,c,addresses,seed,mask);ctypes.memmove(base,state['before'],model.SIZE)
    for symbol,argument in [('sq_startup_bind040',base+model.SERVICES),('sq_startup_bind_memory045',base+model.MEMORY_SERVICES)]:
        binder=getattr(library,symbol);binder.argtypes=[ctypes.c_void_p];binder.restype=ctypes.c_bool
        if not binder(argument):raise RuntimeError('045 native rejected typed platform services')
    if name=='mask':
        parser=library.fn_0017875c;parser.argtypes=[ctypes.c_void_p,ctypes.c_void_p];parser.restype=ctypes.c_bool
        result=int(parser(base+model.VECTOR,base+model.INPUT))
    elif name=='shared':
        constructor=library.fn_0014c4c8;constructor.argtypes=[ctypes.c_void_p];constructor.restype=ctypes.c_void_p
        if constructor(base+model.SHARED)!=base+model.SHARED:raise RuntimeError('045 native shared constructor returned wrong owner')
        initializer=library.fn_0014a6a0;initializer.argtypes=[ctypes.c_void_p];initializer.restype=None
        initializer(base+model.SHARED);result=None
    else:raise ValueError('045 native execution kind unknown')
    after=ctypes.string_at(base,model.SIZE);raw=bytes(buffer);allocations,events=model.verified_heap(after,state)
    mutable=[(base+low,base+high) for low,high in state['fields']]
    mutable.extend((base+row['offset']-16,base+row['offset']+row['bytes']) for row in allocations if row['offset'] is not None)
    if not immutable_equal(state['before'],after,base,mutable):raise RuntimeError('045 native changed caller/unwritten/unallocated bytes')
    if raw[:64]!=bytes([0x5a])*64 or raw[-64:]!=bytes([0x5a])*64:raise RuntimeError('045 native outer caller guards changed')
    return {'returnedNormally':True,'returned':result,'state':state,'after':after,'allocations':allocations,'events':events,
        'mask':model.mask_state(after,state) if name=='mask' else None,'referenceArena':None,'sourceOnlyExecution':True,
        'actualWidenedPointers':True,'callerGuardsPreserved':True,'calleeSavedRegistersDirectlyObserved':False,'referenceCodeMapped':False}


def maps(library):
    data=lambda symbol:ctypes.addressof((ctypes.c_ubyte*1).in_dll(library,symbol))
    vtables={kind:data(symbol) for kind,symbol in [('table','sq_table_vtable019'),('closure','sq_native_closure_vtable013'),('string','sq_string_vtable015')]}
    bindings=json.loads((ROOT/'evidence/lanes/squirrel-state040/initialization045-table-bindings.json').read_text())['bindings']
    callbacks={ctypes.cast(getattr(library,row['sourceSymbol']),ctypes.c_void_p).value:row['canonicalAddress'] for row in bindings}
    if len(callbacks)!=57:raise ValueError('045 actual Windows callback identities unexpectedly alias')
    return vtables,callbacks
