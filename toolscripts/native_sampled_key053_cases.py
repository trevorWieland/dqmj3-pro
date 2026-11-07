import struct

from native_sampled_key053_measure import ENTRIES
from native_sampled_key053_reference import KEYS, f32, floating_bits


STRIDES = [4, 8, 4, 6, 12, 6, 8, 16]


def fixture(format_index, position, repeat, interpolation, cached_index=None,
            scale=0.25, offset=0.0, variant=0, time_ticks=None,
            extreme=False, repeat_after=None):
    ticks = time_ticks or [0, 4, 9, 16]
    maximum_value = 1048575 if format_index in [0, 6] else 4095 if format_index == 2 else 65535
    maximum_slope = 32767 if format_index in [3, 6] else 2047
    values = ([0, maximum_value, maximum_value // 2, 1, maximum_value - 1, 20] if extreme
              else [5, 23, 11, 100, 7, 19])
    incoming = ([-maximum_slope - 1, maximum_slope, 0, 1, -1, 17] if extreme
                else [-33, 80, -128, 20, 47, -12])
    outgoing = ([maximum_slope, -maximum_slope - 1, 1, 0, 15, -17] if extreme
                else [22, -64, 127, 1, -47, 12])
    records = []
    for index, tick in enumerate(ticks):
        time = f32(tick * scale)
        value = f32(values[index] * 0.375 - 4.5)
        first = incoming[index]
        second = outgoing[index]
        if format_index == 0:
            record = struct.pack('<I', tick | values[index] << 12)
        elif format_index == 1:
            record = struct.pack('<ff', time, value)
        elif format_index == 2:
            record = bytes([tick]) + (values[index] | (first & 4095) << 12).to_bytes(3, 'little')
        elif format_index == 3:
            record = struct.pack('<HHh', tick * 32, values[index], first)
        elif format_index == 4:
            record = struct.pack('<fff', time, value, first * 0.03125)
        elif format_index == 5:
            record = bytes([tick]) + struct.pack('<H', values[index])
            record += ((first & 4095) | (second & 4095) << 12).to_bytes(3, 'little')
        elif format_index == 6:
            record = struct.pack('<Ihh', tick | values[index] << 12, first, second)
        else:
            record = struct.pack('<ffff', time, value, first * 0.03125, second * 0.03125)
        records.append(record)
    duration = f32(ticks[-1] * scale)
    header = struct.pack('<ffBBBBBBHffffI', offset, f32(offset + duration),
                         repeat, repeat if repeat_after is None else repeat_after,
                         0xA5, 0x5A, interpolation, 0x69, len(ticks),
                         0.375, -4.5, scale, f32(1.0 / duration), KEYS)
    cache = 0 if cached_index is None else KEYS + cached_index * STRIDES[format_index]
    state = struct.pack('<IiIIIIII', cache, 0x12345, *[0x3F001001 + variant * 17 + at for at in range(6)])
    return {'entry': ENTRIES[format_index], 'formatIndex': format_index,
            'position': f32(position), 'repeat': repeat,
            'repeatAfter': repeat if repeat_after is None else repeat_after,
            'interpolation': interpolation, 'keyCount': len(ticks),
            'timeScale': f32(scale), 'rangeStart': f32(offset), 'extremeRecords': extreme,
            'cachedIndex': cached_index, 'header': header, 'keys': b''.join(records), 'state': state}


def next_float(value, upward):
    if value == 0:
        bits = 1 if upward else 0x80000001
    else:
        bits = floating_bits(value)
        bits += 1 if upward == (value > 0) else -1
    return struct.unpack('<f', struct.pack('<I', bits))[0]


def cases():
    positions = [-8.5, -8.0, -4.5, -4.0, -3.7, -0.5, -0.0, 0.0,
                 0.25, 1.0, 1.00001, 2.25, 3.75, 4.0, 4.25, 8.0, 8.5, 12.0]
    for format_index in range(8):
        for repeat in range(3):
            for interpolation in range(4):
                for index, position in enumerate(positions):
                    yield fixture(format_index, position, repeat, interpolation,
                                  [None, 0, 1, 2, 3][index % 5], variant=index)
        for shape, ticks in enumerate([[0, 16], [0, 3, 16], [0, 1, 3, 7, 12, 16]]):
            for scale in [0.125, 0.3, 2.5]:
                duration = f32(ticks[-1] * scale)
                middle = f32(ticks[1] * scale)
                expanded_positions = [-duration * 1.25, -duration, -duration * 0.125,
                                      next_float(middle, False), middle, next_float(middle, True),
                                      next_float(duration, False), duration,
                                      next_float(duration, True), duration * 2.25]
                for interpolation in [0, 1, 2, 255]:
                    for index, position in enumerate(expanded_positions):
                        yield fixture(format_index, position, 1 if index & 1 else 2,
                                      interpolation, None if index % 3 == 0 else index % len(ticks),
                                      scale=scale, offset=[-3.5, 0.5, 8.0][shape],
                                      variant=index, time_ticks=ticks, extreme=True,
                                      repeat_after=0 if index % 4 == 0 else 2 if index & 1 else 1)


def normalized_target(data):
    pointer, period = struct.unpack_from('<Ii', data)
    return {'cachedKeyOffset': None if pointer == 0 else pointer - KEYS,
            'period': period, 'coefficientBits': list(struct.unpack_from('<IIIIII', data, 8))}


def floor_patterns():
    values = {sign | exponent << 23 | fraction
              for sign in [0, 0x80000000] for exponent in range(256)
              for fraction in [0, 1, 0x3FFFFF, 0x400000, 0x7FFFFF]}
    state = 0x53F1007D
    for unused in range(512):
        state = (state * 1664525 + 1013904223) & 0xFFFFFFFF
        values.add(state)
    return sorted(values)
