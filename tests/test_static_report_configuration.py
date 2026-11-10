import copy
import hashlib
import json
import sys
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "toolscripts"))
import configure_objdiff as configure
import finalize_objdiff_report as finalize


class ReviewedStaticReportingTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.production = json.loads((ROOT / "config/objdiff-units.json").read_text())
        if cls.production.get("schemaVersion") != 2:
            raise unittest.SkipTest("Reviewed static report configuration is unavailable")
        mapping_path = ROOT / cls.production["objectMap"]
        if not mapping_path.is_file() or not (ROOT / "generated/update-content0/code.bin").is_file():
            raise unittest.SkipTest("Private original/object map unavailable; production static-gate checks were not run")
        cls.mapping = json.loads(mapping_path.read_text())
        cls.verified = finalize.verify_objects(ROOT, cls.mapping)
        cls.scope_original = configure.checked_evidence(ROOT, cls.production["reviewedScope"])
        cls.accounting_original = configure.checked_evidence(ROOT, cls.production["staticTextAccounting"])
        cls.run_original = configure.checked_evidence(ROOT, cls.accounting_original["seededAnalysisRun"])

    def setUp(self):
        (ROOT / "work/static-report-tests").mkdir(parents=True, exist_ok=True)
        self.temporary = tempfile.TemporaryDirectory(dir=ROOT / "work/static-report-tests")
        self.addCleanup(self.temporary.cleanup)
        self.folder = Path(self.temporary.name)
        self.manifest = copy.deepcopy(self.production)
        self.scope = copy.deepcopy(self.scope_original)
        self.accounting = copy.deepcopy(self.accounting_original)

    def reference(self, name, value):
        path = self.folder / name
        content = (json.dumps(value, indent=2) + "\n").encode()
        path.write_bytes(content)
        return {"path": path.relative_to(ROOT).as_posix(), "sha256": hashlib.sha256(content).hexdigest()}

    def validate(self):
        self.manifest["reviewedScope"] = self.reference("scope.json", self.scope)
        self.manifest["staticTextAccounting"] = self.reference("accounting.json", self.accounting)
        with patch.object(finalize, "verify_objects", return_value=self.verified):
            return configure.static_project(ROOT, self.manifest, "update-content0")

    def reject(self):
        with self.assertRaises((ValueError, KeyError, TypeError)):
            self.validate()

    def selected(self):
        return next(row for row in self.scope["versions"] if row["version"] == "update-content0")

    def test_actual_reviewed_static_contract_accepts_exact_verified_objects(self):
        units = self.validate()
        from ci_native_build import accepted_functions
        expected_sources = {row["sourcePath"] for row in accepted_functions(ROOT)} | {"src/native"}
        routes = json.loads((ROOT / "config/objdiff-source-units.json").read_text())["units"] if (ROOT / "config/objdiff-source-units.json").exists() else []
        expected_sources.update(row["sourcePath"] for row in routes)
        self.assertEqual({row["metadata"]["source_path"] for row in units}, expected_sources)
        self.assertEqual(len(units), len(expected_sources))
        self.assertTrue(all(row["metadata"]["complete"] is False for row in units))
        self.assertEqual({row["name"] for row in units}, {row["name"] for row in self.mapping["units"]})
        self.assertEqual(sum(row["code"] for row in self.verified.values()), self.accounting["totalInitializedTextBytes"])

    def test_scope_or_version_cannot_be_marked_incomplete(self):
        self.scope["staticMainImageScopeComplete"] = False
        self.reject()
        self.scope = copy.deepcopy(self.scope_original)
        self.selected()["staticMainImageScopeComplete"] = False
        self.reject()

    def test_static_byte_accounting_must_be_complete(self):
        self.accounting["staticExecutableByteAccountingComplete"] = False
        self.reject()

    def test_recursive_container_audit_must_be_reproduced(self):
        self.selected()["freshRecursiveContainerAuditReproduced"] = False
        self.reject()

    def test_changed_inventory_or_accounting_producer_is_rejected(self):
        for proof in (self.scope, self.accounting):
            with self.subTest(producer=proof["producer"]["path"]):
                original = proof["producer"]["sha256"]
                proof["producer"]["sha256"] = "0" * 64
                self.reject()
                proof["producer"]["sha256"] = original

    def test_unrelated_public_file_cannot_impersonate_inventory_producer(self):
        for proof in (self.scope, self.accounting):
            with self.subTest(producer=proof["producer"]["path"]):
                original = copy.deepcopy(proof["producer"])
                proof["producer"] = {"path": "README.md", "sha256": hashlib.sha256((ROOT / "README.md").read_bytes()).hexdigest()}
                self.reject()
                proof["producer"] = original

    def test_changed_evidence_or_acceptance_reference_is_rejected(self):
        for reference in (self.scope["sources"][0], self.accounting["acceptedCohorts"][0]):
            with self.subTest(path=reference["path"]):
                original = reference["sha256"]
                reference["sha256"] = "0" * 64
                self.reject()
                reference["sha256"] = original

    def test_fabricated_text_or_source_credit_is_rejected(self):
        for key in ("totalInitializedTextBytes", "matchedSourceBytes", "knownSourceFunctionCount"):
            with self.subTest(key=key):
                self.accounting[key] += 1
                self.reject()
                self.accounting[key] -= 1

    def test_partition_cannot_drop_duplicate_overlap_or_shift_original_bytes(self):
        for action in ("drop", "duplicate", "overlap", "shift"):
            with self.subTest(action=action):
                self.accounting = copy.deepcopy(self.accounting_original)
                rows = self.accounting["staticBytePartition"]
                if action == "drop":
                    rows.pop()
                elif action == "duplicate":
                    rows.append(copy.deepcopy(rows[0]))
                elif action == "overlap":
                    rows[1]["start"] = rows[0]["start"]
                else:
                    rows[0]["start"] += 4
                self.reject()

    def test_original_image_identity_must_agree_with_scope_review(self):
        self.accounting["layout"]["moduleSha256"] = "0" * 64
        self.reject()

    def test_exheader_is_checked_against_actual_current_input(self):
        self.selected()["mainImage"]["exheaderSha256"] = "0" * 64
        self.accounting["layout"]["exheaderSha256"] = "0" * 64
        self.reject()

    def test_census_reference_cannot_change_after_object_construction(self):
        substitute = "evidence/inventory/update-content0.json"
        self.accounting["seededCensus"] = {"path": substitute,
                                            "sha256": hashlib.sha256((ROOT / substitute).read_bytes()).hexdigest()}
        self.reject()

    def test_failed_or_interrupted_seeded_run_cannot_qualify_report(self):
        for status in ("running", "failed", "analysis-timeout", "unqualified"):
            with self.subTest(status=status):
                run = copy.deepcopy(self.run_original)
                run["status"] = status
                self.accounting["seededAnalysisRun"] = self.reference("run.json", run)
                self.reject()

    def test_seeded_run_identity_success_and_complete_seed_survival_are_required(self):
        changes = {"label": "base", "explicitPreparationSucceeded": False, "automaticAnalysisSucceeded": False,
                   "postAnalysisSucceeded": False, "allSeedInstructionsAndFunctionsCreated": False,
                   "processTimedOut": True, "analysisTimedOut": True, "processExitCode": 1,
                   "candidateFunctions": self.run_original["candidateFunctions"] + 1,
                   "postAnalysisSeedEntriesFound": self.run_original["seedCount"] - 1,
                   "postAnalysisSeedModesAgree": self.run_original["seedCount"] - 1}
        for key, value in changes.items():
            with self.subTest(key=key):
                run = copy.deepcopy(self.run_original)
                run[key] = value
                self.accounting["seededAnalysisRun"] = self.reference("run.json", run)
                self.reject()

    def test_seeded_run_cannot_authenticate_another_census_or_preparation(self):
        for key in ("qualifiedCensus", "qualifiedPreparation", "validationProducer"):
            with self.subTest(key=key):
                run = copy.deepcopy(self.run_original)
                run[key]["sha256"] = "0" * 64
                self.accounting["seededAnalysisRun"] = self.reference("run.json", run)
                self.reject()

    def test_reporting_basis_and_version_are_explicit(self):
        self.manifest["reportingBasis"] = "accepted-only"
        self.reject()
        self.manifest = copy.deepcopy(self.production)
        with self.assertRaises(ValueError):
            configure.static_project(ROOT, self.manifest, "base-content0")


if __name__ == "__main__":
    unittest.main()
