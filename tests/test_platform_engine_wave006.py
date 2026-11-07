import ctypes
import hashlib
import importlib.util
import struct
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import platform_engine_wave006 as build
from platform_engine_wave006_packaging import validate_segments

spec = importlib.util.spec_from_file_location('frozen_texture_fixtures', ROOT / 'tests/test_platform_engine_wave003.py')
fixtures = importlib.util.module_from_spec(spec)
spec.loader.exec_module(fixtures)


def package(color=(15, 0, 0, 15), x=0, bad_material=False, repeat=False):
    layout = bytearray(fixtures.layout())
    pic = layout.index(b'pic1')
    mat = layout.index(b'mat1') + 16
    struct.pack_into('<f', layout, pic + 44, x)
    if bad_material:
        struct.pack_into('<f', layout, mat + 44, float('nan'))
    if repeat:
        layout[mat + 42:mat + 44] = b'\x01\x01'
        struct.pack_into('<5f', layout, mat + 44, -0.25, 0.75, 0, 9, 7)
    texture, unused = fixtures.image(solid=color)
    return fixtures.archive([('blyt/own.bflyt', bytes(layout)), ('timg/own.bflim', texture)])


def material_package(detailed=False, alpha=0, constant_alpha=255, alpha_mode=1, color_selector=2, alpha_selector=2, pattern=False):
    names = ['first.bflim', 'second.bflim'] if detailed else ['first.bflim']
    offsets, strings = [], bytearray()
    for name in names:
        offsets.append(len(names) * 4 + len(strings))
        strings.extend(name.encode() + b'\0')
    txl = fixtures.section(b'txl1', struct.pack('<I', len(names)) + struct.pack('<' + 'I' * len(names), *offsets) + strings)
    flags = 0x18802a if detailed else 0x8015 if pattern else 0x15
    material = b'own\0'.ljust(28, b'\0') + bytes((0, 0, 0, 240 if detailed else 0)) + b'\xff' * 4 + struct.pack('<I', flags)
    material += struct.pack('<HBB', 0, 5 if detailed or pattern else 4, 5 if detailed or pattern else 4)
    if detailed:
        material += struct.pack('<HBB', 1, 4, 4)
    material += struct.pack('<5f', 0.5 if detailed or pattern else 0, 0.5 if detailed or pattern else 0, 0, 1, 1)
    if detailed:
        material += struct.pack('<5f', 0, 0, 0, 1, 1)
    material += bytes((0, 4 if detailed or pattern else 0)) + b'\0' * 6
    if detailed:
        material += b'\0' * 8
    if detailed or pattern:
        material += struct.pack('<4fI', 0, 0, 1, 1, 4)
    if detailed:
        material += struct.pack('<7I', 0, (constant_alpha << 24) | 0xffffff, *([0xffffffff] * 4), 0)
        material += struct.pack('<III', 3 | (14 << 4) | (14 << 8), 4 | (14 << 4) | (14 << 8) | (alpha_mode << 24),
                                color_selector | (alpha_selector << 4))
    mat = fixtures.section(b'mat1', struct.pack('<II', 1, 16) + material)
    original = fixtures.layout()
    position, parts = 20, []
    while position < len(original):
        size = struct.unpack_from('<I', original, position + 4)[0]
        tag = original[position:position + 4]
        parts.append(txl if tag == b'txl1' else mat if tag == b'mat1' else original[position:position + size])
        position += size
    layout = bytearray(original[:20] + b''.join(parts))
    struct.pack_into('<I', layout, 12, len(layout))
    first, unused = fixtures.image(solid=None if pattern else (15, 0, 0, 15))
    members = [('blyt/own.bflyt', bytes(layout)), ('timg/first.bflim', first)]
    if detailed:
        second, unused = fixtures.image(1, payload=bytes((alpha,)) * 64)
        members.append(('timg/second.bflim', second))
    return fixtures.archive(members)


