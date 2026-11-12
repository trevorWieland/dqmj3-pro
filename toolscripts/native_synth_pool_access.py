"""Prove a small function's literal-pool data accesses from its instructions.

`native_synth_pools` proves the four narrow forms a pool-loading function can
have when it touches its word at displacement zero: return it, read it, write
it, zero it.  A large remainder loads a pool word that is a *base address* and
then addresses a field of it: a fixed global's second word, an indexed table, a
record field written from a global, or a run of global words zeroed together.

This module evaluates such a body as a linear model over two kinds of base:
argument 0 as a caller-supplied record pointer, and a literal-pool word as a
fixed data address.  Every fact the model uses is encoded by an instruction --
a displacement, a width mnemonic, a shift -- and nothing is assumed about a
layout.  A call, a branch, a stack frame, a floating-point or system
instruction, or a register the body has not defined leaves the function
unclassified; a function is never emitted from a partial match.

The emitted C has two spellings, chosen by family rather than per function:

* one access to a fixed data address uses a local typed pointer initialised
  with the address.  armcc keeps that address in a register and folds the
  access displacement into the load or store, which is the instruction the
  original encodes;
* a run of accesses to one fixed address uses an ``extern`` byte array named
  for that address, so the address reaches the compiler as a symbol and the
  pool word stays a relocation.  ``config/data-symbols.json`` defines the name
  at its measured address.

This module returns plain shape data; the shape type and the decision to credit
belong to the caller.
"""

from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_OP_REG, ARM_SFT_LSL

import native_synth_pool_render as render

LOAD_WIDTH = {'ldr': 4, 'ldrh': 2, 'ldrsb': 1, 'ldrsh': 2, 'ldrb': 1}
LOAD_SIGNED = {'ldrsb', 'ldrsh'}
STORE_WIDTH = {'str': 4, 'strh': 2, 'strb': 1}
C_TYPE = {1: 'u8', 2: 'u16', 4: 'u32'}
SIGNED_C_TYPE = {1: 's8', 2: 's16', 4: 's32'}
ARGUMENTS = ('r0', 'r1', 'r2', 'r3')
# The measured image's address space: text begins at 0x00100000 and the
# initialized data ends below 0x00900000. A pool word in that range is a data
# address the linker can define; any other word is a plain constant and stays
# one in the emitted C.
IMAGE_LOW = 0x00100000
IMAGE_HIGH = 0x00900000


def _is_image_address(value):
    return IMAGE_LOW <= value < IMAGE_HIGH


class Unsupported(ValueError):
    """The body uses a form the pool-access model does not prove."""


class Address:
    """``base + index * scale + offset``, a record pointer or a data address."""

    __slots__ = ('base', 'offset', 'index', 'scale')

    def __init__(self, base, offset=0, index=None, scale=1):
        self.base = base          # 'record', ('data', address), ('value', Value)
        self.offset = offset
        self.index = index        # None, ('arg', register)
        self.scale = scale

    def add_offset(self, amount):
        return Address(self.base, self.offset + amount, self.index, self.scale)

    def add_index(self, value):
        if value[0] == 'const':
            return Address(self.base, self.offset + value[1] * self.scale,
                           self.index, self.scale)
        if value[0] != 'lin':
            raise Unsupported('address index is not one argument register plus a constant')
        if self.index is not None:
            raise Unsupported('two index registers in one address')
        return Address(self.base, self.offset + value[3] * self.scale,
                       ('arg', value[1]), value[2] * self.scale)


def _reg(insn, index):
    if index >= len(insn.operands) or insn.operands[index].type != ARM_OP_REG:
        raise Unsupported('%s has no register operand %d' % (insn.mnemonic, index))
    return insn.reg_name(insn.operands[index].reg)


def _imm(insn, index):
    if index >= len(insn.operands) or insn.operands[index].type != ARM_OP_IMM:
        raise Unsupported('%s has no immediate operand %d' % (insn.mnemonic, index))
    operand = insn.operands[index]
    return operand.imm if not operand.subtracted else -operand.imm


def _mem(insn, index):
    if index >= len(insn.operands) or insn.operands[index].type != ARM_OP_MEM:
        raise Unsupported('%s has no memory operand %d' % (insn.mnemonic, index))
    operand = insn.operands[index]
    base = insn.reg_name(operand.mem.base) if operand.mem.base else None
    index_register = insn.reg_name(operand.mem.index) if operand.mem.index else None
    # Capstone 5 leaves mem.lshift zero and reports an indexed operand's shift
    # in operand.shift instead, so the shift is read from there.
    shift = 0
    if index_register is not None and operand.shift.type:
        if operand.shift.type != ARM_SFT_LSL:
            raise Unsupported('non-left shift in a memory operand')
        shift = operand.shift.value
    return base, operand.mem.disp, index_register, shift


