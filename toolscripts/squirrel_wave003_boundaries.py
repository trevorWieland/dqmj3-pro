import hashlib
import json
import struct

from squirrel_wave002_boundaries import branch_target


def verify(root, image):
    claim_path = root / 'evidence/lanes/squirrel-source-wave003/claim.json'
    claim = json.loads(claim_path.read_text())
    census_path = root / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = json.loads(census_path.read_text())
    native_path = root / 'evidence/lanes/inventory-wave001/update-native.json'
    native = json.loads(native_path.read_text())
    sha = lambda data: hashlib.sha256(data).hexdigest()
    if claim['moduleSha256'] != sha(image) or census['codeSha256'] != sha(image) or native['codeSha256'] != sha(image):
        raise ValueError('Controller boundary/binding evidence identifies another module')
    address, length, pool = claim['address'], claim['instructionBytes'], claim['poolBytes']
    body = next(row for row in census['functions'] if row['address'] == address)
    if body['mode'] != 'ARM' or body['ranges'] != [{'start': address, 'endExclusive': address + length, 'bytes': length}]:
        raise ValueError('Controller entry/contiguous body changed')
    code = image[address - 0x100000:address - 0x100000 + length + pool]
    if sha(code) != claim['originalSpanSha256']:
        raise ValueError('Controller complete instruction/literal pool extent changed')
    calls = []
    for index in range(length // 4):
        target = branch_target(struct.unpack_from('<I', code, index * 4)[0], address + index * 4)
        if target is not None:
            calls.append({'callsite': address + index * 4, 'target': target, 'callsiteSha256': sha(code[index * 4:index * 4 + 4])})
    if sorted({row['target'] for row in calls}) != sorted(body['calledFunctionAddresses']):
        raise ValueError('Controller static direct-call closure differs from census')
    candidates = [entry for table in native['nativeBindingTableCandidates'] for entry in table['entries']
                  if entry['functionAddress'] == address]
    if len(candidates) != 1:
        raise ValueError('Controller lacks one uniquely measured native binding record')
    binding = candidates[0]
    record = image[binding['tableAddress'] - 0x100000:binding['tableAddress'] - 0x100000 + 16]
    name = image[binding['namePointer'] - 0x100000:binding['namePointer'] - 0x100000 + binding['nameBytes']]
    if sha(record) != binding['recordSha256'] or sha(name) != binding['nameSha256'] or name != b'array':
        raise ValueError('Measured array registration record/name changed')
    name_pointer, function_pointer, parameter_check, mask_pointer = struct.unpack('<IIiI', record)
    if function_pointer != address or parameter_check != -2 or mask_pointer != binding['typeMaskPointer']:
        raise ValueError('Native array arity/type-mask record changed')
    mask_start = mask_pointer - 0x100000
    mask = image[mask_start:image.index(0, mask_start, mask_start + 16)]
    return {'claimSha256': sha(claim_path.read_bytes()), 'censusSha256': sha(census_path.read_bytes()),
            'registrationEvidenceSha256': sha(native_path.read_bytes()), 'instructionBytes': length, 'literalPoolBytes': pool,
            'completeSpanSha256': sha(code), 'directCalls': calls,
            'nativeBinding': {'recordAddress': binding['tableAddress'], 'recordSha256': sha(record),
                              'functionAddress': address, 'mode': 'ARM', 'name': name.decode(),
                              'minimumArgumentsIncludingReceiver': 2, 'typeMask': mask.decode('ascii')},
            'sourceAcceptanceGranted': False}
