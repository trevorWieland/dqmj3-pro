import copy
import json
from pathlib import Path
import sys
import unittest

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import native_namespace_inventory as inventory


class NamespaceInventoryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.base=json.loads((ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_bytes())
        cls.before,_=inventory.predecessor.compose(ROOT,cls.base)
        folder=ROOT/'evidence/lanes/native-file071072-inventory/public-inputs-v1'
        cls.witness=json.loads((folder/'inventory-proposal-v1.json').read_bytes())
        cls.dynamic=json.loads((folder/'dynamic-proof-v1.json').read_bytes())
        cls.image=(ROOT/'generated/update-content0/code.bin').read_bytes()

    def reject(self,witness=None,dynamic=None,before=None,image=None):
        with self.assertRaises(ValueError):
            inventory.validate(self.base,self.before if before is None else before,
                self.witness if witness is None else witness,self.dynamic if dynamic is None else dynamic,
                self.image if image is None else image)

    def test_three_entries_reparent_alias_preserve_others_and_gross_text(self):
        result=inventory.validate(self.base,self.before,self.witness,self.dynamic,self.image)
        old={r['address']:r for r in self.before['functions']}
        new={r['address']:r for r in result['functions']}
        self.assertEqual(result['functionCount'],26676)
        self.assertTrue(all(new[a]==r for a,r in old.items()if a!=0x117378))
        self.assertEqual(new[0x117378]['textBodyBytes'],108)
        self.assertEqual(new[0x123114]['textBodyBytes'],204)
        self.assertFalse(new[0x44df60]['entryInstructionDefined'])
        self.assertEqual(sum(r['textBodyBytes']for r in new.values())-sum(r['textBodyBytes']for r in old.values()),84)
        self.assertEqual(result['initializedTextGrossBytes'],7051280)
        self.assertTrue(all(new[a]['acceptedSourceBytes']==0 for a in inventory.EXTENTS))

    def test_only_coordinator_approved_namespace_layer_is_composed(self):
        result, references=inventory.compose(ROOT,self.base)
        self.assertEqual(result['functionCount'],26676)
        self.assertFalse(result['historicalFunctionCompletenessClaim'])
        self.assertEqual(references[-1]['path'],'evidence/lanes/native-file071072-inventory/public-inputs-v1/inventory-proposal-v1.json')

    def test_wrong_original_image_rejected(self):
        image=bytearray(self.image);image[0]^=1;self.reject(image=bytes(image))

    def test_source_credit_in_proposal_rejected(self):
        value=copy.deepcopy(self.witness);value['sourceCreditGranted']=1;self.reject(witness=value)

    def test_self_admission_rejected(self):
        value=copy.deepcopy(self.witness);value['canonicalAdmissionPerformed']=True;self.reject(witness=value)

    def test_preexisting_entry_rejected(self):
        before=copy.deepcopy(self.before);before['functions'].append(self.witness['proposedAddedRows'][0]);self.reject(before=before)

    def test_historical_owner_cannot_keep_alias_overlap(self):
        value=copy.deepcopy(self.witness);value['proposedRetainedOwner']['ranges']=value['oldOwner']['ranges'];self.reject(witness=value)

    def test_literal_pool_cannot_be_counted_as_instructions(self):
        value=copy.deepcopy(self.witness);value['candidates'][1]['instructionRanges'][0]['endExclusive']+=8;self.reject(witness=value)

    def test_omitted_literal_reader_rejected(self):
        value=copy.deepcopy(self.witness);value['candidates'][1]['literalReaders'].pop();self.reject(witness=value)

    def test_omitted_call_edge_rejected(self):
        value=copy.deepcopy(self.witness);value['candidates'][3]['calls'].pop();self.reject(witness=value)

    def test_unclassified_stream_cannot_be_relabelled_originally_defined(self):
        value=copy.deepcopy(self.witness);value['proposedAddedRows'][2]['entryInstructionDefined']=True;self.reject(witness=value)

    def test_thumb_caller_cannot_be_relabelled_arm(self):
        value=copy.deepcopy(self.dynamic);value['genuineIncomingEdges'][0]['sourceMode']='ARM';self.reject(dynamic=value)

    def test_incoming_opcode_identity_checked(self):
        value=copy.deepcopy(self.dynamic);value['genuineIncomingEdges'][0]['instructionSha256']='0'*64;self.reject(dynamic=value)

    def test_stream_failure_positions_must_remain_unvisited(self):
        value=copy.deepcopy(self.dynamic);value['unvisitedPositions']['0x44df60']=[];self.reject(dynamic=value)

    def test_restored_frame_evidence_required(self):
        value=copy.deepcopy(self.dynamic);value['oldCallerTail']['restoredSpLrAndSavedRegisters']=False;self.reject(dynamic=value)

    def test_prior_classification_cannot_be_rewritten(self):
        value=copy.deepcopy(self.witness);value['originalClassificationCrossTable']['unclassified']['ownershipDelta']=0;self.reject(witness=value)

    def test_discovered_count_cannot_change_without_accounting(self):
        value=copy.deepcopy(self.witness);value['byteAccounting']['proposedDiscoveredEntries']+=1;self.reject(witness=value)


if __name__=='__main__':
    unittest.main()
