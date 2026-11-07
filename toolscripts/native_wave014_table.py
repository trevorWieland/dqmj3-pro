import argparse
import hashlib
import json
import math
import struct
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
SOURCE = ROOT / 'src/native/wave014'
OUT = ROOT / 'evidence/lanes/wave014'
IMAGE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'


def rounded(value):
    value = struct.unpack('<f', struct.pack('<f', value))[0]
    return 0.0 if value == 0 else value


def circle(index):
    quadrant, step = divmod(index % 256, 64)
    angle = step * math.pi / 128
    sine, cosine = math.sin(angle), math.cos(angle)
    return [(sine, cosine), (cosine, -sine), (-sine, -cosine), (-cosine, sine)][quadrant]


def entries():
    result = []
    for index in range(256):
        sine, cosine = circle(index)
        next_sine, next_cosine = circle(index + 1)
        result.append(tuple(rounded(value) for value in [sine, cosine, next_sine - sine, next_cosine - cosine]))
    return result


def literal(value):
    text = format(value, '.9g')
    return text + ('.0' if '.' not in text and 'e' not in text else '') + 'f'


def generate():
    rows = entries()
    raw = b''.join(struct.pack('<4f', *row) for row in rows)
    SOURCE.mkdir(parents=True, exist_ok=True)
    output = SOURCE / 'sine_table.inc'
    output.write_text('\n'.join('{' + ', '.join(literal(value) for value in row) + '},' for row in rows) + '\n')
    return rows, raw, output


def verify():
    rows, derived, output = generate()
    path = ROOT / 'generated/update-content0/code.bin'
    if not path.exists():
        path = ROOT / 'work/native-ci-local-validation/private/generated/update-content0/code.bin'
    original = path.read_bytes()
    if hashlib.sha256(original).hexdigest() != IMAGE_SHA:
        raise ValueError('Canonical update image differs')
    expected = original[0x7d6f20 - 0x100000:0x7d7f20 - 0x100000]
    differences = [index for index in range(1024) if derived[index * 4:index * 4 + 4] != expected[index * 4:index * 4 + 4]]
    if differences:
        raise ValueError('Independent mathematical table differs at float indices: ' + repr(differences))
    OUT.mkdir(parents=True, exist_ok=True)
    (OUT / 'derived-table.json').write_text(json.dumps({'schemaVersion': 1, 'status': 'all-derived-floats-bit-identical',
        'formula': '256 uniformly spaced angles; double-precision quadrant sine/cosine; adjacent double differences; float32 rounding; canonical positive zeros',
        'originalAddress': 0x7d6f20, 'bytes': 4096, 'comparedFloats': 1024, 'differentFloatBits': 0,
        'derivedSha256': hashlib.sha256(derived).hexdigest(), 'originalSha256': hashlib.sha256(expected).hexdigest(),
        'generatedSource': {'path': output.relative_to(ROOT).as_posix(), 'sha256': hashlib.sha256(output.read_bytes()).hexdigest()},
        'derivationReadsOriginal': False, 'verificationReadsOriginal': True, 'originalTableCopied': False,
        'recoveredCodeCreditBytes': 0, 'derivedNumericDataBytes': 4096,
        'rejectedMethods': [{'method': 'differences of previously float32-rounded samples', 'sineSlopeMismatches': 252,
            'cosineSlopeMismatches': 252}, {'method': 'direct full-circle libm samples without quadrant canonicalization',
            'issue': 'Tiny quadrant residuals and signed zeros do not match canonical table entries'}]}, indent=2) + '\n')
    print(json.dumps({'status': 'all-derived-floats-bit-identical', 'floats': 1024,
        'sha256': hashlib.sha256(derived).hexdigest()}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--verify-original', action='store_true')
    arguments = parser.parse_args()
    if arguments.verify_original:
        verify()
    else:
        rows, data, path = generate()
        print(json.dumps({'status': 'mathematically-derived', 'bytes': len(data),
            'sha256': hashlib.sha256(data).hexdigest(), 'path': path.relative_to(ROOT).as_posix()}))
