import hashlib
import json
from pathlib import Path

from capstone import CS_ARCH_ARM, CS_MODE_ARM, Cs
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_REG_PC


ROOT = Path(__file__).resolve().parents[1]
ENTRIES = [0x75BD7C, 0x75C360, 0x75C760, 0x75CE80,
           0x75D460, 0x75D97C, 0x75E094, 0x75E6BC, 0x6FA358]


def digest(data):
    return hashlib.sha256(data).hexdigest()


def pin(path):
    return {'path': path.relative_to(ROOT).as_posix(),
            'bytes': path.stat().st_size, 'sha256': digest(path.read_bytes())}


def measure():
    original = ROOT / 'generated/update-content0/code.bin'
    census_path = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    raw = original.read_bytes()
    census = json.loads(census_path.read_text())
    if digest(raw) != census['codeSha256']:
        raise ValueError('Canonical update module differs')
    by_address = {row['address']: row for row in census['functions']}
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    decoder.detail = True
    functions, private_text = [], []
    ownership = set()
    for entry in ENTRIES:
        candidate = by_address[entry]
        if candidate['mode'] != 'ARM':
            raise ValueError('Unexpected sampled-key instruction mode')
        instructions, spans = [], []
        for span in candidate['ranges']:
            start, end = span['start'], span['endExclusive']
            data = raw[start - 0x100000:end - 0x100000]
            decoded = list(decoder.disasm(data, start))
            if len(decoded) * 4 != len(data) or any(row.size != 4 for row in decoded):
                raise ValueError('Incomplete ARM instruction range')
            addresses = {row.address for row in decoded}
            if ownership & addresses:
                raise ValueError('Instruction ownership overlaps')
            ownership |= addresses
            instructions.extend(decoded)
            spans.append({**span, 'sha256': digest(data)})
        addresses = {row.address for row in instructions}
        literals, branches, calls, indirect = {}, [], [], []
        for instruction in instructions:
            for operand in instruction.operands:
                if operand.type == ARM_OP_MEM and operand.mem.base == ARM_REG_PC:
                    address = instruction.address + 8 + operand.mem.disp
                    if address % 4 or address in ownership:
                        raise ValueError('Literal does not occupy separate aligned data')
                    if not 0x100000 <= address <= 0x100000 + 7051280 - 4:
                        raise ValueError('Literal outside initialized text')
                    literals.setdefault(address, []).append(instruction.address)
            if instruction.mnemonic in ['bl', 'blx']:
                if len(instruction.operands) != 1 or instruction.operands[0].type != ARM_OP_IMM:
                    indirect.append(instruction.address)
                else:
                    target = instruction.operands[0].imm
                    if target != 0x6FA358 or entry == 0x6FA358:
                        raise ValueError('Unexpected external sampled-key dependency')
                    calls.append({'instruction': instruction.address, 'target': target,
                                  'instructionSha256': digest(instruction.bytes)})
            elif instruction.mnemonic.startswith('b') and instruction.operands:
                operand = instruction.operands[0]
                if operand.type == ARM_OP_IMM:
                    target = operand.imm
                    if target not in addresses:
                        raise ValueError('Direct branch escapes complete candidate body')
                    branches.append({'instruction': instruction.address, 'target': target})
        literal_rows = [{'start': address, 'endExclusive': address + 4, 'bytes': 4,
                         'sha256': digest(raw[address - 0x100000:address - 0x100000 + 4]),
                         'loadInstructions': users} for address, users in sorted(literals.items())]
        functions.append({'entry': entry, 'mode': 'ARM',
                          'instructionBytes': candidate['textBodyBytes'],
                          'instructionRanges': spans, 'literalWords': literal_rows,
                          'actualDirectCalls': calls, 'actualDirectBranches': branches,
                          'indirectCallInstructions': indirect,
                          'censusDirectCallers': [row['address'] for row in census['functions']
                                                 if entry in row['calledFunctionAddresses']],
                          'boundaryStatus': 'instruction-decoding-and-direct-control-flow-checked',
                          'abiStatus': 'r0-input-r1-output-s0-float-lead-requires-execution',
                          'sourceCreditGranted': 0})
        private_text.append('FUNCTION ' + hex(entry) + '\n' + '\n'.join(
            f'{row.address:08x} {row.mnemonic} {row.op_str}' for row in instructions))
    for row in functions:
        if any(word['start'] in ownership for word in row['literalWords']):
            raise ValueError('A scalar literal overlaps another owned instruction')
    table = raw[0x89A8B4 - 0x100000:0x89A8D4 - 0x100000]
    targets = [int.from_bytes(table[at:at + 4], 'little') for at in range(0, 32, 4)]
    if targets != list(reversed(ENTRIES[:-1])):
        raise ValueError('Original eight-entry function table differs')
    packet = {'schemaVersion': 1, 'status': 'reference-first-measured-claim-not-admission',
              'producer': pin(Path(__file__)), 'moduleSha256': digest(raw),
              'census': pin(census_path), 'functions': functions,
              'candidateFunctions': len(functions),
              'candidateInstructionBytes': sum(row['instructionBytes'] for row in functions),
              'dispatchTable': {'start': 0x89A8B4, 'endExclusive': 0x89A8D4,
                                'bytes': 32, 'sha256': digest(table), 'targets': targets,
                                'selectorAndGameReachabilityQualified': False},
              'semanticName': 'Sampled-key segment preparation candidate; animation identity unproven',
              'hypothesizedResult': 'Cached key pointer, repeat count, segment bounds and polynomial coefficients',
              'completeOriginalDataExtentQualified': False,
              'originalPayloadsPublished': False, 'sourceCodeWrittenAtMeasurement': False,
              'sourceCreditGranted': 0, 'matchingCreditGranted': 0}
    output = ROOT / 'evidence/lanes/native-sampled-key053'
    work = ROOT / 'work/sampled-key053'
    output.mkdir(parents=True, exist_ok=True)
    work.mkdir(parents=True, exist_ok=True)
    (work / 'measured-functions.private.txt').write_text('\n\n'.join(private_text) + '\n')
    target = output / 'claim.json'
    target.write_text(json.dumps(packet, indent=2) + '\n')
    print(json.dumps({'claim': pin(target), 'functions': len(functions),
                      'instructionBytes': packet['candidateInstructionBytes']}))


if __name__ == '__main__':
    measure()
