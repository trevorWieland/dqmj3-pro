import argparse
import collections
import hashlib
import json
import struct
import sys
from pathlib import Path

from pyctr.fileio import SubsectionIO
from pyctr.type.exefs import ExeFSReader, decompress_code
from pyctr.type.romfs import RomFSReader
from pyctr.type.tmd import TitleMetadataReader

sys.path.insert(0, str(Path(__file__).resolve().parent))
from exheader import layout as code_layout


ROOT = Path(__file__).resolve().parents[1]


def digest_stream(stream, size=None):
    h = hashlib.sha256()
    remaining = size
    while remaining is None or remaining:
        block = stream.read(min(1024 * 1024, remaining) if remaining else 1024 * 1024)
        if not block:
            if remaining:
                raise ValueError('Unexpected end of input')
            break
        h.update(block)
        if remaining is not None:
            remaining -= len(block)
    return h.hexdigest()


def file_digest(path):
    with path.open('rb') as f:
        return digest_stream(f)


def dump_json(path, data):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(data, indent=2, ensure_ascii=True) + '\n', encoding='utf-8')


def align(value, unit=64):
    return (value + unit - 1) // unit * unit


def romfs_files(reader, directory='/'):
    info = reader.get_info_from_path(directory)
    for name in sorted(info.contents):
        path = directory.rstrip('/') + '/' + name
        child = reader.get_info_from_path(path)
        if child.type == 'dir':
            yield from romfs_files(reader, path)
        else:
            yield path, child


def inspect_ncch(f, offset, size, out, label, romfs=True):
    f.seek(offset)
    header = f.read(512)
    if len(header) != 512 or header[256:260] != b'NCCH':
        raise ValueError('Content is not NCCH')
    if not header[0x18f] & 4:
        raise ValueError('Encrypted NCCH: supply an independently decrypted owner dump')
    content_size = int.from_bytes(header[0x104:0x108], 'little') * 512
    if content_size != size:
        raise ValueError('NCCH size disagrees with CIA record')
    data = {'productCode': header[0x150:0x160].rstrip(b'\0').decode('ascii'),
            'programId': header[0x118:0x120][::-1].hex(), 'noCrypto': True,
            'size': size, 'romfsFiles': [], 'exefsFiles': []}
    generated = ROOT / 'generated' / label
    generated.mkdir(parents=True, exist_ok=True)
    if int.from_bytes(header[0x180:0x184], 'little'):
        f.seek(offset + 512)
        exheader = f.read(2048)
        (generated / 'exheader.bin').write_bytes(exheader)
        data['exheaderSha256'] = hashlib.sha256(exheader).hexdigest()
        data['layout'] = code_layout(exheader)
    for kind, pos in [('exefs', 0x1a0), ('romfs', 0x1b0)]:
        start, units = struct.unpack_from('<II', header, pos)
        if not units:
            continue
        start *= 512
        length = units * 512
        if start + length > size:
            raise ValueError('NCCH region is outside its content')
        stream = SubsectionIO(f, offset + start, length)
        if kind == 'exefs':
            reader = ExeFSReader(stream, closefd=False)
            for name, info in sorted(reader.entries.items()):
                with reader.open(name) as entry:
                    raw = entry.read()
                actual = hashlib.sha256(raw).digest()
                if actual != info.hash:
                    raise ValueError('ExeFS hash mismatch: ' + name)
                data['exefsFiles'].append({'name': name, 'size': len(raw),
                                           'sha256': actual.hex(), 'hashMatches': True})
                if name == '.code':
                    (generated / 'code-compressed.bin').write_bytes(raw)
                    code = decompress_code(raw) if data['layout']['compressed'] else raw
                    (generated / 'code.bin').write_bytes(code)
                    data['codeSha256'] = hashlib.sha256(code).hexdigest()
                    data['codeBytes'] = len(code)
                    if len(code) != data['layout']['pageAlignedCodeBytes']:
                        raise ValueError('Code size disagrees with mapped page extent')
        elif romfs:
            reader = RomFSReader(stream, case_insensitive=False, closefd=False)
            for path, info in romfs_files(reader):
                with reader.open(path) as entry:
                    first = entry.read(16)
                    entry.seek(0)
                    digest = digest_stream(entry)
                row = {'path': path, 'size': info.size, 'sha256': digest,
                       'magic16': first.hex()}
                data['romfsFiles'].append(row)
                if path.lower().endswith(('.cro', '.crr', '.crs')):
                    target = generated / 'modules' / path.lstrip('/')
                    target.parent.mkdir(parents=True, exist_ok=True)
                    with reader.open(path) as entry:
                        target.write_bytes(entry.read())
            extensions = collections.Counter(Path(x['path']).suffix.lower() or '<none>'
                                             for x in data['romfsFiles'])
            data['romfsExtensionCounts'] = dict(sorted(extensions.items()))
            data['romfsFileCount'] = len(data['romfsFiles'])
            data['romfsFileBytes'] = sum(x['size'] for x in data['romfsFiles'])
    dump_json(out, data)
    return data


