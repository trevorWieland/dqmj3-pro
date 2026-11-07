import ctypes
import struct
import sys
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))

from native_wave013_file_owner_mount_romfs import build as romfs
from native_wave013_file_owner_mount_provider import build,Provider


class ArchivePlatformContract(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.artifacts=build(ROOT/'work/wave013-native/file-owner-mount-unit',[])

    def provider(self,**values):
        image=romfs({'1.txt':bytes([0xff,0xfe,97,0,10,0])})['image']
        return Provider(ROOT/self.artifacts['dll']['path'],image,**values),image

    def test_generated_header_has_all_four_extent_pairs(self):
        result=romfs({'1.txt':b'abcdef'})
        words=result['headerWords'];self.assertEqual(words[0],40)
        for index in [1,3,5,7]:self.assertLessEqual(words[index]+words[index+1],words[9])
        self.assertEqual(words[9]%16,0)

    def test_empty_archive_has_valid_root_and_no_file(self):
        result=romfs({});words=result['headerWords']
        self.assertEqual(words[8],0)
        self.assertEqual(struct.unpack('<6I',result['image'][words[3]:words[3]+24])[3],0xffffffff)

    def test_file_metadata_preserves_exact_bytes(self):
        result=romfs({'10.txt':b'abc','2.txt':b'xy'})
        for row in result['files']:
            at=result['dataStart']+row['dataOffset']
            self.assertEqual(result['image'][at:at+row['bytes']],{'10.txt':b'abc','2.txt':b'xy'}[row['name']])

    def test_native_open_requires_measured_title_path(self):
        provider,image=self.provider()
        self.assertEqual(provider.open(0x400db00010302,0,1,1,0),(0,0xa532))
        self.assertEqual(provider.trace()['live'],1)

    def test_wrong_title_is_rejected_without_live_handle(self):
        provider,image=self.provider();result,handle=provider.open(0x400db00010303,0,1,1,0)
        self.assertLess(result,0);self.assertEqual(handle,0);self.assertEqual(provider.trace()['live'],0)

    def test_zero_section_word_is_not_silently_accepted(self):
        provider,image=self.provider();result,handle=provider.open(0x400db00010302,0,0,1,0)
        self.assertLess(result,0);self.assertEqual(handle,0)

    def test_read_requires_open_lifetime(self):
        provider,image=self.provider();result,data=provider.read(0,40)
        self.assertLess(result,0);self.assertEqual(data,b'')

    def test_chunked_read_returns_genuine_provider_bytes(self):
        provider,image=self.provider(chunk=7);provider.open(0x400db00010302,0,1,1,0)
        self.assertEqual(provider.read(0,40),(0,image[:7]))
        self.assertEqual(provider.trace()['reads'],[{'offset':0,'requested':40,'copied':7}])

    def test_u64_offset_does_not_wrap_to_low_u32(self):
        provider,image=self.provider();provider.open(0x400db00010302,0,1,1,0)
        self.assertEqual(provider.read(0x100000000,8),(0,b''))

    def test_eof_read_preserves_bounds(self):
        provider,image=self.provider();provider.open(0x400db00010302,0,1,1,0)
        self.assertEqual(provider.read(len(image)-2,40),(0,image[-2:]))

    def test_configured_open_failure_returns_without_handle(self):
        provider,image=self.provider(open_result=-2147483647)
        self.assertEqual(provider.open(0x400db00010302,0,1,1,0),(-2147483647,0))

    def test_close_retires_handle_and_preserves_input(self):
        provider,image=self.provider();provider.open(0x400db00010302,0,1,1,0);provider.close()
        self.assertEqual(provider.trace()['closeCalls'],1);self.assertEqual(provider.trace()['live'],0)
        self.assertLess(provider.read(0,1)[0],0)

    def test_priority_has_independent_value_and_call_count(self):
        provider,image=self.provider(priority=5)
        self.assertEqual(provider.priority(),(0,5));self.assertEqual(provider.trace()['priorityCalls'],1)


if __name__=='__main__':unittest.main()
