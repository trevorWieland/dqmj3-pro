"""Classify the byte difference between a compiled candidate and its original.

A search that has no signal is a random walk. This module turns the scoring
result into the small set of facts a repair can act on: whether the compiled
extent has the wrong length, whether the instruction streams disagree in their
registers, immediates, condition codes or opcodes, whether two independent
instructions were scheduled in the other order, or whether only the literal
pool differs. The classification is what orders the transformations; the score
is still the only thing that decides whether a candidate wins.

The classifier reads bytes, not semantics. It disassembles both extents with
Capstone, which is a decoder, not an assembler, and compares the decoded
instructions token by token. When the two streams cannot be paired (a different
instruction count), it reports the first place they diverge and the size delta,
which is itself the signal: a draft that is four bytes longer than its original
carries one instruction the original does not have.
"""

import re

try:
    import capstone
except ImportError:                      # pragma: no cover - environment guard
    capstone = None

REGISTER = re.compile(r'^(?:r\d{1,2}|sp|lr|pc|sb|sl|fp|ip|cpsr|apsr|fpscr|'
                      r's\d{1,2}|d\d{1,2}|q\d{1,2}|p\d{1,2})$')
NUMBER = re.compile(r'^#?-?(?:0x[0-9a-f]+|\d+)$', re.I)

CONDITIONS = ('eq', 'ne', 'cs', 'hs', 'cc', 'lo', 'mi', 'pl', 'vs', 'vc',
              'hi', 'ls', 'ge', 'lt', 'gt', 'le', 'al')

FAMILIES = (
    ('load-store', ('ldr', 'str', 'ldrb', 'strb', 'ldrh', 'strh', 'ldrsb', 'ldrsh',
                    'ldrd', 'strd', 'ldm', 'stm', 'push', 'pop', 'ldrex', 'strex',
                    'ldmdb', 'stmdb', 'ldmia', 'stmia', 'ldmib', 'stmib')),
    ('move', ('mov', 'mvn', 'cpy', 'movw', 'movt')),
    ('arithmetic', ('add', 'sub', 'rsb', 'adc', 'sbc', 'mul', 'mla', 'mls',
                    'umull', 'smull', 'umlal', 'smlal', 'udiv', 'sdiv')),
    ('compare', ('cmp', 'cmn', 'tst', 'teq')),
    ('branch', ('b', 'bl', 'blx', 'bx', 'cbz', 'cbnz')),
    ('logic', ('and', 'orr', 'eor', 'bic', 'orn')),
    ('shift', ('lsl', 'lsr', 'asr', 'ror', 'rrx')),
    ('float', ('vldr', 'vstr', 'vldm', 'vstm', 'vmov', 'vadd', 'vsub', 'vmul',
               'vdiv', 'vcmp', 'vcvt', 'vpush', 'vpop', 'vldmia', 'vstmia')),
    ('system', ('svc', 'mcr', 'mrc', 'dmb', 'dsb', 'isb', 'nop')),
)

FAMILY_OF = {}
for _family, _names in FAMILIES:
    for _name in _names:
        FAMILY_OF.setdefault(_name, _family)


def decoder(mode):
    """A Capstone decoder for the split's own instruction set."""
    if capstone is None:
        return None
    if mode == 'thumb':
        return capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB)
    return capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)


def instructions(data, mode, address):
    """Decode an extent into (address, size, mnemonic, operands) records.

    Capstone stops at the first word it cannot decode, so the caller gets the
    instructions that are really there. A truncated tail is reported by the
    byte-level comparison, not invented here.
    """
    engine = decoder(mode)
    if engine is None or not data:
        return []
    found = []
    for item in engine.disasm(bytes(data), address):
        found.append((item.address, item.size, item.mnemonic, item.op_str))
    return found


def tokens(operands):
    """The comma-separated operands of one instruction, whitespace-normalised."""
    text = operands.replace('#', ' #').replace('[', ' [ ').replace(']', ' ] ')
    text = text.replace(',', ' , ')
    return [token for token in text.split() if token]


def registers(operands):
    return [token for token in tokens(operands) if REGISTER.match(token.lower())]


def base_mnemonic(mnemonic):
    """``movne`` -> (``mov``, ``ne``), for separating condition changes."""
    for condition in CONDITIONS:
        if mnemonic.endswith(condition) and mnemonic != condition:
            stem = mnemonic[:-len(condition)]
            if stem:
                return stem, condition
    return mnemonic, ''


