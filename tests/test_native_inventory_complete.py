import hashlib
import importlib.util
import random
import unittest
from pathlib import Path


PATH = Path(__file__).resolve().parents[1] / 'toolscripts/native_inventory_complete.py'
SPEC = importlib.util.spec_from_file_location('native_inventory_complete', PATH)
inventory = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(inventory)


def extent(start, end):
    return {'start': start, 'endExclusive': end, 'bytes': end - start}


def fixture():
    code = bytes(range(32))
    sha = hashlib.sha256(code).hexdigest()
    layout = {'codeSha256': sha, 'segments': [{'name': 'text', 'address': 4096, 'initializedBytes': 32, 'codeBinOffset': 0}]}
    census = {'codeSha256': sha, 'initializedTextStart': 4096, 'initializedTextGrossBytes': 32,
              'functionCount': 2, 'functionBodyUnionBytes': 20, 'uncoveredBytes': 12,
              'uncoveredRanges': [extent(4108, 4112), extent(4116, 4124)],
              'unclassifiedTextRanges': [extent(4116, 4124)], 'unclassifiedTextBytes': 8,
              'instructionCount': 7, 'instructionUnionBytes': 20, 'definedDataUnionBytes': 4,
              'functions': [{'address': 4096, 'mode': 'ARM', 'ranges': [extent(4096, 4108)], 'textBodyBytes': 12},
                            {'address': 4112, 'mode': 'Thumb', 'ranges': [extent(4112, 4116), extent(4124, 4128)], 'textBodyBytes': 8}]}
    return census, code, layout


