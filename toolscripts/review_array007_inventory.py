import hashlib
import json
from pathlib import Path
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_GRP_CALL, CS_GRP_JUMP
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC

import native_census_overlay as overlay


ROOT = Path(__file__).resolve().parents[1]


def pin(path):
    raw = (ROOT / path).read_bytes()
    return {'path': path, 'sha256': hashlib.sha256(raw).hexdigest(), 'bytes': len(raw)}


def main():
    registry = json.loads((ROOT / overlay.CONFIG).read_text())
    base = overlay.checked(ROOT, registry['baseCensus'])
    claim = json.loads((ROOT / 'evidence/lanes/squirrel-array-release007/claim.json').read_text())
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    row = next(item for item in claim['functions'] if item['entry'] == 0x665c60)
    start, end = row['entry'], row['endExclusive']
    if claim['moduleSha256'] != base['codeSha256'] or row['instructionBytes'] != 96:
        raise ValueError('Array destructor identity differs')
    code = image[start - 0x100000:end - 0x100000]
    if hashlib.sha256(code).hexdigest() != row['instructionSha256']:
        raise ValueError('Array destructor instruction bytes differ')
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    instructions = list(decoder.disasm(code, start))
    known = {item['address'] for item in base['functions']}
    transfers, literals = [], []
    for instruction in instructions:
        if (instruction.group(CS_GRP_CALL) or instruction.group(CS_GRP_JUMP)) and instruction.operands[0].type == ARM_OP_IMM:
            target = instruction.operands[0].imm
            if not start <= target < end and target not in known:
                raise ValueError('Array destructor transfer has no established ownership')
            if not start <= target < end or instruction.group(CS_GRP_CALL):
                transfers.append({'address': instruction.address, 'target': target,
                    'kind': 'call' if instruction.group(CS_GRP_CALL) else 'branch',
                    'sha256': hashlib.sha256(instruction.bytes).hexdigest()})
        for operand in instruction.operands:
            if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                address = instruction.address + 8 + operand.mem.disp
                if not end <= address <= end + 8:
                    raise ValueError('Array destructor literal leaves the measured pool')
                literals.append({'instruction': instruction.address, 'literal': address})
    if len(instructions) != 24 or instructions[-1].address != row['newFunctionEvidence']['terminalReturn'] or 'pc' not in instructions[-1].op_str:
        raise ValueError('Array destructor does not end at its complete returning boundary')
    slot = row['newFunctionEvidence']['actualVtableSlotAddress']
    literal = next(item['literalAddress'] for item in row['literalReferences']
                   if struct.unpack_from('<I', image, item['literalAddress'] - 0x100000)[0] == slot)
    table = {'name': 'sq-array-vtable-slot0', 'encoding': 'vtable-function-pointer', 'readerFunction': start,
        'literalAddress': literal, 'literalBytes': 4,
        'literalSha256': hashlib.sha256(image[literal - 0x100000:literal - 0x100000 + 4]).hexdigest(),
        'start': slot, 'bytes': 4, 'sha256': hashlib.sha256(image[slot - 0x100000:slot - 0x100000 + 4]).hexdigest(),
        'entries': [{'key': 0, 'slot': slot, 'target': start, 'mode': 'ARM', 'virtual': True, 'thisAdjustmentBytes': 0}]}
    function = {'canonicalIdentity': {'programId': '0004000e001acb00', 'moduleSha256': base['codeSha256'],
        'address': start, 'mode': 'ARM'},
        'instructionRanges': [{'start': start, 'endExclusive': end, 'bytes': 96, 'instructions': 24,
            'sha256': row['instructionSha256'], 'originalMemorySha256': row['instructionSha256']}],
        'literalPoolRanges': [{'start': end, 'endExclusive': end + 12, 'bytes': 12,
            'reader': literals[0]['instruction'], 'sha256': row['poolSha256']}],
        'tableWitnesses': [{'table': table['name'], 'slot': slot, 'target': start}],
        'outgoingTransfers': transfers, 'indirectTransfers': [], 'sourceCreditRequested': 0}
    packet = {'schemaVersion': 1, 'moduleSha256': base['codeSha256'], 'frozenCensus': registry['baseCensus'],
        'producer': pin('toolscripts/review_array007_inventory.py'),
        'boundaryProducer': pin('toolscripts/squirrel_array_release007.py'),
        'boundaryEvidence': pin('evidence/lanes/squirrel-array-release007/claim.json'),
        'tables': [table], 'functions': [function], 'sourceCreditGranted': 0,
        'initializedTextByteDenominatorChanged': False, 'newCandidateFunctions': 1,
        'newInstructionUnionBytes': 96, 'candidatePeerOverlaps': [], 'sharedTailAliases': []}
    overlay.validate(base, packet, image)
    target = 'evidence/verification/array007-function-overlay.json'
    (ROOT / target).write_text(json.dumps(packet, indent=2) + '\n')
    review = {'schemaVersion': 1, 'status': 'reviewed-vtable-destructor-function-ownership',
        'moduleSha256': base['codeSha256'], 'overlay': pin(target),
        'producer': pin('toolscripts/review_array007_inventory.py'), 'validator': pin('toolscripts/native_census_overlay.py'),
        'addedDiscoveredEntries': 1, 'instructionBytes': 96, 'literalPoolBytesNotCodeCredit': 12,
        'independentlyDecodedInstructions': 24, 'literalReads': literals,
        'followingSeededFunction': row['newFunctionEvidence']['followingSeededFunction'],
        'sharedBaseTeardownFragmentNotRecounted': [0x233bd8, 0x233c04],
        'sourceCreditGranted': 0, 'historicalFunctionCompletenessClaim': False}
    (ROOT / 'evidence/verification/array007-inventory-review.json').write_text(json.dumps(review, indent=2) + '\n')
    print(json.dumps({'entriesAdded': 1, 'instructionBytes': 96, 'sourceCredit': 0}))


if __name__ == '__main__':
    main()
