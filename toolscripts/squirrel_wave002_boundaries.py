import hashlib
import json
import struct


def branch_target(word, address):
    if word & 0x0f000000 != 0x0b000000:
        return None
    delta = (word & 0xffffff) << 2
    if delta & 0x2000000:
        delta -= 0x4000000
    return address + 8 + delta


def verify(root, original):
    claim = json.loads((root / 'evidence/lanes/squirrel-source-wave002/claim.json').read_text())
    if hashlib.sha256(original).hexdigest() != claim['moduleSha256']:
        raise ValueError('Boundary proof belongs to a different native module')
    census_path = root / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = json.loads(census_path.read_text())
    functions = {row['address']: row for row in census['functions']}
    proof = []
    for row in claim['entries']:
        start, size = row['address'], row['instructionBytes']
        end = start + size
        body = functions[start]
        if row['mode'] != 'ARM' or body['mode'] != 'ARM' or body['ranges'] != row['censusBodyRanges']:
            raise ValueError('Native entry mode or complete census body changed')
        if body['ranges'] != [{'start': start, 'endExclusive': end, 'bytes': size}]:
            raise ValueError('Expected one closed contiguous native instruction body')
        code = original[start - 0x100000:end - 0x100000 + row['poolBytes']]
        if hashlib.sha256(code).hexdigest() != row['originalSpanSha256']:
            raise ValueError('Instruction/pool span changed since lane claim')
        words = struct.unpack('<' + 'I' * (size // 4), code[:size])
        if words[0] >> 16 != 0xe92d or words[-1] >> 16 != 0xe8bd or not words[-1] & 0x8000:
            raise ValueError('Original root no longer has the reviewed frame and return boundaries')
        calls = []
        for index, word in enumerate(words):
            address = start + index * 4
            target = branch_target(word, address)
            if target is not None:
                calls.append({'callsite': address, 'target': target,
                              'callsiteSha256': hashlib.sha256(code[index * 4:index * 4 + 4]).hexdigest()})
        if sorted({call['target'] for call in calls}) != sorted(row['directCalls']):
            raise ValueError('Static direct-call closure differs from measured census')
        caller = functions[0x1b33dc]
        witnesses = []
        for part in caller['ranges']:
            for address in range(part['start'], part['endExclusive'], 4):
                word = struct.unpack_from('<I', original, address - 0x100000)[0]
                if branch_target(word, address) == start:
                    witnesses.append({'function': caller['address'], 'callsite': address, 'mode': 'ARM',
                                      'callsiteSha256': hashlib.sha256(original[address - 0x100000:address - 0x100000 + 4]).hexdigest()})
        if not witnesses:
            raise ValueError('No independently owned native caller establishes root entry')
        proof.append({'address': start, 'mode': 'ARM', 'instructionBytes': size, 'literalPoolBytes': row['poolBytes'],
                      'originalSpanSha256': row['originalSpanSha256'], 'directCalls': calls, 'callers': witnesses,
                      'boundaryStatus': 'census-frame-return-direct-call-and-bounded-execution-corroborated'})
    return {'moduleSha256': claim['moduleSha256'], 'censusSha256': hashlib.sha256(census_path.read_bytes()).hexdigest(),
            'functions': proof, 'instructionAndPoolBytes': sum(row['instructionBytes'] + row['poolBytes'] for row in claim['entries']),
            'sourceAcceptanceGranted': False}
