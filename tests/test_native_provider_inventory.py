import copy
import hashlib
from pathlib import Path
import struct
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
import native_provider_inventory as inventory


class ProviderInventoryTests(unittest.TestCase):
    def setUp(self):
        self.origin = 0x100000
        self.image = bytearray(0x740000)
        owners = {}
        rows = []
        for kind, profile in inventory.PROFILES.items():
            for owner, start, end in profile['owners']:
                owners.setdefault(owner, []).append(dict(start=start, endExclusive=end, bytes=end-start))
            start, size = profile['address'], profile['size']
            width = 2 if profile['mode'] == 'Thumb' else 4
            for at in range(start, start + size, width):
                self.put(at, 0x46c0 if width == 2 else 0xe1a00000, width)
            for at, value in profile['words'].items(): self.put(at, value)
            for at, value in profile['halves'].items(): self.put(at, value, 2)
            if 'branch' in profile:
                at, target = profile['branch']
                self.put(at, 0xea000000 | (((target-at-8)//4) & 0xffffff))
            rows.append(dict(canonicalIdentity=dict(programId='0004000e001acb00', moduleSha256='',
                address=start, mode=profile['mode']), witnessKind=kind,
                instructionRange=dict(start=start, endExclusive=start+size, bytes=size,
                    instructions=size//width, sha256='', priorClassification=(
                        'unclassified' if kind == 'snapshot-array-constructor' else 'defined-unowned-instruction')),
                witnessRanges=[dict(start=a, bytes=n, sha256='')for a,n in profile['witnesses']],
                sourceCreditRequested=0))
        self.current = dict(functions=[dict(address=a, mode='ARM', ranges=p)for a,p in owners.items()])
        self.base = dict(codeSha256='', initializedTextStart=self.origin,
            initializedTextGrossBytes=0x6c0000, unclassifiedTextRanges=[dict(start=0x664800,endExclusive=0x664818)],
            instructionRanges=[dict(start=0x100670,endExclusive=0x10069c),dict(start=0x6cb234,endExclusive=0x6cb248)],
            definedDataRanges=[])
        self.packet = dict(moduleSha256='', sourceCreditGranted=0, initializedTextByteDenominatorChanged=False,
            functions=rows, newCandidateFunctions=3, newInstructionUnionBytes=88)
        self.refresh()

    def put(self, address, value, width=4):
        self.image[address-self.origin:address-self.origin+width] = value.to_bytes(width, 'little')

    def refresh(self):
        module = hashlib.sha256(self.image).hexdigest()
        self.base['codeSha256'] = self.packet['moduleSha256'] = module
        for row in self.packet['functions']:
            row['canonicalIdentity']['moduleSha256'] = module
            for part in [row['instructionRange'], *row['witnessRanges']]:
                start = part['start'];size = part['bytes']
                part['sha256'] = hashlib.sha256(self.image[start-self.origin:start-self.origin+size]).hexdigest()

    def validate(self):
        return inventory.validate(self.base, self.current, self.packet, bytes(self.image))

    def test_original_control_flow_proves_three_entries_without_source_credit(self):
        rows = self.validate()
        self.assertEqual(sum(x['textBodyBytes']for x in rows), 88)
        self.assertEqual([x['mode']for x in rows], ['Thumb','ARM','ARM'])
        self.assertTrue(all(x['acceptedSourceBytes'] == 0 for x in rows))

    def test_invalid_inventory_or_credit_totals_rejected(self):
        for field,value in [('newCandidateFunctions',4),('newInstructionUnionBytes',92),
                ('sourceCreditGranted',1),('initializedTextByteDenominatorChanged',True)]:
            with self.subTest(field=field):
                packet = copy.deepcopy(self.packet);packet[field] = value
                with self.assertRaises(ValueError):inventory.validate(self.base,self.current,packet,bytes(self.image))

    def test_wrong_mode_or_entry_identity_rejected(self):
        for field,value in [('mode','ARM'),('address',0x100671),('programId','other')]:
            packet=copy.deepcopy(self.packet);packet['functions'][0]['canonicalIdentity'][field]=value
            with self.subTest(field=field),self.assertRaises(ValueError):
                inventory.validate(self.base,self.current,packet,bytes(self.image))

    def test_missing_or_truncated_caller_ownership_rejected(self):
        self.current['functions'][0]['ranges'] = []
        with self.assertRaises(ValueError):self.validate()

    def test_thumb_interworking_bit_cannot_be_removed_even_after_rehash(self):
        self.put(0x100668,0xe28fc000);self.refresh()
        with self.assertRaises(ValueError):self.validate()

    def test_wrong_seed_tail_target_rejected_after_rehash(self):
        self.put(0x107ab4,0xea000000);self.refresh()
        with self.assertRaises(ValueError):self.validate()

    def test_vtable_target_mismatch_rejected_after_rehash(self):
        self.put(0x831bfc,0x6cb238);self.refresh()
        with self.assertRaises(ValueError):self.validate()

    def test_wrong_vtable_installation_or_virtual_slot_rejected(self):
        for at,value in [(0x3dcef4,0xe5801000),(0x6b6558,0xe5903014)]:
            with self.subTest(address=at):
                original=self.image[at-self.origin:at-self.origin+4]
                self.put(at,value);self.refresh()
                with self.assertRaises(ValueError):self.validate()
                self.image[at-self.origin:at-self.origin+4]=original;self.refresh()

    def test_constructor_size_and_callback_literal_are_both_bound(self):
        for at,value in [(0x662a44,2700),(0x662a48,0x664804)]:
            with self.subTest(address=at):
                original=self.image[at-self.origin:at-self.origin+4]
                self.put(at,value);self.refresh()
                with self.assertRaises(ValueError):self.validate()
                self.image[at-self.origin:at-self.origin+4]=original;self.refresh()

    def test_actual_array_helper_must_call_captured_callback_register(self):
        self.put(0x101a2e,0x47a8,2);self.refresh()
        with self.assertRaises(ValueError):self.validate()

    def test_constructor_must_retain_measured_original_callee(self):
        self.put(0x66480c,0xeb000000);self.refresh()
        with self.assertRaises(ValueError):self.validate()

    def test_missing_witness_range_rejected(self):
        self.packet['functions'][2]['witnessRanges'].pop()
        with self.assertRaises(ValueError):self.validate()

    def test_body_cannot_be_truncated_or_reclassified_as_data(self):
        row=self.packet['functions'][0];row['instructionRange']['endExclusive']-=2
        with self.assertRaises(ValueError):self.validate()
        row['instructionRange']['endExclusive']+=2
        self.base['definedDataRanges']=[dict(start=0x100670,endExclusive=0x10069c)]
        with self.assertRaises(ValueError):self.validate()

    def test_duplicate_and_already_owned_entries_rejected(self):
        self.packet['functions'].append(copy.deepcopy(self.packet['functions'][0]))
        with self.assertRaises(ValueError):self.validate()
        self.packet['functions'].pop()
        self.current['functions'].append(dict(address=0x100670,mode='Thumb',ranges=[]))
        with self.assertRaises(ValueError):self.validate()

    def test_wrong_decoded_instruction_count_or_body_digest_rejected(self):
        part=self.packet['functions'][0]['instructionRange'];part['instructions']-=1
        with self.assertRaises(ValueError):self.validate()
        part['instructions']+=1;part['sha256']='0'*64
        with self.assertRaises(ValueError):self.validate()


if __name__ == '__main__':
    unittest.main()
