import hashlib
import json
import random
import struct

import unicorn
from unicorn.arm_const import *


OUTER = 0x3000000
INNER = 0x3100000
ARENA = 0x10000
STACK = 0x2000000
SP = STACK + 0x1000
END = 0x5000000
MASK = 0xffffffff
REGS = [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4,
        UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9,
        UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR]


def digest(data):
    return hashlib.sha256(data).hexdigest()


def scalar(memory, address, width, value=None, signed=False):
    arena = OUTER if OUTER <= address < OUTER + ARENA else INNER
    offset = address - arena
    if value is None:
        return int.from_bytes(memory[arena][offset:offset + width], 'little', signed=signed)
    memory[arena][offset:offset + width] = (value & ((1 << (8 * width)) - 1)).to_bytes(width, 'little')


def prepare(row, vector, seed):
    rng = random.Random(seed)
    memory = {OUTER: bytearray(rng.randbytes(ARENA)), INNER: bytearray(rng.randbytes(ARENA))}
    geometry = vector.get('geometry', 0)
    root = OUTER + geometry
    record = root + row['semanticModel'].get('embeddedOffset', 0)
    pointer_reads = []
    if row['pointerOffsets']:
        record = 0 if vector.get('null') else INNER + (geometry ^ 0x3c)
        scalar(memory, root + row['pointerOffsets'][0], 4, record)
        pointer_reads.append((root + row['pointerOffsets'][0], 4))
    model = row['semanticModel']
    kind = model['kind']
    argument = vector.get('value', 0) & MASK
    enabled = vector.get('enabled', 0) & MASK
    state = vector.get('state', 0)
    compare = vector.get('compare', 0)
    if kind == 'publish-state-pair':
        scalar(memory, root + 12, 1, compare)
        scalar(memory, root + 13, 1, state)
    elif kind == 'publish-state-if-different':
        scalar(memory, root + 12, 1, state)
    field_offset = row['fieldOffset'] + (argument >> 3 if kind == 'bitmap-set' else 0)
    field = record + field_offset if record else None
    width = row['fieldWidth']
    if field is not None:
        scalar(memory, field, width, vector.get('old', 0))
    if kind == 'clear-relative-index':
        scalar(memory, root + model['baseOffset'], 1, vector.get('base', 0))
    expected = {base: bytearray(data) for base, data in memory.items()}
    reads = list(pointer_reads)
    writes = []
    if record:
        reads.append((field, width))
    if kind == 'publish-state-pair':
        reads.append((root + 12, 2))
    elif kind == 'publish-state-if-different':
        reads.append((root + 12, 1))
    if kind == 'clear-relative-index':
        reads.append((root + model['baseOffset'], 1))
    if kind in ('dirty32', 'dirty16pair'):
        offsets = [model['dataOffset']] if kind == 'dirty32' else model['dataOffsets']
        payload_width = 4 if kind == 'dirty32' else 2
        for offset in offsets:
            scalar(expected, record + offset, payload_width, argument)
            writes.append((record + offset, payload_width))
    result = record
    mutate = True
    old = scalar(memory, field, width) if record else 0
    new = old
    if model.get('nullable') and not record:
        mutate = False
    elif kind == 'set-constant' or kind in ('dirty32', 'dirty16pair'):
        new = old | model['mask']
    elif kind == 'clear-constant':
        new = old & ~model['mask']
    elif kind == 'or-argument':
        new = old | argument
    elif kind == 'clear-argument':
        new = old & ~argument
    elif kind in ('replace', 'replace-return-old-bit'):
        new = (old & ~model['clearMask']) | (((argument & model['argumentMask']) << model['shift']) & MASK)
        if kind == 'replace-return-old-bit':
            result = old & 1
    elif kind == 'conditional-mask':
        new = old | argument if enabled else old & ~argument
    elif kind == 'conditional-index':
        index = argument & model['indexMask']
        if index >= 8 * width:
            raise ValueError('Index outside declared defined-C shift domain')
        bit = 1 << index
        new = old | bit if enabled else old & ~bit
    elif kind == 'clear-one-based-index':
        if argument == 255:
            mutate = False
        elif 1 <= argument <= 32:
            new = old & ~(1 << (argument - 1))
        else:
            raise ValueError('Outside one-based flag index/sentinel domain')
    elif kind == 'clear-relative-index':
        index = argument - vector.get('base', 0)
        if not 0 <= index < 16:
            raise ValueError('Outside defined relative flag index domain')
        new = old & ~(1 << index)
    elif kind == 'bitmap-set':
        if argument > 511:
            raise ValueError('Outside supplied bitmap array')
        new = old | (1 << (argument & 7))
        result = root + (argument >> 3)
    elif kind == 'publish-state-pair':
        if not argument and compare == state:
            mutate = False
            result = root
        else:
            if not record:
                raise ValueError('Updating state requires valid inner record')
            new = (old & ~1) | (state & MASK)
    elif kind == 'publish-state-if-different':
        requested = state & MASK
        if old & 1 == requested:
            mutate = False
            result = requested
        else:
            new = (old & ~1) | requested
            result = new & MASK
    else:
        raise ValueError('Unknown semantic model')
    if mutate:
        scalar(expected, field, width, new)
        writes.append((field, width))
    if kind in ('dirty32', 'dirty16pair'):
        result = new & MASK
    return {'vector': vector, 'seed': seed, 'memory': memory, 'expected': expected,
            'root': root, 'record': record, 'result': result & MASK,
            'readRanges': reads, 'writeRanges': writes,
            'arguments': [root, argument, enabled], 'cpsr': ((vector.get('flags', 0) & 15) << 28) | 0x10}


