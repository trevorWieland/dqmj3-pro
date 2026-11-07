from pathlib import Path
import sys
import unittest


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from squirrel_weak_reference014_build import WORK, windows
from squirrel_weak_reference014_oracle import Windows


@unittest.skipUnless(sys.platform == 'win32', 'Weak lifetime tests require real Windows')
class WeakReferenceLifetime(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.native = Windows(windows(WORK / 'tests/native'))

    def rows(self, words):
        return [words[29 + index * 16:45 + index * 16] for index in range(words[0])]

    def test_noncollectable_weak_and_named_collectable_layouts_stay_distinct(self):
        self.assertEqual(self.native.layout, [40, 24, 40, 128, 24, 184])

    def test_cold_creation_initializes_poisoned_storage_without_retaining_target(self):
        for variant in [0, 1]:
            words = self.native.execute('create', variant)
            self.assertEqual(words[2:8], [1, 1111, 0, 11, 0, 2 + variant])
            self.assertEqual(words[9:14], [1, 0, 0, 0x08000200 if variant else 0x08002000, variant + 1])
            row = self.rows(words)[0]
            self.assertEqual(row[:5], [1, 11, 20, 0, 0])
            self.assertEqual(row[5:10], [5, 0x55667788, 14, 0x05000002, 0x11223344])

    def test_cached_creation_returns_same_object_preserving_original_tag(self):
        words = self.native.execute('create', 2)
        self.assertEqual(words[0:4], [0, 0, 0, 1111])
        self.assertEqual(words[12], 0x08000040)

    def test_weak_release_detaches_target_before_virtual_destructor_observer(self):
        words = self.native.execute('release', 8)
        rows = self.rows(words)
        self.assertEqual([row[:3] for row in rows], [[4, 11, 0], [2, 11, 20]])
        self.assertEqual([row[3] for row in rows], [0, 0])
        self.assertEqual(words[22:24], [0x01000001, 0])

    def test_destructor_alone_invalidates_its_weak_without_detaching_owner(self):
        words = self.native.execute('destructor', 4)
        self.assertEqual(words[0], 0)
        self.assertEqual(words[5], 11)
        self.assertEqual(words[9], 4)
        self.assertEqual(words[17:19], [0x01000001, 0])

    def test_weak_deallocation_observes_dependent_target_already_invalidated(self):
        words = self.native.execute('release', 4)
        row = self.rows(words)[0]
        self.assertEqual(row[:4], [2, 11, 20, 0])
        self.assertEqual(row[10:12], [0x01000001, 0])

    def test_actual_prototype_owner_can_die_before_weak_reference(self):
        words = self.native.execute('owner-first', 0)
        rows = self.rows(words)
        self.assertEqual([row[:3] for row in rows], [[1, 11, 20], [3, 1, 96], [2, 11, 20]])
        self.assertEqual(words[4], 1)
        self.assertEqual(words[12:14], [0x01000001, 0])
        self.assertEqual(rows[-1][15], 1)

    def test_actual_native_owner_unlinks_and_invalidates_before_weak_release(self):
        words = self.native.execute('owner-first', 1)
        self.assertEqual(words[8], 0)
        self.assertEqual([row[:3] for row in self.rows(words)], [[1, 11, 20], [3, 2, 72], [2, 11, 20]])

    def test_weak_of_weak_chain_invalidates_and_disposes_in_owner_order(self):
        words = self.native.execute('nested', 0)
        rows = self.rows(words)
        self.assertEqual(words[2:4], [2, 1211])
        self.assertEqual([row[:3] for row in rows], [[1, 11, 20], [1, 12, 20], [2, 11, 20], [2, 12, 20]])
        self.assertEqual(words[17:19], [0x01000001, 0])

    def test_allocator_callback_cannot_replace_returned_cache_publication(self):
        words = self.native.execute('create', 10)
        self.assertEqual(words[5], 11)
        self.assertEqual(self.rows(words)[0][3], 0)

    def test_nonreference_flag_does_not_detach_even_when_payload_is_owner_address(self):
        words = self.native.execute('release', 6)
        self.assertEqual(words[5:7], [11, 0x80000001])
        self.assertEqual(words[12:14], [0x01000001, 777])

    def test_roundtrip_does_not_change_target_count_or_retain_weak(self):
        for variant in range(12):
            words = self.native.execute('roundtrip', variant)
            self.assertEqual(words[6], 0x80000001 if variant // 2 == 3 else 0)
            self.assertEqual(words[10], 0)


if __name__ == '__main__':
    unittest.main()
