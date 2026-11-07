from pathlib import Path
import sys
import unittest


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from squirrel_native_closure_release013_build import WORK, windows
from squirrel_native_closure_release013_oracle import Windows


@unittest.skipUnless(sys.platform == 'win32', 'Native closure lifetime tests require Windows')
class NativeClosureLifetime(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.native = Windows(windows(WORK / 'tests/native'))

    def rows(self, words):
        start = len(words) - words[0] * 16
        return [words[start + index * 16:start + (index + 1) * 16] for index in range(words[0])]

    def test_shared_collectable_and_noncollectable_prefixes_remain_distinct(self):
        self.assertEqual(self.native.layout, [128, 40, 24, 56, 72, 88, 104, 112])

    def test_name_environment_outers_masks_weak_and_closure_disposal_order(self):
        words = self.native.execute('release', 1)
        rows = self.rows(words)
        self.assertEqual([row[:3] for row in rows], [[1, 21, 0], [1, 22, 0], [1, 23, 0], [2, 101, 4], [2, 201, 4], [2, 1, 1]])
        self.assertEqual([row[3] for row in rows], [1] * 5 + [3])
        self.assertEqual([row[15] for row in rows], [0x08000200] * 5 + [0x01000001])

    def test_name_and_environment_callbacks_select_current_later_owners(self):
        changed_env = self.rows(self.native.execute('destructor', 4))
        changed_outer = self.rows(self.native.execute('destructor', 5))
        self.assertEqual(changed_env[1][:3], [1, 24, 0])
        self.assertEqual([row[:3] for row in changed_outer[2:4]], [[1, 25, 0], [2, 102, 2]])

    def test_pod_storage_is_read_after_outer_disposal_and_frees_current_capacity(self):
        words = self.native.execute('release', 7)
        self.assertEqual(self.rows(words)[-2][:3], [2, 202, 8])
        self.assertEqual(words[10:13], [202, 3, 8])

    def test_mask_free_callback_selects_current_weak_target(self):
        words = self.native.execute('release', 8)
        self.assertEqual(words[6], 62)
        self.assertEqual(words[129:131], [0x01000001, 0])

    def test_actual_prototype_and_native_closure_compose_without_collectable_casts(self):
        words = self.native.execute('release', 12)
        self.assertEqual([row[:3] for row in self.rows(words)], [[1, 21, 0], [1, 22, 0], [1, 25, 0],
            [2, 2, 1], [1, 24, 0], [2, 11, 188], [2, 101, 4], [2, 201, 4], [2, 1, 1]])
        self.assertEqual(words[3], 52)
        self.assertEqual(words[21], 3)
        self.assertEqual(words[55], 3)

    def test_callable_is_preserved_or_callback_replaced_but_never_invoked(self):
        for variant in range(24):
            words = self.native.execute('release', variant)
            self.assertEqual(words[2], 0)
            self.assertEqual(words[18], 2 if variant == 19 else 1)

    def test_three_shared_owners_release_only_during_outer_cleanup(self):
        self.assertEqual([row[:3] for row in self.rows(self.native.execute('release', 17))],
            [[1, 21, 0], [2, 101, 4], [2, 201, 4], [2, 1, 1]])

    def test_reserved_zero_size_and_zero_capacity_masks_have_distinct_disposal(self):
        reserved = self.rows(self.native.execute('destructor', 14))
        absent = self.rows(self.native.execute('destructor', 15))
        self.assertIn([2, 201, 4], [row[:3] for row in reserved])
        self.assertNotIn(201, [row[1] for row in absent])

    def test_marked_collectable_preserves_collector_unlink_ownership(self):
        words = self.native.execute('release', 3)
        self.assertEqual(words[3], 1)
        self.assertEqual(words[5], 0x80000000)


if __name__ == '__main__':
    unittest.main()
