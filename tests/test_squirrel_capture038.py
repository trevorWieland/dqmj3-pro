import hashlib
import json
import sys
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
from squirrel_capture038_model import parse,compare_native
from squirrel_coercion026_android import inspect


class Capture038(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report=json.loads((ROOT/'work/squirrel-capture038/primary-qualified/execution.json').read_text())
        cls.rows=cls.report['observations']

    def test_actual_four_target_cohort(self):
        self.assertEqual(self.report['sets'],108)
        self.assertEqual(self.report['targetObservations'],432)
        self.assertEqual({(row['variant'],row['cleanup'])for row in self.rows},
            {(variant,cleanup)for variant in range(54)for cleanup in(0,1)})

    def test_parent_dies_before_real_child_executes(self):
        for row in self.rows:
            state=parse(row['armOriginal'],0x2000000)
            self.assertEqual(state['observations'][1][1],0)
            self.assertEqual(state['observations'][1][5],1)
            self.assertEqual(row['armOriginal'],row['armSource'])

    def test_returned_default_and_capture_survive_child(self):
        for row in self.rows:
            if row['variant']&1 and row['cleanup']:
                states=parse(row['armOriginal'],0x2000000)['observations']
                self.assertEqual(states[3][2],0)
                self.assertEqual(states[3][15:17],[2,4])
                self.assertEqual(states[3][17],states[1][8])
                self.assertEqual(states[3][20],0x08000010)

    def test_real_table_weak_unwrap_is_distinct_from_native_meta(self):
        by_id={(row['variant'],row['cleanup']):row for row in self.rows}
        table=parse(by_id[20,0]['armOriginal'],0x2000000)['observations'][1]
        meta=parse(by_id[44,0]['armOriginal'],0x2000000)['observations'][1]
        self.assertEqual(table[8],0x08000010)
        self.assertEqual(meta[8],0x08010000)

    def test_meta_callback_and_growth_observe_real_construction(self):
        for row in self.rows:
            state=parse(row['armOriginal'],0x2000000)
            if row['variant']>=48:self.assertEqual(state['observations'][1][6],3)
            self.assertFalse(row['originalDeadFrameReadSites'])
            self.assertFalse(row['sourceDeadFrameReadSites'])

    def test_full_target_memory_and_raw_alias_receipts(self):
        for row in self.rows:
            memory=row['armMemory'];self.assertTrue(memory['definedMemoryEqual'])
            self.assertEqual(len(memory['preAliasOriginalArenaSha256']),64)
            self.assertEqual(len(memory['preAliasSourceArenaSha256']),64)
            for alias in memory['sourceCallbackDataAliases']:
                self.assertIn(alias['arenaOffset'],[0x28000,0x28004,0x28008,0x28014,0x2483c,0x2443c])
        self.assertFalse(self.report['executedHeapObjectsRegistersCodeLiteralsAndTextAlteredByAliasing'])

    def test_native_high_address_pointers_and_owned_extents(self):
        for row in self.rows:
            self.assertTrue(compare_native(row['variant'],row['armOriginal'],row['windows'],0x120000000)['typedPhysicalPointersVerified'])
            self.assertTrue(compare_native(row['variant'],row['armOriginal'],row['androidObjectModel'],0x110000000)['typedPhysicalPointersVerified'])

    def test_model_rejects_truncated_native_arena(self):
        row=self.rows[0];bad=list(row['windows']);bad[12]=0
        with self.assertRaisesRegex(ValueError,'truncated'):parse(bad,0x120000000)

    def test_android_linker_contract_is_separate_from_device_proof(self):
        result=inspect(ROOT/'work/squirrel-capture038/primary-qualified/android/libcoercion026.so')
        self.assertTrue(result)
        self.assertTrue(self.report['allocatorAssertFailureGcFullExecuteWholeVmGameDeviceOrSourceCreditClaimed']is False)

    def test_unobserved_pcs_are_explicit_and_not_self_admitted(self):
        provider=json.loads((ROOT/'evidence/lanes/squirrel-capture038/providers.json').read_text())
        declared={pc for group in provider['uncoveredConditions']for pc in group['pcs']}
        coverage=self.report['coverage'][0]
        self.assertEqual(set(coverage['missingInstructionAddresses']),declared)
        self.assertEqual(coverage['totalArmInstructions'],276)
        self.assertEqual(coverage['coveredArmInstructions'],248)
        self.assertEqual(provider['sourceInventoryOrDuplicateCreditGranted'],0)

    def test_returning_controls_rejected_for_actual_semantics_or_reads(self):
        controls=json.loads((ROOT/'work/squirrel-capture038/controls-sealed/controls.json').read_text())
        self.assertEqual(controls['count'],7)
        self.assertTrue(controls['allNormallyReturned'])
        self.assertTrue(controls['allRejected'])
        self.assertEqual(controls['nativeTargetNormalReturns'],14)
        observer=next(row for row in controls['controls']if row['name']=='inactive-native-frame-read-with-same-result')
        self.assertTrue(observer['sameFinalObservations'])
        self.assertTrue(observer['forbiddenNativeFrameReads'])

    def test_all_frozen034_pins_unchanged(self):
        path=ROOT/'evidence/lanes/squirrel-class034/ready.json'
        self.assertEqual(hashlib.sha256(path.read_bytes()).hexdigest(),'6c8eeefc26a8c47c79ad80ca7a98d48c0c0256b02c6da34ad05cfcee3fd06cc9')
        record=json.loads(path.read_text());self.assertEqual(len(record['files']),50)
        for row in record['files']:
            data=(ROOT/row['path']).read_bytes();self.assertEqual(len(data),row['bytes'])
            self.assertEqual(hashlib.sha256(data).hexdigest(),row['sha256'])


if __name__=='__main__':unittest.main()
