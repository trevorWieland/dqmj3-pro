from dataclasses import dataclass

import capstone
from capstone import arm_const as a
import z3


class UnsupportedArm(ValueError):
    pass


@dataclass(frozen=True)
class Operand:
    kind: str
    value: int


@dataclass(frozen=True)
class Instruction:
    address: int
    operation: str
    condition: int
    operands: tuple
    sets_flags: bool


@dataclass
class State:
    registers: list
    flags: tuple
    pc: object
    thumb: object
    returned: object
    memory: object
    other_cpsr: object
    obligations: list


def bv(value):
    return z3.BitVecVal(value & 0xffffffff, 32)


def condition(code, flags):
    n, zero, carry, overflow = flags
    rules = {a.ARM_CC_AL: z3.BoolVal(True), a.ARM_CC_EQ: zero,
             a.ARM_CC_NE: z3.Not(zero), a.ARM_CC_HS: carry,
             a.ARM_CC_LO: z3.Not(carry), a.ARM_CC_HI: z3.And(carry, z3.Not(zero)),
             a.ARM_CC_LS: z3.Or(z3.Not(carry), zero)}
    if code not in rules:
        raise UnsupportedArm('Condition outside supported AL/EQ/NE/HS/LO/HI/LS subset')
    return rules[code]


def subtract_flags(left, right):
    result = left - right
    return (z3.Extract(31, 31, result) == 1, result == 0, z3.UGE(left, right),
            z3.Extract(31, 31, (left ^ right) & (left ^ result)) == 1)


def decode(data, address):
    decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    decoder.detail = True
    reg_ids = [getattr(a, 'ARM_REG_R' + str(i)) for i in range(13)] + [a.ARM_REG_SP, a.ARM_REG_LR]
    operations = {a.ARM_INS_SUB: 'sub', a.ARM_INS_CMP: 'cmp', a.ARM_INS_MOV: 'mov', a.ARM_INS_BX: 'bx'}
    rows = []
    for insn in decoder.disasm(data, address):
        if insn.address != address + 4 * len(rows) or insn.size != 4 or insn.id not in operations:
            raise UnsupportedArm('Unsupported operation, ARM width or noncontiguous decoding')
        operands = []
        for op in insn.operands:
            if op.shift.type or op.subtracted or op.vector_index != -1:
                raise UnsupportedArm('Shifted, subtracted or vector operand unsupported')
            if op.type == a.ARM_OP_IMM:
                operands.append(Operand('immediate', op.imm & 0xffffffff))
            elif op.type == a.ARM_OP_REG and op.reg in reg_ids:
                operands.append(Operand('register', reg_ids.index(op.reg)))
            else:
                raise UnsupportedArm('PC, memory or non-core operand unsupported')
        name = operations[insn.id]
        counts = {'sub': 3, 'cmp': 2, 'mov': 2, 'bx': 1}
        if len(operands) != counts[name] or insn.writeback or insn.usermode:
            raise UnsupportedArm('Operand count, writeback or usermode unsupported')
        if name == 'mov' and insn.update_flags:
            raise UnsupportedArm('MOVS shifter carry unsupported')
        if name in ('sub', 'mov') and operands[0].kind != 'register':
            raise UnsupportedArm('Invalid destination register')
        if name == 'bx' and (insn.cc != a.ARM_CC_AL or operands != [Operand('register', 14)]):
            raise UnsupportedArm('Only unconditional BX LR return is supported')
        condition(insn.cc, tuple(z3.BoolVal(False) for _ in range(4)))
        rows.append(Instruction(insn.address, name, insn.cc, tuple(operands), insn.update_flags))
    if not rows or len(rows) * 4 != len(data) or rows[-1].operation != 'bx':
        raise UnsupportedArm('Complete instruction body ending in actual BX LR required')
    if any(row.operation == 'bx' for row in rows[:-1]):
        raise UnsupportedArm('Early return or trailing instructions unsupported')
    return rows


def initial_state(address):
    registers = [z3.BitVec('input_r' + str(i), 32) for i in range(15)]
    flags = tuple(z3.Bool('input_' + name) for name in ('N', 'Z', 'C', 'V'))
    memory = z3.Array('input_memory', z3.BitVecSort(32), z3.BitVecSort(8))
    other_cpsr = z3.BitVec('input_other_cpsr', 32) & bv(0x0fffffdf)
    return State(registers, flags, bv(address), z3.BoolVal(False), z3.BoolVal(False), memory, other_cpsr, [])


def execute(rows, initial):
    state = State(list(initial.registers), initial.flags, initial.pc, initial.thumb,
                  initial.returned, initial.memory, initial.other_cpsr, [])
    for row in rows:
        state.obligations.extend([state.pc == bv(row.address), z3.Not(state.returned), z3.Not(state.thumb)])
        guard = condition(row.condition, state.flags)
        values = [state.registers[op.value] if op.kind == 'register' else bv(op.value) for op in row.operands]
        if row.operation == 'bx':
            target = values[0]
            state.pc = target & bv(0xfffffffe)
            state.thumb = z3.Extract(0, 0, target) == 1
            state.returned = z3.BoolVal(True)
            continue
        if row.operation == 'cmp':
            state.flags = tuple(z3.If(guard, new, old) for new, old in zip(subtract_flags(*values), state.flags))
        else:
            result = values[1] if row.operation == 'mov' else values[1] - values[2]
            state.registers[row.operands[0].value] = z3.If(guard, result, values[0])
            if row.sets_flags:
                state.flags = tuple(z3.If(guard, new, old) for new, old in zip(subtract_flags(values[1], values[2]), state.flags))
        state.pc = bv(row.address + 4)
    return state


def domain(initial):
    lr = initial.registers[14]
    return z3.And(initial.registers[13] & bv(7) == 0,
                  initial.other_cpsr & bv(0x0700fc1f) == bv(0x10),
                  z3.Or(lr & bv(1) == 1, lr & bv(3) == 0))


def violations(final, initial, result):
    protected = list(range(4, 12)) + [13, 14]
    return z3.Or(final.registers[0] != result, z3.Not(final.returned),
                 final.pc != initial.registers[14] & bv(0xfffffffe),
                 final.thumb != (z3.Extract(0, 0, initial.registers[14]) == 1),
                 final.memory != initial.memory,
                 final.other_cpsr != initial.other_cpsr,
                 *[final.registers[i] != initial.registers[i] for i in protected],
                 *[z3.Not(obligation) for obligation in final.obligations])
