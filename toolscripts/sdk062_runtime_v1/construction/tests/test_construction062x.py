import json
from pathlib import Path
import sys
import unittest
WORK=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(WORK))
from build062x import build
from proof062x import program
from runtime062x import ConstructionRuntime
class ConstructionTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=WORK/'test-owned/build'
        for target in ['arm','windows','a64']:build(cls.folder/target,target)
    def check_case(self,case):
        for target in ['original','arm','windows','a64']:
            with self.subTest(profile=target):
                runtime=ConstructionRuntime(target,self.folder)
                try:program(runtime,case)
                finally:runtime.close()
    def test_empty_units(self):self.check_case(dict(name='length',units=[],null=False))
    def test_high_raw_units(self):self.check_case(dict(name='copy',units=[0xffff,0xd800,0x80],null=False))
    def test_overlap_left(self):self.check_case(dict(name='copy-overlap-left',units=[0x1234,0xffff],null=False))
    def test_self_copy(self):self.check_case(dict(name='copy-self',units=[0x41,0x42],null=False))
    def test_create_publishes_new_storage(self):self.check_case(dict(name='create',units=[0x1234],null=False))
    def test_null_creation(self):self.check_case(dict(name='create',units=[],null=True))
    def test_custom_disposal_observes_identity(self):self.check_case(dict(name='roundtrip',units=[0xffff],null=False))
    def test_binding_constructor(self):self.check_case(dict(name='constructor',units=[0x41],null=False))
    def test_actual_initialized_startup(self):self.check_case(dict(name='constructor-start',units=[0x41,0xffff],null=False))
    def test_null_binding_name(self):self.check_case(dict(name='constructor-start',units=[],null=True))
    def test_list_sentinel_and_pool(self):self.check_case(dict(name='list-initialize',units=[],null=False,seed=0xff))
    def test_no_comments_or_large_authored_c(self):
        for source in(WORK/'source').glob('*.[ch]'):
            text=source.read_text(encoding='utf-8');self.assertLessEqual(len(text.splitlines()),500);self.assertNotIn('/*',text);self.assertNotIn('//',text)
if __name__=='__main__':unittest.main()
