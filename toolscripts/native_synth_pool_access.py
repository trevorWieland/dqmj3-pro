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

LOAD_WIDTH = {'ldr': 4, 'ldrh': 2, 'ldrsb': 1, 'ldrsh': 2, 'ldrb': 1}
LOAD_SIGNED = {'ldrsb', 'ldrsh'}
STORE_WIDTH = {'str': 4, 'strh': 2, 'strb': 1}
C_TYPE = {1: 'u8', 2: 'u16', 4: 'u32'}
SIGNED_C_TYPE = {1: 's8', 2: 's16', 4: 's32'}
ARGUMENTS = ('r0', 'r1', 'r2', 'r3')


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
            return Address(self.base, self.offset + value[1], self.index, self.scale)
        if value[0] != 'lin' or value[2] != 1:
            raise Unsupported('address index is not one argument register plus a constant')
        if self.index is not None:
            raise Unsupported('two index registers in one address')
        return Address(self.base, self.offset + value[3] * self.scale,
                       ('arg', value[1]), self.scale)


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
    return base, operand.mem.disp, index_register


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
        self.loads = []
        self.pool_words = {}
        self.data_bases = {}

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
        base, displacement, index_register = _mem(insn, 1)
        value = self.get(base)
        if value[0] == 'addr':
            address = value[1]
        else:
            raise Unsupported('memory operand on a value the model cannot address')
        if displacement:
            address = address.add_offset(displacement)
        if index_register is not None:
            address = address.add_index(_scale(self.get(index_register), 1))
        return address

    def pool_word(self, insn):
        base, displacement, index_register = _mem(insn, 1)
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
            self.stores.append((STORE_WIDTH[name], address, self.get(_reg(insn, 0))))
            return
        if name == 'stm':
            base = self.get(_reg(insn, 0))
            if base[0] != 'addr':
                raise Unsupported('store-multiple on a non-address')
            registers = [item.strip() for item in insn.op_str.split('{')[-1].rstrip('}').split(',')]
            for position, register in enumerate(registers):
                address = base[1].add_offset(position * 4)
                self.record_address(address)
                self.stores.append((4, address, self.get(register)))
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


def _argument_name(register):
    return 'record' if register == 'r0' else 'arg' + register[1:]


def _type(width, signed=False):
    if width == 4:
        return 'u32'
    return (SIGNED_C_TYPE if signed else C_TYPE)[width]


