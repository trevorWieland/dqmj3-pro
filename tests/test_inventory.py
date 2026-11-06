import io
import struct
import sys
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from inventory import code_layout, digest_stream


class InventoryTests(unittest.TestCase):
    def test_truncated_hash_range_fails(self):
        with self.assertRaises(ValueError):
            digest_stream(io.BytesIO(b'abc'), 4)

    def test_hash_is_bounded_to_requested_extent(self):
        first = digest_stream(io.BytesIO(b'abcextra'), 3)
        second = digest_stream(io.BytesIO(b'abc'), 3)
        self.assertEqual(first, second)

    def test_code_pages_define_physical_offsets(self):
        header = bytearray(2048)
        struct.pack_into('<III', header, 0x10, 0x100000, 2, 4097)
        struct.pack_into('<III', header, 0x20, 0x200000, 1, 128)
        struct.pack_into('<III', header, 0x30, 0x300000, 3, 8193)
        struct.pack_into('<I', header, 0x3c, 8192)
        result = code_layout(header)
        self.assertEqual([x['codeBinOffset'] for x in result['segments']], [0, 8192, 12288])
        self.assertEqual(result['pageAlignedCodeBytes'], 24576)
        self.assertEqual(result['bssBytes'], 8192)

    def test_zero_extent_hashes_no_bytes(self):
        import hashlib
        self.assertEqual(digest_stream(io.BytesIO(b'extra'), 0), hashlib.sha256(b'').hexdigest())


if __name__ == '__main__':
    unittest.main()
