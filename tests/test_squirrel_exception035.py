import json
import sys
import unittest
from pathlib import Path
from datetime import datetime

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import squirrel_exception035_build as builder
import squirrel_exception035_model as model
import squirrel_exception035_oracle as oracle
import squirrel_exception035_android as android
from squirrel_source_wave002 import sha


class Exception035Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.output=ROOT/'work/squirrel-exception035'/('tests-'+datetime.now().strftime('%Y%m%d-%H%M%S-%f'))
        cls.arm=builder.arm(cls.output/'arm');cls.windows=builder.native(cls.output/'windows');cls.a64=builder.android_model(cls.output/'android')
        cls.case=dict(mode=76,value=3,flags=0,cleanup=1)
        cls.source,cls.trace,cls.raw=oracle.execute(b'',cls.arm,cls.case,True)
        cls.portable,cls.portable_trace,unused=android.execute(cls.a64,cls.case)

    def test_address_guard_exact_union_and_gaps(self):
        ranges=[(5,10),(10,14),(3,6),(20,25),(21,22),(27,27)]
        guard=oracle.address_guard(ranges)
        for address in range(30):self.assertEqual(guard(address),any(start<=address<end for start,end in ranges))

    def test_frozen031_receipt_and_every_pin(self):
        path=ROOT/'evidence/lanes/squirrel-execute031/ready.json'
        self.assertEqual(sha(path.read_bytes()),'97e26b14a4a6d1a3ee61b04826787dcf827e3f334d7860e259972d5905082041')
        for row in json.loads(path.read_text())['files']:
            self.assertEqual(sha((ROOT/row['path']).read_bytes()),row['sha256'])

    def test_fresh_native_corpus_and_typed_models(self):
        rows=self.windows['observations'];self.assertEqual([{key:r[key]for key in('mode','value','flags','cleanup')}for r in rows],model.cases())
        for row in rows:model.validate(row['words'],{key:row[key]for key in('mode','value','flags','cleanup')})

    def test_actual_source_only_arm_and_high_pointer_a64(self):
        model.validate(self.source['words'],self.case);model.validate(self.portable['words'],self.case)
        self.assertEqual(model.normalized(self.source['words']),model.normalized(self.portable['words']))
        self.assertFalse(self.trace['sourceOriginalModuleMapped']);self.assertTrue(self.portable_trace['highPointersAbove32Bits'])

    def test_true_windows_native_observations(self):
        row=next(r for r in self.windows['observations']if all(r[k]==v for k,v in self.case.items()))
        self.assertEqual(model.normalized(self.source['words']),model.normalized(row['words']))

    def test_model_rejects_return_status_corruption(self):
        bad=list(self.source['words']);bad[1]=1
        with self.assertRaises(ValueError):model.validate(bad,self.case)

    def test_model_rejects_trap_capacity_corruption(self):
        bad=list(self.source['words']);before,unused,unused2=model.split(bad);bad[len(before)+2]=1
        with self.assertRaises(ValueError):model.validate(bad,self.case)

    def test_exact_original_path_and_raw_arena(self):
        image_path=ROOT/'generated/update-content0/code.bin'
        if not image_path.exists():self.skipTest('Local original module is required for private comparison')
        original,trace,raw=oracle.execute(image_path.read_bytes(),self.arm,self.case,False)
        self.assertEqual(original['words'],self.source['words']);self.assertFalse(trace['nativeInactiveFieldReadPcs'])
        frame=0xc000+48;allowed={frame+offset+byte for offset in(0,4,32,40)for byte in range(4)}
        self.assertFalse({i for i,(a,b)in enumerate(zip(raw,self.raw))if a!=b}-allowed)

    def test_forbidden_native_frame_observer_is_detected(self):
        image_path=ROOT/'generated/update-content0/code.bin'
        if not image_path.exists():self.skipTest('Local original module is required for the reference observer negative')
        component=builder.arm(self.output/'observer-negative','observe_inactive_frame')
        case=dict(mode=73,value=17,flags=0,cleanup=0)
        row,trace,unused=oracle.execute(image_path.read_bytes(),component,case,False)
        model.validate(row['words'],case);self.assertTrue(trace['nativeInactiveFieldReadPcs'])

    def test_invalid_case_domain_rejected(self):
        with self.assertRaises(ValueError):model.validate_case(dict(mode=73,value=17,flags=65535,cleanup=0))


if __name__=='__main__':unittest.main()
