import hashlib
from pathlib import Path
import struct
import sys
import unittest
from unittest.mock import patch


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

    def test_invalid_offsets_are_rejected_before_any_backend_access(self):
        memory = bytes(4096)
        for backend in self.backends:
            for state, block in [(-4, 128), (4084, 128), (64, -1), (64, 4033), (1, 128)]:
                before = backend.calls
                with self.subTest(backend=type(backend).__name__, state=state, block=block), self.assertRaises(ValueError):
                    backend.execute(memory, state, block)
                self.assertEqual(backend.calls, before)

    def test_native_checks_actual_state_pointer_alignment(self):
        native = self.backends[2]
        before = native.calls
        with patch("digest024_oracle.ctypes.addressof", return_value=0x100000001), self.assertRaises(ValueError):
            native.execute(bytes(4096), 64, 128)
        self.assertEqual(native.calls, before)

    def test_arm_guard_rejects_thumb_and_halfword_execution(self):
        from unicorn.arm_const import UC_ARM_REG_CPSR
        source = self.backends[1]
        cpsr = source.cpu.reg_read(UC_ARM_REG_CPSR)
        try:
            source.cpu.reg_write(UC_ARM_REG_CPSR, cpsr | 0x20)
            with self.assertRaises(ValueError):
                source.code(source.cpu, source.entry, 4, None)
        finally:
            source.cpu.reg_write(UC_ARM_REG_CPSR, cpsr)
        with self.assertRaises(ValueError):
            source.code(source.cpu, source.entry + 2, 2, None)

    def test_arm_literal_pool_words_are_not_instruction_boundaries(self):
        source = self.backends[1]
        words = {address for low, high in source.executable for address in range(low, high, 4)}
        data = words - source.instructions
        self.assertTrue(data)
        for address in data:
            with self.assertRaises(ValueError):
                source.code(source.cpu, address, 4, None)
