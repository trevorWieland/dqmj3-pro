import sys
import unittest
from pathlib import Path


sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
from squirrel_lookup023_build import WORK, windows
from squirrel_lookup023_oracle import Windows
from squirrel_lookup023_float import game_bits, number


def details(words):
    at = 16
    count = words[at]; at += 1
    error = bytes(words[at:at + count]).decode('latin1'); at += count + bool(count)
    count = words[at]; at += 1
    text = bytes(words[at:at + count]).decode('ascii'); at += count + 1
    events = [words[at + 16 * i:at + 16 * (i + 1)] for i in range(words[5])]
    at += 16 * words[5]
    end = words.index(0x230022) if 0x230022 in words else len(words)
    frees = [words[i:i + 8] for i in range(at, end, 8)]
    return error, text, events, frees


class Lookup023Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.native = Windows(windows(WORK / 'tests/windows'))

    def test_float_byte_index_sign_extends(self):
        self.assertEqual(self.native.execute(0)[:3], [1, 0x05000002, 0xffffff80])

    def test_raw_string_lookup_does_not_use_default(self):
        self.assertEqual(self.native.execute(1)[0], 0)

    def test_raw_userdata_delegate_miss_does_not_invoke(self):
        words = self.native.execute(2)
        self.assertEqual((words[0], words[13]), (0, 0))

    def test_missing_class_member_returns_false(self):
        self.assertEqual(self.native.execute(3)[0], 0)

    def test_unknown_low_type_returns_null_name(self):
        self.assertEqual(self.native.execute(4)[:3], [0, 0x01000090, 0])

    def test_unknown_middle_type_returns_null_name(self):
        self.assertEqual(self.native.execute(5)[:3], [0, 0x01001800, 0])

    def test_retained_error_is_not_destroyed_during_replacement(self):
        words = self.native.execute(6)
        error, _, events, _ = details(words)
        self.assertEqual(error, "the index 'ab\x80def' does not exist")
        self.assertNotIn(5, [row[0] for row in events])

    def test_compact_prototype_last_owner_during_allocation(self):
        words = self.native.execute(7)
        _, text, events, frees = details(words)
        self.assertEqual((words[12], words[7], text), (0, 0x01000001, 'function'))
        self.assertEqual(next(row for row in events if row[0] == 8)[1], 2)
        self.assertIn(21, [row[0] for row in frees])

    def test_recursive_delegate_survives_owner_callback(self):
        words = self.native.execute(8)
        _, _, events, _ = details(words)
        self.assertEqual(words[:3], [1, 0x08000200, 24])
        self.assertEqual(next(row for row in events if row[0] == 9)[1], 2)
        self.assertEqual([row[0] for row in events][-2:], [9, 7])

    def test_borrowed_generator_tag_default_dispatch_only(self):
        self.assertEqual(self.native.execute(10)[:3], [1, 0x05000002, 1004])

    def test_borrowed_thread_tag_default_dispatch_only(self):
        self.assertEqual(self.native.execute(11)[:3], [1, 0x05000002, 1006])

    def test_real_instance_null_method_reaches_default(self):
        self.assertEqual(self.native.execute(13)[:3], [1, 0x05000002, 1008])

    def test_raw_instance_does_not_read_method_provider(self):
        self.assertEqual(self.native.execute(15)[0], 0)

    def test_null_instance_method_preserves_old_destination(self):
        self.assertEqual(self.native.execute(16)[:3], [0, 0x08002000, 21])

    def test_actual_compact_prototype_method_assignment(self):
        self.assertEqual(self.native.execute(17)[:3], [1, 0x08002000, 20])

    def test_actual_native_closure_method_assignment(self):
        self.assertEqual(self.native.execute(18)[:3], [1, 0x08000200, 24])

    def test_raw_borrowed_generator_and_thread_tags(self):
        self.assertEqual((self.native.execute(20)[0], self.native.execute(21)[0]), (0, 0))

    def test_finite_float_text_matches_independent_python(self):
        for index in [0,1,2,3,6,7,12,13,14,15,16,17,20,21,22,23,26,27,28,29,60,61,62,63,80,95]:
            with self.subTest(index=index):
                error, _, _, _ = details(self.native.execute(64 + index))
                self.assertEqual(error, "the index '" + format(number(game_bits(index)), '.14g') + "' does not exist")

    def test_float_observation_survives_cleanup(self):
        words = self.native.execute(78, 1)
        error, text, _, _ = details(words)
        self.assertEqual((words[14], error, text), (0x01000001, '', '256.00024414062'))

    def test_actual_native_array_from_table_lookup(self):
        words = self.native.execute(200)
        native = words[words.index(0x230022):]
        self.assertEqual(words[:3], [1,0x08000040,500])
        self.assertEqual(native, [0x230022,0,0,1,1,1,32,32,1,1,3,3,1,0,
            0x01000001,0,0x01000001,0,0x01000001,0])

    def test_actual_native_array_from_instance_lookup(self):
        words = self.native.execute(201)
        self.assertEqual(words[:3], [1,0x08000040,500])
        self.assertEqual(words[words.index(0x230022)+10], 3)

    def test_actual_arity_failure_releases_callable_after_key(self):
        words = self.native.execute(202)
        error, _, events, frees = details(words)
        self.assertEqual((words[0],words[9],words[6]), (0,0,4))
        self.assertEqual(error, 'wrong number of parameters')
        self.assertEqual([row[0] for row in frees][-2:], [10,24])
        self.assertEqual(next(row for row in events if row[0]==11)[1], 2)

    def test_actual_native_depth_failure_returns_without_frame(self):
        words = self.native.execute(203)
        self.assertEqual(details(words)[0], 'Native stack overflow')
        self.assertEqual(words[words.index(0x230022):], [0x230022,0,100,1,1,1,32,32,0])

    def test_actual_empty_native_array_needs_no_element_buffer(self):
        words = self.native.execute(204)
        native = words[words.index(0x230022):]
        self.assertEqual(native[9:], [1,0,0,0,0])
        self.assertNotIn(13, [row[0] for row in details(words)[2]])

    def test_actual_native_float_length_truncates_in_admitted_domain(self):
        words = self.native.execute(205)
        self.assertEqual(words[words.index(0x230022)+10:words.index(0x230022)+12], [3,3])

    def test_actual_compact_prototype_outer_fills_native_array(self):
        live = self.native.execute(206)
        native = live[live.index(0x230022):]
        self.assertEqual((live[11],native[14:]), (7,[0x08002000,20]*3))
        cleaned = self.native.execute(206,1)
        self.assertEqual((cleaned[11],cleaned[14]), (3,0x01000001))


if __name__ == '__main__':
    unittest.main()
