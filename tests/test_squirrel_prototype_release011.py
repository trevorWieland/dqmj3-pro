from pathlib import Path
import sys
import unittest


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from squirrel_prototype_release011_build import WORK, windows
from squirrel_prototype_release011_oracle import Windows


@unittest.skipUnless(sys.platform == 'win32', 'Native prototype tests require Windows')
class PrototypeLifetime(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.native = Windows(windows(WORK / 'tests/native'))

    def rows(self, words):
        start = len(words) - words[0] * 16
        return [words[start + index * 16:start + (index + 1) * 16] for index in range(words[0])]

    def test_actual_prefix_and_compact_native_tail_alignment(self):
        self.assertEqual(self.native.layout, [24, 16, 184, 40, 32, 104, 24, 176])

    def test_all_owned_vectors_names_and_one_whole_block_free_are_ordered(self):
        rows = self.rows(self.native.execute('release', 1))
        self.assertEqual([row[:3] for row in rows], [[1, 21, 0], [1, 22, 0], [1, 23, 0], [1, 24, 0],
            [1, 25, 0], [1, 26, 0], [1, 27, 0], [1, 28, 0], [2, 1, 272]])
        self.assertEqual([row[3] for row in rows], [1] * 8 + [2])
        self.assertEqual([row[14] for row in rows], [0x08002000] * 8 + [0x01000001])

    def test_allocation_size_is_captured_before_header_callbacks_change_counts(self):
        words = self.native.execute('release', 7)
        self.assertEqual(words[18:20], [4, 6])
        self.assertEqual(self.rows(words)[-1][:3], [2, 1, 272])

    def test_outer_record_is_cached_but_next_record_uses_current_backing_pointer(self):
        rows = self.rows(self.native.execute('release', 5))
        self.assertEqual([row[:3] for row in rows[3:7]], [[1, 24, 0], [1, 25, 0], [1, 30, 0], [1, 31, 0]])

    def test_literal_callback_can_redirect_later_parameter_storage(self):
        rows = self.rows(self.native.execute('release', 4))
        self.assertEqual([row[:3] for row in rows[:2]], [[1, 21, 0], [1, 29, 0]])
        self.assertEqual(rows[-1][:3], [2, 1, 264])

    def test_nested_actual_prototype_uses_its_own_typed_release_and_weak_cleanup(self):
        words = self.native.execute('release', 10)
        self.assertEqual([row[:3] for row in self.rows(words) if row[0] == 2], [[2, 2, 104], [2, 1, 272]])
        self.assertEqual(words[25], 2)
        self.assertEqual(words[123:125], [0x01000001, 0])

    def test_source_name_is_read_after_name_callback_and_current_weak_is_cleared(self):
        words = self.native.execute('destructor', 20)
        self.assertEqual([row[:3] for row in self.rows(words)], [[1, 27, 0], [1, 29, 0]])
        self.assertEqual(words[4], 52)
        self.assertEqual(words[121:123], [0x01000001, 0])

    def test_eight_shared_owners_release_only_at_the_last_header_name(self):
        rows = self.rows(self.native.execute('release', 13))
        self.assertEqual([row[:3] for row in rows], [[1, 21, 0], [2, 1, 272]])

    def test_virtual_header_destruction_is_loaded_after_vector_callbacks(self):
        words = self.native.execute('release', 6)
        rows = self.rows(words)
        self.assertEqual(rows[6][:3], [3, 1, 0])
        self.assertEqual(rows[6][3], 4)
        self.assertEqual(rows[-1][:3], [2, 1, 272])

    def test_compact_allocation_sizes_include_each_typed_tail(self):
        for variant, expected in [(0, 104), (17, 188), (18, 356)]:
            self.assertEqual(self.rows(self.native.execute('release', variant))[-1][:3], [2, 1, expected])


if __name__ == '__main__':
    unittest.main()
