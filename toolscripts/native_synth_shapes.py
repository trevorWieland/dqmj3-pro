"""Classify the instruction pattern of a small native function.

A shape is a claim about a function's complete instruction extent: every
instruction from its entry to its ``bx lr``, read with Capstone from the
original image, matches one pattern and only one. Anything else -- a call, a
conditional branch, a stack frame, an instruction the patterns do not model --
is unclassified, and a function is never emitted from a partial match.

A literal-pool load is allowed only when the shape knows how to reproduce the
pool word. The word is read from the original image at the address the ``ldr``
encodes, and the emitted C spells that word as the constant the instruction
loads. That covers functions that return a constant or touch one fixed global
address; it does not cover a call or a computed address.

The shapes are deliberately narrow. Each carries the record offsets and access
widths the instructions actually encode, so the emitter never guesses a layout.
The claim is about instruction pattern, not about meaning: ``field_getter`` says
"loads a 16-bit field at offset 0x44 from argument 0", not "returns the
monster's level".

Nothing here decides credit. A shape is a candidate; only equal compiled bytes
make it source.
"""

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_OP_REG

import native_synth_arithmetic as arithmetic
import native_synth_calls as calls
import native_synth_pool_access as pool_access
import native_synth_pools as pools

LOAD_WIDTH = {'ldr': 4, 'ldrh': 2, 'ldrsb': 1, 'ldrsh': 2, 'ldrb': 1}
LOAD_SIGNED = {'ldrsb', 'ldrsh'}
STORE_WIDTH = {'str': 4, 'strh': 2, 'strb': 1}
C_TYPE = {1: 'u8', 2: 'u16', 4: 'u32'}
SIGNED_C_TYPE = {1: 's8', 2: 's16', 4: 's32'}
RETURN = 'bx lr'

_DISASSEMBLER = Cs(CS_ARCH_ARM, CS_MODE_ARM)
_DISASSEMBLER.detail = True


class Shape:
    """One proven instruction pattern and the C it stands for."""

    __slots__ = ('family', 'name', 'size', 'params', 'returns', 'body', 'detail')

    def __init__(self, family, name, size, params, returns, body, detail):
        self.family = family
        self.name = name
        self.size = size
        self.params = params     # [(argument register number, C type, C name)]
        self.returns = returns   # C return type
        self.body = body         # C statements, in the order the instructions execute
        self.detail = detail     # the instruction-level facts the family used

    def as_dict(self):
        return {'name': self.name, 'family': self.family, 'size': self.size,
                'params': self.params, 'returns': self.returns,
                'body': self.body, 'detail': self.detail}

    def signature(self):
        return '%s %s(%s)' % (self.returns, self.name,
                              ', '.join('%s %s' % (kind, name) for _, kind, name in self.params)
                              or 'void')


class Rejected:
    """A function the classifier refused, with the reason the next pass needs."""

    __slots__ = ('name', 'reason', 'detail')

    def __init__(self, name, reason, detail=''):
        self.name = name
        self.reason = reason
        self.detail = detail

    def as_dict(self):
        return {'name': self.name, 'reason': self.reason, 'detail': self.detail}


def disassemble(code, address):
    """Every instruction of the extent, or None when Capstone cannot cover it."""
    instructions = list(_DISASSEMBLER.disasm(code, address))
    if not instructions or sum(item.size for item in instructions) != len(code):
        return None
    return instructions


def _reg(insn, index):
    operand = insn.operands[index]
    if operand.type != ARM_OP_REG:
        raise ValueError('%s operand %d is not a register' % (insn.mnemonic, index))
    return insn.reg_name(operand.reg)


def _imm(insn, index):
    """The immediate operand and whether the instruction negates it."""
    operand = insn.operands[index]
    if operand.type != ARM_OP_IMM:
        raise ValueError('%s operand %d is not an immediate' % (insn.mnemonic, index))
    return operand.imm, bool(operand.subtracted)


def _mem(insn, index):
    """(base register, displacement, index register, index shift) of memory."""
    operand = insn.operands[index]
    if operand.type != ARM_OP_MEM:
        raise ValueError('%s operand %d is not memory' % (insn.mnemonic, index))
    base = insn.reg_name(operand.mem.base) if operand.mem.base else None
    index = insn.reg_name(operand.mem.index) if operand.mem.index else None
    return base, operand.mem.disp, index, operand.mem.scale