def pair_kind(left, right):
    """What kind of source choice separates two paired instructions."""
    if left[2:] == right[2:]:
        return 'same'
    left_mnemonic, right_mnemonic = left[2], right[2]
    if left_mnemonic == right_mnemonic:
        left_operands, right_operands = left[3], right[3]
        if left_operands == right_operands:
            return 'same'
        left_registers, right_registers = registers(left_operands), registers(right_operands)
        if left_registers != right_registers and \
                [item for item in tokens(left_operands) if not REGISTER.match(item.lower())] == \
                [item for item in tokens(right_operands) if not REGISTER.match(item.lower())]:
            return 'register'
        left_numbers = [item for item in tokens(left_operands) if NUMBER.match(item)]
        right_numbers = [item for item in tokens(right_operands) if NUMBER.match(item)]
        if left_registers == right_registers and left_numbers != right_numbers:
            return 'immediate'
        return 'operand'
    left_stem, left_condition = base_mnemonic(left_mnemonic)
    right_stem, right_condition = base_mnemonic(right_mnemonic)
    if left_stem == right_stem and left_condition != right_condition:
        return 'condition'
    left_family = FAMILY_OF.get(left_stem)
    right_family = FAMILY_OF.get(right_stem)
    if left_family is not None and left_family == right_family:
        return 'opcode'
    return 'mnemonic'


def same_instruction(left, right):
    return left[2:] == right[2:]


def first_difference(left, right):
    """The first index where two instruction lists disagree, or None."""
    for index in range(min(len(left), len(right))):
        if not same_instruction(left[index], right[index]):
            return index
    if len(left) != len(right):
        return min(len(left), len(right))
    return None


def scheduling_permutation(left, right, index):
    """Whether the difference at ``index`` is two instructions in the other order.

    armcc schedules independent instructions freely. A pair of adjacent
    instructions that appears in both streams with its order exchanged is a
    scheduling difference, and the repair is a source reorder, not a new
    operation.
    """
    for distance in (1, 2):
        window = list(range(index, min(index + distance + 1, len(left), len(right))))
        if len(window) < 2:
            continue
        if all(left[item] == right[item] for item in range(min(window)) if item < index):
            pass
        for first in window:
            for second in window:
                if first >= second:
                    continue
                if same_instruction(left[first], right[second]) and \
                        same_instruction(left[second], right[first]):
                    return (first, second)
    return None


def pool_report(original, compiled, code):
    """Compare the trailing literal pool of a compiled extent with the original."""
    if len(compiled) <= code:
        return None
    base = code
    width = min(len(original) - base, len(compiled) - base)
    if width <= 0:
        return {'at': base, 'words': 0, 'first': None}
    differing = []
    for offset in range(0, width - width % 4, 4):
        if original[base + offset:base + offset + 4] != compiled[base + offset:base + offset + 4]:
            differing.append(offset)
    return {'at': base, 'words': len(differing), 'first': differing[0] if differing else None}


def classify(symbol, original, compiled, code):
    """The repair signal for one scored candidate.

    ``symbol.size`` is the original instruction extent, ``code`` the compiled
    one, ``compiled`` the whole compiled section (instructions plus any pool),
    and ``original`` the original bytes over the same length.
    """
    result = {'exact': False, 'words': 0, 'firstOffset': None, 'sizeDelta': code - symbol.size,
              'extentDelta': len(compiled) - symbol.size, 'class': 'exact',
              'detail': '', 'instructions': [], 'pool': None}
    if code == symbol.size and compiled[:len(original)] == original[:len(compiled)] \
            and len(compiled) >= symbol.size and original[:len(compiled)] == compiled:
        result['exact'] = True
        return result
    differing = [offset for offset in range(0, max(len(original), len(compiled)), 4)
                 if original[offset:offset + 4] != compiled[offset:offset + 4]]
    result['words'] = len(differing)
    result['firstOffset'] = differing[0] if differing else None
    original_code = original[:symbol.size]
    compiled_code = compiled[:code]
    left = instructions(original_code, symbol.mode, symbol.address)
    right = instructions(compiled_code, symbol.mode, symbol.address)
    if len(compiled) != len(original):
        result['class'] = 'extent'
        result['detail'] = 'compiled extent %d, original section %d' % (len(compiled), len(original))
    index = first_difference(left, right)
    if len(left) != len(right):
        result['class'] = 'size'
        result['detail'] = 'instruction count %d, original %d' % (len(right), len(left))
        result['instructions'] = [
            {'index': item,
             'original': format_instruction(left[item]) if item < len(left) else None,
             'compiled': format_instruction(right[item]) if item < len(right) else None,
             'kind': pair_kind(left[item], right[item])
             if item < len(left) and item < len(right) else 'missing'}
            for item in range(max(len(left), len(right)))]
    elif index is not None:
        kind = pair_kind(left[index], right[index])
        result['class'] = kind
        result['detail'] = '%s  |  %s' % (format_instruction(left[index]),
                                          format_instruction(right[index]))
        permutation = scheduling_permutation(left, right, index)
        if permutation is not None:
            result['class'] = 'order'
            result['detail'] = 'scheduled %s' % (permutation,)
        result['instructions'] = [
            {'index': item,
             'original': format_instruction(left[item]),
             'compiled': format_instruction(right[item]),
             'kind': pair_kind(left[item], right[item])}
            for item in range(len(left))]
    elif len(compiled) > code or len(original) > symbol.size:
        pool = pool_report(original, compiled, code)
        result['pool'] = pool
        if pool and pool['words']:
            result['class'] = 'pool'
            result['detail'] = 'pool word at +0x%x' % (code + pool['first']) if pool['first'] is not None else 'pool'
    elif result['class'] != 'extent':
        result['class'] = 'unknown'
    return result


