from pathlib import Path
import sys
import unittest
WORK=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(WORK))
from build062aa import build
from runtime062aa import TimerRuntime
from proof062aa import program,endpoint,MASK
A=endpoint(0x01020304,1000,1);B=endpoint(0x11111111,2000,2)
class TimerTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=WORK/'test-owned/build'
        for target in ['arm','windows','a64']:build(cls.folder/target,target)
    def check_program(self,timeout,raw,operations,initialized=1):
        for target in ['original','arm','windows','a64']:
            with self.subTest(profile=target):
                r=TimerRuntime(target,self.folder)
                try:program(r,timeout,raw,operations,initialized)
                finally:r.close()
    def test_constructor_raw_timeout(self):self.check_program(0x80000100,1,[])
    def test_zero_remote_rejection(self):self.check_program(1000,0,[('set',A,endpoint(0,3),1)])
    def test_self_pair_rejection(self):self.check_program(1000,0,[('set',A,A,1)])
    def test_noncanonical_replace(self):self.check_program(1000,0,[('set',A,B,0),('set',A,endpoint(7,8),0x80000000)])
    def test_signed_comparator(self):self.check_program(1000,0,[('set',endpoint(ip,1),B,1)for ip in [0x80000000,0x7fffffff,0,0xffffffff]])
    def test_full_unsigned_port(self):self.check_program(1000,0,[('set',endpoint(7,port),B,1)for port in [0xffff,0,0x8000,0x7fff]])
    def test_expiry_boundary(self):self.check_program(1000,0,[('set',A,B,1),('tick',999),('tick',1000)])
    def test_low32_clock_wrap(self):self.check_program(0x80000000,1000,[('set',A,B,1),('tick',999)])
    def test_high32_clock_ignored_for_elapsed(self):self.check_program(1000,0,[('set',A,B,1),('tick',1<<32)])
    def test_first_clock_initialization(self):self.check_program(1,MASK,[('set',A,B,1),('tick',1000)],0)
    def test_actual_pool_and_free_reuse(self):self.check_program(1000,0,[('set',endpoint(i+1,i),B,1)for i in range(35)]+[('tick',1000),('set',A,B,1)])
    def test_source_standards(self):
        for p in(WORK/'source').glob('*.[ch]'):
            t=p.read_text();self.assertLessEqual(len(t.splitlines()),500);self.assertNotIn('/*',t);self.assertNotIn('//',t)
if __name__=='__main__':unittest.main()