def vectors(row):
    kind = row['semanticModel']['kind']
    width_mask = (1 << (8 * row['fieldWidth'])) - 1
    old_values = sorted({value & width_mask for value in (0, 1, 2, 0x7f, 0x80, 0xff, 0x7fff, 0x8000,
                                                         0xffff, 0x80000000, 0xffffffff, 0xa55a91c3)})
    arguments = [0, 1, 2, 3, 0x7f, 0x80, 0xff, 0x80000000, 0xffffffff, 0xa55a91c3]
    result = []
    if kind.startswith('publish-state'):
        for state in (-128, -1, 0, 1, 2, 127):
            for old in (0, 1, 0x80, 0xff):
                if kind == 'publish-state-pair':
                    for force, compare in ((0, state), (0, 1 if state != 1 else 0), (1, state), (0xffffffff, -1)):
                        result.append({'state': state, 'compare': compare, 'old': old, 'value': force})
                else:
                    result.append({'state': state, 'old': old, 'value': 0xa55a91c3})
        if kind == 'publish-state-pair':
            result += [{'state': state, 'compare': state, 'old': 0x80, 'value': 0, 'null': True} for state in (-1, 0, 1)]
    elif kind == 'conditional-index':
        domain = row['semanticModel']['indexDomain']
        indices = [0, 1, 7, 8, 31, 255, 0xffffffff] if row['semanticModel']['indexMask'] == 7 else [0, 1, 7] if domain == '0..7' else [0, 1, 15, 31]
        result = [{'old': old, 'value': index, 'enabled': enabled}
                  for old in old_values[:6] for index in indices for enabled in (0, 1, 0xffffffff)]
    elif kind == 'conditional-mask':
        result = [{'old': old, 'value': value, 'enabled': enabled}
                  for old, value in zip(old_values * 2, arguments * 2) for enabled in (0, 1, 0xffffffff)]
    elif kind == 'clear-one-based-index':
        result = [{'old': old, 'value': index} for old in old_values for index in (1, 2, 8, 16, 31, 32, 255)]
    elif kind == 'clear-relative-index':
        result = [{'old': old, 'base': base, 'value': base + index}
                  for old in old_values[:6] for base in (0, 1, 128, 255) for index in (0, 1, 7, 15)]
    elif kind == 'bitmap-set':
        result = [{'old': old, 'value': index} for old in old_values for index in (0, 1, 7, 8, 31, 255, 511)]
    else:
        for index, old in enumerate(old_values):
            for value in (arguments[index % len(arguments)], 0, 0xffffffff):
                result.append({'old': old, 'value': value})
        if row['semanticModel'].get('nullable'):
            result += [{'old': 0x80, 'value': value, 'null': True} for value in (0, 1, 0xffffffff)]
    primary = next(vector for vector in result if not vector.get('null') and vector.get('value') != 255)
    result += [dict(primary, flags=flags) for flags in range(16)]
    return [dict(vector, geometry=(index & 1) * 0xfc, flags=vector.get('flags', index & 15)) for index, vector in enumerate(result)]


def negative_case(row):
    kind = row['semanticModel']['kind']
    vector = {'old': 0, 'value': 1, 'enabled': 1, 'state': 2, 'compare': 0, 'base': 0, 'flags': 15}
    if kind == 'clear-relative-index':
        vector['value'] = 1
    return prepare(row, vector, 0x335008)


