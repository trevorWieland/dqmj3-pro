import ctypes
import sys
import unittest
import uuid
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import squirrel_state040_build as build
import squirrel_state040_model as model
from squirrel_state040_native import execute,finish
from squirrel_state040_a64 import execute as a64


@unittest.skipUnless(sys.platform=='win32','Actual Windows DLL execution requires the measured Windows host')
class StartupConstructor040Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=ROOT/'work/squirrel-state040/tests'/uuid.uuid4().hex
        receipts=[];cls.arm=build.arm(cls.folder/'arm',receipts)
        cls.a64=build.a64(cls.folder/'a64',receipts)
        cls.library=ctypes.CDLL(str(build.windows(cls.folder/'windows',receipts)))
        cls.shared=execute(cls.library,'fn_0014c4c8',401,True)
        cls.vm=execute(cls.library,'fn_0015467c',402,True)

    def test_actual034_chain_keeps_constructor_name_and_meta_indices(self):
        a=model.native_abi(self.library)
        self.assertEqual((a['pointerBytes'],a['sharedBytes'],a['constructorName'],a['metaValue']),(8,448,280,296))
        self.assertEqual((a['references'],a['strings'],a['metaType']),(336,328,416))

    def test_real_collectable_prefix_precedes_native_stack(self):
        a=model.native_abi(self.library)
        self.assertEqual((a['vmBytes'],a['prefixBytes'],a['vmUnwritten'],a['stack'],a['shared']),(264,40,40,48,232))

    def test_compiled_target_storage_matches_original_allocations(self):
        a=model.abi(self.arm)
        self.assertEqual((a['sharedBytes'],a['vmBytes'],a['blockBytes']),(180,168,80))
        self.assertEqual((a['chain'],a['stack'],a['shared']),(68,24,140))

    def test_native_reference_slots_have_real_widened_links(self):
        value=self.shared
        self.assertTrue(value['actualWidenedPointers'])
        self.assertEqual(value['allocations'][0]['bytes'],160)
        self.assertTrue(all(row['nextCorrect'] for row in value['state']['nodes']))
        self.assertTrue(value['state']['references']['freeCorrect'])

    def test_gc_old_head_backlink_is_caller_observed(self):
        self.assertEqual(self.vm['state']['oldHeadPrevious'],'vm')
        self.assertEqual(self.vm['state']['chainRole'],'vm')
        self.assertEqual(self.vm['state']['nextRole'],'head')

    def test_a64_constructors_match_actual_windows_fields(self):
        for name,value,seed in [('fn_0014c4c8',self.shared,401),('fn_0015467c',self.vm,402)]:
            other=a64(self.a64,name,seed,True,15)
            self.assertEqual(other['state'],value['state'])
            self.assertTrue(other['actualWidenedPointers'])
            self.assertTrue(other['lowD8Through15AndX18Through29Preserved'])

    def test_unwritten_shared_pointer_change_is_rejected(self):
        value=self.shared;changed=bytearray(value['after']);changed[model.SHARED]^=1
        with self.assertRaisesRegex(RuntimeError,'unwritten'):
            finish('fn_0014c4c8',value['layout']['base']+model.SHARED,bytes(changed),value['layout'])

    def test_outside_caller_byte_change_is_rejected(self):
        value=self.vm;changed=bytearray(value['after']);changed[0]^=1
        with self.assertRaisesRegex(RuntimeError,'unwritten'):
            finish('fn_0015467c',value['layout']['base']+model.VM,bytes(changed),value['layout'])

    def test_wrong_return_does_not_overclaim_guard_failure(self):
        value=self.vm;result=finish('fn_0015467c',0,value['after'],value['layout'])
        self.assertFalse(result['returnedSelf']);self.assertTrue(result['returnedNormally'])
        self.assertTrue(result['immutableMemoryPreserved'])

    def test_overflowed_event_count_is_rejected_without_clipping(self):
        value=self.shared;state=value['layout'];changed=bytearray(value['after'])
        at=model.CONTEXT+state['abi']['heapAllocations'];changed[at:at+4]=(17).to_bytes(4,'little')
        with self.assertRaisesRegex(ValueError,'event count'):model.verified_allocations(changed,state)

    def test_outside_allocation_pointer_is_rejected(self):
        value=self.shared;state=value['layout'];a=state['abi'];changed=bytearray(value['after'])
        at=model.CONTEXT+a['heapEntries'];changed[at:at+8]=(state['base']+model.SIZE).to_bytes(8,'little')
        with self.assertRaisesRegex(ValueError,'backing object'):model.verified_allocations(changed,state)

    def test_inconsistent_allocation_cursor_is_rejected(self):
        value=self.shared;state=value['layout'];changed=bytearray(value['after'])
        at=model.CONTEXT+state['abi']['heapUsed'];changed[at:at+4]=bytes(4)
        with self.assertRaisesRegex(ValueError,'cursor'):model.verified_allocations(changed,state)


if __name__=='__main__':unittest.main()
