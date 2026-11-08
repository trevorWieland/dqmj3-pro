import json
import unittest
from controller6_measure import ROOT,WORK,pin,PREDECESSOR,EXPECTED_PREDECESSOR
from controller6_verify import runtime


class DispatcherProof(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report=json.loads((WORK/'execution.json').read_text())
        cls.copy=json.loads((WORK/'replay-v1/execution.json').read_text())

    def changed(self,key,value):
        report=dict(self.report);report['cases']=list(report['cases'])
        first=dict(report['cases'][0]);report['cases'][0]=first
        first[key]=dict(first[key],**value)
        return report

    def test_complete_runtime(self):
        self.assertEqual(len(runtime(self.report)),3086)

    def test_exact_copied_runtime(self):
        self.assertEqual(runtime(self.report),runtime(self.copy))

    def test_reject_skipped_case(self):
        report=dict(self.report);report['cases']=report['cases'][:-1]
        with self.assertRaises(AssertionError):runtime(report)

    def test_reject_fabricated_target_equality(self):
        with self.assertRaises(AssertionError):runtime(self.changed('sourceArm',{'finalArenaSha256':'0'*64}))

    def test_reject_low_native_arena(self):
        with self.assertRaises(AssertionError):runtime(self.changed('actualWindows',{'arenaBase':0x2000000}))

    def test_reject_failed_abi_guard(self):
        with self.assertRaises(AssertionError):runtime(self.changed('highAarch64',{'savedIntegerVfpSpAndArgumentsPreserved':False}))

    def test_reject_mapped_original_source(self):
        with self.assertRaises(AssertionError):runtime(self.changed('sourceArm',{'sourceMapsOriginalExecutable':True}))

    def test_copied_source_exact_identity(self):
        report=json.loads((WORK/'replay-v1/copy-inputs.json').read_text())
        self.assertEqual(len(report['files']),21)
        self.assertLess(report['copiedBytes'],50000)
        for row in report['files']:
            self.assertEqual(pin(ROOT/row['original']['path']),row['original'])
            self.assertEqual(pin(ROOT/row['copied']['path']),row['copied'])
            self.assertEqual(row['original']['sha256'],row['copied']['sha256'])

    def test_frozen_predecessor(self):
        self.assertEqual(pin(PREDECESSOR)['sha256'],EXPECTED_PREDECESSOR)

    def test_returning_controls(self):
        for path in[WORK/'controls-primary-v2/returning-controls.json',WORK/'replay-v1/returning-controls.json']:
            report=json.loads(path.read_text());self.assertEqual(report['controls'],8);self.assertEqual(report['executions'],24)
            for row in report['cases']:
                self.assertTrue(row['allThreeNormallyReturnedAndRejected'])
                for name in['sourceArm','actualWindows','highAarch64']:self.assertFalse(row[name]['independentModelEqual'])

    def test_complete_pc_accounting(self):
        proof=json.loads((WORK/'source-replay-comparison.json').read_text())
        self.assertEqual(proof['finalObservedOriginalInstructions'],4569)
        self.assertEqual(proof['invariantAccountedInstructions'],5)
        self.assertTrue(proof['finalCoverageCompletelyAccounted'])

    def test_actual_wrapper(self):
        proof=json.loads((WORK/'actual-wrapper-frontier.json').read_text())
        self.assertEqual(proof['caseSets'],8)
        for row in proof['cases']:
            self.assertTrue(row['originalWrapper']['actualWrapperExecuted'])
            self.assertEqual(row['originalWrapper']['finalArenaSha256'],row['sourceArm']['finalArenaSha256'])


if __name__=='__main__':unittest.main()