def _shift_of(insn):
    """The left shift of operand 2 as a power of two, or 1."""
    if len(insn.operands) > 2 and insn.operands[2].type == ARM_OP_REG:
        shift = insn.operands[2].shift
        if shift.type:
            if shift.type != ARM_SFT_LSL:
                raise Unsupported('non-left shift in an address')
            return 1 << shift.value
    return 1


def _scale(value, factor):
    if value[0] == 'lin':
        return ('lin', value[1], value[2] * factor, value[3] * factor)
    if value[0] == 'const':
        return ('const', value[1] * factor)
    raise Unsupported('scaled non-linear value')


def _add(left, right):
    if left[0] == 'lin' and right[0] == 'lin':
        if left[1] != right[1]:
            raise Unsupported('two different argument registers in one index')
        return ('lin', left[1], left[2] + right[2], left[3] + right[3])
    if left[0] == 'lin' and right[0] == 'const':
        return ('lin', left[1], left[2], left[3] + right[1])
    if left[0] == 'const' and right[0] == 'lin':
        return ('lin', right[1], right[2], right[3] + left[1])
    if left[0] == 'const' and right[0] == 'const':
        return ('const', left[1] + right[1])
    raise Unsupported('addition outside the index model')


class Model:
    """The registers the body has defined, and the accesses it performed."""

    def __init__(self, word):
        self.word = word
        self.registers = {'r0': ('addr', Address('record')),
                          'r1': ('lin', 'r1', 1, 0),
                          'r2': ('lin', 'r2', 1, 0),
                          'r3': ('lin', 'r3', 1, 0)}
        self.stores = []
        self.store_registers = []
        self.loads = []
        self.pool_words = {}
        self.data_bases = {}
        self.value_addresses = {}

    def get(self, name):
        value = self.registers.get(name)
        if value is None:
            raise Unsupported('register %s is not a proven value' % name)
        return value

    def set(self, name, value):
        if name in ('pc', 'sp', 'lr', 'ip'):
            raise Unsupported('writes a control register')
        self.registers[name] = value

    def address_of(self, insn):
        base, displacement, index_register, shift = _mem(insn, 1)
        value = self.get(base)
        if value[0] == 'addr':
            address = value[1]
        else:
            raise Unsupported('memory operand on a value the model cannot address')
        if displacement:
            address = address.add_offset(displacement)
        if index_register is not None:
            address = address.add_index(_scale(self.get(index_register), 1 << shift))
        return address

    def pool_word(self, insn):
        base, displacement, index_register, _ = _mem(insn, 1)
        if base != 'pc' or index_register is not None:
            return None
        if self.word is None:
            raise Unsupported('loads a literal pool without a readable original word')
        site = insn.address + 8 + displacement
        address = self.word(site)
        if address is None:
            raise Unsupported('literal-pool word is outside the original image')
        return site, address

    def apply(self, insn):
        name = insn.mnemonic
        if '!' in insn.op_str:
            raise Unsupported('base-register writeback')
        if name == 'ldr':
            pooled = self.pool_word(insn)
            if pooled is not None:
                site, address = pooled
                self.pool_words.setdefault(address, site)
                self.set(_reg(insn, 0), ('addr', Address(('data', address))))
                return
            value = ('mem', 4, False, self.address_of(insn))
            self.record_address(value[3])
            self.loads.append(value)
            self.set(_reg(insn, 0), value)
            return
        if name in LOAD_WIDTH:
            value = ('mem', LOAD_WIDTH[name], name in LOAD_SIGNED, self.address_of(insn))
            self.record_address(value[3])
            self.loads.append(value)
            self.set(_reg(insn, 0), value)
            return
        if name in STORE_WIDTH:
            address = self.address_of(insn)
            self.record_address(address)
            value = self.get(_reg(insn, 0))
            self.stores.append((STORE_WIDTH[name], address, value))
            self.store_registers.append((_reg(insn, 0), _mem(insn, 1)[0]))
            if (address.base[0] == 'data' and value[0] == 'addr'
                    and value[1].base[0] == 'data'
                    and _is_image_address(value[1].base[1])):
                self.value_addresses.setdefault(value[1].base[1],
                                                self.pool_words[value[1].base[1]])
            return
        if name == 'stm':
            base = self.get(_reg(insn, 0))
            if base[0] != 'addr':
                raise Unsupported('store-multiple on a non-address')
            registers = [item.strip() for item in insn.op_str.split('{')[-1].rstrip('}').split(',')]
            for position, register in enumerate(registers):
                address = base[1].add_offset(position * 4)
                self.record_address(address)
                value = self.get(register)
                self.stores.append((4, address, value))
                self.store_registers.append((register, _reg(insn, 0)))
                if (address.base[0] == 'data' and value[0] == 'addr'
                        and value[1].base[0] == 'data'
                        and _is_image_address(value[1].base[1])):
                    self.value_addresses.setdefault(value[1].base[1],
                                                    self.pool_words[value[1].base[1]])
            return
        if name == 'mov':
            if insn.operands[1].type == ARM_OP_IMM:
                self.set(_reg(insn, 0), ('const', _imm(insn, 1)))
            else:
                self.set(_reg(insn, 0), self.get(_reg(insn, 1)))
            return
        if name == 'mvn':
            self.set(_reg(insn, 0), ('const', ~_imm(insn, 1) & 0xffffffff))
            return
        if name in ('add', 'sub', 'rsb'):
            destination, left = _reg(insn, 0), self.get(_reg(insn, 1))
            if insn.operands[2].type == ARM_OP_IMM:
                amount = _imm(insn, 2)
                self.set(destination,
                         self._add_constant(left, amount if name != 'sub' else -amount))
                return
            right = _scale(self.get(_reg(insn, 2)), _shift_of(insn))
            if name == 'add':
                self.set(destination, self._combine(left, right))
            elif name == 'sub':
                self.set(destination, self._combine(left, self._negate(right)))
            else:
                self.set(destination, self._combine(right, self._negate(left)))
            return
        if name == 'lsl' and insn.operands[2].type == ARM_OP_IMM:
            self.set(_reg(insn, 0), _scale(self.get(_reg(insn, 1)), 1 << _imm(insn, 2)))
            return
        if name in ('sxth', 'sxtb', 'uxtb', 'uxth'):
            self.set(_reg(insn, 0), ('conv', name, self.get(_reg(insn, 1))))
            return
        raise Unsupported('instruction %s is outside the pool-access model' % name)

    def _add_constant(self, value, amount):
        if value[0] == 'addr':
            return ('addr', value[1].add_offset(amount))
        if value[0] == 'lin':
            return ('lin', value[1], value[2], value[3] + amount)
        if value[0] == 'const':
            return ('const', value[1] + amount)
        raise Unsupported('constant added to a value the model does not expect')

    def _combine(self, left, right):
        if left[0] == 'addr' and right[0] == 'lin':
            return ('addr', left[1].add_index(right))
        if left[0] == 'lin' and right[0] == 'addr':
            return ('addr', right[1].add_index(left))
        if left[0] == 'addr' and right[0] == 'const':
            return ('addr', left[1].add_offset(right[1]))
        return _add(left, right)

    def _negate(self, value):
        if value[0] == 'lin':
            return ('lin', value[1], -value[2], -value[3])
        if value[0] == 'const':
            return ('const', -value[1])
        raise Unsupported('negated address')

    def record_address(self, address):
        if address.base == 'record':
            return
        if address.base[0] == 'data':
            self.data_bases.setdefault(address.base[1], self.pool_words[address.base[1]])
            return
        raise Unsupported('access through a loaded pointer')




