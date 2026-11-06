import argparse
import collections
import hashlib
import json
import struct
from pathlib import Path

from pyctr.fileio import SubsectionIO
from pyctr.type.romfs import RomFSReader


ROOT = Path(__file__).resolve().parents[1]
LIMIT = 20 * 1024 * 1024


def sha(data):
    return hashlib.sha256(data).hexdigest()


def load(path):
    return json.loads(path.read_text(encoding='utf-8'))


def write(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2, ensure_ascii=True) + '\n', encoding='utf-8')


def classify_script(data):
    encodings = []
    for encoding in ('utf-8-sig', 'cp932'):
        try:
            data.decode(encoding)
            encodings.append(encoding)
        except UnicodeDecodeError:
            pass
    controls = sum(b < 32 and b not in (9, 10, 13) for b in data)
    text = bool(encodings) and controls == 0 and b'\0' not in data
    candidate = bool(encodings) and b'\0' not in data and controls < max(1, len(data) / 1000)
    category = 'original-readable-text' if text else 'text-candidate-with-controls' if candidate else 'binary-or-unknown'
    return {'classification': category,
            'decodableEncodings': encodings, 'controlBytes': controls,
            'controlByteCounts': {hex(b): data.count(b) for b in set(data)
                                  if b < 32 and b not in (9, 10, 13)},
            'lineCount': len(data.splitlines()),
            'syntaxIndicators': {key: data.count(key.encode('ascii'))
                                 for key in ('function', 'local ', 'enum ', 'const ', '{', '}')}}


def read_at(stream, start, size, total):
    if start < 0 or size < 0 or start + size > total:
        raise ValueError('Archive range outside member')
    stream.seek(start)
    data = stream.read(size)
    if len(data) != size:
        raise ValueError('Truncated archive range')
    return data


def inspect_archive(stream, total, magic):
    header = read_at(stream, 0, min(total, 32), total)
    if magic == b'SARC':
        if len(header) < 32:
            raise ValueError('Truncated SARC')
        if struct.unpack_from('<HH', header, 4) != (20, 0xfeff):
            return {'format': 'SARC', 'supported': False, 'reason': 'unqualified byte order/header'}
        size, start = struct.unpack_from('<II', header, 8)
        count = struct.unpack_from('<H', header, 26)[0]
        if size != total or header[20:24] != b'SFAT' or count > 65535:
            raise ValueError('Invalid SARC header')
        table = read_at(stream, 32, count * 16 + 8, total)
        if table[-8:-4] != b'SFNT' or start < 40 + count * 16:
            raise ValueError('Invalid SARC names/data boundary')
        signatures = collections.Counter()
        for index in range(count):
            attributes, begin, end = struct.unpack_from('<III', table, index * 16 + 4)
            if begin > end or start + end > total:
                raise ValueError('Invalid SARC member extent')
            signatures[read_at(stream, start + begin, min(4, end - begin), total).hex()] += 1
        return {'format': 'SARC', 'supported': True, 'memberCount': count,
                'memberMagic4Counts': dict(sorted(signatures.items()))}
    if magic == b'XBB\x01':
        if len(header) < 32:
            raise ValueError('Truncated XBB')
        count = struct.unpack_from('<I', header, 4)[0]
        if count > 100000:
            raise ValueError('Excessive XBB count')
        table = read_at(stream, 32, count * 16, total)
        signatures = collections.Counter()
        unnamed = 0
        for index in range(count):
            start, size, name = struct.unpack_from('<III', table, index * 16)
            if name == 0:
                unnamed += 1
            elif name < 32 + count * 16 or name >= total:
                raise ValueError('Invalid XBB name offset')
            signatures[read_at(stream, start, min(4, size), total).hex()] += 1
            if start + size > total:
                raise ValueError('Invalid XBB member extent')
        return {'format': 'XBB1', 'supported': True, 'memberCount': count,
                'zeroNameOffsetMembers': unnamed,
                'memberMagic4Counts': dict(sorted(signatures.items()))}
    return None


