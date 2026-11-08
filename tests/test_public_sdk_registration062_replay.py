import copy
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
import public_sdk_registration062_replay as replay


class RegistrationTerminalTests(unittest.TestCase):
    def setUp(self):
        self.report = dict(status='passed', sourceOnly=False, rejectedAttempts=[], tests=9,
            profiles=[dict(originalPcs=[], originalAuthoredEndpointsMapped=None) for _ in range(12)],
            originalConstructions=4, originalFileReads=['code', 'exheader', 'census'])
        self.completion = dict(status='passed', returnCode=0, rejectedAfterChildExit=[])

    def test_full_and_source_only_corpora_are_distinct(self):
        replay.validate_child(self.report, self.completion, False)
        self.report.update(sourceOnly=True, originalConstructions=0, originalFileReads=[])
        replay.validate_child(self.report, self.completion, True)

    def test_late_caught_violation_cannot_be_hidden_by_successful_child(self):
        self.completion['rejectedAfterChildExit'] = ['caught-at-exit-private-metadata']
        with self.assertRaises(ValueError):
            replay.validate_child(self.report, self.completion, False)

    def test_missing_profile_or_test_is_rejected(self):
        for field, value in [('profiles', self.report['profiles'][:-1]), ('tests', 8)]:
            report = dict(self.report, **{field: value})
            with self.subTest(field=field), self.assertRaises(ValueError):
                replay.validate_child(report, self.completion, False)

    def test_source_only_cannot_hide_prefetched_original_execution(self):
        self.report.update(sourceOnly=True, originalConstructions=0, originalFileReads=[])
        for field, value in [('originalPcs', [0x4955f0]), ('originalAuthoredEndpointsMapped', True)]:
            report = copy.deepcopy(self.report)
            report['profiles'][0][field] = value
            with self.subTest(field=field), self.assertRaises(ValueError):
                replay.validate_child(report, self.completion, True)

    def test_source_only_original_read_or_construction_is_rejected(self):
        self.report.update(sourceOnly=True, originalConstructions=0, originalFileReads=[])
        for field, value in [('originalConstructions', 1), ('originalFileReads', ['code'])]:
            report = dict(self.report, **{field: value})
            with self.subTest(field=field), self.assertRaises(ValueError):
                replay.validate_child(report, self.completion, True)

    def test_nonzero_exit_and_caught_runtime_attempt_are_rejected(self):
        completion = dict(self.completion, returnCode=1)
        with self.assertRaises(ValueError):
            replay.validate_child(self.report, completion, False)
        self.report['rejectedAttempts'] = ['private-history-read']
        with self.assertRaises(ValueError):
            replay.validate_child(self.report, self.completion, False)

    def test_artifact_collector_checks_all_native_outputs_and_ignores_logs(self):
        import hashlib
        with tempfile.TemporaryDirectory() as folder:
            root = Path(folder)
            (root / 'source.o').write_bytes(b'authored object')
            (root / 'component.dll').write_bytes(b'authored linked component')
            (root / 'compile.log').write_text('diagnostic')
            result = replay.verification.artifacts(root)
            self.assertEqual(set(result), {'source.o', 'component.dll'})
            self.assertEqual(result['source.o'], hashlib.sha256(b'authored object').hexdigest())

    def test_verified_archive_preserves_exact_reports_before_cleanup(self):
        with tempfile.TemporaryDirectory() as folder:
            root = Path(folder)
            report = root / 'full/report.json'
            report.parent.mkdir()
            report.write_bytes(b'{"qualification":"passed"}')
            result = replay.archive_reports(root, [report])
            self.assertTrue(result['allMemberHashesAndCrcVerified'])
            self.assertFalse(report.exists())
            self.assertTrue((root / 'report-archive.json').exists())

    def test_failed_archive_verification_keeps_raw_report(self):
        with tempfile.TemporaryDirectory() as folder:
            root = Path(folder)
            report = root / 'report.json'
            report.write_bytes(b'preserve this proof')
            with patch.object(replay.zipfile.ZipFile, 'testzip', return_value='report.json'):
                with self.assertRaises(ValueError):
                    replay.archive_reports(root, [report])
            self.assertEqual(report.read_bytes(), b'preserve this proof')
            self.assertFalse((root / 'report-archive.json').exists())


if __name__ == '__main__':
    unittest.main()