def execute(code, entry, row, case):
    machine = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    machine.ctl_set_cpu_model(UC_CPU_ARM_1176)
    page = entry & ~4095
    machine.mem_map(page, ((entry + len(code) + 4095) & ~4095) - page,
                    unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    machine.mem_write(entry, code)
    machine.mem_map(END, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    for arena, data in case['memory'].items():
        machine.mem_map(arena, ARENA)
        machine.mem_write(arena, bytes(data))
    machine.mem_map(STACK, 8192)
    rng = random.Random(case['seed'])
    stack = rng.randbytes(8192)
    machine.mem_write(STACK, stack)
    initial = [rng.getrandbits(32) for _ in REGS]
    initial[:3] = case['arguments']
    initial[-2:] = [SP, END]
    machine.reg_write(UC_ARM_REG_CPSR, case['cpsr'])
    for register, value in zip(REGS, initial):
        machine.reg_write(register, value)
    visited, reads, writes, predicates = [], [], [], {}
    def permitted(address, size, ranges):
        return all(any(start <= byte < start + length for start, length in ranges) for byte in range(address, address + size))
    def instruction(uc, pc, size, unused):
        if not (entry <= pc and pc + size <= entry + len(code)):
            raise RuntimeError('Unclosed instruction address')
        visited.append(pc)
        condition = int.from_bytes(code[pc - entry:pc - entry + 4], 'little') >> 28
        if condition < 14:
            cpsr = uc.reg_read(UC_ARM_REG_CPSR)
            n, z, c, v = [bool(cpsr & (1 << bit)) for bit in (31, 30, 29, 28)]
            decisions = [z, not z, c, not c, n, not n, v, not v, c and not z,
                         not c or z, n == v, n != v, not z and n == v, z or n != v]
            predicates.setdefault(str(pc), set()).add(decisions[condition])
    def access(uc, kind, address, size, value, unused):
        ranges = case['writeRanges'] if kind == unicorn.UC_MEM_WRITE else case['readRanges']
        if not permitted(address, size, ranges + [(SP - 128, 128)]):
            raise RuntimeError('Undeclared field/stack memory access at ' + hex(address))
        (writes if kind == unicorn.UC_MEM_WRITE else reads).append([address, size])
    machine.hook_add(unicorn.UC_HOOK_CODE, instruction)
    machine.hook_add(unicorn.UC_HOOK_MEM_READ, access)
    machine.hook_add(unicorn.UC_HOOK_MEM_WRITE, access)
    machine.emu_start(entry, END, count=128, timeout=100000)
    if machine.reg_read(UC_ARM_REG_PC) != END:
        raise RuntimeError('No actual return within instruction/time bounds')
    final = [machine.reg_read(register) for register in REGS]
    if final[4:12] != initial[4:12] or final[-2] != SP or machine.reg_read(UC_ARM_REG_CPSR) & 0x3f != 0x10:
        raise RuntimeError('AAPCS callee-save/SP/CPU-mode violation')
    actual = {arena: bytes(machine.mem_read(arena, ARENA)) for arena in case['memory']}
    after_stack = bytes(machine.mem_read(STACK, 8192))
    frame = SP - STACK
    if after_stack[:frame - 128] != stack[:frame - 128] or after_stack[frame:] != stack[frame:]:
        raise RuntimeError('Live stack/outside declared dead-frame bytes changed')
    agreed = final[0] == case['result'] and all(actual[arena] == expected for arena, expected in case['expected'].items())
    return {'returnedToSentinel': True, 'semanticModelAgreed': agreed, 'actualReturn': final[0],
            'expectedReturn': case['result'], 'memorySha256': {str(base): digest(data) for base, data in actual.items()},
            'expectedMemorySha256': {str(base): digest(data) for base, data in case['expected'].items()},
            'ownedInstructionAddresses': sorted(set(visited)), 'readTraceSha256': digest(json.dumps(reads).encode()),
            'conditionalPredicates': {pc: sorted(outcomes) for pc, outcomes in predicates.items()},
            'writeTraceSha256': digest(json.dumps(writes).encode()), 'writes': writes,
            'calleeSavedAndSpPreserved': True, 'returnAddressHonored': True,
            'lrBefore': initial[-1], 'lrAfter': final[-1], 'conditionFlagsAreAAPCSVolatile': True}
