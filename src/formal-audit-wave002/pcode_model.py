from dataclasses import dataclass

import z3


class UnsupportedPcode(ValueError):
    pass


CORE = ['r' + str(i) for i in range(13)] + ['sp', 'lr']
FLAGS = ['NG', 'ZR', 'CY', 'OV']
SCRATCH = ['tmpNG', 'tmpZR', 'tmpCY', 'tmpOV', 'shift_carry']
ALLOWED = {'COPY', 'INT_SUB', 'INT_AND', 'INT_RIGHT', 'INT_EQUAL', 'INT_NOTEQUAL',
           'INT_LESSEQUAL', 'INT_SLESS', 'INT_SBORROW', 'SUBPIECE',
           'BOOL_AND', 'BOOL_OR', 'BOOL_NEGATE', 'CBRANCH', 'CALLOTHER', 'RETURN'}


@dataclass
class State:
    registers: dict
    unique: dict
    guard: object
    thumb: object
    returned: bool
    target: object
    memory: object
    other_cpsr: object
    userops: int


def bv(value, width=32):
    return z3.BitVecVal(value, width)


def initial_state():
    registers = {name: z3.BitVec('input_' + name, 32) for name in CORE}
    registers.update({name: z3.ZeroExt(7, z3.BitVec('input_' + name, 1)) for name in FLAGS})
    registers['TB'] = bv(0, 8)
    return State(registers, {}, z3.BoolVal(True), z3.BoolVal(False), False, None,
                 z3.Array('input_memory', z3.BitVecSort(32), z3.BitVecSort(8)),
                 z3.BitVec('input_other_cpsr', 32) & bv(0x0fffffdf), 0)


def clone(state):
    return State(dict(state.registers), dict(state.unique), state.guard, state.thumb,
                 state.returned, state.target, state.memory, state.other_cpsr, state.userops)


def canonical_byte(value):
    if value.size() != 8:
        return False
    if z3.is_bv_value(value):
        return value.as_long() in (0, 1)
    return z3.is_app_of(value, z3.Z3_OP_ITE) and canonical_byte(value.arg(1)) and canonical_byte(value.arg(2))


def read(node, state):
    width = node['size'] * 8
    if node['space'] == 'const':
        return bv(int(node['offset']), width)
    if node['space'] == 'register':
        name = node.get('registerName')
        if name not in state.registers:
            raise UnsupportedPcode('Uninitialized or unsupported register read: ' + str(name))
        result = state.registers[name]
    elif node['space'] == 'unique':
        key = (int(node['offset']), node['size'])
        if key not in state.unique:
            raise UnsupportedPcode('Uninitialized instruction-local unique value')
        result = state.unique[key]
    else:
        raise UnsupportedPcode('Data-memory or unknown varnode space read')
    if result.size() != width:
        raise UnsupportedPcode('Register/unique alias or width mismatch')
    return result


def write(node, value, state):
    if value.size() != node['size'] * 8:
        raise UnsupportedPcode('Output width mismatch')
    if node['space'] == 'register':
        name = node.get('registerName')
        if name not in CORE + FLAGS + SCRATCH + ['TB', 'pc']:
            raise UnsupportedPcode('Unsupported architectural register write')
        state.registers[name] = value
    elif node['space'] == 'unique':
        state.unique[(int(node['offset']), node['size'])] = value
    else:
        raise UnsupportedPcode('Data-memory or unknown varnode space write')


