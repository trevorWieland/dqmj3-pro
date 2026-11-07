import ctypes
import sys
import unittest
from pathlib import Path

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'toolscripts'))
from native_wave013_common import ROOT
from native_archive032_gzip_cases import encode
from native_archive032_gzip_oracle import windows
from native_archive032_gzip_model import native_abi


@unittest.skipUnless(sys.platform=='win32' and (ROOT/'tools/clang-21/clang.exe').is_file(),'Actual Windows compiler/runtime required')
class NativeGzipTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        import native_archive032_gzip_build as build
        cls.libraries={}
        for profile in ['modern14','historical127']:
            build.configure(profile)
            dll=build.windows(ROOT/'work/native-archive032/gzip-public-tests'/profile,[])
            cls.libraries[profile]=ctypes.CDLL(str(dll))

    def each(self,name,spec):
        for library in self.libraries.values():yield windows(library,name,spec)

    def test_public_runtime_versions(self):
        for profile,library in self.libraries.items():
            library.zlibVersion.restype=ctypes.c_char_p
            self.assertEqual(library.zlibVersion(),b'1.4' if profile=='modern14' else b'1.2.7')

    def test_actual_windows_abi(self):
        for library in self.libraries.values():
            abi=native_abi(library)
            self.assertEqual((abi['pointerBytes'],abi['bufferBytes'],abi['outputBytes'],abi['streamBytes'],abi['uLongBytes']),(8,32,24,88,4))

    def test_constructs_widened_buffer(self):
        for result in self.each('fn_005f5f90',{'input':encode(b'x'),'fresh':True}):
            self.assertEqual(result['state']['allocations'][0]['bytes'],32)
            self.assertEqual(result['state']['buffer']['inputBytes'],0)
            self.assertEqual(result['state']['buffer']['ownsOutput'],0)

    def test_constructor_allocator_failure(self):
        for result in self.each('fn_005f5f90',{'input':encode(b'x'),'fresh':True,'fail_at':1}):
            self.assertEqual(result['state']['viewBufferRole'],'null')
            self.assertEqual(result['state']['liveAllocations'],[])

    def test_constructor_reentrant_previous_owner(self):
        spec={'input':encode(b'x'),'fresh':True,'reentry_mode':1,'reentry_at':2,'owns':1,'old_output':True}
        for result in self.each('fn_005f5f90',spec):
            self.assertEqual(result['state']['released'],['provided-output','preexisting-buffer'])
            self.assertEqual(result['state']['viewBufferRole'],'allocation-2')

    def test_constructor_reentrant_same_buffer(self):
        for result in self.each('fn_005f5f90',{'input':encode(b'x'),'fresh':True,'reentry_mode':2}):
            self.assertEqual(result['state']['released'],[])
            self.assertEqual(result['state']['viewBufferRole'],'allocation-1')

    def test_setter_reads_last_size_word(self):
        for result in self.each('fn_005f5d60',{'input':encode(b'x'*513),'budget':7}):
            self.assertEqual(result['state']['buffer']['outputBytes'],513)

    def test_clear_preserves_output_metadata(self):
        for result in self.each('fn_005f5d98',{'input':encode(b'x'*13),'budget':19}):
            self.assertEqual(result['state']['buffer']['inputRole'],'null')
            self.assertEqual(result['state']['buffer']['inputBytes'],0)
            self.assertEqual(result['state']['buffer']['outputBytes'],19)

    def test_existing_getter_native_adapter(self):
        for result in self.each('fn_006edec8',{'input':encode(b'x'),'budget':0x10001}):
            self.assertEqual(result['result'],0x10001)

    def test_dynamic_fixed_and_stored_gzip(self):
        import zlib
        payload=bytes(range(256))*9
        for strategy,level in [(zlib.Z_DEFAULT_STRATEGY,6),(zlib.Z_FIXED,6),(zlib.Z_DEFAULT_STRATEGY,0)]:
            for result in self.each('fn_005f5eac',{'input':encode(payload,level,strategy)}):
                self.assertEqual(result['result'],1)
                self.assertEqual(result['callerOutput'],payload)

    def test_empty_owned_output(self):
        for result in self.each('fn_005f5eac',{'input':encode(b''),'owned':True}):
            self.assertEqual(result['result'],1)
            self.assertEqual(result['ownedOutput'],b'')

    def test_caller_output_retains_ownership(self):
        for result in self.each('fn_005f5eac',{'input':encode(b'caller output')}):
            self.assertEqual(result['state']['buffer']['ownsOutput'],0)
            self.assertEqual(result['state']['externalLive'],1)

    def test_owned_output_remains_live(self):
        for result in self.each('fn_005f5eac',{'input':encode(b'owned output'),'owned':True}):
            self.assertEqual(result['state']['liveAllocations'],[1,3])
            self.assertEqual(result['ownedOutput'],b'owned output')

    def test_bad_crc_releases_owned_output(self):
        image=encode(b'bad CRC');image=image[:-8]+bytes([image[-8]^1])+image[-7:]
        for result in self.each('fn_005f5eac',{'input':image,'owned':True}):
            self.assertEqual(result['result'],0)
            self.assertEqual(result['state']['buffer']['outputRole'],'null')
            self.assertEqual(result['state']['liveAllocations'],[1])

    def test_bad_crc_preserves_caller_ownership(self):
        image=encode(b'bad CRC');image=image[:-8]+bytes([image[-8]^1])+image[-7:]
        for result in self.each('fn_005f5eac',{'input':image}):
            self.assertEqual(result['result'],0)
            self.assertEqual(result['state']['externalLive'],1)

    def test_retained_ownership_flag_releases_external_output(self):
        image=encode(b'bad CRC');image=image[:-8]+bytes([image[-8]^1])+image[-7:]
        for result in self.each('fn_005f5eac',{'input':image,'owns':1}):
            self.assertEqual(result['state']['externalLive'],0)
            self.assertEqual(result['state']['buffer']['ownsOutput'],1)

    def test_init_failure_preserves_old_output_fields(self):
        spec={'input':encode(b'old owner'),'owns':1,'old_output':True,'fail_at':2}
        for result in self.each('fn_005f5eac',spec):
            self.assertEqual(result['result'],0)
            self.assertEqual(result['state']['buffer']['outputRole'],'provided-output')
            self.assertEqual(result['state']['released'],[])

    def test_output_allocation_failure_cleans_codec(self):
        for result in self.each('fn_005f5eac',{'input':encode(b'out failure'),'owned':True,'fail_at':3}):
            self.assertEqual(result['result'],0)
            self.assertEqual(result['state']['liveAllocations'],[1])
            self.assertEqual(result['state']['buffer']['ownsOutput'],1)

    def test_short_output_budget_fails_with_guards(self):
        for result in self.each('fn_005f5eac',{'input':encode(b'abcdef'),'budget':3}):
            self.assertEqual(result['result'],0)
            self.assertEqual(result['callerOutput'],b'abc')

    def test_release_frees_output_before_buffer(self):
        for result in self.each('fn_005f601c',{'input':encode(b'x'),'owns':1,'old_output':True}):
            self.assertEqual(result['state']['released'],['provided-output','preexisting-buffer'])
            self.assertEqual(result['state']['liveAllocations'],[])

    def test_release_null_is_empty(self):
        for result in self.each('fn_005f601c',{'input':encode(b'x'),'fresh':True}):
            self.assertEqual(result['state']['released'],[])


if __name__=='__main__':unittest.main()
