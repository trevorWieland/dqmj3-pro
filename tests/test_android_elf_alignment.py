import sys
from pathlib import Path
import unittest


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "toolscripts"))
from android_elf_alignment import validate_segments


def load(address, length, offset=0, alignment=16384):
    return {"type": "PT_LOAD", "address": address, "bytes": length, "offset": offset, "alignment": alignment, "flags": 6}


def relro(address, length):
    return {"type": "PT_GNU_RELRO", "address": address, "bytes": length, "offset": 0, "alignment": 1, "flags": 4}


class AndroidElfAlignmentTests(unittest.TestCase):
    def test_documented_separate_load_exemption_accepts_real_predecessor_layout(self):
        rows = [load(0x18b60, 0x4a0, 0x10b60), load(0x1ce60, 0x391c, 0x14e60), relro(0x18b60, 0x4a0)]
        self.assertTrue(validate_segments(rows))

    def test_writable_bytes_inside_protected_trailing_page_rejected(self):
        with self.assertRaises(ValueError):
            validate_segments([load(0x18000, 0x8000), relro(0x18000, 0x1000)])

    def test_aligned_relro_end_accepts_following_writable_bytes(self):
        self.assertTrue(validate_segments([load(0x18000, 0x8000), relro(0x18000, 0x4000)]))

    def test_missing_or_four_kib_load_alignment_rejected(self):
        for rows in [[], [load(0x18000, 0x8000, alignment=4096)]]:
            with self.assertRaises(ValueError):
                validate_segments(rows)

    def test_load_file_offset_congruence_and_power_of_two_required(self):
        for row in [load(0x18000, 0x8000, offset=4096), load(0x18000, 0x8000, alignment=24576)]:
            with self.assertRaises(ValueError):
                validate_segments([row])


if __name__ == "__main__":
    unittest.main()