def _record_offset(insn, index):
    """The fixed record offset of a memory operand based on argument 0."""
    base, displacement, index_register, _ = _mem(insn, index)
    if index_register is not None:
        raise ValueError('register-indexed access instead of a fixed record offset')
    if base != 'r0':
        raise ValueError('record access is not based on argument 0')
    if displacement < 0:
        raise ValueError('negative record offset')
    return displacement


def _record(offset):
    return 'record' if offset == 0 else 'record + 0x%x' % offset


def _record_type(width, signed=False):
    if width == 4:
        return 'u32'
    return (SIGNED_C_TYPE if signed else C_TYPE)[width]


def _field_cast(offset, width, signed=False, const=True):
    """The C lvalue for one record field."""
    qualifier = 'const ' if const else ''
    return '*(%s%s *)(%s)' % (qualifier, _record_type(width, signed), _record(offset))


def _reject_unless_leaf(instructions):
    """Why this function cannot be one of the plain leaf shapes, if it cannot."""
    if instructions[-1].mnemonic != 'bx' or instructions[-1].op_str != 'lr':
        return 'does not end in bx lr'
    for insn in instructions[:-1]:
        if insn.mnemonic in ('bl', 'blx', 'b', 'bx'):
            return 'contains a call or branch'
        if insn.mnemonic in ('push', 'pop'):
            return 'uses a stack frame'
        if insn.mnemonic.startswith('v') or insn.mnemonic in ('svc', 'mrc', 'mcr'):
            return 'uses a system or floating-point instruction'
    return None


def classify(symbol, code, word=None, by_address=None):
    """Classify one function's complete extent into a Shape or give a reason.

    ``word`` reads a 32-bit word from the original image; it is required for a
    function that loads a literal pool, because the shape's emitted C has to
    spell the loaded constant. ``by_address`` maps split addresses to symbols so
    a call can be named; without it no call shape is attempted.
    """
    instructions = disassemble(code, symbol.address)
    if instructions is None:
        return Rejected(symbol.name, 'extent does not disassemble as ARM')
    if by_address is not None and any(item.mnemonic in ('bl', 'blx')
                                      for item in instructions):
        proved = calls.classify(symbol, instructions, word, by_address)
        if proved is not None:
            detail = dict(proved.detail)
            detail['callees'] = proved.callees
            return Shape(proved.family, symbol.name, symbol.size, proved.params,
                         proved.returns, proved.statements, detail)
    reason = _reject_unless_leaf(instructions)
    if reason:
        return Rejected(symbol.name, reason, ' '.join(item.mnemonic for item in instructions))
    body = instructions[:-1]
    if not body:
        return Shape('empty_function', symbol.name, symbol.size, [], 'void', [],
                     {'document': 'Does nothing: the original body is a bare return.'})
    if any('[pc' in item.op_str for item in body) and word is None:
        return Rejected(symbol.name, 'loads a literal pool without a readable original word',
                        ' '.join(item.mnemonic for item in instructions))
    try:
        shape = _pool_shape(symbol, body, word)
        if shape is not None:
            return shape
        shape = _pool_access_shape(symbol, body, word)
        if shape is not None:
            return shape
        # The store-run family has no fixed instruction count, so it is tried
        # first; the rest are keyed by the number of instructions before bx lr.
        shape = _store_run(symbol, body)
        if shape is not None:
            return shape
        matcher = _MATCHERS.get(len(body))
        if matcher is not None:
            shape = matcher(symbol, body)
            if shape is not None:
                return shape
        shape = _conditional(symbol, body)
        if shape is not None:
            return shape
        shape = arithmetic.classify(symbol, body)
        if shape is not None:
            family, params, returns, statements, detail = shape
            return Shape(family, symbol.name, symbol.size, params, returns, statements, detail)
    except ValueError as error:
        return Rejected(symbol.name, str(error),
                        ' '.join(item.mnemonic for item in instructions))
    return Rejected(symbol.name, 'no pattern for this instruction sequence',
                    '; '.join('%s %s' % (item.mnemonic, item.op_str) for item in instructions))


def _pool_shape(symbol, body, word):
    """Turn the proved pool data into a Shape, or leave the function unclassified."""
    proved = pools.classify(symbol, body, word)
    if proved is None:
        return None
    family, params, returns, statements, detail = proved
    return Shape(family, symbol.name, symbol.size, params, returns, statements, detail)


def _pool_access_shape(symbol, body, word):
    """A pool word as a data base, rendered by the pool-access model."""
    proved = pool_access.classify(symbol, body, word)
    if proved is None:
        return None
    detail = dict(proved.detail)
    if proved.externs:
        detail['externs'] = [{'name': name, 'address': address, 'site': site}
                             for name, address, site in proved.externs]
    return Shape(proved.family, symbol.name, symbol.size, proved.params, proved.returns,
                 proved.statements, detail)


