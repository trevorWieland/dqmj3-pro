import ctypes
import json
import sys
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import native_wave013_file_text as wave


class PatternCharacterTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.folder=wave.WORK/'file-text-tests'
        cls.receipts=[]
        cls.source=wave.build_tools.arm(cls.folder/'source',cls.receipts)
        cls.original=wave.originals.load(wave.NEW)
        cls.reference=wave.runtime.ArmRunner(cls.original)
        cls.arm=wave.runtime.ArmRunner(cls.source,True)
        cls.native=wave.runtime.NativeRunner(ctypes.CDLL(str(wave.build_tools.windows(cls.folder/'windows',cls.receipts))))
        cls.runners=(cls.reference,cls.arm,cls.native)

    def compare(self,units,maximum=64,operation='normalize'):
        target,row=wave.exercise(self.runners,{'units':units,'maximum':maximum,'operation':operation},37,True,15)
        self.assertTrue(row['arm']['returnedNormally'])
        self.assertTrue(row['windows']['truePointersAbove32Bits'])
        return target

    def text(self,result):
        values=[int.from_bytes(result['output'][index:index+2],'little') for index in range(0,len(result['output']),2)]
        return values[:values.index(0)]

    def test_only_measured_ascii_and_ideographic_spaces_are_removed(self):
        result=self.compare([0x20,0x3000,0x41,9,10,0xa0])
        self.assertEqual(self.text(result),[0x41,9,10,0xa0])

    def test_fullwidth_letters_digits_fold_but_punctuation_is_preserved(self):
        result=self.compare([0xff21,0xff41,0xff10,0xff01,0xff20])
        self.assertEqual(self.text(result),[0x41,0x61,0x30,0xff01,0xff20])

    def test_hiragana_converts_and_small_kana_enlarge(self):
        result=self.compare([0x3041,0x3083,0x3095,0x3096])
        self.assertEqual(self.text(result),[0x30a2,0x30e4,0x30ab,0x30b1])

    def test_selected_small_katakana_enlarge_without_extension_folding(self):
        result=self.compare([0x30a1,0x30c3,0x30f5,0x30f6,0x31f0])
        self.assertEqual(self.text(result),[0x30a2,0x30c4,0x30ab,0x30b1,0x31f0])

    def test_supported_voiced_and_semivoiced_pairs_consume_both_inputs(self):
        result=self.compare([0xff76,0xff9e,0xff8a,0xff9f,0xff73,0xff9e])
        self.assertEqual(self.text(result),[0x30ac,0x30d1,0x30f4])

    def test_extra_unicode_voiced_compositions_remain_game_unsupported(self):
        for first,base in [(0xff66,0x30f2),(0xff72,0x30a4),(0xff74,0x30a8),(0xff9c,0x30ef)]:
            self.assertEqual(self.text(self.compare([first,0xff9e])),[base,0x3099])

    def test_uncombined_halfwidth_sound_marks_remain_combining_code_units(self):
        result=self.compare([0xff9e,0xff9f])
        self.assertEqual(self.text(result),[0x3099,0x309a])

    def test_capacity_one_writes_only_the_terminator(self):
        self.assertEqual(self.text(self.compare([0xff76,0xff9e],1)),[])

    def test_small_capacity_still_consumes_a_voiced_pair_as_one_output(self):
        self.assertEqual(self.text(self.compare([0xff76,0xff9e,0x61],2)),[0x30ac])

    def test_bounded_zero_capacity_preserves_measured_wrap_guard_quirk(self):
        self.assertEqual(self.text(self.compare([0x20,0x3000],0)),[])

    def test_marker_stops_at_nul_and_obeys_signed_maximum(self):
        self.assertEqual(self.compare([0,0x40],64,'mark')['result'],0)
        self.assertEqual(self.compare([0x61,0x40],1,'mark')['result'],0)
        self.assertEqual(self.compare([0x61,0x40],2,'mark')['result'],1)
        self.assertEqual(self.compare([0x40],-1,'mark')['result'],0)

    def test_marker_recognizes_ascii_and_fullwidth_at_sign(self):
        self.assertEqual(self.compare([0x40],64,'mark')['result'],1)
        self.assertEqual(self.compare([0xff20],64,'mark')['result'],1)

    def test_embedded_nul_leaves_entire_unwritten_output_tail_unchanged(self):
        result=self.compare([0x61,0,0x62])
        before,unused,writable=wave.runtime.fixture([0x61,0,0x62],64,37)
        self.assertEqual(result['output'][4:],before[wave.runtime.OUTPUT+4:wave.runtime.OUTPUT+wave.runtime.OUTPUT_BYTES])

    def test_public_unicode_derivation_matches_all96_private_table_entries(self):
        proof=json.loads((wave.OUT/'file/unicode-derivation.json').read_text())
        self.assertEqual(sum(row['entries'] for row in proof['tables']),96)
        self.assertTrue(all(row['allEntriesAgree'] for row in proof['tables']))
        self.assertFalse(proof['historicalGameUnicodeVersionClaimed'])

    def test_data_bytes_cannot_execute_as_character_source(self):
        broken={**self.source,'functions':{**self.source['functions']}}
        broken['functions']['fn_004c446c']={**broken['functions']['fn_004c446c'],'address':broken['readonlyRanges'][0][0]}
        runner=wave.runtime.ArmRunner(broken,True)
        with self.assertRaisesRegex(RuntimeError,'escaped owned'):
            runner.run([0x61])

    def test_packet_keeps_finite_domain_and_no_source_admission(self):
        packet=json.loads((wave.OUTPUT/'packet.json').read_text())
        self.assertEqual(packet['functionalOriginalInstructionBytes'],688)
        self.assertEqual(packet['behavior']['singleU16NormalizationQueries'],65536)
        self.assertEqual(packet['behavior']['singleU16AtSignQueries'],65536)
        self.assertEqual(len(packet['negativeControls']),9)
        self.assertEqual(packet['mutableSourceObjects'],[])
        self.assertFalse(packet['dependencies']['originalDataMappedDuringSourceExecution'])
        self.assertEqual(packet['acceptedSourceCreditGranted'],0)
        self.assertTrue(all(row[platform]['returnedNormally'] and row[platform]['immutableMemoryPreserved']
                            for row in packet['negativeControls'] for platform in ['arm','windows']))


if __name__=='__main__':
    unittest.main()
