import ctypes
import hashlib
import json
import shutil
import struct
import sys
import zlib
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import app_shell_build as tools
import platform_engine_wave003 as build
import platform_engine_texture_reference as reference


ROOT, WORK, EVIDENCE = build.ROOT, build.WORK, build.EVIDENCE
ROMFS_PATH = '/data/Layout/NaviMap/A00_00.arc'
ARCHIVE_SHA = 'a56be941dd4e8b4f71abd12141efd47916ebcf50174379cc86735fd78b8a5099'


def sha(data):
    return hashlib.sha256(data).hexdigest()


def extract():
    from pyctr.fileio import SubsectionIO
    from pyctr.type.romfs import RomFSReader
    configuration = json.loads((ROOT / 'project.json').read_text())
    inventory = json.loads((ROOT / 'evidence/inventory/base.json').read_text())
    original = ROOT / configuration['inputs']['base']
    with original.open('rb') as file:
        identity = hashlib.file_digest(file, 'sha256').hexdigest()
    if identity != configuration['baseCiaSha256'] or identity != inventory['sha256']:
        raise ValueError('Owner archive identity differs')
    content = inventory['contents'][0]
    row = next(row for row in content['ncch']['romfsFiles'] if row['path'] == ROMFS_PATH)
    if row['size'] != 157992 or row['sha256'] != ARCHIVE_SHA:
        raise ValueError('Frozen NaviMap archive inventory differs')
    with original.open('rb') as file:
        file.seek(content['offset'])
        header = file.read(512)
        if header[0x100:0x104] != b'NCCH' or not header[0x18f] & 4:
            raise ValueError('NCCH identity/crypto mapping differs')
        start, units = struct.unpack_from('<II', header, 0x1b0)
        if (start + units) * 512 > content['size']:
            raise ValueError('RomFS exceeds measured NCCH')
        reader = RomFSReader(SubsectionIO(file, content['offset'] + start * 512, units * 512), closefd=False, case_insensitive=False)
        with reader.open(ROMFS_PATH) as member:
            data = member.read(row['size'] + 1)
    if len(data) != row['size'] or sha(data) != ARCHIVE_SHA:
        raise ValueError('Extracted archive differs')
    target = WORK / 'private/NaviMap.arc'
    target.parent.mkdir(parents=True, exist_ok=True)
    if target.exists() and target.read_bytes() != data:
        raise ValueError('Existing private extraction differs; preserved for review')
    target.write_bytes(data)
    return data, {'ownerCiaSha256': identity, 'romfsPath': ROMFS_PATH, 'archiveSha256': ARCHIVE_SHA, 'archiveBytes': len(data)}


def library():
    result = ctypes.CDLL(str(WORK / 'windows/dqm_textures.dll'))
    result.texture_info.argtypes = [ctypes.c_void_p, ctypes.c_int, ctypes.c_int]
    result.texture_decode.argtypes = [ctypes.c_void_p, ctypes.c_int, ctypes.c_void_p, ctypes.c_int]
    result.textured_scene_load.argtypes = [ctypes.c_void_p, ctypes.c_int]
    result.textured_scene_pixels.restype = ctypes.POINTER(ctypes.c_uint32)
    return result


def png(path, width, height, rgba):
    def chunk(name, payload):
        return struct.pack('>I', len(payload)) + name + payload + struct.pack('>I', zlib.crc32(name + payload))
    scanlines = b''.join(b'\0' + rgba[y * width * 4:(y + 1) * width * 4] for y in range(height))
    path.write_bytes(b'\x89PNG\r\n\x1a\n' + chunk(b'IHDR', struct.pack('>IIBBBBB', width, height, 8, 6, 0, 0, 0)) + chunk(b'IDAT', zlib.compress(scanlines)) + chunk(b'IEND', b''))


def rgba(values):
    return bytes(channel for value in values for channel in (value >> 16 & 255, value >> 8 & 255, value & 255, value >> 24 & 255))


def textures(core, members):
    decoder = reference.oracle()
    rows = []
    for name, data in members.items():
        if not name.startswith('timg/'):
            continue
        width, height, expected = reference.decode(data, decoder)
        output = (ctypes.c_uint32 * (width * height))()
        count = core.texture_decode(data, len(data), output, len(output))
        actual = rgba(output)
        if count != len(output) or actual != expected:
            raise ValueError('Native texture differs from independent oracle: ' + sha(name.encode()))
        rows.append({'memberPathSha256': sha(name.encode()), 'encodedSha256': sha(data), 'encodedBytes': len(data),
                     'width': width, 'height': height, 'formatId': core.texture_info(data, len(data), 2),
                     'swizzle': core.texture_info(data, len(data), 3), 'unaddressedEncodedBytes': core.texture_info(data, len(data), 7),
                     'decodedRgbaSha256': sha(actual), 'comparedPixels': len(output), 'differingRgbaBytes': 0})
    return rows


