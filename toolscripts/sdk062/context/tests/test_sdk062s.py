import ctypes
import hashlib
from pathlib import Path
import struct
import sys
import threading
import unittest

WORK=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(WORK))
from build062s import build
from runtime062s import SdkRuntime
from map_proof062s import program
from context_proof062s import context_program
from mutex_proof062s import program as mutex_program
from kernel062s import ThreadServices


class Sdk062sTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=WORK/'test-artifacts'
        for target in ['arm','windows','a64']:build(cls.folder/target,target)
    def test_compiled_layouts(self):
        for target in ['arm','windows','a64']:
            runtime=SdkRuntime(target,self.folder)
            try:self.assertEqual(runtime.layout[:13],(4,24,4,8,12,16,12,4,8,28,16,20,24)if target=='arm'else(8,40,8,16,24,32,24,8,16,48,32,40,44))
            finally:runtime.close()
    def test_genuine_original_initialized_map(self):
        self.assertTrue(program('original',[8,3,10,1,6,14,4,7],0,self.folder,True)['arenaMatches'])
    def test_all_target_initialized_growth(self):
        for target in ['arm','windows','a64']:self.assertEqual(program(target,list(range(40)),0,self.folder,True)['steps'],40)
    def test_duplicate_keys_preserve_unique_values(self):
        for target in ['original','arm','windows','a64']:self.assertEqual(program(target,[7,7,7],0,self.folder)['topology'][0]['value'],(2*0x1000193+7)&0xffffffff)
    def test_distinct_context_record_slots(self):
        for name in ['sdk_context062s','sdk_context_alternate062s']:
            for target in ['original','arm','windows','a64']:self.assertEqual(context_program(target,1,2,1,0,0,name,self.folder)['observations'][0]['expectedNumericThreadCalls'],3)
    def test_null_binding(self):
        self.assertEqual(context_program('windows',1,1,0,0,0,'sdk_context062s',self.folder)['observations'][1]['returnRole'],'null')
    def test_disabled_context_feature_ignores_fallback_index(self):
        for target in ['original','arm','windows','a64']:self.assertEqual(context_program(target,0,2,1,0,0,'sdk_context062s',self.folder)['observations'][0]['expectedNumericThreadCalls'],0)
    def test_noncanonical_enabled_byte_and_recursive_owner(self):
        self.assertTrue(context_program('windows',128,1,1,1,0,'sdk_context062s',self.folder)['actualWindowsThreadLocalStorage'])
    def test_actual_owner_recursive_depth(self):
        for target in ['original','arm','windows','a64']:self.assertEqual(mutex_program(target,2,0,self.folder)['ownerReads'],2)
    def test_disabled_lock_preserves_all_storage(self):
        self.assertEqual(mutex_program('windows',0,128,self.folder)['ownerReads'],0)
    def test_invalid_index_rejected_before_execution(self):
        with self.assertRaisesRegex(ValueError,'before execution'):context_program('original',1,3,1,0,0,'sdk_context062s',self.folder)
    def test_key_width_rejected_before_execution(self):
        with self.assertRaisesRegex(ValueError,'bounded valid-storage'):program('original',[1<<32],0,self.folder)
    def test_real_windows_tls_is_per_thread(self):
        runtime=SdkRuntime('windows',self.folder);root=ctypes.create_string_buffer(16);service=ThreadServices(runtime,ctypes.addressof(root));lock=threading.Lock();barrier=threading.Barrier(3);answers=[];errors=[]
        def run():
            try:
                owned=ctypes.create_string_buffer(16);address=ctypes.addressof(owned)
                if not service.kernel.TlsSetValue(service.index,address):raise OSError(ctypes.get_last_error())
                barrier.wait(timeout=10)
                with lock:
                    owner=runtime.library.fixture_sdk_thread_owner062s;owner.argtypes=[];owner.restype=ctypes.c_void_p
                    tid=runtime.library.fixture_sdk_thread_id062s;tid.argtypes=[];tid.restype=ctypes.c_uint32
                    answers.append((address,owner(),tid()))
                barrier.wait(timeout=10)
            except BaseException as error:errors.append(error)
        threads=[threading.Thread(target=run)for _ in range(2)]
        try:
            for thread in threads:thread.start()
            barrier.wait(timeout=10);barrier.wait(timeout=10)
            for thread in threads:thread.join(timeout=10)
            self.assertEqual(errors,[]);self.assertEqual(len(answers),2);self.assertTrue(all(a==b and a>0xffffffff for a,b,t in answers));self.assertNotEqual(answers[0][2],answers[1][2]);self.assertNotEqual(answers[0][0],answers[1][0])
        finally:service.close();runtime.close()
    def test_readable_source_limits(self):
        for file in (WORK/'source').glob('*'):
            text=file.read_text(encoding='utf-8');self.assertLessEqual(len(text.splitlines()),500);self.assertNotIn('/*',text);self.assertNotIn('//',text)


if __name__=='__main__':unittest.main()
