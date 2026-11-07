import hashlib
import random


CAPACITY = 0xa40


def bitmap(specification):
    pattern = specification.get('pattern', 'empty')
    if pattern == 'empty':
        return bytes(CAPACITY)
    if pattern == 'full':
        return bytes([255]) * CAPACITY
    if pattern == 'alternating':
        return bytes(index % 2 for index in range(CAPACITY))
    if pattern == 'edges-free':
        return bytes([0] * 4 + [7] * (CAPACITY - 8) + [0] * 4)
    if pattern == 'middle-free':
        return bytes([9] * 100 + [0] * 33 + [3] * (CAPACITY - 133))
    if pattern == 'random':
        rng = random.Random(specification['seed'])
        return bytes(0 if rng.randrange(4) else rng.randrange(1, 256) for _ in range(CAPACITY))
    raise ValueError('Unknown synthetic bitmap pattern')


def apply(occupied, cursor, blocks, operation='allocate', start=0):
    if len(occupied) != CAPACITY or not 0 <= cursor <= CAPACITY or not 0 <= blocks <= 0xffffffff:
        raise ValueError('Invalid fixed-arena domain')
    result = bytearray(occupied)
    if operation == 'free':
        if not 0 <= start <= CAPACITY or blocks > CAPACITY - start:
            raise ValueError('Free range exceeds logical arena')
        result[start:start + blocks] = bytes(blocks)
        return {'slot': None, 'next': cursor, 'occupied': bytes(result)}
    if operation != 'allocate':
        raise ValueError('Unknown arena operation')
    if blocks:
        for low, high in [(cursor, CAPACITY), (0, cursor)]:
            position = low
            while position < high:
                length = 0
                while position + length < high and result[position + length] == 0:
                    length += 1
                    if length == blocks:
                        result[position:position + blocks] = bytes([1]) * blocks
                        return {'slot': position, 'next': position + blocks, 'occupied': bytes(result)}
                position += length + 1
    return {'slot': None, 'next': cursor, 'occupied': bytes(result)}


def fixtures():
    result = []
    for pattern in ['empty', 'full', 'alternating', 'edges-free', 'middle-free']:
        for cursor in [0, 1, 100, CAPACITY - 1, CAPACITY]:
            for blocks in [0, 1, 2, 3, 16, 33, CAPACITY, CAPACITY + 1, 0xffffffff]:
                result.append({'pattern': pattern, 'next': cursor, 'blocks': blocks, 'operation': 'allocate'})
    for seed in range(64):
        result.append({'pattern': 'random', 'seed': seed, 'next': seed * 37 % (CAPACITY + 1),
                       'blocks': [1, 2, 3, 4, 16, 33, 127, 0xffffffff][seed % 8], 'operation': 'allocate'})
    for pattern in ['empty', 'full', 'alternating', 'random']:
        for start, blocks in [(0, 0), (0, 1), (1, 1), (CAPACITY, 0), (CAPACITY - 1, 1), (0, CAPACITY), (100, 33)]:
            result.append({'pattern': pattern, 'seed': 12012, 'next': CAPACITY // 2,
                           'blocks': blocks, 'start': start, 'operation': 'free'})
    return result


def summary(answer):
    return {'slot': answer['slot'], 'next': answer['next'],
            'occupiedSha256': hashlib.sha256(answer['occupied']).hexdigest()}
