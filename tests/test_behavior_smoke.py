import importlib.util
import json
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location("behavior_smoke", ROOT / "toolscripts/behavior_smoke.py")
SMOKE = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(SMOKE)


class BehaviorSmokeTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report = SMOKE.run_smoke(output=ROOT / "work/validation-smoke/unittest")

    def test_compiled_source_matches_model_on_complete_corpus(self):
        self.assertEqual(self.report["correctActualReturns"], self.report["caseCount"])
        self.assertGreaterEqual(self.report["caseCount"], 200)
        self.assertGreater(len(self.report["correctInstructionAddresses"]), 1)

    def test_wrong_compiled_source_really_returns_and_is_rejected(self):
        self.assertEqual(self.report["wrongActualReturns"], self.report["caseCount"])
        self.assertEqual(self.report["wrongSemanticRejections"], self.report["caseCount"])

    def test_nonreturning_source_cannot_earn_return_credit(self):
        self.assertIn("No actual return", self.report["guardRejections"]["nonreturn"])

    def test_unexpected_memory_effect_is_rejected(self):
        self.assertIn("Unexpected memory write", self.report["guardRejections"]["write"])

    def test_synthetic_probes_grant_no_game_credit(self):
        self.assertEqual(self.report["acceptedSourceBytes"], 0)
        self.assertEqual(self.report["recoveredGameFunctions"], 0)
        self.assertFalse(self.report["nativeGameExecution"])


class GameLeafBehaviorTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report = SMOKE.run_game_leaf(output=ROOT / "work/validation-smoke/game-leaf-unittest")

    def test_original_and_candidate_actually_return_for_entire_corpus(self):
        self.assertEqual(self.report["originalActualReturns"], self.report["caseCount"])
        self.assertEqual(self.report["candidateActualReturns"], self.report["caseCount"])
        self.assertEqual(len(self.report["originalInstructionAddresses"]), 5)

    def test_genuinely_compiled_wrong_boundary_is_detected(self):
        self.assertEqual(self.report["wrongCandidateActualReturns"], self.report["caseCount"])
        self.assertTrue(self.report["wrongSemanticRejections"])
        self.assertEqual({case["x"] for case in self.report["wrongSemanticRejections"]}, {11})

    def test_bounded_candidate_is_not_accepted_source(self):
        self.assertEqual(self.report["acceptedSourceBytes"], 0)
        self.assertEqual(self.report["acceptedRecoveredFunctions"], 0)

    def test_update_namespace_matches_measured_ncch_identity(self):
        inventory = json.loads((ROOT / "evidence/inventory/update-content0.json").read_text())
        self.assertEqual(self.report["identity"]["programId"], inventory["programId"])
        self.assertEqual(self.report["identity"]["moduleSha256"], inventory["codeSha256"])


if __name__ == "__main__":
    unittest.main()
