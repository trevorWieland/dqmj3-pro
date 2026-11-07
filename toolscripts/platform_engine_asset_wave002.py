import ctypes
import hashlib
import io
import json
import math
import shutil
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import platform_engine_wave002 as build

ROOT = build.ROOT
WORK = build.WORK
SOURCE_PATH = '/data/Layout/NaviMap/A00_00.arc'
MEMBER_SHA = 'd7e649606472a4e8fe2d006adb41cf33737d38a8b041507c4d21258589bb2d96'


def extract():
    from pyctr.fileio import SubsectionIO
    from pyctr.type.romfs import RomFSReader
    sys.path.insert(0, str(ROOT / 'src/inventory-wave003'))
    import containers
    metadata = json.loads((ROOT / 'evidence/inventory/base.json').read_text())
    configuration = json.loads((ROOT / 'project.json').read_text())
    cia = ROOT / configuration['inputs']['base']
    if build.tools.sha(cia) != configuration['baseCiaSha256'] or metadata['sha256'] != configuration['baseCiaSha256']:
        raise ValueError('Measured owner base CIA identity mismatch')
    content = metadata['contents'][0]
    row = next(row for row in content['ncch']['romfsFiles'] if row['path'] == SOURCE_PATH)
    with cia.open('rb') as original:
        original.seek(content['offset'])
        header = original.read(512)
        if header[0x100:0x104] != b'NCCH' or not header[0x18f] & 4:
            raise ValueError('Measured NCCH header/crypto mapping changed')
        start, units = struct.unpack_from('<II', header, 0x1b0)
        if (start + units) * 512 > content['size']:
            raise ValueError('RomFS mapping exceeds measured NCCH')
        reader = RomFSReader(SubsectionIO(original, content['offset'] + start * 512, units * 512), closefd=False, case_insensitive=False)
        with reader.open(SOURCE_PATH) as file:
            archive = file.read(row['size'] + 1)
        if len(archive) != row['size'] or hashlib.sha256(archive).hexdigest() != row['sha256']:
            raise ValueError('Original scene container differs from frozen file inventory')
    members = containers.sarc(io.BytesIO(archive), len(archive))
    member = members['rows'][0]
    data = archive[member['offset']:member['offset'] + member['size']]
    if len(data) != 6552 or hashlib.sha256(data).hexdigest() != MEMBER_SHA:
        raise ValueError('Selected private layout member changed')
    target = WORK / 'private/measured-layout.bflyt'
    target.parent.mkdir(parents=True, exist_ok=True)
    if target.exists() and target.read_bytes() != data:
        raise ValueError('Existing private layout copy differs; preserved for review')
    target.write_bytes(data)
    return target, {'ownerCiaSha256': configuration['baseCiaSha256'], 'romfsPath': SOURCE_PATH,
                    'containerSha256': row['sha256'], 'containerBytes': len(archive), 'memberIndex': 0,
                    'memberSha256': MEMBER_SHA, 'memberBytes': len(data)}


def reference_geometry(data):
    if data[:8] != b'FLYT\xff\xfe\x14\x00' or struct.unpack_from('<I', data, 8)[0] != 0x07020100:
        raise ValueError('Reference supports measured FLYT7.2.1 little-endian only')
    if struct.unpack_from('<I', data, 12)[0] != len(data):
        raise ValueError('Reference layout extent invalid')
    position, panes, stack, last = 20, [], [], None
    width = height = None
    sections = struct.unpack_from('<H', data, 16)[0]
    for unused in range(sections):
        tag, length = data[position:position + 4], struct.unpack_from('<I', data, position + 4)[0]
        if length < 8 or length % 4 or position + length > len(data):
            raise ValueError('Reference section exceeds file')
        if tag == b'lyt1':
            width, height = struct.unpack_from('<ff', data, position + 12)
        elif tag == b'pas1': stack.append(last)
        elif tag == b'pae1': stack.pop()
        elif tag in (b'pan1', b'pic1', b'txt1', b'prt1', b'bnd1', b'wnd1'):
            values = struct.unpack_from('<10f', data, position + 44)
            x, y, z, rx, ry, rz, sx, sy, w, h = values
            if data[position + 9] or z or rx or ry:
                raise ValueError('Reference layout outside measured planar/origin subset')
            sine, cosine = math.sin(math.radians(rz)), math.cos(math.radians(rz))
            local = [cosine * sx, -sine * sy, sine * sx, cosine * sy, x, y]
            parent = stack[-1] if stack else None
            if parent is not None:
                p = panes[parent]['matrix']
                a, b, c, d, e, f = local
                local = [p[0] * a + p[1] * c, p[0] * b + p[1] * d, p[2] * a + p[3] * c,
                         p[2] * b + p[3] * d, p[0] * e + p[1] * f + p[4], p[2] * e + p[3] * f + p[5]]
            points = []
            for xx, yy in [(-w / 2, h / 2), (w / 2, h / 2), (w / 2, -h / 2), (-w / 2, -h / 2)]:
                points.extend([local[0] * xx + local[1] * yy + local[4] + width / 2,
                               height / 2 - (local[2] * xx + local[3] * yy + local[5])])
            visible = bool(data[position + 8] & 1) and data[position + 10] != 0 and (parent is None or panes[parent]['visible'])
            panes.append({'matrix': local, 'points': points, 'visible': visible})
            last = len(panes) - 1
        position += length
    if stack or position != len(data):
        raise ValueError('Reference hierarchy/section conservation failed')
    return panes


