import math
import struct
from collections import Counter

NULL, INTEGER, FLOAT, BOOL, STRING = 0x01000001, 0x05000002, 0x05000004, 0x01000008, 0x08000010
NATIVE, PROTOTYPE, SCRIPT, WEAK = 0x08000200, 0x08002000, 0x08000100, 0x08010000


def cases():
    return [{'value_kind': value, 'old_kind': old, 'query_kind': query}
            for value in range(6) for old in range(5) for query in range(4)]


def validate_case(case):
    if not isinstance(case,dict) or set(case) != {'value_kind','old_kind','query_kind'} or any(type(value) is not int for value in case.values()):
        raise ValueError('Table case requires exact integer fields')
    if not 0 <= case['value_kind'] < 6 or not 0 <= case['old_kind'] < 5 or not 0 <= case['query_kind'] < 4:
        raise ValueError('Table case escaped its bounded fixture domain')


def parse(words):
    if not isinstance(words,list) or not 24 <= len(words) <= 4096 or any(type(value) is not int or not 0 <= value <= 0xffffffff for value in words):
        raise ValueError('Truncated table observation')
    header, cursor = words[:24], 24
    if header[8] > 8 or header[11] > 128 or header[15] > 64: raise ValueError('Table observation counts escaped fixture capacity')
    def rows(count, width):
        nonlocal cursor
        result = [words[cursor + index * width:cursor + (index + 1) * width] for index in range(count)]
        cursor += count * width
        if any(len(row) != width for row in result): raise ValueError('Truncated table observation rows')
        return result
    operations = rows(19, 4)
    keys = rows(21, 5)
    strings = rows(header[8], 5)
    topology = rows(header[15], 8)
    events = rows(header[11], 8)
    counters = words[cursor:cursor + 8]
    if len(counters) != 8 or cursor + 8 != len(words): raise ValueError('Table observation extent mismatch')
    return {'header': header, 'operations': operations, 'keys': keys, 'strings': strings,
            'topology': topology, 'events': events, 'counters': counters}


def string_hash(data):
    value = len(data)
    for byte in data:
        code = (byte if byte < 128 else byte - 256) & 0xffff
        value ^= ((value << 5) + (value >> 2) + code) & 0xffffffff
        value &= 0xffffffff
    return value


def hash_key(row, width, strings):
    kind, low, high, identity = row[:4]
    bits = low | high << 32
    if kind in (BOOL, INTEGER): return low
    if kind == FLOAT:
        number = struct.unpack('<f', struct.pack('<I', low))[0]
        if math.isnan(number): return 0
        if number >= 2147483648: return 0x7fffffff
        if number < -2147483648: return 0x80000000
        return math.trunc(number) & 0xffffffff
    if kind == STRING: return strings[identity]
    if bits >> (width * 8 - 1): bits -= 1 << (width * 8)
    return (bits >> 3) & 0xffffffff


def signature(row):
    kind, low, high, identity = row[:4]
    return (kind, identity if kind & 0x08000000 else low | high << 32)


def value(case, unwrap):
    return [(INTEGER, 777), (NATIVE, 22), (PROTOTYPE, 20), (NATIVE if unwrap else WEAK, 22 if unwrap else 27),
            (SCRIPT, 25), (STRING, 10)][case['value_kind']]


def validate(words, case):
    validate_case(case)
    data = parse(words)
    h, operations, keys, topology, events = (data[key] for key in ('header','operations','keys','topology','events'))
    hit = case['query_kind'] < 2
    selected = value(case, True) if hit else [(INTEGER,7),(PROTOTYPE,21),(NATIVE,23),(SCRIPT,26),(NATIVE,23)][case['old_kind']]
    base = [0,case['value_kind'],case['old_kind'],case['query_kind'],int(hit),*selected,4,3,0]
    if h[:10] != base or h[12:20] != [32,18,h[14],32,0,0,0,1] or h[20:22] != [NULL,NULL] or h[22] not in (4,8) or h[23] != h[22] * 5:
        raise ValueError('Table independent semantic/layout header differs')
    if any(data['counters']): raise ValueError('Table ownership left nonzero reference counters')
    expected_frees = [100,101,102,103,1,24,10,11,12]
    expected_frees += [[],[20,22],[20],[20,22,27],[20,25],[]][case['value_kind']]
    expected_frees += [[],[21],[21,23],[21,26],[21,23]][case['old_kind']]
    if Counter(event[0] for event in events) != Counter(expected_frees) or h[10] != len(expected_frees):
        raise ValueError('Table actual lifetime disposal set differs')
    target = 5 if case['query_kind'] == 0 else 16
    expected_map = {signature(row): (INTEGER,100 + index) for index,row in enumerate(keys[:19])}
    expected_map[signature(keys[target])] = value(case, False)
    actual_map = {}
    for row in topology:
        if row[1] != NULL:
            key = signature([row[1],row[2],row[3],row[7]])
            if key in actual_map: raise ValueError('Duplicate raw-key table node')
            actual_map[key] = tuple(row[5:7])
    if actual_map != expected_map or len(actual_map) != 18: raise ValueError('Table logical map differs')
    hashes = {10:string_hash(b'alpha\x80'),11:string_hash(b'beta\xff'),12:string_hash(b'alpha\x80')}
    for row in data['strings']:
        if row[2] != hashes[row[0]] or row[3:] != [0,1]: raise ValueError('Actual string provider hash/cleanup differs')
    for row in keys:
        if row[4] != hash_key(row,h[22],hashes): raise ValueError('Native full-width/raw scalar hash differs')
    for index,row in enumerate(topology):
        if row[0] != index or row[4] > len(topology): raise ValueError('Table collision pointer escaped source-created node array')
        cursor, seen = index, set()
        while topology[cursor][4]:
            if cursor in seen: raise ValueError('Table collision chain contains a cycle')
            seen.add(cursor)
            cursor = topology[cursor][4] - 1
        if row[1] == NULL: continue
        cursor = hash_key([row[1],row[2],row[3],row[7]],h[22],hashes) & 31
        seen = set()
        while cursor != index:
            if cursor in seen or not topology[cursor][4]: raise ValueError('Key unreachable from its independently computed native bucket')
            seen.add(cursor)
            cursor = topology[cursor][4] - 1
    if not 0 <= h[14] < len(topology) or topology[h[14]][1] != NULL or topology[h[14]][4]:
        raise ValueError('Table first_free is not a free source node')
    for index,op in enumerate(operations):
        expected = (INTEGER,115 if index in (5,15) else 100 + index)
        if signature(keys[index]) == signature(keys[target]): expected = value(case, True)
        if op != [int(index not in (3,7,15,16)),1,*expected]: raise ValueError('Table insert/lookup result differs')
    old_ids = {1:{21},2:{21,23},3:{21,26},4:{21,23}}
    observe_hit = hit and case['old_kind'] != 4
    old_ids = old_ids.get(case['old_kind'],set())
    for event in events:
        if event[0] not in old_ids: continue
        published = value(case,True) if observe_hit else (NULL,0)
        references = (3 if case['value_kind']==5 else 2) if observe_hit and published[0]&0x08000000 else 0
        if event[2:5] != [*published,references]: raise ValueError('Old destination observed wrong publication/retention order')
    return {'logicalMap': sorted((key,val) for key,val in actual_map.items()),
            'selected': [h[4],h[5],h[6]], 'disposalIds': sorted(expected_frees),
            'nativeTopologyValidatedIndependently': True, 'pointerBytes': h[22]}
