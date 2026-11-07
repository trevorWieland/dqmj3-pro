import ctypes
import json

from squirrel_class034_oracle import Arm as FrozenArm,Windows as FrozenWindows
from squirrel_capture038_build import ROOT,entrypoints
from squirrel_capture038_runtime import execute


REDIRECT={'sq_script_create038':0x196b08,'sq_execute038':0x18d65c}


class Arm(FrozenArm):
    def __init__(self,sections,symbols,functions,original=False,runtime_discovery=False):
        super().__init__(sections,symbols,functions,original,runtime_discovery)
        self.symbols=entrypoints(symbols);self.redirect.pop("sq_execute031",None);self.redirect=dict(self.redirect,**REDIRECT)
        self.allowed_services|={'sq_vm_class_allocate034','sq_class_bind_meta_indices034','sq_class_meta_indices034','sq_vm_set_top022','sq_vm_push022'}
        self.allowed_services|={'sq_execute_assign028','sq_execute_debug_slot028','sq_execute_error_handler_slot028',
            'sq_execute_temporary028','sq_execute_publish_varargs028'}
        self.allowed_services|={'sq_script_create_allocate038','sq_script_create_reallocate038','sq_prototype_allocation_bytes011'}
        self.spans.append((0x196b08,0x196f58));self.data.append((0x196f58,0x196f6c))
        self.capture_realloc_callers={0x196c08,0x196c6c,0x196d4c,0x196dc0,0x196e30,0x196e8c}
        self.allocations[0x196b20]='sq_script_create_allocate038'
        self.allocations[0x18f038]='sq_opaque_array_allocate012'
        self.allowed_services|={'sq_opaque_array_allocate012','sq_reallocate','sq_execute_clear028','sq_lookup_shared020'}
        if original and not runtime_discovery:
            from squirrel_capture038_sdk import load
            load(self)

    def execute(self,variant,cleanup=0):return execute(self,variant,cleanup)


class Windows(FrozenWindows):
    def __init__(self,path):
        super().__init__(path)
        self.module.fixture_prepare020=self.module.fixture_prepare038
        self.module.fixture_prepare020.argtypes=[ctypes.c_uint32,ctypes.c_uint32]
        self.module.fixture_execute020=self.module.fixture_execute038
        self.module.fixture_execute020.restype=ctypes.c_uint32
        self.module.fixture_snapshot020=self.module.fixture_snapshot038
        self.module.fixture_snapshot020.argtypes=[ctypes.POINTER(ctypes.c_uint32),ctypes.c_uint32]
        self.module.fixture_snapshot020.restype=ctypes.c_uint32
