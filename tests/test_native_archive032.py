import ctypes
import os
import sys
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
from native_archive032_build import windows as build
from native_archive032_fixtures import pack
from native_archive032_oracle import windows


@unittest.skipUnless(os.name=='nt','Actual native Windows execution required')
class NativeArchive032(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.library=ctypes.CDLL(str(build(ROOT/'work/native-archive032/unit',[])))

    def call(self,name,image=None,query=b'a',**fields):
        return windows(self.library,name,{'image':pack([b'a',b'b',b'c']) if image is None else image,
            'query':query,**fields})

    def test_real_dll_uses_widened_pointers(self):
        result=self.call('fn_00183688');self.assertEqual(result['result'],0)
        self.assertTrue(result['actualWidenedPointers']);self.assertEqual(result['layout']['pointerBytes'],8)

    def test_sorted_and_linear_lookup_modes(self):
        for mode in [0,1,2,0xffffffff]:
            image=pack([b'a',b'b',b'c'],mode)
            self.assertEqual(self.call('fn_00183688',image,b'c')['result'],2)
            self.assertEqual(self.call('fn_00183688',image,b'absent')['result'],0xffffffff)

    def test_signed_high_byte_hash_domain(self):
        for query in [b'\x80xy',b'\xff\x80x',b'\x81a']:
            image=pack([query],seed=0xffffffff)
            self.assertEqual(self.call('fn_00183688',image,query)['result'],0)

    def test_collision_selection_preserves_midpoint(self):
        self.assertEqual(self.call('fn_00183688',pack([b'a']*3))['result'],1)
        self.assertEqual(self.call('fn_00183688',pack([b'a']*3,2))['result'],0)

    def test_sorted_empty_count_probe_is_not_sanitized(self):
        self.assertEqual(self.call('fn_00183688',pack([],zero_trailer=(0,37)),b'')['result'],37)

    def test_linear_empty_count_returns_missing(self):
        self.assertEqual(self.call('fn_00183688',pack([],2),b'')['result'],0xffffffff)

    def test_unbound_view_does_not_read_null_name(self):
        self.assertEqual(self.call('fn_00183688',unbound=True,null_query=True)['result'],0xffffffff)

    def test_null_bind_checks_old_image_then_clears(self):
        result=self.call('fn_005f5cac',null_bind=True)
        self.assertEqual(result['result'],1);self.assertIsNone(result['state']['holderImage'])

    def test_failed_bind_keeps_borrowed_old_image(self):
        result=self.call('fn_005f5cac',bind_image=b'BAD!')
        self.assertEqual(result['result'],0);self.assertEqual(result['state']['holderImage'],0x4000)

    def test_member_index_bounds_and_sizes(self):
        self.assertEqual(self.call('fn_006ede84',index=1)['result'],9)
        self.assertEqual(self.call('fn_006eddec',index=2)['result'],1)
        for index in [3,0xffffffff]:
            self.assertEqual(self.call('fn_006eddec',index=index)['result'],0)
            self.assertTrue(self.call('fn_006edd88',index=index)['result']['null'])

    def test_name_offset_zero_is_not_a_header_pointer(self):
        self.assertTrue(self.call('fn_006ede0c',pack([b'a'],unnamed=True))['result']['null'])

    def test_raw_lookup_index_is_separate_from_member_bounds(self):
        image=pack([b'a'],trailer_indices=[37])
        self.assertEqual(self.call('fn_00183688',image)['result'],37)
        self.assertTrue(self.call('fn_00176d74',image)['result']['null'])

    def test_constructor_allocates_a_real_native_pointer_holder(self):
        result=self.call('fn_00118624',fresh=True);state=result['state']
        self.assertEqual(state['allocations'],1);self.assertEqual(state['requestedBytes'],8)
        self.assertEqual(state['requestedAlignment'],8);self.assertEqual(state['holderImage'],0x4000)

    def test_empty_constructor_retains_allocation_failure(self):
        result=self.call('fn_005f5cd8',fresh=True,allocator_fail=1)
        self.assertIsNone(result['state']['viewImage']);self.assertEqual(result['state']['allocations'],1)

    def test_deleting_destructor_releases_holder_then_view(self):
        state=self.call('fn_005f5d14')['state']
        self.assertEqual(state['released'][:2],[0x200,0x100]);self.assertEqual(state['releases'],2)
        self.assertEqual(state['imageLive'],0);self.assertEqual(state['viewLive'],0)


if __name__=='__main__':unittest.main()
