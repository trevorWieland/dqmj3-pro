import struct


def image():
    raw = bytearray(0x50)
    struct.pack_into('<10I', raw, 0, 0x28, 0x28, 4, 0x2c, 24, 0x44, 4, 0x48, 0, 0x50)
    struct.pack_into('<I', raw, 0x28, 0)
    struct.pack_into('<6I', raw, 0x2c, 0, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0)
    struct.pack_into('<I', raw, 0x44, 0xffffffff)
    return bytes(raw)
