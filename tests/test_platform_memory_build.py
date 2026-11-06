import importlib.util
import json
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location("platform_memory", ROOT / "toolscripts/platform_memory_build.py")
BUILD = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(BUILD)


class PlatformMemoryTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report = BUILD.run_build(output=ROOT / "work/platform-memory-wave001/unittest")

    def test_all_qualified_source_functions_execute_against_original_memory_corpus(self):
        self.assertEqual(self.report["getterFunctions"], 257)
        self.assertEqual(self.report["qualifiedSetterFunctions"], 58)
        self.assertEqual(self.report["caseCount"], 315 * 24)
        self.assertTrue(self.report["windows"]["actuallyExecuted"])
        self.assertTrue(self.report["windows"]["allMemoryGuardsPassed"])
        self.assertEqual(self.report["windows"]["semanticMismatchCount"], 0)

    def test_real_host64_pointer_layouts_and_both_typed_object_geometries(self):
        self.assertEqual(self.report["windows"]["hostPointerWidth"], 8)
        self.assertEqual(self.report["windows"]["geometries"], [0, 1])
        self.assertGreater(len(self.report["windows"]["hostOffsetChangedFunctions"]), 100)

    def test_setter_return_values_preserve_logical_record_identity(self):
        self.assertTrue(self.report["windows"]["logicalRecordReturnGuardsPassed"])
        self.assertEqual(self.report["setterLogicalPointerReturnCases"], 1392)

    def test_wrong_getters_and_setters_actually_return_and_are_rejected(self):
        wrong = self.report["compiledWrongSource"]
        self.assertTrue(wrong["actuallyExecuted"])
        self.assertEqual(wrong["actualSourceFixtureReturns"], self.report["caseCount"])
        self.assertEqual(wrong["semanticMismatchCount"], self.report["caseCount"])
        self.assertEqual(len(wrong["mismatchingSymbols"]), 315)
        self.assertEqual(wrong["memoryMismatchCount"], 1392)
        self.assertTrue(wrong["logicalRecordReturnGuardsPassed"])

    def test_android_contains_every_qualified_source_symbol_and_16k_load_alignment(self):
        android = self.report["android"]
        self.assertEqual(android["library"]["definedFunctionCount"], 315)
        for name in ("library", "executable"):
            self.assertEqual(android[name]["machine"], "EM_AARCH64")
            self.assertTrue(all(x >= 16384 for x in android[name]["loadAlignments"]))
        self.assertEqual(android["executable"]["interpreters"], ["/system/bin/linker64"])
        self.assertFalse(android["actuallyExecuted"])

    def test_missing_functions_fail_input_completeness(self):
        spec = json.loads((ROOT / "platform/memory-wave001/inputs.json").read_text())
        spec["functions"].pop()
        path = ROOT / "work/platform-memory-wave001/unittest/incomplete-inputs.json"
        path.write_text(json.dumps(spec), encoding="utf-8")
        with self.assertRaisesRegex(RuntimeError, "Missing/duplicate"):
            BUILD.load_inputs(path)

    def test_modified_source_or_oracle_input_is_rejected(self):
        spec = json.loads((ROOT / "platform/memory-wave001/inputs.json").read_text())
        spec["inputs"][0]["sha256"] = "0" * 64
        path = ROOT / "work/platform-memory-wave001/unittest/changed-inputs.json"
        path.write_text(json.dumps(spec), encoding="utf-8")
        with self.assertRaisesRegex(RuntimeError, "Pinned source/tool input changed"):
            BUILD.load_inputs(path)

    def test_component_proof_does_not_admit_indirect_candidates_or_claim_game_build(self):
        self.assertEqual(len(self.report["excludedDiagnosticFunctions"]), 3)
        self.assertFalse(self.report["fullGameBuild"])
        self.assertEqual(self.report["acceptedSourceCredit"], 0)


if __name__ == "__main__":
    unittest.main()
