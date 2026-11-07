from pathlib import Path
import sys
import unittest


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from squirrel_array_release007_build import WORK, windows
from squirrel_array_release007_oracle import Windows


@unittest.skipUnless(sys.platform == 'win32', 'Real native fixture tests require Windows')
class ArrayLifetime(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.native = Windows(windows(WORK / 'tests/native'))

    def rows(self, words):
        return [words[43 + index * 8:43 + (index + 1) * 8] for index in range(words[0])]

    def test_native_type_contract_preserves_target_scalars_and_wide_pointers(self):
        self.assertEqual(self.native.layout, [40, 16, 64, 48, 72, 24, 40])

    def test_vector_deallocation_observes_live_weak_target_before_final_array_release(self):
        words = self.native.execute('release', 1)
        rows = self.rows(words)
        self.assertEqual(words[0:3], [2, 0, 14])
        self.assertEqual([row[:3] for row in rows], [[2, 101, 8], [2, 1, 1]])
        self.assertEqual([row[5:7] for row in rows], [[1, 0x08000040], [2, 0x01000001]])
        self.assertEqual(words[39:41], [0x01000001, 0])

    def test_marked_array_leaves_gc_chain_ownership_to_collector(self):
        words = self.native.execute('release', 4)
        self.assertEqual(words[2], 1)
        self.assertEqual(words[4], 0x80000000)

    def test_size_and_storage_are_reloaded_after_virtual_release(self):
        shortened = self.native.execute('vector', 5)
        switched = self.native.execute('vector', 6)
        self.assertEqual(shortened[0], 2)
        self.assertEqual(shortened[9:11], [1, 8])
        self.assertEqual(self.rows(shortened)[0][:3], [1, 11, 0])
        self.assertEqual(switched[8:11], [102, 3, 4])
        self.assertEqual(self.rows(switched)[-1][:3], [2, 102, 4])
        self.assertEqual(switched[30], 1)

    def test_deallocation_callback_can_change_the_weak_target_before_base_reset(self):
        words = self.native.execute('release', 7)
        self.assertEqual(words[5], 22)
        self.assertEqual(words[39:43], [0x08000040, 1, 0x01000001, 0])

    def test_nested_real_array_uses_distinct_vtable_from_generic_observer_objects(self):
        words = self.native.execute('release', 10)
        rows = self.rows(words)
        self.assertEqual([row[:3] for row in rows], [[1, 11, 0], [2, 102, 4], [2, 2, 1],
            [1, 12, 0], [2, 101, 8], [2, 1, 1]])
        self.assertEqual(words[2], 0)
        self.assertEqual(words[3], 2)
        self.assertEqual(words[11], 2)

    def test_zero_capacity_and_zero_size_have_distinct_deallocation_behavior(self):
        empty = self.native.execute('vector', 0)
        reserved = self.native.execute('vector', 11)
        self.assertEqual(empty[0], 0)
        self.assertEqual(self.rows(reserved)[0][:3], [2, 101, 8])


if __name__ == '__main__':
    unittest.main()
