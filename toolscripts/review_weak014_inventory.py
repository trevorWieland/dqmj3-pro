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
    claim = json.loads((ROOT / 'evidence/lanes/squirrel-weak-reference014/claim.json').read_text())
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    if claim['moduleSha256'] != base['codeSha256']:
        raise ValueError('Weak-reference module differs')
    known = {item['address'] for item in base['functions']}
    getter = next(item for item in claim['functions'] if item['entry'] == 0x233b7c)
    rows = [item for item in claim['functions'] if item['entry'] in (0x6a7780, 0x6a77c0)]
    if len(rows) != 2 or sum(item['instructionBytes'] for item in rows) != 108:
        raise ValueError('Weak-reference measured finalizers differ')
    table_start = claim['weakVtable']['address']
    word = lambda address: struct.unpack_from('<I', image, address - 0x100000)[0]
    witness = claim['boundaryWitnesses']
    if (getter['entry'] not in known or word(getter['endExclusive']) != table_start
            or word(table_start) != 0x6a77c0 or word(table_start + 4) != 0
            or word(table_start + 8) != 0x6a7780
            or witness['precedingPoolEnd'] != rows[0]['entry']
            or rows[0]['endExclusive'] != rows[1]['entry']
            or rows[1]['endExclusive'] + 8 != witness['followingEntry']
            or witness['followingEntry'] in known or witness['nextSeededEntry'] not in known
            or word(witness['followingEntryTableWitness']) != witness['followingEntry']):
        raise ValueError('Weak-reference table or neighboring ownership differs')
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    caller_reads = []
    for caller in claim['callerWitnesses']:
        site = caller['callSite']
        instruction = next(decoder.disasm(image[site - 0x100000:site - 0x100000 + 4], site))
        if (caller['canonicalOwner'] not in known or not instruction.group(CS_GRP_CALL)
                or instruction.operands[0].type != ARM_OP_IMM or instruction.operands[0].imm != getter['entry']):
            raise ValueError('Weak getter caller witness differs')
        caller_reads.append({'owner': caller['canonicalOwner'], 'site': site, 'target': getter['entry'],
            'instructionSha256': hashlib.sha256(instruction.bytes).hexdigest()})
    functions, reads = [], []
    table_name = 'sq-weak-reference-vtable'
    for row in rows:
        start, end = row['entry'], row['endExclusive']
        code = image[start - 0x100000:end - 0x100000]
        if start in known or hashlib.sha256(code).hexdigest() != row['instructionSha256']:
            raise ValueError('Weak finalizer identity differs')
        instructions = list(decoder.disasm(code, start))
        if len(instructions) * 4 != row['instructionBytes'] or instructions[-1].address + 4 != end:
            raise ValueError('Weak finalizer is not a complete ARM interval')
        transfers, indirect, literals = [], [], []
        for instruction in instructions:
            if instruction.group(CS_GRP_CALL) or instruction.group(CS_GRP_JUMP):
                operand = instruction.operands[0]
                if operand.type == ARM_OP_IMM:
                    target = operand.imm
                    if not start <= target < end and target not in known:
                        raise ValueError('Weak finalizer transfer ownership is unknown')
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
                        raise ValueError('Weak finalizer reads outside its measured pool')
                    literals.append({'instruction': instruction.address, 'literal': address})
        last = instructions[-1]
        if start == 0x6a7780:
            if last.mnemonic != 'b' or last.operands[0].imm != 0x19d680:
                raise ValueError('Weak release does not end in the genuine deallocator tail')
        elif last.mnemonic != 'bx' or last.op_str != 'lr':
            raise ValueError('Weak destructor lacks its returning boundary')
        slot = witness['releaseSlot'] if start == 0x6a7780 else witness['destructorSlot']
        pool = [] if not row['poolBytes'] else [{'start': end, 'endExclusive': end + row['poolBytes'],
            'bytes': row['poolBytes'], 'reader': literals[0]['instruction'], 'sha256': row['poolSha256']}]
        functions.append({'canonicalIdentity': {'programId': '0004000e001acb00', 'moduleSha256': base['codeSha256'],
            'address': start, 'mode': 'ARM'}, 'instructionRanges': [{'start': start, 'endExclusive': end,
            'bytes': row['instructionBytes'], 'instructions': len(instructions), 'sha256': row['instructionSha256'],
            'originalMemorySha256': row['instructionSha256']}], 'literalPoolRanges': pool,
            'tableWitnesses': [{'table': table_name, 'slot': slot, 'target': start}],
            'outgoingTransfers': transfers, 'indirectTransfers': indirect, 'sourceCreditRequested': 0})
        reads += literals
    table = {'name': table_name, 'encoding': 'vtable-function-pointer', 'readerFunction': getter['entry'],
        'literalAddress': getter['endExclusive'], 'literalBytes': 4, 'literalSha256': getter['poolSha256'],
        'start': table_start, 'bytes': 12, 'sha256': claim['weakVtable']['sha256'],
        'entries': [{'key': key, 'slot': table_start + key * 4, 'target': target,
            'mode': 'ARM' if target else None, 'virtual': True, 'thisAdjustmentBytes': 0,
            **({'null': True} if target == 0 else {})}
            for key, target in [(0, 0x6a77c0), (1, 0), (2, 0x6a7780)]]}
    packet = {'schemaVersion': 1, 'moduleSha256': base['codeSha256'], 'frozenCensus': registry['baseCensus'],
        'producer': pin('toolscripts/review_weak014_inventory.py'),
        'boundaryProducer': pin('toolscripts/squirrel_weak_reference014_boundaries.py'),
        'boundaryEvidence': pin('evidence/lanes/squirrel-weak-reference014/claim.json'),
        'tables': [table], 'functions': functions, 'sourceCreditGranted': 0,
        'initializedTextByteDenominatorChanged': False, 'newCandidateFunctions': 2,
        'newInstructionUnionBytes': 108, 'candidatePeerOverlaps': [], 'sharedTailAliases': []}
    composed, unused = overlay.compose(ROOT, base)
    validation_base = dict(base)
    registered = any(item['packet']['path'] == 'evidence/verification/weak014-function-overlay.json' for item in registry['overlays'])
    validation_base['functions'] = [item for item in composed['functions'] if not registered or item['address'] not in (0x6a7780, 0x6a77c0)]
    overlay.validate(validation_base, packet, image)
    target = 'evidence/verification/weak014-function-overlay.json'
    (ROOT / target).write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    review = {'schemaVersion': 1, 'status': 'reviewed-weak-reference-function-ownership',
        'moduleSha256': base['codeSha256'], 'overlay': pin(target),
        'producer': pin('toolscripts/review_weak014_inventory.py'), 'validator': pin('toolscripts/native_census_overlay.py'),
        'addedDiscoveredEntries': 2, 'instructionBytes': 108, 'literalPoolBytesNotCodeCredit': 8,
        'getterAlreadyInventoried': True, 'getterLiteralPoolBytesNotNewCredit': 4,
        'independentlyDecodedInstructions': 27, 'literalReads': reads, 'callerReads': caller_reads,
        'followingUnseededEntry': witness['followingEntry'], 'followingUnseededEntryAdded': False,
        'sourceCreditGranted': 0, 'historicalFunctionCompletenessClaim': False}
    (ROOT / 'evidence/verification/weak014-inventory-review.json').write_text(json.dumps(review, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({'entriesAdded': 2, 'instructionBytes': 108, 'sourceCredit': 0}))


if __name__ == '__main__':
    main()
