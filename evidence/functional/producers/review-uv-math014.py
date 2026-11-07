import hashlib
import io
import json
from pathlib import Path

from elftools.elf.elffile import ELFFile


ROOT = Path.cwd()
FOLDER = Path('evidence/lanes/wave014')


def read(path):
    return json.loads((ROOT / path).read_text())


def pin(path):
    path = Path(path)
    raw = (ROOT / path).read_bytes()
    return {'path': path.as_posix(), 'sha256': hashlib.sha256(raw).hexdigest(), 'bytes': len(raw)}


review = read('evidence/verification/wave014-isolated-df0258d.json')
assert review['status'] == 'passed'
replay = Path(review['replayRoot'])
claim = read(FOLDER / 'claim.json')
execution = read(FOLDER / 'execution.json')
for name in review['coordinatorComparison']['bitIdenticalJsonPackets']:
    assert read(FOLDER / name) == json.loads((replay / FOLDER / name).read_text())
assert execution['allBytewiseEqual'] and execution['allCallsReturnedNormally']
assert all(not row['missingOriginalInstructionAddresses'] for row in execution['allOriginalInstructionCoverage'])
build = execution['armBuild']
elf = ELFFile(io.BytesIO((replay / build['linkedElf']['path']).read_bytes()))
symbols = elf.get_section_by_name('.symtab')
sources = {'matrix-product': 'matrix.c', 'matrix-inverse': 'matrix.c', 'indexed-sine-cosine': 'trigonometry.c',
           'texture-srt': 'trigonometry.c', 'projection': 'projection.c'}
functions = []
for row in claim['functions']:
    name = 'fn_' + format(row['address'], '08x')
    symbol = symbols.get_symbol_by_name(name)[0]
    section = elf.get_section(symbol['st_shndx'])
    offset = symbol['st_value'] - section['sh_addr']
    linked = section.data()[offset:offset + symbol['st_size']]
    functions.append({'symbol': name, 'canonicalIdentity': {'address': row['address'], 'mode': 'ARM',
        'programId': '0004000e001acb00', 'moduleSha256': claim['identity']['codeSha256']},
        'originalInstructionBytes': row['instructionRange']['bytes'], 'originalRange': row['instructionRange'],
        'poolBytesNotCodeCredit': row['poolRange']['bytes'], 'actualCallerWitnesses': row['actualCallerWitnesses'],
        'source': pin('src/native/wave014/' + sources[row['role']]), 'functionalConfidence': 'medium',
        'exactObjectSpan': False, 'exactLinkedSpan': False,
        'candidateObjectSection': build['functions'][name],
        'candidateLinkedSymbolSha256': hashlib.sha256(linked).hexdigest(),
        'behavior': {'allPassed': True, 'boundedNotUniversalEquivalence': True,
            'casesByOperation': execution['caseCounts'], 'allThreeOutputSha256': execution['allThreeOutputSha256'],
            'boundedDomain': claim['proposedInputContract'],
            'additionalLimits': ['Finite binary32 angle normalization; nonfinite/TLS/errno paths excluded',
                'Floating exception flags excluded; nearest rounding, gradual underflow and no contraction',
                'Valid capacities, typed compatible storage and specified alias contracts',
                'Original pane construction, GPU upload and game/device execution excluded'],
            'independentSourceRevision': review['sourceRevision']}})
packet = {'schemaVersion': 1, 'moduleSha256': claim['identity']['codeSha256'],
    'programId': '0004000e001acb00', 'acceptedSourceCreditGranted': 0, 'functions': functions,
    'headers': [pin('src/native/wave014/' + name) for name in ['projection.h', 'sine_table.inc']] +
        [pin('src/native/wave011-material/material.h')],
    'originalPackets': [pin(FOLDER / name) for name in ['claim.json', 'execution.json', 'semantic-controls.json',
        'conversion-sanitizer.json', 'derived-table.json']],
    'independentReplay': pin('evidence/verification/wave014-isolated-df0258d.json'),
    'derivedNumericDataBytesNotCodeCredit': 4096}
target = ROOT / 'evidence/functional/uv-math014.json'
target.write_text(json.dumps(packet, indent=2) + '\n')
print(json.dumps({'reviewedFunctions': len(functions), 'originalInstructionBytes': 1856, 'exactSourceCredit': 0}))
