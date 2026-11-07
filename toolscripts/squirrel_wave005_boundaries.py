import json
import struct

from squirrel_wave002_boundaries import branch_target
from squirrel_wave004_boundaries import verify as verify_native
from squirrel_wave004_model import sha
from squirrel_wave005_execute_inventory import inventory


def verify(root, image):
    native = verify_native(root, image)
    public_header = root / 'source/squirrel-wave001/upstream/include/squirrel.h'
    manifest = json.loads((root / 'source/squirrel-wave001/upstream-manifest.json').read_text())
    header_record = next(row for row in manifest['files'] if row['path'] == 'upstream/include/squirrel.h')
    if sha(public_header.read_bytes()) != header_record['sha256'] or b'typedef SQUnsignedInteger SQBool;' not in public_header.read_bytes():
        raise ValueError('Verified public unsigned SQBool declaration changed')
    census_path = root / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = json.loads(census_path.read_text())
    claim_path = root / 'evidence/lanes/squirrel-source-wave005/claim.json'
    claim = json.loads(claim_path.read_text())
    entry = next(row for row in census['functions'] if row['address'] == 0x17ffac)
    if entry['ranges'] != [{'start': 0x17ffac, 'endExclusive': 0x1801a0, 'bytes': 500}]:
        raise ValueError('Generic dispatch instruction extent changed')
    span = image[0x17ffac - 0x100000:0x1801a4 - 0x100000]
    if sha(span) != claim['completeSpanSha256'] or struct.unpack_from('<I', span, 500)[0] != 0x01000001:
        raise ValueError('Complete generic dispatch instruction/null-literal span changed')
    calls = []
    for address in range(0x17ffac, 0x1801a0, 4):
        word = struct.unpack_from('<I', image, address - 0x100000)[0]
        target = branch_target(word, address)
        if target is not None:
            calls.append({'callsite': address, 'target': target, 'sha256': sha(struct.pack('<I', word))})
    if sorted({row['target'] for row in calls}) != sorted(entry['calledFunctionAddresses']):
        raise ValueError('Generic direct dependency set differs from its census')
    return {'claimSha256': sha(claim_path.read_bytes()), 'completeSpanSha256': sha(span),
            'instructionBytes': 500, 'literalBytes': 4, 'directCalls': calls,
            'callers': [row['address'] for row in census['functions'] if 0x17ffac in row['calledFunctionAddresses']],
            'nativeDependencyProof': native, 'nextExecuteMilestone': inventory(image, census),
            'raiseErrorABI': {'bits': 32, 'signed': False, 'vfpStorageDoesNotImplyFloat': True,
                              'originalVFPEnabledPrecondition': True, 'calleeSavedD8ThroughD15Checked': True,
                              'publicTypedefReference': {'path': public_header.relative_to(root).as_posix(), 'sha256': sha(public_header.read_bytes())}},
            'executeAndClassAllocationRemainServices': True, 'sourceCodeCreditGranted': 0}
