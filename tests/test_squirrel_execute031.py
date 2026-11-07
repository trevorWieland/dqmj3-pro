import hashlib
import json
import sys
import unittest
import uuid
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import squirrel_execute031_build as build
import squirrel_execute031_model as model
import squirrel_execute031_oracle as oracle
import squirrel_execute031_android as android
import squirrel_execute028_build as old_build
import squirrel_execute028_oracle as old_oracle
from squirrel_execute031 import compare_arenas


class Execute031Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.output=ROOT/'work/squirrel-execute031'/('tests-'+uuid.uuid4().hex)
        cls.native=build.native(cls.output/'windows');cls.arm=build.arm(cls.output/'arm');cls.a64=build.android_model(cls.output/'android');cls.old=old_build.arm(cls.output/'frozen028')
        cls.image=(ROOT/'generated/update-content0/code.bin').read_bytes()

    def test_fresh_windows_all314_independent_models(self):
        self.assertEqual(len(self.native['observations']),314)
        for case,row in zip(model.cases(),self.native['observations']):model.validate(row['words'],case)

    def test_frozen028_source_arenas_and_structured_prefix_preserved(self):
        for case in(dict(mode=1,value=10,flags=0,cleanup=0),dict(mode=8,value=3,flags=1,cleanup=1),dict(mode=10,value=42,flags=0,cleanup=0)):
            old,trace,heap=old_oracle.execute(self.image,self.old,case,True);new,nt,other=oracle.execute(self.image,self.arm,case,True)
            self.assertEqual(old['words'],model.split(new['words'])[0]);self.assertEqual(heap,other)

    def test_nested_child_frame_result_and_external_owners(self):
        self.compare(dict(mode=32,value=2147483647,flags=2,cleanup=1))

    def test_array_grow_set_get_and_real_disposal(self):
        self.compare(dict(mode=33,value=10,flags=1,cleanup=1))

    def test_table_string_key_and_final_owner_lookup_transfer(self):
        self.compare(dict(mode=35,value=10,flags=1,cleanup=1));self.compare(dict(mode=51,value=42,flags=0,cleanup=0))

    def test_native_method_reference_executes_original_builtin(self):
        case=dict(mode=37,value=3,flags=1,cleanup=1);original,trace,heap=oracle.execute(self.image,self.arm,case,False);source,st,other=oracle.execute(self.image,self.arm,case,True)
        self.assertEqual(original['words'],source['words']);model.validate(source['words'],case);compare_arenas(heap,other,case)
        self.assertIn(0x1b33dc,trace['visited']);self.assertFalse(st['sourceOriginalModuleMapped']);self.assertFalse(trace['nativeInactiveFieldReadPcs'])

    def test_integer_wrapping_comparison_and_shift_boundaries(self):
        self.compare(dict(mode=39,value=2147483647,flags=0,cleanup=0));self.compare(dict(mode=38,value=32,flags=0,cleanup=0))

    def test_finite_float_pipeline_and_raw_nan_identity(self):
        self.compare(dict(mode=40,value=1067450368,flags=0,cleanup=0));self.compare(dict(mode=49,value=2143289345,flags=0,cleanup=0))

    def test_a64_high_pointer_layouts_and_real_owned_graph(self):
        for case in(dict(mode=32,value=10,flags=0,cleanup=1),dict(mode=37,value=3,flags=0,cleanup=1),dict(mode=50,value=0,flags=0,cleanup=0)):
            result,trace,heap=android.execute(self.a64,case);model.validate(result['words'],case)
            expected=next(row for row in self.native['observations']if all(row[key]==value for key,value in case.items()))
            self.assertEqual(model.normalized(result['words']),model.normalized(expected['words']));self.assertTrue(trace['highPointersAbove32Bits']);self.assertFalse(trace['physicalAndroidExecution'])

    def test_models_reject_result_and_publication_tamper(self):
        case=dict(mode=51,value=42,flags=0,cleanup=0);row=next(x for x in self.native['observations']if all(x[k]==v for k,v in case.items()));words=list(row['words'])
        bad=list(words);bad[5]^=1
        with self.assertRaises(ValueError):model.validate(bad,case)
        index=next(216+i*20 for i in range(words[17])if words[216+i*20]==11);bad=list(words);bad[index+9]=0x08000040
        with self.assertRaises(ValueError):model.validate(bad,case)

    def test_fixture_domain_rejects_unsafe_or_unsupported_values(self):
        for case in(dict(mode=33,value=2147483647,flags=0,cleanup=0),dict(mode=40,value=2139095040,flags=0,cleanup=0),dict(mode=True,value=0,flags=0,cleanup=0)):
            with self.assertRaises(ValueError):model.validate_case(case)

    def test_readonly_frozen028_receipt_and_synthetic_header(self):
        path=ROOT/'evidence/lanes/squirrel-execute028/ready.json';self.assertEqual(hashlib.sha256(path.read_bytes()).hexdigest(),'d31dc398c29e6783fac6522c70ac4186c1e52b5c7d08840aa5004ba4d2af90ac')
        for row in json.loads(path.read_text())['files']:self.assertEqual(hashlib.sha256((ROOT/row['path']).read_bytes()).hexdigest(),row['sha256'])
        target=self.output/'cases.h';model.header(target);self.assertEqual(target.read_bytes(),(ROOT/'source/squirrel-wave031/fixture_cases.h').read_bytes())

    def test_authored_units_remain_readable_bounded_c(self):
        for path in(ROOT/'source/squirrel-wave031').glob('*'):
            if path.suffix in('.c','.h'):
                text=path.read_text();self.assertLessEqual(len(text.splitlines()),500);self.assertNotIn('/*',text);self.assertNotIn('__asm',text)

    def compare(self,case):
        original,trace,heap=oracle.execute(self.image,self.arm,case,False);source,st,other=oracle.execute(self.image,self.arm,case,True)
        for row in(original,source):model.validate(row['words'],case)
        self.assertEqual(original,source);self.assertEqual(heap,other);self.assertFalse(st['sourceOriginalModuleMapped'])


if __name__=='__main__':unittest.main()
