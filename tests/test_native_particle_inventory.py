import copy
import json
from pathlib import Path
import sys
import unittest

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import native_particle_inventory as inventory


class ParticleInventoryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.base=json.loads((ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_bytes())
        cls.before,_=inventory.predecessor.compose(ROOT,cls.base)
        cls.witness=json.loads((ROOT/'evidence/lanes/native-particle019-inventory/proposal-v1/inventory-proposal-v1.public.json').read_bytes())
        cls.image=(ROOT/'generated/update-content0/code.bin').read_bytes()

    def changed(self):
        return copy.deepcopy(self.witness)

    def reject(self,value,before=None):
        with self.assertRaises(ValueError):
            inventory.validate(self.base,self.before if before is None else before,value,self.image)

    def test_ten_callable_entries_preserve_every_existing_owner_and_gross_denominator(self):
        result=inventory.validate(self.base,self.before,self.witness,self.image)
        old={r['address']:r for r in self.before['functions']}
        new={r['address']:r for r in result['functions']}
        self.assertEqual(result['functionCount'],26673)
        self.assertTrue(all(new[address]==row for address,row in old.items()))
        self.assertEqual(sum(r['textBodyBytes'] for r in new.values())-sum(r['textBodyBytes'] for r in old.values()),2924)
        self.assertEqual(result['initializedTextGrossBytes'],7051280)
        self.assertTrue(all(new[a]['acceptedSourceBytes']==0 for a in inventory.EXTENTS))
        self.assertEqual(new[0x5354a4]['textBodyBytes'],60)

    def test_composition_adds_only_the_approved_ten_entries(self):
        result,refs=inventory.compose(ROOT,self.base)
        self.assertEqual(result['functionCount'],26673)
        self.assertFalse(result['historicalFunctionCompletenessClaim'])
        self.assertEqual(refs[-1]['path'],'evidence/lanes/native-particle019-inventory/proposal-v1/inventory-proposal-v1.public.json')

    def test_literal_pool_cannot_be_promoted_to_code(self):
        value=self.changed();value['proposedFunctions'][0]['instructionRanges'][0]['endExclusive']+=4;self.reject(value)

    def test_all_entry_transfers_are_required(self):
        value=self.changed();value['proposedFunctions'][0]['independentEntryWitnesses']=[];self.reject(value)

    def test_original_caller_opcode_and_register_state_are_bound(self):
        value=self.changed();value['proposedFunctions'][0]['independentEntryWitnesses'][0]['actualTransfer']['sha256']='0'*64;self.reject(value)
        value=self.changed();value['proposedFunctions'][0]['independentEntryWitnesses'][0]['args'][0]^=4;self.reject(value)

    def test_literal_reader_address_is_bound(self):
        value=self.changed();value['proposedFunctions'][0]['literalReaders'][0]['literalAddress']+=4;self.reject(value)

    def test_tail_and_fallthrough_boundaries_cannot_disappear(self):
        value=self.changed();value['proposedFunctions'][0]['allStaticBoundaries'].pop();self.reject(value)

    def test_direct_callee_roster_cannot_be_truncated(self):
        value=self.changed();value['proposedFunctions'][0]['staticCallsAndTails'].pop(0);self.reject(value)

    def test_proposed_canonical_rows_cannot_change_body_size(self):
        value=self.changed();value['proposedFunctions'][0]['proposedInventoryRow']['textBodyBytes']-=4;self.reject(value)

    def test_partition_cannot_gain_gap_or_duplicate_before_range(self):
        value=self.changed();value['byteConservingPartitions'][0]['after'][0]['endExclusive']-=4;self.reject(value)
        value=self.changed();value['byteConservingPartitions'][1]=copy.deepcopy(value['byteConservingPartitions'][0]);self.reject(value)

    def test_partition_cannot_assign_another_callables_bytes(self):
        value=self.changed()
        part=next(r for p in value['byteConservingPartitions'] for r in p['after'] if r['role']=='proposed-callable-instructions')
        part['proposedOwner']=0x5351a8
        self.reject(value)

    def test_preexisting_entry_is_rejected_before_ownership_scan(self):
        before=copy.deepcopy(self.before);before['functions'].append(dict(address=0x5354a4));self.reject(self.witness,before)

    def test_module_source_credit_and_self_admission_are_rejected(self):
        for field,changed in [('sourceCreditGranted',1),('inventoryAdmissionGranted',True),('instructionClassificationBytesAdded',4)]:
            value=self.changed();value[field]=changed
            with self.subTest(field=field):self.reject(value)
        value=self.changed();value['canonicalIdentity']['moduleSha256']='0'*64;self.reject(value)

    def test_function_and_literal_spans_are_checked_against_original_bytes(self):
        value=self.changed();value['proposedFunctions'][0]['excludedLiteralPools'][0]['sha256']='0'*64;self.reject(value)
        value=self.changed();value['proposedFunctions'][0]['instructionRanges'][0]['sha256']='0'*64;self.reject(value)


if __name__=='__main__':
    unittest.main()
