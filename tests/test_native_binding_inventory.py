import copy
import hashlib
import json
from pathlib import Path
import struct
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_binding_inventory as inventory


class BindingInventoryTests(unittest.TestCase):
    def setUp(self):
        self.origin = 0x100000
        self.image = bytearray(0x7c8000)
        self.packet = json.loads((ROOT / 'evidence/verification/sdk-runtime-binding-inventory.json').read_bytes())
        self.current = dict(functions=[dict(address=a, mode='ARM', textBodyBytes=n,
            ranges=[dict(start=a, endExclusive=a + n, bytes=n)], acceptedSourceBytes=0)
            for a, n in [(0x484660, 800), (0x479edc, 276), (0x481940, 612), (0x47a4a4, 80)]], functionCount=4)
        for row in self.packet['functions']:
            for pc in range(row['address'], row['instructionRange']['endExclusive'], 4):
                self.put(pc, 0xe1a00000)
            self.put(inventory.TABLE + row['slot'] * 4, row['address'])
        for row in self.packet['constructors']:
            low, high = row['load']['address'], row['store']['address']
            for pc in range(low, high + 4, 4):
                self.put(pc, 0xe1a03003)
            self.put(low, 0xe59f0000 | (row['literal'] - low - 8))
            self.put(high, 0xe5840000)
            self.put(row['literal'], row['table'])
        for row in self.packet['routes']:
            for pc in range(row['load'], row['transfer'] + 4, 4):
                self.put(pc, 0xe1a00000)
            self.put(row['load'], 0xe5912000 | row['slot'] * 4)
            self.put(row['transfer'], 0xe12fff12 if row['caller'] == 0x479ffc else 0xe12fff32)
        self.refresh()

    def put(self, address, value):
        struct.pack_into('<I', self.image, address - self.origin, value)

    def refresh(self):
        self.base = dict(codeSha256=hashlib.sha256(self.image).hexdigest(), initializedTextStart=self.origin,
                         initializedTextGrossBytes=7051280)
        self.packet['moduleSha256'] = self.base['codeSha256']
        for row in self.packet['functions']:
            p = row['instructionRange']
            p['sha256'] = hashlib.sha256(self.image[p['start'] - self.origin:p['endExclusive'] - self.origin]).hexdigest()
        for row in self.packet['constructors']:
            for key in ('load', 'store'):
                p = row[key]
                p['sha256'] = hashlib.sha256(self.image[p['address'] - self.origin:p['address'] - self.origin + p['bytes']]).hexdigest()
        for row in self.packet['routes']:
            p = row['instructions']
            p['sha256'] = hashlib.sha256(self.image[p['start'] - self.origin:p['endExclusive'] - self.origin]).hexdigest()

    def validate(self):
        return inventory.validate(self.base, self.current, self.packet, bytes(self.image))

    def test_actual_constructor_slot_and_call_contract_adds_seven_without_credit(self):
        result = self.validate()
        self.assertEqual(result['functionCount'], 11)
        self.assertEqual(sum(r['textBodyBytes'] for r in result['functions']) - sum(r['textBodyBytes'] for r in self.current['functions']), 300)
        self.assertTrue(all(r['acceptedSourceBytes'] == 0 for r in result['functions']))

    def test_table_pointer_without_constructor_install_is_rejected(self):
        self.packet['constructors'].pop()
        with self.assertRaises(ValueError):
            self.validate()

    def test_constructor_literal_without_store_is_rejected(self):
        self.put(self.packet['constructors'][0]['store']['address'], 0xe1a00000)
        self.refresh()
        with self.assertRaises(ValueError):
            self.validate()

    def test_virtual_target_overwritten_before_transfer_is_rejected(self):
        row = next(r for r in self.packet['routes'] if r['transfer'] - r['load'] >= 8)
        self.put(row['load'] + 4, 0xe3a02000)
        self.refresh()
        with self.assertRaises(ValueError):
            self.validate()

    def test_wrong_actual_slot_target_is_rejected(self):
        self.put(inventory.TABLE + 13 * 4, 0x47a028)
        self.refresh()
        with self.assertRaises(ValueError):
            self.validate()

    def test_missing_real_caller_is_rejected(self):
        self.packet['routes'] = [r for r in self.packet['routes'] if r['target'] != 0x47a008]
        with self.assertRaises(ValueError):
            self.validate()

    def test_partial_body_is_rejected(self):
        self.packet['functions'][0]['instructionRange']['endExclusive'] -= 4
        with self.assertRaises(ValueError):
            self.validate()

    def test_wrong_instruction_mode_is_rejected(self):
        self.packet['functions'][0]['mode'] = 'Thumb'
        with self.assertRaises(ValueError):
            self.validate()

    def test_prior_function_ownership_is_never_reused(self):
        row = copy.deepcopy(self.packet['functions'][0])
        self.current['functions'].append(dict(address=row['address'], ranges=[row['instructionRange']]))
        with self.assertRaises(ValueError):
            self.validate()

    def test_inventory_cannot_claim_source_credit(self):
        self.packet['sourceCreditGranted'] = 1
        with self.assertRaises(ValueError):
            self.validate()


if __name__ == '__main__':
    unittest.main()
