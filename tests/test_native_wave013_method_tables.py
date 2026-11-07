import copy
import json
import struct
import sys
import tempfile
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_wave013_method_tables as wave


class MethodDispatchOverlayTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
        cls.packet = json.loads((wave.OUT / 'method-dispatch-overlay.json').read_text())
        cls.private = wave.WORK / 'survey-overlay-qualified'

    def test_three_measured_tables_have_only_direct_unadjusted_members(self):
        tables = wave.decode_tables(self.image)
        self.assertEqual([len(row['entries']) for row in tables], [95, 38, 95])
        self.assertTrue(all(not entry['virtual'] and entry['thisAdjustmentBytes'] == 0
                            for row in tables for entry in row['entries']))

    def test_virtual_or_adjusted_member_encoding_is_rejected(self):
        tables = wave.decode_tables(self.image)
        for adjustment in [1, 2, 0x80000000]:
            image = bytearray(self.image)
            struct.pack_into('<I', image, tables[0]['start'] - 0x100000 + 4, adjustment)
            with self.assertRaisesRegex(ValueError, 'adjustment'):
                wave.decode_tables(image)

    def test_unqualified_thumb_or_unaligned_target_is_rejected(self):
        tables = wave.decode_tables(self.image)
        image = bytearray(self.image)
        at = tables[0]['start'] - 0x100000
        struct.pack_into('<I', image, at, struct.unpack_from('<I', image, at)[0] | 1)
        with self.assertRaisesRegex(ValueError, 'mode'):
            wave.decode_tables(image)

    def test_candidates_are_disjoint_from_frozen_census_and_each_other(self):
        rows = self.packet['functions']
        self.assertEqual(len(rows), 44)
        self.assertEqual(sum(part['bytes'] for row in rows for part in row['instructionRanges']), 3172)
        self.assertEqual(self.packet['candidatePeerOverlaps'], [])
        self.assertTrue(all(row['frozenCensusOverlaps'] == [] for row in rows))
        self.assertFalse(self.packet['initializedTextByteDenominatorChanged'])
        self.assertEqual(self.packet['sourceCreditGranted'], 0)

    def test_actual_ghidra_instruction_memory_matches_private_original(self):
        self.assertTrue(self.packet['actualGhidraMemoryMatchesCanonicalInstructionSpans'])
        for row in self.packet['functions']:
            for part in row['instructionRanges']:
                expected = wave.sha(self.image[part['start'] - 0x100000:part['endExclusive'] - 0x100000])
                self.assertEqual(part['sha256'], expected)
                self.assertEqual(part['ghidraMemorySha256'], expected)

    def test_wrong_ghidra_memory_receipt_is_rejected(self):
        exported = json.loads((self.private / 'functions.private.json').read_text())
        known = {row['address'] for row in json.loads((ROOT / self.packet['frozenCensus']['path']).read_text())['functions']}
        next(row for row in exported if row['address'] not in known)['ranges'][0]['ghidraMemorySha256'] = '0' * 64
        with tempfile.TemporaryDirectory(dir=wave.WORK) as folder:
            path = Path(folder)
            (path / 'functions.private.json').write_text(json.dumps(exported))
            (path / 'receipt.private.json').write_bytes((self.private / 'receipt.private.json').read_bytes())
            with self.assertRaisesRegex(ValueError, 'Ghidra memory differs'):
                wave.run(path, path / 'unused.json')

    def test_hex_handlers_share_one_physical_tail_without_double_credit(self):
        aliases = self.packet['sharedTailAliases']
        self.assertEqual(len(aliases), 1)
        self.assertEqual(aliases[0]['target'], 0x4bfcc4)
        self.assertEqual(aliases[0]['physicalOwner'], 0x4bf7f0)
        owner = next(row for row in self.packet['functions'] if row['canonicalIdentity']['address'] == 0x4bf7f0)
        self.assertEqual(len(owner['instructionRanges']), 2)
        escape = next(row for row in self.packet['functions'] if row['canonicalIdentity']['address'] == 0x4bf974)
        self.assertEqual(sum(part['bytes'] for part in escape['instructionRanges']), 104)

    def test_pools_and_producer_identity_are_explicit(self):
        self.assertEqual(sum(part['bytes'] for row in self.packet['functions'] for part in row['literalPoolRanges']), 12)
        self.assertEqual(self.packet['ghidraProducer'], wave.record(ROOT / 'toolscripts/native_wave013_overlay.java'))
        self.assertTrue(self.packet['readOnlyNoAnalysis'])
        self.assertEqual(self.packet['effectiveGhidraLanguages'], ['ARM:LE:32:v6'])


if __name__ == '__main__':
    unittest.main()
