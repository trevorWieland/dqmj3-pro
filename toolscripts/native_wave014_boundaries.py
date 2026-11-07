import hashlib
import json
import struct
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_OP_MEM, ARM_REG_PC


ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'evidence/lanes/wave014'
FUNCTIONS = {0x54befc: (1028, 16, 'projection'), 0x1ad06c: (228, 0, 'matrix-product'),
    0x1ad184: (280, 4, 'matrix-inverse'), 0x55492c: (184, 12, 'texture-srt'), 0x52534c: (136, 16, 'indexed-sine-cosine')}


def main():
    path = ROOT / 'generated/update-content0/code.bin'
    if not path.exists():
        path = ROOT / 'work/native-ci-local-validation/private/generated/update-content0/code.bin'
    raw = path.read_bytes()
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census = json.loads(census_path.read_text())
    if hashlib.sha256(raw).hexdigest() != census['codeSha256']:
        raise ValueError('Canonical census/image mismatch')
    by_address = {row['address']: row for row in census['functions']}
    rows = []
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    for address, (size, pool, role) in FUNCTIONS.items():
        row = by_address[address]
        if row['mode'] != 'ARM' or row['ranges'] != [{'start': address, 'endExclusive': address + size, 'bytes': size}]:
            raise ValueError('Complete canonical function range differs')
        code = raw[address - 0x100000:address - 0x100000 + size]
        instructions = list(decoder.disasm(code, address))
        if len(instructions) * 4 != size:
            raise ValueError('Function instruction accounting is incomplete')
        references = []
        for instruction in instructions:
            for operand in instruction.operands:
                if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                    target = instruction.address + 8 + operand.mem.disp
                    if not address + size <= target <= address + size + pool - 4:
                        raise ValueError('Undeclared scalar pool reference')
                    references.append({'instruction': instruction.address, 'literalAddress': target, 'bytes': 4})
        candidates = [candidate for candidate in census['functions'] if address in candidate['calledFunctionAddresses'] and candidate['mode'] == 'ARM']
        preferred = [candidate for candidate in candidates if candidate['address'] in FUNCTIONS]
        witnesses = []
        for candidate in (preferred or candidates[:1]):
            for span in candidate['ranges']:
                for instruction in decoder.disasm(raw[span['start'] - 0x100000:span['endExclusive'] - 0x100000], span['start']):
                    if instruction.mnemonic in ['bl', 'blx'] and instruction.op_str == '#0x' + format(address, 'x'):
                        witnesses.append({'caller': candidate['address'], 'call': instruction.address,
                            'instructionSha256': hashlib.sha256(instruction.bytes).hexdigest()})
        if not witnesses:
            raise ValueError('No actual direct caller witness')
        rows.append({'address': address, 'mode': 'ARM', 'role': role,
            'instructionRange': {'start': address, 'endExclusive': address + size, 'bytes': size, 'sha256': hashlib.sha256(code).hexdigest()},
            'poolRange': {'start': address + size, 'endExclusive': address + size + pool, 'bytes': pool,
                'sha256': hashlib.sha256(raw[address + size - 0x100000:address + size + pool - 0x100000]).hexdigest()},
            'pcRelativeLiteralReferences': references, 'directCallees': row['calledFunctionAddresses'], 'actualCallerWitnesses': witnesses})
    claim = {'schemaVersion': 1, 'status': 'measured-before-source-implementation',
        'identity': {'version': 'update-content0', 'module': 'main', 'codeSha256': census['codeSha256'],
            'censusSha256': hashlib.sha256(census_path.read_bytes()).hexdigest()},
        'claim': 'Complete typed pane-derived texture projection family with source-only matrix/SRT/trigonometric dependencies, followed by source world-matrix and projected-UV scene integration',
        'functions': rows, 'instructionBytesInMeasuredFamily': sum(item[0] for item in FUNCTIONS.values()),
        'scalarPoolBytes': sum(item[1] for item in FUNCTIONS.values()),
        'pointerAbi': {'projection': 'r0 output8floats, r1 draw context, r2 pane, r3 material; stack textureIndex, coordinateSource, projectionIndex',
            'draw': 'matrix3x4 at0x74; viewport pointer at0xb0; viewport width/height at0x18/0x1c',
            'pane': 'width/height at0x3c/0x40; world matrix3x4 at0x48',
            'material': 'Frozen wave011 typed ABI; capacity at0x74, storage pointer at0x78',
            'sineCosine': 'r0 sineOutput pointer, r1 cosineOutput pointer, s0 float indexedAngle; typed aapcs-vfp convention',
            'srt': 'r0 output6floats, r1 transform, r2 supplied texture pointer not read'},
        'numericData': '4096-byte sine/cosine interpolation table derived independently by mathematical generator; no code credit',
        'largeAngleClosure': 'Finite absolute indexed angles use modulo65536; source specialization will be checked against original generic modulus path. No generic modulus code credit proposed.',
        'proposedInputContract': ['Finite initialized inputs with valid typed aligned spans', 'Positive nonzero selected dimensions and nonzero projection scales',
            'Nonsingular pane world matrix whenever the inverse branch is selected', 'No conflicting callbacks or memory side effects; normal IEEE nearest-rounding context'],
        'sourceCodeWrittenAtMeasurement': False, 'requestedExactBytes': 0, 'coordinatorAdmissionRequired': True,
        'outsideScope': ['Original pane-world constructor', 'Original GPU upload and class/draw dispatch', 'Whole game and Android device execution'],
        'originalPayloadsPublished': False}
    OUT.mkdir(parents=True, exist_ok=True)
    (OUT / 'claim.json').write_text(json.dumps(claim, indent=2) + '\n')
    print(json.dumps({'status': claim['status'], 'functions': len(rows),
        'instructionBytes': claim['instructionBytesInMeasuredFamily'], 'poolBytes': claim['scalarPoolBytes']}))


if __name__ == '__main__':
    main()
