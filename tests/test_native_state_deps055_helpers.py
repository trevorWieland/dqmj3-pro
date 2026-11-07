import json
from pathlib import Path
import unittest
from native_state_deps055_helpers_measure import ROOT,WORK,pin
from native_state_deps055_helpers_reference import ARENA


def read(name):
    return json.loads((WORK/name).read_text(encoding='utf-8'))


class Helpers055(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report=read('execution.json')
        cls.rows={row['input']['label']:row for row in cls.report['cases']}

    def test_four_backends_and_models(self):
        self.assertEqual((self.report['caseSets'],self.report['targetObservations']),(152,608))
        for row in self.rows.values():
            for name in ['authoredArm','actualWindows','highAarch64']:
                self.assertTrue(row[name]['independentModelPassed'])
                self.assertTrue(row[name]['actualFunctionReturned'])

    def test_reserve_complete_coverage_and_holes(self):
        coverage=read('reference.json')['coverage']
        self.assertEqual((coverage['reserve']['instructions'],coverage['reserve']['visited']),(23,23))
        row=self.rows['reserve-4-7']
        self.assertEqual(row['authoredArm']['pairOffsets'],[0x4018,0x401c])
        control=next(row for row in read('controls.json')['cases']if row['label']=='reserved-holes-zeroed')
        for name in ['authoredArm','actualWindows','highAarch64']:
            self.assertTrue(control[name]['actualReturnObservationExpected'])
            self.assertTrue(control[name]['actualPairExpected'])
            self.assertFalse(control[name]['actualWholePlatformArenaExpected'])

    def test_odd_reservation_uses_count_not_padded_extent(self):
        row=self.rows['reserve-3-5']
        self.assertEqual(row['original']['finalPair'],[ARENA+0x4014,ARENA+0x4014])
        self.assertEqual(row['original']['returnKind'],'word')
        self.assertEqual(row['original']['returned'],0xfedcba98)

    def test_native_pointer_returns_keep_width(self):
        for label in ['reserve-4-7','count-2-capacity-5','count-128-capacity-131']:
            row=self.rows[label]
            self.assertGreater(row['actualWindows']['returned'],0xffffffff)
        self.assertEqual(self.rows['count-2-capacity-5']['original']['returnKind'],'pair-pointer')
        self.assertEqual(self.rows['count-128-capacity-131']['original']['returnKind'],'limit-pointer')

    def test_fixed_header_invariant_closes_unvisited_copy(self):
        invariant=read('invariant.json')
        self.assertEqual(len(invariant['rows']),129)
        self.assertEqual(len(invariant['unvisitedInstructionPcs']),24)
        self.assertTrue(all(row['blsTaken']and not row['carry']and not row['zero']for row in invariant['rows']))
        self.assertFalse(invariant['externalMemcpySourceClaimed'])

    def test_reader_full_coverage_and_native_topology(self):
        coverage=read('reference.json')['coverage']['lookup']
        self.assertEqual((coverage['instructions'],coverage['visited']),(11,11))
        for row in self.rows.values():
            if row['input']['kind']=='lookup':
                self.assertFalse(row['actualWindows']['targetAndNativeLookupArenaBytesClaimedEqual'])
                self.assertGreater(row['actualWindows']['actualArenaAddress'],0xffffffff)
                self.assertEqual(row['actualWindows']['declaredPointerBytes'],8)

    def test_last_valid_and_invalid_table_indices(self):
        self.assertEqual(self.rows['lookup-31-deadbeef']['actualWindows']['returned'],0xdeadbeef)
        for index in [32,33,0xffffffff]:
            self.assertEqual(self.rows[f'lookup-{index}-deadbeef']['actualWindows']['returned'],0)

    def test_genuinely_returning_controls(self):
        report=read('controls.json')
        self.assertEqual((report['normallyReturningControls'],report['platformExecutions']),(5,15))
        self.assertTrue(all(row['allReturnedNormally']and row['allRejected']for row in report['cases']))

    def test_tiny_source_snapshot(self):
        report=read('source-snapshot.json')
        self.assertEqual(len(report['copiedSourceFiles']),4)
        self.assertLess(report['copiedSourceBytes'],10000)
        self.assertEqual(len(report['artifacts']),3)
        self.assertTrue(report['allSemanticCaseObservationsIdentical'])
        self.assertTrue(report['comparisonViewOnly'])
        self.assertFalse(report['executedObjectRegisterCodeLiteralModified'])
        for alias in report['postExecutionComparisonAliases']:
            self.assertEqual(alias['primaryRawReturn'],alias['primaryDeclaredPair'])
            self.assertEqual(alias['snapshotRawReturn'],alias['snapshotDeclaredPair'])
        self.assertTrue(all(row['byteIdentical']for row in report['artifacts']))
        self.assertFalse(report['repositoryToolOriginalImageCopied'])

    def test_source_input_identity(self):
        for row in self.report['sourceInputs']:
            self.assertEqual(pin(ROOT/row['path']),row)


if __name__=='__main__':
    unittest.main()
