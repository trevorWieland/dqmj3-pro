from pathlib import Path
import sys
import unittest
WORK=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(WORK))
from build062v import build
from runtime062v import BindingRuntime
from proof062v import program,policy
from unicorn import UcError

class BindingTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=WORK/'test-owned/build'
        for target in ['arm','windows','a64']:build(cls.folder/target,target)
    def check(self,name,state=0,count=0,requested=0,null=False):
        for target in ['original','arm','windows','a64']:
            r=BindingRuntime(target,self.folder)
            try:program(r,dict(name=name,state=state,count=count,requested=requested,null=null))
            finally:r.close()
    def test_measured_target_and_native_layouts(self):
        for target in ['arm','windows','a64']:
            r=BindingRuntime(target,self.folder)
            try:self.assertEqual(r.binding_layout[5:7],(20,24)if target=='arm'else(32,36))
            finally:r.close()
    def test_active_four_and_eight(self):
        for state in [4,8,0,128,0xffff]:self.check('sdk_binding_active062v',state)
    def test_raw_u32_request_is_not_truncated(self):
        for request in [0x10080,0x10004,0xffffffff]:self.check('sdk_binding_can_transition062v',0,0,request)
    def test_unconditional_requests_admit_null(self):
        for request in [128,256]:self.check('sdk_binding_can_transition062v',requested=request,null=True)
    def test_terminal_states_allow_unrecognized_requests(self):
        for state in [128,256]:self.check('sdk_binding_can_transition062v',state,0,0xffffffff)
    def test_dependent_count_uses_all_u32_bits(self):
        for count in [0,1,0x80000000,0xffffffff]:self.check('sdk_binding_can_transition062v',32,count,16)
    def test_real_virtual_constructor_flow_and_wrap(self):
        for state in [4,8,1]:self.check('fixture_binding_route062v',state,0xffffffff)
    def test_notification_is_read_only_and_admits_null(self):
        self.check('sdk_binding_notify062v',4,5);self.check('sdk_binding_notify062v',null=True)
    def test_null_for_nonterminal_request_faults_original_only(self):
        r=BindingRuntime('original',self.folder)
        try:
            with self.assertRaises(UcError):r.invoke('sdk_binding_can_transition062v',[0,0])
        finally:r.close()
    def test_independent_edge_matrix(self):
        expected={1:{2,16,64,128,256},2:{4,128,256},4:{8,16,128,256},8:{4,32,128,256},16:{64,128,256},32:{16,128,256},64:{1,2,128,256}}
        for state,targets in expected.items():
            for request in [0,1,2,4,8,16,32,64,128,256]:self.assertEqual(policy(state,request,0),int(request in targets))
if __name__=='__main__':unittest.main(verbosity=2)