def bindings(layout, members):
    result, policies, position, materials, pictures = [], [], 20, 0, 0
    while position < len(layout):
        tag, size = layout[position:position + 4], struct.unpack_from('<I', layout, position + 4)[0]
        if tag == b'txl1':
            count = struct.unpack_from('<I', layout, position + 8)[0]
            for i in range(count):
                start = position + 12 + struct.unpack_from('<I', layout, position + 12 + i * 4)[0]
                name = layout[start:layout.index(0, start, position + size)].decode('ascii')
                path = 'timg/' + name
                if path not in members:
                    raise ValueError('Unresolved layout texture dependency')
                result.append({'textureIndex': i, 'memberPathSha256': sha(path.encode()), 'encodedSha256': sha(members[path])})
        if tag == b'mat1':
            materials = struct.unpack_from('<I', layout, position + 8)[0]
            for i in range(materials):
                offset = struct.unpack_from('<I', layout, position + 12 + i * 4)[0]
                end = struct.unpack_from('<I', layout, position + 16 + i * 4)[0] if i + 1 < materials else size
                flags = struct.unpack_from('<I', layout, position + offset + 36)[0]
                refs = flags & 3
                supported = flags == 0x15 and end - offset == 72
                supported = supported and layout[position + offset + 42:position + offset + 44] == b'\x04\x04'
                supported = supported and struct.unpack_from('<5f', layout, position + offset + 44) == (0, 0, 0, 1, 1)
                supported = supported and not any(layout[position + offset + 64:position + offset + 72])
                reason = 'static-single-texture-identity-uv' if supported else 'no-texture' if not refs else 'projection-or-multitexture' if refs > 1 or flags & 0x18000 else 'nonidentity-transform-or-sampler'
                policies.append({'materialIndex': i, 'previewSupported': bool(supported), 'classification': reason})
        pictures += tag == b'pic1'
        position += size
    return {'textureReferences': result, 'unresolvedTextureReferences': 0, 'materials': materials, 'pictures': pictures,
            'materialPreviewPolicies': policies, 'supportedMaterials': sum(row['previewSupported'] for row in policies)}


def native(core, data):
    if core.textured_scene_load(data, len(data)) != 1:
        raise ValueError('Native textured scene rejected measured archive')
    statistics = [core.textured_scene_stat(i) for i in range(15)]
    if statistics[:14] != [320, 240, 10, 12, 35, 17, 13, 13, 6, 128, 4, 1, 18, 277465]:
        raise ValueError('Native measured scope differs')
    frame = rgba(core.textured_scene_pixels()[:320 * 240])
    png(WORK / 'private/textured-layout.png', 320, 240, frame)
    rgb = bytes(frame[i] for i in range(len(frame)) if i % 4 != 3)
    checksum = 2166136261
    for value in rgb:
        checksum = (checksum ^ value) * 16777619 & 0xffffffff
    private = WORK / 'private/windows'
    (private / 'assets').mkdir(parents=True, exist_ok=True)
    executable = private / 'dqm_texture_components.exe'
    shutil.copyfile(WORK / 'windows/dqm_texture_components.exe', executable)
    (private / 'assets/scene.arc').write_bytes(data)
    positive = json.loads(tools.run([executable, '--headless'], private / 'native-positive.json'))
    negative = json.loads(tools.run([executable, '--headless', '--negative-archive'], private / 'native-negative.json'))
    if positive.get('status') != 'measured-textures-rendered' or positive.get('rgbFnv32') != checksum or not positive.get('gdiPixelsEqual') or negative.get('status') != 'rejected-corrupt-archive':
        raise ValueError('Native Windows private asset execution failed')
    return {'width': 320, 'height': 240, 'textures': statistics[2], 'archiveMembers': statistics[3], 'panes': statistics[4],
            'pictures': statistics[5], 'eligiblePictures': statistics[6], 'drawnPictures': statistics[7], 'unsupportedMaterials': statistics[8],
            'unaddressedEncodedBytes': statistics[9], 'skippedPictures': statistics[10], 'ignoredAnimationMembers': statistics[11],
            'nonPicturePanes': statistics[12], 'decodedPixels': statistics[13], 'frameRgbaSha256': sha(frame),
            'nativeWindows': positive, 'corruptArchiveControl': negative, 'originalRenderEquivalenceClaim': False}


def main():
    build.inputs()
    data, identity = extract()
    members = reference.sarc(data)
    layouts = [data for data in members.values() if data.startswith(b'FLYT')]
    if len(layouts) != 1:
        raise ValueError('Expected exactly one measured layout')
    core = library()
    rows = textures(core, members)
    report = {'schemaVersion': 1, 'status': 'measured-textured-component', 'identity': identity,
              'layoutSha256': sha(layouts[0]), 'bindings': bindings(layouts[0], members), 'textures': rows,
              'native': native(core, data), 'oracle': json.loads((build.SOURCE / 'oracle-inputs.json').read_text()),
              'comparedTexturePixels': sum(row['comparedPixels'] for row in rows), 'differingTextureRgbaBytes': 0,
              'originalPayloadsPublished': False, 'deviceExecution': False, 'nativeGameBuild': False, 'recoveredSourceCreditBytes': 0}
    EVIDENCE.mkdir(parents=True, exist_ok=True)
    (EVIDENCE / 'measured-textures.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'textureCount': len(rows), 'comparedPixels': report['comparedTexturePixels'],
                      'drawnPictures': report['native']['drawnPictures'], 'gameBuild': False}))


if __name__ == '__main__':
    main()