@unittest.skipUnless(sys.platform == 'win32', 'Native Windows core replay requires Windows')
class AtomicViewTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        build.inputs()
        path, unused = build.core(build.WORK / 'tests/native', ('staging_layout_value', 'stage_material_count'))
        cls.core = ctypes.CDLL(str(path))
        cls.core.component_allocator.argtypes = [ctypes.c_void_p, ctypes.c_int]
        cls.core.component_request.argtypes = [ctypes.c_char_p]
        cls.core.component_complete.argtypes = [ctypes.c_int, ctypes.c_void_p, ctypes.c_int]
        cls.core.component_pixels.restype = ctypes.POINTER(ctypes.c_uint32)

    def setUp(self):
        self.core.component_reset()
        self.arena = ctypes.create_string_buffer(65536)
        self.assertEqual(self.core.component_allocator(self.arena, 65536), 1)
        self.core.component_resume(1)
        self.core.component_surface(0, 1, 1)

    def load(self, data):
        handle = self.core.component_request(b'assets/scene.arc')
        self.assertGreater(handle, 0)
        self.assertEqual(self.core.component_claim(), handle)
        self.assertEqual(self.core.component_complete(handle, data, len(data)), 1)
        return handle

    def scene_state(self):
        result = []
        for view in (0, 1):
            stats = tuple(self.core.component_scene_stat(view, field) for field in range(15))
            geometry = tuple(self.core.component_geometry(view, pane, field) for pane in range(stats[4]) for field in range(10))
            pixels = hashlib.sha256(ctypes.string_at(self.core.component_pixels(view), 320 * 240 * 4)).hexdigest()
            materials = tuple(self.core.component_material(view, index, field) for index in range(self.core.component_material_count(view)) for field in range(80))
            projections = tuple(self.core.component_projection(view, picture, reference, field) for picture in range(stats[5]) for reference in range(2) for field in range(8))
            result.append((stats, geometry, pixels, materials, projections))
        return tuple(result)

    def controls(self):
        return tuple(self.core.component_state(field) for field in range(15))

    def test_late_material_failure_cannot_publish_staged_geometry_or_pixels(self):
        self.load(package())
        self.core.component_surface(1, 7, 1)
        self.core.component_button(11, 1)
        self.core.component_axis(12345, -23456)
        self.assertEqual(self.core.component_touch(1, 320, 240, 80, 60, 1), 1)
        before, controls = self.scene_state(), self.controls()
        data = package(color=(0, 0, 15, 15), x=123, bad_material=True)
        handle = self.core.component_request(b'assets/scene.arc')
        self.assertEqual(self.core.component_claim(), handle)
        self.assertEqual(self.core.component_complete(handle, data, len(data)), -1)
        self.assertEqual(self.core.component_job_status(handle), 4)
        self.assertEqual(self.core.staging_layout_value(0, 0), 123000)
        self.assertNotEqual(self.core.staging_layout_value(0, 0), self.core.component_geometry(0, 0, 0))
        self.assertEqual(self.scene_state(), before)
        self.assertEqual(self.controls(), controls)

    def test_bad_texture_cannot_publish_changed_geometry(self):
        self.load(package())
        before = self.scene_state()
        data = bytearray(package(x=93))
        data[-6] = 255
        handle = self.core.component_request(b'assets/scene.arc')
        self.assertEqual(self.core.component_claim(), handle)
        self.assertEqual(self.core.component_complete(handle, bytes(data), len(data)), -1)
        self.assertEqual(self.scene_state(), before)

    def test_valid_replacement_publishes_both_views_as_one_generation(self):
        self.load(package())
        first = self.scene_state()
        self.load(package(color=(0, 0, 15, 15), x=9))
        second = self.scene_state()
        self.assertNotEqual(first, second)
        self.assertEqual(second[0], second[1])
        self.assertEqual(second[0][0][14], first[0][0][14] + 1)
        self.assertEqual(self.core.component_geometry(0, 0, 0), 9000)
        self.assertEqual(self.core.component_pixels(1)[160], 0xff0000ff)

    def test_pause_cancels_job_and_retains_both_view_scenes(self):
        self.load(package())
        before = self.scene_state()
        handle = self.core.component_request(b'assets/scene.arc')
        self.assertEqual(self.core.component_claim(), handle)
        self.core.component_button(11, 1)
        self.core.component_axis(32000, 32000)
        self.core.component_resume(0)
        self.assertEqual(self.core.component_job_status(handle), 5)
        changed = package(color=(0, 15, 0, 15))
        self.assertEqual(self.core.component_complete(handle, changed, len(changed)), 0)
        self.assertEqual(self.scene_state(), before)
        self.assertEqual([self.core.component_state(i) for i in (5, 6, 7, 10, 11, 12, 13)], [0] * 7)
        self.assertEqual(self.core.component_request(b'assets/scene.arc'), 0)

    def test_newest_request_owns_scene_publication(self):
        old = self.core.component_request(b'assets/old.arc')
        new = self.core.component_request(b'assets/new.arc')
        self.assertEqual(self.core.component_claim(), new)
        self.assertEqual(self.core.component_claim(), old)
        data = package(color=(0, 15, 0, 15))
        self.assertEqual(self.core.component_complete(new, data, len(data)), 1)
        before = self.scene_state()
        data = package()
        self.assertEqual(self.core.component_complete(old, data, len(data)), 0)
        self.assertEqual(self.scene_state(), before)

    def test_secondary_surface_move_stale_close_and_touch_routing(self):
        self.load(package())
        self.core.component_surface(1, 7, 1)
        self.core.component_surface(1, 8, 1)
        self.core.component_surface(1, 7, 0)
        self.assertEqual(self.core.component_state(8), 3)
        self.assertEqual(self.core.component_rect(0, 1, 800, 600, 2), 0)
        self.assertEqual(self.core.component_touch(0, 800, 600, 100, 400, 1), 0)
        self.assertEqual(self.core.component_touch(1, 640, 480, 320, 240, 1), 1)
        self.assertEqual([self.core.component_state(i) for i in (12, 13, 14)], [160, 120, 0])
        before = self.scene_state()
        self.core.component_surface(1, 8, 0)
        self.assertEqual(self.core.component_state(10), 0)
        self.assertEqual(self.core.component_state(14), -1)
        self.assertEqual(self.scene_state(), before)
        self.assertGreater(self.core.component_rect(0, 1, 800, 600, 2), 0)

    def test_primary_clock_ownership_and_surface_loss(self):
        self.load(package())
        self.core.component_surface(1, 1, 1)
        self.assertEqual(self.core.component_step(1, 16666), 0)
        self.assertEqual(self.core.component_step(0, 16666), 1)
        self.core.component_surface(0, 1, 0)
        self.assertEqual(self.core.component_step(0, 16666), 0)
        self.core.component_surface(0, 2, 1)
        self.assertEqual(self.core.component_step(0, 16666), 1)
        self.assertEqual(self.core.component_state(0), 2)

    def test_exact_uniform_texture_reduction_closes_nonidentity_repeat(self):
        self.load(package(repeat=True))
        self.assertEqual(self.core.component_scene_stat(0, 6), 1)
        self.assertEqual(self.core.component_scene_stat(1, 10), 0)
        self.assertEqual(set(self.core.component_pixels(0)[:76800]), {0xffff0000})

    def test_import_without_claim_and_unknown_handle_do_not_publish(self):
        data = package()
        handle = self.core.component_request(b'assets/scene.arc')
        before = self.scene_state()
        self.assertEqual(self.core.component_complete(handle, data, len(data)), 0)
        self.assertEqual(self.core.component_complete(9876543, data, len(data)), 0)
        self.assertEqual(self.scene_state(), before)

    def test_invalid_view_and_geometry_indices_are_bounded(self):
        self.load(package())
        self.assertFalse(self.core.component_pixels(-1))
        self.assertFalse(self.core.component_pixels(2))
        self.assertEqual(self.core.component_geometry(0, 128, 3), 0)
        self.assertEqual(self.core.component_geometry(2, 0, 0), 0)
        self.assertEqual(self.core.component_projection(2, 0, 0, 0), 0)
        self.assertEqual(self.core.component_projection(0, 128, 0, 0), 0)
        self.assertEqual(self.core.component_projection(0, 0, 2, 0), 0)
        self.assertEqual(self.core.component_projection(0, 0, 0, 8), 0)
        self.assertEqual(self.core.component_scene_stat(0, 15), -1)
        self.assertEqual(self.core.component_rect(0, 0, 2147483647, 2147483647, 2), 0)
        self.assertEqual(self.core.component_touch(0, 2147483647, 2147483647, 1, 1, 1), 0)

    def test_detailed_zero_mask_bypasses_automatic_black_alpha_remap(self):
        self.load(material_package(detailed=True, alpha=0))
        self.assertEqual(set(self.core.component_pixels(0)[:76800]), {0xff20242c})
        self.load(material_package(detailed=True, alpha=255))
        self.assertEqual(set(self.core.component_pixels(1)[:76800]), {0xffff0000})

    def test_detailed_selected_constant_modulation_and_replace_control(self):
        self.load(material_package(detailed=True, alpha=128, constant_alpha=128))
        expected_alpha = (128 * 128 + 127) // 255
        expected = 0xff000000 | ((255 * expected_alpha + 32 * (255 - expected_alpha) + 127) // 255 << 16)
        expected |= ((36 * (255 - expected_alpha) + 127) // 255 << 8) | ((44 * (255 - expected_alpha) + 127) // 255)
        self.assertEqual(set(self.core.component_pixels(0)[:76800]), {expected})
        self.load(material_package(detailed=True, alpha=255, alpha_selector=0, alpha_mode=0))
        self.assertEqual(set(self.core.component_pixels(0)[:76800]), {0xffff0000})

    def test_original_qualified_texture_coordinate_projection_repeats_in_texture_pixel_units(self):
        self.load(material_package(pattern=True))
        values = self.core.component_pixels(0)
        self.assertEqual(values[0], 0xff000000)
        self.assertEqual(values[1], 0xff110011)
        self.assertEqual(values[8], values[0])
        self.assertEqual(values[320], 0xff001111)

    def test_unknown_detailed_operation_is_rejected_atomically(self):
        self.load(package())
        before = self.scene_state()
        data = material_package(detailed=True, alpha_mode=2)
        handle = self.core.component_request(b'assets/scene.arc')
        self.assertEqual(self.core.component_claim(), handle)
        self.assertEqual(self.core.component_complete(handle, data, len(data)), -1)
        self.assertEqual(self.scene_state(), before)

    def test_linear_sampler_uses_neighboring_texels(self):
        texture, unused = fixtures.image()
        data = fixtures.archive([('blyt/own.bflyt', fixtures.layout()), ('timg/own.bflim', texture)])
        self.load(data)
        self.assertEqual(self.core.component_pixels(0)[29 * 320 + 39], 0xff080811)


    def test_missing_arena_rejects_import_without_publication(self):
        self.core.component_reset()
        self.core.component_resume(1)
        self.core.component_surface(0, 1, 1)
        before = self.scene_state()
        data = package()
        handle = self.core.component_request(b'assets/scene.arc')
        self.assertEqual(self.core.component_claim(), handle)
        self.assertEqual(self.core.component_complete(handle, data, len(data)), -1)
        self.assertEqual(self.scene_state(), before)

    def test_invalid_or_published_memory_cannot_become_material_arena(self):
        self.load(package())
        before = self.scene_state()
        self.assertEqual(self.core.component_allocator(None, 65536), 0)
        self.assertEqual(self.core.component_allocator(ctypes.addressof(self.arena) + 1, 65535), 0)
        self.assertEqual(self.core.component_allocator(self.core.component_pixels(0), 65536), 0)
        self.assertEqual(self.scene_state(), before)
        self.load(package(color=(0, 0, 15, 15)))
        self.assertEqual(self.core.component_material_count(1), 1)

    def test_archive_aliasing_material_arena_is_rejected_before_writes(self):
        self.load(package())
        before = self.scene_state()
        data = package(color=(0, 0, 15, 15), x=77)
        ctypes.memmove(self.arena, data, len(data))
        arena_before = bytes(self.arena)
        handle = self.core.component_request(b'assets/scene.arc')
        self.assertEqual(self.core.component_claim(), handle)
        self.assertEqual(self.core.component_complete(handle, self.arena, len(data)), -1)
        self.assertEqual(bytes(self.arena), arena_before)
        self.assertEqual(self.scene_state(), before)

    def test_heap_exhaustion_after_first_constructor_preserves_both_views(self):
        self.load(package())
        before = self.scene_state()
        original = fixtures.layout()
        position, parts = 20, []
        while position < len(original):
            length = struct.unpack_from('<I', original, position + 4)[0]
            block = original[position:position + length]
            if block[:4] == b'mat1':
                offset = struct.unpack_from('<I', block, 12)[0]
                wire = block[offset:]
                block = fixtures.section(b'mat1', struct.pack('<III', 2, 20, 20 + len(wire)) + wire + wire)
            parts.append(block)
            position += length
        layout = bytearray(original[:20] + b''.join(parts))
        struct.pack_into('<I', layout, 12, len(layout))
        texture, unused = fixtures.image(solid=(0, 0, 15, 15))
        data = fixtures.archive([('blyt/own.bflyt', bytes(layout)), ('timg/own.bflim', texture)])
        self.assertEqual(self.core.component_allocator(self.arena, 250), 1)
        redzone = bytes(self.arena)[250:]
        handle = self.core.component_request(b'assets/scene.arc')
        self.assertEqual(self.core.component_claim(), handle)
        self.assertEqual(self.core.component_complete(handle, data, len(data)), -1)
        self.assertEqual(self.core.stage_material_count(), 1)
        self.assertEqual(bytes(self.arena)[250:], redzone)
        self.assertEqual(self.scene_state(), before)

    def test_singular_projection_after_constructor_preserves_both_views_and_controls(self):
        self.load(material_package(pattern=True))
        self.core.component_surface(1, 7, 1)
        self.core.component_button(11, 1)
        before, controls = self.scene_state(), self.controls()
        raw = material_package(pattern=True)
        from platform_engine_texture_reference import sarc
        parts = sarc(raw)
        layout = bytearray(parts['blyt/own.bflyt'])
        struct.pack_into('<f', layout, layout.index(b'pic1') + 68, 0.)
        parts['blyt/own.bflyt'] = bytes(layout)
        changed = fixtures.archive(list(parts.items()))
        handle = self.core.component_request(b'assets/scene.arc')
        self.assertEqual(self.core.component_claim(), handle)
        self.assertEqual(self.core.component_complete(handle, changed, len(changed)), -1)
        self.assertEqual(self.core.stage_material_count(), 1)
        self.assertEqual(self.scene_state(), before)
        self.assertEqual(self.controls(), controls)


class AlignmentTests(unittest.TestCase):
    def segments(self, load_end, relro_end):
        return [{'p_type': 'PT_LOAD', 'p_vaddr': 0x10000, 'p_offset': 0, 'p_memsz': load_end - 0x10000,
            'p_align': 16384, 'p_flags': 6}, {'p_type': 'PT_GNU_RELRO', 'p_vaddr': 0x11000,
            'p_offset': 0x1000, 'p_memsz': relro_end - 0x11000, 'p_align': 1, 'p_flags': 4}]

    def test_relro_end_before_writable_data_requires_16k_alignment(self):
        with self.assertRaisesRegex(ValueError, 'following writable'):
            validate_segments(self.segments(0x20000, 0x12000))
        result = validate_segments(self.segments(0x20000, 0x14000))
        self.assertTrue(result['relro'][0]['endAligned16KiB'])
        self.assertTrue(result['relro'][0]['followingWritableDataInSameLoad'])

    def test_relro_without_following_writable_data_is_compliant(self):
        result = validate_segments(self.segments(0x12000, 0x12000))
        self.assertFalse(result['relro'][0]['endAligned16KiB'])
        self.assertFalse(result['relro'][0]['followingWritableDataInSameLoad'])

    def test_native_load_alignment_and_offset_congruence_reject(self):
        segments = self.segments(0x20000, 0x14000)
        segments[0]['p_align'] = 4096
        with self.assertRaisesRegex(ValueError, 'ELF alignment'):
            validate_segments(segments)
        segments[0].update({'p_align': 16384, 'p_offset': 4})
        with self.assertRaisesRegex(ValueError, 'ELF alignment'):
            validate_segments(segments)


if __name__ == '__main__':
    unittest.main()
