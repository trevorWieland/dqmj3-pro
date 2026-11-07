import bisect
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
    claim = json.loads((ROOT / 'evidence/lanes/squirrel-string-lifetime015/claim.json').read_text())
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if claim['moduleSha256'] != base['codeSha256']:
        raise ValueError('String module identity differs')
    known = {item['address']: item for item in base['functions']}
    rows = {item['entry']: item for item in claim['functions']}
    add, release, destroy, remove = (rows[address] for address in (0x16b5f0, 0x24d9cc, 0x68f564, 0x24d9e0))
    if (release['uniquePrefixBytes'] != 20 or release['sharedTailOwner'] != remove['entry']
            or remove['instructionBytes'] != 144 or release['instructionBytes'] != 164
            or known[remove['entry']]['ranges'] != [{'start': remove['entry'], 'endExclusive': remove['endExclusive'], 'bytes': 144}]):
        raise ValueError('Existing Remove physical ownership differs')
    for row in (add, release, destroy, remove):
        code = image[row['entry'] - 0x100000:row['endExclusive'] - 0x100000]
        if hashlib.sha256(code).hexdigest() != row['instructionSha256']:
            raise ValueError('String measured instruction hash differs')
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    table_start = claim['actualStringVtable']['address']
    functions, literal_reads = [], []
    for row, size, slot_key in ((release, 20, 2), (destroy, 44, 0)):
        start, end = row['entry'], row['entry'] + size
        if start in known:
            raise ValueError('String supplemental entry is already inventoried')
        code = image[start - 0x100000:end - 0x100000]
        instructions = list(decoder.disasm(code, start))
        if len(instructions) * 4 != size or instructions[-1].address + 4 != end:
            raise ValueError('String supplemental body is not complete ARM')
        transfers, indirect, literals = [], [], []
        for instruction in instructions:
            if instruction.group(CS_GRP_CALL) or instruction.group(CS_GRP_JUMP):
                operand = instruction.operands[0]
                if operand.type == ARM_OP_IMM:
                    target = operand.imm
                    if not start <= target < end and target not in known:
                        raise ValueError('String transfer has no established ownership')
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
                    address = instruction.address + 8 + operand.mem.disp
                    if not end <= address < end + row['poolBytes']:
                        raise ValueError('String literal leaves its measured pool')
                    literals.append({'instruction': instruction.address, 'literal': address})
        last = instructions[-1]
        if start == release['entry']:
            if end != remove['entry'] or last.mnemonic != 'mov' or last.op_str != 'r0, r0':
                raise ValueError('Release does not fall into the existing complete Remove body')
            transfers.append({'address': last.address, 'target': remove['entry'], 'kind': 'fallthrough',
                'sha256': hashlib.sha256(last.bytes).hexdigest()})
        elif last.mnemonic != 'bx' or last.op_str != 'lr':
            raise ValueError('String destructor lacks its returning boundary')
        slot = table_start + slot_key * 4
        pools = [] if not row['poolBytes'] else [{'start': end, 'endExclusive': end + row['poolBytes'],
            'bytes': row['poolBytes'], 'reader': literals[0]['instruction'], 'sha256': row['poolSha256']}]
        digest = hashlib.sha256(code).hexdigest()
        functions.append({'canonicalIdentity': {'programId': '0004000e001acb00', 'moduleSha256': base['codeSha256'],
            'address': start, 'mode': 'ARM'}, 'instructionRanges': [{'start': start, 'endExclusive': end,
            'bytes': size, 'instructions': len(instructions), 'sha256': digest, 'originalMemorySha256': digest}],
            'literalPoolRanges': pools, 'tableWitnesses': [{'table': 'sq-string-vtable', 'slot': slot, 'target': start}],
            'outgoingTransfers': transfers, 'indirectTransfers': indirect, 'sourceCreditRequested': 0})
        literal_reads += literals
    table = {'name': 'sq-string-vtable', 'encoding': 'vtable-function-pointer', 'readerFunction': add['entry'],
        'literalAddress': add['endExclusive'], 'literalBytes': 4, 'literalSha256': add['poolSha256'],
        'start': table_start, 'bytes': 12, 'sha256': claim['actualStringVtable']['sha256'],
        'entries': [{'key': key, 'slot': table_start + key * 4, 'target': target,
            'mode': 'ARM' if target else None, 'virtual': True, 'thisAdjustmentBytes': 0,
            **({'null': True} if not target else {})} for key, target in [(0, destroy['entry']), (1, 0), (2, release['entry'])]]}
    shared = {'physicalOwner': remove['entry'], 'sharedBy': release['entry'], 'bytes': 144,
        'ranges': known[remove['entry']]['ranges'], 'sha256': remove['instructionSha256'],
        'fallthroughAddress': release['entry'] + 16, 'newInstructionCredit': 0}
    packet = {'schemaVersion': 1, 'moduleSha256': base['codeSha256'], 'frozenCensus': registry['baseCensus'],
        'producer': pin('toolscripts/review_string015_inventory.py'),
        'boundaryProducer': pin('toolscripts/squirrel_string_lifetime015_boundaries.py'),
        'boundaryEvidence': pin('evidence/lanes/squirrel-string-lifetime015/claim.json'),
        'tables': [table], 'functions': functions, 'sourceCreditGranted': 0,
        'initializedTextByteDenominatorChanged': False, 'newCandidateFunctions': 2,
        'newInstructionUnionBytes': 64, 'candidatePeerOverlaps': [], 'sharedTailAliases': [],
        'sharedExistingTailWitness': shared}
    composed, unused = overlay.compose(ROOT, base)
    validation_base = dict(base)
    registered = any(item['packet']['path'] == 'evidence/verification/string015-function-overlay.json' for item in registry['overlays'])
    validation_base['functions'] = [item for item in composed['functions'] if not registered or item['address'] not in (release['entry'], destroy['entry'])]
    overlay.validate(validation_base, packet, image)
    target = 'evidence/verification/string015-function-overlay.json'
    (ROOT / target).write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    following = sorted(known)[bisect.bisect_right(sorted(known), destroy['entry'])]
    review = {'schemaVersion': 1, 'status': 'reviewed-string-vtable-and-existing-tail-ownership',
        'moduleSha256': base['codeSha256'], 'overlay': pin(target),
        'producer': pin('toolscripts/review_string015_inventory.py'), 'validator': pin('toolscripts/native_census_overlay.py'),
        'addedDiscoveredEntries': 2, 'instructionBytes': 64, 'literalPoolBytesNotCodeCredit': 8,
        'independentlyDecodedNewInstructions': 16, 'sharedExistingTail': shared,
        'literalReads': literal_reads, 'nearestFollowingSeededDestructorNeighbor': following,
        'logicalReleaseBodyBytes': 164, 'physicalReleasePrefixBytes': 20,
        'sourceCreditGranted': 0, 'historicalFunctionCompletenessClaim': False}
    (ROOT / 'evidence/verification/string015-inventory-review.json').write_text(json.dumps(review, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({'entriesAdded': 2, 'physicalInstructionBytes': 64, 'existingSharedTailNewCredit': 0}))


if __name__ == '__main__':
    main()
