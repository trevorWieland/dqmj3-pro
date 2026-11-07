import math
import struct
import sys
from native_caller055_measure import ROOT
from native_caller055_reference import ARENA, CONTEXT, initial
from native_caller055_address_reference import expected as address_expected

sys.path.insert(0, str(ROOT/'toolscripts'))
from native_state055_reference import expected as writer_expected


def u32(value):
    return value & 0xffffffff


def f32(value):
    try:
        return struct.unpack('<f', struct.pack('<f', value))[0]
    except OverflowError:
        return math.copysign(math.inf, value)


def floating(bits):
    return struct.unpack('<f', struct.pack('<I', bits))[0]


def color(values):
    result = 0
    for lane, bits in enumerate(values):
        value = f32(floating(bits)*255.0)
        converted = 0 if math.isnan(value) or value <= 0 else 0xffffffff if value >= 4294967296 else math.trunc(value)
        result |= converted << (lane*8)
    return u32(result)


def bias(bits):
    value = floating(bits)
    if not math.isfinite(value) or not value:
        return 0
    scaled = f32(f32(value+16.0)*256.0)
    limited = min(8191.0, max(0.0, scaled))
    rotated = f32(limited+4096.0 if limited < 4096.0 else limited-4096.0)
    return math.trunc(rotated) & 8191


def expected(case):
    initial_data, cursor, limit = initial(case)
    data = bytearray(initial_data)
    def read(index):
        return struct.unpack_from('<I', data, CONTEXT-ARENA+0x770+index*4)[0]
    def put(index, value):
        struct.pack_into('<I', data, CONTEXT-ARENA+0x770+index*4, u32(value))
    def merge(previous, mask, value):
        return (previous & ~mask) | (value & mask)
    unit = case['unit']
    if not case['enabled'] or not case['resource']:
        if unit > 2:
            return data, cursor, limit, 0x501
        put(0, read(0) & ~(1 << unit))
        return data, cursor, limit, 0x502 if case['enabled'] else 0
    if unit > 2:
        return data, cursor, limit, 0
    index = [1, 17, 25][unit]
    configuration, lod = index+2, index+3
    dims = lambda value:merge(value, 0x07ff07ff, ((case['width'] & 0x7ff) << 16) | (case['height'] & 0x7ff))
    packed_color = color(case['colors'])
    put(configuration, read(configuration) & ~(0x100000 if unit == 0 else 0xc0))
    put(lod, merge(read(lod), 8191, bias(case['bias'])))
    if unit == 0:
        put(index, packed_color)
        put(index+1, dims(read(index+1)))
        put(14, merge(read(14), 15, case['tail']))
    form = case['format']
    regular = form in [0x1906, 0x1907, 0x1908, 0x1909, 0x190a, 0x6700, 0x675a, 0x675b]
    if not regular and form != 0x6050 and not (unit == 0 and form == 0x6040):
        return data, cursor, limit, 0x502
    recipe = read(configuration)
    level = read(lod)
    if form == 0x6040:
        recipe = (recipe & ~0x71000000) | 0x20100006
        recipe = (recipe & ~0x7730) | 0x1100
        level &= ~0x0f0f1fff
    elif form == 0x6050:
        recipe &= ~(0x70007736 if unit == 0 else 0x7706)
        level &= ~0x0f0f1fff
        packed_color = 0
        put(index, 0)
    else:
        if unit == 0:
            recipe = merge(recipe, 0x70000000, 0x30000000 if case['mode'] == 0x6e00 else 0)
        wraps = {0x2901:2, 0x812d:1, 0x812f:0, 0x8370:3}
        for field, shift in [('firstWrap', 12), ('secondWrap', 8)]:
            if case[field] in wraps:
                recipe = merge(recipe, 7 << shift, wraps[case[field]] << shift)
        if case['firstFilter'] in [0x2600, 0x2601]:
            recipe = merge(recipe, 2, 2 if case['firstFilter'] == 0x2601 else 0)
        filters = {0x2600:(0, 0, False), 0x2601:(4, 0, False),
                   0x2700:(0, 0, True), 0x2701:(4, 0, True),
                   0x2702:(0, 0x1000000, True), 0x2703:(4, 0x1000000, True)}
        if case['secondFilter'] in filters:
            sample, blend, levels = filters[case['secondFilter']]
            recipe = merge(recipe, 0x1000004, sample | blend)
            level = merge(level, 0x0f0f0000, ((((case['levels']-1) & 15) << 16) | ((max(0, case['level']) & 15) << 24)) if levels else 0)
    put(configuration, merge(recipe, 0x30, 0x20 if form == 0x675a else 0))
    put(lod, level)
    if unit:
        put(index, packed_color)
        put(index+1, dims(read(index+1)))
    converted = address_expected(dict(address=case['resource'], first=dict(base=0x20000000, length=0x100, offset=0x10000000),
                                      second=dict(base=0, length=0, offset=0), objectAddress=0, objectLength=0))
    put(index+4, merge(read(index+4), 0x3fffffff, converted >> 3))
    put(0, read(0) | (1 << unit))
    if unit:
        put(index+5, merge(read(index+5), 15, case['tail']))
    count, base = (10, 0x81) if unit == 0 else (6, 0x91 if unit == 1 else 0x99)
    data, cursor = writer_expected(dict(base=base, count=count, output=cursor, source=CONTEXT+0x770+index*4, limit=limit), data)
    if unit == 0 and cursor < limit:
        value = struct.unpack_from('<I', data, CONTEXT-ARENA+0x770+14*4)[0]
        struct.pack_into('<II', data, cursor-ARENA, value, 0xf008e)
        cursor += 8
    return data, cursor, limit, 0
