import copy
import sys
import tempfile
import unittest
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import squirrel_table_helpers021 as producer
import squirrel_table_helpers021_build as builder
import squirrel_table_helpers021_model as model
import squirrel_table_helpers021_oracle as oracle
import squirrel_table_helpers021_android as android


class TableHelpers021(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.temporary=tempfile.TemporaryDirectory(prefix='tests-',dir=ROOT/'work/squirrel-table-helpers021')
        cls.output=Path(cls.temporary.name)
        cls.component=builder.arm(cls.output/'arm')
        cls.native=builder.native(cls.output/'native')
        cls.a64=builder.android_model(cls.output/'a64')
        cls.image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    @classmethod
    def tearDownClass(cls):cls.temporary.cleanup()

    def test_immutable019_inputs(self):self.assertTrue(producer.frozen_inputs())

    def test_fresh_actual_windows_independent_model(self):
        self.assertEqual(len(self.native['observations']),len(model.cases()))
        for row,case in zip(self.native['observations'],model.cases()):
            self.assertEqual(model.validate(row['words'],case)['pointerBytes'],8)

    def test_original_source_real_ownership_and_native_model(self):
        for case in ({'mode':1,'requested':4,'flags':1},{'mode':2,'requested':8,'flags':43},
                     {'mode':3,'requested':4,'flags':3},{'mode':4,'requested':4,'flags':0}):
            original,ot,oh=oracle.execute(self.image,self.component,case,False)
            source,st,sh=oracle.execute(self.image,self.component,case,True)
            portable,at,unused=android.execute(self.a64,case)
            self.assertEqual(original,source);self.assertEqual(oh,sh)
            for result in(original,portable):self.assertTrue(model.validate(result['words'],case)['logicalLifetimeValidated'])
            self.assertFalse(st['sourceOriginalModuleMapped'])
            self.assertTrue(at['highPointersAbove32Bits'])
            self.assertTrue(all(value>0 for value in ot['originalRehashRemainingKeyReferences']))

    def test_key_retained_before_old_release(self):
        case={'mode':2,'requested':8,'flags':43}
        unused,trace,unused_heap=oracle.execute(self.image,self.component,case,False)
        self.assertTrue(trace['originalRehashRemainingKeyReferences'])
        self.assertTrue(all(value>0 for value in trace['originalRehashRemainingKeyReferences']))

    def test_invalid_inputs_rejected_before_execution(self):
        for case in ({'mode':True,'requested':4,'flags':0},{'mode':2,'requested':3,'flags':0},
                     {'mode':1,'requested':4,'flags':99},{}):
            with self.assertRaises(ValueError):oracle.execute(b'',{},case,True)

    def test_no_original_fallback(self):
        changed=copy.deepcopy(self.component);changed['symbols']['fixture_helpers_run021']=0x19b4ec
        with self.assertRaises(Exception):oracle.execute(b'',changed,model.cases()[0],True)

    def test_counter_capacity_free_node_and_observer_tamper(self):
        row=self.native['observations'][0];case={key:row[key]for key in('mode','requested','flags')}
        for offset in(0,5,7,9,15,16,17,18,28,31,len(row['words'])-1):
            changed=list(row['words']);changed[offset]^=1
            with self.assertRaises(ValueError):model.validate(changed,case)
        changed=list(row['words']);changed[0]=False
        with self.assertRaises(ValueError):model.validate(changed,case)
        with self.assertRaises(ValueError):model.validate(row['words'][:-1],case)

    def test_returning_same_heap_semantic_controls(self):
        for variant in('new_slot_late_publication','delegate_late_retain','destructor_early_weak_reset'):
            case=dict(zip(('mode','requested','flags'),builder.CONTROL_CASES[variant]))
            expected,unused,heap=oracle.execute(self.image,self.component,case,True)
            wrong=builder.arm(self.output/variant,variant)
            actual,unused,other_heap=oracle.execute(self.image,wrong,case,True)
            self.assertTrue(actual['returned']);self.assertNotEqual(actual,expected);self.assertEqual(heap,other_heap)
            with self.assertRaises(ValueError):model.validate(actual['words'],case)

    def test_native_control_selected_input_returns(self):
        wrong=builder.native(self.output/'wrong-native','delegate_early_publication')
        self.assertEqual(len(wrong['observations']),1)
        row=wrong['observations'][0];case={key:row[key]for key in('mode','requested','flags')}
        with self.assertRaises(ValueError):model.validate(row['words'],case)

    def test_unknown_control_rejected(self):
        with self.assertRaises(ValueError):builder.sources(self.output,'unknown')


if __name__=='__main__':unittest.main()
