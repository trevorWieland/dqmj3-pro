import importlib.util
import random
import sys
import unittest
from pathlib import Path


TOOLS = Path(__file__).resolve().parents[1] / 'toolscripts'
sys.path.insert(0, str(TOOLS))
SPEC = importlib.util.spec_from_file_location('native_text_accounting', TOOLS / 'native_text_accounting.py')
accounting = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(accounting)


def span(start, end):
    return {'start': start, 'endExclusive': end, 'bytes': end - start, 'kind': 'accepted-source-span'}


class NativeTextAccountingTests(unittest.TestCase):
    def test_every_unknown_byte_counts_as_unmatched(self):
        rows = accounting.exhaustive_partition(0x1000, 0x1040, [span(0x1004, 0x1010), span(0x1020, 0x1028)])
        self.assertEqual(sum(row['bytes'] for row in rows), 64)
        self.assertEqual(sum(row['bytes'] for row in rows if row['kind'] == 'accepted-source-span'), 20)
        self.assertEqual(sum(row['bytes'] for row in rows if row['kind'] != 'accepted-source-span'), 44)
        self.assertEqual([row['bytes'] for row in rows], [4, 12, 16, 8, 24])

    def test_zero_source_build_has_full_denominator(self):
        self.assertEqual(accounting.exhaustive_partition(4096, 4160, []), [
            {'start': 4096, 'endExclusive': 4160, 'bytes': 64, 'kind': 'unmatched-initialized-text'}])

    def test_adjacent_source_functions_keep_exact_extents(self):
        rows = accounting.exhaustive_partition(0, 24, [span(0, 12), span(12, 20)])
        self.assertEqual([row['bytes'] for row in rows], [12, 8, 4])
        self.assertEqual(rows[-1]['kind'], 'unmatched-initialized-text')

    def test_overlap_reverse_outside_and_unbalanced_sizes_rejected(self):
        examples = [[span(4, 12), span(8, 20)], [span(20, 12)], [span(-4, 4)],
                    [span(24, 40)], [dict(span(0, 8), bytes=4), dict(span(8, 16), bytes=12)]]
        for rows in examples:
            with self.subTest(rows=rows), self.assertRaises(ValueError):
                accounting.exhaustive_partition(0, 32, rows)

    def test_observations_keep_unknown_bytes_and_reject_relabelled_overlap(self):
        census = {'instructionRanges': [span(0, 12)], 'definedDataRanges': [span(12, 16)],
                  'unclassifiedTextRanges': [span(16, 24)]}
        rows = accounting.observation_partition(census, 0, 24)
        self.assertEqual([row['kind'] for row in rows], ['instruction', 'defined-data', 'unclassified'])
        census['definedDataRanges'] = [span(8, 16)]
        with self.assertRaises(ValueError):
            accounting.observation_partition(census, 0, 24)

    def test_observation_omission_and_empty_input_rejected(self):
        for census in [{'instructionRanges': [], 'definedDataRanges': [], 'unclassifiedTextRanges': []},
                       {'instructionRanges': [span(0, 8)], 'definedDataRanges': [], 'unclassifiedTextRanges': [span(12, 24)]}]:
            with self.subTest(census=census), self.assertRaises(ValueError):
                accounting.observation_partition(census, 0, 24)

    def test_random_source_partitions_preserve_independent_byte_sets(self):
        rng = random.Random(73419)
        for _ in range(256):
            selected = sorted(rng.sample(range(32), rng.randrange(33)))
            sources = [span(value, value + 1) for value in selected]
            rows = accounting.exhaustive_partition(0, 32, sources)
            recovered = {value for row in rows if row['kind'] == 'accepted-source-span'
                         for value in range(row['start'], row['endExclusive'])}
            unmatched = {value for row in rows if row['kind'] != 'accepted-source-span'
                         for value in range(row['start'], row['endExclusive'])}
            self.assertEqual(recovered, set(selected))
            self.assertEqual(unmatched, set(range(32)) - set(selected))
            self.assertFalse(recovered & unmatched)


if __name__ == '__main__':
    unittest.main()
