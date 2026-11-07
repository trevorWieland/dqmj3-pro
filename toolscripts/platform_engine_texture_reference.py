import hashlib
import importlib
import json
import struct
import sys
import urllib.request
import zipfile
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/platform-engine-wave003'


def oracle():
    lock = json.loads((ROOT / 'platform/engine-wave003/oracle-inputs.json').read_text())
    directory = WORK / 'oracle'
    directory.mkdir(parents=True, exist_ok=True)
    wheel = directory / lock['filename']
    if not wheel.exists():
        urllib.request.urlretrieve(lock['url'], wheel)
    if hashlib.sha256(wheel.read_bytes()).hexdigest() != lock['sha256']:
        raise ValueError('Independent oracle wheel differs from pinned identity')
    site = directory / 'site'
    with zipfile.ZipFile(wheel) as archive:
        for row in archive.infolist():
            target = (site / row.filename).resolve()
            if not target.is_relative_to(site.resolve()):
                raise ValueError('Unsafe wheel member')
            if row.is_dir():
                target.mkdir(parents=True, exist_ok=True)
                continue
            content = archive.read(row)
            if target.exists() and target.read_bytes() != content:
                raise ValueError('Existing oracle extraction differs; preserved for review')
            if not target.exists():
                target.parent.mkdir(parents=True, exist_ok=True)
                target.write_bytes(content)
    sys.path.insert(0, str(site))
    module = importlib.import_module('texture2ddecoder')
    native = importlib.import_module(module.decode_etc1.__module__)
    with zipfile.ZipFile(wheel) as archive:
        for loaded in (module, native):
            path = Path(loaded.__file__).resolve()
            if not path.is_relative_to(site.resolve()) or path.read_bytes() != archive.read(path.relative_to(site.resolve()).as_posix()):
                raise ValueError('Effective independent oracle module differs from verified wheel')
    if hashlib.sha256(Path(native.__file__).read_bytes()).hexdigest() != lock['nativeModuleSha256']:
        raise ValueError('Effective independent oracle native module identity differs')
    return module


def sarc(data):
    if len(data) < 40 or data[:8] != b'SARC\x14\x00\xff\xfe' or struct.unpack_from('<I', data, 8)[0] != len(data):
        raise ValueError('Invalid archive header')
    start = struct.unpack_from('<I', data, 12)[0]
    count = struct.unpack_from('<H', data, 26)[0]
    if not 1 <= count <= 64 or data[20:26] != b'SFAT\x0c\x00' or not 40 + 16 * count <= start <= len(data):
        raise ValueError('Invalid archive table')
    names = 40 + 16 * count
    if data[names - 8:names] != b'SFNT\x08\x00\x00\x00':
        raise ValueError('Invalid archive names')
    result = {}
    for i in range(count):
        key, attribute, begin, end = struct.unpack_from('<4I', data, 32 + i * 16)
        name_start = names + (attribute & 0xffffff) * 4
        if attribute >> 24 != 1 or not names <= name_start < start or not 0 <= begin <= end <= len(data) - start:
            raise ValueError('Invalid archive member')
        name_end = data.index(0, name_start, start)
        name = data[name_start:name_end].decode('ascii')
        if len(name) > 127 or name in result or any(part in ('', '.', '..') for part in name.split('/')) or '\\' in name or ':' in name:
            raise ValueError('Unsafe or duplicate archive name')
        result[name] = data[start + begin:start + end]
    return result


def decode(data, decoder):
    if data[-40:-36] != b'FLIM' or data[-20:-16] != b'imag':
        raise ValueError('Invalid image magic')
    width, height, alignment, kind, swizzle, size = struct.unpack_from('<HHHBBI', data, len(data) - 12)
    if alignment != 128 or size != len(data) - 40 or kind not in (1, 8, 10, 11, 13) or swizzle not in (0, 4, 8):
        raise ValueError('Unsupported image descriptor')
    rw, rh = (height, width) if swizzle else (width, height)
    padded_width = 1 << max(3, (rw - 1).bit_length())
    padded_height = 1 << max(3, (rh - 1).bit_length())
    raw = bytearray(rw * rh * 4)
    if kind in (10, 11):
        block_size = 16 if kind == 11 else 8
        for by in range(0, padded_height, 4):
            for bx in range(0, padded_width, 4):
                tile = by // 8 * (padded_width // 8) + bx // 8
                offset = (tile * 4 + (by % 8 // 4) * 2 + bx % 8 // 4) * block_size
                color_start = offset + (8 if kind == 11 else 0)
                block = decoder.decode_etc1(data[color_start:color_start + 8][::-1], 4, 4)
                alpha = int.from_bytes(data[offset:offset + 8], 'little') if kind == 11 else (1 << 64) - 1
                for y in range(4):
                    for x in range(4):
                        if bx + x < rw and by + y < rh:
                            p = (y * 4 + x) * 4
                            target = ((by + y) * rw + bx + x) * 4
                            raw[target:target + 4] = bytes((block[p + 2], block[p + 1], block[p], (alpha >> (4 * (x * 4 + y)) & 15) * 17))
    else:
        for pixel in range(padded_width * padded_height):
            tile, inner = divmod(pixel, 64)
            x = tile % (padded_width // 8) * 8 + sum(((inner >> (2 * bit)) & 1) << bit for bit in range(3))
            y = tile // (padded_width // 8) * 8 + sum(((inner >> (2 * bit + 1)) & 1) << bit for bit in range(3))
            if x >= rw or y >= rh:
                continue
            if kind == 1:
                color = (255, 255, 255, data[pixel])
            elif kind == 13:
                color = (255, 255, 255, (data[pixel // 2] >> ((pixel & 1) * 4) & 15) * 17)
            else:
                value = struct.unpack_from('<H', data, pixel * 2)[0]
                color = tuple((value >> shift & 15) * 17 for shift in (12, 8, 4, 0))
            raw[(y * rw + x) * 4:(y * rw + x + 1) * 4] = bytes(color)
    result = bytearray(width * height * 4)
    for y in range(rh):
        for x in range(rw):
            dx, dy = (y, rw - 1 - x) if swizzle == 4 else (y, x) if swizzle == 8 else (x, y)
            result[(dy * width + dx) * 4:(dy * width + dx + 1) * 4] = raw[(y * rw + x) * 4:(y * rw + x + 1) * 4]
    return width, height, bytes(result)
