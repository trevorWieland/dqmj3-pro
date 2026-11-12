"""Source rewrites the corpus band needs beyond the original permuter.

`permute_ops` was measured on hand-shaped source, where a near miss is one local
declaration or one mask spelling away from the original. A decompiled body is
further away: it invents temporaries for every intermediate value, spells every
field access as a cast and a dereference, guards bodies with conditions the
original may have turned into a conditional assignment, and reuses one local for
values from different scopes. The rewrites here target those shapes:

* ``temp-introduce`` / ``temp-inline`` -- add or remove the local that carries
  an intermediate value (a call result, a nested expression, a cast base);
* ``pointer-local`` -- hold a repeated cast base in a pointer local, the
  source form of a struct member reached through a pointer;
* ``split-compound`` / ``join-compound`` -- one braced body as two guarded
  statements, or two equal guards as one body;
* ``decl-init-split`` -- a declaration with an initializer as a declaration and
  an assignment;
* ``block-reorder`` -- move a statement past one or two independent neighbours,
  not only the adjacent swap;
* ``if-guarded`` -- a bare guarded assignment as the conditional expression it
  spells;
* ``cast-size`` -- change one pointer cast's pointee width or signedness, the
  decompiler's most common lost type.

Every operator yields ordinary C. None decides which candidate wins; the
measured compiler does, and only a candidate whose placed bytes equal the
original is credited.
"""

import re

from permute_ops import OPERATORS as BASE_OPERATORS
from repair_types import (op_cast_width, op_local_type, op_narrow_read,
                          op_param_type, op_value_cast)
from permute_text import (blocks, effects, mask, match_pair, replace, skip_space,
                          statements, swappable)

TYPE_WORDS = ('undefined', 'undefined1', 'undefined2', 'undefined3', 'undefined4',
              'undefined5', 'undefined6', 'undefined7', 'undefined8', 'int', 'uint',
              'char', 'uchar', 'short', 'ushort', 'long', 'ulong', 'byte', 'bool',
              'void', 'code', 'signed', 'unsigned', 'const', 'volatile', 'struct',
              'static', 'extern', 'longlong', 'ulonglong', 'int3', 'uint3')

CONTROL = ('return', 'break', 'continue', 'goto')

DECLARATION = re.compile(
    r'\s*(?:(?:const|static|volatile|unsigned|signed)\s+)*'
    r'(?:struct\s+\w+|long\s+long|long|short|char|int|float|double|void|'
    r'[A-Za-z_]\w*)\s+[A-Za-z_*]')


def declaration(body):
    """Whether a statement text begins a declaration."""
    return bool(DECLARATION.match(mask(body)))


def control(body):
    return any(re.match(r'\s*%s\b' % word, mask(body)) for word in CONTROL)


def simple_condition(condition):
    """A condition with no call, assignment or comma, so re-reading is free."""
    clean = mask(condition)
    if re.search(r'(?<![=!<>])=(?!=)|\+\+|--', clean):
        return False
    if re.search(r'\b[A-Za-z_]\w*\s*\(', clean):
        return False
    return True


def new_local(text, stem):
    name = stem
    while re.search(r'\b%s\b' % re.escape(name), mask(text)):
        name += '_'
    return name


def op_temp_introduce(text, span):
    """Hold a call result or a nested expression in a named local."""
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        for start, end in statements(masked, opening, closing):
            body = masked[start:end]
            if declaration(body) or control(body):
                continue
            assignment = re.match(r'\s*([^;{}]+?)\s*=\s*([^;{}]+);\s*$', body)
            if not assignment:
                continue
            left, right = assignment.group(1).strip(), assignment.group(2).strip()
            if not re.fullmatch(r'[A-Za-z_]\w*(?:\s*(?:->|\.)\s*[A-Za-z_]\w*)*', left):
                continue
            for call in re.finditer(r'\b([A-Za-z_]\w*)\s*\(([^()]*)\)', right):
                if call.group(1) in TYPE_WORDS:
                    continue
                piece = call.group(0)
                local = new_local(text, 't_' + '%x' % (start + call.start()))
                rest = right[:call.start()] + local + right[call.end():]
                for kind in ('undefined4', 'unsigned char *'):
                    yield ('temp-introduce@%d' % (start + call.start()),
                           replace(text, start, end,
                                   '%s %s = %s; %s = %s;' % (kind, local, piece, left, rest)))


