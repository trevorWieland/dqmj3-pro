import copy
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import squirrel_reference_prefix012 as lane
import squirrel_reference_prefix012_build as builder
import squirrel_reference_prefix012_model as model
import squirrel_reference_prefix012_oracle as oracle


class ReferencePrefixSuccessor(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.output = ROOT / 'work/squirrel-reference-prefix012/unit-tests'
        cls.component = builder.build_arm(cls.output / 'normal')
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()

    def test_actual_original_and_source_full_arena(self):
        for index, case in enumerate(model.cases()):
            lane.checked_case(case)
            expected, unused = oracle.expected(case, index, self.component)
            for source in (False, True):
                actual, trace, unused = oracle.execute(self.image, self.component, case, index, source)
                self.assertTrue(trace['returned'])
                self.assertEqual(actual, expected)

    def test_unified_opaque_collectable_family_uses_exact_callbacks(self):
        component = builder.build_arm(self.output / 'opaque-arm', dispatch='opaque')
        native = builder.build_native(self.output / 'opaque-native', binding='legacy', dispatch='opaque')
        self.assertEqual(native['observations'], [model.model(case, index) for index, case in enumerate(model.cases())])
        for index, case in enumerate(model.cases()):
            expected, unused = oracle.expected(case, index, component)
            for source in (False, True):
                actual, trace, unused = oracle.execute(self.image, component, case, index, source, 'legacy')
                self.assertTrue(trace['returned'])
                self.assertEqual(actual, expected)

    def test_actual_legacy_object_storage_has_no_prefix_cast(self):
        native = builder.build_native(self.output / 'native-legacy', binding='legacy')
        self.assertEqual(native['observations'], [model.model(case, index) for index, case in enumerate(model.cases())])
        for index, case in enumerate(model.cases()):
            expected, unused = oracle.expected(case, index, self.component)
            actual, trace, unused = oracle.execute(self.image, self.component, case, index, True, 'legacy')
            self.assertTrue(trace['returned'])
            self.assertEqual(actual, expected)

    def test_native_declared_small_prefix_and_collectable_objects(self):
        native = builder.build_native(self.output / 'native')
        self.assertEqual(native['observations'], [model.model(case, index) for index, case in enumerate(model.cases())])
        self.assertFalse(native['androidDeviceExecution'])

    def test_real_compiled_publication_control_has_same_final_arena(self):
        wrong = builder.build_arm(self.output / 'publication', 'release-before-publication')
        case = model.cases()[7]
        expected, unused = oracle.expected(case, 7, wrong)
        actual, trace, unused = oracle.execute(self.image, wrong, case, 7, True)
        self.assertTrue(trace['returned'])
        self.assertEqual(actual['arenaSha256'], expected['arenaSha256'])
        self.assertNotEqual(actual['observerSha256'], expected['observerSha256'])

    def test_invalid_size_and_noninteger_fields_are_rejected(self):
        for name, value in (('size', 65), ('capacity', -1), ('requested', 0x80000000), ('operation', True), ('initial_count', float('nan'))):
            case = copy.deepcopy(model.cases()[0])
            case[name] = value
            with self.assertRaises(ValueError):
                lane.checked_case(case)

    def test_qualification_output_cannot_escape_private_lane(self):
        with self.assertRaises(ValueError):
            lane.execute(ROOT / 'work/squirrel-reference-prefix012/../../outputs/unqualified')


if __name__ == '__main__':
    unittest.main()
