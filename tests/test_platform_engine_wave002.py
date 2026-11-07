import ctypes
import struct
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import platform_engine_wave002 as build
import platform_engine_asset_wave002 as measured


def layout_fixture(rotated=False):
    def section(tag, payload=b''):
        return tag + struct.pack('<I', len(payload) + 8) + payload
    def pane(tag, x, y, rotation, width, height):
        prefix = bytes([1, 0, 255, 0]) + b'owned-test-node'.ljust(32, b'\0')
        return section(tag, prefix + struct.pack('<10f', x, y, 0, 0, 0, rotation, 1, 1, width, height))
    blocks = [section(b'lyt1', struct.pack('<B3x4f', 1, 320, 240, 320, 240)),
              pane(b'pan1', 10, 20, 90 if rotated else 0, 320, 240), section(b'pas1'),
              pane(b'pic1', 30, -10, -30 if rotated else 0, 40, 20), section(b'pae1')]
    payload = b''.join(blocks)
    return struct.pack('<4sHHIIHH', b'FLYT', 0xfeff, 20, 0x07020100, len(payload) + 20, len(blocks), 0) + payload


class Rect(ctypes.Structure):
    _fields_ = [('left', ctypes.c_int), ('top', ctypes.c_int), ('width', ctypes.c_int), ('height', ctypes.c_int)]


class PortableEngineTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        base = ROOT / 'work/platform-engine-wave002/tests'
        base.mkdir(parents=True, exist_ok=True)
        cls.temporary = tempfile.TemporaryDirectory(dir=base)
        cls.directory = Path(cls.temporary.name)
        manifest = build.verify_inputs()
        objects = []
        for name, source in [('engine', build.SOURCE / 'engine.c'), ('resources', build.SOURCE / 'resources.c'),
                             ('layout', build.SOURCE / 'layout.c'),
                             ('stack', ROOT / manifest['source']['path'])]:
            obj = cls.directory / (name + '.obj')
            build.compile_object(source, obj)
            objects.append(obj)
        library = cls.directory / 'core.dll'
        build.tools.run([build.tools.LINKER, '-flavor', 'link', '/machine:x64', '/dll', '/noentry', '/nodefaultlib',
                         '/out:' + str(library), *['/export:' + name for name in build.EXPORTS], *objects], cls.directory / 'link.json')
        cls.core = ctypes.CDLL(str(library))
        cls.core.engine_request.argtypes = [ctypes.c_char_p]
        cls.core.engine_path.argtypes = [ctypes.c_int]
        cls.core.engine_path.restype = ctypes.c_char_p
        cls.core.engine_complete.argtypes = [ctypes.c_int, ctypes.POINTER(ctypes.c_ubyte), ctypes.c_int]
        cls.core.engine_checkpoint.argtypes = [ctypes.POINTER(ctypes.c_ubyte), ctypes.c_int]
        cls.core.engine_restore.argtypes = [ctypes.POINTER(ctypes.c_ubyte), ctypes.c_int]
        cls.core.engine_layout_load.argtypes = [ctypes.POINTER(ctypes.c_ubyte), ctypes.c_int]
        cls.core.engine_rect.argtypes = [ctypes.c_int, ctypes.c_int, ctypes.c_int, ctypes.c_int, ctypes.POINTER(Rect)]
        cls.cases = []

    @classmethod
    def tearDownClass(cls):
        import _ctypes
        _ctypes.FreeLibrary(cls.core._handle)
        del cls.core
        cls.temporary.cleanup()
        build.tools.save(build.EVIDENCE / 'tests.json', {'status': 'passed' if all(row['passed'] for row in cls.cases) else 'failed',
            'cases': cls.cases, 'nativeWindowsCoreExecuted': True, 'androidDeviceExecuted': False,
            'recoveredSourceCredit': 0, 'producer': build.tools.pin(Path(__file__))})

    def setUp(self):
        self.core.engine_reset()
        self.core.engine_resume(1)
        self.core.engine_surface(0, 1, 1)

    def tearDown(self):
        outcome = self._outcome.result
        failed = any(test.id() == self.id() for test, detail in outcome.failures + outcome.errors)
        self.cases.append({'name': self.id().rsplit('.', 1)[-1], 'passed': not failed})

    def bytes_array(self, content):
        return (ctypes.c_ubyte * len(content)).from_buffer_copy(content)

    def load(self, content=None):
        handle = self.core.engine_request(b'scenes/example.dat')
        self.assertGreater(handle, 0)
        self.assertEqual(self.core.engine_claim(), handle)
        data = build.scene_bytes() if content is None else content
        result = self.core.engine_complete(handle, self.bytes_array(data), len(data))
        return handle, result

    def checkpoint(self):
        result = (ctypes.c_ubyte * 28)()
        self.assertEqual(self.core.engine_checkpoint(result, 28), 28)
        return bytes(result)

    def test_recovered_job_stack_claims_every_queued_resource(self):
        handles = [self.core.engine_request(('scenes/' + str(index) + '.dat').encode()) for index in range(8)]
        self.assertTrue(all(handles))
        self.assertEqual(self.core.engine_snapshot(4), 8)
        self.assertEqual(self.core.engine_request(b'scenes/full.dat'), 0)
        self.assertEqual([self.core.engine_claim() for index in range(8)], list(reversed(handles)))
        self.assertEqual(self.core.engine_snapshot(4), 0)
        self.assertEqual(self.core.engine_claim(), 0)
        for handle in handles:
            self.assertEqual(self.core.engine_resource_status(handle), 2)

    def test_traversal_absolute_and_oversize_resource_names_are_rejected(self):
        for path in [b'../private', b'scenes/../private', b'/absolute', b'C:/private', b'scenes\\file',
                     b'./file', b'scenes//file', b'scenes/.', b'scenes/..', b'scenes/', b'a' * 64, b'file://input']:
            with self.subTest(path=path): self.assertEqual(self.core.engine_request(path), 0)
        self.assertEqual(self.core.engine_request(None), 0)
        handle = self.core.engine_request(b'scenes/safe-file_1.dat')
        self.assertEqual(self.core.engine_path(handle), b'scenes/safe-file_1.dat')

    def test_scene_io_checksum_and_dimensions_are_enforced(self):
        original = build.scene_bytes()
        for position in (0, 9, 18, 24, 31):
            bad = bytearray(original)
            bad[position] ^= 1
            handle, result = self.load(bad)
            self.assertEqual(result, -1)
            self.assertEqual(self.core.engine_resource_status(handle), 4)
            self.assertEqual(self.core.engine_snapshot(3), 0)
        handle, result = self.load()
        self.assertEqual(result, 1)
        self.assertEqual(self.core.engine_resource_status(handle), 3)
        self.assertEqual((self.core.engine_snapshot(1), self.core.engine_snapshot(2)), (100, 120))

    def test_pause_cancels_inflight_completion_and_held_input(self):
        self.load()
        old = self.core.engine_request(b'scenes/late.dat')
        self.assertEqual(self.core.engine_claim(), old)
        self.core.engine_button(11, 1)
        self.core.engine_axis(40000, -40000)
        self.core.engine_touch(0, 400, 480, 200, 360, 1)
        self.core.engine_resume(0)
        self.assertEqual(self.core.engine_resource_status(old), 5)
        self.assertEqual(self.core.engine_complete(old, self.bytes_array(build.scene_bytes()), 32), 0)
        self.assertEqual([self.core.engine_snapshot(index) for index in (5, 6, 7, 10)], [0, 0, 0, 0])
        self.assertEqual(self.core.engine_step(0, 16666), 0)
        self.assertEqual(self.core.engine_snapshot(3), 1)

    def test_activity_reset_never_reuses_an_inflight_resource_handle(self):
        old = self.core.engine_request(b'scenes/old.dat')
        self.core.engine_claim()
        self.core.engine_reset()
        new = self.core.engine_request(b'scenes/new.dat')
        self.assertGreater(new, old)
        self.core.engine_claim()
        self.assertEqual(self.core.engine_complete(old, self.bytes_array(build.scene_bytes()), 32), 0)
        self.assertEqual(self.core.engine_complete(new, self.bytes_array(build.scene_bytes()), 32), 1)

    def test_secondary_render_and_pause_cannot_tick_simulation(self):
        self.load()
        self.core.engine_surface(1, 1, 1)
        self.assertEqual(self.core.engine_step(1, 16666), 0)
        self.assertEqual(self.core.engine_step(0, 8333), 0)
        self.assertEqual(self.core.engine_step(0, 8333), 1)
        self.core.engine_resume(0)
        self.assertEqual(self.core.engine_step(0, 2000000000), 0)
        self.core.engine_resume(1)
        self.assertEqual(self.core.engine_step(0, 16666), 1)
        self.assertEqual(self.core.engine_snapshot(0), 2)

    def test_surface_generation_and_loss_preserve_one_simulation_owner(self):
        self.load()
        self.core.engine_surface(0, 2, 1)
        self.core.engine_surface(0, 1, 0)
        self.core.engine_surface(0, 1, 1)
        self.assertEqual(self.core.engine_step(0, 16666), 1)
        self.core.engine_surface(0, 2, 0)
        self.assertEqual(self.core.engine_step(0, 16666), 0)
        self.core.engine_surface(0, 3, 1)
        self.core.engine_surface(1, 4, 1)
        self.core.engine_surface(1, 4, 0)
        self.assertEqual(self.core.engine_step(0, 16666), 1)
        self.assertEqual(self.core.engine_snapshot(8), 1)

    def test_fixed_step_and_position_clamps_handle_extreme_delta_and_axis(self):
        self.load()
        self.core.engine_axis(2147483647, -2147483647)
        self.assertEqual((self.core.engine_snapshot(6), self.core.engine_snapshot(7)), (32767, -32767))
        self.assertEqual(self.core.engine_step(0, 2147483647), 8)
        for index in range(20): self.core.engine_step(0, 133328)
        self.assertEqual((self.core.engine_snapshot(1), self.core.engine_snapshot(2)), (399, 0))

    def test_letterbox_touch_and_secondary_display_fallback(self):
        self.load()
        self.assertEqual(self.core.engine_touch(0, 400, 480, 240, 360, 1), 1)
        self.assertEqual((self.core.engine_snapshot(1), self.core.engine_snapshot(2)), (250, 120))
        for x, y in [(39, 360), (360, 360), (240, 480), (240, 20)]:
            self.assertEqual(self.core.engine_touch(0, 400, 480, x, y, 1), 0)
        self.assertEqual(self.core.engine_touch(-1, 400, 480, 240, 360, 1), 0)
        self.core.engine_surface(1, 5, 1)
        rect = Rect()
        self.core.engine_rect(0, 1, 1920, 1080, ctypes.byref(rect))
        self.assertEqual(rect.width, 0)
        self.assertEqual(self.core.engine_touch(1, 1240, 1080, 620, 540, 1), 1)
        self.assertEqual((self.core.engine_snapshot(1), self.core.engine_snapshot(2)), (200, 120))
        self.core.engine_surface(1, 5, 0)
        self.core.engine_rect(0, 1, 400, 480, ctypes.byref(rect))
        self.assertEqual(rect.width, 320)

    def test_checkpoint_roundtrip_clears_transient_input_and_rejects_every_corrupted_byte(self):
        self.load()
        self.core.engine_button(11, 1)
        for index in range(20): self.core.engine_step(0, 16666)
        saved = self.checkpoint()
        expected = [self.core.engine_snapshot(index) for index in (0, 1, 2)]
        for index in range(28):
            bad = bytearray(saved)
            bad[index] ^= 1
            self.assertEqual(self.core.engine_restore(self.bytes_array(bad), 28), 0)
            self.assertEqual([self.core.engine_snapshot(field) for field in (0, 1, 2)], expected)
        self.core.engine_step(0, 16666)
        self.assertEqual(self.core.engine_restore(self.bytes_array(saved), 28), 1)
        self.assertEqual([self.core.engine_snapshot(field) for field in (0, 1, 2)], expected)
        self.assertEqual(self.core.engine_snapshot(5), 0)
        self.assertEqual(self.core.engine_restore(self.bytes_array(saved), 27), 0)

    def test_duplicate_completion_does_not_reload_scene_or_advance_time(self):
        handle, result = self.load()
        self.core.engine_button(11, 1)
        self.core.engine_step(0, 16666)
        self.assertEqual(self.core.engine_complete(handle, self.bytes_array(build.scene_bytes()), 32), 0)
        self.assertEqual((self.core.engine_snapshot(0), self.core.engine_snapshot(1)), (1, 103))

    def test_layout_hierarchy_transforms_match_independent_trigonometric_reference(self):
        for rotated in (False, True):
            data = layout_fixture(rotated)
            self.assertEqual(self.core.engine_layout_load(self.bytes_array(data), len(data)), 1)
            reference = measured.reference_geometry(data)
            self.assertEqual(self.core.engine_layout_count(), 2)
            for pane, row in enumerate(reference):
                for field, expected in enumerate(row['points']):
                    self.assertAlmostEqual(self.core.engine_layout_value(pane, field) / 1000.0, expected, delta=0.01)

    def test_layout_malformed_bounds_version_and_tree_are_rejected_atomically(self):
        data = layout_fixture()
        self.assertEqual(self.core.engine_layout_load(self.bytes_array(data), len(data)), 1)
        first = self.core.engine_layout_value(1, 0)
        attempts = []
        for offset, value in [(12, len(data) + 4), (24, 0), (24, len(data)), (8, 0x08000000)]:
            bad = bytearray(data)
            struct.pack_into('<I', bad, offset, value)
            attempts.append(bad)
        bad = bytearray(data); bad[16] += 1; attempts.append(bad)
        bad = bytearray(data); bad[4] = 0; attempts.append(bad)
        bad = bytearray(data); bad[-8:-4] = b'pas1'; attempts.append(bad)
        attempts.append(data[:-1])
        for bad in attempts:
            self.assertEqual(self.core.engine_layout_load(self.bytes_array(bad), len(bad)), 0)
            self.assertEqual(self.core.engine_layout_count(), 2)
            self.assertEqual(self.core.engine_layout_value(1, 0), first)

    def test_layout_nan_and_unqualified_3d_or_origin_semantics_are_rejected(self):
        original = layout_fixture()
        root = 20 + 28
        for offset, value in [(root + 44, 0x7fc00000), (root + 56, 0x3f800000), (root + 76, 0x7f800000)]:
            bad = bytearray(original)
            struct.pack_into('<I', bad, offset, value)
            self.assertEqual(self.core.engine_layout_load(self.bytes_array(bad), len(bad)), 0)
        bad = bytearray(original); bad[root + 9] = 1
        self.assertEqual(self.core.engine_layout_load(self.bytes_array(bad), len(bad)), 0)

    def test_layout_uses_the_same_resource_completion_service(self):
        data = layout_fixture()
        handle = self.core.engine_request(b'layouts/owned-test.bflyt')
        self.assertEqual(self.core.engine_claim(), handle)
        self.assertEqual(self.core.engine_complete(handle, self.bytes_array(data), len(data)), 1)
        self.assertEqual(self.core.engine_snapshot(3), 2)
        self.assertEqual(self.core.engine_layout_count(), 2)
        self.assertEqual(self.core.engine_checkpoint((ctypes.c_ubyte * 28)(), 28), 0)


if __name__ == '__main__':
    unittest.main()
