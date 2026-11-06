import importlib.util
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location('module_link', ROOT / 'toolscripts/module_link.py')
LINK = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(LINK)


class ModuleRanges(unittest.TestCase):
    def row(self, address=0x100000, size=12, symbol='one', mode='ARM'):
        return {'address': address, 'size': size, 'symbol': symbol, 'mode': mode}

    def test_adjacent_functions_have_disjoint_physical_credit(self):
        rows = [self.row(), self.row(0x10000c, 8, 'two')]
        self.assertEqual(sum(row['size'] for row in LINK.validate_ranges(rows, 0x100000, 32)), 20)

    def test_aliases_and_overlapping_functions_fail(self):
        with self.assertRaisesRegex(ValueError, 'overlapping'):
            LINK.validate_ranges([self.row(), self.row(0x100008, 8, 'two')], 0x100000, 32)

    def test_pool_or_extent_outside_text_fails(self):
        with self.assertRaisesRegex(ValueError, 'outside'):
            LINK.validate_ranges([self.row(size=36)], 0x100000, 32)

    def test_wrong_instruction_alignment_fails(self):
        with self.assertRaisesRegex(ValueError, 'alignment'):
            LINK.validate_ranges([self.row(address=0x100002)], 0x100000, 32)

    def test_duplicate_symbols_fail(self):
        with self.assertRaisesRegex(ValueError, 'Duplicate'):
            LINK.validate_ranges([self.row(), self.row(0x100010)], 0x100000, 32)


if __name__ == '__main__':
    unittest.main()
