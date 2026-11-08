import sys
import unittest
from pathlib import Path
from types import SimpleNamespace

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
from effect_resource065_graph_observation import Observation


class Fixture:
    def __init__(self, pointer=8):
        self.base = 0x100000000 if pointer == 8 else 0
        self.memory = bytearray(0x20000)
        self.layout = {'pointerBytes': pointer, 'allocations': 0x10, 'records': 0x100,
            'heap': 0x2000, 'heapStride': 8448, 'payloadOffset': 128,
            'resource': 0x40, 'system': 0x200, 'shaderWords': 0x800}
        self.state = self.base + 0x1000
        self.image = self.base + 0x10000
        self.image_bytes = 4096
        self.allocator = self.state + 0x900
        self.pattern = 0xa5
        self.original = False
        self.readonly = []
        self.put(self.state + self.layout['allocations'], 2)
        self.put(self.state + self.layout['records'] + 4, 16)
        self.put(self.state + self.layout['records'] + 24 + 4, 48 if pointer == 8 else 40)

    def put(self, address, value):
        offset = address - self.base
        self.memory[offset:offset + 4] = value.to_bytes(4, 'little')

    def read_bytes(self, address, size):
        offset = address - self.base
        if offset < 0 or offset + size > len(self.memory):
            raise ValueError('Synthetic observer backing bounds')
        return bytes(self.memory[offset:offset + size])


class ResourceObserverIntegrityTests(unittest.TestCase):
    def test_native_high_pointer_identity_is_preserved(self):
        fixture = Fixture()
        observer = Observation(fixture)
        self.assertEqual(observer.token(fixture.image + 31), ['image', 31])
        self.assertEqual(observer.token(observer.payload(1)), ['allocation', 1, 0])
        with self.assertRaisesRegex(ValueError, 'undeclared live pointer'):
            observer.token(observer.payload(1) & 0xffffffff)

    def test_unknown_pointer_is_rejected_for_both_abis(self):
        for pointer in [4, 8]:
            with self.subTest(pointer=pointer):
                observer = Observation(Fixture(pointer))
                with self.assertRaisesRegex(ValueError, 'undeclared live pointer'):
                    observer.token(0xdeadbeef)

    def test_shared_reference_identity_cannot_split(self):
        observer = Observation(Fixture())
        observer.alias('reference', 0x100001000, 0x200)
        with self.assertRaisesRegex(ValueError, 'alias identity'):
            observer.alias('reference', 0x100001010, 0x200)

    def test_distinct_emitters_cannot_be_coalesced(self):
        observer = Observation(Fixture())
        observer.alias('emitter', 0x100001000, 0x400)
        with self.assertRaisesRegex(ValueError, 'alias identity'):
            observer.alias('emitter', 0x100001000, 0xc00)

    def test_repeated_shared_identity_is_valid(self):
        observer = Observation(Fixture())
        for kind in ['reference', 'emitter']:
            observer.alias(kind, 0x100001000, 0x400)
            observer.alias(kind, 0x100001000, 0x400)

    def test_typed_native_budget_is_independent_of_logical_target_bytes(self):
        for pointer in [4, 8]:
            observer = Observation(Fixture(pointer))
            expected = 48 if pointer == 8 else 40
            observer.typed_allocation(observer.payload(1), expected, 'binding')
            with self.assertRaisesRegex(ValueError, 'physical budget'):
                observer.typed_allocation(observer.payload(1), expected + 4, 'binding')

    def test_interior_pointer_cannot_claim_an_owned_object_start(self):
        observer = Observation(Fixture())
        with self.assertRaisesRegex(ValueError, 'begin at an actual owned allocation'):
            observer.typed_allocation(observer.payload(1) + 1, 48, 'binding')

    def test_changed_immutable_caller_byte_is_rejected(self):
        fixture = Fixture()
        fixture.readonly = [(fixture.state + 0x500, b'original')]
        with self.assertRaisesRegex(ValueError, 'immutable caller'):
            Observation(fixture).snapshot()

    def test_null_and_unwritten_pointer_observations_remain_distinct(self):
        for pointer in [4, 8]:
            observer = Observation(Fixture(pointer))
            self.assertIsNone(observer.token(0))
            pattern = int.from_bytes(bytes([0xa5]) * pointer, 'little')
            self.assertEqual(observer.token(pattern), 'unwritten-pattern')


if __name__ == '__main__':
    unittest.main()
