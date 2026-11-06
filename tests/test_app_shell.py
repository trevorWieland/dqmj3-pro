import ctypes
import importlib.util
import json
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location("app_shell_build", ROOT / "toolscripts/app_shell_build.py")
BUILD = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(BUILD)


class Rect(ctypes.Structure):
    _fields_ = [(name, ctypes.c_int) for name in ("left", "top", "width", "height")]


class AppShellTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.report = BUILD.run_build(ROOT / "work/app-shell-wave001/unittest")
        cls.core = ctypes.CDLL(str(ROOT / cls.report["windows"]["coreLibrary"]["path"]))
        cls.core.shell_rect.argtypes = [ctypes.c_int] * 5 + [ctypes.POINTER(Rect)]
        cls.core.shell_route.argtypes = [ctypes.c_int] * 6
        cls.core.shell_route.restype = ctypes.c_longlong
        cls.core.shell_surface.argtypes = [ctypes.c_int] * 3
        cls.core.shell_snapshot.argtypes = [ctypes.c_int]
        cls.core.shell_snapshot.restype = ctypes.c_int

    def setUp(self):
        self.core.shell_reset()

    def rect(self, width, height, role, view, secondary):
        result = Rect()
        self.core.shell_rect(width, height, role, view, secondary, ctypes.byref(result))
        return tuple(getattr(result, key) for key, _ in Rect._fields_)

    def test_single_window_two_view_fallback_preserves_logical_sizes(self):
        self.assertEqual(self.rect(400, 480, 0, 0, 0), (0, 0, 400, 240))
        self.assertEqual(self.rect(400, 480, 0, 1, 0), (40, 240, 320, 240))
        self.assertEqual(self.rect(320, 640, 0, 0, 0), (0, 64, 320, 192))

    def test_inverse_touch_rejects_bars_and_maps_bottom_coordinates(self):
        self.assertEqual(self.core.shell_route(400, 480, 0, 0, 240, 360), (1 << 32) | (200 << 16) | 120)
        self.assertEqual(self.core.shell_route(400, 480, 0, 0, 10, 360), -1)
        self.assertEqual(self.core.shell_route(400, 480, 0, 0, 400, 100), -1)
        self.assertEqual(self.core.shell_route(0, 480, 0, 0, 0, 0), -1)

    def test_physical_secondary_layout_uses_separate_roles(self):
        self.assertEqual(self.rect(1920, 1080, 0, 0, 1), (60, 0, 1800, 1080))
        self.assertEqual(self.rect(1920, 1080, 1, 1, 1), (240, 0, 1440, 1080))
        self.assertEqual(self.rect(1920, 1080, 0, 1, 1), (0, 0, 0, 0))
        self.assertEqual(self.core.shell_route(1920, 1080, 1, 1, 960, 540), (1 << 32) | (160 << 16) | 120)

    def test_single_tick_owner_pause_and_surface_loss(self):
        self.core.shell_resume(1)
        self.core.shell_surface(0, 10, 1)
        self.core.shell_surface(1, 20, 1)
        self.core.shell_step(1)
        self.assertEqual(self.core.shell_snapshot(0), 0)
        self.core.shell_step(0)
        self.assertEqual(self.core.shell_snapshot(0), 1)
        self.core.shell_resume(0)
        self.core.shell_step(0)
        self.assertEqual(self.core.shell_snapshot(0), 1)
        self.core.shell_resume(1)
        self.core.shell_surface(0, 10, 0)
        self.core.shell_step(0)
        self.assertEqual(self.core.shell_snapshot(0), 1)

    def test_stale_surface_destruction_cannot_close_replacement(self):
        self.core.shell_resume(1)
        self.core.shell_surface(0, 1, 1)
        self.core.shell_surface(0, 2, 1)
        self.core.shell_surface(0, 1, 0)
        self.core.shell_step(0)
        self.assertEqual(self.core.shell_snapshot(7), 1)
        self.assertEqual(self.core.shell_snapshot(0), 1)

    def test_controller_clamping_pause_reset_and_state_restore(self):
        self.core.shell_resume(1)
        self.core.shell_button(0, 1)
        self.core.shell_axis(-99999, 99999)
        self.assertEqual(self.core.shell_snapshot(1), 1)
        self.assertEqual((self.core.shell_snapshot(2), self.core.shell_snapshot(3)), (-32767, 32767))
        self.core.shell_resume(0)
        self.assertEqual(self.core.shell_snapshot(1), 0)
        self.core.shell_restore(1234)
        self.assertEqual(self.core.shell_snapshot(0), 1234)

    def test_actual_recovered_c_function_and_headless_native_executable(self):
        self.assertEqual(self.core.shell_smoke(), 1000)
        self.assertEqual(self.core.shell_self_test(), 0)
        self.assertTrue(self.report["windows"]["actuallyExecuted"])
        self.assertFalse(self.report["windows"]["selfTest"]["guiOpened"])

    def test_apk_is_signed_aligned_and_contains_complete_jni_interface(self):
        android = self.report["android"]
        self.assertTrue(android["signatureVerified"])
        self.assertTrue(android["zipAlignmentVerified"])
        self.assertEqual(android["nativeLibraryDataOffset"] % 16384, 0)
        self.assertEqual(len(android["native"]["jniSymbols"]), 11)
        self.assertTrue(all(x >= 16384 for x in android["native"]["loadAlignments"]))
        self.assertEqual(android["targetApi"], 36)

    def test_shell_does_not_claim_game_or_hardware_execution(self):
        self.assertTrue(self.report["diagnosticOnly"])
        self.assertFalse(self.report["fullGameBuild"])
        self.assertEqual(self.report["acceptedSourceCredit"], 0)
        self.assertFalse(self.report["android"]["actuallyExecutedOnDevice"])

    def test_smoke_source_requires_immutable_admitted_function_identity(self):
        game = json.loads((ROOT / "platform/app-shell/game-input.json").read_text())
        acceptance = json.loads((ROOT / game["acceptancePath"]).read_text())
        self.assertEqual(BUILD.accepted_function(game, acceptance)["symbol"], "fn_003453a8")
        acceptance["functions"] = [row for row in acceptance["functions"] if row["symbol"] != "fn_003453a8"]
        with self.assertRaisesRegex(RuntimeError, "not uniquely admitted"):
            BUILD.accepted_function(game, acceptance)


if __name__ == "__main__":
    unittest.main()
