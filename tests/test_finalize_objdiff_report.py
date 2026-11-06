import copy
import hashlib
import json
import sys
import tempfile
import unittest
from unittest.mock import patch
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "toolscripts"))
import finalize_objdiff_report as finalize


def fixture():
    def counts(code, matched, functions, matched_functions, data=0, units=1):
        return {"total_code": str(code), "matched_code": str(matched), "total_data": str(data),
                "matched_data": "0", "total_functions": functions, "matched_functions": matched_functions,
                "total_units": units, "complete_units": 0, "complete_code": "0", "complete_data": "0",
                "fuzzy_match_percent": matched * 100 / code, "matched_code_percent": matched * 100 / code,
                "matched_data_percent": 0 if data else 100.0, "matched_functions_percent": matched_functions * 100 / functions,
                "complete_code_percent": 0.0, "complete_data_percent": 0.0 if data else 100.0}

    def item(name, size, percent):
        return {"name": name, "size": str(size), "fuzzy_match_percent": percent, "metadata": {}}

    mapped = {"src/native/fixture": {"code": 64, "data": 0, "functions": {"fn_00100000": {"size": 12}},
                                      "matched_code": 12, "matched_functions": 1, "source_path": "src/native/fixture.c",
                                      "matched_symbols": {"fn_00100000"}},
              "src/native": {"code": 128, "data": 32,
                             "functions": {"fn_00200000": {"size": 12}, "fn_00200010": {"size": 8}},
                             "matched_code": 0, "matched_functions": 0, "source_path": "src/native", "matched_symbols": set(),
                             "section_names": {".text", ".rodata.original", ".bss.original"}}}
    report = {"version": 2, "measures": counts(32, 12, 3, 1, 32, 2), "units": [
        {"name": "src/native/fixture", "measures": counts(12, 12, 1, 1),
         "metadata": {"source_path": "src/native/fixture.c", "complete": False},
         "sections": [item(".text", 64, 100.0)], "functions": [item("fn_00100000", 12, 100.0)]},
        {"name": "src/native", "measures": counts(20, 0, 2, 0, 32),
         "metadata": {"source_path": "src/native", "complete": False},
         "sections": [item(".text", 128, 0.0), item(".rodata.original", 20, 0.0), item(".bss.original", 12, 0.0)],
         "functions": [item("fn_00200000", 12, 0.0), item("fn_00200010", 8, 0.0)]}]}
    return report, mapped