def op_temp_inline(text, span):
    """Substitute a single-use local back into its use and drop the declaration.

    The permuter's ``local-inline`` only accepts a narrow value vocabulary. A
    decompiled body also writes casts, dereferences and calls into its
    temporaries, so this operator takes the same rewrite with the wider value
    grammar the corpus uses. Evaluation order is preserved by requiring exactly
    one use.
    """
    masked = mask(text)
    declaration_pattern = re.compile(
        r'\s*((?:(?:const|volatile|unsigned|signed)\s+)*'
        r'(?:long\s+long|long|short|char|int|float|double|void|struct\s+\w+|'
        r'[A-Za-z_]\w*))\s+([A-Za-z_*][^;{}]*);\s*$')
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        found = statements(masked, opening, closing)
        for index, (start, end) in enumerate(found):
            match = declaration_pattern.match(masked[start:end])
            if not match or 'static' in match.group(1):
                continue
            declarator = match.group(2).strip()
            initialized = re.fullmatch(r'\**\s*([A-Za-z_]\w*)\s*=\s*(.+)', declarator)
            if not initialized:
                continue
            name, value = initialized.group(1), initialized.group(2).strip()
            if not value or re.search(r'\b%s\s*=[^=]' % re.escape(name), value):
                continue
            body = text[opening:closing]
            remaining = body[:start - opening] + body[end - opening:]
            uses = len(re.findall(r'\b%s\b' % re.escape(name), mask(remaining)))
            if uses != 1:
                continue
            yield ('temp-inline@%d' % start,
                   text[:opening] + re.sub(r'\b%s\b' % re.escape(name),
                                            '(%s)' % value, remaining) + text[closing:])


CAST = re.compile(r'\*\s*\(\s*([A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*)\s*\*\s*\)\s*'
                  r'\(\s*([A-Za-z_]\w*(?:\s*[+\-]\s*(?:0[xX][0-9a-fA-F]+|\d+))?)\s*\)')


def op_pointer_local(text, span):
    """Hold a repeated cast base in a typed pointer local.

    ``*(undefined4 *)(param_1 + 0x10)`` written four times is four address
    computations; the original may have written one pointer local and four
    dereferences. Both are the same operations, and armcc allocates the register
    differently, which is the difference this operator exists to try.
    """
    masked = mask(text)
    sites = {}
    for match in CAST.finditer(masked, span[2], span[3]):
        base = re.sub(r'\s+', ' ', match.group(2).strip())
        key = (match.group(1).strip(), base)
        sites.setdefault(key, []).append((match.start(), match.end()))
    for (kind, base), found in sites.items():
        if len(found) < 2 or kind in ('void', 'code'):
            continue
        local = new_local(text, 'p_' + re.sub(r'\W', '', base)[:12])
        declaration_text = '%s *%s = (%s *)(%s);\n' % (kind, local, kind, base)
        mutated = text
        for start, end in reversed(found):
            mutated = replace(mutated, start, end, '(*%s)' % local)
        first = text.rfind('{', 0, found[0][0])
        if first < 0:
            continue
        yield ('pointer-local@%d' % found[0][0],
               replace(mutated, first + 1, first + 1, '\n' + declaration_text))


def plain_writes(body):
    """Identifiers assigned as scalars, excluding stores through ``base[..]``."""
    clean = mask(body)
    names = set(re.findall(r'(?<![\[\]\w])([A-Za-z_]\w*)\s*=(?!=)', clean))
    names |= set(re.findall(r'(?:\+\+|--)\s*([A-Za-z_]\w*)', clean))
    names |= set(re.findall(r'\b([A-Za-z_]\w*)\s*(?:\+\+|--)', clean))
    return names


