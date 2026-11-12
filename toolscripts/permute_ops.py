"""The source permutations that change control flow and condition shape.

Statement order, the ternary / guarded-assignment pair, if/else orientation, and
the spellings of a condition. Each operator yields labelled variants of one
function's text and never decides which is better; the measured compiler does.
The mutations are ordinary C by construction, compiled into a candidate
translation unit, never assembled.
"""

import re

from permute_text import (blocks, conditional, following_word, function_span, mask,
                          match_pair, negate, replace, skip_space, statements, swappable)


from permute_expr import (op_commute, op_declaration, op_declaration_move,
                          op_literal_sign, op_local_inline, op_loop, op_mask_width,
                          op_member_local, op_range, op_shift_mask, op_sign)


def op_statement_swap(text, span):
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        found = statements(masked, opening, closing)
        for left, right in zip(found, found[1:]):
            first, second = masked[left[0]:left[1]], masked[right[0]:right[1]]
            if first.lstrip().startswith('#') or second.lstrip().startswith('#'):
                continue
            if not swappable(first, second):
                continue
            gap = text[left[1]:right[0]]
            yield ('swap@%d' % left[0],
                   replace(text, left[0], right[1],
                           text[right[0]:right[1]] + gap + text[left[0]:left[1]]))


def op_ternary(text, span):
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        for start, end in statements(masked, opening, closing):
            split = conditional(text, masked, start, end)
            if split is None:
                continue
            condition, consequence, alternative, condition_start = split
            prefix = text[start:condition_start]
            swapped = '%s%s ? %s : %s;' % (prefix, condition.strip(), alternative.strip(),
                                            consequence.strip())
            yield ('ternary-swap@%d' % start, replace(text, start, end, swapped))
            negated = '%s%s ? %s : %s;' % (prefix, negate(condition), alternative.strip(),
                                            consequence.strip())
            yield ('ternary-negate@%d' % start, replace(text, start, end, negated))


def op_if_else(text, span):
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        for start, end in statements(masked, opening, closing):
            body = masked[start:end]
            if not re.match(r'\s*if\s*\(', body):
                continue
            condition_open = masked.index('(', start)
            condition_close = match_pair(masked, condition_open)
            condition = text[condition_open + 1:condition_close]
            then_start = skip_space(masked, condition_close + 1, end)
            then_end = statement_end(masked, then_start, end)
            else_start = skip_space(masked, then_end, end)
            if following_word(masked, then_end, end) != 'else':
                continue
            else_body_start = skip_space(masked, else_start + len('else'), end)
            else_end = statement_end(masked, else_body_start, end)
            then_text = text[then_start:then_end]
            else_text = text[else_body_start:else_end]
            yield ('if-swap@%d' % start,
                   replace(text, start, else_end, 'if (%s) %s else %s'
                           % (negate(condition), else_text.strip(), text[then_start:then_end].strip())))
            assignment = re.match(r'^([^=;]+?)\s*=\s*([^;]+);$', then_text.strip())
            mirror = re.match(r'^([^=;]+?)\s*=\s*([^;]+);$', else_text.strip())
            if assignment and mirror and assignment.group(1).strip() == mirror.group(1).strip():
                lvalue = assignment.group(1).strip()
                yield ('if-to-ternary@%d' % start,
                       replace(text, start, else_end, '%s = %s ? %s : %s;'
                               % (lvalue, condition, assignment.group(2).strip(),
                                  mirror.group(2).strip())))
                yield ('if-to-default@%d' % start,
                       replace(text, start, else_end, '%s = %s; if (%s) %s = %s;'
                               % (lvalue, mirror.group(2).strip(), condition, lvalue,
                                  assignment.group(2).strip())))
            returns = re.match(r'^return\s+([^;]+);$', then_text.strip())
            other = re.match(r'^return\s+([^;]+);$', else_text.strip())
            if returns and other:
                yield ('if-return-to-ternary@%d' % start,
                       replace(text, start, else_end, 'return %s ? %s : %s;'
                               % (condition, returns.group(1).strip(), other.group(1).strip())))


