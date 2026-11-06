import hashlib
import struct
import zlib


MAX_MEMBER = 32 * 1024 * 1024
MAX_EXPANDED = 128 * 1024 * 1024
MAX_DEPTH = 5


def sha(data):
    return hashlib.sha256(data).hexdigest()


def read_at(stream, start, size, total):
    if start < 0 or size < 0 or start + size > total:
        raise ValueError('Range exceeds container')
    stream.seek(start)
    data = stream.read(size)
    if len(data) != size:
        raise ValueError('Truncated container')
    return data


def xbb(stream, total):
    header = read_at(stream, 0, 32, total)
    magic, count, mode = struct.unpack_from('<III', header)
    if magic != 0x01424258 or count > 100000 or mode not in (0, 1) or any(header[12:]):
        raise ValueError('Unqualified XBB header/count/mode/reserved words')
    table = read_at(stream, 32, count * 16, total)
    trailer = read_at(stream, 32 + count * 16, count * 8, total)
    lookup = [struct.unpack_from('<II', trailer, index * 8) for index in range(count)]
    metadata_end = 32 + count * 24
    detached = mode == 1 and total == metadata_end
    rows = []
    for index in range(count):
        offset, size, name, key = struct.unpack_from('<4I', table, index * 16)
        text = b''
        if name:
            if name < metadata_end or name >= total:
                raise ValueError('XBB name pointer outside metadata')
            text = read_at(stream, name, min(4096, total - name), total)
            if b'\0' not in text:
                raise ValueError('Unterminated/overlong XBB name')
            text = text.split(b'\0', 1)[0]
        if not detached and (offset + size > total or size and offset < metadata_end):
            raise ValueError('Internal XBB extent outside payload area')
        if detached and (name or offset != (rows[-1]['offset'] + rows[-1]['size'] if rows else 0)):
            raise ValueError('Detached XBB index is not contiguous/nameless')
        rows.append({'index': index, 'offset': offset, 'size': size, 'nameOffset': name, 'keyWord': key,
                     'nameSha256': sha(text) if text else None, 'nameBytes': len(text), 'privateName': text})
    if (sorted(index for key, index in lookup) != list(range(count))
            or [key for key, index in lookup] != sorted(row['keyWord'] for row in rows)
            or any(key != rows[index]['keyWord'] for key, index in lookup)):
        raise ValueError('XBB lookup is not sorted key/index permutation')
    return {'format': 'XBB1', 'modeWord': mode, 'recordCount': count, 'rows': rows,
            'tableSha256': sha(table), 'lookupSha256': sha(trailer),
            'detachedIndex': detached, 'virtualReferencedBytes': sum(row['size'] for row in rows) if detached else None}


def sarc(stream, total):
    header = read_at(stream, 0, 32, total)
    if header[:4] != b'SARC' or struct.unpack_from('<HH', header, 4) != (20, 0xfeff):
        raise ValueError('Unqualified SARC header/order')
    length, start = struct.unpack_from('<II', header, 8)
    count = struct.unpack_from('<H', header, 26)[0]
    if length != total or header[20:24] != b'SFAT' or start < 40 + count * 16:
        raise ValueError('SARC extent/table mismatch')
    table = read_at(stream, 32, count * 16 + 8, total)
    if table[-8:-4] != b'SFNT':
        raise ValueError('SARC name section missing')
    rows = []
    for index in range(count):
        key, attributes, begin, end = struct.unpack_from('<4I', table, index * 16)
        if begin > end or start + end > total:
            raise ValueError('SARC child extent invalid')
        rows.append({'index': index, 'offset': start + begin, 'size': end - begin})
    return {'format': 'SARC', 'rows': rows, 'detachedIndex': False, 'recordCount': count}


def inflate(data, maximum):
    reader = zlib.decompressobj(16 + zlib.MAX_WBITS)
    output = reader.decompress(data, maximum + 1)
    if len(output) > maximum or reader.unconsumed_tail or not reader.eof or reader.unused_data:
        raise ValueError('Gzip bound/truncation/trailing stream requires qualification')
    return output


def union_bytes(ranges):
    end, total = 0, 0
    for begin, length in sorted(ranges):
        finish = begin + length
        total += max(0, finish - max(begin, end))
        end = max(end, finish)
    return total