def _store_run(symbol, body):
    """A run of constant stores into the record, in instruction order.

    The constant is materialised by one ``mov`` and every following store writes
    that register. Mixed widths are allowed because the original mixes them:
    zeroing a record frequently ends with a byte-wide field.
    """
    if not body:
        return None
    register, constant = None, 0
    statements, fields = [], []
    for insn in body:
        if insn.mnemonic == 'mov':
            if register is not None:
                return None
            register = _reg(insn, 0)
            constant, negated = _imm(insn, 1)
            if negated:
                return None
            continue
        if insn.mnemonic not in STORE_WIDTH:
            return None
        if _reg(insn, 0) != register:
            return None
        width = STORE_WIDTH[insn.mnemonic]
        offset = _record_offset(insn, 1)
        statements.append('%s = 0x%xu;' % (_field_cast(offset, width, const=False), constant))
        fields.append({'offset': offset, 'width': width, 'value': constant})
    if not statements:
        return None
    family = 'zero_store_run' if constant == 0 else 'constant_store_run'
    document = ('Sets a run of record fields to zero.' if constant == 0
                else 'Writes one constant into a run of record fields.')
    return Shape(family, symbol.name, symbol.size,
                 [(0, 'u8 *', 'record')], 'void', statements,
                 {'fields': fields, 'document': document})


def _constant_return(symbol, body):
    if len(body) != 1 or body[0].mnemonic not in ('mov', 'mvn'):
        return None
    if _reg(body[0], 0) != 'r0':
        return None
    value, negated = _imm(body[0], 1)
    if body[0].mnemonic == 'mvn':
        value, negated = ~value & 0xffffffff, not negated
    if negated:
        return None
    return Shape('constant_return', symbol.name, symbol.size, [], 'u32',
                 ['return 0x%xu;' % value], {'value': value,
                                             'document': 'Returns a constant.'})


def _field_getter(symbol, body):
    if len(body) != 1 or body[0].mnemonic not in LOAD_WIDTH:
        return None
    if _reg(body[0], 0) != 'r0':
        return None
    width = LOAD_WIDTH[body[0].mnemonic]
    offset = _record_offset(body[0], 1)
    signed = body[0].mnemonic in LOAD_SIGNED
    return Shape('field_getter', symbol.name, symbol.size, [(0, 'const u8 *', 'record')], 'u32',
                 ['return %s;' % _field_cast(offset, width, signed)], 
                 {'offset': offset, 'width': width, 'signed': signed,
                  'document': 'Reads a %d-byte record field.' % width})


def _field_setter(symbol, body):
    if len(body) != 1 or body[0].mnemonic not in STORE_WIDTH:
        return None
    if _reg(body[0], 0) != 'r1':
        return None
    width = STORE_WIDTH[body[0].mnemonic]
    offset = _record_offset(body[0], 1)
    return Shape('field_setter', symbol.name, symbol.size,
                 [(0, 'u8 *', 'record'), (1, 'u32', 'value')], 'void',
                 ['%s = value;' % _field_cast(offset, width, const=False)],
                 {'offset': offset, 'width': width,
                  'document': 'Writes the argument value into a %d-byte record field.' % width})


def _field_copy(symbol, body):
    if len(body) != 2 or body[0].mnemonic != 'ldr' or body[1].mnemonic != 'str':
        return None
    if _reg(body[1], 0) != _reg(body[0], 0):
        return None
    read = _record_offset(body[0], 1)
    write = _record_offset(body[1], 1)
    return Shape('field_copy', symbol.name, symbol.size, [(0, 'u8 *', 'record')], 'void',
                 ['%s = %s;' % (_field_cast(write, 4, const=False), _field_cast(read, 4))],
                 {'read': read, 'write': write,
                  'document': 'Copies one 32-bit record field onto another.'})


