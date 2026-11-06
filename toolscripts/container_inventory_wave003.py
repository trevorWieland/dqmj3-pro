import argparse
import hashlib
import io
import json
import importlib.metadata
import struct
import sys
from pathlib import Path

from pyctr.fileio import SubsectionIO
from pyctr.type.exefs import ExeFSReader, decompress_code
from pyctr.type.romfs import RomFSReader


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'src/inventory-wave003'
OUT = ROOT / 'evidence/lanes/container-inventory-wave003'
WORK = ROOT / 'work/container-inventory-wave003'
sys.path.insert(0, str(SOURCE))
import audit
import containers
import summarize


IDENTITIES = {'base': '864d1c35ba6908bed94d9c5f09a148b3355c41794f1d126086dafe1876665f47',
              'update': 'e19f07d67165bf5bf5c3c226064433cf2e36e2cc489742c69b0c2efa28447c55'}


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n')


def pin(path):
    return {'path': path.relative_to(ROOT).as_posix(), 'sha256': containers.sha(path.read_bytes()), 'bytes': path.stat().st_size}


def stream_hash(stream):
    stream.seek(0)
    digest = hashlib.sha256()
    while block := stream.read(1048576):
        digest.update(block)
    return digest.hexdigest()


def scan(label, output):
    source = ROOT / f'evidence/inventory/{label}.json'
    metadata = json.loads(source.read_text())
    if metadata['sha256'] != IDENTITIES[label]:
        raise ValueError('Owner CIA identity differs from frozen lane1')
    state = audit.Audit(label)
    contents = []
    with Path(metadata['path']).open('rb') as original:
        stat = Path(metadata['path']).stat()
        if stream_hash(original) != IDENTITIES[label]:
            raise ValueError('Owner CIA hash changed')
        for content in metadata['contents']:
            measured_code = None
            substream = SubsectionIO(original, content['offset'], content['size'])
            if stream_hash(substream) != content['sha256'] or content['sha256'] != content['tmdSha256']:
                raise ValueError('NCCH/TMD content hash mismatch')
            header = containers.read_at(substream, 0, 512, content['size'])
            if header[0x100:0x104] != b'NCCH' or not header[0x18f] & 4 or struct.unpack_from('<I', header, 0x104)[0] * 512 != content['size']:
                raise ValueError('NCCH header/crypto/size unqualified')
            item = {'index': content['index'], 'sha256': content['sha256'], 'tmdHashAgreed': True,
                    'headerSha256': containers.sha(header), 'romfsFiles': 0, 'romfsBytes': 0, 'exefsFiles': 0}
            contents.append(item)
            for region, at in (('romfs', 0x1b0), ('exefs', 0x1a0)):
                start, units = struct.unpack_from('<II', header, at)
                if not units:
                    continue
                if (start + units) * 512 > content['size']:
                    raise ValueError('NCCH region exceeds content')
                view = SubsectionIO(original, content['offset'] + start * 512, units * 512)
                if region == 'romfs':
                    reader = RomFSReader(view, closefd=False, case_insensitive=False)
                    for row in content['ncch']['romfsFiles']:
                        identity = f'content{content["index"]}' + row['path']
                        with reader.open(row['path']) as stream:
                            state.walk(stream, row['size'], identity, expected=row['sha256'],
                                       virtual=row['path'], scope=f'content{content["index"]}/romfs')
                        item['romfsFiles'] += 1
                        item['romfsBytes'] += row['size']
                    expected = {row['path']: row for row in content['ncch']['romfsFiles']}
                    def paths(directory='/'):
                        info = reader.get_info_from_path(directory)
                        for name in sorted(info.contents):
                            path = directory.rstrip('/') + '/' + name
                            child = reader.get_info_from_path(path)
                            if child.type == 'dir':
                                yield from paths(path)
                            else:
                                yield path
                    if set(paths()) != set(expected):
                        raise ValueError('Actual RomFS table/file inventory disagreement')
                else:
                    reader = ExeFSReader(view, closefd=False)
                    expected = {row['name']: row for row in content['ncch']['exefsFiles']}
                    if set(reader.entries) != set(expected):
                        raise ValueError('Actual ExeFS inventory disagreement')
                    for name, entry in reader.entries.items():
                        row = expected[name]
                        if entry.hash.hex() != row['sha256']:
                            raise ValueError('ExeFS declared hash differs')
                        with reader.open(name) as stream:
                            state.walk(stream, row['size'], f'content{content["index"]}/exefs/{name}', expected=row['sha256'])
                        if name == '.code':
                            if row['size'] > containers.MAX_MEMBER:
                                raise ValueError('Main executable compressed input exceeds existing buffer bound')
                            with reader.open(name) as stream:
                                raw = stream.read()
                            measured_code = decompress_code(raw) if content['ncch']['layout']['compressed'] else raw
                            if len(measured_code) > containers.MAX_MEMBER or containers.sha(measured_code) != content['ncch']['codeSha256']:
                                raise ValueError('Fresh source-CIA executable expansion/hash differs from inventory')
                        item['exefsFiles'] += 1
            if content['ncch'].get('codeSha256'):
                if measured_code is None:
                    raise ValueError('Missing freshly decompressed source-CIA executable')
                state.walk(io.BytesIO(measured_code), len(measured_code), f'content{content["index"]}/code-decompressed',
                           expected=content['ncch']['codeSha256'])
                item['mainExecutableFreshlyExpandedFromVerifiedExeFS'] = True
            print(json.dumps({'label': label, 'content': content['index'], 'payloads': len(state.payloads),
                              'detachedIndices': len(state.detached), 'candidates': len(state.candidates)}), flush=True)
        if stream_hash(original) != IDENTITIES[label] or Path(metadata['path']).stat().st_mtime_ns != stat.st_mtime_ns:
            raise ValueError('CIA changed during audit')
    detached = state.resolve_indices()
    old = json.loads((ROOT / f'evidence/lanes/inventory-wave001/{label}-nested.json').read_text())
    prior = {row['identity'] for row in old['unresolved']}
    classified = {row['identity'] for row in detached}
    result = {'label': label, 'ownerCiaSha256': IDENTITIES[label], 'inventoryInput': pin(source), 'contents': contents,
              'counts': dict(state.counts), 'uniquePayloads': len(state.seen), 'gzipExpandedBytes': state.expanded,
              'payloadOccurrences': state.payloads, 'signatureAndProgramCandidates': state.candidates,
              'detachedIndices': detached, 'previousUnresolvedIdentities': sorted(prior),
              'previousUnresolvedNowStructurallyClassified': sorted(prior & classified),
              'previousUnresolvedStillUnclassified': sorted(prior - classified), 'decoderResiduals': state.errors,
              'uniquePayloadMagic4Counts': dict(state.magic),
              'topLevelRomfsStreamVerifiedBytes': sum(row['romfsBytes'] for row in contents),
              'allTopLevelRomfsBytesSignatureCoveredDirectlyOrByVerifiedAlias': True,
              'recursiveOccurrenceByteCountsOverlapPhysicalContainerBytes': True,
              'limits': {'depth': containers.MAX_DEPTH, 'bufferedMemberBytes': containers.MAX_MEMBER,
                         'expandedGzipBytes': containers.MAX_EXPANDED},
              'complete': False, 'nativeDenominatorComplete': False, 'acceptedSourceCredit': 0,
              'residualScope': ['Unknown custom containers/compression and raw unmarked machine code remain possible',
                                'BCH relocation/object graph and complete GPU command semantics not reconstructed',
                                'Detached key/name hash algorithm and runtime resolver/precedence unproved',
                                'Signature-scanned bytes are not semantically classified executable bytes']}
    save(output / f'{label}.json', result)
    return result, state.catalog


