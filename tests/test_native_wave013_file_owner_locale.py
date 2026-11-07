import ctypes
import sys
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import native_wave013_file_owner_locale_build as build
import native_wave013_file_owner_locale_runtime as runtime
import native_wave013_file_owner_locale_original as originals
from native_wave013_file_owner_locale_cases import cases
from native_wave013_file_owner_locale_platforms import layouts
from native_wave013_file_owner_locale_mutations import mutations
from native_wave013_common import WORK


class OwnerLocaleTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=WORK/'file-owner-locale-tests';cls.receipts=[]
        cls.source=build.arm(cls.folder/'source',cls.receipts)
        cls.original=originals.load()
        cls.library=ctypes.CDLL(str(build.windows(cls.folder/'windows',cls.receipts)))

    def exercise(self,regions,language,operation='selector'):
        spec={'regions':regions,'language':language,'operation':operation,'selection_input':0xffffffff}
        reference=runtime.execute(self.original,spec,seed=17,thumb=True,flags=15)
        actual=runtime.execute(self.source,spec,source=True,seed=17,thumb=True,flags=15)
        runtime.compare(actual,reference);runtime.native(self.library,spec,reference,seed=17)
        return reference

    def count(self,result):return int.from_bytes(result['after'][0x200:0x204],'little')
    def files(self,result):return list(result['after'][0x208:0x208+self.count(result)])

    def test_complete_instruction_ownership(self):
        self.assertEqual(sum(row['bytes'] for row in self.original['functions'][0x4c46e8]['instructionRanges']),544)
        self.assertEqual(sum(row['bytes'] for row in self.original['functions'][0x453b34]['instructionRanges']),224)

    def test_indexed_tables_are_only_data(self):
        tables=[row for row in self.original['readonlyData'] if 'indexed' in row['role']]
        self.assertEqual(sorted(row['bytes'] for row in tables),[28,28,28,44])
        for row in tables:
            for low,high in self.original['executableRanges']:
                self.assertFalse(max(low,row['start'])<min(high,row['start']+row['bytes']))

    def test_shared_getter_nop_is_not_duplicated(self):
        self.assertEqual(self.original['functions'][0x454388]['instructionRanges'][0]['bytes'],4)
        self.assertEqual(self.original['functions'][0x45438c]['instructionRanges'][0]['bytes'],28)

    def test_actual_native_service_layout(self):
        values=layouts(self.folder/'abi',self.receipts)
        self.assertEqual(values['targetArm32'][1],16)
        self.assertEqual(values['executedWindows64'][1],32)
        self.assertEqual(values['targetArm32'][6],44)
        self.assertEqual(values['executedWindows64'][6],48)

    def test_region_zero_file(self):self.assertEqual(self.files(self.exercise([0,0],0)),[0])
    def test_region_one_primary(self):self.assertEqual(self.files(self.exercise([1,1],1)),[1])
    def test_region_one_pair(self):self.assertEqual(self.files(self.exercise([1,1],2)),[2,1])
    def test_region_one_secondary_id(self):self.assertEqual(self.files(self.exercise([1,1],9)),[14,1])
    def test_region_two_pair(self):self.assertEqual(self.files(self.exercise([2,2],10)),[13,4])
    def test_region_four_file(self):self.assertEqual(self.files(self.exercise([4,4],6)),[11])
    def test_region_five_file(self):self.assertEqual(self.files(self.exercise([5,5],7)),[10])
    def test_stable_region_six_fallback(self):self.assertEqual(self.files(self.exercise([6,6],1)),[15])
    def test_synthetic_changed_region(self):self.assertEqual(self.files(self.exercise([6,1],1)),[16])

    def test_unsupported_region_keeps_all_ids(self):
        result=self.exercise([255,255],255)
        self.assertEqual(self.count(result),0)
        self.assertEqual(result['after'][0x208:0x210],bytes(range(0xa0,0xa8)))

    def test_policy_guarded_shift(self):
        for value in [31,32,34,255]:self.assertEqual(self.exercise([1,1],value,'policy')['result'],1)

    def test_policy_unknown_region_keeps_language(self):
        self.assertEqual(self.exercise([255,255],255,'policy')['result'],255)

    def test_actual_ipc_order_and_initial_count(self):
        result=self.exercise([1,1],2)
        self.assertEqual([row['header'] for row in result['serviceTrace']],[0x20000,0x10082,0x20000])
        self.assertEqual([row['watchedCount'] for row in result['serviceTrace']],[1,1,1])
        self.assertIn(0x454368,result['codePath'])
        self.assertIn(0x14e4c8,result['codePath'])

    def test_bounded_corpus_and_real_control_targets(self):
        self.assertEqual(len(cases()),7345)
        self.assertTrue(any(row['configurationScenario'].startswith('synthetic') for row in cases()))
        text=(ROOT/'src/native/wave013/pattern_file_owner_locale.c').read_text()
        self.assertEqual(len(mutations()),9)
        for name,before,after,specification in mutations():self.assertIn(before,text,name)


if __name__=='__main__':unittest.main()
