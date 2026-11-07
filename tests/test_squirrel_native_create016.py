import copy
import sys
import unittest
from pathlib import Path
from unittest import mock

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import squirrel_native_create016 as lane
import squirrel_native_create016_build as builder
import squirrel_native_create016_model as model
import squirrel_native_create016_oracle as oracle
import squirrel_native_create016_android as android


class NativeCreation(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.output = ROOT / 'work/squirrel-native-create016/unit-tests'
        cls.component = builder.arm(cls.output / 'arm')
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()

    def test_real_owners_complete_arm_heap_and_independent_model(self):
        for captures in (0, 1, 2, 4, 5, 8, 9):
            for flags in (0, 7):
                for cleanup in (0, 1):
                    case = {'captures': captures, 'flags': flags, 'cleanup': cleanup}
                    expected, original_trace, original_heap = oracle.execute(self.image, self.component, case, False)
                    actual, source_trace, source_heap = oracle.execute(self.image, self.component, case, True)
                    self.assertEqual(actual, expected)
                    self.assertEqual(original_heap, source_heap)
                    self.assertEqual(actual['words'], model.expected(case))
                    self.assertFalse(source_trace['sourceOriginalModuleMapped'])
                    self.assertTrue(original_trace['originalTablesPreserved'])

    def test_native_windows_real_pointer_width_and_all_cases(self):
        native = builder.native(self.output / 'native')
        self.assertEqual(native['observations'], [dict(case, words=model.expected(case)) for case in model.cases()])

    def test_android_actual_objects_above_four_gib_and_platform_abi(self):
        component = builder.android_model(self.output / 'android')
        for captures in (0, 1, 2, 4, 5, 8, 9):
            for cleanup in (0, 1):
                case = {'captures': captures, 'flags': 7, 'cleanup': cleanup}
                actual, trace, unused = android.execute(component, case)
                self.assertEqual(actual['words'], model.expected(case))
                self.assertTrue(trace['highPointersAbove32Bits'])
                self.assertTrue(trace['integerAndSimdAbiPreserved'])
                self.assertFalse(trace['physicalAndroidExecution'])

    def test_authored_constructor_does_not_need_original_image(self):
        case = {'captures': 5, 'flags': 7, 'cleanup': 1}
        actual, trace, unused = oracle.execute(b'', self.component, case, True)
        self.assertEqual(actual['words'], model.expected(case))
        self.assertFalse(trace['sourceOriginalModuleMapped'])

    def test_late_pop_returns_same_heap_but_changes_finalizer_observation(self):
        case = {'captures': 0, 'flags': 0, 'cleanup': 1}
        wrong = builder.arm(self.output / 'late-pop', 'late-pop-publication')
        expected, unused, expected_heap = oracle.execute(self.image, self.component, case, False)
        actual, unused, wrong_heap = oracle.execute(b'', wrong, case, True)
        self.assertTrue(actual['returned'])
        self.assertEqual(expected_heap, wrong_heap)
        self.assertNotEqual(expected['words'], actual['words'])

    def test_allocator_failures_are_original_only_and_source_rejected(self):
        evidence = lane.failure_evidence(self.image, self.component)
        self.assertEqual(evidence['nullAllocation']['faultPc'], 0x177054)
        self.assertTrue(evidence['nullReallocation']['returned'])
        self.assertTrue(evidence['nullReallocation']['invalidOuterVector'])
        self.assertTrue(evidence['sourceFailureModesRejectedBeforeEntry'])
        self.assertFalse(evidence['allocatorRecoveryClaimed'])

    def test_cached_input_control_is_rejected_after_reallocator_mutates_scalar_bits(self):
        case = {'captures': 2, 'flags': 4, 'cleanup': 0}
        wrong = builder.arm(self.output / 'cached', 'cached-value-before-reallocate')
        actual, unused, unused_heap = oracle.execute(b'', wrong, case, True)
        self.assertTrue(actual['returned'])
        self.assertNotEqual(actual['words'], model.expected(case))

    def test_frozen_native_type_header_drift_is_rejected_without_writing_it(self):
        original = lane.record
        header = ROOT / 'source/squirrel-wave013/native_closure_release.h'
        def changed(path):
            row = original(path)
            if path == header:
                row['sha256'] = '0' * 64
            return row
        with mock.patch.object(lane, 'record', side_effect=changed):
            with self.assertRaisesRegex(ValueError, 'frozen input changed'):
                lane.frozen_inputs()

    def test_noninteger_or_unbounded_cases_are_rejected(self):
        for name, value in (('captures', True), ('captures', -1), ('captures', 10), ('flags', 8), ('cleanup', float('nan'))):
            case = copy.deepcopy(model.cases()[0])
            case[name] = value
            with self.assertRaises(ValueError):
                lane.validate(case)


if __name__ == '__main__':
    unittest.main()