class InventoryCompletionTests(unittest.TestCase):
    def test_exact_partition_retains_discontiguous_body(self):
        census, code, layout = fixture()
        report = inventory.summarize_census(census, code, layout)
        self.assertEqual(report['candidateBodyUnionBytes'] + report['functionUncoveredBytes'], 32)
        self.assertEqual(report['discontiguousCandidateFunctions'], 1)
        self.assertEqual(report['singleRangeCandidateBytes'], 12)
        self.assertEqual(report['discontiguousBodies'][0]['ranges'], census['functions'][1]['ranges'])
        self.assertFalse(report['nativeDenominatorComplete'])
        self.assertFalse(report['semanticClassificationComplete'])
        self.assertEqual(report['acceptedSourceCredit'], 0)

    def test_gap_hashes_are_content_bound_without_exporting_bytes(self):
        census, code, layout = fixture()
        report = inventory.summarize_census(census, code, layout)
        gap = report['functionUncoveredRanges'][0]
        self.assertEqual(gap['sha256'], hashlib.sha256(code[12:16]).hexdigest())
        self.assertNotIn('raw', gap)
        self.assertNotIn('data', gap)
        self.assertFalse(gap['allZero'])

    def test_changed_input_image_is_rejected(self):
        census, code, layout = fixture()
        with self.assertRaisesRegex(ValueError, 'identity'):
            inventory.summarize_census(census, bytes(32), layout)

    def test_false_union_or_gap_claims_are_rejected(self):
        for key in ['functionBodyUnionBytes', 'uncoveredBytes', 'unclassifiedTextBytes']:
            census, code, layout = fixture()
            census[key] += 1
            with self.subTest(key=key), self.assertRaises(ValueError):
                inventory.summarize_census(census, code, layout)

    def test_moved_gap_of_same_size_is_rejected(self):
        census, code, layout = fixture()
        census['uncoveredRanges'][0] = extent(4107, 4111)
        with self.assertRaisesRegex(ValueError, 'gap ranges'):
            inventory.summarize_census(census, code, layout)

    def test_duplicate_entry_unknown_mode_and_unowned_entry_are_rejected(self):
        for change in [{'address': 4096}, {'mode': 'unknown'}, {'address': 4118}, {'address': 4113}]:
            census, code, layout = fixture()
            census['functions'][1].update(change)
            with self.subTest(change=change), self.assertRaises(ValueError):
                inventory.summarize_census(census, code, layout)

    def test_reversed_and_outside_ranges_are_rejected(self):
        for row in [extent(4108, 4104), extent(4092, 4108), extent(4096, 4132)]:
            census, code, layout = fixture()
            census['functions'][0]['ranges'] = [row]
            with self.subTest(row=row), self.assertRaises(ValueError):
                inventory.summarize_census(census, code, layout)

    def test_internal_overlap_cannot_inflate_function_size(self):
        census, code, layout = fixture()
        census['functions'][1]['ranges'] = [extent(4112, 4118), extent(4116, 4120)]
        census['functions'][1]['textBodyBytes'] = 10
        with self.assertRaisesRegex(ValueError, 'overlap'):
            inventory.summarize_census(census, code, layout)

    def test_instruction_partition_cannot_silently_drop_unknown_bytes(self):
        census, code, layout = fixture()
        census['definedDataUnionBytes'] = 0
        with self.assertRaisesRegex(ValueError, 'conserve'):
            inventory.summarize_census(census, code, layout)

    def test_shared_bodies_are_counted_once_in_union(self):
        census, code, layout = fixture()
        census['functions'][1] = {'address': 4104, 'mode': 'ARM', 'ranges': [extent(4104, 4116)], 'textBodyBytes': 12}
        census['uncoveredRanges'] = [extent(4116, 4128)]
        report = inventory.summarize_census(census, code, layout)
        self.assertEqual(report['candidateBodySumBytes'], 24)
        self.assertEqual(report['candidateBodyUnionBytes'], 20)
        self.assertEqual(report['sharedBodyBytes'], 4)

    def test_zero_gap_never_becomes_confirmed_padding(self):
        census, code, layout = fixture()
        code = bytes(32)
        sha = hashlib.sha256(code).hexdigest()
        census['codeSha256'] = layout['codeSha256'] = sha
        report = inventory.summarize_census(census, code, layout)
        self.assertEqual(report['allZeroUncoveredBytes'], 12)
        self.assertTrue(all(row['classification'].startswith('unreviewed') for row in report['functionUncoveredRanges']))
        self.assertFalse(report['nativeDenominatorComplete'])

    def test_signed_dispatch_offsets_preserve_arm_thumb_targets(self):
        slots = 0x8000
        raw = (0x1000 - slots).to_bytes(4, 'little', signed=True)
        raw += (0x1011 - slots - 4).to_bytes(4, 'little', signed=True)
        self.assertEqual(inventory.relative_seeds(raw, slots, 0x1000, 0x1100), [
            {'tableSlot': 0x8000, 'address': 0x1000, 'mode': 'ARM'},
            {'tableSlot': 0x8004, 'address': 0x1010, 'mode': 'Thumb'}])

    def test_malformed_dispatch_offsets_are_rejected(self):
        for raw in [b'abc', (-0x7002).to_bytes(4, 'little', signed=True), (0x1000).to_bytes(4, 'little', signed=True)]:
            with self.subTest(raw=raw), self.assertRaises(ValueError):
                inventory.relative_seeds(raw, 0x8000, 0x1000, 0x1100)

    def test_random_interval_partition_matches_independent_byte_sets(self):
        randomizer = random.Random(17623)
        for _ in range(256):
            rows = []
            occupied = set()
            for _ in range(randomizer.randrange(20)):
                low = randomizer.randrange(64)
                high = randomizer.randrange(low + 1, 65)
                rows.append([low, high])
                occupied.update(range(low, high))
            merged = inventory.merge(rows)
            gaps = inventory.complement(rows, 0, 64)
            actual = {value for low, high in merged for value in range(low, high)}
            missing = {value for low, high in gaps for value in range(low, high)}
            self.assertEqual(actual, occupied)
            self.assertEqual(missing, set(range(64)) - occupied)
            self.assertFalse(actual & missing)


if __name__ == '__main__':
    unittest.main()
