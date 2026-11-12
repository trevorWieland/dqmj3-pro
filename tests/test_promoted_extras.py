"""The promotion manifest and the split it produced must agree.

``config/symbols.txt`` is the foundation of every measurement, so the 2026-11-12
promotion of verified extra ranges to functions is checked as an arithmetic
invariant rather than trusted.  The manifest states the counts and bytes before
and after the change; this test recomputes them from the committed split and
checks that every promoted entry is now a primary of the same address, mode and
size.  Later, newly owned ranges are recorded separately under
``laterAdditions`` with the same before/after accounting, so the promotion's own
arithmetic is not rewritten by them.

The ExHeader is not a test input, so the split is loaded with a covering extent
instead of the measured one.  The header's ``uncovered text bytes`` field is
therefore not checked here; the other three fields are.
"""

import importlib.util
import json
import re
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location('split_module', ROOT / 'toolscripts/split.py')
SPLIT = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(SPLIT)

MANIFEST = ROOT / 'config/promoted-extras.json'
SYMBOLS = ROOT / 'config/symbols.txt'
HEADER = re.compile(r'^# functions: (\d+)  primary bytes: (\d+)  extra bytes: (\d+)  '
                    r'uncovered text bytes: (\d+)$')
START = 0x00100000
# The initialized text segment ends at 0x007b9810; this covering extent lets the
# test load the split without the ExHeader while still rejecting an escape.
EXTENT = 0x00800000 - START


def load():
    return SPLIT.load(SYMBOLS, START, EXTENT)


class PromotionTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.manifest = json.loads(MANIFEST.read_text(encoding='utf-8'))
        cls.split = load()

    def test_manifest_arithmetic_moves_bytes_between_columns(self):
        manifest = self.manifest
        before, after = manifest['before'], manifest['after']
        self.assertEqual(manifest['schema'], 'dqmj3-promoted-extras-v1')
        self.assertEqual(manifest['count'], len(manifest['extras']))
        self.assertEqual(manifest['bytes'], sum(row['size'] for row in manifest['extras']))
        self.assertEqual(after['functions'] - before['functions'], manifest['count'])
        self.assertEqual(after['primaryBytes'] - before['primaryBytes'], manifest['bytes'])
        self.assertEqual(before['extraBytes'] - after['extraBytes'], manifest['bytes'])
        self.assertEqual(before['ownedBytes'], after['ownedBytes'])
        self.assertEqual(after['ownedBytes'], after['primaryBytes'] + after['extraBytes'])

    def test_split_is_the_after_state(self):
        manifest = self.manifest
        expected = manifest.get('laterAdditions', {}).get('after', manifest['after'])
        primary = sum(symbol.size for symbol in self.split.symbols)
        extra = sum(size for _, size in self.split.extra_ranges())
        self.assertEqual(len(self.split), expected['functions'])
        self.assertEqual(primary, expected['primaryBytes'])
        self.assertEqual(extra, expected['extraBytes'])
        self.assertEqual(primary + extra, expected['ownedBytes'])

    def test_header_counts_match_the_split(self):
        expected = self.manifest.get('laterAdditions', {}).get('after', self.manifest['after'])
        counts = [int(value) for value in HEADER.match(
            SYMBOLS.read_text(encoding='utf-8').splitlines()[5]).groups()]
        primary = sum(symbol.size for symbol in self.split.symbols)
        extra = sum(size for _, size in self.split.extra_ranges())
        self.assertEqual(counts[0], len(self.split))
        self.assertEqual(counts[1], primary)
        self.assertEqual(counts[2], extra)
        self.assertEqual(counts[1] + counts[2], expected['ownedBytes'])

    def test_later_additions_are_owned_and_accounted(self):
        later = self.manifest.get('laterAdditions')
        if later is None:
            self.skipTest('no later additions are recorded')
        before, after = self.manifest['after'], later['after']
        shrunk = sum(row['from'] - row['to'] for row in later.get('shrunk', []))
        self.assertEqual(later['count'], len(later['additions']))
        self.assertEqual(later['bytes'], sum(row['size'] for row in later['additions']))
        self.assertEqual(later['shrunkBytes'], shrunk)
        self.assertEqual(later['netBytes'], later['bytes'] - shrunk)
        self.assertEqual(after['functions'] - before['functions'], later['count'])
        self.assertEqual(after['primaryBytes'] - before['primaryBytes'], later['netBytes'])
        self.assertEqual(after['extraBytes'], before['extraBytes'])
        self.assertEqual(after['ownedBytes'] - before['ownedBytes'], later['netBytes'])
        for row in later['additions']:
            symbol = self.split.by_name.get('fn_%08x' % row['address'])
            self.assertIsNotNone(symbol, 'added range has no primary: %r' % row)
            self.assertEqual((symbol.address, symbol.size, symbol.mode),
                             (row['address'], row['size'], row['mode']))
        for row in later.get('shrunk', []):
            symbol = self.split.by_name.get(row['name'])
            self.assertIsNotNone(symbol, 'corrected entry has no primary: %r' % row)
            self.assertEqual(symbol.size, row['to'])
            self.assertLess(row['to'], row['from'])

    def test_every_promoted_entry_is_now_a_primary(self):
        for row in self.manifest['extras']:
            symbol = self.split.by_name.get('fn_%08x' % row['address'])
            self.assertIsNotNone(symbol, 'promoted range has no primary: %r' % row)
            self.assertEqual((symbol.address, symbol.size, symbol.mode),
                             (row['address'], row['size'], row['mode']))
            owner = self.split.by_name[row['owner']]
            self.assertNotIn((row['address'], row['size']), owner.extras)
        promoted = {row['address'] for row in self.manifest['extras']}
        remaining = {address for address, _ in self.split.extra_ranges()}
        self.assertFalse(promoted & remaining)


if __name__ == '__main__':
    unittest.main()
