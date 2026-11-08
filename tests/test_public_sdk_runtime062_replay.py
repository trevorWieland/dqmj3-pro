import copy
from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
import public_sdk_runtime062_replay as replay


class PublicRuntimeReceiptTests(unittest.TestCase):
    def setUp(self):
        self.receipt = dict(status='version3-exclusive-output-public-input-stage-passed',
            rejectedHistoricalReads=[], freshSourceImports=True, canonicalOriginalOnly=True,
            inheritedAuthoredSupportFiles=40, tests=10)

    def test_qualified_v3_child_receipt_is_accepted(self):
        replay.validate_child(self.receipt, 'binding', 'proof')
        replay.validate_child(self.receipt, 'binding', 'tests')

    def test_old_broader_guard_receipt_cannot_qualify(self):
        self.receipt['status'] = 'version2-byte-identical-public-input-stage-passed'
        with self.assertRaises(ValueError):
            replay.validate_child(self.receipt, 'binding', 'proof')

    def test_caught_historical_read_invalidates_otherwise_passing_child(self):
        self.receipt['rejectedHistoricalReads'] = ['retained-sibling/receipt.json']
        with self.assertRaises(ValueError):
            replay.validate_child(self.receipt, 'binding', 'proof')

    def test_cached_import_or_original_source_fallback_cannot_qualify(self):
        for field in ('freshSourceImports', 'canonicalOriginalOnly'):
            value = copy.deepcopy(self.receipt)
            value[field] = False
            with self.assertRaises(ValueError):
                replay.validate_child(value, 'binding', 'proof')

    def test_missing_inherited_source_helper_is_rejected(self):
        self.receipt['inheritedAuthoredSupportFiles'] = 39
        with self.assertRaises(ValueError):
            replay.validate_child(self.receipt, 'binding', 'proof')

    def test_empty_or_wrong_predecessor_test_suite_is_rejected(self):
        self.receipt['tests'] = 0
        with self.assertRaises(ValueError):
            replay.validate_child(self.receipt, 'binding', 'tests')

    def test_transport_path_cannot_escape_snapshot(self):
        root = Path(__file__).resolve().parent
        with self.assertRaises(ValueError):
            replay.contained(root, '../retained-sibling/source.c')


if __name__ == '__main__':
    unittest.main()
