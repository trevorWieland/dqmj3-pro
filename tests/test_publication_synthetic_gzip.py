import importlib.util
import json
from pathlib import Path
import tempfile
import unittest


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location("publication_audit", ROOT / "toolscripts/publication_audit.py")
AUDIT = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(AUDIT)
FIXTURE = "evidence/lanes/native-archive032/gzip/synthetic-fixtures.json"
SOURCES = ["toolscripts/native_archive032_gzip_cases.py", "toolscripts/native_archive032_gzip_packet.py", FIXTURE]


class PublicationSyntheticGzipTests(unittest.TestCase):
    def temporary(self):
        scratch = ROOT / "work/synthetic-gzip-audit-tests"
        scratch.mkdir(parents=True, exist_ok=True)
        folder = tempfile.TemporaryDirectory(dir=scratch)
        self.addCleanup(folder.cleanup)
        root = Path(folder.name).resolve()
        for name in SOURCES:
            target = root / name
            target.parent.mkdir(parents=True, exist_ok=True)
            target.write_bytes((ROOT / name).read_bytes())
        return root

    def test_regenerated_fixture_and_integrated_allowlist(self):
        allowed = AUDIT.public_allowlist(ROOT)
        self.assertIn(FIXTURE, allowed)
        self.assertEqual(AUDIT.inspect(FIXTURE, (ROOT / FIXTURE).read_bytes(), allowed, set()), [])

    def test_private_payload_hash_still_wins(self):
        data = (ROOT / FIXTURE).read_bytes()
        findings = AUDIT.inspect(FIXTURE, data, AUDIT.authored_gzip_fixture(ROOT), {AUDIT.sha(data)})
        self.assertIn("known-private-game-payload", {row[0] for row in findings})
        image = next(key for key, value in json.loads(data)["images"].items() if value["bytes"] >= 1024)
        encoded = AUDIT.inspect(FIXTURE, data, AUDIT.authored_gzip_fixture(ROOT), {image})
        self.assertIn("encoded-restricted-payload", {row[0] for row in encoded})

    def test_identical_fixture_at_other_path_is_blocked(self):
        findings = AUDIT.inspect("docs/other.json", (ROOT / FIXTURE).read_bytes(), AUDIT.authored_gzip_fixture(ROOT), set())
        self.assertIn("encoded-restricted-payload", {row[0] for row in findings})

    def test_changed_fixture_or_generator_is_rejected(self):
        for name in [FIXTURE, SOURCES[0], SOURCES[1]]:
            root = self.temporary()
            path = root / name
            path.write_bytes(path.read_bytes() + b"\n")
            with self.assertRaisesRegex(ValueError, "identity changed"):
                AUDIT.authored_gzip_fixture(root)


if __name__ == "__main__":
    unittest.main()
