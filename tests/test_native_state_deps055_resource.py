import json
from pathlib import Path
import unittest
from native_state_deps055_resource_measure import ROOT,WORK,pin


def read(name):
    return json.loads((WORK/name).read_text(encoding='utf-8'))


class Resource055(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report=read('execution.json')
        cls.rows={row['input']['label']:row for row in cls.report['cases']}

    def test_complete_original_provider_and_actual_callers(self):
        report=read('reference.json')
        self.assertEqual(report['completeGetterPcs'],11)
        pcs=set().union(*(set(row['actualWholeGetterPcs'])for row in report['cases']))
        self.assertEqual(pcs,set(range(0x7292d0,0x7292fc,4)))
        consumer=set().union(*(set(row['referenceOnlyCallerConsumerPcs'])for row in report['cases']))
        self.assertTrue({0x6fe08c,0x6fe0a4,0x6fe0ac,0x6fe440,0x6fe48c,0x6fe718}<=consumer)

    def test_four_platforms_actual_pointers_and_readonly_heaps(self):
        self.assertEqual((self.report['caseSets'],self.report['targetObservations']),(51,204))
        for row in self.rows.values():
            for name in ['authoredArm','actualWindows','highAarch64']:
                value=row[name]
                self.assertTrue(value['actualFunctionReturned']and value['actualResourcePointerMatched'])
                self.assertTrue(value['fullPlatformInputArenaUnchanged'])

    def test_real_wide_resource_returns(self):
        row=self.rows['resource-31-1-1-7']
        for name in ['actualWindows','highAarch64']:
            self.assertGreater(row[name]['returnedResourcePointer'],0xffffffff)
            self.assertEqual(row[name]['returnedResourcePointer'],row[name]['expectedActualResourcePointer'])

    def test_compiled_consumers_observe_real_resource_fields(self):
        row=self.rows['resource-15-1-1-ffffffff']
        for name in ['authoredArm','actualWindows','highAarch64']:
            self.assertEqual(row[name]['consumers'],dict(word=0x12345678+15*0x10101,byte=0x40+15*3,flags=0xffffffff))

    def test_actual_native_field_widths(self):
        row=self.rows['resource-0-1-1-0']
        self.assertEqual(row['authoredArm']['compiledLayout'],[0x8a8,0x828,4,0x820,0x808,0x818,0x81c,4])
        self.assertEqual(row['actualWindows']['compiledLayout'],[0x928,0x828,8,0x830,0x808,0x820,0x828,8])
        self.assertEqual(row['actualWindows']['compiledLayout'],row['highAarch64']['compiledLayout'])

    def test_missing_entries_resources_and_out_of_range(self):
        for label in ['resource-0-0-0-7','resource-1-1-0-7','invalid-32','invalid-4294967295']:
            self.assertEqual(self.rows[label]['actualWindows']['returnedResourcePointer'],0)

    def test_returning_controls_and_native_truncation(self):
        report=read('controls.json')
        self.assertEqual((report['normallyReturningControls'],report['platformExecutions'],report['rejectedObservations']),(3,9,8))
        for row in report['cases']:
            self.assertTrue(row['allReturnedNormally'])
            self.assertFalse(row['consumersOfWrongPointersInvoked'])
        trunc=next(row for row in report['cases']if row['label']=='native-resource-pointer-truncated')
        self.assertTrue(trunc['authoredArm']['actualResourcePointerMatched'])
        self.assertFalse(trunc['actualWindows']['actualResourcePointerMatched'])
        self.assertFalse(trunc['highAarch64']['actualResourcePointerMatched'])

    def test_snapshot_small_and_exact(self):
        report=read('source-snapshot.json')
        self.assertTrue(report['allCaseObservationsIdentical'])
        self.assertEqual(len(report['copiedSourceFiles']),4)
        self.assertLess(report['copiedSourceBytes'],10000)
        self.assertEqual(len(report['artifacts']),3)
        self.assertTrue(all(row['byteIdentical']for row in report['artifacts']))
        self.assertFalse(report['repositoryToolOriginalImageCopied'])

    def test_closed_source_inputs_and_explicit_owner_boundary(self):
        for row in self.report['sourceInputs']:
            self.assertEqual(pin(ROOT/row['path']),row)
        self.assertTrue(self.report['productionResourceTypeOpaque'])
        self.assertTrue(self.report['fixtureOnlyResourceCompletion'])
        self.assertFalse(self.report['completeNativeResourceOwnerLayoutClaimed'])
        self.assertEqual(self.report['referenceFragmentsCanonicalCredit'],0)


if __name__=='__main__':
    unittest.main()