def indexed_sites(body):
    """``base[index]`` sites in a statement, normalised."""
    return {re.sub(r'\s+', '', '<%s%s>' % (base, index))
            for base, index in re.findall(
                r'([A-Za-z_]\w*)\s*\[\s*([^\]]+?)\s*\]', mask(body))}


def op_split_compound(text, span):
    """One guarded braced body as two guarded statements."""
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        for start, end in statements(masked, opening, closing):
            if not re.match(r'\s*if\s*\(', masked[start:end]):
                continue
            condition_open = masked.index('(', start)
            condition_close = match_pair(masked, condition_open)
            condition = text[condition_open + 1:condition_close]
            if not simple_condition(condition):
                continue
            then_start = skip_space(masked, condition_close + 1, end)
            if masked[then_start:then_start + 1] != '{':
                continue
            then_close = match_pair(masked, then_start)
            if masked[skip_space(masked, then_close + 1, end):].startswith('else'):
                continue
            inner = statements(masked, then_start + 1, then_close)
            if len(inner) != 2:
                continue
            first, second = inner
            if declaration(masked[first[0]:first[1]]) or declaration(masked[second[0]:second[1]]):
                continue
            if control(masked[first[0]:first[1]]) or control(masked[second[0]:second[1]]):
                continue
            reads, _ = effects(condition)
            written = plain_writes(masked[first[0]:first[1]])
            if reads & written:
                continue
            touched = indexed_sites(masked[first[0]:first[1]]) & indexed_sites(condition)
            if touched:
                continue
            yield ('split-compound@%d' % start,
                   replace(text, start, end,
                           'if (%s) %s if (%s) %s' % (
                               condition.strip(), text[first[0]:first[1]].strip(),
                               condition.strip(), text[second[0]:second[1]].strip())))


def op_join_compound(text, span):
    """Two equal simple guards as one braced body."""
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        found = statements(masked, opening, closing)
        for index in range(len(found) - 1):
            first, second = found[index], found[index + 1]
            left = re.match(r'\s*if\s*\(([^;{}]*)\)\s*([^;{}]+;)\s*$',
                            masked[first[0]:first[1]])
            right = re.match(r'\s*if\s*\(([^;{}]*)\)\s*([^;{}]+;)\s*$',
                             masked[second[0]:second[1]])
            if not left or not right:
                continue
            if left.group(1).strip() != right.group(1).strip():
                continue
            if not simple_condition(left.group(1)):
                continue
            if declaration(left.group(2)) or declaration(right.group(2)):
                continue
            if control(left.group(2)):
                continue
            yield ('join-compound@%d' % first[0],
                   replace(text, first[0], second[1],
                           'if (%s) { %s %s }' % (
                               left.group(1).strip(),
                               text[first[0] + left.start(2):first[0] + left.end(2)].strip(),
                               text[second[0] + right.start(2):second[0] + right.end(2)].strip())))


def op_decl_init_split(text, span):
    """A declaration with an initializer as a declaration and an assignment."""
    masked = mask(text)
    pattern = re.compile(r'\s*((?:(?:const|volatile|unsigned|signed)\s+)*'
                         r'(?:long\s+long|long|short|char|int|float|double|void|'
                         r'struct\s+\w+|[A-Za-z_]\w*))\s+'
                         r'([A-Za-z_]\w*(?:\s*\[[^\]]*\])?)\s*=\s*([^;{}]+);\s*$')
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        for start, end in statements(masked, opening, closing):
            match = pattern.match(masked[start:end])
            if not match or 'static' in match.group(1):
                continue
            kind, name = match.group(1), match.group(2)
            yield ('decl-init-split@%d' % start,
                   replace(text, start, end, '%s %s; %s = %s;'
                           % (kind, name, name, text[start + match.start(3):
                                                     start + match.end(3)].strip())))


