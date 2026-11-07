import ctypes
import json

from squirrel_coercion026_oracle import Arm as BaseArm,Windows as BaseWindows
from squirrel_lookup023_oracle import machine as base_machine
from squirrel_class_call030_build import ROOT,entrypoints
from squirrel_class_call030_runtime import execute


REDIRECT={'sq_class_initialize030':0x1a18a8,'sq_class_lock030':0x19a308,
    'sq_class_create_instance030':0x190c50,'sq_class_instance_initialize030':0x192548,
    'sq_vm_create_instance022':0x198418,'sq_class_member_resize030':0x1a51e0,
    'sq_class_table_clone030':0x1a4734,'sq_class_clone_cursor030':0x1a2b2c,
    'sq_class_release030':0x665ee0,'sq_class_destroy030':0x666144,'sq_class_finalize030':0x665f20,
    'sq_class_instance_release030':0x1cdba0,'sq_class_instance_destroy030':0x1cdcc4,
    'sq_class_instance_meta030':0x1cdaec}


def machine(sections,original):
    selected=[(a,n,flags,b'' if original and a in (0x850d90,0x81bd48) else data)
        for a,n,flags,data in sections]
    return base_machine(selected,original)


class Arm(BaseArm):
    def __init__(self,sections,symbols,functions,original=False,runtime_discovery=False):
        super().__init__(sections,symbols,functions,original,runtime_discovery)
        self.symbols=entrypoints(symbols);self.create_machine=machine
        self.redirect=dict(self.redirect,**REDIRECT)
        self.allowed_services|={'sq_class_allocate030','sq_class_allocate_table030','sq_class_reallocate030',
            'sq_class_deallocate030','sq_class_bind_constructor_name030','sq_class_constructor_name030','allocate','deallocate'}
        self.allowed_services|={'sq_lookup_stack020','sq_lookup_base020','sq_lookup_top020'}
        claim=json.loads((ROOT/'evidence/lanes/squirrel-class-call030/claim.json').read_text())
        self.class_realloc_callers=set()
        for row in claim['functions']:
            self.spans.extend((region['address'],region['endExclusive']) for region in row['instructions'])
            self.data.extend((literal['literal']['address'],literal['literal']['endExclusive']) for literal in row['literalReferences'])
            self.class_realloc_callers|={call['instruction'] for call in row['directCalls'] if call['target']==0x18388c}
        self.data.extend([(0x850d90,0x850da8),(0x81bd48,0x81bd60)])
        if original and not runtime_discovery:
            from squirrel_class_call030_sdk import load
            load(self)
        self.allocations.update({0x190c9c:'sq_class_allocate030',0x1a474c:'sq_class_allocate_table030',
            0x1a1d60:'sq_class_allocate_table030'})

    def execute(self,variant,cleanup=0):return execute(self,variant,cleanup)


class Windows(BaseWindows):
    def __init__(self,path):
        super().__init__(path)
        self.module.fixture_prepare020=self.module.fixture_prepare030
        self.module.fixture_prepare020.argtypes=[ctypes.c_uint32,ctypes.c_uint32]
        self.module.fixture_execute020=self.module.fixture_execute030
        self.module.fixture_execute020.restype=ctypes.c_uint32
        self.module.fixture_snapshot020=self.module.fixture_snapshot030
        self.module.fixture_snapshot020.argtypes=[ctypes.POINTER(ctypes.c_uint32),ctypes.c_uint32]
        self.module.fixture_snapshot020.restype=ctypes.c_uint32
