import sys
import unittest
from pathlib import Path
WORK=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(WORK))
from build062t import build
from proof062t import Session

class ObjectProofTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=WORK/'test-artifacts-v1/build'
        for target in ['arm','windows','a64']:build(cls.folder/target,target)
    def each(self,method,*args):
        rows=[]
        for target in ['original','arm','windows','a64']:
            session=Session(target,self.folder)
            try:rows.append(getattr(session,method)(*args))
            finally:session.close()
        return rows
    def test_real_nonnull_sdk_result(self):
        for row in self.each('operation',{}):self.assertEqual(row['expectedSuccess'],1)
    def test_first_null_is_admitted_by_original_conditional_flags(self):
        for row in self.each('operation',dict(first=0)):self.assertEqual(row['expectedSuccess'],1)
    def test_second_null_fails(self):
        for row in self.each('operation',dict(second=0)):self.assertEqual(row['expectedSuccess'],0)
    def test_actual_connection_state_four_fails_ready(self):
        self.each('queries',dict(connection_state=4))
    def test_proxy_without_underlying(self):
        self.each('queries',dict(underlying=0))
    def test_wrapper_without_current(self):
        self.each('queries',dict(current_empty=1))
    def test_noncanonical_disable_byte(self):
        self.each('queries',dict(disabled=255))
    def test_nullable_replacement(self):self.each('replacement',{},0)
    def test_aliasing_two_real_reference_owners(self):self.each('replacement',dict(current_same=1,address_same=1),1)
    def test_empty_reference_owners(self):self.each('replacement',dict(current_empty=1,address_empty=1),1)
    def test_callback_sees_published_cleared_fields_then_changes_live_state(self):
        for row in self.each('setter',1,2,1,1,4):self.assertEqual((row['liveReady'],row['liveClosed']),(0,1))
    def test_raw_word_258_does_not_trigger_canonical_two_side_effects(self):self.each('setter',1,258,1,1,0)
    def test_no_callback_preserves_callback_owner(self):self.each('setter',3,0,0,1,0)
    def test_holder_null_never_enters_sdk(self):
        for row in self.each('operation',dict(holder=0),'sdk_holder_ready062t'):self.assertEqual(row['expectedSuccess'],0)
    def test_result_sign_and_zero(self):
        for value in [0,0x7fffffff,0x80000000,0xffffffff]:self.each('predicate',value)
    def test_invalid_u32_input_rejected_before_source_call(self):
        session=Session('arm',self.folder)
        try:
            for value in [-1,0x100000000,True,float('nan')]:
                with self.assertRaises(ValueError):session.setter(1,value,1,1,0)
        finally:session.close()

if __name__=='__main__':unittest.main()
