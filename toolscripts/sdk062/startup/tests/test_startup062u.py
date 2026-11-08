import sys
import unittest
from pathlib import Path
WORK=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(WORK))
from build062u import build
from proof062u import TaskSession
from clock_proof062u import ClockSession,MASK
from constructor_math_proof062u import constructors,divide
from clock_runtime062u import ClockRuntime
class StartupProofTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=WORK/'test-artifacts-v1/build'
        for target in ['arm','windows','a64']:build(cls.folder/target,target)
    def each(self,kind,method,*args):
        rows=[]
        for target in ['original','arm','windows','a64']:
            session=ClockSession(target,self.folder)if kind=='clock'else TaskSession(target,self.folder)
            try:rows.append(getattr(session,method)(*args))
            finally:session.close()
        return rows
    def test_task_constructor_copies_explicit_tag(self):self.each('task','initialize',0x103,255)
    def test_extended_constructor_preserves_unknown_caller_bytes(self):self.each('task','initialize',0x103,167,True)
    def test_constructor_alias_refcount_byte(self):self.each('task','initialize',3,167,False,'refs')
    def test_raw_state261_does_not_complete(self):self.each('task','transition',261,1,0)
    def test_completion_observes_five_then_changes_state(self):self.each('task','transition',5,1,1)
    def test_actual_base_virtual_dispatch(self):self.each('task','simple','sdk_task_dispatch062u')
    def test_signed_delay_minimum(self):self.each('task','simple','sdk_task_set_delay062u',-(1<<31))
    def test_cold_clock_first_value(self):
        for row in self.each('clock','run',{'real':False}):self.assertEqual(row['expectedOutput'],1)
    def test_original_svc28_actual_windows_counter_and_native_qpc(self):self.each('clock','run',{})
    def test_locking_nonmonotonic_clock(self):self.each('clock','run',{'real':False},'sdk_clock_locked062u')
    def test_monotonic_force_repairs_backwards_clock(self):
        for row in self.each('clock','run',{'backend':1,'initialized':1,'monotonic':1,'guard':1,'last':200},'sdk_clock_monotonic062u',1):self.assertEqual(row['expectedOutput'],201)
    def test_monotonic_no_force_enters_actual_locked_repair(self):self.each('clock','run',{'backend':1,'initialized':1,'monotonic':1,'guard':1,'last':200})
    def test_nonzero_guard_word_two_is_preserved(self):self.each('clock','run',{'backend':1,'initialized':1,'monotonic':1,'guard':2,'last':200})
    def test_clock_backend_observes_initialization_before_callback(self):
        for row in self.each('clock','run',{'backend':1}):self.assertEqual(row['callbackObservedInitialized'],1)
    def test_clock_backend_resets_initialized_after_published_flag(self):self.each('clock','run',{'backend':1,'change_initialized':1,'initialized_value':0})
    def test_unsigned_tick_multiply_wraps_before_division(self):self.each('clock','run',{'real':False,'tick':MASK},'sdk_clock_raw062u')
    def test_source_mutex_constructors_independent_whole_arenas(self):
        for target in ['original','arm','windows','a64']:self.assertEqual(len(constructors(target,self.folder)),12)
    def test_quotient_high_bit_carry_and_large_divisors(self):
        for target in ['original','arm','windows','a64']:
            r=ClockRuntime(target,self.folder)
            try:
                for n,d in [(MASK,MASK),(MASK,1<<63),(1<<63,(1<<63)+1),(MASK,268111856)]:self.assertEqual(divide(r,n,d),n//d)
            finally:r.close()

if __name__=='__main__':unittest.main()