def survey(label, sample_budget):
    input_report = ROOT / 'evidence/inventory' / (label + '.json')
    source_bytes = input_report.read_bytes()
    source = json.loads(source_bytes)
    result = {'label': label, 'ciaSha256': source['sha256'],
              'inventoryReportSha256': sha(source_bytes), 'contents': []}
    sample_bytes = 0
    seen_samples = set()
    with Path(source['path']).open('rb') as original:
        identity_before = Path(source['path']).stat()
        if hashlib.file_digest(original, 'sha256').hexdigest() != source['sha256']:
            raise ValueError('CIA differs from pinned inventory: ' + label)
        result['ciaHashVerifiedBeforeSurvey'] = True
        for content in source['contents']:
            files = content['ncch']['romfsFiles']
            item = {'contentIndex': content['index'], 'ncchSha256': content['sha256'],
                    'files': len(files), 'scripts': [], 'archives': [], 'modules': [],
                    'shaderCandidates': [], 'samples': [], 'errors': []}
            result['contents'].append(item)
            if not files:
                continue
            original.seek(content['offset'])
            header = original.read(512)
            start, size = struct.unpack_from('<II', header, 0x1b0)
            reader = RomFSReader(SubsectionIO(original, content['offset'] + start * 512,
                                             size * 512), case_insensitive=False, closefd=False)
            signatures = collections.Counter()
            for row in files:
                path = row['path']
                ext = Path(path).suffix.lower()
                magic = bytes.fromhex(row['magic16'])[:4]
                signatures[magic.hex()] += 1
                with reader.open(path) as stream:
                    if ext == '.nut':
                        raw = stream.read()
                        if len(raw) != row['size'] or sha(raw) != row['sha256']:
                            raise ValueError('Script differs from inventory: ' + path)
                        item['scripts'].append({'path': path, 'size': row['size'],
                                                'sha256': row['sha256'], **classify_script(raw)})
                    if magic in (b'SARC', b'XBB\x01'):
                        try:
                            archive = inspect_archive(stream, row['size'], magic)
                            item['archives'].append({'path': path, 'sha256': row['sha256'], **archive})
                        except (ValueError, struct.error) as error:
                            item['errors'].append({'path': path, 'error': str(error)})
                    stream.seek(0)
                    probe = stream.read(min(256, row['size']))
                    locations = {signature.decode('ascii'): probe.find(signature)
                                 for signature in (b'CRO0', b'CRR0', b'CRS0', b'\x7fELF')
                                 if signature in probe}
                    if locations or ext in ('.cro', '.crr', '.crs'):
                        item['modules'].append({'path': path, 'size': row['size'],
                                                'sha256': row['sha256'], 'headerMarkers': locations})
                    if magic == b'DVLB' or ext == '.shbin':
                        item['shaderCandidates'].append({'path': path, 'size': row['size'],
                                                         'sha256': row['sha256'], 'magic4': magic.hex()})
                    sample_key = (ext, magic)
                    eligible = ext in ('.nut', '.tp', '.tb', '.mes', '.shbin') or magic in (b'SARC', b'XBB\x01')
                    if eligible and sample_key not in seen_samples and 0 < row['size'] <= 1024 * 1024:
                        if sample_bytes + row['size'] <= sample_budget:
                            stream.seek(0)
                            raw = stream.read()
                            if len(raw) != row['size'] or sha(raw) != row['sha256']:
                                raise ValueError('Sample differs from inventory: ' + path)
                            target = ROOT / 'generated/asset-samples' / label / str(content['index']) / path.lstrip('/')
                            target.parent.mkdir(parents=True, exist_ok=True)
                            target.write_bytes(raw)
                            sample_bytes += len(raw)
                            seen_samples.add(sample_key)
                            item['samples'].append({'path': path, 'size': len(raw), 'sha256': sha(raw),
                                                    'privatePath': str(target.relative_to(ROOT))})
            item['magic4Counts'] = dict(sorted(signatures.items()))
            item['scriptClassificationCounts'] = dict(collections.Counter(x['classification'] for x in item['scripts']))
            item['scriptBytes'] = sum(x['size'] for x in item['scripts'])
            item['archiveFormatCounts'] = dict(collections.Counter(x['format'] for x in item['archives']))
        identity_after = Path(source['path']).stat()
        if (identity_before.st_size, identity_before.st_mtime_ns) != (identity_after.st_size, identity_after.st_mtime_ns):
            raise ValueError('CIA changed during asset survey: ' + label)
        result['inputStatStableDuringSurvey'] = True
    result['sampleBytes'] = sample_bytes
    write(ROOT / 'evidence/assets' / (label + '.json'), result)
    return result


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--sample-limit', type=int, default=LIMIT)
    args = parser.parse_args()
    if not 0 <= args.sample_limit <= LIMIT:
        raise ValueError('Samples must be bounded to 20 MiB')
    results = []
    remaining = args.sample_limit
    for label in ('base', 'update'):
        result = survey(label, remaining)
        remaining -= result['sampleBytes']
        results.append(result)
    summary = {'schemaVersion': 1, 'producerSha256': sha(Path(__file__).read_bytes()),
               'sampleBytes': args.sample_limit - remaining, 'sampleLimit': args.sample_limit,
               'acceptedRecoveredSourceBytes': 0, 'executableInventoryComplete': False,
               'moduleScanScope': 'All RomFS filenames and first 256 bytes of each file; archive payloads not recursively scanned',
               'results': []}
    scripts = [{row['path']: row for item in result['contents'] for row in item['scripts']}
               for result in results]
    base, update = scripts
    effective = base | update
    summary['updateFirstScriptView'] = {
        'effectiveFiles': len(effective), 'effectiveBytes': sum(x['size'] for x in effective.values()),
        'updatedPaths': sum(path in base and base[path]['sha256'] != row['sha256']
                            for path, row in update.items()),
        'identicalPaths': sum(path in base and base[path]['sha256'] == row['sha256']
                              for path, row in update.items()),
        'addedPaths': sum(path not in base for path in update),
        'classificationCounts': dict(collections.Counter(x['classification'] for x in effective.values())),
        'scope': 'Derived path overlay only; runtime loader precedence and path reachability not executed'}
    for result in results:
        summary['results'].append({'label': result['label'], 'ciaSha256': result['ciaSha256'],
                                   'contents': [{key: item[key] for key in ('contentIndex', 'files', 'scriptBytes',
                                                'scriptClassificationCounts', 'archiveFormatCounts')} |
                                                {'moduleCandidates': len(item['modules']),
                                                 'shaderCandidates': len(item['shaderCandidates']),
                                                 'archiveErrors': len(item['errors'])}
                                                for item in result['contents']]})
    write(ROOT / 'evidence/assets/summary.json', summary)
    print(json.dumps(summary, indent=2))


if __name__ == '__main__':
    main()
