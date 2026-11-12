"""Shape the corpus functions into compilable translation units.

Three facts decide how a decompiled body can be compiled and what it may share a
file with:

* how each data name is used -- as a value, through a pointer, subscripted, as
  an address or assigned. One declaration can accept several of those, but a
  bare value and a pointer/array/assignment use of the same name need different
  C types;
* whether a function's result is used. A decompiled body whose definition says
  ``void`` can still be called for a value, and a C prototype in the same file
  would reject that call (or the definition would conflict with the declaration
  the call needs);
* the order of the definitions. A caller ordered before its callee sees only the
  empty-parameter-list declaration, which accepts the argument count the
  decompiler recovered.

This module classifies uses, colours functions so conflicting uses never share a
unit, packs each colour into units, and orders a unit's callers before callees.
"""

import re

FUNCTION = re.compile(r'\b(?:thunk_)?(?:FUN|fn)_([0-9a-f]{8})\s*\(')
DATA = re.compile(r'\b(?:s_[0-9a-zA-Z_]*|[A-Za-z]*UNK_[0-9a-zA-Z_]*|PTR_[0-9a-zA-Z_]*|'
                  r'[ui]?Ram[0-9a-f]+|(?:DAT|_DAT)_[0-9a-f]{8})\b')
DEFINITION = re.compile(r'^([A-Za-z_][A-Za-z0-9_ \t\*]*?)\b(?:thunk_)?FUN_[0-9a-f]{8}\s*\(',
                        re.M)
VALUE_PREFIX = '=(,+-*/%<>!&|^?:'


def return_type(text):
    match = DEFINITION.search(text)
    return ' '.join(match.group(1).split()) if match else 'undefined4'


def usage_kinds(text):
    """Classify each data name by how this function uses it.

    ``value`` is a bare read, ``pointer`` a read through ``*name``, ``subscript``
    an indexed use, ``address`` a use as an address (``&name``, ``name + n``, a
    cast), and ``lvalue`` a direct store. A bare read is the only use that needs
    a scalar declaration; every other use needs a pointer or array name.
    """
    kinds = {}
    for match in DATA.finditer(text):
        name = match.group(0)
        before = text[match.start() - 1] if match.start() else ' '
        after = text[match.end():match.end() + 4]
        stripped = after.lstrip(' ')
        row = kinds.setdefault(name, {'value': 0, 'pointer': 0, 'lvalue': 0,
                                      'address': 0, 'subscript': 0, 'code': 0})
        if before == '&':
            row['address'] += 1
        elif before == '*':
            row['pointer'] += 1
            if stripped.startswith(')') and text[match.end() + 1:match.end() + 2] == '(':
                row['code'] += 1
        elif stripped.startswith('['):
            row['subscript'] += 1
        elif re.match(r'(?:[+\-*/%&|^]=(?!=)|[-+]{2})', stripped):
            row['lvalue'] += 1
        elif re.match(r'[+\-]\s', after):
            row['address'] += 1
        else:
            row['value'] += 1
    return kinds


def value_callees(text):
    """Callees whose call is part of an expression rather than a statement."""
    found = set()
    for match in FUNCTION.finditer(text):
        prefix = text[:match.start()].rstrip()
        if prefix and prefix[-1] in VALUE_PREFIX:
            found.add(match.group(1))
    return found


def address_labels(text):
    """Labels whose address is taken, which needs an ordinary identifier."""
    return sorted(set(re.findall(r'&\s*(LAB_[0-9a-f]+(?:_\d+)?)', text)))


def requirement(kinds):
    """The declaration class a symbol needs in one function.

    A scalar declaration accepts a bare read, a store, an address and integer
    arithmetic on the name; only a dereference, a subscript or a call through
    the name needs a pointer declaration. ``mixed`` is a function that needs
    both, which no single declaration satisfies.
    """
    pointer = kinds['pointer'] or kinds['subscript'] or kinds['code']
    if pointer and kinds['value']:
        return 'mixed'
    return 'pointer' if pointer else 'value'


def color(records):
    """Greedy graph colouring of the use conflicts between functions.

    Two functions in one colour never need different declarations of the same
    data name, and a void definition never meets a call that uses its result.
    Colours are the unit-sharing classes; functions are visited in address order
    so the result is deterministic.
    """
    classes = []
    for record in sorted(records, key=lambda item: item['address']):
        needs = {name: requirement(kinds) for name, kinds in record['usage'].items()}
        for name in record['stringData']:
            needs[name] = 'address'
        placed = False
        for index, room in enumerate(classes):
            if set(needs) & room['symbols'].keys():
                if any(needs[name] == 'mixed' or room['symbols'][name] == 'mixed'
                       or needs[name] != room['symbols'][name] for name in needs
                       if name in room['symbols']):
                    continue
            if (record['valueCalls'] & room['voidDefs']
                    or (record['returns'].strip() == 'void'
                        and record['address'] in room['valueCalls'])):
                continue
            room['records'].append(record)
            room['voidDefs'].add(record['address'] if record['returns'].strip() == 'void'
                                 else '')
            room['valueCalls'] |= record['valueCalls']
            for name, need in needs.items():
                room['symbols'].setdefault(name, need)
            placed = True
            break
        if not placed:
            classes.append({'records': [record], 'voidDefs': {''},
                            'valueCalls': set(record['valueCalls']),
                            'symbols': dict(needs)})
    return [room['records'] for room in classes]


def pack(records, limit):
    """Pack one colour class into units under a body-line budget."""
    groups, current, lines = [], [], 0
    for record in records:
        if current and lines + record['lines'] + 4 > limit:
            groups.append(current)
            current, lines = [], 0
        current.append(record)
        lines += record['lines'] + 4
    if current:
        groups.append(current)
    return groups


def order(records_in_unit):
    """Order callers before callees, so a call never meets a later prototype."""
    members = {record['address']: record for record in records_in_unit}
    calls = {record['address']: sorted({name for name in record['callees'] if name in members})
             for record in records_in_unit}
    state, out = {}, []

    def visit(address):
        if state.get(address):
            return
        state[address] = 1
        for callee in calls[address]:
            visit(callee)
        out.append(members[address])

    for record in records_in_unit:
        visit(record['address'])
    return list(reversed(out))
