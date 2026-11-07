import struct

from squirrel_wave004_model import sha


def candidate(image, census):
    word = lambda address: struct.unpack_from('<I', image, address - 0x100000)[0]
    if word(0x196f58) != 0x8516d0 or word(0x8516d0) != 0x6a769c or word(0x8516d8) != 0x6a7610:
        raise ValueError('SQClosure constructor/vtable witness changed')
    def witness(start, end, role):
        return {'start': start, 'endExclusive': end, 'bytes': end - start,
                'sha256': sha(image[start - 0x100000:end - 0x100000]), 'role': role}
    return {'schemaVersion': 1, 'moduleSha256': sha(image), 'module': 'update-content0', 'mode': 'ARM',
            'candidateAddress': 0x6a769c, 'tableAddress': 0x8516d0, 'tableSlotAddress': 0x8516d0,
            'tableSlotIndex': 0, 'tableSlotTarget': word(0x8516d0),
            'tableSlotWitness': witness(0x8516d0, 0x8516d4, 'SQClosure virtual destructor target'),
            'constructorVtableLiteral': witness(0x196f58, 0x196f5c, 'constructor vtable-address literal'),
            'constructorLoadAndStore': witness(0x196b30, 0x196b40, 'constructor loads vtable literal and stores object vptr'),
            'releaseSlotAddress': 0x8516d8, 'releaseEntry': 0x6a7610,
            'releaseSlotWitness': witness(0x8516d8, 0x8516dc, 'known release entry'),
            'indirectLoadAndCallWitness': witness(0x6a7618, 0x6a7628, 'release loads object vptr, loads first slot, calls it'),
            'indirectCallsite': 0x6a7624,
            'indirectCallsiteWitness': witness(0x6a7624, 0x6a7628, 'actual indirect call instruction'),
            'provisionalSpan': witness(0x6a769c, 0x6a7774, 'candidate through manually inspected return at0x6a7770'),
            'verifiedFunctionBoundary': False, 'verifiedPoolOrFragmentClosure': False,
            'frozenCensusEntryPresent': any(row['address'] == 0x6a769c for row in census['functions']),
            'frozenCensusOwnersAtEntry': [row['address'] for row in census['functions']
                if any(span['start'] <= 0x6a769c < span['endExclusive'] for span in row['ranges'])],
            'frozenCensusModified': False, 'functionCountCreditGranted': 0, 'sourceCodeCreditGranted': 0,
            'byteDenominatorModified': False,
            'limitations': ['boundary and body/pool ownership remain unqualified',
                            'metadata seed for later analysis, not a new accepted function',
                            'original bytes and disassembly remain private']}
