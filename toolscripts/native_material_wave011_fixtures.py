import json
import random
import struct

from native_material_wave011_build import ROOT, WORK, sha


ARCHIVE_SHA = 'a56be941dd4e8b4f71abd12141efd47916ebcf50174379cc86735fd78b8a5099'


def archive_bytes():
    path = WORK / 'private/NaviMap.arc'
    if not path.exists():
        import hashlib
        from pyctr.fileio import SubsectionIO
        from pyctr.type.romfs import RomFSReader
        configuration = json.loads((ROOT / 'project.json').read_text())
        inventory = json.loads((ROOT / 'evidence/inventory/base.json').read_text())
        original = ROOT / configuration['inputs']['base']
        with original.open('rb') as file:
            identity = hashlib.file_digest(file, 'sha256').hexdigest()
        if identity != configuration['baseCiaSha256'] or identity != inventory['sha256']:
            raise ValueError('Owner CIA identity differs')
        content = inventory['contents'][0]
        member = next(row for row in content['ncch']['romfsFiles'] if row['path'] == '/data/Layout/NaviMap/A00_00.arc')
        if member['size'] != 157992 or member['sha256'] != ARCHIVE_SHA:
            raise ValueError('Owner material archive inventory differs')
        with original.open('rb') as file:
            file.seek(content['offset'])
            header = file.read(512)
            if header[0x100:0x104] != b'NCCH' or not header[0x18f] & 4:
                raise ValueError('Owner NCCH identity/crypto mapping differs')
            offset, units = struct.unpack_from('<II', header, 0x1b0)
            if (offset + units) * 512 > content['size']:
                raise ValueError('Owner RomFS bounds differ')
            reader = RomFSReader(SubsectionIO(file, content['offset'] + offset * 512, units * 512), closefd=False, case_insensitive=False)
            with reader.open(member['path']) as extracted:
                data = extracted.read(member['size'] + 1)
        if len(data) != 157992 or sha(data) != ARCHIVE_SHA:
            raise ValueError('Owner extracted material archive differs')
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_bytes(data)
    data = path.read_bytes()
    if sha(data) != ARCHIVE_SHA:
        raise ValueError('Owner archive cache differs')
    return data


def owner_materials():
    from platform_engine_texture_reference import sarc
    archive = archive_bytes()
    layouts = [data for data in sarc(archive).values() if data.startswith(b'FLYT')]
    if len(layouts) != 1:
        raise ValueError('Owner layout count differs')
    layout = layouts[0]
    sections, offset = {}, 20
    while offset < len(layout):
        size = struct.unpack_from('<I', layout, offset + 4)[0]
        if size < 8 or offset + size > len(layout):
            raise ValueError('Bounded owner layout section failed')
        sections[layout[offset:offset + 4]] = layout[offset:offset + size]
        offset += size
    block = sections[b'mat1']
    count = struct.unpack_from('<I', block, 8)[0]
    offsets = [struct.unpack_from('<I', block, 12 + index * 4)[0] for index in range(count)] + [len(block)]
    if count != 19 or offsets != sorted(offsets) or offsets[0] < 12 + count * 4:
        raise ValueError('Owner material directory differs')
    return [block[start:end] for start, end in zip(offsets, offsets[1:])], sections[b'txl1']


def synthetic(flags, seed=0):
    rng = random.Random(seed)
    textures, transforms, generators, stages = flags & 3, flags >> 2 & 3, flags >> 4 & 3, flags >> 6 & 7
    projections, detailed = flags >> 15 & 3, flags >> 20 & 7
    result = bytearray(b'component-material'.ljust(28, b'\0') + rng.randbytes(8) + struct.pack('<I', flags))
    for index in range(textures):
        result += struct.pack('<HBB', index, rng.randrange(3) | rng.randrange(2) << 2,
            rng.randrange(3) | rng.randrange(2) << 2)
    result += rng.randbytes(transforms * 20)
    for index in range(generators):
        source = 3 + index % 3 if index < projections else 0
        result += struct.pack('<BBHI', index, source, rng.randrange(65536), rng.getrandbits(32))
    result += rng.randbytes(stages * 4)
    for bit, size in [(9, 8), (10, 4), (12, 4), (14, 12)]:
        if flags & (1 << bit):
            result += rng.randbytes(size)
    result += rng.randbytes(projections * 20)
    for bit, size in [(17, 8), (19, 28)]:
        if flags & (1 << bit):
            result += rng.randbytes(size)
    result += rng.randbytes(detailed * 12)
    return bytes(result)


def names():
    strings = [b'texture-' + str(index).encode() + b'\0' for index in range(256)]
    offsets, text = [], bytearray()
    for value in strings:
        offsets.append(len(strings) * 4 + len(text))
        text += value
    return b'txl1' + struct.pack('<II', 12 + len(strings) * 4 + len(text), len(strings)) + struct.pack('<256I', *offsets) + text


def cases():
    rows = []
    for index, flags in enumerate([0, 1, 3, 0x15, 0x8015, 0x18802a, 0x200, 0x400, 0x1000, 0x1400,
            0x4000, 0x20000, 0x40000, 0x800, 0x80000, 0x780000, 0x1c0, 0x3fffff, 0x7fffff]):
        for mode in range(4):
            rows.append({'name': 'boundary-' + str(index) + '-override-' + str(mode), 'wire': synthetic(flags, index),
                'replacement': synthetic(flags ^ 0x40800, index + 77) if mode else None,
                'mode': mode, 'allocationFails': False, 'names': names(), 'resourceNull': index % 3 == 0})
        rows.append({**rows[-4], 'name': 'allocation-failure-' + str(index), 'allocationFails': True})
    rng = random.Random(110054)
    for index in range(96):
        flags = rng.getrandbits(32)
        rows.append({'name': 'random-' + str(index), 'wire': synthetic(flags, index + 50),
            'replacement': synthetic(rng.getrandbits(32), index + 201) if index % 2 else None,
            'mode': index % 4, 'allocationFails': index % 11 == 0, 'names': names(), 'resourceNull': index % 4 == 0})
    materials, texture_names = owner_materials()
    for index, wire in enumerate(materials):
        for mode in range(4):
            rows.append({'name': 'owner-' + str(index) + '-override-' + str(mode), 'wire': wire,
                'replacement': materials[(index + 3) % len(materials)] if mode else None,
                'mode': mode, 'allocationFails': False, 'names': texture_names, 'resourceNull': False})
    return rows
