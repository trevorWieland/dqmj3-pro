import copy
import json
from pathlib import Path
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_shader_inventory as inventory


class ShaderCallableInventoryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.base = json.loads((ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_bytes())
        cls.before, _ = inventory.predecessor.compose(ROOT, cls.base)
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
        cls.witness = json.loads((ROOT / 'evidence/verification/shader-callable-witnesses.json').read_bytes())

    def reject(self, value, before=None):
        with self.assertRaises(ValueError):
            inventory.validate(self.base, before or self.before, value, self.image)

    def test_complete_observed_body_adds_only_one_unmatched_entry(self):
        result = inventory.validate(self.base, self.before, self.witness, self.image)
        self.assertEqual(result['functionCount'], self.before['functionCount'] + 1)
        row = next(x for x in result['functions'] if x['address'] == 0x17199c)
        self.assertEqual(row['textBodyBytes'], 112)
        self.assertEqual(row['acceptedSourceBytes'], 0)
        self.assertEqual(row['ranges'], [dict(start=0x17199c, endExclusive=0x171a0c, bytes=112)])

    def test_approved_composition_preserves_gross_text_and_credit(self):
        result, references = inventory.compose(ROOT, self.base)
        self.assertEqual(result['functionCount'], 26659)
        self.assertEqual(result['initializedTextGrossBytes'], self.before['initializedTextGrossBytes'])
        self.assertFalse(result['historicalFunctionCompletenessClaim'])
        self.assertEqual(references[-1]['path'], 'evidence/verification/shader-callable-witnesses.json')

    def test_excluded_vfp_pool_cannot_be_counted_as_instructions(self):
        value = copy.deepcopy(self.witness)
        value['instructionRanges'][0].update(endExclusive=0x171a14, bytes=120)
        self.reject(value)

    def test_partial_body_and_missing_trace_are_rejected(self):
        for key in ('instructionRanges', 'instructionsObserved'):
            value = copy.deepcopy(self.witness)
            value[key].pop()
            self.reject(value)

    def test_trace_cannot_claim_prior_canonical_ownership(self):
        value = copy.deepcopy(self.witness)
        value['instructionsObserved'][0]['canonicalOwner'] = 0x17199c
        self.reject(value)

    def test_trace_original_bytes_are_hash_checked(self):
        value = copy.deepcopy(self.witness)
        value['instructionsObserved'][0]['sha256'] = '0' * 64
        self.reject(value)

    def test_arm_callback_pointer_cannot_have_thumb_bit(self):
        value = copy.deepcopy(self.witness)
        value['actualArrayCall']['args'][1] |= 1
        self.reject(value)

    def test_array_stride_and_actual_count_cannot_be_inferred_differently(self):
        for index in (2, 3):
            value = copy.deepcopy(self.witness)
            value['actualArrayCall']['args'][index] += 1
            self.reject(value)

    def test_array_constructor_mode_is_thumb(self):
        value = copy.deepcopy(self.witness)
        value['actualArrayCall']['mode'] = 'ARM'
        self.reject(value)

    def test_duplicate_entry_cannot_increase_inventory(self):
        before = dict(self.before)
        before['functions'] = [*before['functions'], dict(address=0x17199c, ranges=[])]
        self.reject(self.witness, before)

    def test_shared_or_overlapping_instruction_ownership_is_rejected(self):
        before = dict(self.before)
        before['functions'] = [*before['functions'], dict(address=0x171990,
            ranges=[dict(start=0x171990, endExclusive=0x1719a0, bytes=16)])]
        value = copy.deepcopy(self.witness)
        value['predecessorDiscoveredFunctions'] += 1
        self.reject(value, before)

    def test_literal_callback_and_caller_extents_are_fixed(self):
        for key in ('callbackLiteral', 'staticCaller'):
            value = copy.deepcopy(self.witness)
            value[key]['start'] += 4
            self.reject(value)

    def test_discovery_cannot_grant_source_credit_or_change_denominator(self):
        for key in ('sourceCreditGranted', 'nativeTextDenominatorChanged', 'inventoryAdmissionGranted'):
            value = copy.deepcopy(self.witness)
            value[key] = 1
            self.reject(value)

    def test_wrong_callback_mode_or_following_owner_is_rejected(self):
        for key, replacement in [('mode', 'Thumb'), ('followingCanonical', 0x171a18)]:
            value = copy.deepcopy(self.witness)
            value[key] = replacement
            self.reject(value)


if __name__ == '__main__':
    unittest.main()
