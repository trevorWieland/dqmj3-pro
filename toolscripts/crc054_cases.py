import hashlib
import random
import zlib


def cases():
    randomizer = random.Random(0x540054)
    rows = []

    def add(seed, payload, alignment=0, null=False, null_length=0, kind='bytes'):
        rows.append(dict(seed=seed, payload=payload, alignment=alignment, null=null,
                         null_length=null_length, kind=kind, case=len(rows)))

    seeds = (0, 0xffffffff, 0x80000000, 0x12345678)
    for value in range(256):
        add(seeds[value % 4], bytes([value]), value % 4, kind='all-byte-values')
    lengths = (0,1,2,3,4,5,7,8,15,16,17,31,32,33,34,35,36,63,64,65,
               127,128,129,255,256,257,511,512,513,1023,1024,1025,4095,4096,4097)
    for length in lengths:
        for alignment in range(4):
            payload = (bytes(length) if alignment == 0 else b'\xff' * length
                       if alignment == 1 else randomizer.randbytes(length))
            add(randomizer.getrandbits(32), payload, alignment, kind='alignment-block-boundaries')
    for bit in range(32):
        add(1 << bit, bytes(range(32)), bit % 4, kind='seed-bit-basis')
    for index in range(64):
        length = randomizer.randrange(8193)
        add(randomizer.getrandbits(32), randomizer.randbytes(length), index % 4,
            kind='deterministic-random')
    for seed in (*seeds, 0xdeadbeef):
        for length in (0, 1, 0xffffffff):
            add(seed, b'', null=True, null_length=length, kind='null-ignores-length-and-seed')
    for alignment in range(4):
        add(0, b'123456789', alignment, kind='published-check-vector')
    add(0x01020304, randomizer.randbytes(16384), 3, kind='long-multi-block')
    if len(rows) != 512:
        raise ValueError('CRC054 deterministic corpus changed')
    return rows


def metadata(case):
    return {key: value for key, value in case.items() if key != 'payload'} | {
        'length': len(case['payload']), 'payloadSha256': hashlib.sha256(case['payload']).hexdigest()}


def expected(case):
    return 0 if case['null'] else zlib.crc32(case['payload'], case['seed'])


def arguments(case):
    return {key: case[key] for key in ('seed', 'payload', 'alignment', 'null', 'null_length')}
