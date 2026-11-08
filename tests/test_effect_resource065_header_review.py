import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
from effect_resource065_header_review import EXPECTED, FIELDS, assert_header_padding


def layout(pointer):
    return {'pointerBytes': pointer, 'resourceBytes': 60 if pointer == 4 else 112,
        **{'r_' + field: offset for field, offset in zip(FIELDS, EXPECTED[pointer], strict=True)}}


class ResourceHeaderSuccessorTests(unittest.TestCase):
    def test_exact_unwritten_extent_for_each_abi(self):
        self.assertEqual(assert_header_padding((bytes([0xa5]) * 60).hex(), layout(4), 0xa5), [50, 51])
        self.assertEqual(assert_header_padding((bytes([0xa5]) * 112).hex(), layout(8), 0xa5),
            [20, 21, 22, 23, 76, 77, 78, 79, 94, 95])

    def test_each_original_unknown_byte_is_independently_guarded(self):
        for offset in [50, 51]:
            with self.subTest(offset=offset):
                raw = bytearray([0xa5]) * 60
                raw[offset] = 0
                with self.assertRaisesRegex(ValueError, 'padding byte changed'):
                    assert_header_padding(raw.hex(), layout(4), 0xa5)

    def test_each_native_extra_padding_byte_is_guarded(self):
        for offset in [20, 21, 22, 23, 76, 77, 78, 79, 94, 95]:
            with self.subTest(offset=offset):
                raw = bytearray([0x5a]) * 112
                raw[offset] = 0
                with self.assertRaisesRegex(ValueError, 'padding byte changed'):
                    assert_header_padding(raw.hex(), layout(8), 0x5a)

    def test_padding_review_does_not_reinterpret_typed_pointer_fields(self):
        raw = bytearray([0xff]) * 112
        raw[96:104] = bytes(8)
        assert_header_padding(raw.hex(), layout(8), 0xff)

    def test_layout_offset_or_size_drift_is_rejected(self):
        bad = layout(8)
        bad['r_transfer_context'] += 4
        with self.assertRaisesRegex(ValueError, 'ABI offsets'):
            assert_header_padding((bytes([0xa5]) * 112).hex(), bad, 0xa5)
        bad = layout(8)
        bad['resourceBytes'] = 108
        with self.assertRaisesRegex(ValueError, 'ABI size'):
            assert_header_padding((bytes([0xa5]) * 108).hex(), bad, 0xa5)


if __name__ == '__main__':
    unittest.main()
