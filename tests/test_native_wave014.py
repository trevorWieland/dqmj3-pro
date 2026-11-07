import copy
import json
from pathlib import Path
import struct
import sys
import unittest


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import native_wave014_table as table
from native_wave014_build import WORK
from native_wave014_oracle import Arm, Windows, original
from native_wave014_vectors import cases, memory, validate


class ProjectionContract(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.cases = cases()

    def test_table_is_mathematical_and_pinned(self):
        values = table.entries()
        raw = b''.join(struct.pack('<4f', *row) for row in values)
        self.assertEqual(__import__('hashlib').sha256(raw).hexdigest(),
            'f2433a2419e313eb7d18fc5f2682c7be465840bf0f120094ab2b00c79dcca7a8')
        self.assertEqual(len(values), 256)

    def test_nonfinite_inputs_reject_before_execution(self):
        for operation in ['multiply', 'inverse', 'trig', 'srt', 'projection']:
            template = next(case for case in self.cases if case['operation'] == operation)
            for bad in [float('nan'), float('inf'), -float('inf')]:
                case = copy.deepcopy(template)
                if operation in ['multiply', 'inverse']:
                    case['left'][0] = bad
                elif operation == 'trig':
                    case['angle'] = bad
                elif operation == 'srt':
                    case['transform'][2] = bad
                else:
                    case['projection'][0] = bad
                with self.assertRaisesRegex(ValueError, 'finite'):
                    memory(case, 0x2000000)

    def test_projection_invalid_dimensions_scales_and_inverse_reject(self):
        template = next(case for case in self.cases if case['operation'] == 'projection')
        for name in ['width', 'height', 'viewportWidth', 'viewportHeight']:
            case = copy.deepcopy(template)
            case[name] = 0.
            with self.assertRaises(ValueError):
                validate(case)
        case = copy.deepcopy(template)
        case['projection'][2] = 0.
        with self.assertRaises(ValueError):
            validate(case)
        case = copy.deepcopy(template)
        case.update({'coordinateSource': 4, 'flags': 4})
        case['world'] = [0.] * 12
        with self.assertRaisesRegex(ValueError, 'inverse-failure'):
            validate(case)

    def test_real_capacity_layout_and_pointer_width(self):
        case = next(case for case in self.cases if case['operation'] == 'projection' and case['id'] == 'projection-5')
        for width in [4, 8]:
            data, args, _, _, _ = memory(case, 0x110000004 if width == 8 else 0x2000000, width)
            capacity = struct.unpack_from('<H', data, 0x4000 + width + 112)[0]
            self.assertEqual(capacity & 3, case['textures'])
            self.assertEqual((capacity >> 2) & 3, case['transformCount'])
            self.assertEqual((capacity >> 4) & 3, case['generators'])
            self.assertEqual((capacity >> 6) & 7, case['stages'])
            self.assertEqual((capacity >> 13) & 3, case['projections'])
            self.assertEqual(len(args), 7)

    def test_all_final_execution_sweeps_pass(self):
        outputs = []
        for name in ['arm', 'windows', 'android']:
            path = WORK / (name + '-comparisons.json')
            if not path.is_file():
                self.skipTest('Run native_wave014.py first')
            receipt = json.loads(path.read_text())
            self.assertTrue(receipt['passed'])
            self.assertEqual(receipt['cases'], len(self.cases))
            outputs.append(receipt['outputSha256'])
        self.assertEqual(len(set(outputs)), 1)

    def test_all_returning_source_controls_are_rejected(self):
        path = WORK / 'semantic-controls.json'
        if not path.is_file():
            self.skipTest('Run native_wave014_controls.py first')
        result = json.loads(path.read_text())
        self.assertTrue(result['allRejected'])
        self.assertEqual(len(result['controls']), 5)
        self.assertTrue(all(row['originalAndChangedCExecutionReturnedNormally'] and
            row['armExpectedSha256'] != row['armChangedSha256'] for row in result['controls']))


if __name__ == '__main__':
    unittest.main()
