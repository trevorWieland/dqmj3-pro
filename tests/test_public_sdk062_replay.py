import json
from pathlib import Path
import sys
import tempfile
from types import SimpleNamespace
import unittest
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import public_sdk062_bindings as bindings
import public_sdk062_replay as replay


class PublicSdkReplayTests(unittest.TestCase):
    def test_historical_paths_removed_and_public_snapshot_retained(self):
        root = ROOT / 'work/path-cleanup-fixture'
        output = root / 'work/selected'
        approved = str(output / 'context')
        stale = str(root / 'work/native-asset062-sdk')
        standard = str(root / 'python/Lib')
        with patch.object(sys, 'path', [stale, standard, approved, stale]):
            bindings.public_paths(root, output, [approved])
            self.assertEqual(sys.path, [approved, standard])

    def test_caught_blocked_access_cannot_produce_passed_child_receipt(self):
        with tempfile.TemporaryDirectory(prefix='sdk-audit-regression-', dir=ROOT / 'work') as temporary:
            root = Path(temporary).resolve()
            self.assertTrue(root.is_relative_to((ROOT / 'work').resolve()))
            output = root / 'work/selected'
            historical = root / 'work/native-asset062-sdk'

            def passing_tests_that_catch_audit_failure(suite):
                try:
                    sys.audit('open', str(historical), 'r', 0)
                except ValueError:
                    pass
                return SimpleNamespace(wasSuccessful=lambda: True, testsRun=14)

            runner = SimpleNamespace(run=passing_tests_that_catch_audit_failure)
            with patch.object(replay, 'ROOT', root), patch.object(replay.inputs, 'load', return_value={}), \
                 patch.object(replay, 'pins', return_value={}), \
                 patch.object(replay.runtime, 'verify', return_value={}), \
                 patch.object(replay.runtime, 'identity', return_value={}), \
                 patch.object(replay.bindings, 'bind', return_value=(None, output / 'context/build')), \
                 patch.object(replay.unittest.defaultTestLoader, 'discover', return_value=[]), \
                 patch.object(replay.unittest, 'TextTestRunner', return_value=runner):
                with self.assertRaisesRegex(ValueError, 'attempted forbidden historical'):
                    replay.child(output, 'context', 'tests')
            record = json.loads((output / 'context/public-tests-receipt.json').read_bytes())
            self.assertEqual(record['status'], 'failed')
            self.assertEqual(record['forbiddenHistoricalWorkAccess'], [str(historical)])


if __name__ == '__main__':
    unittest.main()
