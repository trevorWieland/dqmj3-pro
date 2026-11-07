from pathlib import Path
import sys
import unittest


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from squirrel_closure_release010_build import WORK, windows
from squirrel_closure_release010_oracle import Windows


@unittest.skipUnless(sys.platform == 'win32', 'Native closure tests require Windows')
class ClosureLifetime(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.native = Windows(windows(WORK / 'tests/native'))

    def rows(self, words):
        return [words[296 + index * 14:296 + (index + 1) * 14] for index in range(words[0])]

    def test_named_closure_layout_preserves_measured_field_order(self):
        self.assertEqual(self.native.layout, [112, 48, 64, 80, 96, 72, 16, 40])

    def test_defaults_outers_prototype_environment_weak_and_free_order(self):
        rows = self.rows(self.native.execute('release', 1))
        self.assertEqual([row[:3] for row in rows], [[1, 22, 0], [2, 101, 4], [1, 23, 0], [2, 102, 4],
            [1, 21, 0], [1, 24, 0], [2, 1, 1]])
        self.assertEqual([row[3] for row in rows], [1] * 6 + [4])
        self.assertEqual([row[13] for row in rows], [0x08000100] * 6 + [0x01000001])

    def test_default_callback_and_free_can_change_later_storage_and_reference(self):
        changed_outer = self.rows(self.native.execute('destructor', 5))
        changed_function = self.rows(self.native.execute('destructor', 6))
        self.assertEqual([row[:3] for row in changed_outer[2:4]], [[1, 25, 0], [2, 103, 2]])
        self.assertEqual(changed_function[-2][:3], [1, 25, 0])

    def test_current_environment_and_weak_target_are_read_after_callbacks(self):
        changed_free = self.native.execute('release', 7)
        changed_function = self.native.execute('release', 8)
        self.assertEqual(self.rows(changed_free)[-2][:3], [1, 26, 0])
        self.assertEqual(self.rows(changed_function)[-2][:3], [1, 27, 0])
        self.assertEqual(changed_function[5], 32)
        self.assertEqual(changed_function[98:102], [0x08000100, 1, 0x01000001, 0])

    def test_nested_closure_and_generator_use_real_source_finalizers(self):
        nested = self.native.execute('release', 12)
        self.assertEqual(nested[18], 4)
        self.assertIn([2, 2, 1], [row[:3] for row in self.rows(nested)])
        generator = self.native.execute('release', 11)
        self.assertEqual(generator[64], 4)
        self.assertIn([2, 41, 1], [row[:3] for row in self.rows(generator)])

    def test_shared_owner_releases_only_after_all_four_fields(self):
        rows = self.rows(self.native.execute('release', 18))
        self.assertEqual([row[:3] for row in rows], [[2, 101, 4], [2, 102, 4], [1, 21, 0], [2, 1, 1]])

    def test_vector_storage_is_reloaded_without_erasing_retained_fields(self):
        words = self.native.execute('destructor', 23)
        rows = self.rows(words)
        self.assertEqual([row[:3] for row in rows[:3]], [[1, 22, 0], [1, 26, 0], [2, 103, 2]])
        self.assertEqual(words[15:18], [103, 2, 2])


if __name__ == '__main__':
    unittest.main()
