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
import native_synth_leaf as leaf
import native_synth_pools as pools

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
        proved = leaf.classify(symbol, body)
        if proved is not None:
            return Shape(proved.family, symbol.name, symbol.size, proved.params,
                         proved.returns, proved.body, proved.detail)
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


