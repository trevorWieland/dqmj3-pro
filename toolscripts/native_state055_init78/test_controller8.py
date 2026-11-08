import hashlib
import json
import unittest
from controller8_measure import ROOT,WORK,PREDECESSOR,EXPECTED
from controller8_catalogue_model_v2 import catalogue,registers


def read(name):return json.loads((WORK/name).read_text())


class FullCacheConstructor8Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):cls.report=read('source-replay-comparison-v2.json');cls.data=read('descriptor-data-comparison-v2.json')

    def test_frozen_core7_unchanged(self):self.assertEqual(hashlib.sha256(PREDECESSOR.read_bytes()).hexdigest(),EXPECTED)

    def test_all_original_constructor_pcs_observed(self):
        claim=read('claim-v1.json');self.assertEqual(claim['instructionBytes'],2008);self.assertEqual(claim['observedInstructions'],502);self.assertEqual(claim['unexecutedPcs'],[])

    def test_complete_quoted_source_copy(self):
        rows=self.report['sourceSnapshot']['files'];self.assertEqual(len(rows),11)
        self.assertTrue(any(row['primary']['path'].endswith('source-v2/registers8.c')for row in rows))
        for row in rows:
            a,b=(ROOT/row['primary']['path']).read_bytes(),(ROOT/row['copied']['path']).read_bytes();self.assertEqual(a,b);self.assertEqual(hashlib.sha256(a).hexdigest(),row['primary']['sha256'])

    def test_every_target_seed_and_alignment_case(self):
        rows=self.report['primary'];self.assertEqual(len(rows),27)
        self.assertEqual({row['seed']for row in rows},{0,165,255});self.assertEqual({row['skew']for row in rows},{0,16,224})
        self.assertTrue(all(row['modelAccepted']and not row['mismatchOffsets']for row in rows))

    def test_all_three_artifacts_identical(self):
        for row in self.report['artifacts']:self.assertEqual((ROOT/row['primary']['path']).read_bytes(),(ROOT/row['copied']['path']).read_bytes())

    def test_real_name_pointer_width_and_stable_slot_topology(self):
        self.assertEqual(len(catalogue()),297)
        for row in self.report['primary']:
            pointers=row['actualNamePointerWords'];self.assertEqual(len(pointers),297);self.assertTrue(all(b-a==80 for a,b in zip(pointers,pointers[1:])))
            if row['target']=='real-Windows-x64':self.assertTrue(all(value>0xffffffff for value in pointers))
        high=read('high-a64-comparison-v2.json');self.assertEqual(len(high['cases']),9)
        self.assertTrue(all(row['primary']['allCodeObjectAndNameAddressesExceedU32']and row['primary']==row['copied']for row in high['cases']))

    def test_raw_data_and_post_execution_views_preserved(self):
        self.assertFalse(self.data['normalizationAffectedExecutedState']);self.assertFalse(self.data['originalSourcePointerTruncation'])
        self.assertEqual(len(self.data['sourceRows']),54)
        target=[row for row in self.data['sourceRows']if row['target']=='arm'];self.assertTrue(all(row['allTargetByteMismatchesAreTypedNamePointerFields']for row in target))
        self.assertTrue(all(len(row['pointerWordMismatchIndices'])==297 for row in target))

    def test_windows_aliases_are_a_single_loader_delta(self):
        aliases=self.report['postExecutionAddressComparison']['windowsAliases'];self.assertEqual(len(aliases),9)
        self.assertTrue(all(row['typedPointerFields']==297 and row['rawArenaSha256Equal']for row in aliases))
        self.assertTrue(self.report['postExecutionAddressComparison']['comparisonBuildsNewPythonViewsOnly'])

    def test_returning_controls_reject_metadata_with_same_arena(self):
        controls=self.report['returningControls'];self.assertEqual(len(controls),4)
        self.assertTrue(all(len(row['rows'])==3 and all(not item['modelAccepted']for item in row['rows'])for row in controls))
        same=[row for row in controls if row['sameFinalArena']];self.assertEqual(len(same),3)
        self.assertTrue(all(not item['mismatchOffsets']for row in same for item in row['rows']))

    def test_register_index_permutation_and_preserved_rejection(self):
        values=registers();self.assertEqual(values[80:85],[0xe0,0xe1,0xe4,0xe5,0xfd])
        rejected=read('attempts/rejected-register-order-v1.json');self.assertEqual(rejected['status'],'rejected-before-ready')
        self.assertTrue(rejected['allOriginalV1SourceToolsAndReportsRetained']);self.assertFalse(rejected['frozen7Changed'])
        self.assertEqual(len(rejected['physicalToLogicalRows']),5)

    def test_source_and_owner_claims_remain_bounded(self):
        self.assertEqual(self.report['sourceCreditGranted'],0);self.assertFalse(self.report['completeOwnerShaderHardwareOrGameClaimed'])
        self.assertTrue(all(row['sourceLoadedWithoutOriginalImage']for row in self.report['primary']))


if __name__=='__main__':unittest.main()
