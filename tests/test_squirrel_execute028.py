import copy
import json
import sys
import unittest
import uuid
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import squirrel_execute028_build as build
import squirrel_execute028_model as model
import squirrel_execute028_oracle as oracle
import squirrel_execute028_android as android
from squirrel_execute028 import compare_arenas
from squirrel_execute028_measure import measure


class Execute028Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.output=ROOT/'work/squirrel-execute028'/('tests-'+uuid.uuid4().hex)
        cls.native=build.native(cls.output/'windows')
        cls.arm=build.arm(cls.output/'arm')
        cls.a64=build.android_model(cls.output/'android')
        cls.image=(ROOT/'generated/update-content0/code.bin').read_bytes()

    def test_fresh_windows_complete_corpus(self):
        self.assertEqual(len(self.native['observations']),len(model.cases()))
        for case,row in zip(model.cases(),self.native['observations']):model.validate(row['words'],case)

    def test_original_source_loop_and_owned_literal(self):
        for case in(dict(mode=1,value=10,flags=7,cleanup=0),dict(mode=2,value=0,flags=0,cleanup=1)):
            original,trace,heap=oracle.execute(self.image,self.arm,case,False)
            source,st,other=oracle.execute(self.image,self.arm,case,True)
            model.validate(original['words'],case);model.validate(source['words'],case)
            self.assertEqual(original,source);self.assertEqual(heap,other);self.assertFalse(st['sourceOriginalModuleMapped'])

    def test_real_native_call_and_indeterminate_frame_boundary(self):
        case=dict(mode=8,value=3,flags=1,cleanup=1)
        original,trace,heap=oracle.execute(self.image,self.arm,case,False)
        source,st,other=oracle.execute(self.image,self.arm,case,True)
        self.assertEqual(original['words'],source['words']);model.validate(source['words'],case)
        self.assertEqual(trace['nativeInactiveFieldReadPcs'],[])
        result=compare_arenas(heap,other,case);self.assertTrue(result['rawFrameObserversExcluded'])
        self.assertIn(0x1b33dc,trace['visited']);self.assertFalse(st['sourceOriginalModuleMapped'])

    def test_literal_error_false_returns(self):
        for mode in(9,10):
            case=dict(mode=mode,value=42,flags=1,cleanup=0)
            original,trace,heap=oracle.execute(self.image,self.arm,case,False)
            source,st,other=oracle.execute(self.image,self.arm,case,True)
            model.validate(original['words'],case);self.assertEqual(original,source);self.assertEqual(heap,other);self.assertEqual(source['words'][1],0)

    def test_compiled_a64_true_pointer_and_ownership_model(self):
        for case in(dict(mode=4,value=0,flags=7,cleanup=1),dict(mode=8,value=3,flags=0,cleanup=0),dict(mode=10,value=42,flags=0,cleanup=1)):
            result,trace,heap=android.execute(self.a64,case);model.validate(result['words'],case)
            self.assertTrue(trace['highPointersAbove32Bits']);self.assertFalse(trace['originalModuleMapped'])
            expected=next(row for row in self.native['observations']if all(row[key]==value for key,value in case.items()))
            self.assertEqual(model.normalize(result['words']),model.normalize(expected['words']))

    def test_independent_result_and_order_models_reject_tamper(self):
        words=list(self.native['observations'][0]['words']);case=model.cases()[0]
        for index in(5,13,216+16,216+20+15):
            wrong=list(words);wrong[index]^=1
            with self.assertRaises(ValueError):model.validate(wrong,case)

    def test_native_arena_exception_does_not_hide_other_bytes(self):
        original=bytes(0x100000);wrong=bytearray(original);wrong[0x1234]=1
        with self.assertRaises(ValueError):compare_arenas(original,wrong,dict(mode=8))
        wrong=bytearray(original);wrong[0xc050]=1
        self.assertTrue(compare_arenas(original,wrong,dict(mode=8))['indeterminateNativeFrameDifferences'])
        with self.assertRaises(ValueError):compare_arenas(original,wrong,dict(mode=1))

    def test_eight_ranges_and_no_whole_root_credit(self):
        claim=measure();self.assertEqual(claim['entry'],0x18d65c);self.assertEqual(claim['wholeExecuteSourceCreditGranted'],0)
        self.assertEqual(len(claim['executeInventory']['instructionRanges']),8)

    def test_fixture_header_is_reproducible_synthetic_input(self):
        target=self.output/'fixture_cases.h';model.header(target)
        self.assertEqual(target.read_bytes(),(ROOT/'source/squirrel-wave028/fixture_cases.h').read_bytes())

    def test_reject_invalid_fixture_domains(self):
        for case in(dict(mode=8,value=-1,flags=0,cleanup=0),dict(mode=1,value=-1,flags=0,cleanup=0),dict(mode=True,value=0,flags=0,cleanup=0)):
            with self.assertRaises(ValueError):model.validate_case(case)

    def test_authored_source_limits(self):
        for path in(ROOT/'source/squirrel-wave028').glob('*'):
            if path.suffix in('.c','.h'):
                text=path.read_text();self.assertLessEqual(len(text.splitlines()),500);self.assertNotIn('/*',text);self.assertNotIn('__asm',text)


if __name__=='__main__':unittest.main()
