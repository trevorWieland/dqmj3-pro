import copy
import sys
import unittest
from pathlib import Path
from unittest import mock

import unicorn

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import squirrel_reference_mixed012 as lane
import squirrel_reference_mixed012_build as builder
import squirrel_reference_mixed012_model as model
import squirrel_reference_mixed012_oracle as oracle


class ActualMixedLifetimes(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.output = ROOT / 'work/squirrel-reference-prefix012/mixed-unit-tests'
        cls.component = builder.arm(cls.output / 'arm')
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()

    def test_actual_original_and_source_complete_heap(self):
        for variant, operation in model.cases():
            original, original_trace, original_heap = oracle.execute(self.image, self.component, variant, operation, False)
            source, source_trace, source_heap = oracle.execute(self.image, self.component, variant, operation, True)
            self.assertEqual(original, source)
            self.assertEqual(original_heap, source_heap)
            self.assertEqual(source['words'], model.expected(variant, operation))
            self.assertTrue(original_trace['originalTablesPreserved'])
            self.assertFalse(source_trace['sourceOriginalModuleMapped'])

    def test_native_actual_objects_and_android_objects(self):
        native = builder.native(self.output / 'native')
        self.assertEqual(native['observations'], [{'variant': variant, 'operation': operation,
            'words': model.expected(variant, operation)} for variant, operation in model.cases()])
        objects = builder.android(self.output / 'android-objects')
        self.assertEqual(len(objects), 9)
        self.assertEqual(len({item['source'] for item in objects}), 9)

    def test_source_requires_no_original_image(self):
        actual, trace, unused = oracle.execute(b'', self.component, 3, 2, True)
        self.assertEqual(actual['words'], model.expected(3, 2))
        self.assertFalse(trace['sourceOriginalModuleMapped'])

    def test_early_publication_control_returns_with_same_heap(self):
        wrong = builder.arm(self.output / 'wrong-order', 'early-mixed-release')
        original, unused, expected_heap = oracle.execute(self.image, self.component, 0, 0, False)
        actual, trace, actual_heap = oracle.execute(b'', wrong, 0, 0, True)
        self.assertTrue(actual['returned'])
        self.assertEqual(expected_heap, actual_heap)
        self.assertNotEqual(original['words'], actual['words'])

    def test_wrong_provider_returns_a_diagnostic_instead_of_reinterpreting_tables(self):
        wrong = builder.native(self.output / 'wrong-provider', 'wrong-mixed-provider')
        self.assertEqual(len(wrong['observations']), 12)
        self.assertTrue(all(row['words'][0] == 3 for row in wrong['observations']))

    def test_source_cannot_fall_back_to_original_helper(self):
        wrong = copy.deepcopy(self.component)
        wrong['symbols']['fixture_mixed_source012'] = 0x19e864
        with self.assertRaises((ValueError, RuntimeError, unicorn.UcError)):
            oracle.execute(self.image, wrong, 0, 0, True)

    def test_frozen_prototype_header_drift_is_rejected_without_mutating_it(self):
        original = lane.record
        header = ROOT / 'source/squirrel-wave011/prototype_release.h'
        def changed(path):
            row = original(path)
            if path == header:
                row['sha256'] = '0' * 64
            return row
        with mock.patch.object(lane, 'record', side_effect=changed):
            with self.assertRaisesRegex(ValueError, 'frozen input changed'):
                lane.frozen_inputs()

    def test_invalid_domains_reject_boolean_nan_and_unknown_operations(self):
        for variant, operation in ((True, 0), (0, False), (-1, 0), (4, 0), (0, 3), (float('nan'), 0)):
            with self.assertRaises(ValueError):
                lane.validate(variant, operation)


if __name__ == '__main__':
    unittest.main()
