import hashlib
import io
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch
import urllib.error

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
import bootstrap_report_tools as bootstrap


class PublicReportDownloadTests(unittest.TestCase):
    def setUp(self):
        self.folder = tempfile.TemporaryDirectory()
        self.addCleanup(self.folder.cleanup)
        self.path = Path(self.folder.name) / 'objdiff.exe'
        self.data = b'pinned public tool fixture'
        self.digest = hashlib.sha256(self.data).hexdigest()

    def error(self, status):
        return urllib.error.HTTPError('https://example.test/tool', status, 'fixture', {}, None)

    @patch.object(bootstrap.time, 'sleep')
    def test_transient_gateway_failure_retries_without_changing_tool_identity(self, sleep):
        with patch.object(bootstrap.urllib.request, 'urlopen', side_effect=[self.error(504), io.BytesIO(self.data)]) as open_url:
            bootstrap.fetch('https://example.test/tool', self.path, self.digest)
        self.assertEqual(self.path.read_bytes(), self.data)
        self.assertEqual(open_url.call_count, 2)
        self.assertEqual(open_url.call_args.args[0].get_header('Cache-control'), 'no-cache')
        sleep.assert_called_once_with(2)

    @patch.object(bootstrap.time, 'sleep')
    def test_retry_exhaustion_does_not_publish_a_tool_or_keep_partial_data(self, sleep):
        with patch.object(bootstrap.urllib.request, 'urlopen', side_effect=self.error(504)) as open_url:
            with self.assertRaises(urllib.error.HTTPError):
                bootstrap.fetch('https://example.test/tool', self.path, self.digest)
        self.assertEqual(open_url.call_count, 3)
        self.assertFalse(self.path.exists())
        self.assertFalse(self.path.with_suffix('.exe.download').exists())

    def test_permanent_http_error_is_not_retried(self):
        with patch.object(bootstrap.urllib.request, 'urlopen', side_effect=self.error(404)) as open_url:
            with self.assertRaises(urllib.error.HTTPError):
                bootstrap.fetch('https://example.test/tool', self.path, self.digest)
        self.assertEqual(open_url.call_count, 1)

    @patch.object(bootstrap.time, 'sleep')
    def test_interrupted_partial_download_restarts_from_zero(self, sleep):
        class Interrupted(io.BytesIO):
            def read(self, size=-1):
                if self.tell():
                    raise ConnectionResetError('interrupted fixture')
                return super().read(5)
        with patch.object(bootstrap.urllib.request, 'urlopen', side_effect=[Interrupted(b'stale prefix'), io.BytesIO(self.data)]):
            bootstrap.fetch('https://example.test/tool', self.path, self.digest)
        self.assertEqual(self.path.read_bytes(), self.data)
        self.assertFalse(self.path.with_suffix('.exe.download').exists())

    def test_hash_mismatch_cannot_be_retried_into_acceptance(self):
        with patch.object(bootstrap.urllib.request, 'urlopen', return_value=io.BytesIO(b'wrong')) as open_url:
            with self.assertRaises(RuntimeError):
                bootstrap.fetch('https://example.test/tool', self.path, self.digest)
        self.assertEqual(open_url.call_count, 1)
        self.assertFalse(self.path.exists())

    def test_verify_only_missing_file_never_accesses_network(self):
        with patch.object(bootstrap.urllib.request, 'urlopen') as open_url:
            with self.assertRaises(RuntimeError):
                bootstrap.fetch('https://example.test/tool', self.path, self.digest, True)
        open_url.assert_not_called()

    def test_existing_wrong_identity_never_accesses_network(self):
        self.path.write_bytes(b'wrong')
        with patch.object(bootstrap.urllib.request, 'urlopen') as open_url:
            with self.assertRaises(RuntimeError):
                bootstrap.fetch('https://example.test/tool', self.path, self.digest)
        open_url.assert_not_called()


if __name__ == '__main__':
    unittest.main()