def op_block_reorder(text, span):
    """Move a statement past one or two independent neighbours, either way."""
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        found = statements(masked, opening, closing)
        if len(found) < 2:
            continue
        for index in range(len(found)):
            for distance in (1, 2):
                if index + distance >= len(found):
                    break
                passed = found[index + 1:index + distance + 1]
                if not all(swappable(masked[found[index][0]:found[index][1]],
                                     masked[item[0]:item[1]]) for item in passed):
                    break
                start, end = found[index]
                after = found[index + distance][1]
                between = text[end:after]
                yield ('block-reorder@%d' % start,
                       replace(text, start, after, between + '\n' + text[start:end].strip()))
                earlier = found[index - distance][0] if index - distance >= 0 else None
                if earlier is None:
                    continue
                if not all(swappable(masked[item[0]:item[1]],
                                     masked[found[index][0]:found[index][1]])
                           for item in found[index - distance:index]):
                    continue
                yield ('block-reorder@%d' % start,
                       replace(text, earlier, end, text[start:end].strip() + '\n'
                               + text[earlier:start]))


def op_if_guarded(text, span):
    """A bare guarded assignment as the conditional expression it spells."""
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        for start, end in statements(masked, opening, closing):
            if not re.match(r'\s*if\s*\(', masked[start:end]):
                continue
            condition_open = masked.index('(', start)
            condition_close = match_pair(masked, condition_open)
            condition = text[condition_open + 1:condition_close].strip()
            then_start = skip_space(masked, condition_close + 1, end)
            if masked[then_start:then_start + 1] == '{':
                then_close = match_pair(masked, then_start)
                found = statements(masked, then_start + 1, then_close)
                if len(found) != 1:
                    continue
                body = found[0]
            else:
                body = (then_start, statements(masked, then_start, end)[0][1])
            body_text = masked[body[0]:body[1]]
            if control(body_text):
                continue
            assignment = re.match(r'\s*([A-Za-z_]\w*(?:\s*\[[^\]]*\])?)\s*=\s*'
                                  r'([^;{}]+);\s*$', body_text)
            if not assignment:
                continue
            if masked[skip_space(masked, body[1], end):].startswith('else'):
                continue
            left = assignment.group(1)
            base = re.match(r'[A-Za-z_]\w*', left).group(0)
            value = text[body[0] + assignment.start(2):body[0] + assignment.end(2)].strip()
            if not re.search(r'\b%s\s*(?:\[[^\]]*\]\s*)?=[^=]' % re.escape(base),
                             mask(text[span[2]:start])):
                continue
            yield ('if-guarded@%d' % start,
                   replace(text, start, end,
                           '%s = %s ? %s : %s;' % (left, condition, value, left)))


INDEX_STORE = re.compile(
    r'\s*([A-Za-z_]\w*(?:\s*(?:->|\.)\s*[A-Za-z_]\w*)*)\s*\[\s*([^\]\s]+)\s*\]\s*='
    r'\s*([^;{}]+);\s*$')
DEREF_STORE = re.compile(
    r'\s*\*\s*\(\s*([A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*)\s*\*\s*\)\s*'
    r'\(\s*([A-Za-z_]\w*)\s*([+\-]\s*(?:0[xX][0-9a-fA-F]+|\d+))?\s*\)\s*=\s*([^;{}]+);\s*$')


def store_site(body):
    """(base, offset) of a simple store, or None.

    Two stores to *different* fields of the same base are independent even
    though the conservative reorder rule treats every write to the base as
    interference. This is the shape a decompiled initializer has, and the order
    of the constant materialisation armcc emits follows it.
    """
    match = INDEX_STORE.fullmatch(body)
    if match:
        return match.group(1).strip(), '[' + match.group(2).strip() + ']'
    match = DEREF_STORE.fullmatch(body)
    if match:
        return match.group(2), (match.group(3) or '').replace(' ', '')
    return None


