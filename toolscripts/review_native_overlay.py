import hashlib
import json
from pathlib import Path

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_GRP_CALL, CS_GRP_JUMP
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC

import native_census_overlay as overlay


ROOT = Path(__file__).resolve().parents[1]


def pin(path):
    raw = (ROOT / path).read_bytes()
    return {'path': path, 'sha256': hashlib.sha256(raw).hexdigest(), 'bytes': len(raw)}


def main():
    packet_path = 'evidence/lanes/wave013-native/method-dispatch-overlay.json'
    packet = json.loads((ROOT / packet_path).read_text())
    base = overlay.checked(ROOT, packet['frozenCensus'])
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    functions = overlay.validate(base, packet, image)
    known = {row['address'] for row in base['functions']} | {row['address'] for row in functions}
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    terminators, references, shared, indirect = [], [], [], []
    for row in packet['functions']:
        address = row['canonicalIdentity']['address']
        for part in row['instructionRanges']:
            instructions = list(decoder.disasm(image[part['start'] - 0x100000:part['endExclusive'] - 0x100000], part['start']))
            if len(instructions) * 4 != part['bytes']:
                raise ValueError('Independent ARM decoding leaves bytes unaccounted')
            last = instructions[-1]
            if last.mnemonic not in ('bx', 'b'):
                raise ValueError('Supplemental extent has an unqualified fallthrough')
            terminators.append({'entry': address, 'instruction': last.address, 'mnemonic': last.mnemonic,
                                'operand': last.op_str, 'conditionCode': last.cc})
            for instruction in instructions:
                if (instruction.group(CS_GRP_JUMP) or instruction.group(CS_GRP_CALL)) and instruction.operands[0].type == ARM_OP_IMM:
                    target = instruction.operands[0].imm
                    local = any(span['start'] <= target < span['endExclusive'] for span in row['instructionRanges'])
                    if not local and target not in known:
                        witness = next((alias for alias in packet['sharedTailAliases'] if alias['address'] == instruction.address and alias['target'] == target), None)
                        if witness is None:
                            raise ValueError('Direct control transfer leaves declared ownership')
                        shared.append(witness)
                if instruction.mnemonic == 'bx' and instruction.op_str != 'lr':
                    witness = next((item for item in row['indirectTransfers'] if item['address'] == instruction.address and item['register'] == instruction.op_str), None)
                    if witness is None:
                        raise ValueError('Indirect control transfer lacks its dispatch witness')
                    indirect.append(witness)
                for operand in instruction.operands:
                    if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                        target = instruction.address + 8 + operand.mem.disp
                        if not any(span['start'] <= target <= span['endExclusive'] - 4 for span in row['literalPoolRanges']):
                            raise ValueError('PC-relative read lacks a declared literal pool')
                        references.append({'entry': address, 'instruction': instruction.address, 'literal': target})
    report = {'schemaVersion': 1, 'status': 'reviewed-supplemental-discovered-function-inventory',
        'baseCensus': packet['frozenCensus'], 'overlay': pin(packet_path),
        'producer': pin('toolscripts/review_native_overlay.py'), 'validator': pin('toolscripts/native_census_overlay.py'),
        'moduleSha256': base['codeSha256'], 'addedDiscoveredEntries': len(functions),
        'newInstructionBytes': sum(row['textBodyBytes'] for row in functions),
        'newLiteralPoolBytesNotCodeCredit': sum(part['bytes'] for row in packet['functions'] for part in row['literalPoolRanges']),
        'baseDiscoveredEntries': base['functionCount'], 'composedDiscoveredEntries': base['functionCount'] + len(functions),
        'initializedTextDenominatorUnchanged': 7051280, 'instructionRangeTerminators': terminators,
        'pcRelativeLiteralReads': references, 'sharedTailWitnesses': shared, 'indirectDispatchWitnesses': indirect,
        'sourceCreditGranted': 0, 'historicalFunctionCompletenessClaim': False,
        'limits': ['Frozen base analysis statistics are retained as historical observations',
                   'Only function ownership is supplemented; no original data/code payload is published',
                   'Behavioral source admission and linked game completion remain separate']}
    target = ROOT / 'evidence/verification/native-overlay013.json'
    target.write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'entriesAdded': len(functions), 'instructionBytes': 3172, 'sourceCredit': 0}))


if __name__ == '__main__':
    main()
