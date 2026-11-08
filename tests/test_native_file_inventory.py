import copy
import hashlib
import json
from pathlib import Path
import struct
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_file_inventory as inventory


class FileInventoryTests(unittest.TestCase):
    def setUp(self):
        self.origin = 0x100000
        self.image = bytearray(0x7c8000)
        path = ROOT / 'evidence/verification/file-callable-inventory.json'
        self.packet = json.loads(path.read_bytes())
        self.current = dict(functionCount=4, functions=[
            dict(address=address, mode='ARM', textBodyBytes=size,
                 ranges=[dict(start=address, endExclusive=address + size, bytes=size)],
                 acceptedSourceBytes=0)
            for address, size in ((0x153cc8, 92), (0x10c550, 268),
                                  (0x127e6c, 128), (0x145ac0, 16))])
        for row in self.packet['functions']:
            for part in row['instructionRanges']:
                self.fill(part['start'], part['endExclusive'])
        for row in self.packet['constructors']:
            self.fill(row['load'], row['store'] + 4)
            self.put(row['load'], 0xe59f2000 | (row['literal'] - row['load'] - 8))
            register = {'r0': 0, 'r1': 1, 'sp': 13}[row['baseRegister']]
            self.put(row['store'], 0xe5802000 | (register << 16) | row['offset'])
            self.put(row['literal'], row['value'])
        for address, values in inventory.TABLES.items():
            for index, value in enumerate(values):
                self.put(address + index * 4, value)
        for row in self.packet['routes']:
            self.fill(row['instructions']['start'], row['instructions']['endExclusive'])
            self.put(row['load'], 0xe5912000 | row['slot'] * 4)
            self.put(row['transfer'], 0xe12fff12)
        for row in self.packet['directCalls']:
            self.branch(row['address'], row['target'])
        self.put(0x5f35d8, 0xe3540005)
        self.put(0x5f35dc, 0x379ff104)
        for index, value in enumerate((0x5f35f8, 0x5f35f8, 0x5f35f8, 0x5f3618, 0x5f35f8)):
            self.put(0x5f35e4 + index * 4, value)
        self.refresh()

    def put(self, address, value):
        struct.pack_into('<I', self.image, address - self.origin, value)

    def fill(self, start, end):
        for address in range(start, end, 4):
            self.put(address, 0xe1a03003)

    def branch(self, address, target):
        self.put(address, 0xeb000000 | (((target - address - 8) // 4) & 0xffffff))

    def refresh(self):
        self.base = dict(codeSha256=hashlib.sha256(self.image).hexdigest(),
                         initializedTextStart=self.origin, initializedTextGrossBytes=7051280)
        self.packet['moduleSha256'] = self.base['codeSha256']
        parts = [part for row in self.packet['functions'] for part in row['instructionRanges']]
        parts += [row['instructions'] for key in ('constructors', 'routes', 'directCalls')
                  for row in self.packet[key]]
        parts += [row['instructionsOrData'] for row in self.packet['tables']]
        parts += list(self.packet['dispatch'].values())
        for part in parts:
            part['sha256'] = hashlib.sha256(
                self.image[part['start'] - self.origin:part['endExclusive'] - self.origin]).hexdigest()

    def validate(self):
        return inventory.validate(self.base, self.current, self.packet, bytes(self.image))

    def test_nine_callable_entries_add_224_instruction_bytes_and_no_data_or_source_credit(self):
        result = self.validate()
        self.assertEqual(result['functionCount'], 13)
        self.assertEqual(sum(row['textBodyBytes'] for row in result['functions'])
                         - sum(row['textBodyBytes'] for row in self.current['functions']), 224)
        dispatch = next(row for row in result['functions'] if row['address'] == 0x5f35bc)
        self.assertEqual(dispatch['textBodyBytes'], 100)
        self.assertEqual(len(dispatch['ranges']), 2)
        self.assertTrue(all(row['acceptedSourceBytes'] == 0 for row in result['functions']))

    def test_constructor_loaded_pointer_clobber_is_rejected(self):
        row = self.packet['constructors'][0]
        self.put(row['load'] + 4, 0xe3a02000)
        self.refresh()
        with self.assertRaises(ValueError):
            self.validate()

    def test_constructor_store_to_another_object_is_rejected(self):
        row = next(row for row in self.packet['constructors'] if row['baseRegister'] == 'r1')
        self.put(row['store'], 0xe5802000)
        self.refresh()
        with self.assertRaises(ValueError):
            self.validate()

    def test_descriptor_store_to_wrong_field_is_rejected(self):
        row = next(row for row in self.packet['constructors'] if row['offset'] == 0x24)
        self.put(row['store'], 0xe58d2028)
        self.refresh()
        with self.assertRaises(ValueError):
            self.validate()

    def test_missing_descriptor_constructor_is_rejected(self):
        self.packet['constructors'].pop()
        with self.assertRaises(ValueError):
            self.validate()

    def test_wrong_provider_table_target_is_rejected(self):
        self.put(0x858eb4 + 5 * 4, 0x6ec778)
        self.refresh()
        with self.assertRaises(ValueError):
            self.validate()

    def test_indirect_pointer_clobber_is_rejected(self):
        self.put(0x127ed8, 0xe3a02000)
        self.refresh()
        with self.assertRaises(ValueError):
            self.validate()

    def test_wrong_direct_getter_call_is_rejected(self):
        self.branch(0x5f35c8, 0x6ec754)
        self.refresh()
        with self.assertRaises(ValueError):
            self.validate()

    def test_unsigned_dispatch_limit_is_required(self):
        self.put(0x5f35d8, 0xe3540006)
        self.refresh()
        with self.assertRaises(ValueError):
            self.validate()

    def test_dispatch_target_must_be_inside_measured_code_arm(self):
        self.put(0x5f35e4, 0x5f35e4)
        self.refresh()
        with self.assertRaises(ValueError):
            self.validate()

    def test_indexed_table_bytes_cannot_be_claimed_as_instructions(self):
        row = next(row for row in self.packet['functions'] if row['address'] == 0x5f35bc)
        row['instructionRanges'][0]['endExclusive'] += 20
        row['instructionRanges'][0]['bytes'] += 20
        self.refresh()
        with self.assertRaises(ValueError):
            self.validate()

    def test_partial_tail_range_is_rejected(self):
        self.packet['functions'][-1]['instructionRanges'][-1]['bytes'] -= 4
        self.packet['functions'][-1]['instructionRanges'][-1]['endExclusive'] -= 4
        self.refresh()
        with self.assertRaises(ValueError):
            self.validate()

    def test_prior_instruction_ownership_cannot_be_reused(self):
        row = copy.deepcopy(self.packet['functions'][0])
        self.current['functions'].append(dict(address=row['address'], ranges=row['instructionRanges']))
        with self.assertRaises(ValueError):
            self.validate()

    def test_wrong_instruction_mode_is_rejected(self):
        self.packet['functions'][0]['mode'] = 'Thumb'
        with self.assertRaises(ValueError):
            self.validate()

    def test_missing_getter_entry_is_rejected(self):
        self.packet['functions'].pop()
        with self.assertRaises(ValueError):
            self.validate()

    def test_inventory_cannot_grant_source_credit(self):
        self.packet['sourceCreditGranted'] = 1
        with self.assertRaises(ValueError):
            self.validate()


if __name__ == '__main__':
    unittest.main()
