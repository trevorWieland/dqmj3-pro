import copy
import sys
import tempfile
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import squirrel_table_lookup019 as producer
import squirrel_table_lookup019_build as builder
import squirrel_table_lookup019_model as model
import squirrel_table_lookup019_oracle as oracle
import squirrel_table_lookup019_android as android


class TableProvider019(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.temporary=tempfile.TemporaryDirectory(prefix='tests-',dir=ROOT/'work/squirrel-table-lookup019')
        cls.output=Path(cls.temporary.name)
        cls.component=builder.arm(cls.output/'arm')
        cls.native=builder.native(cls.output/'native')
        cls.a64=builder.android_model(cls.output/'android')
        cls.image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    @classmethod
    def tearDownClass(cls): cls.temporary.cleanup()

    def test_frozen_dependencies(self): self.assertTrue(producer.frozen_inputs())

    def test_actual_windows_source_created_topology(self):
        self.assertEqual(len(self.native['observations']),120)
        for row,case in zip(self.native['observations'],model.cases()):
            observed=model.validate(row['words'],case)
            self.assertEqual(observed['pointerBytes'],8)
            self.assertTrue(observed['nativeTopologyValidatedIndependently'])

    def test_actual_original_source_and_high_pointer_model(self):
        for case in ({'value_kind':1,'old_kind':3,'query_kind':1},
                     {'value_kind':3,'old_kind':4,'query_kind':0},
                     {'value_kind':5,'old_kind':2,'query_kind':2}):
            original,ot,oh=oracle.execute(self.image,self.component,case,False)
            source,st,sh=oracle.execute(self.image,self.component,case,True)
            portable,at,unused=android.execute(self.a64,case)
            self.assertEqual(original,source)
            self.assertEqual(oh,sh)
            self.assertFalse(st['sourceOriginalModuleMapped'])
            self.assertTrue(at['highPointersAbove32Bits'])
            self.assertTrue(ot['calleeSavedVfpPreserved'])
            self.assertEqual(model.validate(source['words'],case)['logicalMap'],model.validate(portable['words'],case)['logicalMap'])

    def test_floating_semantics_and_explicit_ioc_difference(self):
        case={'value_kind':0,'old_kind':0,'query_kind':0}
        original,ot,unused=oracle.execute(self.image,self.component,case,False,float_bits=0x7fc00001)
        source,st,unused=oracle.execute(self.image,self.component,case,True,float_bits=0x7fc00001)
        self.assertEqual(original,source)
        self.assertEqual(ot['originalHashObservations'],[0])
        self.assertEqual(ot['finalFPSCRExceptionStatus'],1)
        self.assertEqual(st['finalFPSCRExceptionStatus'],0)
        for source_mode in (False,True):
            unused,trace,unused_heap=oracle.execute(self.image,self.component,case,source_mode,fp_controls=0xc00000)
            self.assertEqual(trace['finalFPSCRControlFields'],0xc00000)

    def test_invalid_case_and_fp_seed_rejected_before_entry(self):
        case={'value_kind':0,'old_kind':0,'query_kind':0}
        for changed in (dict(case,value_kind=True),dict(case,old_kind=5),dict(case,query_kind=-1),dict(case,extra=0)):
            with self.assertRaises(ValueError): oracle.execute(b'',{},changed,True)
        for controls in (True,-1,0x100,0x80000000):
            with self.assertRaises(ValueError): oracle.execute(b'',{},case,True,fp_controls=controls)
        with self.assertRaises(ValueError): oracle.execute(b'',{},case,True,float_bits=True)

    def test_no_source_original_fallback(self):
        bad=copy.deepcopy(self.component)
        bad['symbols']['fixture_table_run019']=0x1a1dc8
        with self.assertRaises(Exception): oracle.execute(b'',bad,model.cases()[0],True)

    def test_topology_hash_ownership_and_count_tamper(self):
        case=model.cases()[0]
        words=self.native['observations'][0]['words']
        offsets=[0,6,8,11,24,24+19*4+4, len(words)-1]
        parsed=model.parse(words)
        topology_start=24+19*4+21*5+5*len(parsed['strings'])
        offsets += [topology_start+4,topology_start+5]
        for offset in offsets:
            changed=list(words);changed[offset]^=1
            with self.assertRaises(ValueError): model.validate(changed,case)
        changed=list(words);changed[15]=0xffffffff
        with self.assertRaises(ValueError): model.parse(changed)
        changed=list(words);changed[0]=False
        with self.assertRaises(ValueError): model.parse(changed)
        with self.assertRaises(ValueError): model.parse(words[:-1])

    def test_returning_wrong_publication_and_float_controls_same_heap(self):
        for variant in ('late_publication','late_retain','numeric_float_equality_get'):
            case={'value_kind':1,'old_kind':3,'query_kind':0 if variant=='numeric_float_equality_get' else 1}
            normal,unused,heap=oracle.execute(self.image,self.component,case,True)
            wrong=builder.arm(self.output/variant,variant)
            actual,unused,wrong_heap=oracle.execute(self.image,wrong,case,True)
            self.assertTrue(actual['returned'])
            self.assertNotEqual(normal,actual)
            self.assertEqual(heap,wrong_heap)
            with self.assertRaises(ValueError):model.validate(actual['words'],case)

    def test_fixed_arm_string_offset_is_wrong_for_native_layout(self):
        wrong=builder.android_model(self.output/'fixed-native','native_fixed_string_offset')
        case={'value_kind':1,'old_kind':3,'query_kind':1}
        actual,trace,unused=android.execute(wrong,case)
        self.assertTrue(actual['returned'])
        with self.assertRaises(ValueError):model.validate(actual['words'],case)

    def test_unknown_control_rejected(self):
        with self.assertRaises(ValueError):builder.sources(self.output,'unqualified')


if __name__=='__main__': unittest.main()
