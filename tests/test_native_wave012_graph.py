import ctypes
import json
import struct
import sys
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_wave012_graph as wave


class NativeTransitionGraphTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.work = wave.WORK / 'graph-tests'
        cls.receipts = []
        cls.graph = wave.build_tools.arm(cls.work / 'source', cls.receipts)
        cls.library = ctypes.CDLL(str(wave.build_tools.windows(cls.work / 'windows', cls.receipts)))
        image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
        if wave.sha(image) != wave.MODULE_SHA:
            raise RuntimeError('Original module changed')
        cls.original = [(address, image[address - 0x100000:address - 0x100000 + size])
                        for address, size in wave.build_tools.SIZES.items()]

    def compare(self, specification):
        entry = wave.model.OPERATIONS[specification['operation']]
        reference = wave.runtime.execute_arm(self.original, entry | int(entry == 0x1010c8), specification, 70, True, 15)
        source = wave.source_run(self.graph, entry, specification, 70, True, 15)
        self.assertEqual(reference['memorySha256'], source['memorySha256'])
        wave.runtime.execute_windows(self.library, specification, 70)
        return reference

    def test_interior_split_failure_retains_left_mutation(self):
        spec = {'operation': 'erase', 'ranges': [[1, 5]], 'point': 3, 'free_slots': 0}
        self.assertEqual(self.compare(spec)['result'], 0)
        layout = wave.model.encode(spec, 0x3000000, 4)
        self.assertEqual(struct.unpack_from('<HH', layout['after'], 0x8008), (1, 2))

    def test_first_matching_overlapping_range_only(self):
        self.compare({'operation': 'erase', 'ranges': [[1, 5], [3, 7]], 'point': 3})
        for point in [0, 32768, 65535]:
            self.compare({'operation': 'erase', 'ranges': [[0, 65535]], 'point': point})

    def test_copy_self_cleanup_and_borrowed_append(self):
        for operation in ['copy_label', 'copy_wrapper']:
            self.compare({'operation': operation, 'self_copy': True, 'old_ranges': [[1, 2], [7, 9]]})
            self.compare({'operation': operation, 'kind': 3, 'ranges': [[30, 40]],
                          'old_ranges': [[1, 2]], 'provided_arena': False})

    def test_control_copy_retains_high_payload_byte(self):
        for operation in ['copy_label', 'copy_wrapper']:
            self.compare({'operation': operation, 'kind': 4, 'value': 0xa55a})
        layout = wave.model.encode({'operation': 'copy_label', 'kind': 4, 'value': 0xa55a}, 0x3000000, 4)
        self.assertEqual(layout['before'][0x22007], layout['after'][0x22007])
        self.assertEqual(layout['after'][0x22006], 0x5a)

    def test_epsilon_cycle_terminates_and_preserves_nonzero_members(self):
        edges = [[0, 1, 1, 0, []], [1, 2, 1, 0, []], [2, 0, 1, 0, []]]
        self.compare({'operation': 'closure', 'count': 3, 'edges': edges})
        self.compare({'operation': 'closure', 'count': 3, 'edges': edges, 'members': [7, 0, 0]})
        layout = wave.model.encode({'operation': 'closure', 'count': 3, 'edges': edges,
                                   'members': [7, 0, 0]}, 0x3000000, 4)
        self.assertEqual(layout['after'][0x700:0x703], bytes([7, 1, 1]))

    def test_populate_deep_copies_and_keeps_partial_prefix_on_failure(self):
        edges = [[0, 1, 2, 97, []], [0, 1, 3, 0, [[65, 90], [97, 122]]]]
        for free in [0, 2, 4, 5, 6, None]:
            self.compare({'operation': 'populate', 'count': 2, 'edges': edges, 'free_slots': free})

    def test_intern_reuses_identity_and_keeps_failed_new_collection_entry(self):
        self.compare({'operation': 'intern', 'count': 2, 'existing': [[0, 1], [1, 0]]})
        spec = {'operation': 'intern', 'count': 2, 'free_slots': 3}
        self.compare(spec)
        layout = wave.model.encode(spec, 0x3000000, 4)
        self.assertNotEqual(layout['before'][0x104:0x10c], layout['after'][0x104:0x10c])
        self.assertEqual(layout['after'][0x620:0x624], bytes(4))

    def test_full_singleton_phase_merges_range_and_epsilon_destinations(self):
        pending = [[0, 2, 32768, []], [1, 3, 0, [[32767, 32769]]], [2, 2, 32768, []]]
        edges = [[0, 1, 1, 0, []], [1, 2, 1, 0, []]]
        for free in [0, 1, 2, 3, 4, 5, 8, 12, None]:
            self.compare({'operation': 'transform', 'count': 3, 'pending': pending,
                          'edges': edges, 'free_slots': free})

    def test_memory_helpers_keep_exact_return_and_alignment_semantics(self):
        for different, expected in [(0, -255), (1, -65280), (2, -16711680), (3, -255)]:
            result = self.compare({'operation': 'compare', 'bytes': 4, 'different': different,
                                   'left_byte': 0, 'right_byte': 255})
            self.assertEqual(result['result'], expected)
        for operation in ['copy_bytes', 'copy_aligned']:
            self.compare({'operation': operation, 'bytes': 17, 'different': 4})

    def test_real_returning_negative_controls_and_complete_owned_coverage(self):
        packet = json.loads((wave.OUTPUT / 'packet.json').read_text())
        self.assertEqual(len(packet['negativeControls']), 20)
        self.assertTrue(all(row['returnedNormally'] and row['immutableMemoryPreserved']
                            for row in packet['negativeControls']))
        self.assertEqual(packet['behavior']['newOriginalInstructionsReached'], 583)
        self.assertTrue(packet['behavior']['allNewOriginalInstructionsReached'])
        self.assertEqual(packet['behavior']['executedCandidatePoolBytes'], 0)
        self.assertEqual(packet['dependencies']['retainedOriginalHelpers'], [])

    def test_target_and_true_host_layout_guards_compile(self):
        source = self.work / 'layout.c'
        source.write_text('#include "compile_graph.h"\n'
            '_Static_assert(sizeof(NfaState)==6*sizeof(void *),"nfa-size");\n'
            '_Static_assert(sizeof(CompileContext)==6*sizeof(void *),"context-size");\n'
            '_Static_assert(__builtin_offsetof(NfaState,identifier)==5*sizeof(void *),"index");\n'
            '_Static_assert(__builtin_offsetof(CompileContext,sources)==(sizeof(void *)==4?20:40),"table");\n')
        for target in ['arm-none-eabi', 'x86_64-pc-windows-msvc', 'aarch64-linux-android29']:
            wave.command([ROOT / 'tools/clang-21/clang.exe', '--target=' + target, '-std=c11',
                          '-I', ROOT / 'src/native/wave012', '-c', source, '-o', self.work / (target + '.o')],
                         self.work / (target + '.log'), self.receipts)


if __name__ == '__main__':
    unittest.main()
