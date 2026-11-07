import ctypes
import json
import sys
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import native_wave013_literal as wave


class PatternLiteralTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=wave.WORK/'literal-tests'
        cls.receipts=[]
        cls.source=wave.build_tools.arm(cls.folder/'source',cls.receipts)
        cls.original=wave.originals.load([row['canonicalOriginalAddress'] for row in cls.source['functions'].values()
                                         if row['canonicalOriginalAddress'] is not None])
        cls.data=wave.services.load()
        cls.library=ctypes.CDLL(str(wave.build_tools.windows(cls.folder/'windows',cls.receipts)))
        cls.binding=wave.services.bind_windows(cls.library,cls.data)

    def compare(self,specification):
        if 'literal_compare' not in specification:
            specification={'literal_fast':True,**specification}
        reference=wave.runtime.execute(self.original,specification,self.data,seed=41,thumb=True,flags=15)
        actual=wave.runtime.execute(self.source,specification,self.data,source=True,seed=41,thumb=True,flags=15)
        result=wave.runtime.compare(actual,reference)
        self.assertTrue(result['rawFixtureEqualityObserved'])
        native=wave.native.execute(self.library,self.binding,specification,reference,seed=41)
        self.assertTrue(native['everyOtherByteAgrees'])
        return reference

    def test_exact_literal_requires_length_and_accepts_case_group(self):
        for candidate,expected in [('abc',1),('ABC',1),('ab',2),('abcd',2),('xbc',2)]:
            self.assertEqual(self.compare({'pattern':'abc','candidate':candidate})['result'],expected)

    def test_prefix_wildcard_keeps_prefix_and_minimum_length(self):
        for candidate,expected in [('abc',1),('ABCD',1),('ab',2),('xabc',2)]:
            self.assertEqual(self.compare({'pattern':'abc.*','candidate':candidate})['result'],expected)

    def test_suffix_wildcard_selects_last_literal_position(self):
        for candidate,expected in [('abc',1),('xABC',1),('abcx',2),('ab',2)]:
            self.assertEqual(self.compare({'pattern':'.*abc','candidate':candidate})['result'],expected)

    def test_substring_includes_first_and_last_valid_offsets(self):
        for candidate,expected in [('abcx',1),('xABC',1),('xABCy',1),('ab',2),('xxxx',2)]:
            self.assertEqual(self.compare({'pattern':'.*abc.*','candidate':candidate})['result'],expected)

    def test_anchor_spellings_preserve_supported_exact_semantics(self):
        for pattern in ['^abc','abc$','^abc$']:
            self.assertEqual(self.compare({'pattern':pattern,'candidate':'ABC'})['result'],1)
            self.assertEqual(self.compare({'pattern':pattern,'candidate':'xabc'})['result'],2)

    def test_complex_patterns_and_empty_wildcard_fall_back(self):
        for pattern in ['a|b','[a-z]','(abc)','.*','^$','a.*b']:
            self.assertEqual(self.compare({'pattern':pattern,'candidate':'abc'})['result'],0)

    def test_non_ascii_case_alternatives_use_frozen_typed_data(self):
        for pattern,candidate in [('k','\u212a'),('s','\u017f'),('\u03a3','\u03c2')]:
            self.assertEqual(self.compare({'pattern':pattern,'candidate':candidate})['result'],1)

    def test_nul_terminated_candidate_ignores_later_code_units(self):
        reference=self.compare({'pattern':'a','candidate':'a\0x'})
        self.assertEqual(reference['result'],1)
        self.assertEqual(int.from_bytes(reference['after'][0x2804:0x2808],'little'),1)

    def test_comparison_cursor_advances_only_for_successful_characters(self):
        reference=self.compare({'literal_compare':[0,3],'pattern':'abc','candidate':'abx'})
        self.assertEqual(reference['result'],0)
        cursor=int.from_bytes(reference['after'][0x2900:0x2904],'little')
        self.assertEqual(cursor,reference['layout']['base']+0x8020)

    def test_comparison_with_nonzero_candidate_offset_advances_all_tokens(self):
        reference=self.compare({'literal_compare':[1,3],'pattern':'abc','candidate':'xAbC'})
        self.assertEqual(reference['result'],1)
        cursor=int.from_bytes(reference['after'][0x2900:0x2904],'little')
        self.assertEqual(cursor,reference['layout']['base']+0x8030)

    def test_wrapping_end_returns_without_dereference_or_cursor_change(self):
        reference=self.compare({'literal_compare':[0xfffffffe,4],'pattern':'','candidate':''})
        self.assertEqual(reference['result'],1)
        self.assertEqual(int.from_bytes(reference['after'][0x2900:0x2904],'little'),reference['layout']['base']+0x8000)

    def test_lexical_failure_preserves_partial_allocations_and_no_match_result(self):
        reference=self.compare({'pattern':'abc','candidate':'abc','free_slots':1})
        self.assertNotEqual(reference['lexical'],0)
        self.assertIsNone(reference['result'])

    def test_constructor_preserves_full_native_pointer(self):
        rows=wave.constructor_returns(self.library)
        self.assertEqual(rows[0]['symbol'],'fn_004c0380')
        self.assertTrue(rows[0]['returnedExactInputPointer'])

    def test_readonly_bytes_cannot_be_executed_as_fast_source(self):
        broken={**self.source,'functions':{**self.source['functions']}}
        broken['functions']['fn_004c0060']={**broken['functions']['fn_004c0060'],
                                          'address':broken['readonlyRanges'][0][0]}
        with self.assertRaisesRegex(RuntimeError,'escaped owned'):
            wave.runtime.execute(broken,{'literal_fast':True,'pattern':'a','candidate':'a'},self.data,source=True)

    def test_frozen_packet_keeps_complete_bodies_and_no_acceptance(self):
        packet=json.loads((wave.OUTPUT/'packet.json').read_text())
        self.assertEqual(len(packet['functions']),4)
        self.assertEqual(packet['functionalOriginalInstructionBytes'],1018)
        self.assertEqual(packet['acceptedSourceCreditGranted'],0)
        self.assertFalse(packet['behavior']['privatePointerMasksRequired'])
        self.assertEqual(packet['dependencies']['retainedOriginalExecutableHelpers'],[])
        self.assertTrue(all(row[platform]['returnedNormally'] and row[platform]['immutableMemoryPreserved']
                            for row in packet['negativeControls'] for platform in ['arm','windows']))


if __name__=='__main__':
    unittest.main()
