import ctypes
import json
import sys
import unittest
from pathlib import Path


ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import native_wave013_dfa as wave
import native_wave013_dfa_layout as model


class PatternDfaTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.work=wave.WORK/'dfa-tests'
        cls.receipts=[]
        cls.source=wave.build_tools.arm(cls.work/'source',cls.receipts)
        cls.original=wave.originals.load([row['canonicalOriginalAddress'] for row in cls.source['functions'].values()
                                        if row['canonicalOriginalAddress'] is not None])
        cls.library=ctypes.CDLL(str(wave.build_tools.windows(cls.work/'windows',cls.receipts)))
        cls.data=wave.services.load()
        cls.binding=wave.services.bind_windows(cls.library,cls.data)

    def compare(self,specification):
        reference=wave.runtime.execute(self.original,specification,self.data,seed=70,thumb=True,flags=15)
        source=wave.runtime.execute(self.source,specification,self.data,source=True,seed=70,thumb=True,flags=15)
        wave.runtime.compare(source,reference)
        result=wave.native.execute(self.library,self.binding,specification,reference,seed=70)
        self.assertTrue(result['everyOtherByteAgrees'])
        return reference

    def test_complete_pipeline_matches_literal_and_case_equivalent(self):
        for candidate,expected in [('a',1),('A',1),('b',0),('',0)]:
            reference=self.compare({'pattern':'a','candidate':candidate})
            self.assertEqual(reference['compilerResult'],1)
            self.assertEqual(reference['matcherResult'],expected)

    def test_alternation_repetition_and_range_partitions_match_inputs(self):
        for pattern,candidate,expected in [('(ab|c){1,2}','abc',1),('(ab|c){1,2}','ccc',0),
            ('[a-f]|[d-z]','q',1),('[a-f]|[d-z]','0',0),('[a-z]b','ZB',1)]:
            self.assertEqual(self.compare({'pattern':pattern,'candidate':candidate})['matcherResult'],expected)

    def test_empty_range_compiles_without_dangling_stack_sentinel(self):
        reference=self.compare({'pattern':'[^\\p{ASCII}\\P{ASCII}]','candidate':'a'})
        self.assertEqual(reference['compilerResult'],1)
        self.assertEqual(reference['matcherResult'],0)
        self.assertEqual(reference['lifetime']['readBeforeReinitialization'],[])

    def test_anchors_and_final_control_closure_use_frozen_matcher(self):
        for text,expected in [('abc',1),('ABC',1),('ab',0),('abcd',0)]:
            self.assertEqual(self.compare({'pattern':'^abc$','candidate':text})['matcherResult'],expected)

    def test_source_table_keeps_four_target_pointers_per_logical_block(self):
        reference=self.compare({'pattern':'ab','candidate':'AB'})
        count=int.from_bytes(reference['after'][0x2710:0x2714],'little')
        tables=[row for row in reference['events'] if row['type']=='allocation' and row['kind']=='pointer_table']
        self.assertEqual(count,3)
        self.assertEqual(len(tables),1)
        self.assertEqual(tables[0]['blocks'],1)
        self.assertEqual(tables[0]['count'],3)

    def test_scalar_member_byte_storage_does_not_widen_with_pointers(self):
        reference=self.compare({'pattern':'ab','candidate':'ab'})
        rows=[row for row in reference['events'] if row['type']=='allocation' and row['kind']=='membership']
        self.assertTrue(rows)
        self.assertTrue(all(row['count']==3 and row['blocks']==1 for row in rows))

    def test_subtraction_split_oom_keeps_original_left_trim(self):
        reference=self.compare({'range_steps':[{'insert':[0,65535]},{'subtraction':[[3,6]]}],'free_slots':2})
        self.assertEqual(reference['result'],0)
        self.assertEqual(reference['after'][0x8008:0x800c],bytes([0,0,2,0]))

    def test_overlap_is_symmetric_for_valid_normalized_rings(self):
        for left,right,expected in [([0,4],[2,3],1),([2,3],[0,4],1),([0,1],[2,3],0),([65535,65535],[65535,65535],1)]:
            self.assertEqual(self.compare({'range_steps':[{'insert':left},{'overlap':[right]}]})['result'],expected)

    def test_compiler_failure_is_distinct_from_match_rejection(self):
        failed=self.compare({'pattern':'a','candidate':'a','free_slots':10})
        self.assertEqual(failed['nfaResult'],0)
        self.assertEqual(failed['compilerResult'],0)
        self.assertIsNone(failed['matcherResult'])
        rejected=self.compare({'pattern':'a','candidate':'b'})
        self.assertEqual(rejected['compilerResult'],1)
        self.assertEqual(rejected['matcherResult'],0)

    def test_complete_private_pointer_in_reused_raw_padding_has_strict_scope(self):
        reference=self.compare({'pattern':'\\p{ASCII}|[a-f]','candidate':'A','free_slots':44})
        self.assertEqual(reference['compilerResult'],0)
        specification={'pattern':'[^\\p{ASCII}\\P{ASCII}]','candidate':'A','free_slots':19}
        original=wave.runtime.execute(self.original,specification,self.data,seed=70)
        with self.assertRaises(model.UnsupportedRepresentation):
            wave.representation_guard(original,specification,70)

    def test_compiler_constructor_returns_full_width_native_input_pointer(self):
        value=wave.constructor_returns(self.library)
        self.assertEqual(value[0]['symbol'],'fn_004c2c5c')
        self.assertTrue(value[0]['returnedExactInputPointer'])
        reference=self.compare({'compiler_constructor':True})
        self.assertEqual(reference['result'],reference['layout']['base']+0x2700)

    def test_readonly_data_execution_is_rejected_at_new_source_root(self):
        broken={**self.source,'functions':{**self.source['functions']}}
        broken['functions']['pattern_compile_dfa']={**broken['functions']['pattern_compile_dfa'],
                                                  'address':broken['readonlyRanges'][0][0]}
        with self.assertRaisesRegex(RuntimeError,'escaped owned'):
            wave.runtime.execute(broken,{'pattern':'a','candidate':'a'},self.data,source=True)

    def test_packet_keeps_bounded_semantics_and_no_admission(self):
        packet=json.loads((wave.OUTPUT/'packet.json').read_text())
        self.assertEqual(len(packet['functions']),6)
        self.assertEqual(packet['functionalOriginalInstructionBytes'],2376)
        self.assertEqual(len(packet['negativeControls']),7)
        self.assertTrue(all(row[platform]['returnedNormally'] and row[platform]['immutableMemoryPreserved']
                            for row in packet['negativeControls'] if row['name']!='retired-pointer-padding-read' for platform in ['arm','windows']))
        self.assertEqual(packet['dependencies']['retainedOriginalExecutableHelpers'],[])
        self.assertFalse(packet['platform']['wholeGameBuildOrExecution'])
        self.assertEqual(packet['acceptedSourceCreditGranted'],0)


