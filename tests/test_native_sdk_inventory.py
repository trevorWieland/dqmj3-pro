import copy
import hashlib
import json
from pathlib import Path
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_sdk_inventory as inventory


class SdkInventoryTests(unittest.TestCase):
    def setUp(self):
        self.origin = 0x100000
        self.image = bytearray(0x7c8000)
        self.packet = json.loads((ROOT / 'evidence/verification/sdk062-inventory.json').read_bytes())
        self.base = dict(initializedTextStart=self.origin, initializedTextGrossBytes=7051280)
        parent = dict(address=0x13c428, mode='ARM', textBodyBytes=180,
            ranges=[dict(start=0x13c428, endExclusive=0x13c4dc, bytes=180)], acceptedSourceBytes=0)
        self.current = dict(functions=[parent], functionCount=1)
        for row in self.packet['functions']:
            start, size = row['address'], row['instructionRange']['bytes']
            if row['mode'] == 'ARM':
                for pc in range(start, start + size, 4):
                    self.put(pc, 0xe1a00000)
        for row in self.packet['functions']:
            evidence = row['entryWitness']
            if evidence is None:
                continue
            witness = evidence['vtableWitness']
            self.put(witness['slotAddress'], row['address'])
            constructor = evidence['constructorInstructionWitness']
            literal = evidence.get('constructorVtableLiteral')
            if constructor is None:
                alternative = evidence['factoryConstructorVtableWitnesses'][0]
                constructor = alternative['instructions']
                literal = dict(reader=alternative['reader'], address=alternative['literal'])
            for pc in range(constructor['start'], constructor['endExclusive'], 4):
                self.put(pc, 0xe1a00000)
            displacement = literal['address'] - literal['reader'] - 8
            self.assertTrue(0 <= displacement <= 4095)
            self.put(literal['reader'], 0xe59f0000 | displacement)
            self.put(constructor['endExclusive'] - 4, 0xe5840000)
            self.put(literal['address'], witness['table'])
            caller = evidence.get('actualIndirectCallerWitness')
            if caller:
                for pc in range(caller['start'], caller['endExclusive'], 4):
                    self.put(pc, 0xe1a00000)
                self.put(caller['start'], 0xe5901000 | witness['slot'] * 4)
                self.put(caller['start'] + 4, 0xe12fff11)
        self.put(0x13c484, 0xe8bd4070)
        self.put(0x13c488, 0xe1a00000)
        offset = (0x13c48c - 0x1707cc - 8) // 4
        self.put(0x1707cc, 0xea000000 | (offset & 0xffffff))
        displacement = 0x103540 - 0x10414e - 4
        halfwords = [0x2000, 0xb510, 0xf000 | ((displacement >> 12) & 0x7ff),
                     0xf800 | ((displacement >> 1) & 0x7ff), 0xbd10]
        for index, value in enumerate(halfwords):
            self.put(0x10414a + index * 2, value, 2)
        self.put(0x855898, 0x10414b)
        self.refresh()

    def put(self, address, value, size=4):
        self.image[address - self.origin:address - self.origin + size] = value.to_bytes(size, 'little')

    def hash_span(self, row):
        row['sha256'] = hashlib.sha256(self.image[row['start'] - self.origin:
            row['endExclusive'] - self.origin]).hexdigest()

    def refresh(self):
        self.base['codeSha256'] = self.packet['moduleSha256'] = hashlib.sha256(self.image).hexdigest()
        for row in self.packet['functions']:
            self.hash_span(row['instructionRange'])
            evidence = row['entryWitness']
            if evidence:
                slot = evidence['vtableWitness']['slotAddress'] - self.origin
                evidence['vtableWitness']['slotSha256'] = hashlib.sha256(self.image[slot:slot + 4]).hexdigest()
                for key in ('constructorInstructionWitness', 'actualIndirectCallerWitness'):
                    if evidence.get(key):
                        self.hash_span(evidence[key])
                for item in evidence.get('factoryConstructorVtableWitnesses', []):
                    self.hash_span(item['instructions'])
        for row in self.packet['sharedTailReview']['spanWitnesses']:
            self.hash_span(row)

    def validate(self):
        return inventory.validate(self.base, self.current, self.packet, bytes(self.image))

    def test_shared_tail_has_exclusive_ownership_and_preserved_dependency(self):
        result = self.validate()
        parent = next(row for row in result['functions'] if row['address'] == 0x13c428)
        self.assertEqual(parent['textBodyBytes'], 100)
        self.assertEqual(parent['fallthroughDependencies'], [0x13c48c])
        self.assertEqual(result['functionCount'], 12)
        self.assertEqual(sum(row['textBodyBytes'] for row in result['functions']), 180 + 190)
        self.assertTrue(all(row.get('acceptedSourceBytes', 0) == 0 for row in result['functions']))

    def test_missing_tail_dependency_is_rejected(self):
        self.packet['sharedTailReview']['parentFallthrough']['fullParentBehaviorRequiresTailDependency'] = False
        with self.assertRaisesRegex(ValueError, 'dependency omitted'):
            self.validate()

    def test_wrong_caller_return_restore_is_rejected(self):
        self.put(0x13c484, 0xe8bd8070)
        self.refresh()
        with self.assertRaisesRegex(ValueError, 'restore its caller'):
            self.validate()

    def test_forged_vtable_slot_is_rejected(self):
        row = next(row for row in self.packet['functions'] if row['address'] == 0x46028c)
        row['entryWitness']['vtableWitness']['slot'] = 10
        with self.assertRaisesRegex(ValueError, 'vtable entry changed'):
            self.validate()

    def test_constructor_that_does_not_store_vtable_is_rejected(self):
        row = next(row for row in self.packet['functions'] if row['address'] == 0x46028c)
        self.put(row['entryWitness']['constructorInstructionWitness']['endExclusive'] - 4, 0xe1a00000)
        self.refresh()
        with self.assertRaisesRegex(ValueError, 'literal/store provenance'):
            self.validate()

    def test_partial_complete_entry_is_rejected(self):
        self.packet['functions'][0]['instructionRange']['endExclusive'] -= 4
        self.packet['functions'][0]['instructionRange']['bytes'] -= 4
        self.refresh()
        with self.assertRaisesRegex(ValueError, 'complete entry extent'):
            self.validate()

    def test_wrong_thumb_mode_is_rejected(self):
        row = next(row for row in self.packet['functions'] if row['address'] == 0x10414a)
        row['mode'] = 'ARM'
        with self.assertRaisesRegex(ValueError, 'complete entry extent'):
            self.validate()

    def test_duplicate_instruction_owner_is_rejected(self):
        self.current['functions'].append(dict(address=0x200000, mode='ARM',
            ranges=[dict(start=0x46028c, endExclusive=0x4602a0, bytes=20)], textBodyBytes=20))
        with self.assertRaisesRegex(ValueError, 'exclusive ownership'):
            self.validate()

    def test_duplicate_entry_is_rejected(self):
        self.packet['functions'].append(copy.deepcopy(self.packet['functions'][0]))
        with self.assertRaisesRegex(ValueError, 'Duplicate'):
            self.validate()

    def test_source_credit_is_rejected(self):
        self.packet['sourceCreditGranted'] = 1
        with self.assertRaisesRegex(ValueError, 'identity, denominator or totals'):
            self.validate()


if __name__ == '__main__':
    unittest.main()
