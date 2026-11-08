import ctypes
import hashlib
import json
from pathlib import Path
import struct
import sys
import unittest

WORK=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(WORK))
from build062a import build,ROOT
from windows_probe062a import WindowsBackend,SdkRuntime,main as native
from reference_probe062a import main as reference
from cpu_probe062a import program


class Arbiter062aTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=WORK/'test-artifacts'
        for target in ['arm','windows','a64']:build(cls.folder/target,target)
    def test_abi_layouts(self):
        for target in ['arm','windows','a64']:
            runtime=SdkRuntime(target,self.folder)
            try:self.assertEqual(runtime.constant('arbiter_layout062a',9),(4,28,12,16,20,24,12,4,8)if target=='arm'else(8,40,24,28,32,36,24,8,16))
            finally:runtime.close()
    def test_native_blocked_handoff(self):self.assertTrue(native(1,WORK/'test-native-depth1.json',self.folder)['allMilestoneArenasMatch'])
    def test_native_recursive_partial_release(self):self.assertEqual(native(3,WORK/'test-native-depth3.json',self.folder)['initialOwnerDepth'],3)
    def test_genuine_original_body_and_svc(self):
        row=reference(2,WORK/'test-reference-depth2.json',self.folder);self.assertTrue(row['cellWrittenOnlyByOriginalInstructions']);self.assertEqual([(s['type'],s['value'])for s in row['svc22']],[(1,0),(0,1)])
    def test_arm_shared_cell_model(self):self.assertTrue(program('arm',2,self.folder)['allMilestoneArenasMatch'])
    def test_high_a64_shared_cell_model(self):self.assertTrue(program('a64',3,self.folder)['trueA64OwnerPointersAbove32Bits'])
    def test_nonnegative_wait_preserves_owned_cell(self):
        backend=WindowsBackend(self.folder);pointer=backend.base+0x1000;ctypes.c_int32.from_address(pointer).value=2
        try:backend.wait(pointer);self.assertEqual(ctypes.c_int32.from_address(pointer).value,2);self.assertEqual(backend.stats(),(1,0,1))
        finally:backend.close()
    def test_signal_preserves_counter(self):
        backend=WindowsBackend(self.folder);pointer=backend.base+0x1000;ctypes.c_int32.from_address(pointer).value=-2
        try:backend.signal(pointer);self.assertEqual(ctypes.c_int32.from_address(pointer).value,-2);self.assertEqual(backend.stats(),(0,1,0))
        finally:backend.close()
    def test_native_tls_owner_is_actual_high_pointer(self):
        backend=WindowsBackend(self.folder);pointer=backend.base+0x8000;backend.owner(pointer);function=backend.runtime.library.arbiter_owner062a;function.argtypes=[];function.restype=ctypes.c_void_p
        try:self.assertGreater(pointer,0xffffffff);self.assertEqual(function(),pointer)
        finally:backend.close()
    def test_frozen_helper_input_closure_is_unchanged(self):
        from public_sdk062_inputs import load
        selected=load(ROOT)
        self.assertEqual(len(selected['sources']['files']),31)
    def test_readable_source_limits(self):
        for path in(WORK/'source').glob('*'):
            text=path.read_text(encoding='utf-8');self.assertLessEqual(len(text.splitlines()),500);self.assertNotIn('/*',text);self.assertNotIn('//',text)


if __name__=='__main__':unittest.main()
