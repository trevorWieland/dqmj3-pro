import hashlib
import json
from pathlib import Path
import sys
import unittest

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'toolscripts'))
from squirrel_class_call030_build import ROOT,WORK,SOURCE
from squirrel_class_call030_model import parse,compare_native
from squirrel_coercion026_android import inspect


class ClassCall030(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=WORK/'primary-qualified'
        path=cls.folder/'execution.json'
        if not path.exists():raise unittest.SkipTest('030 private execution receipt unavailable')
        cls.report=json.loads(path.read_text())
        cls.rows={(row['variant'],row['cleanup']):row for row in cls.report['observations']}
        control=WORK/'controls-final/controls.json'
        if not control.exists():raise unittest.SkipTest('030 returning controls unavailable')
        cls.controls=json.loads(control.read_text())

    def test_measured_complete_canonical_family(self):
        claim=json.loads((ROOT/'evidence/lanes/squirrel-class-call030/claim.json').read_text())
        self.assertEqual(claim['plannedCanonicalInstructionBytes'],4624)
        self.assertEqual(len(claim['functions']),14)
        self.assertTrue(all(row['canonicalExistingEntry'] for row in claim['functions']))
        self.assertEqual(claim['newSourceOrInventoryAdmissionGranted'],0)
        self.assertEqual(claim['instanceTargetFields']['values'],44)
        tail=next(row for row in claim['functions'] if row['entry']==0x1cdcc4)
        self.assertEqual([(r['address'],r['bytes']) for r in tail['instructions']],[(0x1cdcc4,256),(0x233bd8,44)])

    def test_complete_four_target_cohort(self):
        self.assertEqual(self.report['sets'],54)
        self.assertEqual(self.report['targetObservations'],216)
        self.assertEqual(set(self.rows),{(v,c) for v in range(27) for c in (0,1)})
        for (variant,cleanup),row in self.rows.items():
            self.assertEqual(row['armOriginal'],row['armSource'])
            parse(row['armOriginal'])
            compare_native(variant,row['armOriginal'],row['windows'],0x120000000)
            compare_native(variant,row['armOriginal'],row['androidObjectModel'],0x110000000)

    def test_native_allocation_and_real_address_contract(self):
        for row in self.rows.values():
            for name in ('windowsModel','androidModel'):
                self.assertTrue(row[name]['actualUserPointerVerifiedWithoutTruncation'])
                self.assertGreater(row[name]['actualArena'],0xffffffff)
            self.assertEqual(parse(row['armOriginal'])['graph'][1:4],[4,92,44])
            self.assertEqual(parse(row['windows'])['graph'][1:4],[8,152,88])

    def test_actual_constructor_results_errors_and_weak_fields(self):
        self.assertEqual(self.rows[2,0]['armOriginal'][8],0)
        for variant in (3,4,5,7,15,19):self.assertEqual(self.rows[variant,0]['armOriginal'][8],1)
        self.assertEqual(self.rows[6,0]['armOriginal'][8],0)
        for variant in (8,9,20):self.assertEqual(self.rows[variant,0]['armOriginal'][7],0)
        for variant in (11,12,13,14):self.assertTrue(self.rows[variant,1]['armMemory']['definedMemoryEqual'])

    def test_resurrection_and_destruction_callback_order(self):
        self.assertEqual(self.rows[10,1]['armOriginal'][9],2)
        for variant in (21,25):
            events=parse(self.rows[variant,1]['armOriginal'])['events']
            self.assertGreaterEqual(sum(row[0]==8 for row in events),4)
            self.assertTrue(any(row[0]==7 for row in events))
        events=parse(self.rows[22,0]['armOriginal'])['events']
        self.assertGreaterEqual(sum(row[0]==8 for row in events),2)

    def test_publication_temp_owner_and_delegate_observer(self):
        events=parse(self.rows[26,0]['armOriginal'])['events']
        observer=next(row for row in events if row[0]==10)
        self.assertEqual(observer[2],1)
        events=parse(self.rows[23,1]['armOriginal'])['events']
        clone=next(row for row in events if row[0]==9)
        self.assertNotEqual(clone[2],0)
        self.assertGreater(clone[3],1)

    def test_raw_memory_aliases_and_inactive_frame_limits(self):
        allowed={0x2b400+i for i in range(8)}|{0x2b420+i for i in range(4)}|{0x2b428+i for i in range(4)}
        self.assertFalse(self.report['executedHeapObjectsRegistersCodeLiteralsAndTextAlteredByAliasing'])
        for row in self.rows.values():
            self.assertTrue(row['armMemory']['definedMemoryEqual'])
            self.assertTrue(set(row['armMemory']['differentByteOffsets'])<=allowed)
            self.assertFalse(row['originalDeadFrameReadSites'])
            self.assertFalse(row['sourceDeadFrameReadSites'])
            self.assertTrue(row['armMemory']['preAliasDifferentByteOffsets'])
            self.assertTrue(row['armMemory']['originalCallbackDataAliases'])

    def test_normally_returning_controls_and_same_final_arena(self):
        self.assertEqual(self.controls['count'],13)
        self.assertTrue(all(row['normallyReturnedWithSavedArmAndVfpAbi'] and row['rejected'] for row in self.controls['controls']))
        self.assertGreaterEqual(self.controls['sameFinalSourceArenaControls'],3)

    def test_full_real_class_destructor_and_instance_init_coverage(self):
        coverage={row['address']:row for row in self.report['coverage']}
        for address in (0x666144,0x192548,0x190c50,0x19a308,0x665ee0,0x1a51e0,0x1cdba0,0x1cdaec):
            self.assertFalse(coverage[address]['missingInstructionAddresses'])
        self.assertTrue(self.report['emptyOriginalExecutableSourceImage'])
        self.assertFalse(self.report['allocatorAssertFailureGcClassOpcodeScriptConstructorsWholeVmGameDeviceOrSourceCreditClaimed'])

    def test_android_load_and_relro_contract(self):
        result=inspect(self.folder/'android/libcoercion026.so')
        self.assertTrue(result['sixteenKiBLoadAndRelroContractPassed'])

    def test_ordinary_source_and_exact_frozen_inputs(self):
        for path in SOURCE.glob('*.c'):
            text=path.read_text()
            self.assertLessEqual(len(text.splitlines()),500)
            self.assertNotIn('/*',text)
            self.assertNotIn('//',text)
        for row in self.report['sourceFiles']:
            self.assertEqual(hashlib.sha256((ROOT/row['path']).read_bytes()).hexdigest(),row['sha256'])


if __name__=='__main__':unittest.main()
