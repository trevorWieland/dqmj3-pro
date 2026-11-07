import ctypes

from native_wave012_ctor_runtime import immutable_equal
import squirrel_state040_model as model


def finish(name,result,after,state):
    base=state['base'];a=state['abi']
    allocations=model.verified_allocations(after,state)
    mutable=[(base+row['offset'],base+row['offset']+row['size']) for row in state['fields']]
    mutable.extend((base+row['offset'],base+row['offset']+row['bytes']) for row in allocations if row['offset'] is not None)
    if not immutable_equal(state['before'],after,base,mutable):raise RuntimeError('040 constructor changed an unwritten field or nonprivate guard byte')
    expected=base+(model.SHARED if name=='fn_0014c4c8' else model.VM)
    return {'layout':state,'after':after,'returnedSelf':result==expected,'state':model.observe(after,state),
        'allocations':allocations,'returnedNormally':True,'immutableMemoryPreserved':True}


def execute(library,name,seed=0,has_head=True):
    a=model.native_abi(library);buffer=ctypes.create_string_buffer(model.SIZE+128)
    ctypes.memset(buffer,0x5a,ctypes.sizeof(buffer));base=ctypes.addressof(buffer)+64
    if base<=0xffffffff or base%8:raise RuntimeError('040 native constructor lacks aligned widened addresses')
    address=lambda symbol:ctypes.cast(getattr(library,symbol),ctypes.c_void_p).value
    data=lambda symbol:ctypes.addressof((ctypes.c_ubyte*1).in_dll(library,symbol))
    state=model.state(name,base,a,{'allocate':address('sq_startup_fixture_allocate040'),
        'operations':data('sq_startup_fixture_vm_operations040'),'template':data('sq_startup_fixture_null040'),
        'sdkOperations':data('sq_startup_sdk_operations040')},seed,has_head)
    ctypes.memmove(base,state['before'],model.SIZE)
    library.sq_startup_bind040.argtypes=[ctypes.c_void_p];library.sq_startup_bind040.restype=ctypes.c_bool
    if not library.sq_startup_bind040(base+model.SERVICES):raise RuntimeError('040 source rejected typed startup services')
    function=getattr(library,name);function.restype=ctypes.c_void_p
    function.argtypes=[ctypes.c_void_p] if name=='fn_0014c4c8' else [ctypes.c_void_p,ctypes.c_void_p]
    result=function(base+model.SHARED) if name=='fn_0014c4c8' else function(base+model.VM,base+model.SHARED)
    after=ctypes.string_at(base,model.SIZE);raw=bytes(buffer)
    if raw[:64]!=bytes([0x5a])*64 or raw[-64:]!=bytes([0x5a])*64:raise RuntimeError('040 actual native outer guards changed')
    out=finish(name,result,after,state);out['actualWidenedPointers']=True
    return out
