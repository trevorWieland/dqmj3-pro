"""Classify the address arithmetic of a leaf function from its instructions.

Many small functions are one expression: a record pointer, an index and a
constant combined by the original compiler's strength-reduced arithmetic, then
one load, one store or a returned address. This module evaluates the
instructions of such a body as linear forms over the argument registers, so the
multiplier and the offset a function really computes come out of the
instructions instead of being guessed, then renders the one C expression that
performs the same arithmetic.

Only arithmetic the model can prove is accepted: addition, subtraction, reverse
subtraction, multiplication by a constant, left shift, and loads and stores with
fixed displacements. Any other instruction makes the function unclassified. The
emitted C is a candidate like every other shape; the oracle decides whether its
compiled bytes equal the original.
"""

import re

from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_OP_REG, ARM_SFT_LSL

LOAD_WIDTH = {'ldr': 4, 'ldrh': 2, 'ldrsb': 1, 'ldrsh': 2, 'ldrb': 1}
LOAD_SIGNED = {'ldrsb', 'ldrsh'}
STORE_WIDTH = {'str': 4, 'strh': 2, 'strb': 1}
C_TYPE = {1: 'u8', 2: 'u16', 4: 'u32'}
SIGNED_C_TYPE = {1: 's8', 2: 's16', 4: 's32'}


class Unsupported(ValueError):
    """The body uses an instruction the arithmetic model does not prove."""


class Registers:
    """The value each register holds, as the body's instructions execute.

    A linear form is ``('lin', base, index coefficient, constant)`` where base is
    ``None``, ``'record'`` or the C expression of an earlier load. A loaded value
    is ``('mem', width, signed, address)`` or ``('memv', loaded, added constant)``.
    """

    def __init__(self):
        self.values = {'r0': ('lin', 'record', 0, 0), 'r1': ('lin', None, 1, 0),
                       'r2': ('unknown',), 'r3': ('unknown',)}

    def get(self, name):
        value = self.values.get(name)
        if value is None or value[0] == 'unknown':
            raise Unsupported('register %s is not a proven value' % name)
        return value

    def set(self, name, value):
        if name in ('pc', 'sp', 'lr'):
            raise Unsupported('writes a control register')
        self.values[name] = value


def _reg(insn, index):
    if index >= len(insn.operands):
        raise Unsupported('%s has no operand %d' % (insn.mnemonic, index))
    operand = insn.operands[index]
    if operand.type != ARM_OP_REG:
        raise Unsupported('%s operand %d is not a register' % (insn.mnemonic, index))
    return insn.reg_name(operand.reg)


def _imm(insn, index):
    if index >= len(insn.operands):
        raise Unsupported('%s has no operand %d' % (insn.mnemonic, index))
    operand = insn.operands[index]
    if operand.type != ARM_OP_IMM:
        raise Unsupported('%s operand %d is not an immediate' % (insn.mnemonic, index))
    return operand.imm if not operand.subtracted else -operand.imm


def _mem(insn, index):
    if index >= len(insn.operands):
        raise Unsupported('%s has no operand %d' % (insn.mnemonic, index))
    operand = insn.operands[index]
    if operand.type != ARM_OP_MEM:
        raise Unsupported('%s operand %d is not memory' % (insn.mnemonic, index))
    base = insn.reg_name(operand.mem.base) if operand.mem.base else None
    index_register = insn.reg_name(operand.mem.index) if operand.mem.index else None
    return base, operand.mem.disp, index_register, operand.mem.lshift


def _add(left, right):
    if left[0] != 'lin' or right[0] != 'lin':
        raise Unsupported('arithmetic on a loaded value')
    if left[1] is not None and right[1] is not None:
        raise Unsupported('two bases in one address')
    return ('lin', left[1] or right[1], left[2] + right[2], left[3] + right[3])


def _add_constant(value, amount):
    if value[0] == 'lin':
        return ('lin', value[1], value[2], value[3] + amount)
    if value[0] == 'mem':
        return ('memv', value, amount)
    if value[0] == 'memv':
        return ('memv', value[1], value[2] + amount)
    raise Unsupported('constant added to an unproven value')


def _inverse(value):
    if value[0] != 'lin':
        raise Unsupported('negated loaded value')
    return ('lin', value[1], -value[2], -value[3])


def _scale(value, factor):
    if value[0] != 'lin':
        if factor == 1:
            return value
        raise Unsupported('scaled loaded value')
    if value[1] is not None and factor != 1:
        raise Unsupported('scaled base register')
    return ('lin', value[1], value[2] * factor, value[3] * factor)


def _constant(value):
    if value[0] == 'lin' and value[1] is None and value[2] == 0:
        return value[3]
    raise Unsupported('expected a constant register')


