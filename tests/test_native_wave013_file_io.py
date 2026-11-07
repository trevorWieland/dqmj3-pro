import ctypes
import json
import sys
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import native_wave013_file_io_build as build
import native_wave013_file_io_service_build as service_build
import native_wave013_file_io_original as originals
import native_wave013_file_io_runtime as runtime
import native_wave013_file_io_native as native
import native_wave013_nfa_data as unicode_data
from native_wave013_file_io_platforms import layouts
from native_wave013_file_io_mutations import mutations
from native_wave013_common import WORK


class FileRuleTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=WORK/'file-io-tests'
        cls.receipts=[]
        cls.source=build.arm(cls.folder/'source',cls.receipts)
        services=service_build.arm(cls.folder/'services',cls.receipts)
        canonical=[row['canonicalOriginalAddress'] for row in cls.source['functions'].values()
            if row['canonicalOriginalAddress'] is not None]
        cls.original=originals.load(canonical,services)
        cls.data=unicode_data.load()
        cls.library=ctypes.CDLL(str(build.windows(cls.folder/'windows',cls.receipts)))
        cls.binding=unicode_data.bind_windows(cls.library,cls.data)

    def exercise(self,specification,seed=17):
        reference=runtime.execute(self.original,specification,self.data,seed=seed,thumb=True,flags=15)
        arm=runtime.execute(self.source,specification,self.data,source=True,seed=seed,thumb=True,flags=15)
        runtime.compare(arm,reference)
        portable=runtime.execute(self.source,{**specification,'portable_arm':True},self.data,
            source=True,seed=seed,thumb=True,flags=15)
        runtime.compare(portable,reference)
        native.execute(self.library,self.binding,specification,reference,seed=seed)
        native.canonical(self.library,self.binding,specification,reference,seed=seed)
        return reference

    def flags(self,result):
        count=len(result['layout']['specification']['candidates'])
        return [int.from_bytes(result['after'][0x4000+4*i:0x4004+4*i],'little') for i in range(count)]

    def metric(self,result,index):
        return int.from_bytes(result['after'][0x508+4*index:0x50c+4*index],'little')

    def test_complete_original_root_extent(self):
        root=self.original['functions'][0x4c4104]
        self.assertEqual(sum(row['endExclusive']-row['start'] for row in root['instructionRanges']),492)
        self.assertEqual(sum(row['endExclusive']-row['start'] for row in root['literalPoolRanges']),12)

    def test_measured_arm_and_native_views(self):
        result=layouts(self.folder/'abi',self.receipts)
        self.assertEqual(result['targetArm32'][1:5],[48,36,44,44])
        self.assertEqual(result['executedWindows64'][1:5],[64,40,56,56])

    def test_regular_rule(self):
        result=self.exercise({'file_units':[0xfeff,0x61,10],'candidates':['a','b']})
        self.assertEqual(result['result'],0)
        self.assertEqual(self.flags(result),[1,0])

    def test_wrong_bom_preserves_prior_at_sign_flags(self):
        result=self.exercise({'file_units':[0x61,0x62],'candidates':['@','b']})
        self.assertEqual(result['result'],0xf820ebf0)
        self.assertEqual(self.flags(result),[1,0])

    def test_null_candidate_stops_before_io(self):
        result=self.exercise({'file_units':[0xfeff,0x61,10],'candidates':['a',None]})
        self.assertEqual(result['result'],0xe0e0ebf6)
        self.assertEqual(self.metric(result,4),0)
        self.assertEqual(result['after'][0x24000:0x24004],b'a\x00\x00\x00')

    def test_at_sign_bypass(self):
        result=self.exercise({'file_bytes':[],'candidates':['@'],'bypass_at_sign':1})
        self.assertEqual(self.flags(result),[0])
        self.assertEqual(result['result'],0xd820ebec)

    def test_signed_high_bit_size_still_calls_read(self):
        result=self.exercise({'file_units':[0xfeff,0x61,10],'candidates':['a'],
            'advertised_size':0x80000000,'read_result':0,'copy_limit':0})
        self.assertEqual(result['result'],0xd820ebec)
        self.assertEqual(self.metric(result,5),1)
        self.assertEqual(self.metric(result,6),0x80000000)

    def test_positive_over_limit_size_rejects_before_read(self):
        result=self.exercise({'file_units':[0xfeff,0x61,10],'candidates':['a'],'advertised_size':0x4001})
        self.assertEqual(result['result'],0xd820ebec)
        self.assertEqual(self.metric(result,5),0)

    def test_short_read_keeps_actual_copied_bytes(self):
        result=self.exercise({'file_units':[0xfeff,0x61,10],'candidates':['a'],'read_result':3,'copy_limit':3})
        self.assertEqual(result['result'],0xd820ebec)
        self.assertEqual(result['after'][0x30000:0x30003],b'\xff\xfea')
        self.assertEqual(self.metric(result,7),3)

    def test_single_final_code_unit_is_skipped(self):
        result=self.exercise({'file_units':[0xfeff,0x61],'candidates':['a']})
        self.assertEqual(self.flags(result),[0])
        self.assertEqual(result['arenaIdentities'],[])

    def test_bom_only_applies_empty_rule(self):
        result=self.exercise({'file_units':[0xfeff],'candidates':['','a']})
        self.assertEqual(self.flags(result),[1,0])
        self.assertEqual(len(result['arenaIdentities']),1)

    def test_multiple_lines_reinitialize_arena(self):
        result=self.exercise({'file_units':[0xfeff,0x61,10,0x62,10],'candidates':['a','b','c']})
        self.assertEqual(self.flags(result),[1,1,0])
        self.assertEqual(len(result['arenaIdentities']),2)

    def test_nul_in_scanned_position_is_format_error(self):
        result=self.exercise({'file_units':[0xfeff,0x61,0,0x62],'candidates':['a']})
        self.assertEqual(result['result'],0xf820ebf0)

    def test_newline_double_advance_skips_nul_check(self):
        result=self.exercise({'file_units':[0xfeff,0x61,10,0,0x62],'candidates':['a','b']})
        self.assertEqual(result['result'],0)
        self.assertEqual(self.flags(result),[1,0])

    def test_candidate_raw_slots_do_not_widen(self):
        result=self.exercise({'file_units':[0xfeff,0x61,10],'candidates':['\uff21'*100,'b']})
        expected=b'A\x00'*63+b'\x00\x00'
        self.assertEqual(result['after'][0x24000:0x24080],expected)
        self.assertEqual(result['after'][0x24080:0x24084],b'b\x00\x00\x00')

    def test_sixteen_candidates(self):
        result=self.exercise({'file_units':[0xfeff,0x61,10],'candidates':['a']*16})
        self.assertEqual(self.flags(result),[1]*16)

    def test_zero_candidates_still_processes_stream(self):
        result=self.exercise({'file_units':[0xfeff,0x61,10],'candidates':[]})
        self.assertEqual(result['result'],0)
        self.assertEqual(self.metric(result,5),1)

    def test_high_and_invalid_flag_bits(self):
        high=self.exercise({'file_units':[0x61,0x62],'candidates':['@'],'bit_index':31})
        invalid=self.exercise({'file_units':[0x61,0x62],'candidates':['@'],'bit_index':32})
        self.assertEqual(self.flags(high),[0x80000000])
        self.assertEqual(self.flags(invalid),[0])

    def test_fixture_provider_is_genuine_source_service(self):
        self.assertEqual(self.original['serviceRole'],'controlled fixture byte stream; genuine C callbacks, no original executable helpers')
        self.assertEqual(set(self.original['serviceCallbacks']),{'size','read'})
        self.assertFalse(self.source['functions']['pattern_fixture_read']['canonicalOriginalAddress'])

    def test_returning_semantic_controls_are_bound_to_real_source(self):
        text=(ROOT/'src/native/wave013/pattern_file_rules.c').read_text()
        values=mutations()
        self.assertEqual(len(values),9)
        for name,before,after,specification in values:
            self.assertIn(before,text,name)
            self.assertNotEqual(before,after)


if __name__=='__main__':
    unittest.main()
