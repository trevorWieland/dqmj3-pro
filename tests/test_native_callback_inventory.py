import hashlib
from pathlib import Path
import struct
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
import native_callback_inventory as inventory


class CallbackInventoryTests(unittest.TestCase):
    def setUp(self):
        self.origin = 0x733000
        self.image = bytearray(8192)
        self.put(0x733110, 0xe59f00d8)
        self.put(0x733114, 0xe1a01004)
        self.put(0x733118, 0xe58d0020)
        self.put(0x733120, 0xe59f00cc)
        self.put(0x733124, 0xe58d0024)
        self.put(0x73313c, 0xe3a03038)
        self.put(0x733140, 0xe1a0000d)
        self.put(0x733144, 0xeb0002ad)
        self.put(0x7331f0, 0x733300)
        self.put(0x7331f4, 0x733304)
        self.put(0x733300, 0xe12fff1e)
        for address in range(0x733304, 0x733324, 4): self.put(address, 0xe1a00000)
        self.put(0x733320, 0xe12fff1e)
        existing = [dict(address=0x733100, mode='ARM', ranges=[dict(start=0x733100, endExclusive=0x733148)]),
                    dict(address=0x733c00, mode='ARM', ranges=[dict(start=0x733c00, endExclusive=0x733c04)])]
        self.base = dict(codeSha256='', initializedTextStart=self.origin, initializedTextGrossBytes=len(self.image),
            unclassifiedTextRanges=[dict(start=0x733300, endExclusive=0x733304)],
            instructionRanges=[dict(start=0x733304, endExclusive=0x733324)], definedDataRanges=[])
        self.current = dict(functions=existing)
        self.packet = dict(moduleSha256='', sourceCreditGranted=0, initializedTextByteDenominatorChanged=False,
            storedCallbackWitnesses=[], functions=[], newCandidateFunctions=2, newInstructionUnionBytes=36)
        for index, (address, size, prior, load, store, literal, field) in enumerate([
            (0x733300, 4, 'unclassified', 0x733110, 0x733118, 0x7331f0, 32),
            (0x733304, 32, 'defined-unowned-instruction', 0x733120, 0x733124, 0x7331f4, 36)]):
            name = 'callback-' + str(index)
            witness = dict(id=name, kind='arm-stack-stream058-callback', readerFunction=0x733100,
                literalAddress=literal, target=address, loadInstruction=load, storeInstruction=store,
                originalStreamBytes=56, streamFieldOffset=field, initializerEntry=0x733c00,
                initializerArgumentSetup=0x733140, initializerCall=0x733144)
            for key, at in [('literalSha256', literal), ('loadSha256', load), ('storeSha256', store),
                            ('setupSha256', 0x733140), ('callSha256', 0x733144)]: witness[key] = self.digest(at, 4)
            self.packet['storedCallbackWitnesses'].append(witness)
            self.packet['functions'].append(dict(canonicalIdentity=dict(programId='0004000e001acb00',
                moduleSha256='', address=address, mode='ARM'), instructionRanges=[dict(start=address,
                endExclusive=address + size, bytes=size, instructions=size // 4,
                sha256=self.digest(address, size), priorClassification=prior)],
                storedCallbackWitnessIds=[name], sourceCreditRequested=0))
        self.identity()

    def put(self, address, value):
        struct.pack_into('<I', self.image, address - self.origin, value)

    def digest(self, address, size):
        return hashlib.sha256(self.image[address - self.origin:address - self.origin + size]).hexdigest()

    def identity(self):
        value = hashlib.sha256(self.image).hexdigest()
        self.base['codeSha256'] = self.packet['moduleSha256'] = value
        for row in self.packet['functions']: row['canonicalIdentity']['moduleSha256'] = value

    def validate(self):
        return inventory.validate(self.base, self.current, self.packet, bytes(self.image))

    def test_literal_load_store_and_initializer_prove_two_leaf_entries(self):
        result = self.validate()
        self.assertEqual([row['textBodyBytes'] for row in result], [4, 32])
        self.assertTrue(all(row['acceptedSourceBytes'] == 0 for row in result))

    def test_inventory_cannot_change_byte_denominator(self):
        self.packet['initializedTextByteDenominatorChanged'] = True
        with self.assertRaises(ValueError): self.validate()

    def test_duplicate_or_already_owned_callback_rejected(self):
        self.current['functions'].append(dict(address=0x733300, mode='ARM', ranges=[]))
        with self.assertRaises(ValueError): self.validate()

    def test_literal_target_mismatch_rejected(self):
        self.packet['storedCallbackWitnesses'][0]['literalAddress'] += 4
        with self.assertRaises(ValueError): self.validate()

    def test_wrong_callback_field_rejected(self):
        self.packet['storedCallbackWitnesses'][0]['streamFieldOffset'] = 36
        with self.assertRaises(ValueError): self.validate()

    def test_register_overwrite_before_store_rejected(self):
        self.put(0x733114, 0xe3a00000)
        self.identity()
        with self.assertRaises(ValueError): self.validate()

    def test_wrong_stream_size_argument_rejected(self):
        self.put(0x73313c, 0xe3a03058)
        self.identity()
        with self.assertRaises(ValueError): self.validate()

    def test_stack_movement_before_initializer_rejected(self):
        self.put(0x733128, 0xe24dd004)
        self.identity()
        with self.assertRaises(ValueError): self.validate()

    def test_callback_overwrite_before_initializer_rejected(self):
        self.put(0x733128, 0xe58d0020)
        self.identity()
        with self.assertRaises(ValueError): self.validate()

    def test_intervening_subroutine_call_rejected(self):
        self.put(0x733128, 0xeb000001)
        self.identity()
        with self.assertRaises(ValueError): self.validate()

    def test_wrong_initializer_call_rejected(self):
        self.put(0x733144, 0xeb0002ae)
        self.identity()
        self.packet['storedCallbackWitnesses'][0]['callSha256'] = self.digest(0x733144, 4)
        with self.assertRaises(ValueError): self.validate()

    def test_reader_extent_cannot_be_bypassed(self):
        self.current['functions'][0]['ranges'][0]['endExclusive'] = 0x733124
        with self.assertRaises(ValueError): self.validate()

    def test_defined_data_or_another_owner_cannot_be_reclassified(self):
        self.base['definedDataRanges'] = [dict(start=0x733304, endExclusive=0x733324)]
        with self.assertRaises(ValueError): self.validate()

    def test_body_hash_and_return_boundary_are_checked(self):
        self.put(0x733320, 0xeafffffe)
        self.identity()
        self.packet['functions'][1]['instructionRanges'][0]['sha256'] = self.digest(0x733304, 32)
        with self.assertRaises(ValueError): self.validate()

    def test_missing_callback_configuration_preserves_legacy_view(self):
        original, references = dict(functions=[]), ['old']
        with tempfile.TemporaryDirectory() as folder, patch.object(inventory.legacy, 'compose', return_value=(original, references)):
            result, result_references = inventory.compose(Path(folder), {})
        self.assertIs(result, original)
        self.assertIs(result_references, references)

    def test_legacy_validator_frozen_identity_is_preserved(self):
        path = Path(inventory.legacy.__file__)
        self.assertEqual(hashlib.sha256(path.read_bytes()).hexdigest(),
                         '1cc0fd82de21675e81981ecde7005a94858c1e085a675f39345f7bc66ee6ed4c')


if __name__ == '__main__': unittest.main()
