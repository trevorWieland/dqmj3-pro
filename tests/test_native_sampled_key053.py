import os
import struct
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))

from native_sampled_key053_build import build
from native_sampled_key053_cases import cases, fixture
from native_sampled_key053_domain import validate
from native_sampled_key053_elf import graph
from native_sampled_key053_reference import floating_bits, KEYS
from native_sampled_key053_source import run
from native_sampled_key053_windows import Native


@unittest.skipUnless(os.name == 'nt', 'Actual Windows execution requires Windows')
class SampledKeys053Tests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        folder = Path(os.environ.get('SAMPLED_KEY053_BUILD', ROOT / 'work/sampled-key053/build'))
        for profile in ['arm', 'windows', 'a64']:
            suffix = 'dll' if profile == 'windows' else 'elf'
            if not (folder / profile / ('sampled_key053.' + suffix)).exists():
                build(folder / profile, profile, [])
        cls.native = Native(folder / 'windows/sampled_key053.dll')
        cls.arm = graph(folder / 'arm/sampled_key053.elf')
        cls.a64 = graph(folder / 'a64/sampled_key053.elf')

    def value(self, case):
        return self.native.run(case)['result']

    def test_actual_compiled_pointer_layout(self):
        self.assertEqual(self.native.layout, [8, 40, 40, 32, 0, 8, 12, 16, 20, 24, 28, 32])

    def test_constant_segment(self):
        result = self.value(fixture(1, 0.25, 0, 0))
        self.assertEqual(result, {'cachedKeyOffset': 8, 'period': 0,
            'coefficientBits': [0, floating_bits(1), floating_bits(-2.625), 0, 0, 0]})

    def test_linear_segment(self):
        self.assertEqual(self.value(fixture(1, 0.25, 0, 1))['coefficientBits'][3], floating_bits(6.75))

    def test_zero_tangent_cubic_segment(self):
        self.assertEqual(self.value(fixture(1, 0.25, 0, 2))['coefficientBits'][3:],
                         [0, floating_bits(20.25), floating_bits(-13.5)])

    def test_before_hold(self):
        result = self.value(fixture(1, -0.5, 0, 2))
        self.assertEqual((result['cachedKeyOffset'], result['period']), (0, -1))
        self.assertEqual(result['coefficientBits'][:2], [0xFF7FFFFF, 0])

    def test_after_hold(self):
        result = self.value(fixture(1, 4.25, 0, 2))
        self.assertEqual((result['cachedKeyOffset'], result['period']), (None, 1))
        self.assertEqual(result['coefficientBits'][:3], [floating_bits(4), 0x7F7FFFFF, floating_bits(33)])

    def test_periodic_bounds(self):
        result = self.value(fixture(1, 4.25, 1, 0))
        self.assertEqual(result['period'], 1)
        self.assertEqual(result['coefficientBits'][:2], [floating_bits(4), floating_bits(5)])

    def test_reverse_physical_tangent_selection(self):
        result = self.value(fixture(7, -0.5, 2, 2))
        self.assertEqual(result['cachedKeyOffset'], 0)
        self.assertEqual(result['coefficientBits'][3], floating_bits(2))

    def test_unknown_interpolation_retains_coefficients(self):
        case = fixture(1, 0.25, 0, 255)
        self.assertEqual(self.value(case)['coefficientBits'], list(struct.unpack_from('<IIIIII', case['state'], 8)))

    def test_native_ownership_and_padding(self):
        result = self.native.run(fixture(7, 0.25, 1, 2, 3))
        self.assertTrue(all(result[key] for key in ['returnedNormally', 'callerGuardsPreserved',
            'nativePointersAbove32Bits', 'inputAndKeyBytesPreserved', 'paddingPreserved']))

    def test_arm_source_graph(self):
        case = fixture(2, 0.25, 0, 2)
        self.assertEqual(run(self.arm, case)['result'], self.value(case))

    def test_high_aarch64_source_graph(self):
        case = fixture(6, -0.5, 2, 2)
        result = run(self.a64, case)
        self.assertEqual(result['result'], self.value(case))
        self.assertTrue(result['sourceOnlyExecution'])

    def test_execution_guard_fails_closed(self):
        denied = {**self.arm, 'executableAddresses': set()}
        with self.assertRaisesRegex(ValueError, 'outside compiled'):
            run(denied, fixture(1, 0.25, 0, 0))

    def test_key_read_guard_fails_closed(self):
        case = fixture(1, 0.25, 0, 0)
        case['state'] = struct.pack('<I', KEYS - 8) + case['state'][4:]
        with self.assertRaisesRegex(ValueError, 'undeclared memory'):
            run(self.arm, case)

    def test_floor_signed_zero_and_fractions(self):
        for value, expected in [(0.0, 0), (-0.0, 0x80000000), (0.75, 0), (-0.75, 0xBF800000),
                                (1.25, 0x3F800000), (-1.25, 0xC0000000)]:
            self.assertEqual(self.native.floor(floating_bits(value)), expected)

    def test_floor_special_payloads(self):
        for bits in [0x7F800000, 0xFF800000, 0x7F800001, 0xFFC12345, 0x4B800001, 0xCB800001]:
            self.assertEqual(self.native.floor(bits), bits)

    def test_all_declared_cases_have_coherent_domain(self):
        self.assertEqual(sum(validate(case) for case in cases()), 4608)

    def test_inconsistent_inverse_duration_rejected(self):
        case = fixture(1, 0.25, 0, 0)
        case['header'] = case['header'][:28] + struct.pack('<f', 0.3) + case['header'][32:]
        with self.assertRaisesRegex(ValueError, 'coherent'):
            validate(case)

    def test_quantized_reverse_zero_tick_rejected(self):
        case = fixture(5, 39.999996185302734, 2, 0, 0)
        with self.assertRaisesRegex(ValueError, 'reverse searches'):
            validate(case)


if __name__ == '__main__':
    unittest.main()