def _pointer_getter(symbol, body):
    if len(body) != 2 or body[0].mnemonic != 'ldr' or body[1].mnemonic not in LOAD_WIDTH:
        return None
    if _reg(body[1], 0) != 'r0' or _reg(body[0], 0) != 'r1':
        return None
    first = _record_offset(body[0], 1)
    base, second, index, _ = _mem(body[1], 1)
    if base != 'r1' or index is not None or second < 0:
        return None
    width = LOAD_WIDTH[body[1].mnemonic]
    signed = body[1].mnemonic in LOAD_SIGNED
    statement = 'return *(const %s *)((const u8 *)(uptr)(*(const u32 *)(%s)) + 0x%x);' % (
        _record_type(width, signed), _record(first), second)
    return Shape('pointer_getter', symbol.name, symbol.size, [(0, 'const u8 *', 'record')], 'u32',
                 [statement], {'offset': first, 'field': second, 'width': width,
                               'document': 'Follows the pointer in a record field, then reads a field.'})


def _pointer_offset(symbol, body):
    """A pointer field with a constant added: the address of a subobject."""
    if len(body) != 2 or body[0].mnemonic != 'ldr' or body[1].mnemonic != 'add':
        return None
    if _reg(body[1], 0) != 'r0' or _reg(body[1], 1) != 'r0':
        return None
    if _reg(body[0], 0) != _reg(body[1], 2):
        return None
    offset = _record_offset(body[0], 1)
    value, negated = _imm(body[1], 2)
    if negated:
        return None
    return Shape('pointer_offset', symbol.name, symbol.size,
                 [(0, 'const u8 *', 'record')], 'u8 *',
                 ['return (u8 *)(uptr)(*(const u32 *)(%s)) + 0x%x;' % (_record(offset), value)],
                 {'offset': offset, 'subobject': value,
                  'document': 'Returns the address of a subobject of a pointed-to record.'})


def _base_plus_field(symbol, body):
    """The record pointer advanced by a 32-bit field."""
    if len(body) != 2 or body[0].mnemonic != 'ldr' or body[1].mnemonic != 'add':
        return None
    if _reg(body[1], 0) != 'r0' or _reg(body[1], 1) != 'r0':
        return None
    if _reg(body[0], 0) != _reg(body[1], 2):
        return None
    offset = _record_offset(body[0], 1)
    statement = 'return (u8 *)record + *(const u32 *)(%s);' % _record(offset)
    return Shape('base_plus_field', symbol.name, symbol.size,
                 [(0, 'const u8 *', 'record')], 'const u8 *',
                 [statement], {'offset': offset,
                               'document': 'Returns the record address advanced by a 32-bit field.'})


def _pair_setter(symbol, body):
    """Two argument words stored together through a base advanced by a constant."""
    if len(body) != 2 or body[0].mnemonic != 'add' or body[1].mnemonic != 'stm':
        return None
    if _reg(body[0], 0) != 'r0' or _reg(body[0], 1) != 'r0':
        return None
    value, negated = _imm(body[0], 2)
    if negated or _reg(body[1], 0) != 'r0':
        return None
    if body[1].op_str.split('{')[-1].rstrip('}') != 'r1, r2':
        return None
    statements = ['%s = value;' % _field_cast(value, 4, const=False),
                  '%s = second;' % _field_cast(value + 4, 4, const=False)]
    return Shape('pair_setter', symbol.name, symbol.size,
                 [(0, 'u8 *', 'record'), (1, 'u32', 'value'), (2, 'u32', 'second')], 'void',
                 statements, {'offset': value,
                              'document': 'Writes two argument words into adjacent record fields.'})


def _pair_copy(symbol, body):
    """Argument 1 copied into argument 0 with a load/store-multiple pair."""
    if len(body) != 2 or body[0].mnemonic != 'ldm' or body[1].mnemonic != 'stm':
        return None
    if _reg(body[0], 0) != 'r1' or _reg(body[1], 0) != 'r0':
        return None
    if body[0].op_str.split('{')[-1] != body[1].op_str.split('{')[-1]:
        return None
    registers = [item.strip() for item in body[0].op_str.split('{')[-1].rstrip('}').split(',')]
    if len(registers) < 2:
        return None
    statements = ['%s = *(const u32 *)((const u8 *)source + 0x%x);'
                  % (_field_cast(index * 4, 4, const=False), index * 4)
                  for index in range(len(registers))]
    return Shape('pair_copy', symbol.name, symbol.size,
                 [(0, 'u8 *', 'record'), (1, 'const u8 *', 'source')], 'void', statements,
                 {'words': len(registers),
                  'document': 'Copies %d words from the source argument into the record.'
                              % len(registers)})


