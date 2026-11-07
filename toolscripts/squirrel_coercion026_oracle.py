import ctypes
import json

from squirrel_lookup023_oracle import Arm as FrozenArm, Windows as FrozenWindows
from squirrel_coercion026_build import ROOT, entrypoints
from squirrel_coercion026_runtime import execute


class Arm(FrozenArm):
    def __init__(self,sections,symbols,functions,original=False,runtime_discovery=False):
        super().__init__(sections,symbols,functions,original,runtime_discovery)
        self.symbols = entrypoints(symbols)
        self.redirect = dict(self.redirect,sq_value_to_string026=0x1a83dc,sq_index_to_string026=0x7434e8)
        self.allowed_services = self.allowed_services | {'sq_lookup_names020','sq_vm_call_vector022'}
        claim = json.loads((ROOT/'evidence/lanes/squirrel-coercion026/claim.json').read_text())
        self.spans += [(r['instructions']['address'],r['instructions']['endExclusive']) for r in claim['functions']]
        self.spans += [(0x173d4c,0x173d60)]
        self.data += [(r['pool']['address'],r['pool']['endExclusive']) for r in claim['functions']]
        if original and not runtime_discovery:
            from squirrel_coercion026_sdk import load
            load(self)

    def execute(self,variant,cleanup=0):
        return execute(self,variant,cleanup)


class Windows(FrozenWindows):
    def __init__(self,path):
        super().__init__(path)
        self.module.fixture_prepare020 = self.module.fixture_prepare026
        self.module.fixture_prepare020.argtypes = [ctypes.c_uint32,ctypes.c_uint32]
        self.module.fixture_execute020 = self.module.fixture_execute026
        self.module.fixture_execute020.restype = ctypes.c_uint32
        self.module.fixture_snapshot020 = self.module.fixture_snapshot026
        self.module.fixture_snapshot020.argtypes = [ctypes.POINTER(ctypes.c_uint32),ctypes.c_uint32]
        self.module.fixture_snapshot020.restype = ctypes.c_uint32

    def execute(self,variant,cleanup=0):
        requested=0x120000000
        base=self.kernel.VirtualAlloc(requested,0x40000,0x3000,4)
        if base!=requested:raise OSError('026 isolated native high-address arena unavailable')
        try:
            if self.module.fixture_table_bind019(base,0x40000,*[self.module.fixture_vtable020(i) for i in range(7)])!=1:
                raise ValueError('026 native bind failed')
            self.module.fixture_prepare020(variant,cleanup)
            if self.module.fixture_execute020()!=1:raise ValueError('026 native root did not return')
            words=(ctypes.c_uint32*4096)()
            count=self.module.fixture_snapshot020(words,4096)
            result=list(words[:count])
            if result[3:5]!=[0,0]:raise ValueError('026 native fixture fault')
            return result
        finally:self.kernel.VirtualFree(base,0,0x8000)
