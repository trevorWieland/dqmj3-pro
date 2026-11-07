import copy
import json
import unittest
from controller5_measure import WORK
from controller5_verify import verify_execution,verify_controls,compare
from controller5_padding_audit import decode


class Controller055Contracts(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.primary=json.loads((WORK/'execution.json').read_text())
        cls.copied=json.loads((WORK/'replay-v1/execution.json').read_text())
        cls.controls=json.loads((WORK/'returning-controls.json').read_text())

    def test_primary_full_execution(self):self.assertTrue(verify_execution(self.primary))
    def test_copied_full_execution(self):self.assertTrue(verify_execution(self.copied))
    def test_exact_runtime_and_artifacts(self):self.assertTrue(compare(self.primary,self.copied))
    def test_returning_controls(self):self.assertTrue(verify_controls(self.controls))
    def test_reject_missing_case(self):
        bad=copy.deepcopy(self.primary);bad['cases'].pop()
        with self.assertRaises(AssertionError):verify_execution(bad)
    def test_reject_false_source_only(self):
        bad=copy.deepcopy(self.primary);bad['cases'][0]['authoredArm']['sourceMapsOriginalExecutable']=True
        with self.assertRaises(AssertionError):verify_execution(bad)
    def test_reject_original_source_difference(self):
        bad=copy.deepcopy(self.primary);bad['cases'][0]['authoredArm']['finalPair'][0]+=4
        with self.assertRaises(AssertionError):verify_execution(bad)
    def test_reject_low_native_pointer_claim(self):
        bad=copy.deepcopy(self.primary);bad['cases'][0]['actualWindows']['allUsedNativePointersFullWidth']=False
        with self.assertRaises(AssertionError):verify_execution(bad)
    def test_reject_observer_difference(self):
        bad=copy.deepcopy(self.primary);bad['cases'][0]['actualWindows']['independentModelDifferences']=['allocation-observer']
        with self.assertRaises(AssertionError):verify_execution(bad)
    def test_reject_unaccounted_instruction(self):
        bad=copy.deepcopy(self.primary);bad['provedUnreachableInstructions']=16
        with self.assertRaises(AssertionError):verify_execution(bad)
    def test_reject_nonreturning_control(self):
        bad=copy.deepcopy(self.controls);bad['controls'][0]['allThreeSourceExecutionsReturned']=False
        with self.assertRaises(AssertionError):verify_controls(bad)
    def test_decoder_preserves_parameter_difference(self):
        a,pads=decode([1,0x100000,2,0x12345678]);b,_=decode([1,0x100000,3,0x12345678])
        self.assertNotEqual(a,b);self.assertEqual(pads,[3])
    def test_decoder_exposes_only_alignment_padding(self):
        a,pads=decode([1,0x100000,2,0x12345678]);b,pads2=decode([1,0x100000,2,0xa5a5a5a5])
        self.assertEqual(a,b);self.assertEqual(pads,pads2)
    def test_decoder_rejects_truncation(self):
        with self.assertRaises(AssertionError):decode([1,0x100000,2])
    def test_raw_padding_audit_is_not_whole_arena_equality(self):
        audit=json.loads((WORK/'caller-padding-audit.json').read_text())
        self.assertFalse(audit['rawWholeArenaEqualityClaimedForTheseCases'])
        self.assertEqual(len(audit['cases']),6)
        for row in audit['cases']:
            self.assertTrue(row['differences']);self.assertTrue(row['completePacketParametersEqual'])
            self.assertFalse(row['executedMemoryRegistersCodeAndLiteralsChanged'])


if __name__=='__main__':unittest.main()
