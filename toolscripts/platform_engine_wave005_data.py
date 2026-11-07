import importlib
import json
import struct
import sys
import urllib.request
import zipfile

import platform_engine_wave005 as build
from platform_engine_texture_reference import sarc, decode
from native_material_wave011_fixtures import archive_bytes


ROOT, WORK = build.ROOT, build.WORK


def dependencies():
    lock = json.loads((build.SOURCE / 'oracle-inputs.json').read_text())
    site = WORK / 'oracle/site'
    metadata = []
    for name in ['numpy', 'texture']:
        row = lock[name]
        wheel = WORK / 'oracle' / row['filename']
        wheel.parent.mkdir(parents=True, exist_ok=True)
        if not wheel.exists():
            urllib.request.urlretrieve(row['url'], wheel)
        if build.tools.sha(wheel) != row['sha256']:
            raise ValueError('Independent reference wheel identity differs')
        with zipfile.ZipFile(wheel) as archive:
            for member in archive.infolist():
                path = (site / member.filename).resolve()
                if not path.is_relative_to(site.resolve()):
                    raise ValueError('Unsafe oracle wheel path')
                if member.is_dir():
                    path.mkdir(parents=True, exist_ok=True)
                else:
                    data = archive.read(member)
                    if path.exists() and path.read_bytes() != data:
                        raise ValueError('Existing oracle extraction differs; preserved')
                    path.parent.mkdir(parents=True, exist_ok=True)
                    if not path.exists():
                        path.write_bytes(data)
        metadata.append(build.tools.pin(wheel))
    sys.path.insert(0, str(site))
    numpy, texture = importlib.import_module('numpy'), importlib.import_module('texture2ddecoder')
    modules = [numpy, importlib.import_module('numpy._core._multiarray_umath'),
        importlib.import_module('numpy.linalg._umath_linalg'), texture, importlib.import_module(texture.decode_etc1.__module__)]
    for module in modules:
        if not __import__('pathlib').Path(module.__file__).resolve().is_relative_to(site.resolve()):
            raise ValueError('Independent reference module loaded outside pinned local environment')
        metadata.append(build.tools.pin(__import__('pathlib').Path(module.__file__).resolve()))
    return numpy, texture, metadata


def owner():
    archive = archive_bytes()
    private = WORK / 'private'
    private.mkdir(parents=True, exist_ok=True)
    (private / 'NaviMap.arc').write_bytes(archive)
    members = sarc(archive)
    layout = next(data for data in members.values() if data.startswith(b'FLYT'))
    sections, position = [], 20
    while position < len(layout):
        length = struct.unpack_from('<I', layout, position + 4)[0]
        if length < 8 or position + length > len(layout):
            raise ValueError('Owner layout section exceeds file')
        sections.append((layout[position:position + 4], layout[position:position + length]))
        position += length
    table = next(data for tag, data in sections if tag == b'txl1')
    count = struct.unpack_from('<I', table, 8)[0]
    names, resources, textures = [], [], []
    for index in range(count):
        start = 12 + struct.unpack_from('<I', table, 12 + index * 4)[0]
        name = table[start:table.index(0, start)].decode('ascii')
        candidates = [value for path, value in members.items() if path == name or path == 'timg/' + name]
        if len(candidates) != 1:
            raise ValueError('Owner texture binding is not unique')
        data = candidates[0]
        width, height, alignment, kind, orientation, size = struct.unpack_from('<HHHBBI', data, len(data) - 12)
        names.append(name)
        resources.append(struct.pack('<IHHBBHHHI', index + 1, width, height, kind, 0, 0, width, height, 0))
        textures.append(data)
    material = next(data for tag, data in sections if tag == b'mat1')
    count = struct.unpack_from('<I', material, 8)[0]
    offsets = [struct.unpack_from('<I', material, 12 + index * 4)[0] for index in range(count)] + [len(material)]
    wires = [material[begin:end] for begin, end in zip(offsets, offsets[1:])]
    return {'archive': archive, 'layout': layout, 'sections': sections, 'names': names, 'nameTable': table,
        'resources': resources, 'textures': textures, 'wires': wires}


def decoded_textures(owner_data, np, decoder):
    result = []
    for data in owner_data['textures']:
        width, height, rgba = decode(data, decoder)
        result.append(np.frombuffer(rgba, dtype=np.uint8).reshape(height, width, 4).copy())
    return result
