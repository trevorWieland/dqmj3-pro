from pathlib import Path
import sys
import unittest


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from squirrel_string_lifetime015_build import WORK, windows
from squirrel_string_lifetime015_oracle import Windows


def reference_hash(data):
    result = len(data)
    count = len(data) // ((len(data) >> 5) | 1)
    for byte in data[:count]:
        code = byte if byte < 128 else byte + 0xff00
        result = (result ^ ((result * 32 + result // 4 + code) & 0xffffffff)) & 0xffffffff
    return result


@unittest.skipUnless(sys.platform == 'win32', 'String lifetime tests require real Windows')
class StringLifetime(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.native = Windows(windows(WORK / 'tests/native'))

    def value(self, words, index=0):
        return words[30 + index * 135:165 + index * 135]

    def rows(self, words):
        return [words[1248 + index * 20:1268 + index * 20] for index in range(words[0])]

    def test_natural_prefix_flexible_storage_and_nominal_allocation_are_distinct(self):
        self.assertEqual(self.native.layout, [24, 48, 16, 56, 40])

    def test_raw_high_bytes_use_signed_byte_to_unsigned16_hash_conversion(self):
        value = self.value(self.native.execute('create', 2))
        self.assertEqual(value[5:7], [3, reference_hash([0x80, 0xff, 65])])
        self.assertEqual(value[7:11], [0x80, 0xff, 65, 0])

    def test_explicit_embedded_zero_bytes_are_not_unicode_or_nul_decoded(self):
        value = self.value(self.native.execute('add', 4))
        self.assertEqual(value[5:7], [5, reference_hash([97, 0, 98, 255, 99])])
        self.assertEqual(value[7:13], [97, 0, 98, 255, 99, 0])

    def test_negative_length_scans_only_to_first_zero(self):
        value = self.value(self.native.execute('create', 3))
        self.assertEqual(value[5:7], [1, reference_hash([98])])
        self.assertEqual(value[7:10], [98, 0, 0x5a])

    def test_long_hash_decrements_length_by_step_but_advances_one_byte(self):
        data = [(i * 13 + 3) & 255 for i in range(96)]
        value = self.value(self.native.execute('add', 5))
        self.assertEqual(value[6], reference_hash(data))
        self.assertEqual(value[7:103], data)

    def test_cache_hit_preserves_identity_without_allocation_or_retain(self):
        words = self.native.execute('add', 6)
        self.assertEqual(words[:6], [0, 0, 11, 0, 0, 0])
        self.assertEqual(self.value(words)[:4], [1, 0, 0, 2])

    def test_create_publishes_shared_even_for_existing_interned_value(self):
        words = self.native.execute('create', 6)
        self.assertEqual(self.value(words)[3], 1)
        self.assertEqual(words[3], 0)

    def test_grow_rehashes_by_prepend_and_preserves_all_registered_nodes(self):
        words = self.native.execute('create', 9)
        data = [[0x40 + i * 4] for i in range(4)] + [[110, 101, 119]]
        old = [[] for _ in range(4)]
        for index, text in enumerate(data):
            old[reference_hash(text) & 3].insert(0, index)
        new = [[] for _ in range(8)]
        for chain in old:
            for index in chain:
                new[reference_hash(data[index]) & 7].insert(0, index)
        self.assertEqual(words[9:12], [8, 5, 42])
        self.assertEqual(words[14:22], [chain[0] + 11 if chain else 0 for chain in new])
        for chain in new:
            for position, index in enumerate(chain):
                self.assertEqual(self.value(words, index)[4], chain[position + 1] + 11 if position + 1 < len(chain) else 0)

    def test_grow_callbacks_observe_complete_rehash_before_shared_publication(self):
        words = self.native.execute('create', 8)
        rows = self.rows(words)
        self.assertEqual([row[0] for row in rows], [1, 2, 5])
        self.assertEqual([row[13] for row in rows], [2, 2, 2])
        self.assertEqual(rows[1][3:6], [41, 8, 5])
        self.assertEqual(rows[2][3:6], [42, 8, 5])
        self.assertEqual(self.value(words, 4)[3], 1)

    def test_hash_is_recomputed_after_allocator_can_mutate_input(self):
        words = self.native.execute('add', 10)
        value = self.value(words)
        self.assertEqual(value[7:10], [97 ^ 0x40, 98, 0])
        self.assertEqual(value[6], reference_hash([97 ^ 0x40, 98]))

    def test_remove_handles_middle_and_tail_without_clearing_retained_next(self):
        middle = self.native.execute('remove', 13)
        tail = self.native.execute('remove', 14)
        self.assertEqual(middle[10], 2)
        self.assertEqual(self.value(middle, 2)[4], 11)
        self.assertEqual(self.value(middle, 1)[4], 11)
        self.assertEqual(self.value(tail, 1)[4], 0)

    def test_remove_unlinks_and_captures_length_before_virtual_destructor(self):
        words = self.native.execute('release', 12)
        rows = self.rows(words)
        self.assertEqual([row[:3] for row in rows], [[7, 11, 0], [4, 11, 34]])
        self.assertEqual(rows[0][5], 0)
        self.assertEqual(rows[0][11], 2)
        self.assertEqual(rows[1][11], 9)
        self.assertEqual(self.value(words)[0], 3)

    def test_both_string_weak_owner_destruction_orders_use_real014_family(self):
        owner_first = self.native.execute('owner-first', 1)
        weak_first = self.native.execute('weak-first', 1)
        self.assertEqual([row[0] for row in self.rows(owner_first)], [3, 4, 6])
        self.assertEqual([row[0] for row in self.rows(weak_first)], [3, 6, 4])
        self.assertEqual(owner_first[1113:1115], [0x01000001, 0])
        self.assertEqual(weak_first[1113:1115], [0x08000010, 11])
        self.assertEqual(self.value(owner_first)[2], 31)
        self.assertEqual(self.value(weak_first)[2], 0)

    def test_old_bucket_disposal_callback_can_attach_current_weak_after_prefix_initialization(self):
        words = self.native.execute('create', 11)
        self.assertEqual(self.value(words, 4)[2], 32)
        self.assertEqual(words[1118:1120], [0x08000010, 15])


if __name__ == '__main__':
    unittest.main()
