import hashlib
import json
from pathlib import Path
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_GRP_CALL, CS_GRP_JUMP
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC

import native_census_overlay as overlay


ROOT = Path(__file__).resolve().parents[1]
TARGET = 'evidence/verification/prototype011-function-overlay.json'


def pin(path):
    raw = (ROOT / path).read_bytes()
    return {'path': path, 'sha256': hashlib.sha256(raw).hexdigest(), 'bytes': len(raw)}


def main():
    registry = json.loads((ROOT / overlay.CONFIG).read_text())
    base = overlay.checked(ROOT, registry['baseCensus'])
    claim_path = 'evidence/lanes/squirrel-prototype-release011/claim.json'
    claim = json.loads((ROOT / claim_path).read_text())
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    body = next(item for item in claim['functions'] if item['entry'] == 0x299424)
    start, end = body['entry'], body['endExclusive']
    code = image[start - 0x100000:end - 0x100000]
    if (claim['moduleSha256'] != base['codeSha256'] or body['instructionBytes'] != 124
            or hashlib.sha256(code).hexdigest() != body['instructionSha256']):
        raise ValueError('Prototype destructor identity or body differs')
    evidence = body['newFunctionEvidence']
    owner = next(item for item in base['functions'] if item['address'] == 0x1cdcc4)
    if not any(part['start'] <= 0x233bd8 and part['endExclusive'] >= 0x233c04 for part in owner['ranges']):
        raise ValueError('Shared weak-reset tail lacks its existing physical owner')
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    instructions = list(decoder.disasm(code, start))
    known = {item['address'] for item in base['functions']}
    transfers, indirect, literals = [], [], []
    for instruction in instructions:
        if instruction.group(CS_GRP_CALL) or instruction.group(CS_GRP_JUMP):
            if instruction.operands[0].type == ARM_OP_IMM:
                target = instruction.operands[0].imm
                if not start <= target < end and target not in known and target != 0x233bd8:
                    raise ValueError('Prototype transfer lacks complete or shared-tail ownership')
                if not start <= target < end or instruction.group(CS_GRP_CALL):
                    transfers.append({'address': instruction.address, 'target': target,
                        'kind': 'call' if instruction.group(CS_GRP_CALL) else 'branch',
                        'sha256': hashlib.sha256(instruction.bytes).hexdigest()})
            else:
                indirect.append({'address': instruction.address, 'operand': instruction.op_str,
                    'kind': 'call' if instruction.group(CS_GRP_CALL) else 'branch',
                    'sha256': hashlib.sha256(instruction.bytes).hexdigest()})
        for operand in instruction.operands:
            if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                literal = instruction.address + 8 + operand.mem.disp
                if literal != end:
                    raise ValueError('Prototype literal leaves its measured four-byte pool')
                literals.append({'instruction': instruction.address, 'literal': literal})
    last = instructions[-1]
    if (len(instructions) != 31 or last.address != evidence['tailReturnCall']
            or not last.group(CS_GRP_JUMP) or last.operands[0].type != ARM_OP_IMM
            or last.operands[0].imm != 0x233bd8):
        raise ValueError('Prototype body does not finish at the witnessed shared-tail transfer')
    following, slot = evidence['followingUnseededEntry'], evidence['followingEntryTableWitness']
    preceding = next(item for item in base['functions'] if item['address'] == evidence['precedingCanonicalEntry'])
    if (following != end + 4 or following in known or evidence['nextSeededEntry'] not in known
            or max(part['endExclusive'] for part in preceding['ranges']) != start
            or struct.unpack_from('<I', image, slot - 0x100000)[0] != following):
        raise ValueError('Prototype neighboring boundary witnesses differ')
    vtable = claim['prototypeVtable']['address']
    if not literals or struct.unpack_from('<I', image, end - 0x100000)[0] != vtable:
        raise ValueError('Prototype own vtable literal differs')
    table = {'name': 'sq-prototype-vtable-slot0', 'encoding': 'vtable-function-pointer',
        'readerFunction': start, 'literalAddress': end, 'literalBytes': 4,
        'literalSha256': body['poolSha256'], 'start': vtable, 'bytes': 4,
        'sha256': hashlib.sha256(image[vtable - 0x100000:vtable - 0x100000 + 4]).hexdigest(),
        'entries': [{'key': 0, 'slot': vtable, 'target': start, 'mode': 'ARM', 'virtual': True,
                     'thisAdjustmentBytes': 0}]}
    function = {'canonicalIdentity': {'programId': '0004000e001acb00', 'moduleSha256': base['codeSha256'],
        'address': start, 'mode': 'ARM'}, 'instructionRanges': [{'start': start, 'endExclusive': end,
        'bytes': 124, 'instructions': 31, 'sha256': body['instructionSha256'],
        'originalMemorySha256': body['instructionSha256']}],
        'literalPoolRanges': [{'start': end, 'endExclusive': end + 4, 'bytes': 4,
            'reader': literals[0]['instruction'], 'sha256': body['poolSha256']}],
        'tableWitnesses': [{'table': table['name'], 'slot': vtable, 'target': start}],
        'outgoingTransfers': transfers, 'indirectTransfers': indirect, 'sourceCreditRequested': 0}
    packet = {'schemaVersion': 1, 'moduleSha256': base['codeSha256'], 'frozenCensus': registry['baseCensus'],
        'producer': pin('toolscripts/review_prototype011_inventory.py'),
        'boundaryProducer': pin('toolscripts/squirrel_prototype_release011.py'), 'boundaryEvidence': pin(claim_path),
        'tables': [table], 'functions': [function], 'sourceCreditGranted': 0,
        'initializedTextByteDenominatorChanged': False, 'newCandidateFunctions': 1,
        'newInstructionUnionBytes': 124, 'candidatePeerOverlaps': [], 'sharedTailAliases': []}
    composed, unused = overlay.compose(ROOT, base)
    own = any(item['packet']['path'] == TARGET for item in registry['overlays'])
    validation_base = dict(base)
    validation_base['functions'] = [item for item in composed['functions'] if not own or item['address'] != start]
    overlay.validate(validation_base, packet, image)
    (ROOT / TARGET).write_text(json.dumps(packet, indent=2) + '\n')
    review = {'schemaVersion': 1, 'status': 'reviewed-prototype-vtable-destructor-ownership',
        'moduleSha256': base['codeSha256'], 'overlay': pin(TARGET),
        'producer': pin('toolscripts/review_prototype011_inventory.py'),
        'validator': pin('toolscripts/native_census_overlay.py'), 'addedDiscoveredEntries': 1,
        'instructionBytes': 124, 'literalPoolBytesNotCodeCredit': 4, 'independentlyDecodedInstructions': 31,
        'followingEntryWitness': {'address': following, 'slot': slot, 'isSeeded': False,
            'slotSha256': hashlib.sha256(image[slot - 0x100000:slot - 0x100000 + 4]).hexdigest()},
        'sharedTail': {'start': 0x233bd8, 'endExclusive': 0x233c04, 'physicalOwner': 0x1cdcc4,
            'sha256': hashlib.sha256(image[0x233bd8 - 0x100000:0x233c04 - 0x100000]).hexdigest(), 'newCredit': 0},
        'sourceCreditGranted': 0, 'historicalFunctionCompletenessClaim': False}
    (ROOT / 'evidence/verification/prototype011-inventory-review.json').write_text(json.dumps(review, indent=2) + '\n')
    print(json.dumps({'entriesAdded': 1, 'instructionBytes': 124, 'sourceCredit': 0}))


if __name__ == '__main__':
    main()
