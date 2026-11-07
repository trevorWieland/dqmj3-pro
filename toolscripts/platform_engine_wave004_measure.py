import ctypes
import hashlib
import json
import shutil
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import app_shell_build as tools
import platform_engine_wave004 as build
from platform_engine_wave003_measure import rgba, png

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
    result = ctypes.CDLL(str(WORK / 'windows/dqm_atomic_views.dll'))
    result.component_request.argtypes = [ctypes.c_char_p]
    result.component_complete.argtypes = [ctypes.c_int, ctypes.c_void_p, ctypes.c_int]
    result.component_pixels.restype = ctypes.POINTER(ctypes.c_uint32)
    try:
        getattr(result, 'staging_layout_value')
    except AttributeError:
        pass
    else:
        raise ValueError('Private parser is exported by production Windows component')
    return result


def load(core, data):
    handle = core.component_request(b'assets/scene.arc')
    if not handle or core.component_claim() != handle:
        raise ValueError('Recovered resource stack request/claim failed')
    return core.component_complete(handle, data, len(data))


def snapshot(core):
    rows = []
    for view in (0, 1):
        statistics = [core.component_scene_stat(view, field) for field in range(15)]
        geometry = [core.component_geometry(view, pane, field) for pane in range(statistics[4]) for field in range(10)]
        frame = rgba(core.component_pixels(view)[:320 * 240])
        rows.append({'statistics': statistics, 'geometrySha256': sha(struct.pack('<' + 'i' * len(geometry), *geometry)),
                     'frameRgbaSha256': sha(frame)})
    return rows


def main():
    import platform_engine_material_reference as original
    build.inputs()
    archive, identity = extract()
    original.main()
    core = library()
    core.component_reset(); core.component_resume(1); core.component_surface(0, 1, 1)
    if load(core, archive) != 1:
        raise ValueError('Measured material scene rejected')
    before = snapshot(core)
    expected = [320, 240, 10, 12, 35, 17, 17, 17, 2, 128, 0, 1, 18, 277465, 1]
    if before[0] != before[1] or before[0]['statistics'] != expected:
        raise ValueError('Measured full-picture material scope or atomic view snapshot differs')
    png(WORK / 'private/atomic-material-view.png', 320, 240, rgba(core.component_pixels(0)[:76800]))
    private = WORK / 'private/windows'
    (private / 'assets').mkdir(parents=True, exist_ok=True)
    executable = private / 'dqm_atomic_material_views.exe'
    shutil.copyfile(WORK / 'windows/dqm_atomic_material_views.exe', executable)
    (private / 'assets/scene.arc').write_bytes(archive)
    positive = json.loads(tools.run([executable, '--headless'], private / 'native-positive.json'))
    negative = json.loads(tools.run([executable, '--headless', '--negative-import'], private / 'native-negative.json'))
    if positive.get('status') != 'measured-atomic-dual-view-rendered' or positive.get('pictures') != 17 or positive.get('skippedPictures') or not positive.get('gdiPixelsEqual') or positive.get('verifiedGdiPixels') != 192000:
        raise ValueError('Native dual-view GDI execution differs')
    if negative.get('status') != 'late-material-rejection-preserves-both-views' or not negative.get('geometryAndPixelsPreserved'):
        raise ValueError('Native late-import transaction control failed')
    core.component_surface(1, 8, 1)
    if core.component_touch(1, 640, 480, 320, 240, 1) != 1:
        raise ValueError('Measured secondary-view touch route failed')
    control = [core.component_state(field) for field in (12, 13, 14)]
    handle = core.component_request(b'assets/scene.arc')
    if core.component_claim() != handle:
        raise ValueError('Pause control resource claim failed')
    core.component_resume(0)
    if core.component_complete(handle, archive, len(archive)) != 0 or snapshot(core) != before:
        raise ValueError('Paused stale import changed either published scene')
    report = {'schemaVersion': 1, 'status': 'measured-atomic-all-picture-materials', 'identity': identity,
              'viewSnapshots': before, 'nativeWindows': positive, 'lateBadMaterialControl': negative,
              'secondaryTouch': {'logicalX': control[0], 'logicalY': control[1], 'hitPicturePane': control[2], 'surfaceEventsSimulated': True},
              'pauseDropsStaleCompletion': True, 'privateStageExportedByProduction': False,
              'pictureCasesHandled': 17, 'skippedPictureCases': 0, 'nonPictureFontMaterialsNotRendered': 2,
              'nonPicturePanesNotRendered': 18, 'animationMembersNotApplied': 1, 'unaddressedImageStorageBytes': 128,
              'scope': 'Static owner NaviMap picture/material profile, mirrored into two integration views; no upper game scene',
              'originalGpuHardwarePixelComparison': False, 'androidDeviceExecution': False, 'nativeGameBuild': False,
              'originalPayloadsPublished': False, 'recoveredSourceCreditBytes': 0}
    EVIDENCE.mkdir(parents=True, exist_ok=True)
    (EVIDENCE / 'measured-materials.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'pictureCasesHandled': 17, 'nativeGdiPixelsVerified': 192000, 'gameBuild': False}))


if __name__ == '__main__':
    main()


