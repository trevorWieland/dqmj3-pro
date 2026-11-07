import hashlib
import json
from pathlib import Path
import struct
import unittest
import sys
ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/"toolscripts"))
from native_caller055_measure import EVIDENCE, ROOT, pin
WORK = EVIDENCE
from native_caller055_reference import initial, ARENA, CONTEXT, OUTPUT


def read(name):
    return json.loads((WORK/name).read_text(encoding='utf-8'))


class Caller055(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.selector = read('selector-execution.json')
        cls.rows = {row['input']['label']:row for row in cls.selector['cases']}
        cls.address = read('address-execution.json')

    def test_original_complete_instruction_coverage(self):
        reference = read('selector-reference.json')
        self.assertEqual((reference['callerInstructionPcs'],reference['callerVisitedPcs']),(986,986))
        self.assertEqual(reference['callerUnvisitedPcs'],[])
        address = read('address-reference.json')
        self.assertEqual((address['instructionPcs'],address['visitedInstructionPcs']),(109,109))
        self.assertEqual(address['unvisitedPcs'],[])

    def test_full_arena_four_path_and_independent_model(self):
        self.assertEqual((self.selector['caseSets'],self.selector['targetObservations']),(424,1696))
        for row in self.rows.values():
            self.assertTrue(row['independentModelPassed'])
            for name in ['authoredArm','actualWindows','highAarch64']:
                self.assertEqual(row[name]['dataArenaSha256'],row['original']['dataArenaSha256'])
                self.assertEqual(row[name]['returned'],row['original']['returned'])
                self.assertEqual(row[name]['cursorOffset'],row['original']['finalPair'][0]-ARENA)

    def test_soft_limit_append_keeps_measured_two_word_write(self):
        row = self.rows['capacity-0-13']
        for name in ['authoredArm','actualWindows','highAarch64']:
            self.assertEqual(row[name]['cursorOffset'],row[name]['limitOffset']+4)
        limit = row['original']['finalPair'][1]
        self.assertTrue(any(event[1]==limit for event in row['original']['orderedWrites']))

    def test_invalid_format_preserves_real_partial_updates(self):
        row = self.rows['format-0-0-0']
        before,cursor,limit = initial(row['input'])
        self.assertEqual(row['original']['returned'],0x502)
        self.assertEqual(row['original']['finalPair'],[cursor,limit])
        self.assertNotEqual(row['original']['dataArenaSha256'],hashlib.sha256(before).hexdigest())
        self.assertTrue(any(CONTEXT+0x770<=event[1]<CONTEXT+0x7f0 for event in row['original']['orderedWrites']))

    def test_final_unit_consumes_nonzero_physical_padding(self):
        row = self.rows['initial-2-1-20000008']
        before,cursor,limit = initial(row['input'])
        padding = struct.unpack_from('<I',before,CONTEXT-ARENA+0x770+31*4)[0]
        self.assertNotEqual(padding,0)
        writes = [event[3] for event in row['original']['orderedWrites'] if event[1]==OUTPUT+7*4]
        self.assertEqual(writes,[padding])

    def test_real_native_pointers_are_wide(self):
        for row in self.rows.values():
            self.assertGreater(row['actualWindows']['actualArenaAddress'],0xffffffff)
            self.assertGreater(row['highAarch64']['actualArenaAddress'],0xffffffff)
        for row in self.address['cases']:
            if row['input']['objectAddress']:
                self.assertGreater(row['actualWindows']['regionPointer'],0xffffffff)
                self.assertGreater(row['highAarch64']['regionPointer'],0xffffffff)
                self.assertFalse(row['actualWindows']['targetTokenDerivedFromNativePointer'])

    def test_alias_order_control_returns_same_pair_but_is_rejected(self):
        controls = read('selector-controls.json')
        row = next(row for row in controls['cases'] if row['label']=='tail-prefetched-before-aliased-writer')
        for observation in row['observations']:
            self.assertTrue(observation['returnedNormally']and observation['returnValueSame']and observation['finalPairSame'])
            self.assertFalse(observation['fullInitializedArenaSame'])
            self.assertTrue(observation['rejectedByIndependentModel'])

    def test_all_returning_controls(self):
        address,selector = read('address-controls.json'),read('selector-controls.json')
        self.assertEqual((address['normallyReturningControls'],address['platformExecutions']),(4,12))
        self.assertEqual((selector['normallyReturningControls'],selector['platformExecutions']),(6,18))
        self.assertTrue(all(row['allReturnedNormally']and row['allRejectedByIndependentModel'] for row in address['cases']))
        self.assertTrue(all(observation['returnedNormally']and observation['rejectedByIndependentModel'] for row in selector['cases'] for observation in row['observations']))

    def test_small_source_snapshot_reproduces(self):
        report = read('source-snapshot.json')
        self.assertTrue(report['completeAllCaseObservationsIdentical'])
        self.assertEqual(len(report['sourceSnapshotFiles']),6)
        self.assertEqual(len(report['artifacts']),6)
        self.assertLess(report['copiedSourceBytes'],20000)
        self.assertTrue(all(row['byteIdentical'] for row in report['artifacts']))
        self.assertFalse(report['repositoryToolOrOriginalImageCopied'])

    def test_effective_source_pins(self):
        for row in self.selector['sourceFiles']:
            self.assertEqual(pin(ROOT/row['path']),row)
        for row in self.address['inputFiles']:
            self.assertEqual(pin(ROOT/row['path']),row)

    def test_float_special_values_and_preserved_status_limits(self):
        self.assertFalse(self.selector['floatingStatusBitsEqualClaimed'])
        for unit in range(3):
            self.assertIn(f'color-boundary-{unit}-1',self.rows)
            self.assertIn(f'color-boundary-{unit}-2',self.rows)
            self.assertIn(f'bias-rounding-{unit}-b7000000',self.rows)


if __name__ == '__main__':
    unittest.main()