def _access(address, width, signed, style, names, qualifier='volatile'):
    """The C lvalue of one memory access.

    ``style`` is ``'local'`` (a typed local pointer holding the data address) or
    ``'extern'`` (a named byte array the linker defines at the address).
    """
    kind = _type(width, signed)
    if address.base == 'record':
        head = 'record'
        if address.offset:
            head += ' + 0x%x' % address.offset
        if address.index is not None:
            head += ' + %s * %d' % (_argument_name(address.index[1]), address.scale)
        if address.index is None and address.offset and address.offset % width == 0 \
                and width == 4 and address.offset < 0x1000:
            return '*(%s %s *)(%s)' % (qualifier, kind, head)
        return '*(%s %s *)(%s)' % (qualifier, kind, head)
    name = names[address.base[1]]
    if style == 'extern':
        head = name
        if address.offset:
            head += ' + 0x%x' % address.offset
        if address.index is not None:
            head += ' + %s * %d' % (_argument_name(address.index[1]), address.scale)
        return '*(%s %s *)(%s)' % (qualifier, kind, head)
    if address.index is None:
        return 'p[%d]' % (address.offset // width)
    unit = address.scale // width
    if address.offset:
        return 'p[%s * %d + %d]' % (_argument_name(address.index[1]), unit, address.offset // width)
    return 'p[%s%s]' % (_argument_name(address.index[1]), '' if unit == 1 else ' * %d' % unit)


def _value(value, style, names, record_name):
    """The C expression of a stored or returned value."""
    if value[0] == 'const':
        return '0x%xu' % (value[1] & 0xffffffff)
    if value[0] == 'lin':
        if value[2] == 1 and value[3] == 0:
            return _argument_name(value[1])
        parts = []
        if value[2]:
            name = _argument_name(value[1])
            parts.append(name if value[2] == 1 else '%s * %d' % (name, value[2]))
        if value[3] or not parts:
            parts.append('0x%x' % value[3] if parts else '0x%xu' % (value[3] & 0xffffffff))
        return ' + '.join(parts)
    if value[0] == 'addr':
        address = value[1]
        if address.base[0] == 'data':
            return '0x%xu' % address.base[1]
        if address.base == 'record':
            return record_name
    if value[0] == 'mem':
        return _access(value[3], value[1], value[2], style, names, 'const volatile')
    if value[0] == 'conv':
        inner = _value(value[2], style, names, record_name)
        signed = value[1] in ('sxth', 'sxtb')
        width = 2 if value[1] in ('sxth', 'uxth') else 1
        return '(%s)%s' % (_type(width, signed), inner)
    raise Unsupported('unrenderable value')


class PoolAccess:
    """The proved shape of one pool-access body."""

    __slots__ = ('family', 'params', 'returns', 'statements', 'detail', 'externs')

    def __init__(self, family, params, returns, statements, detail, externs=()):
        self.family = family
        self.params = params
        self.returns = returns
        self.statements = statements
        self.detail = detail
        self.externs = list(externs)

    def as_dict(self):
        return {'family': self.family, 'params': self.params, 'returns': self.returns,
                'statements': self.statements, 'detail': self.detail}


def classify(symbol, body, word):
    """Return a PoolAccess or None for one complete non-terminal body."""
    if not body:
        return None
    model = Model(word)
    try:
        for insn in body:
            model.apply(insn)
        return _shape(symbol, model)
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
    parameters = []
    if 'r0' in used:
        parameters.append((0, 'u8 *' if pointer else 'u32',
                           'record' if pointer else 'value'))
    for register in ARGUMENTS:
        if register in used and register != 'r0':
            parameters.append((int(register[1:]), 'u32', 'arg' + register[1:]))
    return parameters


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


def _shape(symbol, model):
    if not model.pool_words:
        return None
    names = {address: 'g_%08x' % address for address in model.data_bases}
    externs = [(names[address], address, model.data_bases[address])
               for address in sorted(model.data_bases)]
    parameters = _parameters(model)
    record_name = 'record' if _record_is_pointer(model) else 'value'
    context = (model, names, externs, parameters, record_name)
    if not model.stores:
        return _read(symbol, *context)
    if not model.loads:
        return _stores(symbol, *context)
    return _transfer(symbol, *context)


def _declaration(address, width, signed, name='p'):
    kind = _type(width, signed)
    return 'const volatile %s *%s = (const volatile %s *)0x%xu;' % (
        kind, name, kind, address.base[1])


def _read(symbol, model, names, externs, parameters, record_name):
    value = model.registers.get('r0')
    if value is None or value[0] != 'mem':
        return None
    address, width, signed = value[3], value[1], value[2]
    if address.base == 'record':
        return None
    expression = _access(address, width, signed, 'local', names, 'const volatile')
    family = 'pool_indexed_read' if address.index is not None else 'pool_global_read'
    statements = [_declaration(address, width, signed), 'return %s;' % expression]
    return PoolAccess(family, parameters, 'u32', statements,
                      {'pool': list(names.values())[0], 'width': width, 'signed': signed,
                       'document': 'Reads a field of a fixed data address.'}, [])


def _stores(symbol, model, names, externs, parameters, record_name):
    stores = model.stores
    records = [store for store in stores if store[1].base == 'record']
    globals_ = [store for store in stores if store[1].base[0] == 'data']
    if len(records) not in (0, len(stores)) and len(globals_) not in (0, len(stores)):
        return None
    if records:
        statements = []
        for width, address, value in records:
            target = _access(address, width, False, 'local', names)
            statements.append('%s = %s;' % (target, _value(value, 'local', names,
                                                           record_name)))
        family = 'pool_record_store' if len(records) == 1 else 'pool_record_store_run'
        return PoolAccess(family, parameters, 'void', statements,
                          {'stores': len(records),
                           'document': 'Writes pool constants into a caller-supplied record.'},
                          [])
    if any(store[2][0] == 'mem' for store in globals_):
        return None
    if len(globals_) == 1:
        width, address, value = globals_[0]
        statements = ['volatile %s *p = (volatile %s *)0x%xu;'
                      % (_type(width), _type(width), address.base[1]),
                      '%s = %s;' % (_access(address, width, False, 'local', names),
                                    _value(value, 'local', names, record_name))]
        family = ('pool_global_zero' if _is_zero(value) else
                  'pool_global_store_constant'
                  if value[0] == 'const' or (value[0] == 'addr'
                                             and value[1].base[0] == 'data')
                  else 'pool_global_store_argument')
        return PoolAccess(family, parameters, 'void', statements,
                          {'pool': list(names.values())[0], 'width': width,
                           'document': 'Writes one fixed-address global through its literal pool.'},
                          [])
    statements = []
    for width, address, value in globals_:
        target = _access(address, width, False, 'extern', names)
        statements.append('%s = %s;' % (target, _value(value, 'extern', names, record_name)))
    family = ('pool_global_zero_run' if all(_is_zero(value) for _, _, value in globals_)
              else 'pool_global_store_run')
    return PoolAccess(family, parameters, 'void', statements,
                      {'pool': sorted(names.values()), 'stores': len(globals_),
                       'document': 'Writes a run of fixed-address global words.'},
                      externs)


def _is_zero(value):
    return value[0] == 'const' and value[1] == 0


def _transfer(symbol, model, names, externs, parameters, record_name):
    """One load feeding one store, in either direction."""
    if len(model.loads) != 1 or len(model.stores) != 1:
        return None
    loaded = model.loads[0]
    width, address, value = model.stores[0]
    if value[0] != 'mem' or value[1] is not loaded:
        return None
    if address.base == 'record' and loaded[3].base[0] == 'data':
        statements = [_declaration(loaded[3], loaded[1], loaded[2]),
                      '%s = %s;' % (_access(address, width, False, 'local', names),
                                    _access(loaded[3], loaded[1], loaded[2], 'local', names,
                                            'const volatile'))]
        return PoolAccess('pool_record_from_global', parameters, 'void', statements,
                          {'width': width,
                           'document': 'Copies a fixed-address global field into the record.'}, [])
    if address.base[0] == 'data' and loaded[3].base == 'record':
        statements = ['volatile %s *p = (volatile %s *)0x%xu;' % (
                          _type(width), _type(width), address.base[1]),
                      '%s = %s;' % (_access(address, width, False, 'local', names),
                                    _access(loaded[3], loaded[1], loaded[2], 'local', names,
                                            'const volatile'))]
        return PoolAccess('pool_global_from_record', parameters, 'void', statements,
                          {'width': width,
                           'document': 'Copies a record field into a fixed-address global.'}, [])
    if address.base[0] == 'data' and loaded[3].base[0] == 'data':
        statements = ['volatile %s *p = (volatile %s *)0x%xu;' % (
                          _type(width), _type(width), address.base[1]),
                      'const volatile %s *q = (const volatile %s *)0x%xu;' % (
                          _type(loaded[1], loaded[2]), _type(loaded[1], loaded[2]),
                          loaded[3].base[1]),
                      '*p = *q;']
        return PoolAccess('pool_global_copy', parameters, 'void', statements,
                          {'width': width,
                           'document': 'Copies one fixed-address global into another.'}, [])
    return None
