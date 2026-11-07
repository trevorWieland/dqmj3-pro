import hashlib
import json
from pathlib import Path
import sys
import unittest

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'toolscripts'))
from squirrel_class034_build import ROOT,WORK,SOURCE
from squirrel_class034_model import parse,compare_native
from squirrel_class_call030_model import parse as parse030
from squirrel_coercion026_android import inspect


class Class034(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=WORK/'primary-qualified'
        path=cls.folder/'execution.json'
        if not path.exists():raise unittest.SkipTest('034 private complete execution unavailable')
        cls.report=json.loads(path.read_text())
        cls.rows={(r['variant'],r['cleanup']):r for r in cls.report['observations']}
        control=WORK/'controls-sealed/controls.json'
        if not control.exists():raise unittest.SkipTest('034 private returning controls unavailable')
        cls.controls=json.loads(control.read_text())

    def test_measured_complete_roots_and_unique_factory(self):
        claim=json.loads((ROOT/'evidence/lanes/squirrel-class034/claim.json').read_text())
        self.assertEqual(claim['plannedCanonicalInstructionBytes'],2764)
        self.assertEqual(len(claim['functions']),4)
        factory=json.loads((ROOT/'evidence/lanes/squirrel-class034/factory-claim.json').read_text())
        self.assertEqual(factory['function']['instructionBytes'],344)
        self.assertEqual(factory['uniqueSourceSymbol'],'sq_vm_create_instance034')
        self.assertEqual(factory['sourceOrInventoryAdmissionGranted'],0)

    def test_all_four_target_observations(self):
        self.assertEqual((self.report['sets'],self.report['targetObservations']),(102,408))
        self.assertEqual(set(self.rows),{(v,c) for v in range(51) for c in (0,1)})
        for (variant,cleanup),row in self.rows.items():
            self.assertEqual(row['armOriginal'],row['armSource'])
            compare_native(variant,row['armOriginal'],row['windows'],0x120000000)
            compare_native(variant,row['armOriginal'],row['androidObjectModel'],0x110000000)

    def test_actual_meta_name_order_and_indices(self):
        record=json.loads((ROOT/'evidence/lanes/squirrel-class034/meta-names-measurement.json').read_text())
        names=[r['name'] for r in record['namesInActualConstructionOrder']]
        self.assertEqual(names[5],'_modulo')
        self.assertEqual(names[13:19],['_newslot','_delslot','_tostring','_newmember','_inherited','constructor'])
        for row in self.rows.values():self.assertEqual(parse(row['armOriginal'])['results'][:18],list(range(18)))

    def test_descriptor_publication_precedes_allocation(self):
        events=parse(self.rows[0,0]['armOriginal'])['events']
        descriptor=next(row for row in events if row[0]==1)
        self.assertEqual(descriptor[1:5],[0x05000002,0x02000000,0,0])
        growth=[r for r in parse(self.rows[12,0]['armOriginal'])['events'] if r[0]==1]
        self.assertEqual([r[3] for r in growth],[0,4,8])

    def test_locked_and_typed_error_paths(self):
        for variant in (1,15,16,17,22):self.assertEqual(parse(self.rows[variant,0]['armOriginal'])['extra'][1],0)
        for variant in (15,16,17,22):
            common=parse030(parse(self.rows[variant,0]['armOriginal'])['common'])
            self.assertEqual(common['suffix'][3],0x08000010)

    def test_inherited_callback_failure_and_fresh_result(self):
        for variant in (24,25,26,27):
            extra=parse(self.rows[variant,0]['armOriginal'])['extra']
            self.assertEqual(extra[1:3],[1,1])
        common=parse030(parse(self.rows[27,0]['armOriginal'])['common'])
        self.assertIsNotNone(common['classes'][2])
        self.assertEqual(common['classes'][2][-2],0x08000010)

    def test_real_script_constructors_and_inherited_script_calls(self):
        for variant in (32,34):
            self.assertTrue(self.rows[variant,0]['armMemory']['wholeComparisonArenaEqual'])
            self.assertFalse(self.rows[variant,0]['armMemory']['actualNativeFrameOffsets'])
        for variant in (33,35):
            self.assertEqual(self.rows[variant,0]['armMemory']['actualNativeFrameOffsets'],[0x2b430])
        self.assertEqual(parse(self.rows[33,0]['armOriginal'])['extra'][3],1)
        self.assertEqual(parse(self.rows[35,0]['armOriginal'])['extra'][2],1)

    def test_real_instance_and_table_meta_fallback(self):
        for variant in (37,38,39,41,44):self.assertEqual(parse(self.rows[variant,0]['armOriginal'])['extra'][4],1)
        self.assertEqual(parse(self.rows[36,0]['armOriginal'])['extra'][1],0)
        self.assertEqual(parse(self.rows[39,0]['armOriginal'])['extra'][1],0)
        self.assertEqual(parse(self.rows[41,0]['armOriginal'])['results'][-1],0)
        self.assertEqual(parse(self.rows[44,0]['armOriginal'])['results'][-1],1)
        self.assertEqual(parse(self.rows[49,0]['armOriginal'])['results'][-1],0)
        self.assertEqual(parse(self.rows[50,0]['armOriginal'])['extra'][4],1)

    def test_unique_factory_temporary_and_aliased_outputs(self):
        self.assertEqual(parse(self.rows[45,0]['armOriginal'])['results'][-1],1)
        for variant in (45,46):
            common=parse030(parse(self.rows[variant,0]['armOriginal'])['common'])
            self.assertTrue(any(kind==2 and freed==1 for size,kind,freed in common['blocks']))
        self.assertEqual(parse(self.rows[47,0]['armOriginal'])['results'][-1],1)
        self.assertTrue(self.rows[48,0]['armMemory']['wholeComparisonArenaEqual'])

    def test_dynamic_native_frame_read_and_raw_alias_contract(self):
        self.assertFalse(self.report['executedHeapObjectsRegistersCodeLiteralsAndTextAlteredByAliasing'])
        for row in self.rows.values():
            memory=row['armMemory'];self.assertTrue(memory['definedMemoryEqual'])
            allowed={base+field+byte for base in memory['actualNativeFrameOffsets'] for field in (0,4,32,40) for byte in range(4)}
            self.assertTrue(set(memory['differentByteOffsets'])<=allowed)
            self.assertFalse(row['originalDeadFrameReadSites']);self.assertFalse(row['sourceDeadFrameReadSites'])
            self.assertTrue(memory['preAliasDifferentByteOffsets'])

    def test_returning_controls_and_android_layout(self):
        self.assertEqual(self.controls['count'],15)
        self.assertTrue(all(row['normallyReturnedWithSavedArmAndVfpAbi'] and row['rejected'] for row in self.controls['controls']))
        self.assertGreaterEqual(self.controls['sameFinalSourceArenaControls'],2)
        observer=next(row for row in self.controls['controls'] if row['name']=='forbidden-inactive-native-frame-observer')
        self.assertTrue(observer['sameFinalSourceArena']);self.assertTrue(observer['sameFinalObservations'])
        self.assertTrue(observer['forbiddenNativeFrameReads'])
        self.assertTrue(inspect(self.folder/'android/libcoercion026.so')['sixteenKiBLoadAndRelroContractPassed'])

    def test_ordinary_source_and_all_frozen_inputs(self):
        for path in SOURCE.glob('*.c'):
            text=path.read_text();self.assertLessEqual(len(text.splitlines()),500)
            self.assertNotIn('/*',text);self.assertNotIn('//',text)
        for row in self.report['sourceFiles']:
            self.assertEqual(hashlib.sha256((ROOT/row['path']).read_bytes()).hexdigest(),row['sha256'])


if __name__=='__main__':unittest.main()
