import copy
from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
import public_sdk_owner062_replay as replay


class PublicOwnerReceiptTests(unittest.TestCase):
    def setUp(self):
        self.value = dict(status='public-owner-input-and-closure-replay-passed', mode='full',
            blockedReadsOrConstructions=[], rejectedMetadata=[], freshPyOnlyAuthoredImports=True,
            returningControls=27, sameFinalPrimaryArenaControls=9, artifactsIdentical=1133,
            compiledSources=33, existingSdkFiles=27, tests=10, primaryInsertionPcVisits=206,
            combinedInsertionPcVisits=246, originalConstructions=6,
            metadataAccessCounts={name: 1 for name in ('Path.resolve', 'os.stat', 'os.scandir', 'os.listdir')})

    def test_qualified_full_receipt(self):
        replay.validate_child(self.value, 'full')

    def test_original_free_source_only_receipt(self):
        self.value.update(mode='source-only', tests=8, originalConstructions=0,
                          sourceOnlyOriginalReadsOrConstructions=0)
        replay.validate_child(self.value, 'source-only')
        for field in ('originalConstructions', 'sourceOnlyOriginalReadsOrConstructions'):
            bad = copy.deepcopy(self.value)
            bad[field] = 1
            with self.subTest(field=field), self.assertRaises(ValueError):
                replay.validate_child(bad, 'source-only')

    def test_caught_metadata_or_read_attempt_invalidates_positive_result(self):
        for field in ('blockedReadsOrConstructions', 'rejectedMetadata'):
            bad = copy.deepcopy(self.value)
            bad[field] = ['work/retained-sibling/receipt.json']
            with self.subTest(field=field), self.assertRaises(ValueError):
                replay.validate_child(bad, 'full')

    def test_stale_bytecode_or_missing_native_artifact_is_rejected(self):
        for field, value in [('freshPyOnlyAuthoredImports', False), ('artifactsIdentical', 1132),
                             ('compiledSources', 32), ('existingSdkFiles', 26)]:
            bad = copy.deepcopy(self.value)
            bad[field] = value
            with self.subTest(field=field), self.assertRaises(ValueError):
                replay.validate_child(bad, 'full')

    def test_primary_trace_cannot_claim_supplemental_coverage(self):
        self.value['primaryInsertionPcVisits'] = 246
        with self.assertRaises(ValueError):
            replay.validate_child(self.value, 'full')

    def test_empty_boundary_surface_or_skipped_controls_is_rejected(self):
        for field, value in [('metadataAccessCounts', {}), ('tests', 0), ('returningControls', 26),
                             ('sameFinalPrimaryArenaControls', 8)]:
            bad = copy.deepcopy(self.value)
            bad[field] = value
            with self.subTest(field=field), self.assertRaises(ValueError):
                replay.validate_child(bad, 'full')

    def test_output_and_transport_paths_are_contained(self):
        root = Path(__file__).resolve().parent
        for value in ('../retained/source.c', 'C:/retained/source.c', 'nested\\source.c', '.'):
            with self.subTest(path=value), self.assertRaises(ValueError):
                replay.contained(root, value)
        self.assertEqual(replay.contained(root, 'nested/source.c'), root / 'nested/source.c')


if __name__ == '__main__':
    unittest.main()
