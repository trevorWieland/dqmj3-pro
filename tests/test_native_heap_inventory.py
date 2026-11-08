import copy
import json
from pathlib import Path
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_heap_inventory as inventory


class HeapInitializerInventoryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.base = json.loads((ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_bytes())
        cls.before, _ = inventory.predecessor.compose(ROOT, cls.base)
        cls.witness = json.loads((ROOT / 'evidence/lanes/native-sdk-heap062/inventory-v1/proposal-v1.json').read_bytes())
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()

    def reject(self, witness=None, before=None):
        with self.assertRaises(ValueError):
            inventory.validate(self.base, before or self.before, witness or self.witness, self.image)

    def test_repair_adds_entry_with_exactly_byte_balanced_ownership(self):
        result = inventory.validate(self.base, self.before, self.witness, self.image)
        old = {row['address']: row for row in self.before['functions']}
        new = {row['address']: row for row in result['functions']}
        self.assertEqual(len(new), len(old) + 1)
        self.assertEqual(new[0x105408]['textBodyBytes'], 204)
        self.assertEqual(new[0x10b980]['textBodyBytes'], 160)
        self.assertEqual(new[0x10b980]['acceptedSourceBytes'], 0)
        self.assertEqual(sum(row['textBodyBytes'] for row in new.values()), sum(row['textBodyBytes'] for row in old.values()))
        self.assertTrue(all(row == new[address] for address, row in old.items() if address != 0x105408))

    def test_composition_retains_conservative_denominator_and_no_source_credit(self):
        result, refs = inventory.compose(ROOT, self.base)
        self.assertEqual(result['functionCount'], 26660)
        self.assertEqual(result['initializedTextGrossBytes'], 7051280)
        self.assertFalse(result['historicalFunctionCompletenessClaim'])
        self.assertEqual(refs[-1]['path'], 'evidence/lanes/native-sdk-heap062/inventory-v1/proposal-v1.json')

    def test_literal_pool_cannot_be_promoted_to_code(self):
        value = copy.deepcopy(self.witness)
        value['newEntry']['range'].update(endExclusive='0x10ba30', bytes=176)
        self.reject(value)

    def test_owner_cannot_retain_the_detached_body_or_change_other_fragments(self):
        value = copy.deepcopy(self.witness)
        value['retainedOwner']['ranges'].append(dict(start=0x10b980, endExclusive=0x10ba20, bytes=160))
        self.reject(value)

    def test_already_present_entry_or_existing_source_owner_is_rejected(self):
        value = copy.deepcopy(self.before)
        value['functions'].append(dict(address=0x10b980))
        self.reject(before=value)
        value = copy.deepcopy(self.before)
        next(row for row in value['functions'] if row['address'] == 0x105408)['acceptedSourceBytes'] = 4
        self.reject(before=value)

    def test_thumb_mode_is_not_substituted_for_measured_arm(self):
        value = copy.deepcopy(self.witness)
        value['newEntry']['mode'] = 'Thumb'
        self.reject(value)

    def test_another_owner_cannot_overlap_the_body_or_pool(self):
        value = copy.deepcopy(self.before)
        value['functions'].append(dict(address=0x10ba20, mode='ARM', ranges=[dict(start=0x10ba20, endExclusive=0x10ba24, bytes=4)]))
        self.reject(before=value)

    def test_actual_tail_branch_cannot_be_relabelled_linking_or_conditional(self):
        for key, value in [('kind', 'BL'), ('condition', 1), ('target', '0x10b984')]:
            witness = copy.deepcopy(self.witness)
            witness['realTailCall']['edges'][0][key] = value
            with self.subTest(field=key):
                self.reject(witness)

    def test_literal_reader_and_original_hash_are_checked(self):
        for key, value in [('literalAddress', '0x10ba24'), ('readerSha256', '0' * 64)]:
            witness = copy.deepcopy(self.witness)
            witness['literalReaders'][0][key] = value
            with self.subTest(field=key):
                self.reject(witness)

    def test_missing_execution_or_abi_observation_is_rejected(self):
        value = copy.deepcopy(self.witness)
        value['observations'].pop()
        self.reject(value)
        value = copy.deepcopy(self.witness)
        value['observations'][0]['calleeSavedRegistersStackAndFpscrChecked'] = False
        self.reject(value)

    def test_partial_pc_coverage_or_invented_callee_partition_is_rejected(self):
        value = copy.deepcopy(self.witness)
        value['newEntryPcsObserved'].pop()
        self.reject(value)
        value = copy.deepcopy(self.witness)
        value['newEntry']['callees'] = []
        self.reject(value)

    def test_no_progress_credit_or_denominator_increase_is_allowed(self):
        for key in ('sourceCreditGranted', 'grossDenominatorChange'):
            value = copy.deepcopy(self.witness)
            value['byteAccounting'][key] = 1
            with self.subTest(field=key):
                self.reject(value)


if __name__ == '__main__':
    unittest.main()
