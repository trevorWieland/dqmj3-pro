import hashlib
import json
import unittest
from controller7_measure import ROOT,WORK


def read(name):return json.loads((WORK/name).read_text())


class ContextConstructor7Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):cls.report=read('context-replay-comparison-v1.json')

    def test_transitive_source_snapshot_has_real_frozen_owner(self):
        files=self.report['sourceSnapshot']['files'];self.assertEqual(len(files),8)
        self.assertTrue(any(row['primary']['path'].endswith('controller-v5/source/apply_types055.h')for row in files))
        for row in files:
            for pin in[row['primary'],row['copied']]:
                data=(ROOT/pin['path']).read_bytes();self.assertEqual(hashlib.sha256(data).hexdigest(),pin['sha256']);self.assertEqual(len(data),pin['bytes'])

    def test_all_targets_and_initial_storage_patterns(self):
        rows=self.report['primary'];self.assertEqual(len(rows),9)
        self.assertEqual({row['seed']for row in rows},{0,165,255})
        self.assertEqual({row['target']for row in rows},{'arm','real-windows-x64','a64'})
        self.assertTrue(all(row['modelAccepted']and row['fullArenaEqual']and row['correctGlobalPublication']for row in rows))

    def test_copied_raw_observations_and_artifacts(self):
        self.assertEqual(self.report['primary'],self.report['copied'])
        for row in self.report['artifacts']:self.assertEqual((ROOT/row['primary']['path']).read_bytes(),(ROOT/row['copied']['path']).read_bytes())

    def test_source_executes_without_original_image(self):
        self.assertTrue(all(row['sourceLoadedWithoutOriginalImage']and row['comparisonDataNeverSuppliedToAuthoredExecution']for row in self.report['primary']))

    def test_actual_native_addresses_exceed_u32(self):
        native=[row for row in self.report['primary']if row['target']!='arm']
        self.assertTrue(all(row['object']>0xffffffff and row['publishedPointer']==row['object']for row in native))

    def test_returning_controls_include_same_arena_wrong_publication(self):
        controls=self.report['returningControls'];self.assertEqual(len(controls),3)
        self.assertTrue(all(len(control['rows'])==3 and all(row['returned']and not row['modelAccepted']for row in control['rows'])for control in controls))
        same=next(row for row in controls if row['name']=='omit-global-publication')
        self.assertTrue(all(row['fullArenaEqual']and not row['correctGlobalPublication']for row in same['rows']))

    def test_original_coverage_separates_executed_and_invariant(self):
        report=read('context-coverage-v1.json');self.assertEqual(report['originalExecutedInstructionCount'],275)
        self.assertEqual(report['unexecutedInstructionCount'],9);self.assertEqual(report['canonicalInstructionBytes'],1136)
        self.assertEqual(sum(len(row['unexecutedInstructions'])for row in report['invariantGroups']),9)

    def test_original_services_and_bounded_claim(self):
        original=read('context-constructor-reference.private.json');self.assertEqual(len(original['cases']),3)
        self.assertTrue(all(row['returned']and row['status']==0 and row['noOriginalCallOrResultSubstitution']for row in original['cases']))
        self.assertEqual(self.report['sourceCreditGranted'],0);self.assertFalse(self.report['wholeOwnerOrControllerCompositionClaimed'])


if __name__=='__main__':unittest.main()