def comparison(base, update, base_catalog, update_catalog):
    labels = {}
    for label, catalog in (('base', base_catalog), ('update', update_catalog)):
        labels[label] = {row['path']: row for row in catalog if row['scope'] == 'content0/romfs'}
    common = set(labels['base']) & set(labels['update'])
    differences = []
    for path in sorted(common):
        before, after = labels['base'][path], labels['update'][path]
        differences.append({'pathSha256': containers.sha(path.encode()), 'baseSha256': before['sha256'],
                            'updateSha256': after['sha256'], 'equal': before['sha256'] == after['sha256']})
    return {'samePathEntries': len(common), 'samePathSameHashes': sum(row['equal'] for row in differences),
            'baseOnlyPaths': len(set(labels['base']) - set(labels['update'])),
            'updateOnlyPaths': len(set(labels['update']) - set(labels['base'])), 'samePathComparisons': differences,
            'baseDetachedIndexCount': len(base['detachedIndices']), 'updateDetachedIndexCount': len(update['detachedIndices']),
            'runtimeFallbackOrPrecedenceAssumed': False,
            'note': 'Coexisting physical records only; no runtime mount/lookup policy inferred'}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, default=OUT)
    args = parser.parse_args()
    output = args.output.resolve()
    if output != OUT and not output.is_relative_to(WORK):
        raise RuntimeError('Output outside owned lane')
    output.mkdir(parents=True, exist_ok=True)
    base, bc = scan('base', output)
    update, uc = scan('update', output)
    save(output / 'comparison.json', comparison(base, update, bc, uc))
    summary = {'status': 'metadata-audit-awaits-coordinator-review', 'producer': pin(Path(__file__)),
               'runtime': {'python': sys.version, 'pyctrDistribution': importlib.metadata.version('pyctr'),
                           'zlibRuntime': __import__('zlib').ZLIB_RUNTIME_VERSION},
               'toolCodePins': [pin(path) for package in ('pyctr', 'Crypto', 'Cryptodome')
                                for path in (ROOT / 'tools/python/Lib/site-packages' / package).rglob('*')
                                if path.is_file() and path.suffix in ('.py', '.pyd', '.dll')],
               'sources': [pin(path) for path in sorted(SOURCE.glob('*.py'))],
               'publicSerializationReferences': [pin(ROOT / 'source/squirrel-wave001/upstream' / path)
                                                for path in ('include/squirrel.h', 'squirrel/sqobject.h', 'squirrel/sqobject.cpp', 'squirrel/sqapi.cpp')],
               'results': [{'label': row['label'], 'uniquePayloads': row['uniquePayloads'],
                            'detachedIndicesClassified': len(row['previousUnresolvedNowStructurallyClassified']),
                            'unclassifiedPrior': len(row['previousUnresolvedStillUnclassified']),
                            'decoderResiduals': len(row['decoderResiduals']),
                            'topLevelRomfsSignatureScannedBytes': row['topLevelRomfsStreamVerifiedBytes']} for row in (base, update)],
               'reproductionArgv': ['tools/python/Scripts/python.exe', 'toolscripts/container_inventory_wave003.py'],
               'nativeDenominatorComplete': False, 'wholeExecutableInventoryComplete': False, 'acceptedSourceCredit': 0}
    save(output / 'summary.json', summary)
    summarize.build(output)
    print(json.dumps(summary['results']), flush=True)


if __name__ == '__main__':
    main()
