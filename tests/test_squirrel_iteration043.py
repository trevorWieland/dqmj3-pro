import json
import sys
import unittest
from datetime import datetime
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import squirrel_iteration043_build as builder
import squirrel_iteration043_model as model
import squirrel_iteration043_oracle as oracle
import squirrel_iteration043_android as android
import squirrel_iteration043_measure as measurement
from squirrel_source_wave002 import sha


class Iteration043Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.output=ROOT/'work/squirrel-iteration043'/('tests-'+datetime.now().strftime('%Y%m%d-%H%M%S-%f'))
        cls.arm=builder.arm(cls.output/'arm');cls.windows=builder.native(cls.output/'windows');cls.a64=builder.android_model(cls.output/'android')
        cls.case=dict(mode=131,value=0,flags=2,cleanup=1)
        cls.source,cls.trace,cls.raw=oracle.execute(b'',cls.arm,cls.case,True)
        cls.portable,cls.portable_trace,unused=android.execute(cls.a64,cls.case)

    def test_address_guard_exact_union_and_gaps(self):
        ranges=[(5,10),(10,14),(3,6),(20,25),(21,22),(27,27)];guard=oracle.address_guard(ranges)
        for address in range(30):self.assertEqual(guard(address),any(a<=address<b for a,b in ranges))

    def test_frozen039_receipt_and_all_pins(self):
        path=ROOT/'evidence/lanes/squirrel-iteration039/ready.json'
        self.assertEqual(sha(path.read_bytes()),'4735af31da7e6fad536ac55eb8732991e9491ebfce77b99ad69a89bf0a0a1488')
        for row in json.loads(path.read_text(encoding='utf-8'))['files']:self.assertEqual(sha((ROOT/row['path']).read_bytes()),row['sha256'])

    def test_fresh_windows_corpus_and_independent_models(self):
        rows=self.windows['observations'];self.assertEqual([{key:r[key]for key in('mode','value','flags','cleanup')}for r in rows],model.cases())
        for row in rows:model.validate(row['words'],{key:row[key]for key in('mode','value','flags','cleanup')})

    def test_real_source_only_arm_and_high_pointer_a64(self):
        model.validate(self.source['words'],self.case);model.validate(self.portable['words'],self.case)
        self.assertEqual(model.normalized(self.source['words']),model.normalized(self.portable['words']))
        self.assertFalse(self.trace['sourceOriginalModuleMapped']);self.assertTrue(self.portable_trace['highPointersAbove32Bits'])

    def test_genuine_windows_pointer_model(self):
        row=next(r for r in self.windows['observations']if all(r[k]==v for k,v in self.case.items()))
        self.assertEqual(model.normalized(self.source['words']),model.normalized(row['words']))

    def test_mutation_result_corruption_rejected(self):
        bad=list(self.source['words']);bad[6]=0
        with self.assertRaises(ValueError):model.validate(bad,self.case)

    def test_callback_publication_order_corruption_rejected(self):
        bad=list(self.source['words']);self.assertGreater(bad[21],0);bad[22+3]=0x01000001
        with self.assertRaises(ValueError):model.validate(bad,self.case)

    def test_raw_wrapper_and_signed_character_models(self):
        for case in(dict(mode=130,value=0,flags=4,cleanup=0),dict(mode=132,value=1,flags=16,cleanup=0),dict(mode=128,value=1,flags=0,cleanup=0)):
            result,unused,unused_heap=oracle.execute(b'',self.arm,case,True);model.validate(result['words'],case)
            bad=list(result['words']);bad[12]^=1
            with self.assertRaises(ValueError):model.validate(bad,case)

    def test_generated_synthetic_headers_are_reproducible_and_bounded(self):
        target=self.output/'headers/fixture_cases.h';target.parent.mkdir();model.header(target)
        for path in target.parent.glob('*.h'):
            self.assertEqual(path.read_bytes(),(builder.SOURCE/path.name).read_bytes());self.assertLessEqual(len(path.read_text().splitlines()),500)
        self.assertEqual(model.cases()[:398],__import__('squirrel_iteration039_model').cases())

    def test_terminal_cursor_is_not_a_return(self):
        case=dict(mode=135,value=0,flags=0,cleanup=0);result,trace,unused=oracle.execute(b'',self.arm,case,True,terminal=True)
        self.assertFalse(result['returned']);self.assertTrue(trace['terminalBoundaryReached']);self.assertEqual(result['words'][2],0)

    def test_actual_original_helper_full_arena(self):
        path=ROOT/'generated/update-content0/code.bin'
        if not path.exists():self.skipTest('Private original module required')
        original,trace,raw=oracle.execute(path.read_bytes(),self.arm,self.case,False)
        self.assertEqual(original['words'],self.source['words']);self.assertEqual(raw,self.raw);self.assertFalse(trace['nativeInactiveFieldReadPcs'])

    def test_complete_ranges_and_conditional_descriptor_proof(self):
        path=ROOT/'generated/update-content0/code.bin'
        if not path.exists():self.skipTest('Private original module required')
        result=measurement.measure();self.assertEqual([r['instructionBytes']for r in result['functions']],[200,300,280])
        proof=result['classDescriptorInvariant'];self.assertTrue(proof['notAUniversalClaimAboutArbitraryNativeMutation']);self.assertEqual(len(proof['invariantDeadInstructionAddresses']),10)

    def test_normally_returning_wrong_source_rejected(self):
        case=dict(mode=129,value=0,flags=0,cleanup=0);wrong=builder.arm(self.output/'wrong-source','table_release_before_publish')
        result,unused,raw=oracle.execute(b'',wrong,case,True);normal,unused,normal_raw=oracle.execute(b'',self.arm,case,True)
        self.assertTrue(result['returned']);self.assertEqual(result['words'][2],0);self.assertEqual(raw,normal_raw)
        with self.assertRaises(ValueError):model.validate(result['words'],case)
        model.validate(normal['words'],case)

    def test_invalid_cursor_and_alias_profiles_rejected(self):
        for changes in(dict(value=-7),dict(flags=65535),dict(mode=135)):
            with self.assertRaises(ValueError):model.validate_case(dict(self.case,**changes))


if __name__=='__main__':unittest.main()
