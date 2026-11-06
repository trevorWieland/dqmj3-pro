import importlib.util
import json
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[3]
SPEC = importlib.util.spec_from_file_location('tested_wave008_oracle', Path(__file__).with_name('oracle.py'))
oracle = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(oracle)
ROWS = {row['address']: row for row in json.loads((ROOT / 'evidence/lanes/wave008-native/semantic-layouts.json').read_text())['layouts']}


class SemanticDomainTests(unittest.TestCase):
    def case(self, address, **vector):
        return oracle.prepare(ROWS[address], vector, 0x8008)

    def value(self, address, case, offset=None, width=None):
        row = ROWS[address]
        return oracle.scalar(case['expected'], case['record'] + (row['fieldOffset'] if offset is None else offset),
                             row['fieldWidth'] if width is None else width)

    def test_replacement_preserves_argument_bits_instead_of_booleanizing(self):
        case = self.case(0x16ac3c, old=1, value=0x80)
        self.assertEqual(self.value(0x16ac3c, case), 0x80)
        self.assertEqual(case['result'], case['record'])

    def test_old_low_bit_return_is_independent_of_updated_halfword(self):
        case = self.case(0x170b94, old=0x8001, value=0)
        self.assertEqual(case['result'], 1)
        self.assertEqual(self.value(0x170b94, case), 0x8000)

    def test_signed_state_full_word_return_and_byte_store_differ(self):
        case = self.case(0x69e710, state=-1, old=0x80)
        self.assertEqual(case['result'], 0xffffffff)
        self.assertEqual(self.value(0x69e710, case), 0xff)

    def test_unchanged_signed_state_returns_requested_word_without_store(self):
        case = self.case(0x69e748, state=1, old=0x81)
        self.assertEqual(case['result'], 1)
        self.assertEqual(case['writeRanges'], [])
        self.assertEqual(case['expected'], case['memory'])

    def test_state_pair_skip_permits_null_inner_and_returns_outer(self):
        case = self.case(0x688818, state=-1, compare=-1, value=0, null=True)
        self.assertEqual(case['record'], 0)
        self.assertEqual(case['result'], case['root'])
        self.assertEqual(case['writeRanges'], [])

    def test_state_pair_update_requires_inner_object(self):
        with self.assertRaises(ValueError):
            self.case(0x688818, state=1, compare=0, value=1, null=True)

    def test_bitmap_return_is_byte_context_before_bitmap_field(self):
        case = self.case(0x654c58, value=511, old=1)
        self.assertEqual(case['result'], case['root'] + 63)
        self.assertEqual(self.value(0x654c58, case, 0xdc + 63), 0x81)
        with self.assertRaises(ValueError):
            self.case(0x654c58, value=512, old=1)

    def test_embedded_context_pointer_and_high_bit_mutation(self):
        case = self.case(0x63b0d8, old=0, value=31, enabled=0xffffffff)
        self.assertEqual(case['result'], case['root'] + 0x5000)
        self.assertEqual(self.value(0x63b0d8, case), 0x80000000)

    def test_relative_index_defined_domain_and_high_base(self):
        case = self.case(0x63b148, old=0xffff, base=255, value=270)
        self.assertEqual(self.value(0x63b148, case), 0x7fff)
        for value in (254, 271, 0xffffffff):
            with self.assertRaises(ValueError):
                self.case(0x63b148, old=0xffff, base=255, value=value)

    def test_one_based_sentinel_and_invalid_shift_domains(self):
        case = self.case(0x4e2f74, old=0xffffffff, value=255)
        self.assertEqual(case['writeRanges'], [])
        self.assertEqual(self.value(0x4e2f74, case), 0xffffffff)
        for value in (0, 33, 254, 256):
            with self.assertRaises(ValueError):
                self.case(0x4e2f74, old=0xffffffff, value=value)

    def test_masked_index_accepts_full_u32_but_unmasked_byte_is_bounded(self):
        case = self.case(0x655760, old=0, value=0xffffffff, enabled=2)
        self.assertEqual(self.value(0x655760, case), 0x80)
        with self.assertRaises(ValueError):
            self.case(0x616c30, old=0, value=8, enabled=1)

    def test_dirty_payload_halfwords_truncate_with_independent_flag_return(self):
        case = self.case(0x13d554, old=0x80000000, value=0xabcdef01)
        self.assertEqual(case['result'], 0x80000002)
        self.assertEqual(self.value(0x13d554, case, 0x14, 2), 0xef01)
        self.assertEqual(self.value(0x13d554, case, 0x16, 2), 0xef01)


if __name__ == '__main__':
    unittest.main()
