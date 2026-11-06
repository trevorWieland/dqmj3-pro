import collections
import hashlib
import struct


def sha(data):
    return hashlib.sha256(data).hexdigest()


def extent(data, start, length):
    if start < 0 or length < 0 or start + length > len(data):
        raise ValueError('Program section outside inspected payload')
    return data[start:start + length]


def dsp(data, marker):
    start = marker - 0x100
    if start < 0:
        raise ValueError('DSP marker lacks signature/header prefix')
    header = extent(data, start, 0x300)
    size = struct.unpack_from('<I', header, 0x104)[0]
    count = header[0x10e]
    if not 1 <= count <= 10 or size < 0x300:
        raise ValueError('DSP count/size invalid')
    binary = extent(data, start, size)
    segments = []
    for index in range(count):
        offset, address, length = struct.unpack_from('<III', header, 0x120 + index * 0x30)
        kind = header[0x12f + index * 0x30]
        raw = extent(binary, offset, length)
        expected = header[0x130 + index * 0x30:0x150 + index * 0x30]
        if kind > 2 or address >= (0x20000 if kind == 0 else 0x10000) or hashlib.sha256(raw).digest() != expected:
            raise ValueError('DSP segment type/address/hash invalid')
        segments.append({'offset': offset, 'bytes': length, 'wordAddress': address, 'memoryType': kind, 'sha256': sha(raw)})
    return {'format': 'DSP1', 'offset': start, 'bytes': size, 'sha256': sha(binary), 'segments': segments,
            'rsaSignatureVerified': False, 'segmentHashesVerified': True}


def dvlb(data, start):
    count = struct.unpack('<I', extent(data, start + 4, 4))[0]
    if not 1 <= count <= 256:
        raise ValueError('DVLB executable count invalid')
    offsets = struct.unpack('<' + 'I' * count, extent(data, start + 8, 4 * count))
    program = start + 8 + 4 * count
    header = extent(data, program, 0x28)
    if header[:4] != b'DVLP':
        raise ValueError('DVLB does not lead to DVLP')
    code_offset, words, desc_offset, descriptors = struct.unpack_from('<4I', header, 8)
    code = extent(data, program + code_offset, words * 4)
    operands = extent(data, program + desc_offset, descriptors * 8)
    executables = []
    for offset in offsets:
        raw = extent(data, start + offset, 0x40)
        if raw[:4] != b'DVLE':
            raise ValueError('DVLE offset/header invalid')
        entry, end = struct.unpack_from('<II', raw, 8)
        if entry > end or end > words:
            raise ValueError('DVLE code interval invalid')
        executables.append({'offset': start + offset, 'shaderType': raw[6], 'entryWord': entry, 'endWord': end})
    return {'format': 'DVLB', 'offset': start, 'codeOffset': program + code_offset, 'codeBytes': len(code),
            'codeSha256': sha(code), 'operandDescriptorBytes': len(operands), 'operandSha256': sha(operands),
            'executables': executables, 'scope': 'Section/entry extents checked; shader semantics not decoded'}


def pica(data):
    if len(data) & 7:
        raise ValueError('BCH command section is not 8-byte aligned')
    position, counts, uploads = 0, collections.Counter(), collections.defaultdict(bytearray)
    packets = 0
    while position < len(data):
        parameter, header = struct.unpack('<II', extent(data, position, 8))
        count, register, consecutive = (header >> 20) & 0x7ff, header & 0xffff, header >> 31
        values = [parameter] + list(struct.unpack('<' + 'I' * count, extent(data, position + 8, count * 4)))
        for index, value in enumerate(values):
            actual = register + index if consecutive else register
            counts[actual] += 1
            for kind, begin in (('geometry', 0x29c), ('vertex', 0x2cc)):
                if begin <= actual < begin + 8:
                    uploads[kind].extend(struct.pack('<I', value))
        position += 8 + count * 4
        position = (position + 7) & ~7
        if position > len(data):
            raise ValueError('PICA packet padding exceeds command section')
        packets += 1
    return {'packetCount': packets, 'registerCount': len(counts),
            'shaderTransferPayloads': [{'kind': kind, 'bytes': len(raw), 'sha256': sha(raw)} for kind, raw in uploads.items()],
            'scope': 'Concatenated shader-transfer data words; not a reconstructed GPU program image or runtime state'}


def bch(data):
    if len(data) < 0x44 or data[:4] != b'BCH\0' or data[4] < 0x21:
        raise ValueError('BCH header/version unqualified')
    offsets = struct.unpack_from('<6I', data, 8)
    lengths = struct.unpack_from('<6I', data, 0x20)
    sections = []
    for name, offset, length in zip(('contents', 'strings', 'commands', 'raw', 'rawExtended', 'relocation'), offsets, lengths):
        raw = extent(data, offset, length)
        sections.append({'name': name, 'offset': offset, 'bytes': length, 'sha256': sha(raw)})
    commands = extent(data, offsets[2], lengths[2])
    return {'format': 'BCH', 'compatibility': list(data[4:6]), 'sections': sections, 'commands': pica(commands),
            'relocationsApplied': False, 'rawGPUProgramClosureComplete': False}


def markers(data):
    found = []
    for magic in (b'CRO0', b'CRS0', b'CRR0', b'FIXD', b'\x7fELF', b'NCCH', b'FIRM', b'DSP1', b'DVLB'):
        position = 0
        while (position := data.find(magic, position)) >= 0:
            found.append({'marker': magic.hex(), 'offset': position})
            position += len(magic)
    for width in (4, 8):
        for order in ('little', 'big'):
            header = b'\xfa\xfa' + (0x53514952).to_bytes(width, order)
            for char_width in (1, 2, 4):
                prefix = header + char_width.to_bytes(width, order) + (0x50415254).to_bytes(width, order)
                position = 0
                while (position := data.find(prefix, position)) >= 0:
                    found.append({'marker': 'Squirrel2.2.5-closure-prefix', 'offset': position,
                                  'integerBytes': width, 'charBytes': char_width, 'byteOrder': order,
                                  'fullBytecodeParserQualified': False})
                    position += len(prefix)
    return found