def classify(symbol, body, word):
    """Return a PoolAccess or None for one complete non-terminal body."""
    if not body:
        return None
    model = Model(word)
    try:
        for insn in body:
            model.apply(insn)
        return render.shape(symbol, model, _parameters(model), _record_is_pointer(model))
    except (Unsupported, ValueError, IndexError):
        return None


def _record_is_pointer(model):
    """Whether argument 0 is used as an address anywhere in the body."""
    for _, address, value in model.stores:
        if address.base == 'record':
            return True
        if value[0] == 'mem' and value[3].base == 'record':
            return True
    for value in model.loads:
        if value[3].base == 'record':
            return True
    return False


def _parameters(model):
    """Argument registers the body reads, as C parameters."""
    used = set()
    for _, address, value in model.stores:
        used.update(_arguments(address, value))
    for value in model.loads:
        used.update(_arguments(value[3], None))
    pointer = _record_is_pointer(model)
    entries = {}
    if 'r0' in used:
        entries[0] = ('u8 *' if pointer else 'u32',
                      'record' if pointer else 'value')
    for register in ARGUMENTS:
        if register in used and register != 'r0':
            entries[int(register[1:])] = ('u32', 'arg' + register[1:])
    # An argument register that is not the first still has to arrive in its own
    # register, so the signature declares the earlier registers it does not read.
    for index in range(max(entries) if entries else -1):
        entries.setdefault(index, ('u32', 'unused%d' % index))
    return [(index, kind, name) for index, (kind, name) in sorted(entries.items())]


def _arguments(address, value):
    found = set()
    if address is not None:
        if address.base == 'record':
            found.add('r0')
        if address.index is not None:
            found.add(address.index[1])
    if value is not None:
        if value[0] == 'addr' and value[1].base == 'record':
            found.add('r0')
        elif value[0] == 'lin' and value[2] and value[3] == 0:
            found.add(value[1])
        elif value[0] == 'mem':
            found.update(_arguments(value[3], None))
    return found