def return_type(text, span):
    """The declared return type of the function whose definition starts at 0."""
    signature = mask(text)[:span[2] - 1]
    name = re.search(r'\b[A-Za-z_]\w*\s*\([^()]*\)\s*$', signature)
    if name is None:
        return None
    kind = signature[:name.start()].strip()
    return kind or None


def op_ternary_to_if(text, span):
    """Give a conditional expression a named result and one conditional store.

    ``return c ? a : b;`` becomes a default assignment and one guarded
    assignment. armcc schedules the unconditional store before the compare and
    gives the guarded store the original's condition, which is a different
    instruction order from the two-conditional form a ternary otherwise gets.
    """
    kind = return_type(text, span)
    if kind is None:
        return
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        for start, end in statements(masked, opening, closing):
            split = conditional(text, masked, start, end)
            if split is None:
                continue
            condition, consequence, alternative, condition_start = split
            prefix = text[start:condition_start].strip()
            local = 'result_value'
            while re.search(r'\b%s\b' % local, masked[span[2]:span[3]]):
                local += '_'
            if prefix == 'return':
                yield ('ternary-if@%d' % start,
                       replace(text, start, end,
                               '{ %s %s = %s; if (%s) %s = %s; return %s; }'
                               % (kind, local, alternative.strip(), condition.strip(), local,
                                  consequence.strip(), local)))
                yield ('ternary-if@%d' % start,
                       replace(text, start, end,
                               '{ %s %s = %s; if (%s) %s = %s; return %s; }'
                               % (kind, local, consequence.strip(), negate(condition), local,
                                  alternative.strip(), local)))
            elif re.fullmatch(r'[A-Za-z_]\w*(?:\s*(?:->|\.)\s*[A-Za-z_]\w*)*',
                              prefix.rstrip('= ').strip()):
                lvalue = prefix.rstrip('= ').strip()
                yield ('ternary-if@%d' % start,
                       replace(text, start, end, '%s = %s; if (%s) %s = %s;'
                               % (lvalue, alternative.strip(), condition.strip(), lvalue,
                                  consequence.strip())))
                yield ('ternary-if@%d' % start,
                       replace(text, start, end, '%s = %s; if (%s) %s = %s;'
                               % (lvalue, consequence.strip(), negate(condition), lvalue,
                                  alternative.strip())))


def statement_end(masked, start, limit):
    """The end of the statement that starts at ``start`` (brace-aware)."""
    found = statements(masked, start, limit)
    return found[0][1] if found else limit


def op_if_return(text, span):
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        found = statements(masked, opening, closing)
        for index in range(len(found) - 1):
            start, end = found[index]
            body = masked[start:end]
            if not re.match(r'\s*if\s*\(', body):
                continue
            condition_open = masked.index('(', start)
            condition_close = match_pair(masked, condition_open)
            condition = text[condition_open + 1:condition_close]
            then_start = skip_space(masked, condition_close + 1, end)
            then_text = text[then_start:end].strip()
            if not then_text.startswith('return ') or not then_text.endswith(';'):
                continue
            second = text[found[index + 1][0]:found[index + 1][1]].strip()
            if not second.startswith('return ') or not second.endswith(';'):
                continue
            yield ('if-return@%d' % start,
                   replace(text, start, found[index + 1][1], 'return %s ? %s : %s'
                           % (condition, then_text[len('return '):-1].strip(), second[len('return '):-1].strip())))


