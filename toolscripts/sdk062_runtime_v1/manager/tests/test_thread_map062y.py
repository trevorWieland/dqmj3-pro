from pathlib import Path
import sys
import unittest
WORK=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(WORK))
from build062y import build
from runtime062y import ThreadMapRuntime
from proof062y import selector_program,thread_program
class ThreadMapTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=WORK/'test-owned/build'
        for target in ['arm','windows','a64']:build(cls.folder/target,target)
    def selector(self,keys,multi=0):
        for target in ['original','arm','windows','a64']:
            with self.subTest(profile=target):
                r=ThreadMapRuntime(target,self.folder)
                try:selector_program(r,'fresh-test',keys,multi)
                finally:r.close()
    def thread(self,index,recursive=0,disabled=0,initial=False):
        for target in ['original','arm','windows','a64']:
            with self.subTest(profile=target):
                r=ThreadMapRuntime(target,self.folder)
                try:thread_program(r,index,recursive,disabled,initial)
                finally:r.close()
    def test_existing_alias(self):self.selector([7,7])
    def test_unsigned_keys(self):self.selector([0xffffffff,0,0x80000000,0x7fffffff])
    def test_rotations(self):self.selector([5,2,9,1,3,7,11,4,6,8])
    def test_pool_growth(self):self.selector(list(range(40)))
    def test_duplicate_insertions(self):self.selector([7,7,7],1)
    def test_noncanonical_flag(self):self.selector([7,7],128)
    def test_first_miss_then_hit(self):self.thread(1)
    def test_high_index_bits(self):self.thread(0x80000000)
    def test_recursive_owner(self):self.thread(0xffffffff,recursive=1)
    def test_disabled_locking(self):self.thread(1,recursive=1,disabled=128)
    def test_existing_value_preserved(self):self.thread(1,initial=True)
    def test_deep_miss_and_growth(self):self.thread(0xffffffff,initial='growth-miss')
    def test_deep_existing_value(self):self.thread(0x80000000,recursive=1,initial='deep-hit')
    def test_lower_bound_fallback(self):self.thread(1,initial='sandwich')
    def test_source_standards(self):
        for p in(WORK/'source').glob('*.[ch]'):
            t=p.read_text();self.assertLessEqual(len(t.splitlines()),500);self.assertNotIn('/*',t);self.assertNotIn('//',t)
if __name__=='__main__':unittest.main()
