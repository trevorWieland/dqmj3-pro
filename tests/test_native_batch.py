import copy
import json
import sys
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
from native_batch import load_plan
from native_batch_proof import behavior, selection, selection_hash


class NativeBatchTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.plan = load_plan(ROOT / 'config/native-batches/bundle003.json')
        cls.packets = {lane['id']: json.loads((ROOT / 'evidence/lanes' / lane['id'] / 'packet.json').read_text())
                       for lane in cls.plan['lanes']}

    def selected(self, lane):
        return next(row for row in self.packets[lane]['functions']
                    if row['exactObjectSpan'] and row['exactLinkedSpan'])

    def test_reviewed_selections_are_frozen(self):
        for lane in self.plan['lanes']:
            rows = selection(ROOT, self.packets[lane['id']])
            self.assertEqual(selection_hash(rows), lane['selectionSha256'])
            self.assertEqual((len(rows), sum(row['instructionBytes'] for row in rows)),
                             (lane['functions'], lane['instructionBytes']))

    def test_nonmatching_source_has_no_admitted_selection(self):
        packet = copy.deepcopy(self.packets['wave008-native'])
        for row in packet['functions']:
            row['exactObjectSpan'] = False
        self.assertEqual(selection(ROOT, packet), [])

    def test_selection_detects_wrong_source_identity(self):
        rows = selection(ROOT, self.packets['wave007-native'])
        before = selection_hash(rows)
        rows[0]['sourceSha256'] = '0' * 64
        self.assertNotEqual(selection_hash(rows), before)

    def test_reviewed_behavior_contracts_pass(self):
        for lane, packet in self.packets.items():
            for row in packet['functions']:
                if row['exactObjectSpan'] and row['exactLinkedSpan']:
                    behavior(lane, packet, row)

    def test_missing_instruction_coverage_fails(self):
        row = copy.deepcopy(self.selected('wave007-native'))
        row['behavior']['allOwnedInstructionsCovered'] = False
        with self.assertRaises(ValueError):
            behavior('wave007-native', self.packets['wave007-native'], row)

    def test_negative_must_return_a_different_value(self):
        packet = copy.deepcopy(self.packets['wave007-native'])
        row = self.selected('wave007-native')
        control = next(item for item in packet['negativeControls']
                       if item['address'] == row['canonicalIdentity']['address'])
        control['actualReturnU32'] = control['expectedReturnU32']
        with self.assertRaises(ValueError):
            behavior('wave007-native', packet, row)

    def test_missing_source_returns_fail(self):
        row = copy.deepcopy(self.selected('wave008-native'))
        row['behavior']['sourceActualReturns'] -= 1
        with self.assertRaises(ValueError):
            behavior('wave008-native', self.packets['wave008-native'], row)

    def test_faulting_negative_cannot_replace_semantic_failure(self):
        row = copy.deepcopy(self.selected('wave008-native'))
        row['negativeControl']['observation']['returnedToSentinel'] = False
        with self.assertRaises(ValueError):
            behavior('wave008-native', self.packets['wave008-native'], row)

    def test_negative_needs_observable_discrepancy(self):
        row = copy.deepcopy(self.selected('wave008-native'))
        value = row['negativeControl']['observation']
        value['actualReturn'] = value['expectedReturn']
        value['memorySha256'] = value['expectedMemorySha256']
        with self.assertRaises(ValueError):
            behavior('wave008-native', self.packets['wave008-native'], row)

    def test_unknown_lane_cannot_self_admit(self):
        with self.assertRaises(ValueError):
            behavior('unreviewed', self.packets['wave007-native'], self.selected('wave007-native'))

    def test_boolean_cannot_claim_test_count(self):
        row = copy.deepcopy(self.selected('wave007-native'))
        row['behavior']['cases'] = True
        with self.assertRaises(ValueError):
            behavior('wave007-native', self.packets['wave007-native'], row)


if __name__ == '__main__':
    unittest.main()