def format_instruction(item):
    if item is None:
        return '-'
    return ('%s %s' % (item[2], item[3])).strip()


# How each difference class is most likely repaired. The loop tries the
# transformations listed for the class first, in this order; everything else is
# still reachable through the beam, only later or with a smaller budget.
REPAIRS = {
    'register': ('narrow-read', 'value-cast', 'local-inline', 'member-local', 'pointer-local', 'temp-introduce',
                 'temp-inline', 'decl-hoist', 'swap', 'store-swap', 'block-reorder',
                 'commute', 'condition-temp', 'cast-size', 'param-type', 'local-type',
                 'sign'),
    'immediate': ('mask-width', 'mask-shift', 'shift-mask', 'range', 'literal-sign',
                  'sign', 'commute', 'cast-size', 'pointer-local', 'param-type',
                  'const-hoist'),
    'condition': ('condition-commute', 'condition-not', 'condition-bare',
                  'ternary-negate', 'if-swap', 'commute', 'if-guarded',
                  'condition-temp'),
    'opcode': ('narrow-read', 'value-cast', 'commute', 'mask-shift', 'shift-mask', 'boolean-compare',
               'boolean-ternary', 'cast-size', 'if-to-ternary', 'if-to-default',
               'pointer-local'),
    'operand': ('narrow-read', 'value-cast', 'commute', 'cast-size', 'pointer-local', 'member-local', 'sign',
                'param-type', 'local-type', 'temp-introduce', 'store-swap'),
    'mnemonic': ('cast-size', 'narrow-read', 'value-cast', 'boolean-compare', 'boolean-ternary', 'ternary-if',
                 'if-to-ternary', 'if-to-default', 'if-swap', 'pointer-local',
                 'condition-temp'),
    'order': ('swap', 'store-swap', 'block-reorder', 'decl-hoist', 'decl-split',
              'decl-join', 'temp-introduce'),
    'size': ('temp-introduce', 'local-inline', 'temp-inline', 'split-compound',
             'block-reorder', 'ternary-if', 'if-to-ternary', 'if-to-default',
             'decl-split', 'decl-join', 'decl-init-split'),
    'extent': ('local-inline', 'temp-introduce', 'temp-inline', 'split-compound',
               'decl-split', 'ternary-if', 'if-to-default', 'decl-init-split'),
    'pool': ('literal-sign', 'sign', 'mask-width', 'mask-shift', 'commute',
             'cast-size'),
}


def order_mutations(mutations, difference, class_lookup=None):
    """Order labelled mutants so the difference class's repairs come first.

    ``mutations`` is an iterable of (label, text). The label's operator name is
    its prefix before ``@``. A mutation whose operator is listed for the class
    keeps that list's order; all others follow, in their original order, so the
    beam can still find a repair outside the mapping.
    """
    preferred = REPAIRS.get(difference.get('class'), ())
    rank = {name: index for index, name in enumerate(preferred)}
    ordered, rest, seen = [], [], set()
    for label, mutant in mutations:
        if mutant in seen:
            continue
        seen.add(mutant)
        operator = label.split('@')[0]
        row = (rank.get(operator, len(preferred)), label, mutant)
        (ordered if operator in rank else rest).append(row)
    ordered.sort(key=lambda row: (row[0], row[1]))
    return [(label, mutant) for _, label, mutant in ordered] + \
           [(label, mutant) for _, label, mutant in rest]
