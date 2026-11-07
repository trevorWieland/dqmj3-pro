import copy
import hashlib
import json
from pathlib import Path
import struct
import sys
import unittest


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_census_overlay as overlay


class OverlayGuards(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.base = json.loads((ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json').read_text())
        cls.packet = json.loads((ROOT / 'evidence/lanes/wave013-native/method-dispatch-overlay.json').read_text())
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()

    def test_original_bytes_and_table_ownership_add_only_discovered_entries(self):
        rows = overlay.validate(self.base, self.packet, self.image)
        self.assertEqual(len(rows), 44)
        self.assertEqual(sum(row['textBodyBytes'] for row in rows), 3172)
        self.assertTrue(all(row['acceptedSourceBytes'] == 0 for row in rows))
        exact = next(row for row in rows if row['address'] == 0x4bfcbc)
        self.assertEqual(exact['ranges'], [{'start': 0x4bfcbc, 'endExclusive': 0x4bfcc4, 'bytes': 8}])

    def test_changed_original_module_rejects(self):
        image = bytearray(self.image)
        image[0] ^= 1
        with self.assertRaisesRegex(ValueError, 'module'):
            overlay.validate(self.base, self.packet, image)

    def test_existing_function_cannot_be_reintroduced(self):
        packet = copy.deepcopy(self.packet)
        packet['functions'][0]['canonicalIdentity']['address'] = self.base['functions'][0]['address']
        with self.assertRaisesRegex(ValueError, 'duplicates'):
            overlay.validate(self.base, packet, self.image)

    def test_virtual_or_adjusted_table_target_rejects_even_with_rehashed_image(self):
        image = bytearray(self.image)
        packet = copy.deepcopy(self.packet)
        table = packet['tables'][0]
        struct.pack_into('<I', image, table['start'] - 0x100000 + 4, 1)
        digest = hashlib.sha256(image).hexdigest()
        base = dict(self.base, codeSha256=digest)
        packet['moduleSha256'] = digest
        table['sha256'] = hashlib.sha256(image[table['start'] - 0x100000:table['start'] - 0x100000 + table['bytes']]).hexdigest()
        with self.assertRaisesRegex(ValueError, 'adjustment'):
            overlay.validate(base, packet, image)

    def test_instruction_range_cannot_be_moved_without_a_matching_witness(self):
        packet = copy.deepcopy(self.packet)
        part = packet['functions'][0]['instructionRanges'][0]
        part['sha256'] = '0' * 64
        with self.assertRaisesRegex(ValueError, 'range'):
            overlay.validate(self.base, packet, self.image)

    def test_credit_cannot_be_granted_by_an_inventory_overlay(self):
        packet = dict(self.packet, sourceCreditGranted=8)
        with self.assertRaisesRegex(ValueError, 'credit'):
            overlay.validate(self.base, packet, self.image)

    def test_shared_hex_tail_cannot_be_owned_twice(self):
        packet = copy.deepcopy(self.packet)
        packet['sharedTailAliases'][0]['physicalOwner'] = 0x4bfcbc
        with self.assertRaisesRegex(ValueError, 'Shared-tail'):
            overlay.validate(self.base, packet, self.image)

    def test_plain_vtable_slot_validates_its_distinct_encoding(self):
        path = ROOT / 'evidence/verification/array007-function-overlay.json'
        packet = json.loads(path.read_text())
        rows = overlay.validate(self.base, packet, self.image)
        self.assertEqual([(row['address'], row['textBodyBytes']) for row in rows], [(0x665c60, 96)])
        self.assertEqual(rows[0]['calledFunctionAddresses'], [0x24d73c, 0x77f3f8])

    def test_null_vtable_slot_is_not_an_approved_function_entry(self):
        packet = json.loads((ROOT / 'evidence/verification/weak014-function-overlay.json').read_text())
        rows = overlay.validate(self.base, packet, self.image)
        self.assertEqual({row['address'] for row in rows}, {0x6a7780, 0x6a77c0})
        self.assertEqual(sum(row['textBodyBytes'] for row in rows), 108)
        self.assertTrue(all(row['acceptedSourceBytes'] == 0 for row in rows))

    def test_callable_vtable_target_cannot_be_hidden_as_null(self):
        packet = json.loads((ROOT / 'evidence/verification/weak014-function-overlay.json').read_text())
        packet['tables'][0]['entries'][0]['null'] = True
        packet['tables'][0]['entries'][0]['mode'] = None
        with self.assertRaisesRegex(ValueError, 'Null vtable'):
            overlay.validate(self.base, packet, self.image)

    def test_null_vtable_slot_cannot_claim_a_function_identity(self):
        packet = json.loads((ROOT / 'evidence/verification/weak014-function-overlay.json').read_text())
        packet['tables'][0]['entries'][1]['target'] = 0x6a7780
        with self.assertRaisesRegex(ValueError, 'Null vtable'):
            overlay.validate(self.base, packet, self.image)

    def test_member_pair_cannot_be_reinterpreted_as_a_plain_vtable(self):
        packet = copy.deepcopy(self.packet)
        packet['tables'][0]['encoding'] = 'vtable-function-pointer'
        with self.assertRaisesRegex(ValueError, 'table'):
            overlay.validate(self.base, packet, self.image)


if __name__ == '__main__':
    unittest.main()
