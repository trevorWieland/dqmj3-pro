import copy
import importlib.util
from pathlib import Path
import tempfile
import unittest


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location("owner_verify_v2", ROOT / "toolscripts/native_wave013_file_owner_orchestration_verify_v2.py")
VERIFY = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(VERIFY)
SCRATCH = ROOT / "work/owner-pin-verifier-v2-tests"
SCRATCH.mkdir(parents=True, exist_ok=True)


class FilePinIdentityTests(unittest.TestCase):
    def fixture(self):
        temporary = tempfile.TemporaryDirectory(dir=SCRATCH)
        self.addCleanup(temporary.cleanup)
        root = Path(temporary.name)
        path = root / "unit.o"
        path.write_bytes(b"synthetic compiled artifact")
        return root, path, VERIFY.identity(path, root)

    def test_enriched_object_identity_preserves_all_metadata(self):
        root, path, pin = self.fixture()
        enriched = {**pin, "relocations": [{"offset": 4, "symbol": "test"}], "format": "ELF32"}
        before = copy.deepcopy(enriched)
        self.assertEqual(VERIFY.checked_pins(root, enriched), 1)
        self.assertEqual(enriched, before)

    def test_nested_duplicate_identical_pins_validate_once(self):
        root, path, pin = self.fixture()
        self.assertEqual(VERIFY.checked_pins(root, {"first": [pin], "second": {"object": pin}}), 1)

    def test_same_length_modified_bytes_fail_hash_check(self):
        root, path, pin = self.fixture()
        path.write_bytes(b"X" * path.stat().st_size)
        with self.assertRaisesRegex(ValueError, "changed"):
            VERIFY.checked_pins(root, pin)

    def test_wrong_size_fails_even_with_current_hash(self):
        root, path, pin = self.fixture()
        with self.assertRaisesRegex(ValueError, "changed"):
            VERIFY.checked_pins(root, {**pin, "bytes": pin["bytes"] + 1})

    def test_conflicting_expected_pins_are_not_silently_overwritten(self):
        root, path, pin = self.fixture()
        with self.assertRaisesRegex(ValueError, "Conflicting"):
            VERIFY.checked_pins(root, [pin, {**pin, "sha256": "0" * 64}])

    def test_absolute_parent_and_windows_escape_paths_fail(self):
        root, path, pin = self.fixture()
        for name in ["../unit.o", str(path.resolve()), "C:/unit.o", "..\\unit.o"]:
            with self.subTest(name=name), self.assertRaises(ValueError):
                VERIFY.checked_pins(root, {**pin, "path": name})

    def test_missing_input_fails(self):
        root, path, pin = self.fixture()
        path.unlink()
        with self.assertRaises(FileNotFoundError):
            VERIFY.checked_pins(root, pin)

    def test_nonstring_path_fails_as_invalid_metadata(self):
        root, path, pin = self.fixture()
        with self.assertRaises(ValueError):
            VERIFY.checked_pins(root, {**pin, "path": None})
