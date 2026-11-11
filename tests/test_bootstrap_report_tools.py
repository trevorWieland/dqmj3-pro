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


class OfficialObjdiffAssetTests(unittest.TestCase):
    def setUp(self):
        PublicReportDownloadTests.setUp(self)
        import json
        self.root = Path(self.folder.name)
        (self.root / 'config').mkdir()
        source = Path(__file__).resolve().parents[1] / 'config/report-objdiff-asset.json'
        self.endpoint = json.loads(source.read_text(encoding='utf-8'))
        self.endpoint['sha256'] = self.digest
        self.endpoint['size'] = len(self.data)
        self.distribution = dict(url=self.endpoint['canonicalUrl'], sha256=self.digest)
        self.save_endpoint()

    def save_endpoint(self):
        import json
        (self.root / 'config/report-objdiff-asset.json').write_text(json.dumps(self.endpoint), encoding='utf-8')

    def test_official_release_download_carries_no_credentials_or_api_headers(self):
        with patch.object(bootstrap.urllib.request, 'urlopen', return_value=io.BytesIO(self.data)) as open_url:
            bootstrap.fetch_objdiff(self.root, self.distribution, self.path, len(self.data))
        request = open_url.call_args.args[0]
        self.assertEqual(request.full_url, self.endpoint['canonicalUrl'])
        self.assertIsNone(request.get_header('Authorization'))
        self.assertIsNone(request.get_header('Accept'))
        self.assertIsNone(request.get_header('X-github-api-version'))
        self.assertEqual(self.path.read_bytes(), self.data)

    def test_disagreeing_or_nonofficial_asset_fails_before_network(self):
        import copy
        baseline = copy.deepcopy(self.endpoint)
        for key, value in [('canonicalUrl', 'https://example.test/tool'),
                           ('canonicalUrl', 'https://api.github.com/repos/encounter/objdiff/releases/assets/657354510'),
                           ('sha256', '0' * 64), ('size', len(self.data) + 1)]:
            with self.subTest(key=key, value=value):
                self.endpoint = dict(baseline, **{key: value})
                self.save_endpoint()
                with patch.object(bootstrap.urllib.request, 'urlopen') as open_url:
                    with self.assertRaises(RuntimeError):
                        bootstrap.fetch_objdiff(self.root, self.distribution, self.path, len(self.data))
                open_url.assert_not_called()

    def test_wrong_bytes_cannot_replace_pinned_executable(self):
        with patch.object(bootstrap.urllib.request, 'urlopen', return_value=io.BytesIO(b'{"id":657354510}')):
            with self.assertRaises(RuntimeError):
                bootstrap.fetch_objdiff(self.root, self.distribution, self.path, len(self.data))
        self.assertFalse(self.path.exists())


if __name__ == '__main__':
    unittest.main()
