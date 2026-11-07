SPECS = {
    'wrong-polynomial': ('0xedb88320u', '0x82f63b78u',
                         dict(seed=0, payload=b'123456789')),
    'omit-initial-complement': ('seed ^ 0xffffffffu', 'seed',
                                dict(seed=0x12345678, payload=b'abc')),
    'omit-final-complement': ('return checksum ^ 0xffffffffu;', 'return checksum;',
                              dict(seed=0, payload=b'abc')),
    'ignore-seed': ('seed ^ 0xffffffffu', '(seed & 0u) ^ 0xffffffffu',
                    dict(seed=0x80000001, payload=b'')),
    'null-preserves-seed': ('if (!buffer) return 0;', 'if (!buffer) return seed;',
                            dict(seed=0xdeadbeef, payload=b'', null=True, null_length=0xffffffff)),
    'signed-input-byte': ('checksum ^= *buffer++;', 'checksum ^= (signed char)*buffer++;',
                          dict(seed=0xffffffff, payload=b'\x80\xff\x01')),
    'skip-last-byte': ('while (length) {', 'if (length) --length;\n    while (length) {',
                       dict(seed=0, payload=b'123456789')),
}


def mutated(text, name):
    before, after, case = SPECS[name]
    if text.count(before) != 1:
        raise ValueError('CRC054 control drift: ' + name)
    return text.replace(before, after)
