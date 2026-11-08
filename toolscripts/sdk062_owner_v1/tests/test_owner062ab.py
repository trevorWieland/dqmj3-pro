import json
import os
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest
W=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(W))
from build062ab import build
from runtime062ab import ConfigRuntime
from owner_proof062ab import program

class OwnerTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        parent=Path(os.environ.get('SDK062AB_TEST_OUTPUT',str(W/'tests-output')));parent.mkdir(parents=True,exist_ok=True)
        cls.temporary=tempfile.TemporaryDirectory(dir=parent);cls.output=Path(cls.temporary.name)
        for target in ['arm','windows','a64']:build(cls.output/'build'/target,target)
    @classmethod
    def tearDownClass(cls):cls.temporary.cleanup()
    def check(self,target,**kwargs):
        runtime=ConfigRuntime(target,self.output/'build')
        try:return program(runtime,**kwargs)
        finally:runtime.close()
    def test_actual_target_constructor(self):self.assertTrue(self.check('original')['fullIndependentArenaEqual'])
    def test_arm_owner_timer_and_pair_growth(self):self.assertEqual(len(self.check('arm',keys=list(range(80)),timer_steps=40,destroy=True)['insertions']),80)
    def test_native_windows_high_pointers(self):self.assertGreater(self.check('windows')['actualNativeBase'],0xffffffff)
    def test_native_a64_high_pointers(self):self.assertGreater(self.check('a64')['actualNativeBase'],0xffffffff)
    def test_real_deleting_wrapper_original(self):self.assertEqual(len(self.check('original',destroy=True,deleting=True)['disposalBlocks']),7)
    def test_real_deleting_wrapper_windows(self):self.assertEqual(len(self.check('windows',destroy=True,deleting=True)['disposalBlocks']),7)
    def test_pool_advance_observation(self):
        r=self.check('a64',keys=list(range(70)),timer_steps=40,destroy=True)
        self.assertEqual(r['poolAdvanceObservations'][-1],[0,0,0]);self.assertGreater(len(r['disposalBlocks']),6)
    def test_exact_native_layout(self):
        r=ConfigRuntime('windows',self.output/'build')
        try:self.assertEqual(r.owner_layout,(8,296,120,80,8,16,64,112,128,200,272,280,288))
        finally:r.close()
    def test_caught_sibling_read_is_terminal(self):
        root=self.output/'synthetic-root';sibling=root/'work/sibling/receipt.json';sibling.parent.mkdir(parents=True);sibling.write_text('{}')
        code='from pathlib import Path;import guard062ab as g;root=Path(sys.argv[1]);a,b,rejected=g.audited(root,root/"work/current",set())\ntry:(root/"work/sibling/receipt.json").read_bytes()\nexcept ValueError:pass\ng.require_clean(rejected)'
        child=subprocess.run([sys.executable,'-I','-B','-c','import sys;sys.pycache_prefix=sys.argv[1]+"/unwritten-bytecode";sys.path.insert(0,sys.argv[2]);'+code,str(root),str(W)],capture_output=True,text=True)
        self.assertNotEqual(child.returncode,0);self.assertIn('remains terminal',child.stderr)
    def test_exact_declared_input_is_allowed(self):
        root=self.output/'synthetic-allowed';p=root/'work/pinned/source.c';p.parent.mkdir(parents=True);p.write_text('int x;')
        code='from pathlib import Path;import guard062ab as g;root=Path(sys.argv[1]);p=root/"work/pinned/source.c";a,b,rejected=g.audited(root,root/"work/current",{p});assert p.read_text()=="int x;";g.require_clean(rejected)'
        child=subprocess.run([sys.executable,'-I','-B','-c','import sys;sys.pycache_prefix=sys.argv[1]+"/unwritten-bytecode";sys.path.insert(0,sys.argv[2]);'+code,str(root),str(W)],capture_output=True,text=True)
        self.assertEqual(child.returncode,0,child.stderr)
if __name__=='__main__':unittest.main()