def _store_through_pointer(symbol, body):
    """A constant stored through a pointer held in a record field."""
    if len(body) != 3 or body[0].mnemonic != 'ldr' or body[1].mnemonic != 'mov':
        return None
    if body[2].mnemonic not in STORE_WIDTH:
        return None
    if _reg(body[1], 0) != _reg(body[2], 0):
        return None
    constant, negated = _imm(body[1], 1)
    if negated:
        return None
    offset = _record_offset(body[0], 1)
    base, target, index, _ = _mem(body[2], 1)
    if base != _reg(body[0], 0) or index is not None or target < 0:
        return None
    width = STORE_WIDTH[body[2].mnemonic]
    statement = '%s = 0x%xu;' % (
        '*(%s *)((u8 *)(uptr)(*(const u32 *)(%s)) + 0x%x)' % (
            _record_type(width), _record(offset), target), constant)
    return Shape('store_through_pointer', symbol.name, symbol.size,
                 [(0, 'u8 *', 'record')], 'void', [statement],
                 {'offset': offset, 'target': target, 'width': width, 'constant': constant,
                  'document': 'Stores a constant through a pointer held in the record.'})


def _conditional_mnemonic(insn):
    """The unconditional mnemonic and condition suffix of a conditional insn."""
    for suffix in ('eq', 'ne'):
        if insn.mnemonic.endswith(suffix) and insn.mnemonic[:-2] in (
                set(LOAD_WIDTH) | set(STORE_WIDTH) | {'mov', 'cmp'}):
            return insn.mnemonic[:-2], suffix
    return insn.mnemonic, ''


def _conditional(symbol, body):
    """Two shapes where a comparison guards or produces the result."""
    if len(body) == 3:
        load, compare, store = body
        store_mnemonic, condition = _conditional_mnemonic(store)
        if (load.mnemonic not in LOAD_WIDTH or compare.mnemonic != 'cmp'
                or store_mnemonic not in STORE_WIDTH or condition != 'eq'):
            return None
        loaded = _reg(load, 0)
        if _reg(compare, 0) != loaded:
            return None
        width = STORE_WIDTH[store_mnemonic]
        if LOAD_WIDTH[load.mnemonic] != width:
            return None
        literal, negated = _imm(compare, 1)
        if negated:
            return None
        stored = _reg(store, 0)
        if stored == loaded:
            value, parameters = 'flag', [(0, 'u8 *', 'record')]
        elif stored == 'r1':
            value, parameters = 'value', [(0, 'u8 *', 'record'), (1, 'u32', 'value')]
        else:
            return None
        read, write = _record_offset(load, 1), _record_offset(store, 1)
        kind = C_TYPE[width]
        statements = ['%s flag = *(const %s *)(%s);' % (kind, kind, _record(read)),
                      'if (flag == 0x%xu) *(%s *)(%s) = %s;' % (literal, kind, _record(write), value)]
        return Shape('conditional_field_store', symbol.name, symbol.size, parameters, 'void',
                     statements, {'offset': write, 'compare': read, 'width': width,
                                  'literal': literal, 'value': value,
                                  'document': 'Stores a field only when the read field equals a literal.'})
    if len(body) == 4:
        load, compare, when_equal, when_different = body
        if (load.mnemonic != 'ldr' or compare.mnemonic != 'cmp'
                or _conditional_mnemonic(when_equal) != ('mov', 'eq')
                or _conditional_mnemonic(when_different) != ('mov', 'ne')):
            return None
        if _reg(load, 0) != 'r0' or _reg(compare, 0) != 'r0' or _reg(compare, 1) != 'r1':
            return None
        if _reg(when_equal, 0) != 'r0' or _reg(when_different, 0) != 'r0':
            return None
        equal, _ = _imm(when_equal, 1)
        different, _ = _imm(when_different, 1)
        if (equal, different) not in ((1, 0), (0, 1)):
            return None
        operator = '==' if (equal, different) == (1, 0) else '!='
        offset = _record_offset(load, 1)
        statement = 'return *(const u32 *)(%s) %s value;' % (_record(offset), operator)
        return Shape('field_equality', symbol.name, symbol.size,
                     [(0, 'const u8 *', 'record'), (1, 'u32', 'value')], 'u32', [statement],
                     {'offset': offset, 'operator': operator,
                      'document': 'Compares one record field with the argument value.'})
    return None


_MATCHERS = {
    1: lambda s, b: _constant_return(s, b) or _field_getter(s, b) or _field_setter(s, b),
    2: lambda s, b: (_field_copy(s, b) or _pointer_getter(s, b) or _pointer_offset(s, b)
                     or _base_plus_field(s, b) or _pair_setter(s, b) or _pair_copy(s, b)),
    3: lambda s, b: _store_through_pointer(s, b),
}
