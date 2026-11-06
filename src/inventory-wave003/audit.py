import collections
import hashlib
import io
import posixpath
import struct

from pyctr.fileio import SubsectionIO

import containers
import programs


def normalized_name(raw):
    try:
        text = raw.decode('utf-8').replace('\\', '/')
    except UnicodeDecodeError:
        return None
    if '/romfiles/' in text:
        text = text.split('/romfiles/', 1)[1]
    if ':' in text or '..' in text.split('/'):
        return None
    return '/' + text.lstrip('/') if text else None


class Audit:
    def __init__(self, label):
        self.label = label
        self.seen = {}
        self.payloads = []
        self.detached = []
        self.catalog = []
        self.candidates = []
        self.errors = []
        self.expanded = 0
        self.counts = collections.Counter()
        self.magic = collections.Counter()

    def candidate(self, data, identity, marker):
        text, offset = marker['marker'], marker['offset']
        row = {'identity': identity, **marker, 'markerOffset': offset, 'qualification': 'marker-only-not-executable-proof'}
        try:
            if text == b'DSP1'.hex():
                row.update(programs.dsp(data, offset), qualification='segment-hashes-and-extents-verified')
            elif text == b'DVLB'.hex():
                row.update(programs.dvlb(data, offset), qualification='shader-header-code-entry-extents-verified')
            elif text in (b'CRO0'.hex(), b'CRS0'.hex(), b'FIXD'.hex()):
                start = offset - 0x80
                header = programs.extent(data, start, 0x138)
                size = struct.unpack_from('<I', header, 0x90)[0]
                code_offset, code_size, data_offset, data_size = struct.unpack_from('<4I', header, 0xb0)
                if size < 0x138:
                    raise ValueError('CRO file size smaller than header')
                raw = programs.extent(data, start, size)
                code = programs.extent(raw, code_offset, code_size)
                programs.extent(raw, data_offset, data_size)
                row.update(format='CRO-layout', containerOffset=start, bytes=size, codeBytes=code_size,
                           codeSha256=programs.sha(code), qualification='basic-header-code-data-extents-only')
            elif text == b'\x7fELF'.hex():
                header = programs.extent(data, offset, 52)
                if header[4:6] != b'\x01\x01':
                    raise ValueError('Only ELF32 little-endian header qualified')
                machine = struct.unpack_from('<H', header, 18)[0]
                phoff = struct.unpack_from('<I', header, 28)[0]
                stride, count = struct.unpack_from('<HH', header, 42)
                if stride != 32 or count > 1024:
                    raise ValueError('ELF program table invalid')
                table = programs.extent(data, offset + phoff, stride * count)
                for i in range(count):
                    record = struct.unpack_from('<8I', table, i * 32)
                    programs.extent(data, offset + record[1], record[4])
                row.update(format='ELF32', machine=machine, programHeaders=count,
                           qualification='ELF32-program-table-file-extents-verified')
            elif text == b'NCCH'.hex():
                start = offset - 0x100
                header = programs.extent(data, start, 0x200)
                size = struct.unpack_from('<I', header, 0x104)[0] * 512
                if size < 512:
                    raise ValueError('NCCH size invalid')
                programs.extent(data, start, size)
                row.update(format='NCCH', containerOffset=start, bytes=size,
                           qualification='embedded-NCCH-extent-only-contents-unqualified')
        except (ValueError, struct.error) as error:
            row['structuralFailure'] = str(error)
        self.candidates.append(row)

    def walk(self, stream, size, identity, depth=0, expected=None, virtual=None, scope=None):
        stream.seek(0)
        digest, buffer, prefix, overlap, marker_hits = hashlib.sha256(), bytearray(), b'', b'', []
        position = 0
        while block := stream.read(1048576):
            digest.update(block)
            if not prefix:
                prefix = block[:512]
            if size <= containers.MAX_MEMBER:
                buffer.extend(block)
            else:
                scan = overlap + block
                for marker in programs.markers(scan):
                    offset = position - len(overlap) + marker['offset']
                    marker_size = 2 + 3 * marker['integerBytes'] if 'integerBytes' in marker else 4
                    if offset + marker_size > position:
                        marker_hits.append({**marker, 'offset': offset})
                overlap = scan[-32:]
            position += len(block)
        digest = digest.hexdigest()
        if position != size or expected is not None and digest != expected:
            raise ValueError('Stream size/hash differs from immutable inventory')
        self.counts['streamVerifiedPayloadOccurrences'] += 1
        self.counts['streamVerifiedOccurrenceBytes'] += size
        self.counts['signatureCoveredOccurrenceBytes'] += size
        row = {'identity': identity, 'bytes': size, 'sha256': digest, 'depth': depth,
               'magic4': prefix[:4].hex(), 'fullyBuffered': size <= containers.MAX_MEMBER,
               'signatureScanBytes': size, 'semanticFormatComplete': False}
        if virtual:
            self.catalog.append({'identity': identity, 'path': virtual, 'bytes': size, 'sha256': digest, 'scope': scope})
        if digest in self.seen:
            self.counts['shaVerifiedAliasSignatureCoverageBytes'] += size
            row['samePayloadAs'] = self.seen[digest]
            self.payloads.append(row)
            return
        self.seen[digest] = identity
        self.counts['directSignatureSearchedUniquePayloadBytes'] += size
        self.payloads.append(row)
        self.magic[prefix[:4].hex()] += 1
        data = bytes(buffer) if row['fullyBuffered'] else None
        if data is not None:
            self.counts['uniqueFullyBufferedPayloads'] += 1
            self.counts['uniqueFullyBufferedBytes'] += size
            marker_hits = programs.markers(data)
            for marker in marker_hits:
                self.candidate(data, identity, marker)
            if data[:4] == b'BCH\0':
                try:
                    row['bch'] = programs.bch(data)
                    self.counts['bchSectionsAndCommandsQualified'] += 1
                except (ValueError, struct.error) as error:
                    row['bchFailure'] = str(error)
                    self.errors.append({'identity': identity, 'reason': 'BCH:' + str(error)})
        else:
            row['streamedHeaderMarkerHits'] = marker_hits
            self.counts['uniqueStreamedUnbufferedPayloads'] += 1
            self.counts['uniqueStreamedUnbufferedBytes'] += size
        if depth > containers.MAX_DEPTH:
            self.errors.append({'identity': identity, 'reason': 'Existing recursion depth bound'})
            return
        if prefix[:2] == b'\x1f\x8b':
            try:
                if data is None:
                    raise ValueError('Compressed input exceeds member buffer bound')
                expanded = containers.inflate(data, min(containers.MAX_MEMBER, containers.MAX_EXPANDED - self.expanded))
                self.expanded += len(expanded)
                self.walk(io.BytesIO(expanded), len(expanded), identity + '/gzip', depth + 1, scope=scope)
                row['format'] = 'gzip-single-stream'
            except ValueError as error:
                self.errors.append({'identity': identity, 'reason': str(error)})
            return
        if prefix[:4] not in (b'XBB\x01', b'SARC'):
            self.counts['opaqueOrPartiallyUnderstoodLeafPayloads'] += 1
            self.counts['opaqueOrPartiallyUnderstoodLeafBytes'] += size
            return
        try:
            parsed = containers.xbb(stream, size) if prefix[:4] == b'XBB\x01' else containers.sarc(stream, size)
            row['format'] = parsed['format']
            row['recordCount'] = parsed['recordCount']
            row['containerTableQualified'] = True
            if parsed['detachedIndex']:
                records = [{key: value for key, value in child.items() if key != 'privateName'} for child in parsed['rows']]
                self.detached.append({'identity': identity, 'bytes': size, 'sha256': digest, 'privateVirtualPath': virtual,
                                      'scope': scope, 'modeWord': 1, 'records': records,
                                      'tableSha256': parsed['tableSha256'], 'lookupSha256': parsed['lookupSha256'],
                                      'virtualReferencedBytes': parsed['virtualReferencedBytes'],
                                      'payloadBytesInIndex': 0, 'runtimeLoaderResolutionProved': False})
                return
            ranges = [(child['offset'], child['size']) for child in parsed['rows']]
            row['referencedPayloadUnionBytes'] = containers.union_bytes(ranges)
            row['nonPayloadOrPaddingBytes'] = size - row['referencedPayloadUnionBytes']
            for child in parsed['rows']:
                name = normalized_name(child.get('privateName', b''))
                child_scope = identity if parsed['format'] == 'XBB1' else scope
                self.walk(SubsectionIO(stream, child['offset'], child['size']), child['size'],
                          identity + '/member' + str(child['index']), depth + 1, virtual=name, scope=child_scope)
        except (ValueError, struct.error) as error:
            self.errors.append({'identity': identity, 'reason': 'Container:' + str(error)})

    def resolve_indices(self):
        for index in self.detached:
            path = index.pop('privateVirtualPath')
            siblings = sorted((row for row in self.catalog if path and row['scope'] == index['scope']
                               and posixpath.dirname(row['path']) == posixpath.dirname(path)
                               and row['path'].lower().endswith('.bch')), key=lambda row: row['path'])
            matched = len(siblings) == len(index['records']) and all(row['size'] == sibling['bytes']
                      for row, sibling in zip(index['records'], siblings))
            index['sameScopeOrderedSiblingSizesAllMatch'] = matched
            index['siblingCandidateCount'] = len(siblings)
            index['nameHashAlgorithmResolved'] = False
            if matched:
                for row, sibling in zip(index['records'], siblings):
                    row['orderedSizeMatchedSibling'] = {'identity': sibling['identity'], 'sha256': sibling['sha256'],
                                                       'bytes': sibling['bytes'], 'basenameSha256': containers.sha(posixpath.basename(sibling['path']).encode())}
            index['classification'] = 'detached-size-key-index-with-sorted-lookup'
        return self.detached