def inspect_cia(path, label, out=None, romfs=True):
    out = Path(out) if out is not None else ROOT / 'evidence' / 'inventory'
    with path.open('rb') as f:
        header = f.read(32)
        hs, kind, version, cert, ticket, tmd_size, meta, total = struct.unpack('<IHHIIIIQ', header)
        if hs != 0x2020:
            raise ValueError('Unexpected CIA header')
        bitmap = f.read(hs - 32)
        tmd_offset = align(hs) + align(cert) + align(ticket)
        f.seek(tmd_offset)
        tmd = TitleMetadataReader.load(f)
        cursor = tmd_offset + align(tmd_size)
        data = {'path': str(path.resolve()), 'sha256': file_digest(path),
                'size': path.stat().st_size, 'titleId': tmd.title_id,
                'titleVersionRaw': int(tmd.title_version), 'contents': [],
                'signatureAuthenticityVerified': False}
        for record in tmd.chunk_records:
            if not bitmap[record.cindex // 8] & (128 >> (record.cindex % 8)):
                continue
            if record.type.encrypted:
                raise ValueError('Encrypted CIA content is unsupported by this intake')
            if cursor + record.size > path.stat().st_size:
                raise ValueError('CIA content exceeds input')
            f.seek(cursor)
            actual = digest_stream(f, record.size)
            matches = actual == record.hash.hex()
            item = {'index': record.cindex, 'id': record.id, 'offset': cursor,
                    'size': record.size, 'sha256': actual,
                    'tmdSha256': record.hash.hex(), 'hashMatchesTmd': matches}
            if not matches:
                raise ValueError('CIA content hash disagrees with TMD')
            item['ncch'] = inspect_ncch(f, cursor, record.size,
                                      out / f'{label}-content{record.cindex}.json',
                                      f'{label}-content{record.cindex}', romfs=romfs)
            data['contents'].append(item)
            cursor += record.size
        if sum(x['size'] for x in data['contents']) != total:
            raise ValueError('CIA content total mismatch')
    dump_json(out / f'{label}.json', data)
    return data


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--base', type=Path, default=ROOT / 'inputs/archive/dqmj3pro/DQMJ3P.cia')
    parser.add_argument('--update', type=Path, default=ROOT / 'inputs/archive/dqmj3pro/DQMJ3P_Update.cia')
    args = parser.parse_args()
    configuration = json.loads((ROOT / 'project.json').read_text(encoding='utf-8'))
    for label, path in [('base', args.base), ('update', args.update)]:
        if file_digest(path) != configuration[label + 'CiaSha256']:
            raise ValueError('Input differs from pinned project identity: ' + label)
    results = {label: inspect_cia(path, label)
               for label, path in [('base', args.base), ('update', args.update)]}
    summary = {key: {'sha256': value['sha256'], 'titleId': value['titleId'],
                     'titleVersionRaw': value['titleVersionRaw'],
                     'contents': [{'index': c['index'], 'sha256': c['sha256'],
                                   'codeSha256': c['ncch'].get('codeSha256'),
                                   'romfsFiles': c['ncch'].get('romfsFileCount', 0)}
                                  for c in value['contents']]}
               for key, value in results.items()}
    summary['acceptedRecoveredFunctions'] = 0
    summary['acceptedRecoveredBytes'] = 0
    summary['executableInventoryComplete'] = False
    dump_json(ROOT / 'evidence/inventory/summary.json', summary)
    print(json.dumps(summary, indent=2))


if __name__ == '__main__':
    main()
