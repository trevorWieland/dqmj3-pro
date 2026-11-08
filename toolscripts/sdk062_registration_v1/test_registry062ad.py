import tempfile
from pathlib import Path
import unittest
from unittest.mock import patch

import registry_build062ad as builder
import registry_proof062ad as proof

TEST_OUTPUT = None


class RegistryQualification(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.output = TEST_OUTPUT or Path(tempfile.mkdtemp(prefix='fresh-registry-tests-', dir=builder.W))
        cls.output.mkdir(parents=True, exist_ok=True)
        cls.folder = builder.build(cls.output / 'build')

    def run_program(self, target, rows, flag=1, disposer=False):
        with patch('registry_proof062ad.steps', lambda seed: rows):
            return proof.execute(target, self.folder, 635, flag, disposer, False)

    def test_layouts_from_fresh_compilation(self):
        for target in ['arm', 'windows', 'a64']:
            runtime, layout = proof.source_runtime(target, self.folder)
            self.assertEqual(layout[7], runtime.p * 2)
            self.assertEqual(layout[1], runtime.p * 5)

    def test_real_windows_high_pointer_borrowers(self):
        row = self.run_program('windows', [('register',0,7,0,1), ('find',127)])
        self.assertGreater(int(row['arenaAddress'],16), 0xffffffff)
        self.assertEqual(row['observations'][-1]['liveHeapAllocations'], 0)

    def test_high_aarch64_pointer_borrowers(self):
        row = self.run_program('a64', [('register',0,7,0,1), ('find',127)])
        self.assertGreater(int(row['arenaAddress'],16), 0xffffffff)

    def test_all_nonzero_lookup_bytes(self):
        counts = []
        for flag in [0,1,128,255]:
            row = self.run_program('windows', [('register',0,7,3,1), ('find',115)], flag)
            counts.append(row['orderedMutexCallbackCount'])
        self.assertEqual(counts[1:], [counts[1]] * 3)
        self.assertLess(counts[0], counts[1])

    def test_raw_unsigned_slot_bits(self):
        self.run_program('windows', [('register',0,7,256,1),
            ('register',1,7,0xffffffff,1), ('find',112), ('find',255), ('remove',7,256)])

    def test_auto_full_group_and_duplicate(self):
        rows = [('register',n,3,0,1) for n in range(16)]
        rows += [('register',16,3,7,0), ('remove',3,7), ('register',16,3,0,1)]
        result = self.run_program('windows', rows)
        self.assertEqual(result['observations'][-1]['registryCount'], 0)

    def test_growth_and_middle_erase_padding(self):
        rows = [('register',n,0,128-n,1) for n in range(70)]
        rows += [('remove',0,n) for n in [80,81,82,83,84]]
        result = self.run_program('windows', rows)
        self.assertGreater(max(x['capacity'] for x in result['observations']), 32)

    def test_captured_disposer_and_nonempty_destruction(self):
        result = self.run_program('arm', [('register',0,7,3,1)], disposer=True)
        self.assertTrue(result['capturedDisposer'])
        self.assertEqual(result['observations'][-1]['liveHeapAllocations'], 0)

    def test_source_only_never_constructs_original(self):
        with patch.object(proof, 'Original', side_effect=AssertionError('original forbidden')):
            row = self.run_program('arm', [('register',0,7,3,1), ('find',115)])
        self.assertEqual(row['originalPcs'], [])


if __name__ == '__main__':
    unittest.main()
