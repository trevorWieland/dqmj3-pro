import ctypes
import hashlib
import random
import struct
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import app_shell_build as tools
import platform_engine_wave003 as build
import platform_engine_texture_reference as reference


def image(kind=8, width=8, height=8, swizzle=0, payload=None, solid=None):
    rw, rh = (height, width) if swizzle else (width, height)
    pw, ph = 1 << max(3, (rw - 1).bit_length()), 1 << max(3, (rh - 1).bit_length())
    bits = {1: 8, 8: 16, 10: 4, 11: 8, 13: 4}[kind]
    expected = bytearray(width * height * 4)
    if payload is None:
        payload = bytearray(pw * ph * bits // 8)
        coordinates = [(0, 0)]
        for step in (1, 2, 4):
            coordinates = [(x + dx, y + dy) for dx, dy in ((0, 0), (step, 0), (0, step), (step, step)) for x, y in coordinates]
        for ty in range(ph // 8):
            for tx in range(pw // 8):
                for inner, (ix, iy) in enumerate(coordinates):
                    rx, ry = tx * 8 + ix, ty * 8 + iy
                    if rx >= rw or ry >= rh:
                        continue
                    x, y = (ry, rw - 1 - rx) if swizzle == 4 else (ry, rx) if swizzle == 8 else (rx, ry)
                    index = (ty * (pw // 8) + tx) * 64 + inner
                    if kind == 8:
                        channels = solid or (x % 16, y % 16, (x + y) % 16, 15)
                        value = sum(channels[i] << (12 - i * 4) for i in range(4))
                        struct.pack_into('<H', payload, index * 2, value)
                        rgba = tuple(value * 17 for value in channels)
                    elif kind == 1:
                        payload[index] = (x * 17 + y * 31) & 255
                        rgba = (255, 255, 255, payload[index])
                    else:
                        alpha = (x + y) & 15
                        payload[index // 2] |= alpha << (index % 2 * 4)
                        rgba = (255, 255, 255, alpha * 17)
                    expected[(y * width + x) * 4:(y * width + x + 1) * 4] = bytes(rgba)
    footer = struct.pack('<4sHHIIHH', b'FLIM', 0xfeff, 20, 0x07020100, len(payload) + 40, 1, 0)
    footer += struct.pack('<4sIHHHBBI', b'imag', 16, width, height, 128, kind, swizzle, len(payload))
    return bytes(payload) + footer, bytes(expected)


def section(tag, payload):
    payload += b'\0' * (-len(payload) % 4)
    return tag + struct.pack('<I', len(payload) + 8) + payload


def layout(alpha=255, visible=True, material_flags=0x15, uv=None, tint=255):
    txl = section(b'txl1', struct.pack('<II', 1, 4) + b'own.bflim\0')
    material = b'own\0'.ljust(28, b'\0') + b'\0' * 4 + b'\xff' * 4 + struct.pack('<I', material_flags)
    material += struct.pack('<HBB5f', 0, 4, 4, 0, 0, 0, 1, 1) + b'\0' * 8
    mat = section(b'mat1', struct.pack('<II', 1, 16) + material)
    pane = bytes((1 if visible else 0, 0, alpha, 0)) + b'own\0'.ljust(32, b'\0')
    pane += struct.pack('<10f', 0, 0, 0, 0, 0, 0, 1, 1, 320, 240)
    pane += bytes((tint, 255, 255, 255)) * 4 + struct.pack('<HBB', 0, 1, 0)
    pane += struct.pack('<8f', *(uv or (0, 0, 1, 0, 0, 1, 1, 1)))
    sections = [section(b'lyt1', b'\x01\0\0\0' + struct.pack('<4f', 320, 240, 0, 0)), txl, mat, section(b'pic1', pane)]
    body = b''.join(sections)
    return struct.pack('<4sHHIIHH', b'FLYT', 0xfeff, 20, 0x07020100, len(body) + 20, len(sections), 0) + body


def archive(members):
    names, nodes, payload = bytearray(), [], bytearray()
    for name, data in members:
        encoded = name.encode('ascii')
        key = 0
        for byte in encoded:
            key = (key * 101 + byte) & 0xffffffff
        names.extend(b'\0' * (-len(names) % 4))
        attribute = 0x1000000 + len(names) // 4
        names.extend(encoded + b'\0')
        nodes.append((key, attribute, len(payload), len(payload) + len(data)))
        payload.extend(data)
    table = b''.join(struct.pack('<4I', *node) for node in sorted(nodes))
    prefix = b'SFAT' + struct.pack('<HHI', 12, len(nodes), 101) + table + b'SFNT\x08\0\0\0' + names
    start = 20 + len(prefix)
    return struct.pack('<4sHHIII', b'SARC', 20, 0xfeff, start + len(payload), start, 256) + prefix + payload


def scene(**kwargs):
    texture, unused = image(solid=(15, 0, 0, 15))
    return archive([('blyt/own.bflyt', layout(**kwargs)), ('timg/own.bflim', texture)])


@unittest.skipUnless(sys.platform == 'win32', 'Native Windows component execution requires Windows')
class TextureComponentTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        build.inputs()
        directory = build.WORK / 'tests/native'
        objects = build.objects(directory)
        library = directory / 'textures-under-test.dll'
        tools.run([tools.LINKER, '-flavor', 'link', '/machine:x64', '/dll', '/noentry', '/nodefaultlib', '/timestamp:0',
                   '/out:' + str(library), *['/export:' + name for name in build.EXPORTS], *objects], directory / 'link.json')
        cls.core = ctypes.CDLL(str(library))
        cls.core.texture_info.argtypes = [ctypes.c_void_p, ctypes.c_int, ctypes.c_int]
        cls.core.texture_decode.argtypes = [ctypes.c_void_p, ctypes.c_int, ctypes.c_void_p, ctypes.c_int]
        cls.core.textured_scene_load.argtypes = [ctypes.c_void_p, ctypes.c_int]
        cls.core.textured_scene_pixels.restype = ctypes.POINTER(ctypes.c_uint32)
        cls.oracle = reference.oracle()

    def decode(self, data, count):
        output = (ctypes.c_uint32 * (count + 2))()
        output[0] = output[count + 1] = 0xcafebabe
        result = self.core.texture_decode(data, len(data), ctypes.byref(output, 4), count)
        self.assertEqual((output[0], output[count + 1]), (0xcafebabe, 0xcafebabe))
        rgba = bytes(value for color in output[1:count + 1] for value in (color >> 16 & 255, color >> 8 & 255, color & 255, color >> 24 & 255))
        return result, rgba

    def frame(self):
        return ctypes.string_at(self.core.textured_scene_pixels(), 76800 * 4)

    def test_raw_morton_cropping_and_all_orientations(self):
        for kind in (1, 8, 13):
            for swizzle in (0, 4, 8):
                with self.subTest(kind=kind, swizzle=swizzle):
                    data, expected = image(kind, 13, 9, swizzle)
                    count, actual = self.decode(data, 13 * 9)
                    self.assertEqual(count, 117)
                    self.assertEqual(actual, expected)

    def test_etc1_and_alpha_against_independent_codec(self):
        randomizer = random.Random(0x20261106)
        for kind in (10, 11):
            for swizzle in (0, 4, 8):
                for unused in range(24):
                    payload = bytearray()
                    for block in range(4):
                        while True:
                            value = randomizer.getrandbits(64)
                            if not value & (1 << 33) or all(0 <= ((value >> (shift + 3)) & 31) + (((value >> shift) & 7) if ((value >> shift) & 7) < 4 else ((value >> shift) & 7) - 8) <= 31 for shift in (56, 48, 40)):
                                break
                        if kind == 11:
                            payload.extend(randomizer.getrandbits(64).to_bytes(8, 'little'))
                        payload.extend(value.to_bytes(8, 'little'))
                    data, unused = image(kind, swizzle=swizzle, payload=payload)
                    width, height, expected = reference.decode(data, self.oracle)
                    count, actual = self.decode(data, width * height)
                    self.assertEqual((count, actual), (width * height, expected))

    def test_image_truncation_and_header_mutations(self):
        valid, unused = image()
        for length in range(len(valid)):
            self.assertEqual(self.decode(valid[:length], 64)[0], 0)
        for offset in (0, 4, 6, 8, 12, 16, 20, 24, 28, 30, 32, 34, 35, 36):
            damaged = bytearray(valid)
            damaged[len(valid) - 40 + offset] ^= 0xff
            self.assertEqual(self.decode(bytes(damaged), 64)[0], 0)

    def test_null_capacity_and_bad_differential(self):
        valid, unused = image()
        output = (ctypes.c_uint32 * 64)()
        self.assertEqual(self.core.texture_decode(None, 100, output, 64), 0)
        self.assertEqual(self.core.texture_decode(valid, len(valid), None, 64), 0)
        self.assertEqual(self.core.texture_decode(valid, len(valid), output, 63), 0)
        invalid = ((31 << 59) | (3 << 56) | (1 << 33)).to_bytes(8, 'little') * 4
        data, unused = image(10, payload=invalid)
        self.assertEqual(self.decode(data, 64)[0], 0)

    def test_real_renderer_solid_asset_and_leaf_alpha(self):
        data = scene()
        self.assertEqual(self.core.textured_scene_load(data, len(data)), 1)
        self.assertEqual(set(self.core.textured_scene_pixels()[:76800]), {0xffff0000})
        data = scene(alpha=150, tint=128)
        self.assertEqual(self.core.textured_scene_load(data, len(data)), 1)
        expected = 0xff000000 | ((128 * 150 + 32 * 105 + 127) // 255 << 16) | ((36 * 105 + 127) // 255 << 8) | ((44 * 105 + 127) // 255)
        self.assertEqual(set(self.core.textured_scene_pixels()[:76800]), {expected})

    def test_visibility_and_unsupported_material_scope(self):
        for kwargs, eligible in (({'visible': False}, 1), ({'material_flags': 0x8015}, 0)):
            data = scene(**kwargs)
            self.assertEqual(self.core.textured_scene_load(data, len(data)), 1)
            self.assertEqual(self.core.textured_scene_stat(6), eligible)
            self.assertEqual(self.core.textured_scene_stat(7), 0)
            self.assertEqual(set(self.core.textured_scene_pixels()[:76800]), {0xff20242c})

    def test_uv_flip_and_clamped_sampling(self):
        texture, unused = image()
        data = archive([('blyt/own.bflyt', layout(uv=(1, 0, 0, 0, 1, 1, 0, 1))), ('timg/own.bflim', texture)])
        self.assertEqual(self.core.textured_scene_load(data, len(data)), 1)
        self.assertEqual(self.core.textured_scene_pixels()[0], 0xff770077)
        self.assertEqual(self.core.textured_scene_pixels()[76799], 0xff007777)
        data = archive([('blyt/own.bflyt', layout(uv=(-2, -2, 3, -2, -2, 3, 3, 3))), ('timg/own.bflim', texture)])
        self.assertEqual(self.core.textured_scene_load(data, len(data)), 1)
        self.assertEqual(self.core.textured_scene_pixels()[0], 0xff000000)
        self.assertEqual(self.core.textured_scene_pixels()[76799], 0xff7777ee)

    def test_partial_texture_decode_then_material_failure_is_atomic(self):
        valid = scene()
        self.assertEqual(self.core.textured_scene_load(valid, len(valid)), 1)
        malformed = bytearray(layout())
        material = malformed.index(b'mat1')
        struct.pack_into('<f', malformed, material + 16 + 44, float('nan'))
        blue, unused = image(solid=(0, 0, 15, 15))
        self.assert_atomic_rejection(archive([('blyt/own.bflyt', bytes(malformed)), ('timg/own.bflim', blue)]))
        self.assertEqual(set(self.core.textured_scene_pixels()[:76800]), {0xffff0000})

    def assert_atomic_rejection(self, invalid):
        generation = self.core.textured_scene_stat(14)
        before = hashlib.sha256(self.frame()).hexdigest()
        self.assertEqual(self.core.textured_scene_load(invalid, len(invalid)), 0)
        self.assertEqual(self.core.textured_scene_stat(14), generation)
        self.assertEqual(hashlib.sha256(self.frame()).hexdigest(), before)

    def test_archive_truncation_preserves_previous_frame(self):
        valid = scene()
        self.assertEqual(self.core.textured_scene_load(valid, len(valid)), 1)
        for length in range(len(valid)):
            self.assert_atomic_rejection(valid[:length])

    def test_archive_offset_hash_order_overlap_and_names(self):
        valid = scene()
        self.assertEqual(self.core.textured_scene_load(valid, len(valid)), 1)
        for offset in (0, 4, 6, 8, 12, 16, 20, 24, 26, 32, 36, 40, 44, 64, 68):
            damaged = bytearray(valid)
            damaged[offset] ^= 255
            self.assert_atomic_rejection(bytes(damaged))
        damaged = bytearray(valid)
        damaged[32:48], damaged[48:64] = damaged[48:64], damaged[32:48]
        self.assert_atomic_rejection(bytes(damaged))
        damaged = bytearray(valid)
        damaged[56:64] = damaged[40:48]
        self.assert_atomic_rejection(bytes(damaged))
        texture, unused = image()
        for names in (('blyt/own.bflyt', 'timg/../own.bflim'), ('same', 'same')):
            self.assert_atomic_rejection(archive([(names[0], layout()), (names[1], texture)]))

    def test_missing_dependency_nan_uv_and_material_reference(self):
        valid = scene()
        self.assertEqual(self.core.textured_scene_load(valid, len(valid)), 1)
        texture, unused = image()
        self.assert_atomic_rejection(archive([('blyt/own.bflyt', layout()), ('timg/other.bflim', texture)]))
        self.assert_atomic_rejection(scene(uv=(float('nan'), 0, 1, 0, 0, 1, 1, 1)))
        malformed = bytearray(layout())
        pic = malformed.index(b'pic1')
        struct.pack_into('<H', malformed, pic + 100, 32)
        self.assert_atomic_rejection(archive([('blyt/own.bflyt', bytes(malformed)), ('timg/own.bflim', texture)]))


if __name__ == '__main__':
    unittest.main()
