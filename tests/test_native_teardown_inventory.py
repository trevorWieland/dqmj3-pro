import copy
import json
from pathlib import Path
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_teardown_inventory as inventory


class TeardownInventoryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.base = json.loads((ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_bytes())
        cls.before, _ = inventory.predecessor.compose(ROOT, cls.base)
        cls.witness = json.loads((ROOT/'evidence/lanes/native-file-coupled070/inventory-v1/proposal.json').read_bytes())
        cls.image = (ROOT/'generated/update-content0/code.bin').read_bytes()

    def reject(self, value, before=None):
        with self.assertRaises(ValueError):
            inventory.validate(self.base, self.before if before is None else before, value, self.image)

    def changed(self):
        return copy.deepcopy(self.witness)

    def test_classifies_three_entries_without_inflating_gross_denominator_or_source_credit(self):
        result = inventory.validate(self.base,self.before,self.witness,self.image)
        self.assertEqual(result['functionCount'],26663)
        self.assertEqual(result['initializedTextGrossBytes'],7051280)
        old = {r['address']:r for r in self.before['functions']}
        new = {r['address']:r for r in result['functions']}
        self.assertTrue(all(new[a]==r for a,r in old.items() if a!=0x10555c))
        self.assertEqual(new[0x10555c]['textBodyBytes'],48)
        self.assertEqual(new[0x10555c]['calledFunctionAddresses'],[0x10c4f4])
        self.assertEqual(sum(r['textBodyBytes'] for r in new.values())-sum(r['textBodyBytes'] for r in old.values()),204)
        self.assertTrue(all(new[a]['acceptedSourceBytes']==0 for a in [0x10c4f4,0x44dfac,0x44e000]))

    def test_composition_requires_the_reviewed_three_entry_overlay(self):
        result,refs=inventory.compose(ROOT,self.base)
        self.assertEqual(result['functionCount'],26663)
        self.assertFalse(result['historicalFunctionCompletenessClaim'])
        self.assertEqual(refs[-1]['path'],'evidence/lanes/native-file-coupled070/inventory-v1/proposal.json')

    def test_literal_pool_cannot_be_promoted_to_instructions(self):
        value=self.changed();value['newEntries'][1]['instructionRange']['endExclusive']+=4;self.reject(value)

    def test_retained_owner_cannot_keep_shutdown_bytes(self):
        value=self.changed();value['retainedOwner']['range']['endExclusive']=0x10c544;self.reject(value)

    def test_preexisting_or_credited_owner_is_rejected(self):
        before=copy.deepcopy(self.before);before['functions'].append(dict(address=0x44e000));self.reject(self.witness,before)
        before=copy.deepcopy(self.before);next(r for r in before['functions'] if r['address']==0x10555c)['acceptedSourceBytes']=4;self.reject(self.witness,before)

    def test_thumb_state_cannot_replace_arm(self):
        value=self.changed();value['newEntries'][0]['mode']='Thumb';self.reject(value)

    def test_body_and_pool_cannot_overlap_another_owner(self):
        before=copy.deepcopy(self.before);before['functions'].append(dict(address=0x44dffc,mode='ARM',ranges=[dict(start=0x44dffc,endExclusive=0x44e000,bytes=4)]));self.reject(self.witness,before)

    def test_missing_original_position_is_rejected(self):
        value=self.changed();value['newEntries'][2]['observedInstructionPcs'].pop();self.reject(value)

    def test_tail_kind_and_saved_frame_extent_are_checked(self):
        value=self.changed();value['newEntries'][0]['knownOwnedArmIncomingEdges'][0]['kind']='BL';self.reject(value)
        value=self.changed();value['retainedOwner']['restoredFrameTail']['start']+=4;self.reject(value)

    def test_literal_reader_and_value_are_bound(self):
        value=self.changed();value['newEntries'][0]['literalReaders'][0]['literalAddress']+=4;self.reject(value)
        value=self.changed();value['newEntries'][1]['literalReaders'][0]['value']+=4;self.reject(value)

    def test_virtual_slot_and_direct_callee_partition_are_bound(self):
        value=self.changed();value['virtualTableSlots'][1]['target']+=4;self.reject(value)
        value=self.changed();value['newEntries'][0]['directOrTailCalls'].pop();self.reject(value)

    def test_missing_actual_original_observation_is_rejected(self):
        value=self.changed();value['actualOriginalObservations'].pop();self.reject(value)

    def test_progress_credit_or_gross_denominator_change_is_rejected(self):
        for key in ['sourceCreditGranted','grossDenominatorChange']:
            value=self.changed();value['byteAccounting'][key]=1
            with self.subTest(field=key):self.reject(value)


if __name__ == '__main__':
    unittest.main()