def op_store_swap(text, span):
    """Exchange two adjacent stores to different fields of one base."""
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        found = statements(masked, opening, closing)
        for (first_start, first_end), (second_start, second_end) in zip(found, found[1:]):
            first = store_site(masked[first_start:first_end])
            second = store_site(masked[second_start:second_end])
            if not first or not second:
                continue
            if first[0] != second[0] or first[1] == second[1]:
                continue
            if re.search(r'\b[A-Za-z_]\w*\s*\(', first[1] + second[1]):
                continue
            yield ('store-swap@%d' % first_start,
                   replace(text, first_start, second_end,
                           text[second_start:second_end] + '\n'
                           + text[first_start:first_end].strip()))


DEREF_ANY = re.compile(r'\*\s*\(\s*([A-Za-z_]\w*(?:\s+[A-Za-z_]\w*)*)\s*\*\s*\)'
                       r'\s*(\(\s*[^()]*\s*\)|[A-Za-z_]\w*)')


def op_condition_temp(text, span):
    """Hold the dereference a condition reads in a named local first.

    ``if (*(char *)(p + 4) == 0)`` compares a fresh load; a source that wrote
    the load into a local before the guard leaves the compiler free to
    materialise the stored value while the load is in flight. The only change
    is that the condition's first dereference gets a name.
    """
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        for start, end in statements(masked, opening, closing):
            if not re.match(r'\s*(?:if|while)\s*\(', masked[start:end]):
                continue
            condition_open = masked.index('(', start)
            condition_close = match_pair(masked, condition_open)
            inner = DEREF_ANY.search(masked, condition_open + 1, condition_close)
            if inner is None:
                continue
            kind = inner.group(1).strip()
            local = new_local(text, 'c_' + '%x' % condition_open)
            deref = text[inner.start():inner.end()]
            condition = text[condition_open + 1:inner.start()] + local + \
                text[inner.end():condition_close]
            statement = text[start:end]
            statement = (statement[:condition_open + 1 - start] + condition
                         + statement[condition_close - start:])
            yield ('condition-temp@%d' % start,
                   replace(text, start, end,
                           '{ %s %s = %s; %s }' % (kind, local, deref, statement)))


def op_const_hoist(text, span):
    """Name a constant stored by a guard, so it can be materialised early."""
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        for start, end in statements(masked, opening, closing):
            match = re.match(r'\s*if\s*\(([^;{}]*)\)\s*([A-Za-z_]\w*(?:\s*\[[^\]]*\])?)\s*=\s*'
                             r'(0[xX][0-9a-fA-F]+|\d+)[uU]?;\s*$', masked[start:end])
            if not match:
                continue
            local = new_local(text, 'k_' + '%x' % start)
            value = match.group(3)
            body = text[start:end]
            changed = body.replace('%s = %s;' % (match.group(2), value),
                                   '%s = %s;' % (match.group(2), local), 1)
            yield ('const-hoist@%d' % start,
                   replace(text, start, end, 'undefined4 %s = %s;\n%s'
                           % (local, value, changed)))


NEW_OPERATORS = (op_temp_introduce, op_temp_inline, op_pointer_local, op_split_compound,
                 op_join_compound, op_decl_init_split, op_block_reorder, op_if_guarded,
                 op_cast_width, op_param_type, op_local_type, op_store_swap,
                 op_condition_temp, op_const_hoist, op_narrow_read,
                 op_value_cast)

OPERATORS = tuple(BASE_OPERATORS) + NEW_OPERATORS


def mutations(text, span):
    """Every single-operator mutant of one function, labelled by what changed."""
    seen = set()
    for operator in OPERATORS:
        try:
            produced = list(operator(text, span))
        except (IndexError, ValueError, KeyError):
            continue
        for label, mutant in produced:
            if mutant == text or mutant in seen:
                continue
            seen.add(mutant)
            yield label, mutant
