from pathlib import Path
import sys
import unittest
WORK=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(WORK))
from build062w import build
from runtime062w import BindingStartRuntime
from proof062w import program

class StartTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=WORK/'test-owned/build'
        for target in ['arm','windows','a64']:build(cls.folder/target,target)
    def check(self,name,state=0,count=0,null=False):
        for target in ['original','arm','windows','a64']:
            r=BindingStartRuntime(target,self.folder)
            try:program(r,dict(name=name,state=state,count=count,null=null))
            finally:r.close()
    def test_distinct_prefix_and_extra_storage(self):
        for target in ['arm','windows','a64']:
            r=BindingStartRuntime(target,self.folder)
            try:self.assertEqual(r.binding_layout[1:4],(28,32,28)if target=='arm'else(40,48,40))
            finally:r.close()
    def test_actual_base_initial_states_reach_four(self):
        for state in [1,2,64]:self.check('sdk_binding_start062w',state)
    def test_already_active_states_preserved(self):
        for state in [4,8]:self.check('sdk_binding_start062w',state)
    def test_unknown_u16_states_preserved(self):
        for state in [0,3,32,128,256,0x8000,0xffff]:self.check('sdk_binding_start062w',state)
    def test_no_dependent_count_mutation(self):
        for count in [0,1,0x80000000,0xffffffff]:self.check('sdk_binding_start062w',1,count)
    def test_query_calls_actual_state_provider(self):
        self.check('sdk_binding_query062w',0xff80,9)
    def test_getter_returns_unsigned_sixteen_bits(self):
        self.check('sdk_binding_state062w',0xffff,0xffffffff)
    def test_true_start_provider_admits_null(self):self.check('sdk_binding_start_ready062w',null=True)
    def test_true_poll_provider_admits_null(self):self.check('sdk_binding_poll_ready062w',null=True)
    def test_observed_virtual_call_order(self):
        for state in [1,2,64]:self.check('sdk_binding_start062w',state,5)
if __name__=='__main__':unittest.main(verbosity=2)
