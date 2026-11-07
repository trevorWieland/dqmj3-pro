import math
import struct

from native_sampled_key053_cases import STRIDES
from native_sampled_key053_reference import KEYS, f32


def validate(case):
    fields = struct.unpack('<ffBBBBBBHffffI', case['header'])
    start, end = fields[:2]
    count, scale, inverse = fields[8], fields[11], fields[12]
    format_index = case['formatIndex']
    stride = STRIDES[format_index]
    if count < 2 or len(case['keys']) != count * stride:
        raise ValueError('Domain requires complete multi-key storage')
    duration = f32(end - start)
    if not all(math.isfinite(value) for value in [start, end, scale, inverse, case['position']]):
        raise ValueError('Domain requires finite metadata and query')
    if duration <= 0 or scale <= 0 or inverse != f32(1.0 / duration):
        raise ValueError('Domain requires coherent rounded duration/inverse metadata')
    times = []
    encoded = []
    for index in range(count):
        key = case['keys'][index * stride:(index + 1) * stride]
        if format_index in [1, 4, 7]:
            time = struct.unpack_from('<f', key)[0]
            tick = None
        else:
            tick = int.from_bytes(key[:4], 'little') & 4095 if format_index in [0, 6] else (
                int.from_bytes(key[:2], 'little') if format_index == 3 else key[0])
            time = f32(tick * scale)
            if format_index == 3:
                time = f32(time * 0.03125)
        times.append(time)
        encoded.append(tick)
    if times[0] != 0 or times[-1] != duration or any(right <= left for left, right in zip(times, times[1:])):
        raise ValueError('Domain requires increasing keys spanning the rounded duration')
    pointer = struct.unpack_from('<I', case['state'])[0]
    if pointer and (not KEYS <= pointer < KEYS + len(case['keys']) or (pointer - KEYS) % stride):
        raise ValueError('Domain requires an independently owned aligned cached key')
    period = math.floor(f32(inverse * case['position']))
    if abs(period) > 1024:
        raise ValueError('Domain repeat count is bounded')
    repeat = fields[2] if case['position'] < 0 else fields[3]
    if repeat == 2 and period & 1 and not 0 <= case['position'] < duration:
        shift = f32(duration * (period + 1))
        current = f32(shift - case['position'])
        if format_index in [1, 4, 7]:
            valid = times[0] < current <= times[-1]
        else:
            query = f32(current / scale)
            if format_index == 3:
                query = f32(query * 32.0)
            tick = max(0, int(query))
            valid = encoded[0] < tick <= encoded[-1]
        if not valid:
            raise ValueError('Domain excludes reverse searches at/below the first converted key')
    return True