class ReportNormalizationTests(unittest.TestCase):
    def setUp(self):
        self.report, self.mapped = fixture()

    def reject(self, report=None, mapped=None):
        with self.assertRaises((ValueError, TypeError, KeyError)):
            finalize.normalize(self.report if report is None else report, self.mapped if mapped is None else mapped)

    def test_unsymbolized_original_bytes_stay_unmatched_without_fake_functions(self):
        original = copy.deepcopy(self.report)
        result = finalize.normalize(self.report, self.mapped)
        self.assertEqual(int(result["measures"]["total_code"]), 192)
        self.assertEqual(int(result["measures"]["matched_code"]), 12)
        self.assertEqual(result["measures"]["matched_code_percent"], 6.25)
        self.assertEqual(result["measures"]["total_functions"], 3)
        self.assertEqual(result["measures"]["matched_functions"], 1)
        self.assertEqual(int(result["measures"]["total_data"]), 32)
        self.assertEqual(int(result["measures"]["matched_data"]), 0)
        self.assertEqual(result["units"][0]["functions"][0]["metadata"]["virtual_address"], str(0x100000))
        self.assertEqual(self.report, original)

    def test_all_unknown_original_bytes_produce_zero_progress(self):
        report = {"version": 2, "measures": {"total_units": 1}, "units": [{"name": "src/native", "measures": {"total_units": 1},
                  "metadata": {"source_path": "src/native", "complete": False}, "functions": [],
                  "sections": [{"name": ".text", "size": "128", "metadata": {}}]}]}
        mapped = {"src/native": {"code": 128, "data": 0, "functions": {}, "matched_code": 0,
                                 "matched_functions": 0, "source_path": "src/native", "matched_symbols": set()}}
        result = finalize.normalize(report, mapped)
        self.assertEqual(int(result["measures"]["total_code"]), 128)
        self.assertEqual(result["measures"]["matched_code_percent"], 0)
        self.assertEqual(result["measures"]["total_functions"], 0)

    def test_omitted_or_extra_unit_is_rejected(self):
        self.report["units"].pop()
        self.reject()
        self.report, self.mapped = fixture()
        self.report["units"].append(copy.deepcopy(self.report["units"][0]))
        self.reject()

    def test_omitted_or_fabricated_function_is_rejected(self):
        self.report["units"][1]["functions"].pop()
        self.reject()
        self.report, self.mapped = fixture()
        self.report["units"][1]["functions"][0]["name"] = "fn_00ffffff"
        self.reject()

    def test_fabricated_matching_credit_is_rejected(self):
        self.report["units"][1]["functions"][0]["fuzzy_match_percent"] = 100.0
        self.reject()

    def test_same_size_match_identity_substitution_is_rejected(self):
        report = copy.deepcopy(self.report)
        report["units"][0]["functions"].append({"name": "fn_00100010", "size": "12", "fuzzy_match_percent": 100.0, "metadata": {}})
        report["units"][0]["functions"][0]["fuzzy_match_percent"] = 0.0
        report["units"][0]["measures"]["total_code"] = "24"
        report["units"][0]["measures"]["total_functions"] = 2
        report["measures"]["total_code"] = "44"
        report["measures"]["total_functions"] = 4
        mapped = copy.deepcopy(self.mapped)
        mapped["src/native/fixture"]["functions"]["fn_00100010"] = {"size": 12}
        self.reject(report, mapped)

    def test_corrupted_top_counter_is_rejected(self):
        self.report["measures"]["matched_code"] = "999"
        self.reject()

    def test_corrupted_raw_unit_count_is_rejected(self):
        self.report["units"][0]["measures"]["total_units"] = 2
        self.reject()

    def test_source_and_completion_metadata_tamper_is_rejected(self):
        self.report["units"][0]["metadata"]["source_path"] = "README.md"
        self.reject()
        self.report, self.mapped = fixture()
        self.report["units"][0]["metadata"]["complete"] = True
        self.reject()

    def test_dropped_or_enlarged_reference_section_is_rejected(self):
        self.report["units"][1]["sections"].pop()
        self.reject()
        self.report, self.mapped = fixture()
        self.report["units"][1]["sections"][0]["size"] = "999"
        self.reject()

    def test_integer_counter_encodings_are_strict(self):
        for value in (True, -1, 1.5, "01", "1e3", "NaN", str(2 ** 53)):
            with self.subTest(value=value):
                report = copy.deepcopy(self.report)
                report["units"][0]["measures"]["total_code"] = value
                self.reject(report)

    def test_nonfinite_or_boolean_percentages_are_rejected(self):
        for value in (float("nan"), float("inf"), True):
            for location in ("function", "section"):
                with self.subTest(value=value, location=location):
                    report = copy.deepcopy(self.report)
                    if location == "function":
                        report["units"][0]["functions"][0]["fuzzy_match_percent"] = value
                    elif location == "section":
                        report["units"][0]["sections"][0]["fuzzy_match_percent"] = value
                    self.reject(report)

    def test_unused_raw_top_percentages_are_recomputed_from_verified_counts(self):
        self.report["measures"]["fuzzy_match_percent"] = float("nan")
        self.report["measures"]["matched_code_percent"] = float("inf")
        result = finalize.normalize(self.report, self.mapped)
        self.assertEqual(result["measures"]["matched_code_percent"], 6.25)
        self.assertEqual(result["measures"]["fuzzy_match_percent"], 6.25)

    def test_empty_source_cannot_claim_partial_fuzzy_matching(self):
        self.report["units"][1]["functions"][0]["fuzzy_match_percent"] = 50.0
        self.reject()

    def test_unknown_payload_fields_are_not_forwarded_to_public_artifact(self):
        for location in ("report", "unit", "function", "section", "metadata", "measures", "function_metadata", "section_metadata"):
            with self.subTest(location=location):
                report = copy.deepcopy(self.report)
                owner = {"report": report, "unit": report["units"][0], "function": report["units"][0]["functions"][0],
                         "section": report["units"][0]["sections"][0], "metadata": report["units"][0]["metadata"],
                         "measures": report["measures"], "function_metadata": report["units"][0]["functions"][0]["metadata"],
                         "section_metadata": report["units"][0]["sections"][0]["metadata"]}[location]
                owner["original_payload"] = "SYNTHETIC_PRIVATE_PAYLOAD"
                result = finalize.normalize(report, self.mapped)
                self.assertNotIn("SYNTHETIC_PRIVATE_PAYLOAD", json.dumps(result, allow_nan=False))
                self.assertNotIn("original_payload", json.dumps(result, allow_nan=False))

    def test_explicit_partition_gaps_overlaps_and_duplicate_ownership_fail(self):
        for rows in ([{"address": 0x100000, "size": 4}, {"address": 0x100008, "size": 8}],
                     [{"address": 0x100000, "size": 12}, {"address": 0x100008, "size": 8}],
                     [{"address": 0x100000, "size": 16}, {"address": 0x100000, "size": 16}]):
            with self.subTest(rows=rows):
                with self.assertRaises(ValueError):
                    finalize.partition(rows, 0x100000, 16)


