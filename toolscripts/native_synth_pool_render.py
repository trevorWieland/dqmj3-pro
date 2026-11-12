"""Render the C for a proved literal-pool data access.

The classifier in ``native_synth_pool_access`` proves the instructions; this
module turns the resulting operations into the C family that reproduces them.
Keeping the two apart is what keeps each file under the project's authored
source limit. The renderers are pure: they take the proved model and the
family context and return statements, with no instruction parsing.

A family whose stores run through one fixed data address uses an ``extern``
byte array named for that address; a single access uses a local typed pointer.
The choice is what makes armcc keep the original's register and pool-word
placement.
"""

C_TYPE = {1: 'u8', 2: 'u16', 4: 'u32'}
SIGNED_C_TYPE = {1: 's8', 2: 's16', 4: 's32'}


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
            if address.base[1] in names:
                return '(u32)%s' % names[address.base[1]]
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
    raise ValueError('unrenderable value')


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


def shape(symbol, model, parameters, record_pointer):
    """Turn a proved model into the family shape its operations select."""
    if not model.pool_words:
        return None
    addresses = dict(model.data_bases)
    addresses.update(model.value_addresses)
    names = {address: 'g_%08x' % address for address in addresses}
    externs = [(names[address], address, addresses[address])
               for address in sorted(addresses)]
    record_name = 'record' if record_pointer else 'value'
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
                          externs)
    if any(store[2][0] == 'mem' for store in globals_):
        return None
    if len(globals_) == 1:
        width, address, value = globals_[0]
        position = stores.index(globals_[0])
        value_register, base_register = model.store_registers[position]
        if _is_zero(value) and (base_register, value_register) == ('r1', 'r0'):
            statements = ['*(volatile %s *)(%s + 0x%x) = 0;'
                          % (_type(width), names[address.base[1]], address.offset)
                          if address.offset else
                          '*(volatile %s *)(%s) = 0;' % (_type(width), names[address.base[1]])]
            return PoolAccess('pool_global_zero', parameters, 'void', statements,
                              {'pool': list(names.values())[0], 'width': width,
                               'document': 'Sets one fixed-address global to zero.'}, externs)
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
                          externs)
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
