import struct
import sys
import unittest
from pathlib import Path
from types import SimpleNamespace

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import effect_request066_oracle as oracle
import effect_request066_errors as errors
import effect_request066_negative as negative
from effect_request066_device_reference import generated_file


def layout(pointer_bytes):
    values = [60, 48, 8, 4, 8, 56, 4, 8, 12, 16, 24, 32, 4] if pointer_bytes == 4 else [88, 64, 16, 8, 16, 80, 8, 16, 24, 32, 40, 48, 8]
    return dict(zip(oracle.LAYOUT, values, strict=True))


class RequestObservationGuards(unittest.TestCase):
    def test_actual_target_and_native_layouts_are_explicit(self):
        for size in (4, 8):
            oracle.validate_layout(layout(size), size)

    def test_legacy_target_geometry_is_rejected_for_native_storage(self):
        with self.assertRaisesRegex(ValueError, 'Compiled layout'):
            oracle.validate_layout(layout(4), 8)

    def test_native_control_path_may_not_occupy_padding(self):
        incorrect = layout(8)
        incorrect['path'] = 4
        with self.assertRaisesRegex(ValueError, 'Compiled layout'):
            oracle.validate_layout(incorrect, 8)

    def test_nonstandard_pointer_width_is_rejected(self):
        with self.assertRaisesRegex(ValueError, 'Unsupported'):
            oracle.validate_layout(layout(8), 16)

    def test_task_identity_is_checked_before_any_dereference(self):
        def forbidden(*args):
            self.fail('Observer dereferenced a task outside independently recorded allocation')
        machine = SimpleNamespace(request_layout=layout(8), layout={'pointerBytes': 8, 'heap': 0, 'payloadOffset': 0},
            state=0x112800000, task=0x1280000, read_bytes=forbidden)
        with self.assertRaisesRegex(ValueError, 'independently recorded'):
            oracle.observe(machine)

    def test_control_identity_is_checked_before_untrusted_pointer_read(self):
        task, data = 0x112800000, bytearray(88)
        struct.pack_into('<QQQ', data, 0, 0x101, 0x1280000, 0x303)
        reads = []
        def guarded(address, size):
            reads.append((address, size))
            if not task <= address < address + size <= task + len(data):
                self.fail('Observer dereferenced an untrusted control pointer')
            return bytes(data[address - task:address - task + size])
        machine = SimpleNamespace(request_layout=layout(8), state=task, task=task, expected_ops=[0x101, 0x202, 0x303],
            layout={'pointerBytes': 8, 'heap': 0, 'payloadOffset': 0, 'heapStride': 8448}, read_bytes=guarded)
        with self.assertRaisesRegex(ValueError, 'independently known'):
            oracle.observe(machine)
        self.assertTrue(reads)

    def test_error_observer_rejects_task_truncation_before_access(self):
        def forbidden(*args):
            self.fail('Error observer accessed an unrelated task')
        machine = SimpleNamespace(request_layout=layout(8), state=0x112800000, task=0x1280000,
            layout={'pointerBytes': 8, 'heap': 0, 'payloadOffset': 0, 'heapStride': 8448}, read_bytes=forbidden)
        with self.assertRaisesRegex(ValueError, 'identity'):
            errors.observe(machine, errors.CASES[0])

    def test_all_wrong_source_controls_have_unique_source_anchors(self):
        for name, filename, before, after, mode in negative.MUTATIONS:
            with self.subTest(control=name):
                text = (ROOT / 'src/native/wave066-request' / filename).read_text()
                self.assertEqual(text.count(before), 1)
                self.assertNotEqual(before, after)

    def test_device_error_domain_preserves_the_measured_leak(self):
        leaking = next(row for row in errors.CASES if row.get('leak'))
        self.assertLess(leaking['read'], 0)
        self.assertEqual(leaking['prefix'], 'data')
        self.assertEqual(leaking['state'], 2)

    def test_synthetic_xbb_extents_are_bounded_and_nonoverlapping(self):
        raw = generated_file()
        self.assertEqual(len(raw), 2048)
        self.assertEqual(struct.unpack_from('<II', raw), (0x01424258, 2))
        spans = [struct.unpack_from('<II', raw, 32 + index * 16) for index in range(2)]
        self.assertEqual(spans, [(0x200, 0x400), (0x600, 328)])
        self.assertLessEqual(spans[0][0] + spans[0][1], spans[1][0])
        self.assertLessEqual(spans[1][0] + spans[1][1], len(raw))


if __name__ == '__main__':
    unittest.main()
