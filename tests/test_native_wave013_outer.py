import ctypes
import json
import sys
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import native_wave013_outer as wave


class PatternOuterTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=wave.WORK/'outer-tests'
        cls.receipts=[]
        cls.source=wave.build_tools.arm(cls.folder/'source',cls.receipts)
        cls.original=wave.originals.load([row['canonicalOriginalAddress'] for row in cls.source['functions'].values()
                                         if row['canonicalOriginalAddress'] is not None])
        cls.data=wave.services.load()
        cls.library=ctypes.CDLL(str(wave.build_tools.windows(cls.folder/'windows',cls.receipts)))
        cls.binding=wave.services.bind_windows(cls.library,cls.data)

    def compare(self,specification):
        reference=wave.runtime.execute(self.original,specification,self.data,seed=51,thumb=True,flags=15)
        actual=wave.runtime.execute(self.source,specification,self.data,source=True,seed=51,thumb=True,flags=15)
        result=wave.runtime.compare(actual,reference)
        self.assertTrue(result['everyOtherByteAgrees'])
        native=wave.native.execute(self.library,self.binding,specification,reference,seed=51)
        self.assertTrue(native['everyOtherByteAgrees'])
        if 'leaf' not in specification:
            portable=wave.runtime.execute(self.source,{**specification,'portable_arm':True},self.data,
                source=True,seed=51,thumb=True,flags=15)
            self.assertTrue(wave.runtime.compare(portable,reference)['everyOtherByteAgrees'])
            canonical=wave.native.canonical(self.library,self.binding,specification,reference,seed=51)
            self.assertTrue(canonical['flagsAgree'])
            self.assertFalse(canonical['canonicalWindowsPointerIdentityProofClaimed'])
        return reference

    def flags(self,reference,count):
        return [int.from_bytes(reference['after'][0x4000+4*i:0x4004+4*i],'little') for i in range(count)]

    def test_literal_path_sets_only_matching_flag_words(self):
        reference=self.compare({'pattern':'abc','candidates':['ABC','abcx','xabc','abc']})
        self.assertEqual(self.flags(reference,4),[1,0,0,1])

    def test_prefix_and_substring_forms_reach_the_fast_path(self):
        for pattern,expected in [('abc.*',[1,1,0]),('.*abc.*',[1,1,1])]:
            reference=self.compare({'pattern':pattern,'candidates':['abc','ABCD','xABCy']})
            self.assertEqual(self.flags(reference,3),expected)

    def test_nfa_dfa_path_matches_ranges_and_alternation(self):
        for pattern,candidates,expected in [('[a-z]',['A','1','z'],[1,0,1]),
            ('(ab|c){1,2}',['abc','cc','ccc'],[1,1,0])]:
            self.assertEqual(self.flags(self.compare({'pattern':pattern,'candidates':candidates}),3),expected)

    def test_preset_bits_are_preserved_and_skip_matching(self):
        reference=self.compare({'pattern':'a','candidates':['b','A','a'],'flags':[8,0,0x42],'bit_index':3})
        self.assertEqual(self.flags(reference,3),[8,8,0x4a])

    def test_high_bit_uses_unsigned_flag_word(self):
        reference=self.compare({'pattern':'a','candidates':['A','b'],'bit_index':31})
        self.assertEqual(self.flags(reference,2),[0x80000000,0])

    def test_out_of_range_raw_bit_bytes_do_not_wrap_the_shift(self):
        for bit in [-128,-1,32,127]:
            reference=self.compare({'pattern':'a','candidates':['a','b'],'flags':[0,7],'bit_index':bit})
            self.assertEqual(self.flags(reference,2),[0,7])

    def test_no_candidates_still_compiles_without_output_write(self):
        reference=self.compare({'pattern':'[a-z]','candidates':[]})
        self.assertEqual(reference['arenaSnapshot'][0],reference['layout']['base']+0x7400)
        self.assertEqual(reference['arenaSnapshot'][1],reference['layout']['base']+0x8000)
        self.assertGreater(reference['arenaSnapshot'][2],8)

    def test_lexical_and_parser_errors_return_without_flags(self):
        for pattern in ['[','a)','a{3,2}']:
            self.assertEqual(self.flags(self.compare({'pattern':pattern,'candidates':['a']}),1),[0])

    def test_initial_objects_keep_original_logical_block_counts(self):
        reference=self.compare({'pattern':'a','candidates':['a']})
        rows=[row for row in reference['events'] if row['type']=='allocation'][:5]
        self.assertEqual([(row['kind'],row['blocks']) for row in rows],
            [('lexer',2),('literal',1),('builder',2),('compiler',2),('cursor',1)])

    def test_raw_bitmap_header_clears_all3072_bytes(self):
        reference=self.compare({'leaf':'arena-init'})
        self.assertEqual(reference['after'][0x7400:0x8000],bytes(3072))
        self.assertEqual(reference['arenaSnapshot'],[reference['layout']['base']+0x7400,
            reference['layout']['base']+0x8000,0])

    def test_zero_entry_covers_all_four_alignments_and_returns_end(self):
        for alignment in range(4):
            reference=self.compare({'leaf':'zero-any','alignment':alignment,'bytes':33})
            self.assertEqual(reference['result'],reference['layout']['base']+0x5000+alignment+33)
            self.assertEqual(reference['after'][0x5000+alignment:0x5000+alignment+33],bytes(33))

    def test_aligned_zero_tail_handles_small_and_multiword_counts(self):
        for count in [0,1,2,3,4,31,32,33,96]:
            reference=self.compare({'leaf':'zero-aligned','bytes':count})
            self.assertEqual(reference['result'],reference['layout']['base']+0x5000+count)

    def test_arena_constructor_initializes_pointers_and_cursor(self):
        reference=self.compare({'leaf':'arena-constructor'})
        self.assertEqual(reference['arenaSnapshot'],[0,0,0])

    def test_known_caller_arena_never_requires_a_self_derived_identity(self):
        packet=json.loads((wave.OUTPUT/'packet.json').read_text())
        self.assertFalse(packet['behavior']['selfDerivedLexerOwnerIdentityUsed'])
        self.assertFalse(packet['behavior']['canonicalWindowsPointerIdentityProofClaimed'])
        self.assertIn('independently known',packet['platform']['windowsFullProofApi'])
        control=next(row for row in packet['negativeControls'] if row['name']=='shifted-scratch-owner')
        self.assertTrue(control['sameFlagOutputs'])
        self.assertTrue(control['flagsOnlyCanonicalWindowsObservation']['flagsAgree'])
        self.assertTrue(control['windows']['returnedNormally'])

    def test_readonly_data_cannot_execute_as_outer_source(self):
        broken={**self.source,'functions':{**self.source['functions']}}
        broken['functions']['fn_004c3c20']={**broken['functions']['fn_004c3c20'],
            'address':broken['readonlyRanges'][0][0]}
        with self.assertRaisesRegex(RuntimeError,'escaped owned'):
            wave.runtime.execute(broken,{'pattern':'a','candidates':['a']},self.data,source=True)

    def test_packet_has_complete_frontier_and_no_acceptance(self):
        packet=json.loads((wave.OUTPUT/'packet.json').read_text())
        self.assertEqual(len(packet['functions']),5)
        self.assertEqual(packet['functionalOriginalInstructionBytes'],684)
        self.assertEqual(packet['acceptedSourceCreditGranted'],0)
        self.assertEqual(packet['dependencies']['retainedOriginalExecutableHelpers'],[])
        self.assertEqual(len(packet['negativeControls']),8)
        self.assertTrue(all(row[platform]['returnedNormally'] and row[platform]['immutableMemoryPreserved']
                            for row in packet['negativeControls'] for platform in ['arm','windows']))


if __name__=='__main__':
    unittest.main()
