import ctypes
import json
import sys
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_wave013_control as wave


class NativeControlCompileTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.work = wave.WORK / 'control-tests'
        cls.receipts = []
        cls.graph = wave.build_tools.arm(cls.work / 'source', cls.receipts)
        cls.library = ctypes.CDLL(str(wave.build_tools.windows(cls.work / 'windows', cls.receipts)))
        image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
        if wave.sha(image) != wave.MODULE_SHA:
            raise RuntimeError('Canonical original module differs')
        cls.original = [(address, image[address - 0x100000:address - 0x100000 + size])
                        for address, size in wave.build_tools.SIZES.items()]

    def compare(self, specification):
        entry = wave.model.OPERATIONS[specification['operation']]
        reference = wave.runtime.execute_arm(self.original, entry, specification, 70, True, 15)
        source = wave.source_run(self.graph, entry, specification, 70, True, 15)
        self.assertEqual(reference['memorySha256'], source['memorySha256'])
        wave.runtime.execute_windows(self.library, specification, 70)
        return reference

    def test_constructor_preserves_high_value_and_existing_owned_ring(self):
        for bit in [0, 31, 32, 128, 255]:
            spec = {'operation': 'construct_control', 'bit': bit}
            self.compare(spec)
            layout = wave.model.encode(spec, 0x3000000, 4)
            self.assertEqual(layout['before'][0x22007:0x22014], layout['after'][0x22007:0x22014])
            self.assertEqual(layout['after'][0x22006], bit)

    def test_unchanged_membership_consumes_pending_without_runtime_edge(self):
        spec = {'operation': 'control', 'count': 2, 'members': [1, 1], 'pending': [[0, 7], [1, 7]]}
        self.assertEqual(self.compare(spec)['result'], 1)
        layout = wave.model.encode(spec, 0x3000000, 4)
        self.assertEqual(layout['before'][0x24008:0x24010], layout['after'][0x24008:0x24010])
        self.assertNotEqual(layout['before'][0x24014:0x2401c], layout['after'][0x24014:0x2401c])

    def test_duplicate_control_grouping_keeps_distinct_byte_values(self):
        for bit in [0, 31, 32, 128, 255]:
            self.compare({'operation': 'control', 'count': 3, 'pending': [[0, bit], [1, bit], [2, bit ^ 1]]})

    def test_current_vector_bytes_survive_expansion_and_epsilon_closure(self):
        edges = [[1, 3, 1, 0, []], [3, 1, 1, 0, []]]
        self.compare({'operation': 'control', 'count': 4, 'members': [1, 0, 7, 0],
                      'pending': [[1, 3]], 'edges': edges})

    def test_group_removal_and_temporary_leak_precede_intern_failure(self):
        spec = {'operation': 'control', 'count': 2, 'pending': [[0, 7], [1, 7]], 'free_slots': 1}
        self.assertEqual(self.compare(spec)['result'], 0)
        layout = wave.model.encode(spec, 0x3000000, 4)
        self.assertEqual(layout['after'][0x1000:0x1005], bytes([1, 1, 0, 0, 1]))

    def test_runtime_edge_failure_keeps_temporary_after_successful_intern(self):
        spec = {'operation': 'control', 'count': 2, 'pending': [[0, 7]], 'free_slots': 5}
        self.assertEqual(self.compare(spec)['result'], 0)
        layout = wave.model.encode(spec, 0x3000000, 4)
        self.assertEqual(layout['after'][0x1002], 1)
        self.assertNotEqual(layout['before'][0x104:0x10c], layout['after'][0x104:0x10c])

    def test_odd_raw_membership_counts_and_native_pointer_blocks(self):
        for count in [0, 1, 3, 17, 32]:
            self.compare({'operation': 'control', 'count': count, 'pending': [[0, 255]] if count else []})

    def test_real_negative_controls_and_complete_owned_bodies(self):
        packet = json.loads((wave.OUTPUT / 'packet.json').read_text())
        self.assertEqual(packet['behavior']['newOriginalInstructionsReached'], 127)
        self.assertEqual(len(packet['negativeControls']), 10)
        self.assertTrue(all(row['returnedNormally'] and row['immutableMemoryPreserved']
                            for row in packet['negativeControls']))
        self.assertEqual(packet['dependencies']['retainedOriginalHelpers'], [])
        self.assertFalse(packet['platform']['wholeGameBuildOrExecution'])


if __name__ == '__main__':
    unittest.main()
