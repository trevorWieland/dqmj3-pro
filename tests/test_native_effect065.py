import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
from native_effect065_preview_cases import allocation_records, observe


class Fixture:
    def __init__(self, pointer=8):
        self.pointer = pointer
        self.memory = bytearray([0xa5]) * 0x100000
        self.state, self.cache, self.entry = 0x10000, 0x1000, 0x2000
        record_bytes = 20 if pointer == 4 else 32
        self.layout = {'allocations': 16, 'recordBytes': record_bytes, 'role': pointer,
            'logical': pointer + 4, 'physical': pointer + 8, 'live': 2 * pointer + 8,
            'released': 16 + record_bytes * 256, 'arena': 0x3000, 'fixtureBytes': 0x3000 + 262144,
            'cacheBytes': 44 if pointer == 4 else 80, 'entryBytes': 40 if pointer == 4 else 64,
            'primary': 20 if pointer == 4 else 24, 'vector': 24 if pointer == 4 else 32}
        self.put(self.state, 0, 4)
        self.put(self.state + 4, 1, 4)
        self.put(self.state + 8, 0, 4)
        self.put(self.state + 12, 0, 4)
        self.address = self.state + self.layout['arena'] + 32
        self.put(self.state, 384, 4)
        self.record = self.state + 16
        self.put(self.record, self.address)
        for field, value, size in [('role', 0, 4), ('logical', 320, 4), ('physical', 320, pointer), ('live', 1, 4)]:
            self.put(self.record + self.layout[field], value, size)
        self.put(self.entry + self.layout['primary'], self.address)
        for offset in range(0, 3 * pointer, pointer):
            self.put(self.entry + self.layout['vector'] + offset, 0)
        self.before_cache = self.read(self.cache - 32, self.layout['cacheBytes'] + 64)
        self.before_entry = self.read(self.entry - 32, self.layout['entryBytes'] + 64)

    def put(self, address, value, size=None):
        size = self.pointer if size is None else size
        self.memory[address:address + size] = value.to_bytes(size, 'little')

    def read(self, address, size):
        return bytes(self.memory[address:address + size])

    def observe(self):
        return observe(self, self.before_cache, self.before_entry)


class EffectPreviewObserverTests(unittest.TestCase):
    def test_valid_full_preview_record_and_pointer_identity(self):
        for pointer in [4, 8]:
            fixture = Fixture(pointer)
            result = fixture.observe()
            self.assertEqual(result['primary'], 0)
            self.assertEqual(result['allocations'][0]['previewBytes'], (bytes([0xa5]) * 320).hex())

    def test_guard_write_is_rejected(self):
        fixture = Fixture()
        fixture.memory[fixture.address + 320] = 0
        with self.assertRaisesRegex(ValueError, 'guards'):
            fixture.observe()

    def test_truncated_native_pointer_is_rejected(self):
        fixture = Fixture()
        fixture.put(fixture.entry + fixture.layout['primary'], 0xdeadbeef)
        with self.assertRaisesRegex(ValueError, 'truncated'):
            fixture.observe()

    def test_preserved_caller_byte_change_is_rejected(self):
        fixture = Fixture()
        fixture.memory[fixture.entry] = 0
        with self.assertRaisesRegex(ValueError, 'preserved caller'):
            fixture.observe()

    def test_null_vector_with_nonzero_end_is_rejected(self):
        fixture = Fixture()
        fixture.put(fixture.entry + fixture.layout['vector'] + 8, 8)
        with self.assertRaisesRegex(ValueError, 'null vector'):
            fixture.observe()

    def test_wrong_native_vector_budget_is_rejected(self):
        fixture = Fixture()
        fixture.put(fixture.record + fixture.layout['role'], 1, 4)
        fixture.put(fixture.record + fixture.layout['logical'], 128, 4)
        fixture.put(fixture.record + fixture.layout['physical'], 128)
        with self.assertRaisesRegex(ValueError, 'allocation budget'):
            allocation_records(fixture)

    def test_provider_failure_is_rejected(self):
        fixture = Fixture()
        fixture.put(fixture.state + 12, 1, 4)
        with self.assertRaisesRegex(ValueError, 'capacity/ownership'):
            fixture.observe()

    def test_unborrowed_cache_change_is_rejected(self):
        fixture = Fixture()
        fixture.memory[fixture.cache] = 0
        with self.assertRaisesRegex(ValueError, 'borrowed cache'):
            fixture.observe()

    def test_unused_provider_metadata_change_is_rejected(self):
        fixture = Fixture()
        fixture.memory[fixture.state + 0x2000] = 0
        with self.assertRaisesRegex(ValueError, 'unused provider'):
            fixture.observe()

    def test_unused_provider_tail_change_is_rejected(self):
        fixture = Fixture()
        fixture.memory[fixture.state + fixture.layout['arena'] + 10000] = 0
        with self.assertRaisesRegex(ValueError, 'unused provider'):
            fixture.observe()


if __name__ == '__main__':
    unittest.main()
