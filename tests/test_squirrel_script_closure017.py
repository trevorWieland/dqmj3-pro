from pathlib import Path
import sys
import unittest


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from squirrel_script_closure017_build import WORK, windows
from squirrel_script_closure017_oracle import Windows


@unittest.skipUnless(sys.platform == 'win32', 'Script lifetime tests require actual Windows')
class ScriptClosureLifetime(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.native = Windows(windows(WORK / 'tests/native'))

    def rows(self, words):
        return [words[277 + index * 24:301 + index * 24] for index in range(words[0])]

    def test_named_collectable_and_compact_prototype_prefix_stay_distinct(self):
        self.assertEqual(self.native.layout, [112, 40, 24, 48, 64, 80, 96])

    def test_actual_payload_dag_finishes_all_owned_prototypes_native_child_and_strings(self):
        words = self.native.execute('release', 1)
        self.assertEqual(words[2:4], [0, 0])
        self.assertEqual(words[4], 6)
        self.assertEqual(words[19], 6)
        for index in [49, 57, 65, 73, 91, 105, 119, 133]:
            self.assertEqual(words[index:index + 2], [6, 0])

    def test_defaults_outers_prototype_environment_and_final_disposal_order(self):
        words = self.native.execute('release', 1)
        self.assertEqual([row[:3] for row in self.rows(words)], [[2, 13, 104], [2, 103, 16], [2, 201, 8],
            [2, 21, 72], [2, 101, 16], [2, 44, 20], [2, 2, 64], [2, 102, 16], [2, 12, 104],
            [2, 33, 34], [2, 34, 34], [2, 32, 34], [2, 31, 34], [2, 11, 188], [2, 43, 20], [2, 1, 64]])

    def test_own_weak_target_is_invalidated_after_owned_cleanup_before_disposal(self):
        rows = self.rows(self.native.execute('release', 1))
        self.assertTrue(all(row[18] == 0x08000100 for row in rows[:-1]))
        self.assertEqual(rows[-1][18:20], [0x01000001, 0])

    def test_default_storage_disposal_selects_current_outer_vector(self):
        words = self.native.execute('release', 4)
        freed = [row[1] for row in self.rows(words)]
        self.assertEqual(words[16:19], [104, 2, 2])
        self.assertIn(104, freed)
        self.assertNotIn(102, freed)

    def test_native_finalization_can_replace_default_pointer_during_iteration(self):
        words = self.native.execute('release', 5)
        self.assertEqual(words[13:16], [105, 2, 2])
        freed = [row[1] for row in self.rows(words)]
        self.assertIn(105, freed)
        self.assertNotIn(101, freed)

    def test_outer_disposal_selects_actual_current_compact_prototype(self):
        words = self.native.execute('release', 6)
        self.assertEqual(words[9:11], [0x08002000, 13])
        self.assertEqual(words[49:51], [2, 1])
        self.assertIn([2, 13, 104], [row[:3] for row in self.rows(words)])
        self.assertNotIn(11, [row[1] for row in self.rows(words)])

    def test_prototype_disposal_selects_current_environment_without_structural_casts(self):
        words = self.native.execute('release', 7)
        self.assertEqual(words[11:13], [0x08010000, 42])
        self.assertEqual(self.rows(words)[-2][:3], [2, 42, 20])
        self.assertEqual(words[21], 0)

    def test_environment_disposal_selects_current_own_weak_target(self):
        words = self.native.execute('release', 8)
        self.assertEqual(words[6], 42)
        self.assertEqual(words[150:152], [0x08000100, 1])
        self.assertEqual(words[155:157], [0x01000001, 0])

    def test_actual_root_and_prototype_weak_orders_remain_distinct(self):
        owner = self.native.execute('owner-first', 1)
        weak = self.native.execute('weak-first', 1)
        self.assertEqual([row[1] for row in self.rows(owner)[-2:]], [41, 46])
        self.assertEqual([row[1] for row in self.rows(weak)[:2]], [41, 46])
        self.assertEqual(owner[150:152], [0x01000001, 0])
        self.assertEqual(weak[150:152], [0x08000100, 1])
        self.assertEqual(owner[175:177], [0x01000001, 0])
        self.assertEqual(weak[175:177], [0x08002000, 11])

    def test_current_virtual_destructor_is_observed_before_identity_installation(self):
        words = self.native.execute('release', 9)
        row = self.rows(words)[0]
        self.assertEqual(row[:5], [3, 1, 0, 7, 1])
        self.assertEqual(words[14], 0)

    def test_marked_root_retains_collector_list_ownership_without_gc_claim(self):
        words = self.native.execute('release', 10)
        self.assertEqual(words[2], 1)
        self.assertEqual(words[5], 0x80000000)

    def test_reserved_vectors_dispose_capacity_even_when_size_is_zero(self):
        for variant, identity in [(2, 101), (3, 102)]:
            self.assertIn([2, identity, 16], [row[:3] for row in self.rows(self.native.execute('release', variant))])

    def test_compact_prototype_and_byte_string_edges_use_actual_abi(self):
        compact = self.native.execute('release', 13)
        self.assertIn([2, 11, 104], [row[:3] for row in self.rows(compact)])
        high_bytes = self.native.execute('release', 12)
        self.assertEqual(high_bytes[97:100], [0x80, ord('0'), 0])
        retained = self.native.execute('release', 11)
        self.assertEqual(retained[50], 0x80000000)


if __name__ == '__main__':
    unittest.main()
