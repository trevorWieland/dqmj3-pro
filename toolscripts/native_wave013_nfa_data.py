import ctypes
import json
import struct

from native_wave013_common import ROOT, MODULE_SHA, sha, record


class UnicodeData(ctypes.Structure):
    _fields_ = [('cases', ctypes.c_void_p), ('case_count', ctypes.c_uint),
                ('properties', ctypes.c_void_p), ('property_count', ctypes.c_uint),
                ('ranges', ctypes.c_void_p), ('range_count', ctypes.c_uint)]


def load():
    path = ROOT / 'evidence/lanes/wave013-native/nfa-unicode-data-proposal.json'
    meta = json.loads(path.read_text())
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if sha(image) != MODULE_SHA:
        raise ValueError('Unicode provider original identity differs')
    scope_path = ROOT / 'evidence/lanes/executable-scope/scope.json'
    scope = json.loads(scope_path.read_text())
    main = next(row['mainImage'] for row in scope['versions'] if row['version'] == 'update-content0')
    if main['codeSha256'] != MODULE_SHA:
        raise ValueError('Unicode nonexecutable segment proof identity differs')
    values, segments = {}, []
    for row in meta['regions']:
        raw = image[row['start'] - 0x100000:row['start'] - 0x100000 + row['bytes']]
        if sha(raw) != row['sha256']:
            raise ValueError('Unicode provider region identity differs')
        segment = next((item for item in main['segments'] if item['name'] in ['rodata','data']
                        and item['address'] <= row['start'] < row['start']+row['bytes'] <= item['address']+item['initializedBytes']), None)
        if segment is None:
            raise ValueError('Unicode service region is not initialized nonexecutable data')
        segments.append({'name': row['name'], 'originalSegment': segment['name'],
                         'immutableAsConsumedByComponent': True, 'originalGlobalImmutabilityClaimed': False})
        values[row['name']] = raw
    groups = list(struct.iter_unpack('<4H', values['caseGroups']))
    indices = list(struct.iter_unpack('<2I', values['propertyIndex']))
    ranges = list(struct.iter_unpack('<2H', values['rangePairs']))
    if len(groups) != 1398 or len(indices) != 132 or len(ranges) != 2574:
        raise ValueError('Unicode provider counts differ')
    if any(a[0] >= b[0] for a, b in zip(groups, groups[1:])):
        raise ValueError('Unicode case keys are not strictly ordered')
    if any(first > last for first, last in ranges):
        raise ValueError('Unicode range is inverted')
    if any(start > len(ranges) or count > len(ranges) - start for start, count in indices):
        raise ValueError('Unicode index escapes qualified range data')
    return {'metadata': meta, 'proposal': record(path), 'values': values, 'scope': record(scope_path), 'segments': segments}


def arm_blocks(data, base=0x5000000):
    meta = data['metadata']
    return [(base, struct.pack('<6I', base + 0x1000, meta['caseGroupCount'], base + 0x4000,
                              meta['propertyCount'], base + 0x5000, meta['rangePairCount'])),
            *[(base + offset, data['values'][name]) for name, offset in
              [('caseGroups', 0x1000), ('propertyIndex', 0x4000), ('rangePairs', 0x5000)]]]


def bind_windows(library, data):
    buffers = [ctypes.create_string_buffer(data['values'][name]) for name in
               ['caseGroups', 'propertyIndex', 'rangePairs']]
    meta = data['metadata']
    provider = UnicodeData(ctypes.addressof(buffers[0]), meta['caseGroupCount'], ctypes.addressof(buffers[1]),
                           meta['propertyCount'], ctypes.addressof(buffers[2]), meta['rangePairCount'])
    library.pattern_bind_unicode_data.argtypes = [ctypes.POINTER(UnicodeData)]
    library.pattern_bind_unicode_data.restype = ctypes.c_int
    if library.pattern_bind_unicode_data(ctypes.byref(provider)) != 1:
        raise RuntimeError('Native Unicode provider refused validated immutable data')
    return {'provider': provider, 'buffers': buffers,
            'providerBefore': ctypes.string_at(ctypes.addressof(provider), ctypes.sizeof(provider)),
            'before': [ctypes.string_at(ctypes.addressof(value), ctypes.sizeof(value)) for value in buffers]}


def unchanged(binding):
    return ctypes.string_at(ctypes.addressof(binding['provider']), ctypes.sizeof(binding['provider'])) == binding['providerBefore'] and all(ctypes.string_at(ctypes.addressof(value), ctypes.sizeof(value)) == raw
               for value, raw in zip(binding['buffers'], binding['before']))
