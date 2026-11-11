"""Prove the two simplest call-bearing shapes a small function can have.

A function that calls another function is not a leaf, so the leaf classifiers
never see it. The narrow forms proved here keep the reconstruction honest:
every instruction of the original extent is one the pattern names, the callee
is a function the split places at an absolute address, and the emitted C is the
call the instructions perform. Two forms are modelled:

* ``call_store_constant`` -- push one callee-saved register, call a function
  with argument 0, store a literal-pool constant in the returned pointer and
  return that pointer;
* ``call_chain`` -- call one function, then tail-call a second.

Anything else (a second call, a conditional branch, a stack slot, a callee
that is not a split function) leaves the function unclassified. The pattern
also fixes the frame the compiler must emit, so a shape is not a guess about
the callee's meaning: it is the instruction sequence the original has.
"""

from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_OP_REG

CALL = ('bl', 'blx')
CALLEE_SAVED = {'r4', 'r5', 'r6', 'r7', 'r8', 'r9', 'r10', 'r11'}


class Unsupported(ValueError):
    """The body is not one of the proved call shapes."""


class CallShape:
    """One proved call shape and the C it stands for."""

    __slots__ = ('family', 'params', 'returns', 'statements', 'detail', 'callees')

    def __init__(self, family, params, returns, statements, detail, callees):
        self.family = family
        self.params = params
        self.returns = returns
        self.statements = statements
        self.detail = detail
        self.callees = callees


def _reg(insn, index):
    operand = insn.operands[index]
    if operand.type != ARM_OP_REG:
        raise Unsupported('%s operand %d is not a register' % (insn.mnemonic, index))
    return insn.reg_name(operand.reg)


def _mem(insn, index):
    operand = insn.operands[index]
    if operand.type != ARM_OP_MEM:
        raise Unsupported('%s operand %d is not memory' % (insn.mnemonic, index))
    base = insn.reg_name(operand.mem.base) if operand.mem.base else None
    return base, operand.mem.disp


def _push_set(insn):
    if insn.mnemonic != 'push':
        raise Unsupported('expected a push')
    return {item.strip() for item in insn.op_str.strip('{}').split(',')}


def _pop_set(insn):
    if insn.mnemonic != 'pop':
        raise Unsupported('expected a pop')
    return {item.strip() for item in insn.op_str.strip('{}').split(',')}


def _callee(insn, by_address):
    """The split function a direct ``bl`` targets, or Unsupported."""
    if insn.mnemonic != 'bl':
        raise Unsupported('expected a direct call')
    target = insn.operands[0]
    if target.type != ARM_OP_IMM:
        raise Unsupported('call without an absolute target')
    address = target.imm & ~1
    symbol = by_address.get(address)
    if symbol is None or symbol.mode != 'arm':
        raise Unsupported('calls a function the split does not place: 0x%08x' % address)
    return symbol


def classify(symbol, instructions, word, by_address):
    """Return a CallShape or None for one complete instruction extent."""
    try:
        return _classify(symbol, instructions, word, by_address)
    except (Unsupported, ValueError, IndexError):
        return None


def _classify(symbol, instructions, word, by_address):
    if len(instructions) == 4:
        return _chain(symbol, instructions, by_address)
    if len(instructions) == 5:
        if instructions[1].mnemonic == 'mov':
            return _return_argument(symbol, instructions, by_address)
        return _store_constant(symbol, instructions, word, by_address)
    if len(instructions) == 6 and instructions[0].mnemonic == 'mov':
        return _store_constant_with_argument(symbol, instructions, word, by_address)
    return None


def _chain(symbol, instructions, by_address):
    push, call, pop, branch = instructions
    if _push_set(push) != {'r4', 'lr'} or _pop_set(pop) != {'r4', 'lr'}:
        return None
    if branch.mnemonic != 'b' or branch.operands[0].type != ARM_OP_IMM:
        return None
    first = _callee(call, by_address)
    second = by_address.get(branch.operands[0].imm & ~1)
    if second is None or second.mode != 'arm':
        return None
    statements = ['%s();' % first.name, '%s();' % second.name]
    return CallShape('call_chain', [], 'void', statements,
                     {'callees': [first.name, second.name],
                      'document': 'Calls one split function, then tail-calls a second.'},
                     [first.name, second.name])


def _store_constant_with_argument(symbol, instructions, word, by_address):
    """Zero one argument register, then the store-constant shape."""
    zero, push, call, load, store, pop = instructions
    if zero.mnemonic != 'mov' or _reg(zero, 0) != 'r1':
        return None
    value, _ = _immediate(zero)
    if value != 0:
        return None
    shape = _store_constant(symbol, [push, call, load, store, pop], word, by_address)
    if shape is None:
        return None
    callee = shape.detail['callee']
    call_statement = shape.statements[0].replace('%s(a)' % callee, '%s(a, 0)' % callee)
    shape.statements[0] = call_statement
    shape.family = 'call_store_constant_zero'
    shape.detail['document'] = ('Calls a function with its first argument and a zero second '
                                'argument, then stores a constant in the returned pointer.')
    return shape


def _return_argument(symbol, instructions, by_address):
    """Call a function for its effect, then return the saved argument."""
    push, save, call, restore, pop = instructions
    if _push_set(push) != {'r4', 'lr'} or _pop_set(pop) != {'r4', 'pc'}:
        return None
    if save.mnemonic != 'mov' or _reg(save, 0) != 'r4' or _reg(save, 1) != 'r0':
        return None
    if restore.mnemonic != 'mov' or _reg(restore, 0) != 'r0' or _reg(restore, 1) != 'r4':
        return None
    callee = _callee(call, by_address)
    statements = ['%s(a);' % callee.name, 'return a;']
    return CallShape('call_return_argument', [(0, 'u32', 'a')], 'u32', statements,
                     {'callee': callee.name,
                      'document': 'Calls a split function for its effect and returns its argument.'},
                     [callee.name])


def _immediate(insn):
    operand = insn.operands[1]
    if operand.type != ARM_OP_IMM:
        raise Unsupported('move without an immediate')
    return operand.imm, bool(operand.subtracted)


def _store_constant(symbol, instructions, word, by_address):
    push, call, load, store, pop = instructions
    if _push_set(push) != {'r4', 'lr'} or _pop_set(pop) != {'r4', 'pc'}:
        return None
    callee = _callee(call, by_address)
    if load.mnemonic != 'ldr' or '[pc' not in load.op_str:
        return None
    if word is None:
        return None
    base, displacement = _mem(load, 1)
    if base != 'pc':
        return None
    site = load.address + 8 + displacement
    constant = word(site)
    if constant is None:
        return None
    if store.mnemonic != 'str' or _reg(store, 0) != _reg(load, 0):
        return None
    address, offset = _mem(store, 1)
    if address != 'r0':
        return None
    statements = ['u32 *p = (u32 *)(uptr)%s(a);' % callee.name,
                  'p[%d] = 0x%xu;' % (offset // 4 if offset else 0, constant),
                  'return p;']
    return CallShape('call_store_constant', [(0, 'u32', 'a')], 'u32 *', statements,
                     {'callee': callee.name, 'constant': constant,
                      'document': 'Calls a function, then stores a constant in the returned pointer.'},
                     [callee.name])
