from pathlib import Path
import sys
import unittest
WORK=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(WORK))
from build062z import build
from runtime062z import EraseRuntime
from proof062z import program
class TreeEraseTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=WORK/'test-owned/build'
        for target in ['arm','windows','a64']:build(cls.folder/target,target)
    def check_program(self,keys,operations):
        for target in ['original','arm','windows','a64']:
            with self.subTest(profile=target):
                r=EraseRuntime(target,self.folder)
                try:program(r,keys,operations)
                finally:r.close()
    def test_end_noop(self):self.check_program([],[('erase',None)])
    def test_singleton(self):self.check_program([7],[('erase',7),('erase',None)])
    def test_original_null_child_coloring(self):self.check_program([0,1,2,3],[('erase',0)])
    def test_two_child_color_swap(self):self.check_program([2,1,3],[('erase',2)])
    def test_minimum_and_maximum(self):self.check_program(list(range(8)),[('erase',0),('erase',7),('erase',1)])
    def test_full_forward_history(self):self.check_program(list(range(15)),[('erase',k)for k in range(15)])
    def test_full_reverse_history(self):self.check_program(list(range(15)),[('erase',k)for k in reversed(range(15))])
    def test_real_free_list_reuse(self):self.check_program([0,1,2],[('erase',0),('erase',1),('insert',10),('insert',11),('erase',10)])
    def test_unsigned_boundary_payload(self):self.check_program([0,0xffffffff,0x80000000],[('erase',0x80000000)])
    def test_source_standards(self):
        for p in(WORK/'source').glob('*.[ch]'):
            t=p.read_text();self.assertLessEqual(len(t.splitlines()),500);self.assertNotIn('/*',t);self.assertNotIn('//',t)
if __name__=='__main__':unittest.main()
