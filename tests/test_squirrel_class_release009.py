from pathlib import Path
import sys
import unittest


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from squirrel_class_release009_build import WORK, windows
from squirrel_class_release009_oracle import Windows


@unittest.skipUnless(sys.platform == 'win32', 'Native class tests require Windows')
class ClassLifetime(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.native = Windows(windows(WORK / 'tests/native'))

    def rows(self, words):
        return [words[681 + index * 20:681 + (index + 1) * 20] for index in range(words[0])]

    def test_native_class_and_record_layouts_are_naturally_aligned(self):
        self.assertEqual(self.native.layout, [152, 32, 64, 72, 112, 136, 148, 16])

    def test_hook_finalize_secondary_primary_and_backing_storage_order(self):
        words = self.native.execute('release', 1)
        rows = self.rows(words)
        self.assertEqual([row[:3] for row in rows], [[3, 1, 0], [1, 39, 0], [1, 32, 0], [1, 31, 0],
            [1, 34, 0], [1, 33, 0], [1, 36, 0], [1, 35, 0], [1, 37, 0], [1, 40, 0],
            [2, 201, 4], [2, 102, 4], [2, 101, 4], [2, 1, 1]])
        self.assertEqual(rows[1][5], 0x01000001)
        self.assertEqual([row[15] for row in rows], [0x08004000] * 13 + [0x01000001])

    def test_virtual_destructor_is_loaded_after_the_release_hook(self):
        rows = self.rows(self.native.execute('release', 12))
        self.assertEqual([row[:3] for row in rows[:2]], [[3, 1, 0], [4, 1, 0]])
        self.assertEqual(rows[1][3], 6)

    def test_current_record_is_cached_but_next_record_storage_is_reloaded(self):
        rows = self.rows(self.native.execute('resize', 20))
        self.assertEqual([row[:3] for row in rows], [[1, 32, 0], [1, 31, 0], [1, 43, 0], [1, 42, 0]])

    def test_member_growth_retains_each_fill_field_and_reallocates_before_publication(self):
        words = self.native.execute('resize', 4)
        rows = self.rows(words)
        self.assertEqual(rows[0][:3], [5, 101, 4 << 16 | 6])
        self.assertEqual(rows[0][9:11], [101, 2])
        self.assertEqual(words[10:13], [106, 6, 6])
        self.assertEqual(words[111 + 14 * 3], 5)
        self.assertEqual(words[111 + 15 * 3], 5)

    def test_member_callback_can_repopulate_owned_fields_before_destructor_disposal(self):
        words = self.native.execute('destructor', 10)
        rows = self.rows(words)
        self.assertEqual([row[:3] for row in rows if row[0] == 2], [[2, 202, 2], [2, 104, 2], [2, 103, 2]])
        self.assertEqual([words[111 + index * 3] for index in range(10, 16)], [0] * 6)
        self.assertEqual(words[5], 52)

    def test_real_base_class_is_released_before_its_owning_field_is_cleared(self):
        words = self.native.execute('finalize', 4)
        rows = self.rows(words)
        child_free = next(row for row in rows if row[:3] == [2, 2, 1])
        self.assertEqual(child_free[8], 2)
        self.assertEqual(words[9], 0)
        self.assertEqual(words[25], 4)

    def test_reserved_empty_vectors_and_completely_empty_class_have_distinct_frees(self):
        empty = self.native.execute('destructor', 0)
        reserved = self.rows(self.native.execute('destructor', 17))
        self.assertEqual(empty[0], 0)
        self.assertEqual([row[:3] for row in reserved], [[2, 201, 4], [2, 102, 4], [2, 101, 4]])

    def test_shared_reference_is_released_only_after_all_six_owned_fields(self):
        rows = self.rows(self.native.execute('finalize', 18))
        self.assertEqual([row[:3] for row in rows], [[1, 31, 0], [1, 40, 0]])


if __name__ == '__main__':
    unittest.main()
