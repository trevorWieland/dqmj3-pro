import importlib.util
import struct
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location('exheader_module', ROOT / 'toolscripts/exheader.py')
EXHEADER = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(EXHEADER)


def header(text=('text', 0x100000, 2, 0x1800), rodata=('rodata', 0x102000, 1, 0x900),
           data=('data', 0x103000, 1, 0x400), bss=0x300, stack=0x1000, compressed=False):
    result = bytearray(2048)
    result[:8] = b'test\0\0\0\0'
    result[0x0d] = 1 if compressed else 0
    for position, row in zip((0x10, 0x20, 0x30), (text, rodata, data)):
        struct.pack_into('<III', result, position, row[1], row[2], row[3])
    struct.pack_into('<I', result, 0x3c, bss)
    struct.pack_into('<I', result, 0x1c, stack)
    return bytes(result)


class ExHeaderTests(unittest.TestCase):
    def test_layout_uses_initialized_bytes_not_pages(self):
        layout = EXHEADER.layout(header())
        self.assertEqual(layout['name'], 'test')
        self.assertFalse(layout['compressed'])
        self.assertEqual([row['name'] for row in layout['segments']], ['text', 'rodata', 'data'])
        self.assertEqual(layout['segments'][0]['initializedBytes'], 0x1800)
        self.assertEqual(layout['segments'][1]['codeBinOffset'], 2 * EXHEADER.PAGE)
        self.assertEqual(layout['segments'][2]['codeBinOffset'], 3 * EXHEADER.PAGE)
        self.assertEqual(layout['pageAlignedCodeBytes'], 4 * EXHEADER.PAGE)
        self.assertEqual(layout['bssBytes'], 0x300)
        self.assertEqual(layout['stackBytes'], 0x1000)

    def test_segment_lookup_and_total(self):
        layout = EXHEADER.layout(header())
        self.assertEqual(EXHEADER.segment(layout, 'data')['address'], 0x103000)
        self.assertEqual(EXHEADER.initialized_bytes(layout), 0x1800 + 0x900 + 0x400 + 0x300)
        with self.assertRaisesRegex(ValueError, 'no bss segment'):
            EXHEADER.segment(layout, 'bss')

    def test_initialized_bytes_may_not_exceed_the_mapped_pages(self):
        with self.assertRaisesRegex(ValueError, 'exceed the mapped page extent'):
            EXHEADER.layout(header(text=('text', 0x100000, 1, 0x1001)))

    def test_an_exheader_is_exactly_two_thousand_and_forty_eight_bytes(self):
        with self.assertRaisesRegex(ValueError, '2,048 bytes'):
            EXHEADER.layout(header()[:-1])

    def test_compressed_flag(self):
        self.assertTrue(EXHEADER.layout(header(compressed=True))['compressed'])


if __name__ == '__main__':
    unittest.main()
