import copy
import sys
import tempfile
import unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import squirrel_type_error025 as producer
import squirrel_type_error025_build as builder
import squirrel_type_error025_model as model
import squirrel_type_error025_oracle as oracle
import squirrel_type_error025_android as android
from squirrel_type_error025_controls import SPECS


class TypeError025(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        (ROOT/'work/squirrel-type-error025').mkdir(parents=True,exist_ok=True)
        cls.temporary=tempfile.TemporaryDirectory(prefix='test-',dir=ROOT/'work/squirrel-type-error025');cls.output=Path(cls.temporary.name)
        cls.component=builder.arm(cls.output/'arm');cls.native=builder.native(cls.output/'windows');cls.a64=builder.android_model(cls.output/'android')
        cls.image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    @classmethod
    def tearDownClass(cls):cls.temporary.cleanup()

    def test_frozen022_input_closure(self):self.assertTrue(producer.frozen_inputs())

    def test_fresh_windows_all_messages_and_ownership(self):
        self.assertEqual(len(self.native['observations']),len(model.cases()))
        for row,case in zip(self.native['observations'],model.cases()):
            self.assertTrue(model.validate(row['words'],case)['independentMessageAndOwnershipValidated']);self.assertEqual(row['words'][22],8)

    def test_original_authored_full_arena_and_native_layouts(self):
        for case in(model.cases()[0],model.cases()[43],model.cases()[-1],model.cases()[-7]):
            original,ot,oh=oracle.execute(self.image,self.component,case,False);source,st,sh=oracle.execute(self.image,self.component,case,True)
            native,at,unused=android.execute(self.a64,case)
            self.assertEqual(original,source);self.assertEqual(oh,sh)
            for result in(original,native):self.assertTrue(model.validate(result['words'],case))
            self.assertFalse(st['sourceOriginalModuleMapped']);self.assertTrue(ot['originalTablesPreserved']);self.assertTrue(at['highPointersAbove32Bits'])

    def test_actual_native_type_error_index1_and_weak_argument(self):
        case=model.cases()[-1];self.assertEqual(case['flags']&20,20)
        result,trace,unused=oracle.execute(self.image,self.component,case,False)
        self.assertTrue({0x176fc8,0x17ffac,0x196f6c,0x1a1010,0x1a15ec}<set(trace['visited']))
        self.assertIn(b'parameter 1 ',model.message(case));self.assertIn(b'weakref',model.message(case))
        self.assertTrue(model.validate(result['words'],case)['nativeMismatchActuallyInvoked'])

    def test_high_mask_bits_are_not_expected_typenames(self):
        case={'index':-2147483648,'mask':0x10000,'type':0x08010000,'flags':0,'cleanup':0}
        result,unused,heap=oracle.execute(self.image,self.component,case,False)
        self.assertTrue(model.validate(result['words'],case));self.assertTrue(model.message(case).endswith(b"expected: ''"))

    def test_old_error_publication_and_temporary_order_controls(self):
        for variant in('late-error-publication','early-error-temporary-release','late-error-retain'):
            case=SPECS[variant][3];expected,unused,heap=oracle.execute(self.image,self.component,case,False)
            wrong=builder.arm(self.output/variant,variant);actual,unused,other=oracle.execute(self.image,wrong,case,True)
            self.assertTrue(actual['returned']);self.assertEqual(actual['words'][0],0);self.assertEqual(heap,other);self.assertNotEqual(expected['words'],actual['words'])
            with self.assertRaises(ValueError):model.validate(actual['words'],case)

    def test_actual_native_semantic_control_returns(self):
        variant='native-argument-index-shift';case=SPECS[variant][3];wrong=builder.native(self.output/'wrong-windows',variant)
        self.assertEqual(len(wrong['observations']),1);self.assertEqual(wrong['observations'][0]['words'][0],0)
        with self.assertRaises(ValueError):model.validate(wrong['observations'][0]['words'],case)

    def test_observer_and_counter_tamper_rejected(self):
        row=self.native['observations'][0];case=model.cases()[0]
        for index in(0,1,3,5,6,7,8,9,10,11,12,13,15,18,22,23,24):
            wrong=list(row['words']);wrong[index]^=1
            with self.assertRaises(ValueError):model.validate(wrong,case)
        for wrong in(row['words'][:-1],[False]+row['words'][1:],[float('nan')]+row['words'][1:]):
            with self.assertRaises(ValueError):model.validate(wrong,case)

    def test_input_validation_and_no_original_fallback(self):
        for case in({}, {'index':0,'mask':True,'type':1,'flags':0,'cleanup':0}, {'index':0,'mask':0xffffffff,'type':0x05000002,'flags':4,'cleanup':0}):
            with self.assertRaises(ValueError):model.validate_case(case)
        wrong=copy.deepcopy(self.component);wrong['symbols']['fixture_run025']=0x1a1010
        with self.assertRaises(Exception):oracle.execute(self.image,wrong,model.cases()[0],True)

    def test_synthetic_case_header_is_current(self):
        text='typedef struct { SqPrototypeI32 index; SqPrototypeU32 mask,type,flags,cleanup; } SqTypeCase025;\nstatic const SqTypeCase025 type_cases025[]={\n'
        for case in model.cases():
            index='(-2147483647-1)'if case['index']==-2147483648 else str(case['index'])
            text+='    {'+index+','+','.join(str(case[key])+'u'for key in('mask','type','flags','cleanup'))+'},\n'
        self.assertEqual((ROOT/'source/squirrel-wave025/fixture_cases.h').read_text(encoding='utf-8'),text+'};\n')


if __name__=='__main__':unittest.main()
