import json
from pathlib import Path
import unittest

import sys
ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT/'toolscripts'))
from native_state055_measure import EVIDENCE
WORK = EVIDENCE


class Leaf055(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report = json.loads((WORK/'execution.json').read_text())
        cls.rows = {row['input']['label']: row for row in cls.report['cases']}

    def test_four_path_full_data_arenas(self):
        self.assertEqual((self.report['caseSets'], self.report['targetObservations']), (83, 332))
        for row in self.rows.values():
            for key in ['authoredArm', 'actualWindows', 'highAarch64']:
                self.assertTrue(row[key]['independentModelPassed'])
                self.assertEqual(row[key]['dataArenaSha256'], row['original']['fullDataArenaSha256'])

    def test_equal_bound_rejects_and_saturates(self):
        row = self.rows['count-6-capacity-8']
        for key in ['authoredArm', 'actualWindows', 'highAarch64']:
            self.assertEqual(row[key]['cursorOffset'], row[key]['limitOffset'])
        self.assertEqual(row['original']['originalWriteCount'], 1)

    def test_even_block_copies_physical_padding(self):
        row = self.rows['count-2-capacity-5']
        addresses = row['original']['physicalReadAddresses']
        self.assertIn(row['input']['source']+8, addresses)
        self.assertEqual(row['authoredArm']['cursorOffset'], 0x4010)

    def test_full_block_reservation_has_distinct_budget(self):
        rejected = self.rows['count-128-capacity-131']
        accepted = self.rows['count-128-capacity-133']
        self.assertEqual(rejected['original']['originalWriteCount'], 1)
        self.assertEqual(accepted['authoredArm']['cursorOffset'], 0x4000+130*4)

    def test_high_pointers_and_actual_native_pair(self):
        for row in self.rows.values():
            self.assertGreater(row['actualWindows']['arenaAddress'], 0xffffffff)
            self.assertGreater(row['highAarch64']['arenaAddress'], 0xffffffff)
            self.assertEqual(row['actualWindows']['actualDeclaredPairBytes'], 16)

    def test_null_pair_rejects_without_data_access(self):
        for count in range(3):
            row = self.rows[f'null-pair-count-{count}']
            self.assertEqual(row['original']['finalPair'], [0, 0])
            self.assertIsNone(row['actualWindows']['cursorOffset'])

    def test_returning_controls(self):
        controls = json.loads((WORK/'controls.json').read_text())
        self.assertEqual((controls['returningControls'], controls['platformExecutions']), (5, 15))
        for row in controls['rows']:
            self.assertTrue(row['allActuallyReturned'] and row['rejectedByIndependentStateModel'])

    def test_finite_missing_pc_proof(self):
        proof = json.loads((WORK/'invariant.json').read_text())
        self.assertEqual(len(proof['mathematicalInputs']), 129)
        self.assertEqual(len(proof['unvisitedInstructionAddresses']), 7)
        self.assertTrue(all(row['blsTaken'] for row in proof['mathematicalInputs']))

    def test_deterministic_three_artifact_rebuild(self):
        proof = json.loads((WORK/'rebuild.json').read_text())
        self.assertEqual(len(proof['artifacts']), 3)
        self.assertTrue(all(row['byteIdentical'] for row in proof['artifacts']))


if __name__ == '__main__':
    unittest.main()