class ProductionObjectChecks(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        path = ROOT / "build/update-content0/objects/object-map.json"
        if not path.is_file() or not (ROOT / "generated/update-content0/code.bin").is_file():
            raise unittest.SkipTest("Private production object map/original unavailable; actual game object checks were not run")
        cls.mapping = json.loads(path.read_text())

    def test_actual_original_and_genuine_compiled_objects_verify(self):
        mapped = finalize.verify_objects(ROOT, self.mapping)
        self.assertEqual(sum(row["code"] for row in mapped.values()), 7051280)
        self.assertEqual(sum(row["data"] for row in mapped.values()), 1313276)
        import ci_native_build
        accepted = ci_native_build.accepted_functions(ROOT)
        self.assertEqual(sum(row["matched_code"] for row in mapped.values()),
                         sum(row["instructionBytes"] for row in accepted))
        self.assertEqual(sum(row["matched_functions"] for row in mapped.values()), len(accepted))

    def test_quoted_header_drift_rejects_saved_source_objects(self):
        import ci_native_build
        header = None
        for lane in ci_native_build.LANES:
            packet = json.loads((ROOT / "evidence/lanes" / lane / "packet.json").read_text())
            records = packet.get("sourceInputs", packet.get("sources", [])) + packet.get("headers", [])
            header = next((ci_native_build.native_path(ROOT, row["path"]) for row in records if row["path"].endswith(".h")), None)
            if header is not None:
                break
        self.assertIsNotNone(header, "Accepted packet fixtures must identify their real quoted headers")
        original_digest = finalize.digest
        observed = []

        def changed_header_digest(path):
            if Path(path).resolve() == header.resolve():
                observed.append(path)
                return "0" * 64
            return original_digest(path)

        with patch.object(finalize, "digest", side_effect=changed_header_digest):
            with self.assertRaisesRegex(ValueError, "Frozen source or quoted header changed"):
                finalize.verify_objects(ROOT, self.mapping)
        self.assertTrue(observed)

    def test_changed_work_copies_of_actual_target_and_base_are_rejected(self):
        from elftools.elf.elffile import ELFFile
        import io
        (ROOT / "work/normalize-object-tests").mkdir(parents=True, exist_ok=True)
        with tempfile.TemporaryDirectory(dir=ROOT / "work/normalize-object-tests") as temporary:
            folder = Path(temporary)
            for side in ("target", "base"):
                with self.subTest(side=side):
                    mapping = copy.deepcopy(self.mapping)
                    unit = mapping["units"][0]
                    original = ROOT / unit[side + "_path"]
                    content = bytearray(original.read_bytes())
                    elf = ELFFile(io.BytesIO(content))
                    code = next(section for section in elf.iter_sections() if section["sh_flags"] & 4 and section["sh_size"])
                    content[code["sh_offset"]] ^= 1
                    changed = folder / (side + ".o")
                    changed.write_bytes(content)
                    unit[side + "_path"] = changed.relative_to(ROOT).as_posix()
                    unit[side + "_sha256"] = hashlib.sha256(content).hexdigest()
                    with self.assertRaises(ValueError):
                        finalize.verify_objects(ROOT, mapping)

    def test_actual_original_ownership_cannot_be_dropped_overlapped_or_reclassified(self):
        for action in ("drop", "overlap", "kind", "source"):
            with self.subTest(action=action):
                mapping = copy.deepcopy(self.mapping)
                unit = mapping["units"][0]
                if action == "drop":
                    unit["original_ranges"].pop()
                elif action == "overlap":
                    unit["original_ranges"][1]["address"] = unit["original_ranges"][0]["address"]
                elif action == "kind":
                    unit["original_ranges"][0]["kind"] = "data"
                else:
                    unit["source_path"] = "README.md"
                with self.assertRaises(ValueError):
                    finalize.verify_objects(ROOT, mapping)


if __name__ == "__main__":
    unittest.main()
