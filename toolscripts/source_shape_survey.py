import argparse
from collections import defaultdict
import json
from pathlib import Path

import capstone
from capstone.arm import ARM_OP_REG, ARM_OP_IMM, ARM_OP_MEM, ARM_INS_BL, ARM_INS_BLX
import native_census_overlay
from source_clone_survey import ROOT, read, sha


def shape(row, image, decoder):
    if row['mode'] != 'ARM' or len(row['ranges']) != 1 or row['textBodyBytes'] < 64:
        return None
    part = row['ranges'][0]
    start, end = part['start'], part['endExclusive']
    raw = image[start - 0x100000:end - 0x100000]
    instructions = list(decoder.disasm(raw, start))
    if sum(item.size for item in instructions) != len(raw):
        return None
    tokens, calls, parameters = [], [], []
    for index, instruction in enumerate(instructions):
        operands = []
        for operand_index, operand in enumerate(instruction.operands):
            shift = (operand.shift.type, operand.shift.value)
            if operand.type == ARM_OP_REG:
                operands.append(('register', operand.reg, shift))
            elif operand.type == ARM_OP_MEM:
                memory = operand.mem
                operands.append(('memory', memory.base, memory.index, memory.scale, shift))
                parameters.append((index, operand_index, 'memory-displacement', memory.disp))
            elif operand.type == ARM_OP_IMM:
                target = operand.imm
                if instruction.id in (ARM_INS_BL, ARM_INS_BLX):
                    operands.append(('call',))
                    calls.append((index, target))
                elif instruction.group(capstone.CS_GRP_JUMP):
                    if start <= target < end and (target - start) % 4 == 0:
                        operands.append(('internal-branch', (target - start) // 4))
                    else:
                        operands.append(('external-branch',))
                        calls.append((index, target))
                else:
                    operands.append(('immediate', shift))
                    parameters.append((index, operand_index, 'immediate', target))
            else:
                return None
        tokens.append((instruction.mnemonic, instruction.cc, instruction.update_flags,
                       instruction.writeback, operands))
    digest = sha(json.dumps(tokens, separators=(',', ':')).encode())
    return {'shape': digest, 'rawSha256': sha(raw), 'calls': calls, 'parameters': parameters,
            'instructionCount': len(instructions)}


def survey(root):
    registry = read(root / 'config/functional-functions.json')
    inventory = read(root / 'evidence/inventory/update-content0.json')
    image = (root / 'generated/update-content0/code.bin').read_bytes()
    if sha(image) != inventory['codeSha256']:
        raise ValueError('Original module identity differs')
    census, unused = native_census_overlay.compose(root, read(root / registry['census']['path']))
    canonical = {row['address']: row for row in census['functions']}
    accepted, packets = {}, {}
    for entry in registry['functions']:
        path = entry['packet']['path']
        if path not in packets:
            data = (root / path).read_bytes()
            if sha(data) != entry['packet']['sha256']:
                raise ValueError('Functional proof identity differs')
            packets[path] = json.loads(data)
        proof = next(row for row in packets[path]['functions'] if row['symbol'] == entry['name'])
        address = proof['canonicalIdentity']['address']
        accepted[address] = {'symbol': entry['name'], 'source': proof['source'], 'packet': entry['packet']}
    decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    decoder.detail = True
    seeds, signatures = defaultdict(list), {}
    for address in accepted:
        signature = shape(canonical[address], image, decoder)
        if signature:
            seeds[signature['shape']].append(address)
            signatures[address] = signature
    sizes = {canonical[address]['textBodyBytes'] for address in signatures}
    groups = defaultdict(list)
    analyzed = 0
    for address, row in canonical.items():
        if address in accepted or row['textBodyBytes'] not in sizes:
            continue
        signature = shape(row, image, decoder)
        analyzed += 1
        if not signature or signature['shape'] not in seeds:
            continue
        matches = []
        for seed in seeds[signature['shape']]:
            original = signatures[seed]
            left, right = dict(((i, operand, kind), value) for i, operand, kind, value in original['parameters']), dict(((i, operand, kind), value) for i, operand, kind, value in signature['parameters'])
            matches.append({'qualifiedSeed': seed, 'sameExternalCallTargets': original['calls'] == signature['calls'],
                'differingParameters': [{'instructionIndex': index, 'operandIndex': operand, 'kind': kind, 'seedValue': left.get((index, operand, kind)), 'candidateValue': right.get((index, operand, kind))}
                    for index, operand, kind in sorted(left.keys() | right.keys()) if left.get((index, operand, kind)) != right.get((index, operand, kind))],
                'seedExternalCalls': original['calls'], 'candidateExternalCalls': signature['calls']})
        groups[signature['shape']].append({'address': address, 'symbol': 'fn_' + format(address, '08x'),
            'instructionBytes': row['textBodyBytes'], 'ranges': row['ranges'], 'bodySha256': signature['rawSha256'],
            'seedComparisons': matches})
    result = []
    for key, candidates in groups.items():
        result.append({'shapeSha256': key, 'qualifiedSeeds': [{'address': address, **accepted[address]} for address in seeds[key]],
            'candidates': candidates, 'candidateInstructionBytes': sum(row['instructionBytes'] for row in candidates),
            'sameExternalCallTargetCandidates': sum(any(row['sameExternalCallTargets'] for row in candidate['seedComparisons']) for candidate in candidates),
            'sourceCreditGranted': 0})
    result.sort(key=lambda row: row['candidateInstructionBytes'], reverse=True)
    return {'schemaVersion': 1, 'kind': 'candidate-only-ARM-shape-survey', 'moduleSha256': sha(image),
        'canonicalEntries': len(canonical), 'functionalSeeds': len(accepted), 'shapeQualifiedSeeds': len(signatures),
        'candidateSizedBodiesExamined': analyzed, 'groups': result,
        'candidateEntries': sum(len(row['candidates']) for row in result),
        'candidateInstructionBytes': sum(row['candidateInstructionBytes'] for row in result),
        'sourceCreditGranted': 0, 'inventoryChangesGranted': 0,
        'limits': ['Immediate values and memory displacements are candidate parameters, not proven substitutions.',
            'External branch/call destinations are compared separately and may change semantics.',
            'Single contiguous ARM ranges only; caller ABI, object roles, ownership, data and independent execution still require review.',
            'A shared instruction shape does not establish source equivalence, matching or a whole-game build.']}


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--root', type=Path, default=ROOT)
    parser.add_argument('--output', type=Path, default=Path('work/source-shape-survey.json'))
    args = parser.parse_args()
    root = args.root.resolve()
    output = args.output if args.output.is_absolute() else root / args.output
    if not output.resolve().is_relative_to(root / 'work'):
        raise ValueError('Candidate survey output must remain private under work')
    result = survey(root)
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({key: result[key] for key in ['functionalSeeds', 'shapeQualifiedSeeds', 'candidateEntries', 'candidateInstructionBytes']}))
