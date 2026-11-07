import ctypes
import sys
import unittest
from pathlib import Path


sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
from native_material_wave011_build import WORK, ENTRY
from native_material_wave011_helpers_build import arm, windows, android
from native_material_wave011_helpers_arm64 import link as arm64_link, execute as arm64_execute
from native_material_wave011_helpers import state_differences, controls
from native_material_wave011_helpers_native import execute as native
from native_material_wave011_helpers_observer import observe, header_range, function_ranges
from native_material_wave011_fixtures import cases
from native_material_wave011_oracle import image, closure, execute


class SourceOnlyConstructorTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.raw, cls.closed, cls.fixtures = image(), closure(), cases()
        cls.blocks, cls.receipt = arm(WORK / 'helpers/tests/arm')
        cls.library = ctypes.CDLL(str(windows(WORK / 'helpers/tests/windows',
            extra_exports=['fn_00166824', 'fn_0019501c'])))
        cls.arm64 = arm64_link(android(WORK / 'helpers/tests/android'), WORK / 'helpers/tests/arm64-model')

    def test_source_only_and_native_windows_returning_comparisons(self):
        for index, case in enumerate(self.fixtures):
            with self.subTest(case=case['name']):
                original = execute(self.raw, self.closed, case, 1500 + index)
                source = execute(b'\0' * 4096, {}, case, 1500 + index, self.blocks, ENTRY)
                self.assertEqual(state_differences(original, source), [])
                self.assertEqual(source['moduleReads'], [])
                self.assertTrue(native(self.library, case, original, 1500 + index)['normalizedCompleteStateMatches'])

    def test_transient_defaults_have_no_unoverwritten_consumers(self):
        ranges = function_ranges(self.receipt)
        for case in self.fixtures:
            if not header_range(case):
                continue
            with self.subTest(case=case['name']):
                result, observed = observe(b'\0' * 4096, {}, case, 251, self.blocks, ranges)
                self.assertTrue(result['returned'])
                self.assertEqual(observed['readPolicyViolations'], [])
                self.assertEqual(observed['constructorOverwroteBytes'], 28)

    def test_compiled_controls_return_and_are_rejected(self):
        results = controls(self.raw, self.closed, self.fixtures)
        self.assertEqual(len(results), 3)
        self.assertTrue(all(row['armReturnedNormally'] for row in results))
        self.assertTrue(results[-1]['finalStateStillMatches'])
        self.assertTrue(results[-1]['observerRejectedIntermediateRead'])

    def test_two_word_copy_prefetches_both_overlapping_words(self):
        function = self.library.fn_00166824
        function.argtypes = [ctypes.c_void_p, ctypes.c_void_p]
        function.restype = None
        for source, destination in [(0, 0), (0, 1), (1, 0), (0, 2), (2, 0)]:
            data = (ctypes.c_uint * 8)(*range(8))
            expected = list(data)
            expected[destination:destination + 2] = list(data)[source:source + 2]
            function(ctypes.addressof(data) + destination * 4, ctypes.addressof(data) + source * 4)
            self.assertEqual(list(data), expected)

    def test_null_texture_resource_preserves_entire_descriptor(self):
        function = self.library.fn_0019501c
        function.argtypes = [ctypes.c_void_p, ctypes.c_void_p]
        function.restype = None
        for fill in [0, 0xffffffff, 0x12345678]:
            data = (ctypes.c_uint * 8)(*[fill] * 8)
            before = bytes(data)
            function(ctypes.addressof(data), None)
            self.assertEqual(bytes(data), before)

    def test_actual_android_objects_execute_with_four_byte_aligned_addresses(self):
        blocks, executable, entry, receipt = self.arm64
        self.assertTrue(receipt['sameActualAndroidObjectFiles'])
        for case in self.fixtures[::17] + self.fixtures[-4:]:
            original = execute(self.raw, self.closed, case, 761)
            for skew in [0, 4]:
                with self.subTest(case=case['name'], skew=skew):
                    result = arm64_execute(blocks, executable, entry, case, original, 761, skew)
                    self.assertTrue(result['normalizedStateMatchesOriginal'])
                    self.assertFalse(result['androidDeviceExecuted'])

    def test_insufficient_alignment_is_outside_the_model_contract(self):
        blocks, executable, entry, receipt = self.arm64
        with self.assertRaisesRegex(ValueError, 'four-byte'):
            arm64_execute(blocks, executable, entry, self.fixtures[0], {}, 1, 1)


if __name__ == '__main__':
    unittest.main()
