import importlib.util
from pathlib import Path
import tempfile
import unittest


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location("public_zlib_headers", ROOT / "toolscripts/public_zlib_headers.py")
HEADERS = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(HEADERS)


class PublicZlibHeadersTests(unittest.TestCase):
    def test_both_unmodified_public_release_header_graphs(self):
        for relative in HEADERS.HEADERS:
            includes = HEADERS.solo_includes(ROOT, ROOT / relative, "zlib-solo")
            self.assertEqual(includes, ["zconf.h"] if relative.endswith("/zlib.h") else [])

    def test_profile_required_for_actual_public_header(self):
        with self.assertRaisesRegex(RuntimeError, "explicit Z_SOLO"):
            HEADERS.solo_includes(ROOT, ROOT / next(iter(HEADERS.HEADERS)), None)

    def test_changed_header_rejected_even_at_reviewed_path(self):
        scratch = ROOT / "work/public-zlib-header-tests"
        scratch.mkdir(parents=True, exist_ok=True)
        with tempfile.TemporaryDirectory(dir=scratch) as folder:
            root = Path(folder).resolve()
            relative = next(iter(HEADERS.HEADERS))
            path = root / relative
            path.parent.mkdir(parents=True)
            original = (ROOT / relative).read_bytes()
            path.write_bytes(original[:-1] + bytes([original[-1] ^ 1]))
            with self.assertRaisesRegex(RuntimeError, "identity differs"):
                HEADERS.solo_includes(root, path, "zlib-solo")

    def test_other_paths_receive_no_upstream_header_exception(self):
        self.assertIsNone(HEADERS.solo_includes(ROOT, ROOT / "src/native/wave036/gzip.h", "zlib-solo"))


if __name__ == "__main__":
    unittest.main()
