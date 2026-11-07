import sys
import unittest
from pathlib import Path


sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
from native_material_wave011_build import WORK, ENTRY, build
from native_material_wave011_fixtures import cases, synthetic
from native_material_wave011_oracle import closure, image, execute, compare
from native_material_wave011 import MUTATIONS, negative


class ConstructorTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.raw, cls.closed, cls.fixtures = image(), closure(), cases()
        cls.blocks, cls.receipt = build(WORK / 'tests')

    def test_all_returning_constructor_cases(self):
        for index, case in enumerate(self.fixtures):
            with self.subTest(case=case['name']):
                compare(execute(self.raw, self.closed, case, index + 417),
                    execute(self.raw, self.closed, case, index + 417, self.blocks, ENTRY))

    def test_wrong_source_returns_with_semantic_failure(self):
        for name, replacement in MUTATIONS.items():
            with self.subTest(control=name):
                result = negative(name, replacement, self.raw, self.closed, self.fixtures)
                self.assertTrue(result['returnedNormally'])
                self.assertTrue(result['semanticMismatchObserved'])

    def test_synthetic_wire_flags_preserve_all_bits(self):
        import struct
        for flags in [0, 0xffffffff, 0x18802a]:
            self.assertEqual(struct.unpack_from('<I', synthetic(flags), 36)[0], flags)


if __name__ == '__main__':
    unittest.main()
