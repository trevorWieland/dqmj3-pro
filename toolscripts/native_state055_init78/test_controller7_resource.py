import hashlib
import json
import unittest
from controller7_measure import ROOT,WORK


def read(name):return json.loads((WORK/name).read_text())


class ResourceConstructor7Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):cls.native=read('resource-replay-comparison-v1.json');cls.arm=read('resource-arm-replay-comparison-v1.json')

    def test_full_quoted_source_copy(self):
        files=self.native['sourceSnapshot']['files'];self.assertEqual(len(files),11)
        for row in files:
            self.assertEqual((ROOT/row['primary']['path']).read_bytes(),(ROOT/row['copied']['path']).read_bytes())
            self.assertEqual(hashlib.sha256((ROOT/row['primary']['path']).read_bytes()).hexdigest(),row['primary']['sha256'])

    def test_arm_return_and_terminal_outcomes(self):
        rows=self.arm['cases'];self.assertEqual(len(rows),12)
        self.assertTrue(all(row['wholeArenaAndOrderedAllocationReleaseEventsEqual']for row in rows))
        self.assertEqual(sum(row['primary']['returned']for row in rows),9)
        self.assertTrue(all(not row['primary']['returned']for row in rows if row['failAt']==3))

    def test_copied_arm_runtime_rows(self):
        self.assertTrue(all(row['primary']==row['copied']for row in self.arm['cases']))
        self.assertTrue(self.arm['artifactByteIdentical']);self.assertFalse(self.arm['sourceExecutionMapsOriginalImage'])

    def test_native_allocation_and_ownership_models(self):
        rows=self.native['primary'];self.assertEqual(len(rows),54)
        self.assertTrue(all(row['modelAccepted']and row['wholeArenaEqual']and row['orderedCallbacksEqual']for row in rows))
        self.assertEqual({row['skew']for row in rows},{0,16,224});self.assertTrue(all(row['base']>0xffffffff for row in rows))

    def test_native_copy_rows_and_artifacts(self):
        self.assertEqual(self.native['primary'],self.native['copied'])
        self.assertTrue(all(row['byteIdentical']for row in self.native['artifacts']))

    def test_intermediate_children_are_observed(self):
        row=next(row for row in self.native['primary']if row['target']=='real-Windows-x64'and row['seed']==165 and row['skew']==224 and row['failAt']==0)
        events=row['events'];self.assertEqual(len(events),4)
        self.assertEqual(events[2]['single'],events[1]['pointer']);self.assertEqual(events[3]['multiple'],events[2]['pointer'])
        self.assertTrue(all(row['pointer']==0 or row['pointer']>0xffffffff for row in events))

    def test_three_target_returning_order_controls(self):
        self.assertEqual(len(self.native['returningControls']),3);self.assertEqual(len(self.arm['returningControls']),3)
        same=next(row for row in self.native['returningControls']if row['name']=='swap-extra-index-release-order')
        self.assertTrue(all(row['wholeArenaEqual']and not row['orderedCallbacksEqual']and row['status']==-1 for row in same['rows']))
        arm=next(row for row in self.arm['returningControls']if row['name']=='swap-extra-index-release-order')
        self.assertTrue(arm['returned']and arm['sameFinalArena']and not arm['releaseOrderEqual'])

    def test_unexecuted_paths_are_explicit(self):
        report=read('resource-coverage-v1.json');self.assertEqual(len(report['functions']),7)
        self.assertTrue(any(row['unexecutedPcs']for row in report['functions']))
        self.assertTrue(all(not row['completePcQualificationClaimed']for row in report['functions']))

    def test_sdk_deallocation_and_device_limits(self):
        self.assertFalse(self.native['physicalAndroidSdkAllocatorOrWholeOwnerClaimed'])
        self.assertEqual(self.native['sourceCreditGranted'],0)
        reference=read('resource-index-queue-reference-v3.private.json');self.assertTrue(all(row['actualSdkDeallocationSemanticsUnqualified']for row in reference['cases']))


if __name__=='__main__':unittest.main()
