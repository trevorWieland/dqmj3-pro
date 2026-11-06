import importlib.util
import json
import struct
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location("platform_build", ROOT / "toolscripts/platform_build.py")
BUILD = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(BUILD)


class NativePlatformTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report = BUILD.run_build(output=ROOT / "work/platform-wave001/unittest")

    def test_windows_executable_matches_original_arm_corpus(self):
        self.assertTrue(self.report["windows"]["actuallyExecuted"])
        self.assertTrue(self.report["windows"]["allOutputsEqual"])
        self.assertEqual(self.report["windows"]["comparedCases"], self.report["caseCount"])
        self.assertGreater(self.report["caseCount"], 100)
        data = Path(self.report["windows"]["path"]).read_bytes()
        pe = struct.unpack_from("<I", data, 0x3C)[0]
        self.assertEqual(data[pe:pe + 4], b"PE\x00\x00")
        self.assertEqual(struct.unpack_from("<H", data, pe + 4)[0], 0x8664)

    def test_android_artifacts_have_real_arm64_16k_load_alignment(self):
        for name in ("executable", "library"):
            info = self.report["android"][name]
            self.assertEqual(info["machine"], "EM_AARCH64")
            self.assertTrue(all(value >= 16384 for value in info["loadAlignments"]))
        self.assertEqual(self.report["android"]["executable"]["interpreters"], ["/system/bin/linker64"])
        self.assertFalse(self.report["android"]["actuallyExecuted"])
        self.assertFalse(self.report["android"]["apkPackaged"])

    def test_wrong_source_executes_and_semantically_fails(self):
        control = self.report["wrongSourceControl"]
        self.assertTrue(control["actuallyExecuted"])
        self.assertEqual(control["completedCases"], self.report["caseCount"])
        self.assertGreater(control["semanticRejections"], 0)

    def test_invalid_runner_inputs_fail_closed(self):
        controls = self.report["windows"]["guardControls"]
        self.assertEqual(set(controls), {"unknownFunction", "truncatedRecord"})
        self.assertTrue(all(item["exitCode"] == 2 and item["stdoutBytes"] == 0 for item in controls.values()))

    def test_changed_source_pin_is_rejected(self):
        manifest = json.loads((ROOT / "platform/native-inputs.json").read_text())
        manifest["sourceSha256"] = "0" * 64
        target = ROOT / "work/platform-wave001/unittest/invalid-inputs.json"
        target.write_text(json.dumps(manifest), encoding="utf-8")
        with self.assertRaisesRegex(RuntimeError, "Input hash mismatch"):
            BUILD.load_packet(target)

    def test_component_build_does_not_claim_full_game_or_source_credit(self):
        self.assertFalse(self.report["fullGameBuild"])
        self.assertEqual(self.report["acceptedSourceCredit"], 0)

    def test_skipped_function_cannot_pass_as_complete_packet(self):
        manifest = json.loads((ROOT / "platform/native-inputs.json").read_text())
        manifest["functionNames"].pop()
        target = ROOT / "work/platform-wave001/unittest/missing-function.json"
        target.write_text(json.dumps(manifest), encoding="utf-8")
        with self.assertRaisesRegex(RuntimeError, "omits or adds"):
            BUILD.load_packet(target)


if __name__ == "__main__":
    unittest.main()
