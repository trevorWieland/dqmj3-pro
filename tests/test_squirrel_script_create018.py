from pathlib import Path
import sys
import unittest


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from squirrel_script_create018_build import WORK, windows
from squirrel_script_create018_oracle import Windows


def details(words):
    at = 277 + 24 * words[0]
    extra = words[at:]
    return {'result': extra[0], 'events': extra[1], 'overflow': extra[2], 'allocations': extra[3],
        'reallocations': extra[4], 'destination': extra[5:7], 'shared': extra[7], 'alternateChain': extra[8],
        'stack': extra[9], 'base': extra[10], 'stackValues': extra[11:43],
        'rows': [extra[43 + i * 16:59 + i * 16] for i in range(extra[1])]}


def vector(words, index):
    at = 177 + index * 16
    return [words[at + i * 2:at + 2 + i * 2] for i in range(8)]


@unittest.skipUnless(sys.platform == 'win32', 'Creation tests require actual Windows')
class ScriptClosureCreation(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.native = Windows(windows(WORK / 'tests/native'))

    def run_case(self, variant, root='published'):
        words = self.native.execute(root, variant)
        self.assertEqual(details(words)['overflow'], 0)
        return words

    def test_named_natural_layout_and_compact_prefix_are_distinct(self):
        self.assertEqual(self.native.layout, [112, 40, 24, 48, 64, 80, 96])

    def test_empty_controller_constructs_and_publishes_real_closure(self):
        words = self.run_case(0)
        self.assertEqual(words[34:49], [1, 1, 0, 1, 0, 0x08002000, 11, 0x01000001, 0, 0, 0, 0, 0, 0, 0])
        self.assertEqual(details(words)['destination'], [0x08000100, 3])

    def test_local_captures_use_actual_string_native_and_prototype_objects(self):
        self.assertEqual(vector(self.run_case(1), 1)[:3], [[0x08000010, 32], [0x08000200, 21], [0x08002000, 13]])

    def test_parent_captures_include_actual_small_prototype_and_weak(self):
        self.assertEqual(vector(self.run_case(2), 1)[:3], [[0x08000010, 33], [0x08002000, 13], [0x08010000, 44]])

    def test_defaults_select_measured_base_plus_integer_indices(self):
        words = self.run_case(1)
        self.assertEqual(vector(words, 2)[:3], vector(words, 1)[:3])
        self.assertEqual(details(words)['base'], 2)

    def test_lookup_interface_receives_actual_key_flags_and_initialized_slot(self):
        words = self.run_case(3)
        row = next(row for row in details(words)['rows'] if row[0] == 3)
        self.assertEqual(row[1:4], [31, 0, 1])
        self.assertEqual(row[8:10], [2, 3])
        self.assertEqual(vector(words, 1)[1], [0x08000200, 21])

    def test_narrow_table_model_has_same_material_value_without_boundary_events(self):
        words = self.run_case(15)
        self.assertNotIn(3, [row[0] for row in details(words)['rows']])
        self.assertEqual(vector(words, 1)[1], [0x08000200, 21])

    def test_failed_lookup_retains_unpublished_linked_zero_count_closure(self):
        words = self.run_case(5, 'owner-first')
        state = details(words)
        self.assertEqual(state['result'], 0)
        self.assertEqual(state['destination'], [0x08000010, 34])
        self.assertEqual(words[2], 3)
        self.assertEqual(words[35], 0)
        self.assertEqual(words[47:49], [2, 3])
        self.assertEqual(words[50], 2)
        self.assertEqual([row[0] for row in state['rows']], [1, 2, 3, 4])

    def test_failed_lookup_does_not_discard_provider_writeback(self):
        words = self.run_case(13)
        self.assertEqual(details(words)['result'], 0)
        self.assertEqual(vector(words, 1)[0], [0x08002000, 13])

    def test_only_low_kind_byte_is_selected_and_unknown_kinds_skip(self):
        low = self.run_case(6)
        self.assertEqual(low[47:49], [2, 3])
        self.assertEqual(vector(low, 1)[:2], [[0x08000010, 32], [0x08000010, 33]])
        unknown = self.run_case(7)
        self.assertEqual(unknown[47:49], [0, 3])

    def test_local_source_is_selected_before_growth_changes_vm_stack(self):
        words = self.run_case(8)
        self.assertEqual(words[47:49], [6, 6])
        self.assertEqual(vector(words, 4)[3], [0x08000010, 32])
        self.assertEqual(vector(words, 4)[4], [0x05000002, 704])

    def test_parent_source_is_selected_before_growth_relocates_parent_vector(self):
        words = self.run_case(25)
        self.assertEqual(words[16], 999)
        self.assertEqual(vector(words, 4)[3], [0x08000010, 33])

    def test_default_source_is_selected_before_growth_changes_vm_stack(self):
        words = self.run_case(11)
        self.assertEqual(words[44:46], [6, 6])
        self.assertEqual(vector(words, 5)[3], [0x08000010, 32])
        self.assertEqual(vector(words, 5)[4], [0x05000002, 704])

    def test_cached_counts_and_shared_capture_survive_provider_mutations(self):
        self.assertEqual(self.run_case(26)[47:49], [3, 3])
        self.assertEqual(self.run_case(27)[44:46], [3, 3])
        state = details(self.run_case(9))
        self.assertEqual(state['shared'], 1)
        self.assertEqual(state['rows'][0][4], 1)
        self.assertTrue(all(row[4] == 2 for row in state['rows'][1:]))

    def test_publication_holds_temporary_and_destination_before_old_release(self):
        state = details(self.run_case(1))
        row = next(row for row in state['rows'] if row[0] == 5)
        self.assertEqual(row[5], 2)
        self.assertEqual(row[12:14], [0x08000100, 3])
        self.assertEqual(state['rows'][0][5:], [0] * 11)

    def test_old_owner_can_clear_destination_while_temporary_keeps_new_owner_alive(self):
        words = self.run_case(12)
        state = details(words)
        rows = [row for row in state['rows'] if row[0] in [5, 6]]
        self.assertEqual([row[5] for row in rows], [2, 1])
        self.assertEqual(state['destination'], [0x01000001, 0])
        self.assertEqual(words[34:36], [6, 0])
        self.assertEqual(state['result'], 1)

    def test_created_owner_can_finalize_actual_compact_prototype(self):
        words = self.run_case(23, 'owner-first')
        self.assertEqual(words[49:51], [6, 0])
        rows = [words[277 + i * 24:301 + i * 24] for i in range(words[0])]
        self.assertIn([2, 11, 356], [row[:3] for row in rows])

    def test_actual_closure_and_compact_prototype_weak_orders_remain_distinct(self):
        for variant, tag in [(14, 0x08000100), (24, 0x08002000)]:
            owner = self.run_case(variant, 'owner-first')
            weak = self.run_case(variant, 'weak-first')
            self.assertEqual(owner[175:177], [0x01000001, 0])
            self.assertEqual(weak[175], tag)
        self.assertEqual(self.run_case(14, 'weak-first')[36], 0)
        self.assertEqual(self.run_case(24, 'weak-first')[51], 0)

    def test_destination_can_alias_previously_captured_local(self):
        words = self.run_case(21)
        self.assertEqual(details(words)['stackValues'][12:14], [0x08000100, 3])
        self.assertEqual(vector(words, 1)[0], [0x08000010, 34])
        self.assertEqual(vector(words, 2)[0], [0x08000010, 34])

    def test_function_prototype_can_also_be_captured_and_defaulted(self):
        words = self.run_case(22)
        self.assertEqual(vector(words, 1)[0], [0x08002000, 11])
        self.assertEqual(vector(words, 2)[0], [0x08002000, 11])
        self.assertEqual(words[50], 5)


if __name__ == '__main__':
    unittest.main()