def render_address(form, index_name, writable=False):
    """The C expression of a linear address: base + index * scale + constant."""
    base, coefficient, constant = form[1], form[2], form[3]
    if base is None:
        raise Unsupported('address without a base register')
    if base == 'record' and not coefficient and not constant:
        return 'record'
    cast = '(u8 *)' if writable else '(const u8 *)'
    head = 'record' if base == 'record' else '%s(uptr)(%s)' % (cast, base)
    tail = ''
    if coefficient:
        tail += ' + %s' % (index_name if coefficient == 1 else '%s * %d' % (index_name, coefficient))
    if constant:
        tail += ' + 0x%x' % constant if constant > 0 else ' - 0x%x' % -constant
    return head + tail


def render_value(value, index_name):
    """The C expression of a stored or returned value."""
    if value[0] == 'lin':
        if value[1] is not None:
            raise Unsupported('a base register as a value')
        coefficient, constant = value[2], value[3]
        parts = []
        if coefficient:
            parts.append(index_name if coefficient == 1 else '%s * %d' % (index_name, coefficient))
        if constant or not parts:
            parts.append('0x%xu' % (constant & 0xffffffff) if not coefficient
                         else '0x%x' % constant)
        return ' + '.join(parts)
    if value[0] == 'mem':
        return '*(const %s *)(%s)' % (type_of(value[1], value[2]), render_address(value[3], index_name))
    if value[0] == 'memv':
        text = '*(const %s *)(%s)' % (type_of(value[1][1], value[1][2]),
                                      render_address(value[1][3], index_name))
        return text + (' + 0x%x' % value[2] if value[2] >= 0 else ' - 0x%x' % -value[2])
    raise Unsupported('unrenderable value')


def type_of(width, signed):
    return (SIGNED_C_TYPE if signed else C_TYPE)[width]


def _shift(insn):
    """The left shift a register operand applies, as a power of two.

    ARM encodes a shifted register operand inside operand 2, so ``add r0, r0,
    r1, lsl #2`` carries the shift there rather than in a fourth operand.
    """
    if len(insn.operands) > 2 and insn.operands[2].type == ARM_OP_REG:
        shift = insn.operands[2].shift
        if shift.type:
            if shift.type != ARM_SFT_LSL:
                raise Unsupported('non-left shift in an address')
            return 1 << shift.value
    return 1

def _mem_shift(insn):
    """The shift of a register-indexed memory operand, as a power of two.

    Capstone 5 reports the indexed shift of an ARM memory operand in the
    operand text rather than in a stable detail field, so the shift is read from
    the text the disassembler printed.
    """
    match = re.search(r'\[[^\]]*,\s*\w+,\s*(lsl|lsr|asr|ror)\s*#(\d+)\]', insn.op_str)
    if match is None:
        return 1
    if match.group(1) != 'lsl':
        raise Unsupported('non-left shift in a memory operand')
    return 1 << int(match.group(2))


def address_of(registers, insn):
    """The linear address of a load or store instruction.

    The base register may hold the record pointer or a pointer the body already
    loaded from it; in the second case the loaded expression becomes the base of
    the address, so a chain of loads stays one C expression.
    """
    base, displacement, index_register, _ = _mem(insn, 1)
    if base is None:
        raise Unsupported('memory operand without a base register')
    value = registers.get(base)
    if value[0] == 'mem':
        address = ('lin', render_value(value, 'index'), 0, 0)
    elif value[0] == 'lin':
        address = value
    else:
        raise Unsupported('memory operand on a value the model cannot address')
    if displacement:
        address = _add_constant(address, displacement)
    if index_register is not None:
        address = _add(address, _scale(registers.get(index_register), _mem_shift(insn)))
    if address[0] != 'lin':
        raise Unsupported('memory operand on a loaded value')
    return address


