import json
import struct

import unicorn
from unicorn import arm_const as arm

from squirrel_wave002_boundaries import branch_target
from squirrel_wave002_oracle import STACK
from squirrel_wave004_model import sha, NULL


def verify(root, image):
    claim_path = root / 'evidence/lanes/squirrel-source-wave004/claim.json'
    claim = json.loads(claim_path.read_text())
    census_path = root / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = json.loads(census_path.read_text())
    public_path = root / 'source/squirrel-wave001/upstream/squirrel/sqvm.cpp'
    type_path = root / 'source/squirrel-wave001/upstream/squirrel/sqstate.cpp'
    manifest_path = root / 'source/squirrel-wave001/upstream-manifest.json'
    manifest = json.loads(manifest_path.read_text())
    for path in (public_path, type_path):
        record = next(item for item in manifest['files'] if item['path'] == path.relative_to(manifest_path.parent).as_posix())
        if sha(path.read_bytes()) != record['sha256']:
            raise ValueError('Public semantic reference differs from its verified original archive manifest')
    if claim['moduleSha256'] != sha(image) or census['codeSha256'] != sha(image):
        raise ValueError('Native-call inventory identifies another executable module')
    body = next(row for row in census['functions'] if row['address'] == claim['address'])
    if body['mode'] != 'ARM' or body['ranges'] != claim['instructionRanges']:
        raise ValueError('Discontiguous native dispatch instruction ranges changed')
    start, end = claim['address'], claim['endExclusive']
    if sha(image[start - 0x100000:end - 0x100000]) != claim['completeSpanSha256']:
        raise ValueError('Complete native-call instruction/string/literal extent changed')
    calls = []
    for interval in claim['instructionRanges']:
        for address in range(interval['start'], interval['endExclusive'], 4):
            word = struct.unpack_from('<I', image, address - 0x100000)[0]
            target = branch_target(word, address)
            if target is not None:
                calls.append({'callsite': address, 'target': target, 'callsiteSha256': sha(struct.pack('<I', word))})
    if sorted({row['target'] for row in calls}) != sorted(body['calledFunctionAddresses']):
        raise ValueError('Native-call direct-call census and decoded closure disagree')
    callers = [row for row in census['functions'] if start in row['calledFunctionAddresses']]
    if sorted(row['address'] for row in callers) != [0x17ffac, 0x18d65c]:
        raise ValueError('Native-call canonical caller set changed')
    literals = []
    for address, text in ((0x197330, b'Native stack overflow'), (0x197348, b'wrong number of parameters')):
        encoded = image[address - 0x100000:address - 0x100000 + len(text) + 1]
        if encoded != text + b'\0':
            raise ValueError('Native-call eight-bit ASCII/NUL error literal changed')
        literals.append({'address': address, 'bytesIncludingTerminator': len(encoded), 'sha256': sha(encoded),
                         'encoding': '8-bit-ASCII-with-single-byte-NUL', 'wcharTUsed': False})
    initializer = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    initializer.mem_map(0x100000, 0x800000)
    initializer.mem_write(0x100000, image)
    initializer.mem_map(STACK, 0x10000)
    initializer.reg_write(arm.UC_ARM_REG_SP, STACK + 0xff00)
    initializer.emu_start(0x6ff69c, 0x6ff6b0, count=5)
    if bytes(initializer.mem_read(0x8c06e8, 8)) != struct.pack('<II', NULL, 0):
        raise ValueError('Original startup prefix does not establish the admitted global null state')
    return {'claimSha256': sha(claim_path.read_bytes()), 'censusSha256': sha(census_path.read_bytes()),
            'publicReference': {'path': public_path.relative_to(root).as_posix(), 'sha256': sha(public_path.read_bytes()),
                                'identity': 'verified-upstream-2.2.5-SQVM::CallNative-semantic-reference'},
            'typeMaskReference': {'path': type_path.relative_to(root).as_posix(), 'sha256': sha(type_path.read_bytes()),
                                  'identity': 'CompileTypemask-n-is-raw-integer-or-float-bits-6'},
            'instructionBytes': 1540, 'inlineStringAndLiteralBytes': 64,
            'completeSpanSha256': claim['completeSpanSha256'], 'directCalls': calls,
            'callers': [row['address'] for row in callers],
            'errorLiteralEncoding': literals,
            'errorServiceABI': {'vmPointerBits': 32, 'formatCodeUnitBits': 8, 'indexBits': 32,
                                'maskBits': 32, 'maskSigned': True, 'objectTagBits': 32,
                                'formattedErrorAndTypeErrorServicesRemainModeled': True},
            'globalNullPrecondition': {'address': 0x8c06e8, 'type': NULL, 'value': 0,
                                       'originalInitializer': 0x6ff69c, 'executedPrefixEndExclusive': 0x6ff6b0,
                                       'prefixSha256': sha(image[0x6ff69c - 0x100000:0x6ff6b0 - 0x100000]),
                                       'prefixExecutionIsPreconditionEvidenceOnly': True},
            'sourceAcceptanceGranted': False}
