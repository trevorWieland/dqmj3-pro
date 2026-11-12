import importlib.util
import re
import tempfile
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location("public_zlib_headers", ROOT / "toolscripts/public_zlib_headers.py")
HEADERS = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(HEADERS)


class PublicZlibHeadersTests(unittest.TestCase):
    def test_every_reviewed_file_returns_its_declared_include_graph(self):
        for relative, record in HEADERS.HEADERS.items():
            with self.subTest(relative=relative):
                size, sha256, includes, profile = record
                self.assertEqual(HEADERS.solo_includes(ROOT, ROOT / relative, profile), includes)

    def test_declared_include_edges_exist_in_the_reviewed_text(self):
        # A review may not invent an edge: every declared include has to appear
        # in the file it is declared for, quoted or in angle brackets.
        for relative, record in HEADERS.HEADERS.items():
            text = (ROOT / relative).read_text(encoding="utf-8", errors="replace")
            for name in record[2]:
                pattern = r'^\s*#\s*include\s+(?:"%s"|<%s>)' % (re.escape(name), re.escape(name))
                self.assertRegex(text, re.compile(pattern, re.M),
                                 "%s does not include %s" % (relative, name))

    def test_each_generation_requires_its_own_profile(self):
        for relative, profile in [
                ("src/native/wave032/third_party/zlib-1.2.7/zlib.h", "zlib-solo"),
                ("src/native/third_party/zlib-1.2.5/zlib.h", "zlib-1.2.5")]:
            other = "zlib-1.2.5" if profile == "zlib-solo" else "zlib-solo"
            for named in (None, other):
                with self.assertRaisesRegex(RuntimeError, "explicit " + re.escape(profile)):
                    HEADERS.solo_includes(ROOT, ROOT / relative, named)

    def test_changed_header_rejected_even_at_reviewed_path(self):
        scratch = ROOT / "work/public-zlib-header-tests"
        scratch.mkdir(parents=True, exist_ok=True)
        with tempfile.TemporaryDirectory(dir=scratch) as folder:
            root = Path(folder).resolve()
            relative = "src/native/third_party/zlib-1.2.5/zconf.h"
            path = root / relative
            path.parent.mkdir(parents=True)
            original = (ROOT / relative).read_bytes()
            path.write_bytes(original[:-1] + bytes([original[-1] ^ 1]))
            with self.assertRaisesRegex(RuntimeError, "identity differs"):
                HEADERS.solo_includes(root, path, "zlib-1.2.5")

    def test_other_paths_receive_no_upstream_header_exception(self):
        self.assertIsNone(HEADERS.solo_includes(ROOT, ROOT / "src/native/wave036/gzip.h", "zlib-solo"))
        self.assertIsNone(HEADERS.solo_includes(
            ROOT, ROOT / "src/native/third_party/zlib-1.2.5/adler32.c", "zlib-1.2.5"))


if __name__ == "__main__":
    unittest.main()
