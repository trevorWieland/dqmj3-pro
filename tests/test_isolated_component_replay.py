import io
import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch
import subprocess
import zipfile


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "toolscripts"))
import isolated_component_replay as replay


class ImmutableReplayTests(unittest.TestCase):
    def plan(self):
        return {"schemaVersion": 1, "name": "component", "producerSteps": [{"name": "producer", "args": ["toolscripts/producer.py"]}],
            "tests": ["component"], "packets": ["work/component/report.json"]}

    def scratch(self):
        folder = ROOT / "work/replay-wrapper-tests"
        folder.mkdir(parents=True, exist_ok=True)
        temporary = tempfile.TemporaryDirectory(dir=folder)
        self.addCleanup(temporary.cleanup)
        return Path(temporary.name).resolve()

    def test_paths_cannot_escape_owned_root(self):
        root = self.scratch()
        for value in ["../other", "/outside", "", "work\\other", "."]:
            with self.subTest(value=value), self.assertRaises(ValueError):
                replay.contained(root, value)

    def test_empty_duplicate_and_reserved_steps_rejected(self):
        for steps in [[], [{"name": "producer", "args": ["x"]}] * 2, [{"name": "stock-report", "args": ["x"]}], [{"name": "hidden-tests", "args": ["x"]}]]:
            plan = self.plan()
            plan["producerSteps"] = steps
            with self.assertRaises(ValueError):
                replay.validate_plan(plan)

    def test_packet_lists_require_real_owned_output_names(self):
        for packets in [[], ["work/a.json"] * 2, ["../escape.json"], ["inputs/a.json"]]:
            plan = self.plan()
            plan["packets"] = packets
            with self.assertRaises(ValueError):
                replay.validate_plan(plan)

    def test_test_modules_cannot_be_duplicated_or_paths(self):
        for tests in [[], ["one", "one"], ["../other"]]:
            plan = self.plan()
            plan["tests"] = tests
            with self.assertRaises(ValueError):
                replay.validate_plan(plan)

    def test_archive_traversal_and_case_collisions_rejected_before_extract(self):
        for names in [["../outside"], ["Source/a.c", "source/A.c"]]:
            archive = io.BytesIO()
            with zipfile.ZipFile(archive, "w") as target:
                for name in names:
                    target.writestr(name, b"fixture")
            with self.assertRaises(ValueError):
                replay.extract_archive(archive.getvalue(), self.scratch())

    def test_archive_link_rejected_before_extract(self):
        archive = io.BytesIO()
        with zipfile.ZipFile(archive, "w") as target:
            entry = zipfile.ZipInfo("source/link")
            entry.external_attr = 0o120777 << 16
            target.writestr(entry, "outside")
        with self.assertRaises(ValueError):
            replay.extract_archive(archive.getvalue(), self.scratch())

    def run_fixture(self, command, packets):
        root = self.scratch()
        receipt = {"status": "running", "steps": []}
        path = root / "receipt.json"
        return root, receipt, path, [("fixture", ["-c", command])], packets

    def test_success_records_actual_packet_and_stable_log_identity(self):
        root, receipt, path, commands, packets = self.run_fixture('from pathlib import Path;Path("report.json").write_text("fixture")', ["report.json"])
        replay.run_steps(root, Path(sys.executable), commands, receipt, path, packets)
        saved = json.loads(path.read_text())
        self.assertEqual(saved["status"], "passed")
        self.assertEqual(saved["packets"][0]["sha256"], replay.digest(root / "report.json"))
        self.assertEqual(saved["steps"][0]["logSha256"], replay.digest(root / "fixture.log"))

    def test_failed_child_always_saves_failed_checkpoint(self):
        root, receipt, path, commands, packets = self.run_fixture('raise SystemExit(7)', ["report.json"])
        with self.assertRaises(RuntimeError):
            replay.run_steps(root, Path(sys.executable), commands, receipt, path, packets)
        saved = json.loads(path.read_text())
        self.assertEqual((saved["status"], saved["failedStage"], saved["steps"][0]["returncode"]), ("failed", "commands", 7))

    def test_timeout_records_failed_step_and_closed_log(self):
        root, receipt, path, commands, packets = self.run_fixture("fixture", ["report.json"])
        with patch.object(replay.subprocess, "run", side_effect=subprocess.TimeoutExpired("fixture", 2400)):
            with self.assertRaises(subprocess.TimeoutExpired):
                replay.run_steps(root, Path(sys.executable), commands, receipt, path, packets)
        saved = json.loads(path.read_text())
        self.assertEqual(saved["status"], "failed")
        self.assertEqual(saved["steps"][0]["errorType"], "TimeoutExpired")
        self.assertIsNone(saved["steps"][0]["returncode"])
        self.assertEqual(saved["steps"][0]["logSha256"], replay.digest(root / "fixture.log"))

    def test_stale_final_packet_path_never_leaves_running_checkpoint(self):
        root, receipt, path, commands, packets = self.run_fixture('from pathlib import Path;Path("actual.json").write_text("fixture")', ["obsolete/report.json"])
        with self.assertRaises(FileNotFoundError):
            replay.run_steps(root, Path(sys.executable), commands, receipt, path, packets)
        saved = json.loads(path.read_text())
        self.assertEqual((saved["status"], saved["failedStage"], saved["errorType"]), ("failed", "collect-packets", "FileNotFoundError"))
        self.assertEqual(saved["steps"][0]["returncode"], 0)
        self.assertTrue((root / "actual.json").is_file())


if __name__ == "__main__":
    unittest.main()
