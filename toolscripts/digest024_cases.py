import hashlib
import math
import random
import struct


IV = [0x67452301, 0xefcdab89, 0x98badcfe, 0x10325476]
MASK = 0xffffffff


def expected(memory, state_offset, block_offset):
    initial = list(struct.unpack_from("<4I", memory, state_offset))
    state = initial.copy()
    words = struct.unpack_from("<16I", memory, block_offset)
    rotations = [[7, 12, 17, 22], [5, 9, 14, 20], [4, 11, 16, 23], [6, 10, 15, 21]]
    for step in range(64):
        slot = (-step) % 4
        b, c, d = (state[(slot + delta) % 4] for delta in [1, 2, 3])
        family = step // 16
        if family == 0:
            nonlinear, index = d ^ (b & (c ^ d)), step
        elif family == 1:
            nonlinear, index = c ^ (d & (b ^ c)), (5 * step + 1) % 16
        elif family == 2:
            nonlinear, index = b ^ c ^ d, (3 * step + 5) % 16
        else:
            nonlinear, index = c ^ (b | ~d), (7 * step) % 16
        value = (state[slot] + nonlinear + words[index] + int(abs(math.sin(step + 1)) * (1 << 32))) & MASK
        distance = rotations[family][step % 4]
        state[slot] = (b + ((value << distance) | (value >> (32 - distance)))) & MASK
    output = bytearray(memory)
    output[state_offset:state_offset + 16] = struct.pack("<4I", *[(a + b) & MASK for a, b in zip(initial, state)])
    return bytes(output)


def cases():
    rng = random.Random(0xd0241b25)
    patterns = [bytes(64), bytes([255]) * 64, bytes(range(64)), bytes([0x55, 0xaa]) * 32,
                bytes([0x80]) + bytes(63)]
    states = [IV, [0] * 4, [MASK] * 4, [0x80000000] * 4, [0x7fffffff] * 4]
    for index in range(512):
        memory = bytearray(rng.randbytes(4096))
        state_offset, block_offset = 512 + (index % 8) * 4, 128 + index % 4
        block = patterns[index % len(patterns)] if index < 128 else rng.randbytes(64)
        memory[block_offset:block_offset + 64] = block
        words = states[index % len(states)] if index < 128 else [rng.getrandbits(32) for unused in range(4)]
        memory[state_offset:state_offset + 16] = struct.pack("<4I", *words)
        yield {"id": "separate-" + str(index), "memory": bytes(memory), "state": state_offset, "block": block_offset,
               "seed": index, "kind": "separate-guarded-state-and-input"}
    for delta in range(-63, 16):
        for variant in range(4):
            memory = bytearray(rng.randbytes(4096))
            state_offset, block_offset = 512, 512 + delta
            memory[state_offset:state_offset + 16] = struct.pack("<4I", *states[variant])
            yield {"id": "overlap-" + str(delta) + "-" + str(variant), "memory": bytes(memory), "state": state_offset,
                   "block": block_offset, "seed": 512 + delta + 63 + variant, "kind": "all-physically-overlapping-offsets"}


def messages():
    yield from [b"", b"a", b"abc", b"message digest", b"abcdefghijklmnopqrstuvwxyz",
                b"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789", b"1234567890" * 8]
    for size in [55, 56, 57, 63, 64, 65, 119, 120, 127, 128, 129, 255, 256, 1024, 4096]:
        yield bytes((index * 73 + size) & 255 for index in range(size))


def padded(message):
    data = message + b"\x80"
    data += bytes((56 - len(data)) % 64)
    return data + struct.pack("<Q", len(message) * 8)


def fingerprint(memory):
    return hashlib.sha256(memory).hexdigest()
