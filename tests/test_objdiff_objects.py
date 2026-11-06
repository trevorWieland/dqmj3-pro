import io
import json
import sys
import tempfile
import unittest
from pathlib import Path

from elftools.elf.elffile import ELFFile

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "toolscripts"))
import objdiff_objects as objects


class IntervalTests(unittest.TestCase):
    def test_complement_retains_every_unaccepted_byte(self):
        entries = [{"address": 0x100004, "instructionBytes": 4}, {"address": 0x100010, "instructionBytes": 8}]
        self.assertEqual(objects.complement(entries, 0x100000, 32), [(0x100000, 0x100004), (0x100008, 0x100010), (0x100018, 0x100020)])

    def test_overlapping_source_cannot_earn_double_credit(self):
        entries = [{"address": 0x100000, "instructionBytes": 8}, {"address": 0x100004, "instructionBytes": 8}]
        with self.assertRaisesRegex(ValueError, "overlap"):
            objects.complement(entries, 0x100000, 32)

    def test_discontiguous_census_body_does_not_invent_a_stitched_function(self):
        census = {"functionCount": 1, "functions": [{"address": 0x100000, "mode": "ARM", "ranges": [
            {"start": 0x100000, "endExclusive": 0x100008}, {"start": 0x100020, "endExclusive": 0x100028}]}]}
        rows, skipped = objects.census_symbols(census, [(0x100000, 0x100040)], [])
        self.assertEqual(rows[0]["size"], 8)
        self.assertEqual(rows[0]["symbol"], "fn_00100000")
        self.assertFalse(skipped)

    def test_census_entry_inside_admitted_source_is_not_duplicated(self):
        census = {"functionCount": 1, "functions": [{"address": 0x100004, "mode": "ARM", "ranges": [
            {"start": 0x100004, "endExclusive": 0x100008}]}]}
        rows, skipped = objects.census_symbols(census, [(0x100008, 0x100020)], [{"address": 0x100000}])
        self.assertFalse(rows)
        self.assertEqual(len(skipped), 1)


class GenuineObjectTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        if not (ROOT / "tools/clang-21/clang.exe").is_file():
            raise unittest.SkipTest("Pinned project Clang is unavailable; genuine-object checks were not run")

    def setUp(self):
        (ROOT / "work/objdiff-object-tests").mkdir(parents=True, exist_ok=True)
        self.temporary = tempfile.TemporaryDirectory(dir=ROOT / "work/objdiff-object-tests")
        self.addCleanup(self.temporary.cleanup)
        self.output = Path(self.temporary.name)
        source = self.output / "fixture.c"
        source.write_text("unsigned fn_00100000(unsigned x) { return x + 1; }\nunsigned fn_00100010(unsigned x) { return x + 2; }\n")
        self.raw = self.output / "raw.o"
        objects.run([ROOT / "tools/clang-21/clang.exe", "--target=arm-none-eabi", "-mcpu=mpcore", "-marm", "-O2",
                     "-ffunction-sections", "-c", source, "-o", self.raw], self.output / "compile.log")
        summary = objects.elf_summary(self.raw)
        self.admitted = next(row for row in summary["functions"] if row["symbol"] == "fn_00100000")
        self.rows = [{"symbol": self.admitted["symbol"], "instructionBytes": self.admitted["size"],
                      "originalSpanSha256": self.admitted["sha256"]}]
        elf = ELFFile(io.BytesIO(self.raw.read_bytes()))
        self.original = elf.get_section_by_name(self.admitted["section"]).data()
        self.image = self.output / "synthetic-original.bin"
        self.image.write_bytes(self.original + b"synthetic-data")

    def test_linker_selects_only_genuine_admitted_source(self):
        base, summary, command = objects.select_compiled(ROOT, self.raw, self.rows, self.output, "selected")
        self.assertEqual([row["symbol"] for row in summary["functions"]], ["fn_00100000"])
        self.assertEqual(summary["codeBytes"], self.admitted["size"])
        self.assertEqual(summary["functions"][0]["sha256"], self.admitted["sha256"])
        self.assertIn("-r", command["argv"])
        self.assertTrue(base.is_file())

    def test_changed_acceptance_extent_fails_instead_of_padding_source(self):
        self.rows[0]["instructionBytes"] += 4
        with self.assertRaisesRegex(ValueError, "unaccepted executable bytes"):
            objects.select_compiled(ROOT, self.raw, self.rows, self.output, "bad-size")

    def test_reference_preserves_original_code_data_and_bss(self):
        size = len(self.original)
        symbols = {0: [{"symbol": "fn_00100000", "address": 0x100000, "size": size, "mode": "ARM"}]}
        data = [(".rodata.original", 0x200000, len(b"synthetic-data"), size, "data"),
                (".bss.original", 0x300000, 48, None, "bss")]
        target, summary, command = objects.assemble_reference(ROOT, self.image, [(0x100000, size, 0)], symbols, self.output, "reference", data)
        self.assertEqual(summary["codeBytes"], size)
        self.assertEqual(summary["dataBytes"], len(b"synthetic-data"))
        self.assertEqual(summary["bssBytes"], 48)
        self.assertEqual(summary["functions"][0]["sha256"], self.admitted["sha256"])

    def test_out_of_bounds_reference_symbol_fails(self):
        symbols = {0: [{"symbol": "fn_00100000", "address": 0x100000, "size": len(self.original) + 4, "mode": "ARM"}]}
        with self.assertRaisesRegex(ValueError, "exceeds owned original span"):
            objects.assemble_reference(ROOT, self.image, [(0x100000, len(self.original), 0)], symbols, self.output, "bad-reference")

    def test_stock_report_credits_exact_admitted_source(self):
        cli = ROOT / "tools/objdiff-3.8.3/objdiff-cli.exe"
        if not cli.is_file():
            self.skipTest("Pinned objdiff-cli unavailable")
        size = len(self.original)
        symbols = {0: [{"symbol": "fn_00100000", "address": 0x100000, "size": size, "mode": "ARM"}]}
        target, target_summary, command = objects.assemble_reference(ROOT, self.image, [(0x100000, size, 0)], symbols, self.output, "fixture")
        base, base_summary, command = objects.select_compiled(ROOT, self.raw, self.rows, self.output, "fixture")
        objects.save(self.output / "objdiff.json", {"units": [{"name": "fixture", "target_path": str(target), "base_path": str(base), "metadata": {"complete": False}}]})
        report = self.output / "report.json"
        objects.run([cli, "report", "generate", "-p", self.output, "-o", report], self.output / "report.log")
        data = json.loads(report.read_text())
        self.assertEqual(int(data["measures"]["matched_code"]), size)
        self.assertEqual(data["measures"]["matched_functions"], 1)
        self.assertEqual([row["name"] for row in data["units"][0]["functions"]], ["fn_00100000"])


if __name__ == "__main__":
    unittest.main()
