"""Prove a small function's literal-pool shape from its instructions.

A pool-loading function is one whose first instruction loads a word through
``pc``. The word is read from the original image at the address the instruction
encodes, so the emitted C can spell the loaded constant. Four forms are proved:

* return the word as a constant;
* read one field at the word's address;
* write the argument to one field at the word's address;
* zero one field at the word's address.

Only a zero displacement is reproduced. A larger access makes armcc fold the
constant base into the pool word, which changes both the instruction and the
pool; those functions stay unclassified instead of being emitted as bytes that
cannot equal the original.

This module returns plain shape data. ``native_synth_shapes`` owns the Shape
type and turns the tuple into one.
"""

from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_OP_REG

LOAD_WIDTH = {'ldr': 4, 'ldrh': 2, 'ldrsb': 1, 'ldrsh': 2, 'ldrb': 1}
LOAD_SIGNED = {'ldrsb', 'ldrsh'}
STORE_WIDTH = {'str': 4, 'strh': 2, 'strb': 1}
C_TYPE = {1: 'u8', 2: 'u16', 4: 'u32'}
SIGNED_C_TYPE = {1: 's8', 2: 's16', 4: 's32'}


def _reg(insn, index):
    operand = insn.operands[index]
    if operand.type != ARM_OP_REG:
        raise ValueError('%s operand %d is not a register' % (insn.mnemonic, index))
    return insn.reg_name(operand.reg)


def _imm(insn, index):
    operand = insn.operands[index]
    if operand.type != ARM_OP_IMM:
        raise ValueError('%s operand %d is not an immediate' % (insn.mnemonic, index))
    return operand.imm, bool(operand.subtracted)


def _mem(insn, index):
    operand = insn.operands[index]
    if operand.type != ARM_OP_MEM:
        raise ValueError('%s operand %d is not memory' % (insn.mnemonic, index))
    base = insn.reg_name(operand.mem.base) if operand.mem.base else None
    index_register = insn.reg_name(operand.mem.index) if operand.mem.index else None
    return base, operand.mem.disp, index_register


def _record_type(width, signed=False):
    if width == 4:
        return 'u32'
    return (SIGNED_C_TYPE if signed else C_TYPE)[width]


def _pool_address(insn, word):
    """The absolute address an ``ldr rX, [pc, #imm]`` reads from."""
    base, displacement, index = _mem(insn, 1)
    if base != 'pc' or index is not None:
        return None
    return word(insn.address + 8 + displacement)


def _fixed_access(insn, index, base):
    """Whether a memory operand is ``[base]`` exactly, with no index or offset."""
    found, displacement, index_register = _mem(insn, index)
    return found == base and index_register is None and displacement == 0


def classify(symbol, body, word):
    """Return ``(family, params, returns, statements, detail)`` or None."""
    if word is None or not body or '[pc' not in body[0].op_str:
        return None
    load = body[0]
    if load.mnemonic != 'ldr':
        return None
    base = _reg(load, 0)
    address = _pool_address(load, word)
    if address is None:
        return None
    if len(body) == 1 and base == 'r0':
        return ('pool_constant_return', [], 'u32', ['return 0x%xu;' % address],
                {'pool': address,
                 'document': 'Returns the constant held in its literal pool.'})
    if len(body) == 2 and body[1].mnemonic in LOAD_WIDTH:
        if _reg(body[1], 0) != 'r0' or not _fixed_access(body[1], 1, base):
            return None
        width = LOAD_WIDTH[body[1].mnemonic]
        signed = body[1].mnemonic in LOAD_SIGNED
        kind = _record_type(width, signed)
        # A local pointer keeps armcc from splitting the address into an
        # aligned base plus a displacement, which would change both the pool
        # word and the access instruction.
        statements = ['const volatile %s *p = (const volatile %s *)0x%xu;' % (kind, kind, address),
                      'return *p;']
        return ('pool_global_getter', [], 'u32', statements,
                {'pool': address, 'width': width, 'signed': signed,
                 'document': 'Reads one %d-byte global through its literal pool.' % width})
    if len(body) == 2 and body[1].mnemonic in STORE_WIDTH:
        if _reg(body[1], 0) != 'r0' or not _fixed_access(body[1], 1, base):
            return None
        width = STORE_WIDTH[body[1].mnemonic]
        kind = _record_type(width)
        statements = ['volatile %s *p = (volatile %s *)0x%xu;' % (kind, kind, address),
                      '*p = (%s)value;' % kind]
        return ('pool_global_setter', [(0, 'u32', 'value')], 'void', statements,
                {'pool': address, 'width': width,
                 'document': 'Writes the argument into one %d-byte global.' % width})
    if (len(body) == 3 and body[1].mnemonic == 'mov'
            and body[2].mnemonic in STORE_WIDTH):
        zero = _reg(body[1], 0)
        value, negated = _imm(body[1], 1)
        if negated or value != 0 or _reg(body[2], 0) != zero:
            return None
        if not _fixed_access(body[2], 1, base):
            return None
        width = STORE_WIDTH[body[2].mnemonic]
        kind = _record_type(width)
        if (base, zero) == ('r0', 'r1'):
            # A local pointer makes armcc keep the address in r0 and materialise
            # zero in r1, which is the register choice this original made.
            statements = ['volatile %s *p = (volatile %s *)0x%xu;' % (kind, kind, address),
                          '*p = 0;']
        elif (base, zero) == ('r1', 'r0'):
            statements = ['*(volatile %s *)0x%xu = 0;' % (kind, address)]
        else:
            return None
        return ('pool_zero_store', [], 'void', statements,
                {'pool': address, 'width': width,
                 'document': 'Sets one %d-byte global to zero through its literal pool.' % width})
    return None
