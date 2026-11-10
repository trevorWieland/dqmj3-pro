import importlib.util
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location('split_module', ROOT / 'toolscripts/split.py')
SPLIT = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(SPLIT)

START = 0x100000
EXTENT = 0x1000


class SplitTests(unittest.TestCase):
    def load(self, text):
        directory = tempfile.TemporaryDirectory(dir=ROOT / 'work')
        self.addCleanup(directory.cleanup)
        path = Path(directory.name) / 'symbols.txt'
        path.write_text(text, encoding='utf-8')
        return SPLIT.load(path, START, EXTENT)

    def test_reads_functions_extra_ranges_and_gaps(self):
        split = self.load('# comment\n'
                          '00100000 arm 16 fn_00100000\n'
                          '+00100800 thumb 6 fn_00100000\n'
                          '00100100 thumb 6 fn_00100100\n')
        self.assertEqual(len(split), 2)
        self.assertEqual([symbol.name for symbol in split.symbols], ['fn_00100000', 'fn_00100100'])
        self.assertEqual(split.by_address[0x100100].mode, 'thumb')
        self.assertEqual(split.by_name['fn_00100000'].extras, [(0x100800, 6)])
        self.assertEqual(split.primary_ranges(), [(0x100000, 16), (0x100100, 6)])
        self.assertEqual(split.extra_ranges(), [(0x100800, 6)])
        self.assertEqual(split.gaps(START, EXTENT), [(0x100010, 0xF0), (0x100106, 0xEFA)])
        self.assertEqual(len(split.digest), 64)

    def test_complement_of_measured_functions_keeps_retained_ones(self):
        self.assertEqual(SPLIT.complement([(0x100000, 16), (0x100100, 16)], START, 0x200),
                         [(0x100010, 0xF0), (0x100110, 0xF0)])
        with self.assertRaisesRegex(ValueError, 'overlap or leave'):
            SPLIT.complement([(0x100000, 16), (0x100008, 16)], START, 0x200)

    def test_symbol_name_must_carry_its_address(self):
        with self.assertRaisesRegex(ValueError, 'name disagrees'):
            self.load('00100000 arm 16 fn_00100010\n')

    def test_arm_entry_must_be_word_aligned(self):
        with self.assertRaisesRegex(ValueError, 'not 4-aligned'):
            self.load('00100002 arm 16 fn_00100002\n')

    def test_overlapping_extents_are_refused(self):
        with self.assertRaisesRegex(ValueError, 'overlapping functions'):
            self.load('00100000 arm 16 fn_00100000\n00100008 arm 16 fn_00100008\n')

    def test_functions_must_be_inside_the_measured_segment(self):
        with self.assertRaisesRegex(ValueError, 'escapes'):
            self.load('00100ffc arm 16 fn_00100ffc\n')

    def test_functions_must_be_address_sorted(self):
        with self.assertRaisesRegex(ValueError, 'address-sorted'):
            self.load('00100100 arm 4 fn_00100100\n00100000 arm 4 fn_00100000\n')

    def test_extra_range_needs_an_owner(self):
        with self.assertRaisesRegex(ValueError, 'no owning function'):
            self.load('00100000 arm 4 fn_00100000\n+00100200 arm 4 fn_00100200\n')

    def test_extra_range_may_not_overlap_function_bytes(self):
        with self.assertRaisesRegex(ValueError, 'overlaps function bytes'):
            self.load('00100000 arm 16 fn_00100000\n00100010 arm 4 fn_00100010\n'
                      '+00100004 arm 4 fn_00100000\n')

    def test_unknown_line_shape_is_refused(self):
        with self.assertRaisesRegex(ValueError, 'unsupported split line'):
            self.load('00100000 arm 16 fn_00100000 extra\n')


if __name__ == '__main__':
    unittest.main()
