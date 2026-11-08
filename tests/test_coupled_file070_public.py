import hashlib
import json
from pathlib import Path
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
from coupled_file070_inputs import relative
from coupled_file070_replay import verify_journal


class CoupledTerminalJournalTests(unittest.TestCase):
    def write(self, folder, values):
        rows, previous = [], '0' * 64
        for index, value in enumerate(values):
            row = dict(sequence=index, previousSHA256=previous, **value)
            previous = hashlib.sha256(json.dumps(row, sort_keys=True).encode()).hexdigest()
            rows.append(row)
        path = Path(folder) / 'journal.jsonl'
        path.write_text(''.join(json.dumps(row) + '\n' for row in rows))
        return path, rows

    def test_clean_terminal_receipt(self):
        with tempfile.TemporaryDirectory() as folder:
            path, _ = self.write(folder, [dict(event='receipt-written', status='passed'),
                dict(event='terminal-after-run', status='clean')])
            self.assertEqual(verify_journal(path, False)['terminalStatus'], 'clean')

    def test_successful_receipt_cannot_hide_late_caught_violation(self):
        with tempfile.TemporaryDirectory() as folder:
            path, _ = self.write(folder, [dict(event='receipt-written', status='passed'),
                dict(event='rejected-access', operation='late-stat'),
                dict(event='terminal-after-run', status='failed:late-stat')])
            self.assertEqual(verify_journal(path, True)['terminalStatus'], 'failed:late-stat')
            with self.assertRaises(ValueError):
                verify_journal(path, False)

    def test_after_terminal_access_is_not_a_clean_completed_journal(self):
        with tempfile.TemporaryDirectory() as folder:
            path, _ = self.write(folder, [dict(event='terminal-after-run', status='clean'),
                dict(event='after-terminal-access', operation='read')])
            with self.assertRaises(ValueError):
                verify_journal(path, False)

    def test_modified_middle_record_breaks_chain(self):
        with tempfile.TemporaryDirectory() as folder:
            path, rows = self.write(folder, [dict(event='receipt-written', status='passed'),
                dict(event='terminal-after-run', status='clean')])
            rows[0]['status'] = 'rewritten'
            path.write_text(''.join(json.dumps(row) + '\n' for row in rows))
            with self.assertRaises(ValueError):
                verify_journal(path, False)

    def test_truncated_terminal_record_is_rejected(self):
        with tempfile.TemporaryDirectory() as folder:
            path, _ = self.write(folder, [dict(event='receipt-written', status='passed')])
            with self.assertRaises(ValueError):
                verify_journal(path, False)

    def test_clean_terminal_cannot_satisfy_expected_rejection(self):
        with tempfile.TemporaryDirectory() as folder:
            path, _ = self.write(folder, [dict(event='terminal-after-run', status='clean')])
            with self.assertRaises(ValueError):
                verify_journal(path, True)

    def test_declared_paths_cannot_escape_input_root(self):
        for name in ['../old/input.c', '/external/input.c', 'C:/external/input.c', 'sub\\input.c']:
            with self.subTest(name=name), self.assertRaises(ValueError):
                relative(name)


if __name__ == '__main__':
    unittest.main()
