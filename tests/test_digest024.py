import hashlib
from pathlib import Path
import struct
import sys
import unittest


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "toolscripts"))
from digest024_build import WORK, arm, windows, android
from digest024_cases import IV, cases, expected, padded
from digest024_oracle import Arm, Windows, Android


class DigestCompressionTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        elf, unused = arm(WORK / "tests/arm")
        dll, unused = windows(WORK / "tests/windows")
        a64, unused = android(WORK / "tests/android")
        cls.backends = [Arm(), Arm(elf), Windows(dll), Android(a64)]
        cls.corpus = list(cases())

    def check_case(self, row):
        target = expected(row["memory"], row["state"], row["block"])
        for number, backend in enumerate(self.backends):
            args = [row["memory"], row["state"], row["block"]] + ([] if number == 2 else [row["seed"]])
            self.assertEqual(backend.execute(*args), target)

    def check_message(self, message):
        states = [struct.pack("<4I", *IV)] * 4
        data = padded(message)
        for block in range(0, len(data), 64):
            for number, backend in enumerate(self.backends):
                memory = bytearray(4096)
                memory[64:80] = states[number]
                memory[128:192] = data[block:block + 64]
                args = [memory, 64, 128] + ([] if number == 2 else [block % 4])
                states[number] = backend.execute(*args)[64:80]
        self.assertTrue(all(state == hashlib.md5(message).digest() for state in states))

    def test_empty_digest_against_independent_hashlib(self):
        self.check_message(b"")

    def test_abc_digest_against_independent_hashlib(self):
        self.check_message(b"abc")

    def test_every_input_byte_alignment(self):
        for index in range(4):
            self.check_case(self.corpus[index])

    def test_fifty_five_and_fifty_six_byte_padding_boundary(self):
        for length in [55, 56]:
            self.check_message(bytes(range(length)))

    def test_sixty_three_and_sixty_four_byte_block_boundary(self):
        for length in [63, 64, 65]:
            self.check_message(bytes(range(length)))

    def test_high_bytes_and_multiple_blocks(self):
        self.check_message(bytes(range(256)) * 4)

    def test_arbitrary_initial_states(self):
        for index in [128, 129, 130, 131, 511]:
            self.check_case(self.corpus[index])

    def test_input_starts_sixty_three_bytes_before_state(self):
        self.check_case(self.corpus[512])

    def test_input_exactly_aliases_state(self):
        self.check_case(self.corpus[512 + 63 * 4])

    def test_input_starts_in_last_state_byte(self):
        self.check_case(self.corpus[-1])

    def test_nondefault_floating_controls_and_callee_saved_registers(self):
        for index in [133, 134, 135]:
            self.check_case(self.corpus[index])

    def test_both_copy_paths_cover_complete_original_instruction_ranges(self):
        for index in range(4):
            self.check_case(self.corpus[index])
        self.assertEqual(len(self.backends[0].coverage), 602)