def op_booleanize(text, span):
    """Try the three spellings of a 0/1 return: mask, comparison, ternary.

    A bit mask already produces 0 or 1, so armcc drops the normalisation when it
    can prove the mask; the original may still have one, which means its source
    asked for a value that is not already 0/1 -- a comparison or a conditional.
    """
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        for start, end in statements(masked, opening, closing):
            body = masked[start:end]
            match = re.fullmatch(r'\s*return\s+([^;]+);\s*', body)
            if not match:
                continue
            expression = text[start + match.start(1):start + match.end(1)].strip()
            comparison = re.fullmatch(r'\(?\s*(.+?)\s*\)?\s*!=\s*0[uU]?', expression)
            equality = re.fullmatch(r'\(?\s*(.+?)\s*\)?\s*==\s*0[uU]?', expression)
            if comparison:
                inner = comparison.group(1).strip()
                yield ('boolean-ternary@%d' % start,
                       replace(text, start, end, 'return (%s) ? 1u : 0u;' % inner))
            elif equality:
                inner = equality.group(1).strip()
                yield ('boolean-ternary@%d' % start,
                       replace(text, start, end, 'return (%s) ? 0u : 1u;' % inner))
            elif (not any(operator in expression for operator in ('==', '!=', '<', '>', '?'))
                  and any(operator in expression for operator in ('&', '|', '^', '>>', '<<'))):
                yield ('boolean-compare@%d' % start,
                       replace(text, start, end, 'return (%s) != 0;' % expression))
                yield ('boolean-ternary@%d' % start,
                       replace(text, start, end, 'return (%s) ? 1u : 0u;' % expression))


def op_condition_commute(text, span):
    """Swap the two sides of a comparison inside an if or while condition.

    A comparison of a local with a dereferenced field can compile to either
    operand order, and armcc keeps the source's order in the ``cmp``. The
    expression commuter only rewrites simple operands, so this operator handles
    the case where one side is a member access, a cast or a dereference.
    """
    masked = mask(text)
    flips = {'==': '==', '!=': '!=', '<': '>', '<=': '>=', '>': '<', '>=': '<='}
    for match in re.finditer(r'\b(if|while)\s*\(', masked[span[2]:span[3]]):
        opening = masked.index('(', match.start() + span[2])
        closing = match_pair(masked, opening)
        condition = masked[opening + 1:closing]
        depth, sites = 0, []
        index = 0
        while index < len(condition):
            character = condition[index]
            if character in '([':
                depth += 1
            elif character in ')]':
                depth -= 1
            elif depth == 0:
                for operator in ('==', '!=', '<=', '>='):
                    if condition.startswith(operator, index):
                        sites.append((index, operator))
                        index += len(operator) - 1
                        break
                else:
                    for operator in ('<', '>'):
                        if condition.startswith(operator, index):
                            sites.append((index, operator))
                            break
            index += 1
        if len(sites) != 1 or any(token in condition for token in ('&&', '||', '?')):
            continue
        position, operator = sites[0]
        raw = text[opening + 1:closing]
        left = raw[:position].strip()
        right = raw[position + len(operator):].strip()
        if not left or not right:
            continue
        yield ('condition-commute@%d' % (opening + 1),
               replace(text, opening + 1, closing, '%s %s %s' % (right, flips[operator], left)))


def op_condition(text, span):
    masked = mask(text)
    for match in re.finditer(r'\b(if|while)\s*\(', masked[span[2]:span[3]]):
        opening = masked.index('(', match.start() + span[2])
        closing = match_pair(masked, opening)
        condition = text[opening + 1:closing].strip()
        start, end = opening + 1, closing
        if condition.startswith('!'):
            yield ('condition-bare@%d' % start, replace(text, start, end, condition[1:].strip()))
        elif re.search(r'==\s*0\b', condition) or re.search(r'\b0\s*==', condition):
            yield ('condition-not@%d' % start, replace(text, start, end, negate(condition)))
        else:
            yield ('condition-explicit@%d' % start,
                   replace(text, start, end, '%s != 0' % condition))


OPERATORS = (op_ternary, op_ternary_to_if, op_shift_mask, op_mask_width, op_range,
             op_booleanize, op_if_else, op_if_return, op_condition, op_condition_commute,
             op_commute, op_declaration, op_declaration_move, op_local_inline,
             op_member_local, op_sign, op_literal_sign, op_loop, op_statement_swap)


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