def operation(op, state):
    name = op['mnemonic']
    values = [read(node, state) for node in op['inputs']]
    width = op['output']['size'] * 8
    unary = name in ('COPY', 'BOOL_NEGATE')
    if len(values) != (1 if unary else 2):
        raise UnsupportedPcode('Unexpected operator arity')
    first = values[0]
    second = values[1] if len(values) == 2 else None
    if second is not None and name != 'SUBPIECE' and first.size() != second.size():
        raise UnsupportedPcode('Binary input widths differ')
    if name == 'COPY':
        result = first
    elif name == 'INT_SUB':
        if first.size() != second.size():
            raise UnsupportedPcode('Subtraction input widths differ')
        result = first - second
    elif name == 'INT_AND':
        result = first & second
    elif name == 'INT_RIGHT':
        if op['inputs'][1]['space'] != 'const':
            raise UnsupportedPcode('Only measured constant shifts supported')
        result = z3.LShR(first, int(op['inputs'][1]['offset']))
    elif name == 'SUBPIECE':
        if op['inputs'][1]['space'] != 'const':
            raise UnsupportedPcode('Only constant subpiece offsets supported')
        low = int(op['inputs'][1]['offset']) * 8
        if low + width > first.size():
            raise UnsupportedPcode('Subpiece outside source width')
        result = z3.Extract(low + width - 1, low, first)
    else:
        if name in ('BOOL_AND', 'BOOL_OR', 'BOOL_NEGATE') and any(value.size() != 8 for value in values):
            raise UnsupportedPcode('P-code Boolean values must have byte width')
        rules = {'INT_EQUAL': lambda: first == second, 'INT_NOTEQUAL': lambda: first != second,
                 'INT_LESSEQUAL': lambda: z3.ULE(first, second), 'INT_SLESS': lambda: first < second,
                 'INT_SBORROW': lambda: z3.SignExt(1, first) - z3.SignExt(1, second) != z3.SignExt(1, first - second),
                 'BOOL_AND': lambda: z3.And(first != 0, second != 0),
                 'BOOL_OR': lambda: z3.Or(first != 0, second != 0), 'BOOL_NEGATE': lambda: first == 0}
        if name not in rules or width != 8:
            raise UnsupportedPcode('Unsupported generic integer/Boolean operator')
        result = z3.If(rules[name](), bv(1, 8), bv(0, 8))
    write(op['output'], result, state)


