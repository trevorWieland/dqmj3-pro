import ctypes
import json

from squirrel_class_call030_oracle import Arm as FrozenArm,Windows as FrozenWindows
from squirrel_class034_build import ROOT,entrypoints
from squirrel_class034_runtime import execute


REDIRECT={'sq_vm_class_create034':0x1996f4,'sq_class_new_slot034':0x1804b4,
    'sq_class_meta_index034':0x1880d0,'sq_vm_new_slot034':0x173d60,'sq_execute031':0x18d65c,
    'sq_vm_create_instance034':0x198418}


class Arm(FrozenArm):
    def __init__(self,sections,symbols,functions,original=False,runtime_discovery=False):
        super().__init__(sections,symbols,functions,original,runtime_discovery)
        self.symbols=entrypoints(symbols);self.redirect=dict(self.redirect,**REDIRECT)
        self.allowed_services|={'sq_vm_class_allocate034','sq_class_bind_meta_indices034','sq_class_meta_indices034','sq_vm_set_top022','sq_vm_push022'}
        self.allowed_services|={'sq_execute_assign028','sq_execute_debug_slot028','sq_execute_error_handler_slot028',
            'sq_execute_temporary028','sq_execute_publish_varargs028'}
        claim=json.loads((ROOT/'evidence/lanes/squirrel-class034/claim.json').read_text())
        for row in claim['functions']:
            self.spans.extend((region['address'],region['endExclusive']) for region in row['instructions'])
            self.class_realloc_callers|={call['instruction'] for call in row['directCalls'] if call['target']==0x18388c}
        self.data.extend((r['address'],r['endExclusive']) for r in claim['noninstructionPoolsAndInlineStrings'])
        self.allocations[0x1997d4]='sq_vm_class_allocate034'
        census=json.loads((ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_text())
        main=next(row for row in census['functions'] if row['address']==0x18d65c)
        self.spans.extend((r['start'],r['endExclusive']) for r in main['ranges'])
        if original and not runtime_discovery:
            from squirrel_class034_sdk import load
            load(self)

    def execute(self,variant,cleanup=0):return execute(self,variant,cleanup)


class Windows(FrozenWindows):
    def __init__(self,path):
        super().__init__(path)
        self.module.fixture_prepare020=self.module.fixture_prepare034
        self.module.fixture_prepare020.argtypes=[ctypes.c_uint32,ctypes.c_uint32]
        self.module.fixture_execute020=self.module.fixture_execute034
        self.module.fixture_execute020.restype=ctypes.c_uint32
        self.module.fixture_snapshot020=self.module.fixture_snapshot034
        self.module.fixture_snapshot020.argtypes=[ctypes.POINTER(ctypes.c_uint32),ctypes.c_uint32]
        self.module.fixture_snapshot020.restype=ctypes.c_uint32