class DfaProjectionRegressionTests(unittest.TestCase):
    def projection(self):
        original=model.encode({'pattern':''},0x3000000,4,1)
        native=model.encode({'pattern':''},0x100000000,8,1)
        value=model.Projection(original,native)
        value.allocate(0x3008000,1,'clone',0x4c367c)
        value.write(0x3008000,4,0x2000f00,0x4c387c)
        return value,original

    def test_cumulative_raw_byte_initialization_removes_obsolete_private_pointer_mask(self):
        projection,original=self.projection()
        projection.allocate(0x3008000,1,'membership',0x4bff00,11)
        for index in range(11):
            projection.write(0x3008000+index,1,0,0x4bff10)
        self.assertEqual(projection.masked,{})
        after=bytearray(original['before']);after[0x1000]=1
        self.assertEqual(projection.qualified_masks(after),[])

    def test_partial_initialization_does_not_relax_live_pointer_guard(self):
        projection,original=self.projection()
        projection.allocate(0x3008000,1,'membership',0x4bff00,3)
        for index in range(3):
            projection.write(0x3008000+index,1,0,0x4bff10)
        self.assertTrue(projection.masked)
        after=bytearray(original['before']);after[0x1000]=1
        with self.assertRaisesRegex(model.UnsupportedRepresentation,'partially initialized'):
            projection.qualified_masks(after)

    def test_pointer_table_elements_widen_while_membership_bytes_do_not(self):
        projection,original=self.projection()
        projection.allocate(0x3008010,1,'pointer_table',0x4c2a50,3)
        self.assertEqual(projection.pointer(0x3008014),0x100008028)
        projection.allocate(0x3008020,1,'membership',0x4bff00,3)
        with self.assertRaisesRegex(ValueError,'unqualified object interior'):
            projection.pointer(0x3008021)


if __name__=='__main__':
    unittest.main()
