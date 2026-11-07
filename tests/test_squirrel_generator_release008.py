from pathlib import Path
import sys
import unittest


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from squirrel_generator_release008_build import WORK, windows
from squirrel_generator_release008_oracle import Windows


@unittest.skipUnless(sys.platform == 'win32', 'Native generator tests require Windows')
class GeneratorLifetime(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.native = Windows(windows(WORK / 'tests/native'))

    def rows(self, words):
        return [words[106 + index * 14:106 + (index + 1) * 14] for index in range(words[0])]

    def test_natural_native_layout_keeps_original_word_widths(self):
        self.assertEqual(self.native.layout, [40, 16, 192, 184, 72, 24, 112, 72])

    def test_final_owner_observes_traps_frame_varargs_stack_closure_and_weak_order(self):
        words = self.native.execute('release', 1)
        rows = self.rows(words)
        self.assertEqual([row[:3] for row in rows], [[2, 201, 4], [1, 21, 0], [1, 22, 0], [2, 101, 4],
            [1, 23, 0], [2, 102, 4], [1, 24, 0], [2, 1, 1]])
        self.assertEqual([row[4] for row in rows], [1] * 7 + [3])
        self.assertEqual([row[12] for row in rows], [0x08000400] * 7 + [0x01000001])
        self.assertEqual(words[2], 28)

    def test_callbacks_change_later_owned_fields_before_they_are_read(self):
        changed_frame = self.rows(self.native.execute('destructor', 5))
        changed_varargs = self.rows(self.native.execute('destructor', 6))
        changed_stack = self.rows(self.native.execute('destructor', 7))
        self.assertEqual(changed_frame[1][:3], [1, 25, 0])
        self.assertEqual([row[:3] for row in changed_varargs[2:4]], [[1, 25, 0], [2, 103, 2]])
        self.assertEqual([row[:3] for row in changed_stack[4:6]], [[1, 26, 0], [2, 104, 2]])

    def test_stack_free_and_main_release_can_select_current_weak_target(self):
        switched = self.native.execute('release', 8)
        callback = self.native.execute('release', 9)
        self.assertEqual(self.rows(switched)[-2][:3], [1, 27, 0])
        for words in [switched, callback]:
            self.assertEqual(words[5], 32)
            self.assertEqual(words[100:104], [0x08000400, 1, 0x01000001, 0])

    def test_nested_real_array_and_generator_are_finalized_without_generic_object_casts(self):
        words = self.native.execute('release', 12)
        self.assertEqual([row[:3] for row in self.rows(words)], [[2, 201, 4], [1, 21, 0], [1, 25, 0],
            [2, 105, 2], [2, 11, 1], [2, 101, 4], [2, 2, 1], [2, 102, 4], [1, 24, 0], [2, 1, 1]])
        self.assertEqual(words[22], 3)
        self.assertEqual(words[60], 3)
        self.assertEqual(words[104:106], [0x01000001, 0])

    def test_shared_closure_references_release_only_at_the_final_owned_field(self):
        rows = self.rows(self.native.execute('release', 18))
        self.assertEqual([row[:3] for row in rows], [[2, 201, 4], [2, 101, 4], [2, 102, 4], [1, 21, 0], [2, 1, 1]])

    def test_reserved_empty_traps_still_free_capacity_and_empty_generator_has_no_storage_free(self):
        self.assertEqual(self.rows(self.native.execute('destructor', 13))[0][:3], [2, 201, 4])
        self.assertEqual(self.native.execute('destructor', 0)[0], 0)

    def test_state_byte_is_preserved_and_marked_objects_keep_gc_unlink_ownership(self):
        for variant in range(24):
            words = self.native.execute('destructor', variant)
            self.assertEqual(words[21], variant % 3)
        marked = self.native.execute('release', 3)
        self.assertEqual(marked[2:5], [1, 3, 0x80000000])


if __name__ == '__main__':
    unittest.main()
