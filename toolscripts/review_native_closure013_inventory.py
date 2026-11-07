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
    claim = json.loads((ROOT / 'evidence/lanes/squirrel-native-closure-release013/claim.json').read_text())
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    row = next(item for item in claim['functions'] if item['entry'] == 0x2995a4)
    start, end = row['entry'], row['endExclusive']
    if claim['moduleSha256'] != base['codeSha256'] or row['instructionBytes'] != 244:
        raise ValueError('Native closure destructor identity differs')
    code = image[start - 0x100000:end - 0x100000]
    if hashlib.sha256(code).hexdigest() != row['instructionSha256']:
        raise ValueError('Native closure destructor instruction bytes differ')
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    instructions = list(decoder.disasm(code, start))
    known = {item['address'] for item in base['functions']}
    transfers, literals, indirect = [], [], []
    for instruction in instructions:
        if (instruction.group(CS_GRP_CALL) or instruction.group(CS_GRP_JUMP)) and instruction.operands[0].type == ARM_OP_IMM:
            target = instruction.operands[0].imm
            if not start <= target < end and target not in known:
                raise ValueError('Native closure destructor transfer has no established ownership')
            if not start <= target < end or instruction.group(CS_GRP_CALL):
                transfers.append({'address': instruction.address, 'target': target,
                    'kind': 'call' if instruction.group(CS_GRP_CALL) else 'branch',
                    'sha256': hashlib.sha256(instruction.bytes).hexdigest()})
        if (instruction.group(CS_GRP_CALL) or instruction.group(CS_GRP_JUMP)) and instruction.operands[0].type != ARM_OP_IMM:
            indirect.append({'address': instruction.address, 'operand': instruction.op_str,
                'kind': 'call' if instruction.group(CS_GRP_CALL) else 'branch',
                'sha256': hashlib.sha256(instruction.bytes).hexdigest()})
        for operand in instruction.operands:
            if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                address = instruction.address + 8 + operand.mem.disp
                if not end <= address <= end + 8:
                    raise ValueError('Native closure destructor literal leaves the measured pool')
                literals.append({'instruction': instruction.address, 'literal': address})
    if len(instructions) != 61 or instructions[-1].address != row['newFunctionEvidence']['terminalReturn'] or 'pc' not in instructions[-1].op_str:
        raise ValueError('Native closure destructor does not end at its complete returning boundary')
    witness = row['newFunctionEvidence']
    following_entry = witness['followingUnseededEntry']
    following_slot = witness['followingEntryTableWitness']
    if (following_entry != end + 12 or following_entry in known
            or witness['nextSeededEntry'] not in known
            or struct.unpack_from('<I', image, following_slot - 0x100000)[0] != following_entry):
        raise ValueError('Following unseeded entry lacks its independent vtable witness')
    following = {'address': following_entry, 'vtableReleaseSlot': following_slot, 'isSeeded': False,
        'slotSha256': hashlib.sha256(image[following_slot - 0x100000:following_slot - 0x100000 + 4]).hexdigest(),
        'nearestFollowingSeededEntry': witness['nextSeededEntry'], 'newCredit': 0}
    slot = row['newFunctionEvidence']['actualVtableSlot']
    literal = next(item['address'] for item in row['literalReferences']
                   if struct.unpack_from('<I', image, item['address'] - 0x100000)[0] == slot)
    constructor = claim['constructorWitness']
    if struct.unpack_from('<I', image, constructor['vtableLiteral'] - 0x100000)[0] != slot:
        raise ValueError('Constructor literal does not identify this destructor table')
    table = {'name': 'sq-native-closure-vtable-slot0', 'encoding': 'vtable-function-pointer', 'readerFunction': start,
        'literalAddress': literal, 'literalBytes': 4,
        'literalSha256': hashlib.sha256(image[literal - 0x100000:literal - 0x100000 + 4]).hexdigest(),
        'start': slot, 'bytes': 4, 'sha256': hashlib.sha256(image[slot - 0x100000:slot - 0x100000 + 4]).hexdigest(),
        'entries': [{'key': 0, 'slot': slot, 'target': start, 'mode': 'ARM', 'virtual': True, 'thisAdjustmentBytes': 0}]}
    function = {'canonicalIdentity': {'programId': '0004000e001acb00', 'moduleSha256': base['codeSha256'],
        'address': start, 'mode': 'ARM'},
        'instructionRanges': [{'start': start, 'endExclusive': end, 'bytes': 244, 'instructions': 61,
            'sha256': row['instructionSha256'], 'originalMemorySha256': row['instructionSha256']}],
        'literalPoolRanges': [{'start': end, 'endExclusive': end + 12, 'bytes': 12,
            'reader': literals[0]['instruction'], 'sha256': row['poolSha256']}],
        'tableWitnesses': [{'table': table['name'], 'slot': slot, 'target': start}],
        'outgoingTransfers': transfers, 'indirectTransfers': indirect, 'sourceCreditRequested': 0}
    packet = {'schemaVersion': 1, 'moduleSha256': base['codeSha256'], 'frozenCensus': registry['baseCensus'],
        'producer': pin('toolscripts/review_native_closure013_inventory.py'),
        'boundaryProducer': pin('toolscripts/squirrel_native_closure_release013.py'),
        'boundaryEvidence': pin('evidence/lanes/squirrel-native-closure-release013/claim.json'),
        'tables': [table], 'functions': [function], 'sourceCreditGranted': 0,
        'initializedTextByteDenominatorChanged': False, 'newCandidateFunctions': 1,
        'newInstructionUnionBytes': 244, 'followingEntryWitness': following, 'candidatePeerOverlaps': [], 'sharedTailAliases': []}
    composed, unused = overlay.compose(ROOT, base)
    validation_base = dict(base)
    own_registered = any(item['packet']['path'] == 'evidence/verification/native-closure013-function-overlay.json' for item in registry['overlays'])
    validation_base['functions'] = [item for item in composed['functions'] if not own_registered or item['address'] != start]
    overlay.validate(validation_base, packet, image)
    target = 'evidence/verification/native-closure013-function-overlay.json'
    (ROOT / target).write_text(json.dumps(packet, indent=2) + '\n')
    review = {'schemaVersion': 1, 'status': 'reviewed-vtable-destructor-function-ownership',
        'moduleSha256': base['codeSha256'], 'overlay': pin(target),
        'producer': pin('toolscripts/review_native_closure013_inventory.py'), 'validator': pin('toolscripts/native_census_overlay.py'),
        'addedDiscoveredEntries': 1, 'instructionBytes': 244, 'literalPoolBytesNotCodeCredit': 12,
        'independentlyDecodedInstructions': 61, 'literalReads': literals,
        'followingEntryWitness': following, 'constructorWitness': claim['constructorWitness'],
        'prototypePrefixValuesQualified': False, 'followingUnseededEntryAdded': False,
        'sourceCreditGranted': 0, 'historicalFunctionCompletenessClaim': False}
    (ROOT / 'evidence/verification/native-closure013-inventory-review.json').write_text(json.dumps(review, indent=2) + '\n')
    print(json.dumps({'entriesAdded': 1, 'instructionBytes': 244, 'sourceCredit': 0}))


if __name__ == '__main__':
    main()
