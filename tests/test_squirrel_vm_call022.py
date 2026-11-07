import copy
import sys
import tempfile
import unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import squirrel_vm_call022 as producer
import squirrel_vm_call022_build as builder
import squirrel_vm_call022_oracle as oracle
import squirrel_vm_call022_android as android
import squirrel_vm_call022_model as model
from squirrel_vm_call022_controls import SPECS


class VmCall022(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        (ROOT/'work/squirrel-vm-call022').mkdir(parents=True,exist_ok=True)
        cls.temporary=tempfile.TemporaryDirectory(prefix='test-',dir=ROOT/'work/squirrel-vm-call022');cls.output=Path(cls.temporary.name)
        cls.component=builder.arm(cls.output/'arm');cls.native=builder.native(cls.output/'windows');cls.a64=builder.android_model(cls.output/'android')
        cls.image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    @classmethod
    def tearDownClass(cls):cls.temporary.cleanup()

    def test_immutable_actual_provider_pins(self):self.assertTrue(producer.frozen_inputs())

    def test_fresh_windows_corpus_and_independent_models(self):
        self.assertEqual(len(self.native['observations']),len(producer.expected_corpus()))
        for row in self.native['observations']:
            case,kwargs=producer.configuration(row);self.assertTrue(producer.validate(row['words'],case,kwargs))
            self.assertEqual(row['words'][19],8)

    def test_actual_original_call_native_and_array_routes(self):
        case={'length':5,'captures':2,'flags':3}
        reference,rt,rh=oracle.execute(self.image,self.component,case,False,cleanup=True)
        source,st,sh=oracle.execute(self.image,self.component,case,True,cleanup=True)
        self.assertEqual(reference,source);self.assertEqual(rh,sh);self.assertTrue(model.validate(source['words'],case,True))
        self.assertTrue(rt['originalTablesPreserved']);self.assertFalse(st['sourceOriginalModuleMapped'])
        self.assertTrue({0x17ffac,0x196f6c,0x1b33dc}<set(rt['visited']))
        self.assertFalse(rt['handlerInactiveFrameReads']);self.assertFalse(st['handlerInactiveFrameReads'])

    def test_constructor_failure_raw_flags_and_final_owner(self):
        case={'length':5,'captures':1,'flags':0}
        for mode in(2,6,7,14,15):
            kwargs={'contract_mode':mode,'raise_error':0x7fc12345,'cleanup':True}
            reference,rt,rh=oracle.execute(self.image,self.component,case,False,**kwargs)
            source,st,sh=oracle.execute(self.image,self.component,case,True,**kwargs)
            native,at,unused=android.execute(self.a64,case,**kwargs)
            self.assertEqual(reference,source);self.assertEqual(rh,sh)
            for result in(reference,native):self.assertTrue(producer.validate(result['words'],case,kwargs))
            self.assertTrue(at['highPointersAbove32Bits'])

    def test_actual_literal_errors_and_weak_environment(self):
        case={'length':5,'captures':1,'flags':0}
        for kwargs in({'error_case':0,'cleanup':True},{'native_profile':12,'cleanup':True},{'native_profile':13,'cleanup':True},{'native_profile':14,'cleanup':True}):
            reference,rt,rh=oracle.execute(self.image,self.component,case,False,**kwargs)
            source,st,sh=oracle.execute(self.image,self.component,case,True,**kwargs)
            native,at,unused=android.execute(self.a64,case,**kwargs)
            self.assertEqual(reference,source);self.assertEqual(rh,sh)
            for result in(reference,native):self.assertTrue(producer.validate(result['words'],case,kwargs))

    def test_scalar_and_alias_observer_tampering_rejected(self):
        row=self.native['observations'][24];case,kwargs=producer.configuration(row)
        for offset in(0,1,2,5,6,8,10,15,16,19,22,29,39):
            wrong=list(row['words']);wrong[offset]^=1
            with self.assertRaises(ValueError):producer.validate(wrong,case,kwargs)
        for wrong in(row['words'][:-1],[False]+row['words'][1:],[float('nan')]+row['words'][1:]):
            with self.assertRaises(ValueError):producer.validate(wrong,case,kwargs)

    def test_returning_semantic_controls_and_same_final_heap(self):
        for variant in('raise-bool','temporary-order','native-local-before-frame'):
            spec=SPECS[variant][3];case=spec.get('case',{'length':5,'captures':1,'flags':0});kwargs={key:value for key,value in spec.items()if key!='case'}
            original,unused,heap=oracle.execute(self.image,self.component,case,False,**kwargs)
            wrong=builder.arm(self.output/variant,variant);actual,unused,changed=oracle.execute(self.image,wrong,case,True,**kwargs)
            self.assertTrue(actual['returned']);self.assertEqual(actual['words'][0],0);self.assertEqual(heap,changed)
            self.assertNotEqual(actual['words'],original['words'])
            with self.assertRaises(ValueError):producer.validate(actual['words'],case,kwargs)

    def test_genuine_native_control_normally_returns(self):
        variant='raise-bool';spec=SPECS[variant][3];case={'length':5,'captures':1,'flags':0}
        wrong=builder.native(self.output/'wrong-windows',variant)['observations']
        self.assertEqual(len(wrong),1);self.assertEqual(wrong[0]['words'][0],0)
        with self.assertRaises(ValueError):producer.validate(wrong[0]['words'],case,spec)

    def test_inactive_bytes_are_not_universal_memory_equality(self):
        case={'length':5,'captures':1,'flags':0}
        original,rt,oh=oracle.execute(self.image,self.component,case,False,stack_seed=113)
        source,st,sh=oracle.execute(self.image,self.component,case,True)
        self.assertEqual(original['words'],source['words']);self.assertNotEqual(oh,sh)
        self.assertFalse(rt['handlerInactiveFrameReads'])
        self.assertTrue(all(index in {0xc000+offset+byte for offset in(0,4,32,40)for byte in range(4)}for index,(a,b)in enumerate(zip(oh,sh))if a!=b))

    def test_float_status_is_recorded_separately(self):
        case={'length':5,'captures':1,'flags':0}
        for source in(False,True):
            result,trace,unused=oracle.execute(self.image,self.component,case,source,native_profile=10)
            self.assertTrue(model.validate_native_profile(result['words'],10,False))
            self.assertTrue(any(row['fpscr']&0x10 for row in trace['fpscrObservations']))
            self.assertTrue(all(not row['fpscr']&0x07f79f00 for row in trace['fpscrObservations']))

    def test_invalid_inputs_and_original_fallback_rejected(self):
        for case in({}, {'length':-1,'captures':1,'flags':0},{'length':True,'captures':1,'flags':0}):
            with self.assertRaises(ValueError):oracle.execute(b'',{},case,True)
        changed=copy.deepcopy(self.component);changed['symbols']['fixture_call022']=0x17ffac
        with self.assertRaises(Exception):oracle.execute(self.image,changed,{'length':5,'captures':1,'flags':0},True)


if __name__=='__main__':unittest.main()
