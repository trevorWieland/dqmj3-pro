import hashlib
import json
from pathlib import Path
import sys
import unittest

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'toolscripts'))
from squirrel_coercion026_build import ROOT,WORK,SOURCE
from squirrel_coercion026_model import VARIANTS,validate,compare_native
from squirrel_coercion026_android import inspect,validate_segments


class Coercion026(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=WORK/'primary-final-raw'
        path=cls.folder/'execution.json'
        if not path.exists():raise unittest.SkipTest('026 qualified private execution report unavailable')
        cls.report=json.loads(path.read_text())
        cls.rows={(row['variant'],row['cleanup']):row for row in cls.report['observations']}
        cls.controls=json.loads((WORK/'primary-v2/controls/controls.json').read_text())

    def test_canonical_complete_ranges(self):
        claim=json.loads((ROOT/'evidence/lanes/squirrel-coercion026/claim.json').read_text())
        self.assertEqual(claim['uniqueInstructionBytes'],660)
        self.assertEqual(claim['classifiedPoolBytes'],48)
        self.assertEqual([(r['instructions']['address'],r['instructions']['bytes']) for r in claim['functions']],
            [(0x1a83dc,508),(0x7434e8,152)])
        self.assertFalse(claim['fourteenDigit023SubstitutionAllowed'])

    def test_complete_four_target_corpus(self):
        self.assertEqual(len(VARIANTS),151)
        self.assertEqual(self.report['sets'],302)
        self.assertEqual(self.report['targetObservations'],1208)
        for (variant,cleanup),row in self.rows.items():
            self.assertEqual(row['armOriginal'],row['armSource'])
            validate(variant,row['armOriginal'],4)
            compare_native(variant,row['armOriginal'],row['windows'])
            compare_native(variant,row['armOriginal'],row['androidObjectModel'])

    def test_declared_dead_frame_difference_is_preserved(self):
        self.assertEqual(self.report['rawWholeArenaEqualSets'],286)
        self.assertEqual(self.report['preAliasCompleteArenaEqualSets'],0)
        self.assertFalse(self.report['executedHeapObjectsRegistersCodeLiteralsAndTextAlteredByAliasing'])
        allowed={0x2b400+i for i in range(8)}|{0x2b420+i for i in range(4)}|{0x2b428+i for i in range(4)}
        for row in self.rows.values():
            self.assertTrue(row['armMemory']['definedMemoryEqual'])
            self.assertTrue(set(row['armMemory']['differentByteOffsets'])<=allowed)
            self.assertFalse(row['originalDeadFrameReadSites'])
            self.assertFalse(row['sourceDeadFrameReadSites'])
            self.assertNotEqual(row['armMemory']['preAliasOriginalArenaSha256'],row['armMemory']['preAliasSourceArenaSha256'])
            self.assertTrue(row['armMemory']['preAliasDifferentByteOffsets'])
            self.assertTrue(row['armMemory']['originalCallbackDataAliases'])

    def test_actual_native_pointer_and_storage_contract(self):
        row=self.rows[316,0]
        self.assertFalse(row['windowsModel']['rawTextEqualsTarget'])
        self.assertGreater(row['windowsModel']['actualNativeAddress'],0xffffffff)
        self.assertEqual((row['windowsModel']['targetCapacity'],row['windowsModel']['nativeCapacity']),(36,49))
        row=self.rows[366,0]
        self.assertEqual((row['windowsModel']['targetCapacity'],row['windowsModel']['nativeCapacity']),(24,49))
        self.assertTrue(row['windowsModel']['logicalOwnershipAndOrderedEventsEqualWithDeclaredScratchBudget'])

    def test_real_table_instance_and_native_meta_paths(self):
        for variant in (332,333,335,338):
            self.assertEqual(validate(variant,self.rows[variant,0]['armOriginal'],4)['text'],
                b'0.1' if variant==335 else b'ab\x80def')
        for variant in (336,337,340,341,342):
            self.assertTrue(validate(variant,self.rows[variant,0]['armOriginal'],4)['text'].startswith(b'(table : 0x'))
        self.assertEqual(self.rows[337,0]['armOriginal'][14],0x08000010)

    def test_stack_indices_and_last_temporary_owner(self):
        for variant in (350,351,352,353):
            self.assertEqual(validate(variant,self.rows[variant,0]['armOriginal'],4)['text'],b'1234567')
        self.assertEqual(validate(354,self.rows[354,0]['armOriginal'],4)['text'],b'ab\x80def')
        self.assertEqual(self.report['coverage'][1]['coveredArmInstructions'],38)

    def test_scalar_read_order_and_shared_storage_switch(self):
        expected={360:b'-7654321',361:b'0.1',362:b'true',363:b'false',365:b'alternate scratch'}
        for variant,text in expected.items():
            self.assertEqual(validate(variant,self.rows[variant,0]['armOriginal'],4)['text'],text)
        self.assertIn(b'00001234',validate(364,self.rows[364,0]['armOriginal'],4)['text'])

    def test_independent_finite_float_and_ieee_specials(self):
        report=json.loads((self.folder/'float-host-reference.json').read_text())
        self.assertEqual(report['cases'],4730)
        self.assertFalse(report['exactDifferences'])
        self.assertTrue(report['pointerBudget']['bothCanariesPreserved'])
        for variant,text in zip(range(496,502),(b'inf',b'-inf',b'nan',b'-nan',b'nan',b'-nan')):
            self.assertEqual(validate(variant,self.rows[variant,0]['armOriginal'],4)['text'],text)

    def test_normally_returning_controls(self):
        self.assertEqual(self.controls['count'],14)
        self.assertTrue(all(row['normallyReturned'] and row['rejected'] for row in self.controls['controls']))
        observer=next(row for row in self.controls['controls'] if row['name']=='forbidden-dead-frame-observer')
        self.assertTrue(observer['sameFinalSourceArena'])
        self.assertTrue(observer['sameFinalObservations'])
        self.assertTrue(observer['forbiddenDeadFrameReads'])

    def test_android_load_relro_and_rejecting_controls(self):
        result=inspect(self.folder/'android/libcoercion026.so')
        self.assertTrue(result['sixteenKiBLoadAndRelroContractPassed'])
        self.assertTrue(inspect(self.folder/'android/liblookup020.so')['sixteenKiBLoadAndRelroContractPassed'])
        loads=[dict(type='PT_LOAD',address=0,offset=0,bytes=0x4000,alignment=16384,flags=4),
            dict(type='PT_LOAD',address=0x4000,offset=0x4000,bytes=0x8000,alignment=16384,flags=6)]
        with self.assertRaises(ValueError):validate_segments(loads+[dict(type='PT_GNU_RELRO',address=0x4000,offset=0x4000,bytes=1,alignment=1,flags=4)])
        loads[1]['bytes']=1
        validate_segments(loads+[dict(type='PT_GNU_RELRO',address=0x4000,offset=0x4000,bytes=1,alignment=1,flags=4)])
        loads[0]['alignment']=4096
        with self.assertRaises(ValueError):validate_segments(loads)

    def test_ordinary_source_and_frozen_inputs(self):
        for path in SOURCE.glob('*.c'):
            text=path.read_text()
            self.assertLessEqual(len(text.splitlines()),500)
            self.assertNotIn('/*',text)
            self.assertNotIn('//',text)
        for row in self.report['sourceFiles']:
            path=ROOT/row['path']
            self.assertEqual(hashlib.sha256(path.read_bytes()).hexdigest(),row['sha256'])

    def test_only_excluded_allocation_assert_instructions_are_missing(self):
        self.assertEqual(self.report['coverage'][0]['missingInstructionAddresses'],[0x1a85d0,0x1a85d4])
        self.assertFalse(self.report['coverage'][1]['missingInstructionAddresses'])
        self.assertTrue(self.report['emptyOriginalExecutableSourceImage'])
        self.assertFalse(self.report['allocatorAssertFailureGeneralPrintfExecuteClassFactoryGcWholeVmGameDeviceOrSourceCreditClaimed'])


if __name__=='__main__':unittest.main()
