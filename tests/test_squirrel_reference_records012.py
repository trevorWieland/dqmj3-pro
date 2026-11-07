import copy
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import squirrel_reference_records012 as lane
import squirrel_reference_records012_build as builder
import squirrel_reference_records012_model as model
import squirrel_reference_records012_oracle as oracle


class PortableRecordStorage(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.output = ROOT / 'work/squirrel-reference-prefix012/record-unit-tests'
        cls.component = builder.build_arm(cls.output / 'arm', dispatch='opaque')
        cls.image = (ROOT / 'generated/update-content0/code.bin').read_bytes()

    def test_complete_original_and_source_record_arena(self):
        for index, case in enumerate(model.cases()):
            lane.validate(case)
            expected, unused = oracle.expected(case, index, self.component)
            for source in (False, True):
                actual, trace, unused = oracle.execute(self.image, self.component, case, index, source)
                self.assertTrue(trace['returned'])
                self.assertEqual(actual, expected)

    def test_native_legacy_and_opaque_callback_contracts(self):
        for family in ('legacy', 'opaque'):
            native = builder.build_native(self.output / ('native-' + family), dispatch=family)
            self.assertEqual(native['observations'], [model.model(case, index) for index, case in enumerate(model.cases())])
            self.assertFalse(native['androidDeviceExecution'])

    def test_member_order_control_really_returns_with_same_arena(self):
        wrong = builder.build_arm(self.output / 'wrong-order', 'reversed-member-release', 'opaque')
        case = model.cases()[96]
        expected, unused = oracle.expected(case, 96, wrong)
        actual, trace, unused = oracle.execute(self.image, wrong, case, 96, True)
        self.assertTrue(trace['returned'])
        self.assertEqual(actual['arenaSha256'], expected['arenaSha256'])
        self.assertNotEqual(actual['observerSha256'], expected['observerSha256'])

    def test_invalid_storage_and_noninteger_counts_are_rejected(self):
        for name, value in (('group', True), ('size', 65), ('capacity', -1), ('requested', float('nan'))):
            case = copy.deepcopy(model.cases()[0])
            case[name] = value
            with self.assertRaises(ValueError):
                lane.validate(case)


if __name__ == '__main__':
    unittest.main()