def validate_native(path):
    library = WORK / 'build/windows/dqm_engine_core.dll'
    core = ctypes.CDLL(str(library))
    core.engine_layout_load.argtypes = [ctypes.POINTER(ctypes.c_ubyte), ctypes.c_int]
    data = path.read_bytes()
    buffer = (ctypes.c_ubyte * len(data)).from_buffer_copy(data)
    core.engine_reset()
    if core.engine_layout_load(buffer, len(data)) != 1:
        raise ValueError('Native parser rejected measured scene layout')
    reference = reference_geometry(data)
    if core.engine_layout_count() != len(reference) or len(reference) != 35:
        raise ValueError('Native/reference pane census mismatch')
    maximum = 0.0
    serialized = bytearray()
    for index, pane in enumerate(reference):
        if bool(core.engine_layout_value(index, 9)) != bool(pane['visible']):
            raise ValueError('Native/reference inherited visibility mismatch')
        for field, expected in enumerate(pane['points']):
            actual = core.engine_layout_value(index, field)
            maximum = max(maximum, abs(actual / 1000.0 - expected))
            serialized.extend(struct.pack('<i', actual))
    if maximum > 0.01:
        raise ValueError('Native layout transforms exceed independent reference tolerance')
    malformed = bytearray(data)
    struct.pack_into('<I', malformed, 12, len(data) + 4)
    invalid = (ctypes.c_ubyte * len(malformed)).from_buffer_copy(malformed)
    if core.engine_layout_load(invalid, len(malformed)) != 0 or core.engine_layout_count() != 35:
        raise ValueError('Malformed original-header control was not rejected atomically')
    result = {'paneCount': len(reference), 'visiblePaneCount': sum(pane['visible'] for pane in reference),
              'geometryScalarCountCompared': len(reference) * 8, 'maximumPixelError': maximum,
              'nativeGeometrySha256': hashlib.sha256(serialized).hexdigest(), 'malformedOriginalHeaderRejected': True,
              'reference': 'independent Python double-precision matrix/trigonometric evaluation'}
    import _ctypes
    _ctypes.FreeLibrary(core._handle)
    return result


def main():
    path, identity = extract()
    geometry = validate_native(path)
    private_run = WORK / 'private/windows'
    destination = private_run / 'assets/layouts/measured.bflyt'
    destination.parent.mkdir(parents=True, exist_ok=True)
    shutil.copyfile(path, destination)
    executable = private_run / 'dqm_portable_engine.exe'
    shutil.copyfile(WORK / 'build/windows/dqm_portable_engine.exe', executable)
    executed = json.loads(build.tools.run([executable, '--headless', '--measured-layout'], WORK / 'private/measured-native-execution.json'))
    if executed['status'] != 'measured-layout-rendered' or not executed['gdiOffscreenRendered']:
        raise ValueError('Actual game-derived native layout render path failed')
    report = {'schemaVersion': 1, 'status': 'measured-game-layout-native-parser-and-render-passed',
              'producer': build.tools.pin(Path(__file__)), 'inputIdentity': identity, 'geometryComparison': geometry,
              'nativeLibrary': build.tools.pin(WORK / 'build/windows/dqm_engine_core.dll'),
              'nativeExecutable': build.tools.pin(executable),
              'layoutParser': build.tools.pin(build.SOURCE / 'layout.c'),
              'androidPackage': build.tools.pin(WORK / 'build/android/package/dqm-portable-engine-components.apk'),
              'nativeWindows': executed, 'originalPayloadsExportedToPublicTree': False,
              'originalPayloadsRemainUnderIgnoredPrivateWork': True,
              'androidLayoutParserAndCanvasPathPackaged': True, 'androidOriginalAssetPackaged': False,
              'androidDeviceExecuted': False, 'gameplayExecuted': False, 'acceptedRecoveredSourceCredit': 0,
              'limits': ['Static planar, centered-origin FLYT7.2.1 pane geometry only',
                         'Textures, fonts, material behavior, parts expansion and animations are not rendered',
                         'Private measured layout must be supplied separately to Android application files',
                         'A native wireframe of a real map UI asset is not a running DQMJ3 game']}
    build.tools.save(build.EVIDENCE / 'measured-layout.json', report)
    print(json.dumps({'status': report['status'], 'panes': geometry['paneCount'], 'maxPixelError': geometry['maximumPixelError'],
                      'nativeGdiOffscreenRendered': True, 'fullGameBuild': False}))


if __name__ == '__main__':
    main()