def execute(export, initial):
    required_context = {'TMode', 'LRset', 'REToverride', 'CALLoverride', 'TEEMode', 'itmode'}
    if set(export.get('explicitZeroContextFields', [])) != required_context:
        raise UnsupportedPcode('Explicit ARM/nonoverride/non-IT context qualification required')
    if any(export.get('effectiveEntryContext', {}).get(name) != '0' for name in required_context):
        raise UnsupportedPcode('Unexpected decoder context')
    rows = export['instructions']
    if not rows or len(rows) > 32 or sum(row['bytes'] for row in rows) != export['bodyBytes']:
        raise UnsupportedPcode('Complete bounded instruction sequence required')
    nodes, entries = [], {}
    registers = {(row['offset'], row['size']): row['name'] for row in export['registers']}
    for index, row in enumerate(rows):
        if row['address'] != export['bodyAddress'] + 4 * index or row['bytes'] != 4 or not row['operations']:
            raise UnsupportedPcode('Noncontiguous A32 body or empty P-code instruction')
        if any(row.get('context', {}).get(name) != '0' for name in required_context):
            raise UnsupportedPcode('Instruction decoder context changed outside qualified scope')
        entries[row['address']] = len(nodes)
        for local, op in enumerate(row['operations']):
            if op['index'] != local or op['mnemonic'] not in ALLOWED:
                raise UnsupportedPcode('Unsupported opcode or operation indexing')
            for node in op['inputs'] + ([op['output']] if 'output' in op else []):
                if node['size'] not in (1, 4) or node['space'] not in ('register', 'unique', 'const', 'ram'):
                    raise UnsupportedPcode('Unsupported varnode width/space')
                if node['space'] == 'register' and registers.get((node['offset'], node['size'])) != node.get('registerName'):
                    raise UnsupportedPcode('Register identity/alias disagrees with language export')
            nodes.append((index, local, op))
    if nodes[-1][2]['mnemonic'] != 'RETURN' or any(op['mnemonic'] == 'RETURN' for _, _, op in nodes[:-1]):
        raise UnsupportedPcode('Exactly one complete terminal RETURN is required')
    pending, finished = [(0, clone(initial), -1)], []
    steps = 0
    while pending:
        cursor, state, previous_instruction = pending.pop()
        steps += 1
        if steps > 1024 or len(pending) + len(finished) > 64 or cursor >= len(nodes):
            raise UnsupportedPcode('Loop, unsupported path expansion or body fallthrough')
        instruction, local, op = nodes[cursor]
        if instruction != previous_instruction:
            state.unique = {}
        name = op['mnemonic']
        if name == 'CBRANCH':
            if 'output' in op or len(op['inputs']) != 2 or op['inputs'][1]['size'] != 1:
                raise UnsupportedPcode('Invalid conditional branch shape')
            target = op['inputs'][0]
            if target['space'] == 'ram' and int(target['offset']) in entries:
                destination = entries[int(target['offset'])]
            else:
                raise UnsupportedPcode('Unowned or unsupported relative P-code branch')
            if destination <= cursor:
                raise UnsupportedPcode('Backward branch or loop unsupported')
            test = read(op['inputs'][1], state) != 0
            taken = clone(state)
            taken.guard = z3.And(taken.guard, test)
            state.guard = z3.And(state.guard, z3.Not(test))
            pending.extend([(destination, taken, instruction), (cursor + 1, state, instruction)])
        elif name == 'CALLOTHER':
            if op.get('useropName') != 'setISAMode' or 'output' in op or len(op['inputs']) != 2:
                raise UnsupportedPcode('Unknown userop; no implicit no-op interpretation')
            if op['inputs'][0]['space'] != 'const' or int(op['inputs'][0]['offset']) != 62 or op['inputs'][1].get('registerName') != 'TB' or op['inputs'][1]['size'] != 1:
                raise UnsupportedPcode('Unexpected setISAMode signature')
            mode = read(op['inputs'][1], state)
            if not canonical_byte(mode):
                raise UnsupportedPcode('setISAMode requires a provably canonical byte Boolean')
            state.thumb = mode == bv(1, 8)
            state.userops += 1
            pending.append((cursor + 1, state, instruction))
        elif name == 'RETURN':
            if 'output' in op or len(op['inputs']) != 1 or op['inputs'][0]['size'] != 4:
                raise UnsupportedPcode('Unexpected RETURN signature')
            state.returned = True
            state.target = read(op['inputs'][0], state)
            finished.append(state)
        else:
            if 'output' not in op:
                raise UnsupportedPcode('Value operation has no output')
            operation(op, state)
            pending.append((cursor + 1, state, instruction))
    return finished


def domain(initial, address, size):
    lr, sp = initial.registers['lr'], initial.registers['sp']
    target = lr & bv(0xfffffffe)
    return z3.And(sp & bv(7) == 0, initial.other_cpsr & bv(0x0700fc1f) == bv(0x10),
                  z3.Or(lr & bv(1) == 1, lr & bv(3) == 0),
                  z3.Or(z3.ULT(target, bv(address)), z3.UGE(target, bv(address + size))))


def violations(paths, initial, expected):
    protected = ['r' + str(i) for i in range(4, 12)] + ['sp', 'lr']
    bad = []
    for state in paths:
        mismatch = z3.Or(state.registers['r0'] != expected, z3.BoolVal(not state.returned),
                        state.target != initial.registers['lr'] & bv(0xfffffffe),
                        state.thumb != (initial.registers['lr'] & bv(1) != 0),
                        z3.BoolVal(state.userops != 1), state.memory != initial.memory,
                        state.other_cpsr != initial.other_cpsr,
                        *[state.registers[name] != initial.registers[name] for name in protected])
        bad.append(z3.And(state.guard, mismatch))
    return z3.Or(*bad)
