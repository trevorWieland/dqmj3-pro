import hashlib
import importlib.util
import json
import subprocess
import tempfile
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location("configure_objdiff", ROOT / "toolscripts/configure_objdiff.py")
EXPORT = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(EXPORT)


class PendingConfiguration(unittest.TestCase):
    def test_disabled_configuration_cannot_publish_even_with_objects_present(self):
        with tempfile.TemporaryDirectory(prefix="objdiff-disabled-", dir=ROOT / "work") as temporary:
            root = Path(temporary)
            (root / "config").mkdir()
            data = {"schemaVersion": 2, "readyForProgress": False,
                    "blockers": ["Synthetic unreviewed scope"], "versions": ["update-content0"]}
            (root / "config/objdiff-units.json").write_text(json.dumps(data))
            with self.assertRaisesRegex(ValueError, "progress is blocked"):
                EXPORT.configure(root, "config/objdiff-units.json", "update-content0")


class ObjectConfiguration(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        compiler = ROOT / "tools/clang-21/clang.exe"
        if not compiler.is_file():
            raise unittest.SkipTest("Pinned local Clang is unavailable; genuine-object cases were not run")
        work = ROOT / "work"
        work.mkdir(exist_ok=True)
        cls.compilation = tempfile.TemporaryDirectory(prefix="objdiff-clang-", dir=work)
        fixture = Path(cls.compilation.name)
        source = fixture / "fixture.c"
        source.write_text("unsigned fixture(unsigned value) { return value * 5u; }\n", encoding="utf-8")
        output = fixture / "fixture.o"
        result = subprocess.run([str(compiler), "--target=arm-none-eabi", "-mcpu=mpcore", "-marm",
                                 "-O2", "-ffreestanding", "-c", str(source), "-o", str(output)],
                                capture_output=True, text=True, timeout=30)
        if result.returncode:
            raise RuntimeError("Synthetic fixture compilation failed: " + result.stderr)
        cls.object_bytes = output.read_bytes()

    @classmethod
    def tearDownClass(cls):
        cls.compilation.cleanup()

    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory(prefix="objdiff-config-test-", dir=ROOT / "work")
        self.addCleanup(self.temporary.cleanup)
        self.root = Path(self.temporary.name)
        for name in ("config", "src/native", "build/update-content0", "evidence"):
            (self.root / name).mkdir(parents=True, exist_ok=True)
        (self.root / "src/native/fixture.c").write_text("unsigned fixture(unsigned value) { return value * 5u; }\n")
        for name in ("target.o", "base.o"):
            (self.root / "build/update-content0" / name).write_bytes(self.object_bytes)
        digest = hashlib.sha256(self.object_bytes).hexdigest()
        self.proof = {"matched": True, "sourceLinked": True, "version": "update-content0",
                      "unit": "src/native/fixture", "targetSha256": digest, "baseSha256": digest}
        self.inventory = {"complete": True, "reviewed": True, "reviewer": "synthetic-fixture-review",
                          "scope": "Only the generated fixture program", "version": "update-content0",
                          "unitNames": ["src/native/fixture"]}
        self.manifest = {"schemaVersion": 1, "readyForProgress": True, "versions": ["update-content0"],
                         "reviewedInventory": None, "units": [{"version": "update-content0",
                             "name": "src/native/fixture", "source_path": "src/native/fixture.c",
                             "complete": True,
                             "target": {"path": "build/update-content0/target.o", "sha256": digest},
                             "base": {"path": "build/update-content0/base.o", "sha256": digest}}]}

    def write_reference(self, path, data):
        content = (json.dumps(data) + "\n").encode()
        (self.root / path).write_bytes(content)
        return {"path": path, "sha256": hashlib.sha256(content).hexdigest()}

    def generate(self):
        self.manifest["reviewedInventory"] = self.write_reference("evidence/inventory.json", self.inventory)
        if self.manifest["units"][0]["complete"]:
            self.manifest["units"][0]["completionEvidence"] = self.write_reference("evidence/completion.json", self.proof)
        self.write_reference("config/units.json", self.manifest)
        return EXPORT.configure(self.root, "config/units.json", "update-content0")

    def test_emits_hierarchical_units_with_actual_clang_objects(self):
        result = self.generate()
        unit = result["units"][0]
        self.assertEqual(unit["name"], "src/native/fixture")
        self.assertEqual(unit["metadata"], {"source_path": "src/native/fixture.c", "complete": True})
        self.assertNotIn("progress_categories", result)
        self.assertEqual(json.loads((self.root / "objdiff.json").read_text()), result)

    def test_unmatched_unit_is_not_complete(self):
        self.manifest["units"][0]["complete"] = False
        result = self.generate()
        self.assertFalse(result["units"][0]["metadata"]["complete"])

    def test_objdiff_cli_consumes_generated_fixture(self):
        cli = ROOT / "tools/objdiff-3.8.3/objdiff-cli.exe"
        if not cli.is_file():
            self.skipTest("Pinned objdiff-cli is unavailable; synthetic report was not run")
        self.generate()
        report = self.root / "report.json"
        result = subprocess.run([str(cli), "report", "generate", "-p", str(self.root), "-o", str(report)],
                                capture_output=True, text=True, timeout=30)
        self.assertEqual(result.returncode, 0, result.stdout + result.stderr)
        data = json.loads(report.read_text())
        self.assertEqual(data["units"][0]["name"], "src/native/fixture")

    def test_unbuilt_object_fails(self):
        (self.root / "build/update-content0/base.o").unlink()
        with self.assertRaises(FileNotFoundError):
            self.generate()
        self.assertFalse((self.root / "objdiff.json").exists())

    def test_source_traversal_fails(self):
        self.manifest["units"][0]["source_path"] = "../outside.c"
        with self.assertRaisesRegex(ValueError, "Unsafe"):
            self.generate()

    def test_object_traversal_fails(self):
        self.manifest["units"][0]["base"]["path"] = "build/../../outside.o"
        with self.assertRaisesRegex(ValueError, "Unsafe"):
            self.generate()

    def test_unreviewed_inventory_fails(self):
        self.inventory["reviewed"] = False
        with self.assertRaisesRegex(ValueError, "reviewed complete inventory"):
            self.generate()

    def test_subset_of_inventory_fails(self):
        self.inventory["unitNames"].append("src/native/missing")
        with self.assertRaisesRegex(ValueError, "Every reviewed inventory unit"):
            self.generate()

    def test_missing_source_fails(self):
        (self.root / "src/native/fixture.c").unlink()
        with self.assertRaisesRegex(ValueError, "Source must exist"):
            self.generate()

    def test_unlinked_completion_fails(self):
        self.proof["sourceLinked"] = False
        with self.assertRaisesRegex(ValueError, "source-link evidence"):
            self.generate()

    def test_changed_object_hash_fails(self):
        (self.root / "build/update-content0/base.o").write_bytes(self.object_bytes + b"changed")
        with self.assertRaisesRegex(ValueError, "Object SHA-256 changed"):
            self.generate()

    def test_text_disguised_as_object_fails(self):
        content = b"this is not an object"
        row = self.manifest["units"][0]
        row["complete"] = False
        row["base"]["sha256"] = hashlib.sha256(content).hexdigest()
        (self.root / row["base"]["path"]).write_bytes(content)
        with self.assertRaisesRegex(ValueError, "actual little-endian ELF32"):
            self.generate()

    def test_version_mismatch_fails(self):
        self.inventory["version"] = "base-content0"
        with self.assertRaisesRegex(ValueError, "reviewed complete inventory"):
            self.generate()

    def test_wrong_source_group_fails(self):
        self.manifest["units"][0]["name"] = "flat-unit"
        self.inventory["unitNames"] = ["flat-unit"]
        self.proof["unit"] = "flat-unit"
        with self.assertRaisesRegex(ValueError, "source-tree path"):
            self.generate()


if __name__ == "__main__":
    unittest.main()
