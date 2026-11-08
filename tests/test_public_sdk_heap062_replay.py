import copy
from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
import public_sdk_heap062_replay as replay


class PublicHeapTerminalReceiptTests(unittest.TestCase):
    def setUp(self):
        self.receipt = dict(status='passed', sourceOnly=False, rejectedAttempts=[], rejectedMetadata=[],
                            tests=17, originalConstructions=3, allOriginalPcs=[0x10b980], reads=[])
        self.completion = dict(status='passed', exitCode=0, postExitAuditRejections=[])

    def test_complete_full_receipt(self):
        replay.validate_child(self.receipt, self.completion, False)

    def test_source_only_profiles_are_separate_from_original_tests(self):
        self.receipt.update(sourceOnly=True, tests=0, originalConstructions=0, allOriginalPcs=[])
        replay.validate_child(self.receipt, self.completion, True)

    def test_successful_child_and_initial_receipt_do_not_hide_shutdown_violation(self):
        self.completion['postExitAuditRejections'] = ['caught-at-exit-private-metadata-read']
        with self.assertRaises(ValueError):
            replay.validate_child(self.receipt, self.completion, False)

    def test_caught_read_or_metadata_attempt_is_not_a_positive_result(self):
        for field in ('rejectedAttempts', 'rejectedMetadata'):
            receipt = copy.deepcopy(self.receipt)
            receipt[field] = ['work/retained/ready.json']
            with self.subTest(field=field), self.assertRaises(ValueError):
                replay.validate_child(receipt, self.completion, False)

    def test_source_only_cannot_construct_execute_or_read_original_inputs(self):
        self.receipt.update(sourceOnly=True, tests=0, originalConstructions=0, allOriginalPcs=[])
        for field, value in [('originalConstructions', 1), ('allOriginalPcs', [0x10b980]),
                             ('reads', ['C:\\project\\generated\\update-content0\\code.bin'])]:
            receipt = copy.deepcopy(self.receipt)
            receipt[field] = value
            with self.subTest(field=field), self.assertRaises(ValueError):
                replay.validate_child(receipt, self.completion, True)

    def test_failed_supervisor_or_empty_full_test_suite_is_rejected(self):
        for field, value in [('status', 'failed'), ('exitCode', 1)]:
            completion = copy.deepcopy(self.completion)
            completion[field] = value
            with self.subTest(field=field), self.assertRaises(ValueError):
                replay.validate_child(self.receipt, completion, False)
        self.receipt['tests'] = 0
        with self.assertRaises(ValueError):
            replay.validate_child(self.receipt, self.completion, False)

    def test_manifest_and_copy_paths_cannot_escape(self):
        root = Path(__file__).resolve().parent
        for value in ('../old/source.c', 'C:/old/source.c', 'nested\\source.c', '.'):
            with self.subTest(path=value), self.assertRaises(ValueError):
                replay.contained(root, value)


if __name__ == '__main__':
    unittest.main()
