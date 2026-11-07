import json
import struct

from squirrel_wave004_model import sha
from squirrel_wave005_execute_inventory import inventory
from squirrel_wave006_programs import OPCODES
from squirrel_wave006_oracle import initialized_globals


def verify(root, image):
    path = root / 'evidence/lanes/squirrel-source-wave005/execute-milestone.json'
    frozen = json.loads(path.read_text())
    census_path = root / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = json.loads(census_path.read_text())
    if sha(image) != census['codeSha256']:
        raise ValueError('Execute code differs from its frozen native module')
    current = inventory(image, census)
    if current != frozen:
        raise ValueError('Execute instruction/data milestone changed')
    table = next(row for row in frozen['dataRanges'] if row['kind'] == 'bounded-pointer-dispatch-table')
    mappings = [{'opcode': opcode, 'sourceName': name, 'originalHandler': table['targets'][opcode]}
                for name, opcode in sorted(OPCODES.items(), key=lambda row: row[1])]
    return {'moduleSha256': sha(image), 'frozenMilestoneSha256': sha(path.read_bytes()),
            'completeSpanSha256': frozen['completeInstructionAndDataSpanSha256'],
            'instructionRanges': frozen['instructionRanges'], 'instructionBytes': frozen['instructionBytes'],
            'classifiedDataBytes': frozen['classifiedDataBytes'], 'opcodeCorrespondenceCandidates': mappings,
            'globalInitializationPrecondition': {'prefixStart': 0x6ff69c, 'prefixEndExclusive': 0x6ff728,
                'prefixSha256': sha(image[0x6ff69c - 0x100000:0x6ff728 - 0x100000]),
                'wholeInitializerOrReturnCreditClaimed': False,
                'objects': [{'address': pointer, 'type': struct.unpack('<II', data)[0], 'value': struct.unpack('<II', data)[1],
                             'sha256': sha(data)} for pointer, data in initialized_globals(image)]},
            'wholeRootComplete': False, 'wholeRootSourceCreditGranted': 0}
