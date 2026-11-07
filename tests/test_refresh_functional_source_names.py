import copy
from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
import refresh_functional_source_names as names


class SourceNameRefreshTests(unittest.TestCase):
    def setUp(self):
        self.old = b'#define fn_00100000 recovered_a\n'
        self.new = self.old + b'#define fn_00100004 recovered_b\n'
        self.first = names.identity(names.HEADER, self.old)
        self.second = names.identity(names.HEADER, self.new)

    def test_only_metadata_pins_change(self):
        packet = dict(functions=[dict(symbol='fn_00100000', sourceName='recovered_a',
                                     symbolNames=self.first.copy(), source={'sha256': 'untouched'},
                                     behavior={'allPassed': True})], headers=[self.first.copy()])
        frozen = copy.deepcopy(packet)
        result, count = names.rewrite(packet, self.first, self.second)
        self.assertEqual(count, 2)
        self.assertEqual(packet, frozen)
        self.assertEqual(result['functions'][0]['source'], frozen['functions'][0]['source'])
        self.assertEqual(result['functions'][0]['behavior'], frozen['functions'][0]['behavior'])
        self.assertEqual(result['functions'][0]['symbolNames'], self.second)
        self.assertEqual(names.rewrite(result, self.first, self.second)[1], 0)

    def test_existing_mapping_change_rejected(self):
        with self.assertRaises(ValueError):
            names.extended(self.old, self.new.replace(b'recovered_a', b'other'))

    def test_duplicate_mapping_rejected(self):
        with self.assertRaises(ValueError):
            names.extended(self.old, self.new + self.old)

    def test_unknown_pin_rejected(self):
        packet = dict(functions=[dict(symbolNames=names.identity(names.HEADER, b'unknown'))])
        with self.assertRaises(ValueError):
            names.rewrite(packet, self.first, self.second)


if __name__ == '__main__':
    unittest.main()
