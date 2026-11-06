import hashlib
import json
import lzma
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "toolscripts"))
import ci_native_build as build


def digest(data):
    return hashlib.sha256(data).hexdigest()


class TrustedNativeBuildTests(unittest.TestCase):
    def setUp(self):
        directory = ROOT / "work/native-ci-tests"
        directory.mkdir(parents=True, exist_ok=True)
        self.temporary = tempfile.TemporaryDirectory(dir=directory)
        self.addCleanup(self.temporary.cleanup)
        self.root = Path(self.temporary.name)
        self.private = self.root / "private"
        self.private.mkdir()

    def fixture(self):
        configuration = {"inputs": {}}
        manifest = {"schemaVersion": 1, "files": []}
        for label, name in (("base", "DQMJ3P.cia"), ("update", "DQMJ3P_Update.cia")):
            data = ((label + "-synthetic-intake-fixture") * 200).encode()
            compressed = lzma.compress(data)
            parts = []
            split = len(compressed) // 2
            for index, content in enumerate((compressed[:split], compressed[split:])):
                part = name + ".xz.part-" + str(index)
                (self.private / part).write_bytes(content)
                parts.append({"path": part, "sha256": digest(content), "bytes": len(content)})
            manifest["files"].append({"path": name, "sha256": digest(data), "bytes": len(data), "compression": "xz", "parts": parts})
            configuration["inputs"][label] = "inputs/archive/dqmj3pro/" + name
            configuration[label + "CiaSha256"] = digest(data)
        (self.root / "project.json").write_text(json.dumps(configuration))
        self.save_manifest(manifest)
        return manifest

    def save_manifest(self, value):
        (self.private / "inputs-manifest.json").write_text(json.dumps(value))

    def test_verified_split_stream_materializes_both_exact_inputs(self):
        self.fixture()
        result = build.materialize_inputs(self.root, self.private)
        self.assertEqual(len(result), 2)
        for row in result:
            self.assertEqual(build.compiler.digest(self.root / row["path"]), row["sha256"])
        self.assertEqual(build.materialize_inputs(self.root, self.private), result)

    def test_corrupt_part_is_rejected_before_decompression(self):
        manifest = self.fixture()
        (self.private / manifest["files"][0]["parts"][0]["path"]).write_bytes(b"wrong")
        with self.assertRaisesRegex(RuntimeError, "identity mismatch"):
            build.materialize_inputs(self.root, self.private)
        self.assertFalse((self.root / "inputs").exists())

    def test_manifest_cannot_substitute_another_original(self):
        manifest = self.fixture()
        manifest["files"][0]["sha256"] = "0" * 64
        self.save_manifest(manifest)
        with self.assertRaisesRegex(RuntimeError, "pinned input contract"):
            build.materialize_inputs(self.root, self.private)

    def test_existing_mismatched_original_is_preserved(self):
        self.fixture()
        path = self.root / "inputs/archive/dqmj3pro/DQMJ3P.cia"
        path.parent.mkdir(parents=True)
        path.write_bytes(b"existing original must remain unchanged")
        with self.assertRaisesRegex(RuntimeError, "identity mismatch"):
            build.materialize_inputs(self.root, self.private)
        self.assertEqual(path.read_bytes(), b"existing original must remain unchanged")

    def test_truncated_verified_compression_is_rejected(self):
        manifest = self.fixture()
        row = manifest["files"][0]["parts"][-1]
        path = self.private / row["path"]
        data = path.read_bytes()[:-5]
        path.write_bytes(data)
        row.update(sha256=digest(data), bytes=len(data))
        self.save_manifest(manifest)
        with self.assertRaisesRegex(RuntimeError, "Truncated"):
            build.materialize_inputs(self.root, self.private)

    def test_expansion_exceeding_declared_input_extent_is_rejected(self):
        manifest = self.fixture()
        manifest["files"][0]["bytes"] = 4
        self.save_manifest(manifest)
        with self.assertRaisesRegex(RuntimeError, "exceeds measured extent"):
            build.materialize_inputs(self.root, self.private)

    def test_traversing_private_part_is_rejected(self):
        manifest = self.fixture()
        manifest["files"][0]["parts"][0]["path"] = "../elsewhere"
        self.save_manifest(manifest)
        with self.assertRaisesRegex(RuntimeError, "Invalid private input part"):
            build.materialize_inputs(self.root, self.private)

    def test_frozen_windows_source_path_relocates_to_checked_out_tree(self):
        path = build.native_path(self.root, "C:\\historic\\checkout\\src\\native\\wave001\\leaves.c")
        self.assertEqual(path, self.root / "src/native/wave001/leaves.c")
        with self.assertRaises(RuntimeError):
            build.native_path(self.root, "C:/historic/src/native/../../../inputs/private.c")

    def test_progress_readiness_is_explicit_boolean(self):
        (self.root / "config").mkdir()
        path = self.root / "config/objdiff-units.json"
        path.write_text(json.dumps({"readyForProgress": False}))
        self.assertFalse(build.reporting_ready(self.root))
        path.write_text(json.dumps({"readyForProgress": "true"}))
        with self.assertRaises(RuntimeError):
            build.reporting_ready(self.root)

    def test_accepted_ledgers_match_authoritative_recovery(self):
        functions = build.accepted_functions(ROOT)
        ledger = build.read(ROOT / "recovery.json")
        self.assertEqual(len(functions), ledger["acceptedRecoveredFunctions"])


if __name__ == "__main__":
    unittest.main()
