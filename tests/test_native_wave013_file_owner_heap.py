import ctypes
import sys
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import native_wave013_file_owner_heap_build as build
import native_wave013_file_owner_heap_runtime as runtime
import native_wave013_file_owner_heap_model as model
from native_wave013_file_owner_heap_cases import cases
from native_wave013_file_owner_heap_platforms import layouts
from native_wave013_file_owner_heap_mutations import mutations
from native_wave013_nfa_original import load
from native_wave013_common import WORK


class OwnerHeapTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=WORK/'file-owner-heap-tests'
        cls.receipts=[]
        cls.source=build.arm(cls.folder/'source',cls.receipts)
        cls.original=load([0x14e0a8,0x15e1b0,0x170704,0x1707b4])
        cls.library=ctypes.CDLL(str(build.windows(cls.folder/'windows',cls.receipts)))

    def exercise(self,specification,seed=11):
        reference=runtime.execute(self.original,specification,seed=seed,thumb=True,flags=15)
        actual=runtime.execute(self.source,specification,source=True,seed=seed,thumb=True,flags=15)
        runtime.compare(actual,reference)
        runtime.native(self.library,specification,reference,seed=seed)
        return reference

    def field(self,result,name):
        row=next(item for item in result['layout']['fields'] if item['name']==name)
        return int.from_bytes(result['after'][row['offset']:row['offset']+row['size']],'little')

    def test_complete_claimed_bodies(self):
        for address,size in [(0x14e0a8,432),(0x15e1b0,104)]:
            self.assertEqual(sum(row['bytes'] for row in self.original['functions'][address]['instructionRanges']),size)

    def test_actual_compiler_native_layouts(self):
        result=layouts(self.folder/'abi',self.receipts)
        self.assertEqual(result['targetArm32'][1],20)
        self.assertEqual(result['executedWindows64'][1],32)
        self.assertEqual(result['targetArm32'][11],24)
        self.assertEqual(result['executedWindows64'][11],48)

    def test_empty_heap_allocation(self):
        result=self.exercise({'operations':[{'kind':'allocate','slot':0,'bytes':32}]})
        self.assertEqual(result['results'],[result['layout']['base']+0x4100])
        self.assertEqual(self.field(result,'block.0.bytes'),32)

    def test_empty_heap_ignores_margin(self):
        result=self.exercise({'operations':[{'kind':'allocate','slot':0,'bytes':32,'margin':64}]})
        self.assertEqual(result['results'],[result['layout']['base']+0x4100])

    def test_zero_byte_allocation_is_preserved(self):
        result=self.exercise({'capacity':0,'operations':[{'kind':'allocate','slot':0,'bytes':0}]})
        self.assertEqual(result['results'],[result['layout']['base']+0x4100])

    def test_empty_heap_failure_preserves_block(self):
        result=self.exercise({'capacity':16,'operations':[{'kind':'allocate','slot':0,'bytes':32}]})
        self.assertEqual(result['results'],[0])
        self.assertEqual(self.field(result,'block.0.bytes'),0xbad000)

    def test_exact_fit_after_existing_block(self):
        result=self.exercise({'capacity':64,'blocks':[{'slot':0,'offset':0,'bytes':32}],
            'operations':[{'kind':'allocate','slot':1,'bytes':32}]})
        self.assertEqual(result['results'],[result['layout']['base']+0x4120])

    def test_selected_gap_applies_margin(self):
        result=self.exercise({'capacity':128,'blocks':[{'slot':0,'offset':0,'bytes':16}],
            'operations':[{'kind':'allocate','slot':1,'bytes':16,'margin':8}]})
        self.assertEqual(result['results'],[result['layout']['base']+0x4118])

    def test_fallback_replaces_low_anchor(self):
        result=self.exercise({'capacity':256,'blocks':[{'slot':0,'offset':64,'bytes':32},{'slot':1,'offset':128,'bytes':128}],
            'operations':[{'kind':'allocate','slot':2,'bytes':48}]})
        self.assertEqual(self.field(result,'heap.anchor'),result['layout']['base']+0x1000+2*20)

    def test_free_single_block_clears_ring(self):
        result=self.exercise({'blocks':[{'slot':0,'offset':0,'bytes':16}],'operations':[{'kind':'free','slot':0}]})
        self.assertEqual(self.field(result,'heap.anchor'),0)
        for field in ['next','previous','data','bytes']:self.assertEqual(self.field(result,'block.0.'+field),0)

    def test_free_anchor_selects_previous(self):
        result=self.exercise({'capacity':256,'blocks':[{'slot':0,'offset':0,'bytes':16},{'slot':1,'offset':64,'bytes':16},{'slot':2,'offset':128,'bytes':16}],
            'operations':[{'kind':'free','slot':0}]})
        self.assertEqual(self.field(result,'heap.anchor'),result['layout']['base']+0x1000+20)

    def test_unknown_flag_survives_allocate_and_free(self):
        result=self.exercise({'operations':[{'kind':'allocate','slot':0,'bytes':16},{'kind':'free','slot':0}]})
        self.assertEqual(self.field(result,'block.0.flag'),0xa0)

    def test_free_reuse(self):
        result=self.exercise({'operations':[{'kind':'allocate','slot':0,'bytes':16},{'kind':'free','slot':0},
            {'kind':'allocate','slot':0,'bytes':128}]})
        self.assertEqual(result['results'][0],result['results'][2])
        self.assertEqual(self.field(result,'block.0.bytes'),128)

    def test_actual_original_mutex_fast_paths_execute(self):
        result=self.exercise({'depth':2,'operations':[{'kind':'allocate','slot':0,'bytes':16}]})
        self.assertIn(0x17070c,result['codePath'])
        self.assertIn(0x1707bc,result['codePath'])
        self.assertEqual(result['threadQueries'],1)
        self.assertEqual(self.field(result,'mutex.depth'),2)

    def test_u32_gap_underflow_is_metadata_only(self):
        result=self.exercise({'capacity':256,'blocks':[{'slot':0,'offset':64,'bytes':16},{'slot':1,'offset':128,'bytes':128}],
            'operations':[{'kind':'allocate','slot':2,'bytes':256,'margin':64}]})
        start=result['results'][0]
        self.assertGreater(start+256,self.field(result,'heap.end'))
        low,high=result['layout']['initializedBackingRange']
        self.assertTrue(low<=start<start+256<=high)

    def test_backing_object_bounds_reject_unsupported_arithmetic(self):
        callbacks={'thread':0,'acquire':0,'release':0}
        with self.assertRaises(ValueError):model.encode({'operations':[{'kind':'allocate','slot':0,'bytes':10000}]},0x3000000,4,1,callbacks)
        with self.assertRaises(ValueError):model.encode({'operations':[{'kind':'allocate','slot':0,'bytes':16,'margin':65}]},0x3000000,4,1,callbacks)

    def test_finite_corpus_shape(self):
        self.assertEqual(len(cases()),617)
        self.assertTrue(any(len(row['operations'])==32 for row in cases()))

    def test_wrong_source_targets_remain_real(self):
        text=(ROOT/'src/native/wave013/pattern_file_owner_heap.c').read_text()
        self.assertEqual(len(mutations()),9)
        for name,before,after,specification in mutations():
            self.assertIn(before,text,name)
            self.assertNotEqual(before,after)


if __name__=='__main__':
    unittest.main()
