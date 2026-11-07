import copy
import sys
import unittest
from pathlib import Path
from unittest import mock

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import squirrel_reference_array012 as lane
import squirrel_reference_array012_build as builder
import squirrel_reference_array012_model as model
import squirrel_reference_array012_oracle as oracle
import squirrel_reference_array012_android as android


class OpaqueArrays(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.output = ROOT / 'work/squirrel-reference-prefix012/array-unit-tests'
        cls.component = builder.arm(cls.output / 'arm')
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()

    def test_complete_original_and_source_heap_with_actual_mixed_owners(self):
        for case in model.cases():
            if case['variant'] not in (0, 3) or case['requested'] not in (0, 1, 9):
                continue
            expected, original_trace, original_heap = oracle.execute(self.image, self.component, case, False)
            actual, source_trace, source_heap = oracle.execute(self.image, self.component, case, True)
            self.assertEqual(actual, expected)
            self.assertEqual(original_heap, source_heap)
            self.assertEqual(actual['words'], model.expected(case))
            self.assertFalse(source_trace['sourceOriginalModuleMapped'])
            self.assertTrue(original_trace['originalTablesPreserved'])

    def test_real_windows_all_cases_and_safe_null_object_allocation(self):
        native = builder.native(self.output / 'native')
        self.assertEqual(native['observations'], [dict(case, words=model.expected(case)) for case in model.cases()])
        self.assertTrue(all(row['words'][5] == 0 for row in native['observations'] if row['failed']))

    def test_android_high_pointer_named_objects_and_abi(self):
        component = builder.android_model(self.output / 'android')
        for case in model.cases():
            if case['variant'] not in (0, 3) or case['requested'] not in (0, 9) or case['weak_order'] not in (1, 2):
                continue
            actual, trace, unused = android.execute(component, case)
            self.assertEqual(actual['words'], model.expected(case))
            self.assertTrue(trace['highPointersAbove32Bits'])
            self.assertTrue(trace['integerAndSimdAbiPreserved'])
            self.assertFalse(trace['physicalAndroidExecution'])

    def test_source_needs_no_original_image(self):
        case = {'variant': 3, 'requested': 9, 'weak_order': 2, 'failed': 0}
        actual, trace, unused = oracle.execute(b'', self.component, case, True)
        self.assertEqual(actual['words'], model.expected(case))
        self.assertFalse(trace['sourceOriginalModuleMapped'])

    def test_weak_first_and_owner_first_keep_distinct_stale_representations(self):
        first = {'variant': 0, 'requested': 1, 'weak_order': 1, 'failed': 0}
        second = dict(first, weak_order=2)
        weak_first, unused, unused_heap = oracle.execute(b'', self.component, first, True)
        owner_first, unused, unused_heap = oracle.execute(b'', self.component, second, True)
        self.assertEqual(weak_first['words'][16:18], [model.ARRAY, 10])
        self.assertEqual(owner_first['words'][16:18], [model.NULL, 0])
        self.assertEqual(weak_first['words'][12], 0)
        self.assertEqual(owner_first['words'][12], 1)

    def test_premature_free_and_weak_reset_really_return_same_heap_with_wrong_events(self):
        cases = {'premature-array-free': {'variant': 0, 'requested': 0, 'weak_order': 0, 'failed': 0},
                 'premature-array-weak-reset': {'variant': 0, 'requested': 1, 'weak_order': 2, 'failed': 0}}
        for variant, case in cases.items():
            wrong = builder.arm(self.output / variant, variant)
            expected, unused, expected_heap = oracle.execute(self.image, self.component, case, False)
            actual, unused, actual_heap = oracle.execute(b'', wrong, case, True)
            self.assertTrue(actual['returned'])
            self.assertEqual(expected_heap, actual_heap)
            self.assertNotEqual(expected['words'], actual['words'])

    def test_frozen_common_prefix_header_drift_is_rejected_without_mutation(self):
        original = lane.record
        header = ROOT / 'source/squirrel-wave012/reference_types.h'
        def changed(path):
            row = original(path)
            if path == header:
                row['sha256'] = '0' * 64
            return row
        with mock.patch.object(lane, 'record', side_effect=changed):
            with self.assertRaisesRegex(ValueError, 'frozen input changed'):
                lane.frozen_inputs()

    def test_invalid_domains_reject_unknown_flags_and_nonintegers(self):
        for name, value in (('variant', True), ('requested', 3), ('weak_order', 3), ('failed', float('nan'))):
            case = copy.deepcopy(model.cases()[0])
            case[name] = value
            with self.assertRaises(ValueError):
                lane.validate(case)


if __name__ == '__main__':
    unittest.main()
