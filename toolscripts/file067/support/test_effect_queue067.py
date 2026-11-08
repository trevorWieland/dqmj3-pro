import struct
import unittest
from types import SimpleNamespace

from toolscripts.effect_queue067_observation import Observation


def fixture():
    state = 0x110000000
    raw = bytearray(b'\xa5' * (512 + 4 * 8448))
    layout = {'pointerBytes': 8, 'allocations': 0, 'records': 64, 'heap': 512, 'payloadOffset': 128, 'heapStride': 8448}
    q = {'nodeBytes': 24, 'blockCapacity': 8, 'blockNodes': 16, 'count': 40}
    machine = SimpleNamespace(state=state, layout=layout, q=q, opaque_base=0x220000000)
    def read(address, size):
        if not state <= address <= address + size <= state + len(raw):
            raise ValueError('Synthetic observer escaped owned storage')
        return bytes(raw[address - state:address - state + size])
    machine.read_bytes = read
    def word(offset, value, width=8):
        raw[offset:offset + width] = value.to_bytes(width, 'little')
    word(0, 3, 4)
    for slot, (logical, physical) in enumerate([(24, 48), (12, 24), (24, 48)]):
        struct.pack_into('<6I', raw, 64 + slot * 24, logical, physical, 4, 0, 0, 1)
    store, block, nodes = [state + 512 + 128 + index * 8448 for index in range(3)]
    for offset, value in [(0, block), (8, 0), (16, nodes + 48), (24, nodes + 48), (32, nodes)]:
        word(store - state + offset, value)
    word(store - state + 40, 1, 4)
    word(block - state, 0)
    word(block - state + 8, 2, 4)
    word(block - state + 16, nodes)
    for offset, value in [(0, nodes + 24), (8, nodes + 24), (24, nodes), (32, nodes), (40, machine.opaque_base)]:
        word(nodes - state + offset, value)
    return machine, raw, store, nodes, word


class QueueObservationTests(unittest.TestCase):
    def test_high_pointer_list_has_independent_opaque_membership(self):
        machine, _, store, _, _ = fixture()
        observer = Observation(machine)
        row = observer.queue(store)
        self.assertEqual(row['nodes'], [{'node': [2, 1], 'task': ['opaque', 0]}])
        observer.guards()

    def test_truncated_live_pointer_is_rejected_before_dereference(self):
        machine, _, store, nodes, word = fixture()
        word(nodes - machine.state + 40, machine.opaque_base & 0xffffffff)
        with self.assertRaisesRegex(ValueError, 'no independently owned'):
            Observation(machine).queue(store)

    def test_broken_back_link_cannot_hide_behind_valid_forward_order(self):
        machine, _, store, nodes, word = fixture()
        word(nodes - machine.state + 32, nodes + 24)
        with self.assertRaisesRegex(ValueError, 'backward link'):
            Observation(machine).queue(store)

    def test_free_and_live_memberships_must_be_disjoint(self):
        machine, _, store, nodes, word = fixture()
        word(store - machine.state + 8, nodes + 24)
        with self.assertRaisesRegex(ValueError, 'membership overlaps'):
            Observation(machine).queue(store)

    def test_count_does_not_replace_traversal(self):
        machine, _, store, _, word = fixture()
        word(store - machine.state + 40, 0, 4)
        with self.assertRaisesRegex(ValueError, 'sentinel/tail/count'):
            Observation(machine).queue(store)

    def test_sentinel_payload_stays_unwritten(self):
        machine, _, store, nodes, word = fixture()
        word(nodes - machine.state + 16, machine.opaque_base)
        with self.assertRaisesRegex(ValueError, 'unwritten sentinel'):
            Observation(machine).queue(store)

    def test_guard_after_full_physical_extent_is_observed(self):
        machine, raw, _, _, _ = fixture()
        raw[512 + 128 + 48] = 0
        with self.assertRaisesRegex(ValueError, 'full exterior guard'):
            Observation(machine).guards()

    def test_one_past_node_capacity_is_an_identity_only(self):
        machine, _, _, nodes, _ = fixture()
        self.assertEqual(Observation(machine).token(nodes + 48, True), [2, 2])
        with self.assertRaisesRegex(ValueError, 'typed node alignment'):
            Observation(machine).token(nodes + 47, True)

    def test_logical_retirement_violation_is_not_normalized(self):
        machine, _, _, _, _ = fixture()
        machine.lifetime_violations = [{'kind': 'read', 'slot': 0}]
        with self.assertRaisesRegex(ValueError, 'logically retired'):
            Observation(machine).guards()


if __name__ == '__main__':
    unittest.main()
