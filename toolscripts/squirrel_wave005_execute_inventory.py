import struct

import capstone
from capstone import arm as arm

from squirrel_wave004_model import sha


def inventory(image, census):
    function = next(row for row in census['functions'] if row['address'] == 0x18d65c)
    ranges = function['ranges']
    if len(ranges) != 8 or sum(row['bytes'] for row in ranges) != 13184:
        raise ValueError('Execute canonical eight-range instruction census changed')
    intervals = [(row['endExclusive'], following['start']) for row, following in zip(ranges, ranges[1:])]
    intervals.append((ranges[-1]['endExclusive'], 0x190c50))
    if sum(end - start for start, end in intervals) != 628:
        raise ValueError('Execute intervening/trailing metadata extent changed')
    decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    decoder.detail = True
    instructions = {}
    for row in ranges:
        parsed = list(decoder.disasm(image[row['start'] - 0x100000:row['endExclusive'] - 0x100000], row['start']))
        if sum(item.size for item in parsed) != row['bytes']:
            raise ValueError('Instruction census cannot be decoded completely')
        instructions.update({item.address: item for item in parsed})
    records, covered = [], {}
    advance, opcode = instructions[0x18d8a4], instructions[0x18d8ac]
    if advance.mnemonic != 'add' or advance.operands[2].imm != 8 or opcode.mnemonic != 'ldrb' or opcode.operands[1].mem.disp != 4:
        raise ValueError('Execute instruction stride/opcode-byte fetch changed')

    def add(start, end, kind, **metadata):
        if not any(left <= start < end <= right for left, right in intervals):
            raise ValueError('Classification escaped excluded data intervals')
        if any(address in covered for address in range(start, end)):
            raise ValueError('Execute data classifications overlap')
        for address in range(start, end):
            covered[address] = kind
        records.append({'start': start, 'endExclusive': end, 'bytes': end - start, 'kind': kind,
                        'sha256': sha(image[start - 0x100000:end - 0x100000]), **metadata})

    for branch, count in ((0x18d8b4, 61), (0x18eb48, 7)):
        instruction, guard = instructions[branch], instructions[branch - 4]
        if instruction.mnemonic != 'ldrlo' or instruction.operands[0].reg != arm.ARM_REG_PC or guard.mnemonic != 'cmp' or guard.operands[1].imm != count:
            raise ValueError('Bounded Execute dispatch-table guard changed')
        memory = instruction.operands[1]
        if memory.mem.base != arm.ARM_REG_PC or memory.mem.index != guard.operands[0].reg or memory.shift.value != 2:
            raise ValueError('Dispatch is not a PC-relative scaled pointer lookup')
        start = branch + 8
        targets = list(struct.unpack_from('<' + 'I' * count, image, start - 0x100000))
        if any(target not in instructions for target in targets):
            raise ValueError('Dispatch table points outside verified instruction ranges')
        add(start, start + count * 4, 'bounded-pointer-dispatch-table', entries=count, targets=targets,
            guard=branch - 4, indirectBranch=branch,
            guardSha256=sha(image[branch - 4 - 0x100000:branch + 4 - 0x100000]))
    literals, strings = {}, {}
    for instruction in instructions.values():
        for operand in instruction.operands:
            if operand.type == arm.ARM_OP_MEM and operand.mem.base == arm.ARM_REG_PC and not operand.mem.index:
                target = instruction.address + 8 + operand.mem.disp
                if any(start <= target < end for start, end in intervals):
                    scalar_vfp = instruction.id == arm.ARM_INS_VLDR and arm.ARM_REG_S0 <= instruction.operands[0].reg <= arm.ARM_REG_S31
                    if instruction.id != arm.ARM_INS_LDR and not scalar_vfp:
                        raise ValueError('PC-relative data consumer is not a qualified four-byte literal load')
                    literals.setdefault(target, []).append(instruction.address)
        operands = instruction.operands
        if instruction.mnemonic in ('add', 'sub') and len(operands) == 3 and operands[1].type == arm.ARM_OP_REG and operands[1].reg == arm.ARM_REG_PC and operands[2].type == arm.ARM_OP_IMM:
            target = instruction.address + 8 + operands[2].imm * (1 if instruction.mnemonic == 'add' else -1)
            if any(start <= target < end for start, end in intervals):
                strings.setdefault(target, []).append(instruction.address)
    for target, callers in strings.items():
        limit = next(end for start, end in intervals if start <= target < end)
        end = image.index(0, target - 0x100000, limit - 0x100000) + 0x100001
        if not all(32 <= value < 127 for value in image[target - 0x100000:end - 1 - 0x100000]):
            raise ValueError('ADR-referenced data is not a qualified eight-bit ASCII/NUL string')
        add(target, end, 'adr-referenced-ascii-nul-string', references=callers)
    for target, callers in literals.items():
        add(target, target + 4, 'pc-relative-literal-word', references=callers)
    for start, end in intervals:
        cursor = start
        while cursor < end:
            if cursor in covered:
                cursor += 1
                continue
            stop = cursor
            while stop < end and stop not in covered:
                stop += 1
            if stop - cursor > 3 or stop % 4 or any(image[cursor - 0x100000:stop - 0x100000]):
                raise ValueError('Unclassified Execute interval remains: ' + hex(cursor))
            add(cursor, stop, 'zero-alignment-padding')
            cursor = stop
    counts = {kind: sum(row['bytes'] for row in records if row['kind'] == kind) for kind in sorted(set(covered.values()))}
    return {'address': 0x18d65c, 'mode': 'ARM', 'instructionRanges': ranges, 'instructionBytes': 13184,
            'completeInstructionAndDataSpanSha256': sha(image[0x18d65c - 0x100000:0x190c50 - 0x100000]),
            'endExclusiveIncludingLastLiteral': 0x190c50, 'interveningBytes': 624, 'trailingLiteralBytes': 4,
            'classifiedDataBytes': len(covered), 'unclassifiedDataBytes': 628 - len(covered),
            'dataClasses': counts, 'dataRanges': sorted(records, key=lambda row: row['start']),
            'instructionStrideBytes': 8, 'opcodeByteOffset': 4, 'opcodeDomainExclusive': 61,
            'decoderPackageVersion': capstone.__version__, 'decoderNativeVersion': list(capstone.cs_version()),
            'wholeFunctionSourceReconstructed': False, 'sourceCodeCreditGranted': 0}
