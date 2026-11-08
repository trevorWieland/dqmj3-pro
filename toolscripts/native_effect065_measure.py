import hashlib
import json
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, arm


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/native-effect065'
ENTRIES = (0x2a41c4, 0x2a4674, 0x2a47cc, 0x2a4a48, 0x53a688,
           0x53e2c4, 0x53ea1c, 0x53fe5c, 0x5411a4, 0x5f0974)


def pin(path):
    raw = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': len(raw),
            'sha256': hashlib.sha256(raw).hexdigest()}


def main():
    output = WORK / 'claim-v2.json'
    if output.exists():
        raise ValueError('Preserve explicit effect065 claim')
    WORK.mkdir(parents=True, exist_ok=True)
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    inventory_path = ROOT / 'evidence/inventory/update-content0.json'
    image_path = ROOT / 'generated/update-content0/code.bin'
    census = json.loads(census_path.read_text())
    inventory = json.loads(inventory_path.read_text())
    image = image_path.read_bytes()
    digest = hashlib.sha256(image).hexdigest()
    if digest != census['codeSha256'] or digest != inventory['codeSha256']:
        raise ValueError('Original effect module/census/loader identity differs')
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    rows = []
    for function in census['functions']:
        if function['address'] not in ENTRIES:
            continue
        if function['mode'] != 'ARM':
            raise ValueError('Claimed effect entries require measured ARM mode')
        spans, calls, pools, pc_data, indexed_pc = [], [], {}, [], []
        for part in function['ranges']:
            start, end = part['start'], part['endExclusive']
            raw = image[start - 0x100000:end - 0x100000]
            decoded = list(decoder.disasm(raw, start))
            if sum(instruction.size for instruction in decoded) != len(raw) or any(instruction.size != 4 for instruction in decoded):
                raise ValueError('Canonical ARM instruction extent does not decode completely')
            spans.append(dict(part, sha256=hashlib.sha256(raw).hexdigest()))
            for instruction in decoded:
                operands = instruction.operands
                if instruction.mnemonic in ['bl', 'blx'] and operands and operands[0].type == arm.ARM_OP_IMM:
                    target = operands[0].imm
                    calls.append({'callsite': instruction.address, 'target': target & ~1,
                                  'mode': 'Thumb' if instruction.mnemonic == 'blx' or target & 1 else 'ARM'})
                for operand in operands:
                    if operand.type == arm.ARM_OP_MEM and operand.mem.base == arm.ARM_REG_PC:
                        if operand.mem.index:
                            indexed_pc.append(instruction.address)
                            continue
                        address = instruction.address + 8 + operand.mem.disp
                        width = 8 if instruction.mnemonic == 'ldrd' else 4
                        if instruction.mnemonic in ['ldrb', 'ldrsb']:
                            width = 1
                        elif instruction.mnemonic in ['ldrh', 'ldrsh']:
                            width = 2
                        if instruction.mnemonic == 'vldr' and operands[0].type == arm.ARM_OP_REG:
                            width = 8 if decoder.reg_name(operands[0].reg).startswith('d') else 4
                        if not 0x100000 <= address <= 0x100000 + len(image) - width:
                            raise ValueError('Actual PC-relative input exceeds loaded module')
                        data = image[address - 0x100000:address - 0x100000 + width]
                        pools[(address, width)] = {'start': address, 'endExclusive': address + width,
                            'bytes': width, 'sha256': hashlib.sha256(data).hexdigest()}
                        pc_data.append({'instruction': instruction.address, 'target': address, 'bytes': width})
        callers = [{'entry': row['address'], 'mode': row['mode']}
                   for row in census['functions'] if function['address'] in row['calledFunctionAddresses']]
        rows.append({'canonicalIdentity': {'programId': '0004000e001acb00',
            'moduleSha256': digest, 'address': function['address'], 'mode': 'ARM'},
            'instructionBytes': function['textBodyBytes'], 'instructionRanges': spans,
            'observedPCLiteralRanges': sorted(pools.values(), key=lambda row: row['start']),
            'PCLiteralReadSites': pc_data, 'decodedDirectCalls': calls,
            'indexedPCSitesRequiringActualIndexDomain': indexed_pc,
            'seededDirectCallerEntries': callers,
            'remainingIndirectCallsAndDataClosureQualified': False,
            'allInstructionAndPoolBoundariesIndependentlyQualified': False})
    if {row['canonicalIdentity']['address'] for row in rows} != set(ENTRIES):
        raise ValueError('Claim omitted canonical function')
    result = {'status': 'explicit-reference-first-effect065-coupled-family-claim',
        'producer': pin(Path(__file__)), 'image': pin(image_path), 'census': pin(census_path),
        'inventory': pin(inventory_path), 'claimedInstructionBytes': sum(row['instructionBytes'] for row in rows),
        'functions': rows, 'priorQualifiedSourceDependencies': ['src/native/wave032/archive.h',
            'src/native/wave032/archive_lookup.c', 'src/native/wave032/archive_members.c', 'src/native/wave032/archive_owner.c'],
        'ownershipQuestions': ['Borrowed XBB/member bytes and lifetime through replacement',
            'Actual resource60-byte target storage versus genuine widened native storage',
            'Serialized32-bit offsets versus source-native pointers and GPU/device words',
            'Selector binding to explicit pre-existing shader-manager input; no GPU-program source credit',
            'Every allocator, free, texture/geometry transform, data fixup and command provider dependency'],
        'authoredSourceOrBehaviorProofExists': False, 'newSourceCreditGranted': 0,
        'predecessor064Unchanged': True}
    output.write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps({'functions': len(rows), 'instructionBytes': result['claimedInstructionBytes'],
                      'observedLiteralRanges': sum(len(row['observedPCLiteralRanges']) for row in rows)}))


if __name__ == '__main__':
    main()