def apply(registers, insn):
    """Execute one non-terminal instruction on the register model."""
    name = insn.mnemonic
    needed = {'mov': 2, 'mvn': 2, 'add': 3, 'sub': 3, 'rsb': 3, 'mul': 3, 'lsl': 3}.get(name)
    if needed is not None and len(insn.operands) < needed:
        raise Unsupported('%s has an unsupported operand form' % name)
    if '!' in insn.op_str:
        raise Unsupported('base-register writeback')
    if name == 'mov':
        if insn.operands[1].type == ARM_OP_IMM:
            registers.set(_reg(insn, 0), ('lin', None, 0, _imm(insn, 1)))
        else:
            registers.set(_reg(insn, 0), registers.get(_reg(insn, 1)))
        return
    if name == 'mvn':
        registers.set(_reg(insn, 0), ('lin', None, 0, ~_imm(insn, 1) & 0xffffffff))
        return
    if name in ('add', 'sub', 'rsb'):
        destination, left = _reg(insn, 0), registers.get(_reg(insn, 1))
        if insn.operands[2].type == ARM_OP_IMM:
            magnitude = _imm(insn, 2)
            registers.set(destination, _add_constant(left, magnitude if name != 'sub' else -magnitude))
            return
        right = _scale(registers.get(_reg(insn, 2)), _shift(insn))
        if name == 'add':
            registers.set(destination, _add(left, right))
        elif name == 'sub':
            registers.set(destination, _add(left, _inverse(right)))
        else:
            registers.set(destination, _add(right, _inverse(left)))
        return
    if name == 'mul':
        destination = _reg(insn, 0)
        left, right = registers.get(_reg(insn, 1)), registers.get(_reg(insn, 2))
        try:
            registers.set(destination, _scale(right, _constant(left)))
        except Unsupported:
            registers.set(destination, _scale(left, _constant(right)))
        return
    if name == 'lsl':
        if insn.operands[2].type != ARM_OP_IMM:
            raise Unsupported('variable shift')
        registers.set(_reg(insn, 0), _scale(registers.get(_reg(insn, 1)), 1 << _imm(insn, 2)))
        return
    if name in LOAD_WIDTH:
        registers.set(_reg(insn, 0), ('mem', LOAD_WIDTH[name], name in LOAD_SIGNED,
                                      address_of(registers, insn)))
        return
    raise Unsupported('instruction %s is outside the arithmetic model' % name)


def _uses_index(forms):
    return any(form[2] for form in forms if form and form[0] == 'lin')


def _writes_record(form):
    return form[0] == 'lin' and form[1] == 'record'


def _parameters(statement, writable):
    """The signature the rendered statement needs.

    The two argument names below are the only identifiers the renderer emits, so
    a rendered expression tells the signature which arguments the function reads
    -- including an index that only appears inside a pointer expression.
    """
    index_used = re.search(r'\bindex\b', statement) is not None
    value_used = re.search(r'\bvalue\b', statement) is not None
    if index_used and value_used:
        raise Unsupported('both argument roles in one function')
    parameters = [(0, 'u8 *' if writable else 'const u8 *', 'record')]
    if index_used:
        parameters.append((1, 'u32', 'index'))
    if value_used:
        parameters.append((1, 'u32', 'value'))
    return parameters


def classify(symbol, body):
    """One linear expression with one load, one store or a returned address."""
    if not body:
        return None
    registers, last = Registers(), body[-1]
    try:
        if last.mnemonic in STORE_WIDTH:
            for insn in body[:-1]:
                apply(registers, insn)
            address = address_of(registers, last)
            value = registers.get(_reg(last, 0))
            width = STORE_WIDTH[last.mnemonic]
            statement = '*(%s *)(%s) = %s;' % (
                C_TYPE[width], render_address(address, 'index', True),
                render_value(value, 'value'))
            return (_store_family(address, value), _parameters(statement, True), 'void',
                    [statement],
                    {'offset': address[3] if _writes_record(address) and not address[2] else None,
                     'index_scale': address[2] or None, 'width': width,
                     'document': 'Stores one expression into the record or its pointee.'})
        for insn in body:
            apply(registers, insn)
        result = registers.get('r0')
        if result[0] == 'mem':
            address = result[3]
            statement = 'return *(const %s *)(%s);' % (
                type_of(result[1], result[2]), render_address(address, 'index'))
            return (_load_family(address), _parameters(statement, False), 'u32', [statement],
                    {'offset': address[3] if _writes_record(address) and not address[2] else None,
                     'index_scale': address[2] or None, 'width': result[1],
                     'signed': result[2],
                     'document': 'Reads a field of the record or of its pointee.'})
        if result[0] == 'lin' and result[1] is not None:
            statement = 'return %s;' % render_address(result, 'index', True)
            return (_address_family(result), _parameters(statement, True), 'u8 *', [statement],
                    {'offset': result[3], 'index_scale': result[2] or None,
                     'document': 'Returns an address derived from the record.'})
    except Unsupported:
        return None
    return None


def _load_family(address):
    if address[2]:
        return 'indexed_getter'
    if address[1] != 'record':
        return 'pointer_getter'
    return 'field_getter'


def _store_family(address, value):
    if value[0] == 'memv' and value[1][3] == address and not address[2]:
        return 'field_increment'
    if address[2]:
        return 'indexed_store'
    if address[1] != 'record':
        return 'pointer_store'
    return 'field_setter'


def _address_family(address):
    if address[2]:
        return 'indexed_address'
    if address[1] != 'record':
        return 'pointer_address'
    return 'record_address'
