"""The source permutations that change expressions and data access.

How an expression is spelled, where a local lives, whether a member access is
repeated or held in a pointer, whether a mask is written as a complement or a
byte width, whether a bit test is a shift or a mask. Each operator yields
labelled variants of one function's text and never decides which is better; the
measured compiler does. The mutations are ordinary C by construction, compiled
into a candidate translation unit, never assembled.
"""

import re

from permute_text import blocks, mask, match_pair, replace, statements


def op_commute(text, span):
    masked = mask(text)
    operand = r'(?:[A-Za-z_]\w*(?:\s*(?:->|\.)\s*[A-Za-z_]\w*)*(?:\[[^\]]*\])?|0[xX][0-9a-fA-F]+[uUlL]*|\d+[uUlL]*)'
    pattern = re.compile(r'(?<![\w.])(%s)\s*(==|!=|<=|>=|<<|>>|\+|-|\*|&|\||\^|<|>)\s*(%s)(?![\w.])'
                         % (operand, operand))
    for match in pattern.finditer(masked, span[2], span[3]):
        left, operator, right = match.group(1), match.group(2), match.group(3)
        flipped = {'<': '>', '<=': '>=', '>': '<', '>=': '<=', '==': '==', '!=': '!='}.get(operator, operator)
        yield ('commute@%d' % match.start(), replace(text, match.start(), match.end(),
                                                     '%s %s %s' % (right, flipped, left)))


def op_declaration(text, span):
    masked = mask(text)
    declaration = re.compile(r'\s*((?:const\s+|static\s+|volatile\s+|unsigned\s+|signed\s+)*'
                             r'(?:long\s+long|long|short|char|int|float|double|void|struct\s+\w+|[A-Za-z_]\w*))'
                             r'\s+([A-Za-z_*][^;{}]+);')
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        found = statements(masked, opening, closing)
        for start, end in found:
            body = masked[start:end]
            match = declaration.fullmatch(body.rstrip())
            if not match or ',' not in match.group(2):
                continue
            kind, declarators = match.group(1), match.group(2)
            pieces = [piece.strip() for piece in declarators.split(',')]
            if len(pieces) < 2:
                continue
            split = ''.join('%s %s;\n' % (kind, piece) for piece in pieces)
            yield ('decl-split@%d' % start, replace(text, start, end, split))
        for (first_start, first_end), (second_start, second_end) in zip(found, found[1:]):
            one = declaration.fullmatch(masked[first_start:first_end].rstrip())
            two = declaration.fullmatch(masked[second_start:second_end].rstrip())
            if not one or not two or one.group(1) != two.group(1):
                continue
            if ',' in one.group(2) or ',' in two.group(2):
                continue
            yield ('decl-join@%d' % first_start,
                   replace(text, first_start, second_end, '%s %s, %s;\n'
                           % (one.group(1), one.group(2).strip(), two.group(2).strip())))


def op_declaration_move(text, span):
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        found = statements(masked, opening, closing)
        for index, (start, end) in enumerate(found):
            body = masked[start:end].strip()
            if not re.match(r'^(?:const\s+|static\s+|volatile\s+|unsigned\s+|signed\s+)*'
                            r'(?:long\s+long|long|short|char|int|float|double|void|struct\s+\w+|[A-Za-z_]\w*)\s',
                            body):
                continue
            if not re.match(r'^[^;{}]*;$', body) or '=' in body or '(' in body:
                continue
            if index == 0:
                continue
            statement_text = text[start:end].strip()
            yield ('decl-hoist@%d' % start,
                   text[:opening] + statement_text + '\n' + text[opening:start] + text[end:])


def op_local_inline(text, span):
    """Put a local's initializer back at its use sites and drop the declaration.

    A local that only carries a call result or a member address forces armcc to
    keep a register live across the call, which can be the one extra ``push``
    that separates a draft from its original. Substituting the expression where
    the local was used lets the compiler choose the register again. Both shapes
    the decompiler emits are handled: an initialized declaration, and a bare
    declaration followed by one assignment.
    """
    masked = mask(text)
    declaration = re.compile(r'\s*((?:const\s+|volatile\s+|unsigned\s+|signed\s+)*'
                             r'(?:long\s+long|long|short|char|int|float|double|void|struct\s+\w+|'
                             r'[A-Za-z_]\w*))\s+([A-Za-z_*][^;{}]*);')
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        found = statements(masked, opening, closing)
        for index, (start, end) in enumerate(found):
            match = declaration.fullmatch(masked[start:end])
            if not match or 'static' in match.group(1):
                continue
            declarator = match.group(2).strip()
            initialized = re.fullmatch(r'\**\s*([A-Za-z_]\w*)\s*=\s*(.+)', declarator)
            if initialized:
                name = initialized.group(1)
                value = initialized.group(2).strip()
                if not re.fullmatch(r'[A-Za-z_][\w\s()>,.\-\[\]]*', value):
                    continue
                body = text[opening:closing]
                remaining = body[:start - opening] + body[end - opening:]
                uses = len(re.findall(r'\b%s\b' % re.escape(name), mask(remaining)))
                if not 1 <= uses <= 4:
                    continue
                yield ('local-inline@%d' % start,
                       text[:opening] + re.sub(r'\b%s\b' % re.escape(name), '(%s)' % value,
                                               remaining) + text[closing:])
                continue
            bare = re.fullmatch(r'\**\s*([A-Za-z_]\w*)', declarator)
            if not bare:
                continue
            name = bare.group(1)
            assignment = re.compile(r'\s*%s\s*=\s*([^;]+);' % re.escape(name))
            for later, (other_start, other_end) in list(enumerate(found))[index + 1:]:
                written = assignment.fullmatch(masked[other_start:other_end])
                if not written:
                    continue
                value = text[other_start + written.start(1):other_start + written.end(1)].strip()
                if not re.fullmatch(r'[A-Za-z_][\w\s()>,.\-\[\]]*', value):
                    break
                body = text[opening:closing]
                first = (start - opening, end - opening)
                second = (other_start - opening, other_end - opening)
                remaining = body[:first[0]] + body[first[1]:second[0]] + body[second[1]:]
                uses = len(re.findall(r'\b%s\b' % re.escape(name), mask(remaining)))
                if not 1 <= uses <= 4:
                    break
                yield ('local-inline@%d' % start,
                       text[:opening] + re.sub(r'\b%s\b' % re.escape(name), '(%s)' % value,
                                               remaining) + text[closing:])
                break


def op_member_local(text, span):
    masked = mask(text)
    accesses = {}
    for match in re.finditer(r'([A-Za-z_]\w*)\s*(->|\.)\s*([A-Za-z_]\w*)', masked[span[2]:span[3]]):
        base = match.group(1)
        accesses.setdefault((base, match.group(2)), []).append(match.start() + span[2])
    for (base, arrow), sites in accesses.items():
        if len(sites) < 2:
            continue
        pointer = member_type(text, span, base, arrow)
        if pointer is None:
            continue
        local = 'p_' + base
        if re.search(r'\b%s\b' % local, masked[span[2]:span[3]]):
            continue
        declaration = '%s *%s = %s%s;\n' % (pointer, local, '' if arrow == '->' else '&', base)
        name = re.escape(base)
        mutated = re.sub(r'\b%s(\s*)->' % name, '%s\\1->' % local, text)
        mutated = re.sub(r'\b%s(\s*)\.' % name, '%s\\1->' % local, mutated)
        first = text.rfind('{', 0, sites[0])
        yield ('member-local@%d' % sites[0], replace(mutated, first + 1, first + 1, '\n' + declaration))


def member_type(text, span, base, arrow):
    """The type a local pointer to ``base`` would need, or None if unknown."""
    head = text[:span[2]]
    if arrow == '->':
        match = re.search(r'([A-Za-z_]\w*(?:\s+\w+)*)\s*\*\s*%s\b' % re.escape(base), head)
        return match.group(1).strip() if match else None
    match = re.search(r'([A-Za-z_]\w*(?:\s+\w+)*)\s+%s\b(?!\s*->)' % re.escape(base), head)
    return match.group(1).strip() if match else None


def op_sign(text, span):
    masked = mask(text)
    for match in re.finditer(r'\b(unsigned|signed)\b', masked[span[2]:span[3]]):
        start = match.start() + span[2]
        if masked[max(0, start - 12):start].count('(') > masked[max(0, start - 12):start].count(')'):
            continue
        replacement = 'signed' if match.group(1) == 'unsigned' else 'unsigned'
        yield ('sign@%d' % start, replace(text, start, match.end(), replacement))


def op_literal_sign(text, span):
    masked = mask(text)
    for match in re.finditer(r'\b(0[xX][0-9a-fA-F]+|\d+)([uU])\b', masked[span[2]:span[3]]):
        if any(word in masked[max(0, match.start() + span[2] - 6):match.start() + span[2]] for word in ('case',)):
            continue
        start, end = match.start() + span[2], match.end() + span[2]
        yield ('literal-sign@%d' % start, replace(text, start, end, match.group(1)))


def op_loop(text, span):
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        for start, end in statements(masked, opening, closing):
            body = masked[start:end]
            loop = re.match(r'\s*for\s*\(', body)
            if not loop:
                continue
            header_open = masked.index('(', start)
            header_close = match_pair(masked, header_open)
            parts = text[header_open + 1:header_close].split(';')
            if len(parts) != 3:
                continue
            initial, condition, step = (part.strip() for part in parts)
            loop_body = text[header_close + 1:end].strip()
            rewritten = '%s;\nwhile (%s) { %s %s; }\n' % (initial, condition,
                                                          loop_body.strip('{}').strip(), step)
            yield ('for-to-while@%d' % start, replace(text, start, end, rewritten))
    for match in re.finditer(r'(\+\+|--)(\s*)([A-Za-z_]\w*)|([A-Za-z_]\w*)(\s*)(\+\+|--)', masked[span[2]:span[3]]):
        start, end = match.start() + span[2], match.end() + span[2]
        token = text[start:end]
        if token.strip().startswith(('++', '--')):
            yield ('prefix-to-postfix@%d' % start, replace(text, start, end, token.strip()[2:] + token.strip()[:2]))
        else:
            yield ('postfix-to-prefix@%d' % start, replace(text, start, end, token.strip()[-2:] + token.strip()[:-2]))


def op_shift_mask(text, span):
    """Write a bit-field extraction as a mask shift or a shift mask.

    ``(value >> 7) & 1`` and ``(value & 0x80) >> 7`` compute the same bits but
    armcc emits a double shift for the first and one ``and`` plus one shift for
    the second, so which one the source wrote decides the code.
    """
    masked = mask(text)
    shifted_first = re.compile(r'\(\s*([A-Za-z_]\w*)\s*>>\s*(\d+)\s*\)\s*&\s*'
                               r'(0[xX][0-9a-fA-F]+|\d+)([uU]?)')
    masked_first = re.compile(r'\(\s*([A-Za-z_]\w*)\s*&\s*(0[xX][0-9a-fA-F]+|\d+)([uU]?)\s*\)'
                              r'\s*>>\s*(\d+)')
    for match in shifted_first.finditer(masked, span[2], span[3]):
        value, shift, bits = match.group(1), int(match.group(2)), int(match.group(3), 0)
        combined = bits << shift
        if combined > 0xffffffff:
            continue
        yield ('mask-shift@%d' % match.start(),
               replace(text, match.start(), match.end(),
                       '(%s & 0x%xu) >> %d' % (value, combined, shift)))
    for match in masked_first.finditer(masked, span[2], span[3]):
        value, bits, shift = match.group(1), int(match.group(2), 0), int(match.group(4))
        if bits & ((1 << shift) - 1):
            continue
        yield ('shift-mask@%d' % match.start(),
               replace(text, match.start(), match.end(),
                       '(%s >> %d) & 0x%xu' % (value, shift, bits >> shift)))


def op_mask_width(text, span):
    """Spell a cleared bit as the byte or halfword mask the original encoded."""
    masked = mask(text)
    for match in re.finditer(r'&\s*~\s*(0[xX][0-9a-fA-F]+|\d+)([uU]?)', masked[span[2]:span[3]]):
        value = int(match.group(1), 0)
        start, end = match.start() + span[2], match.end() + span[2]
        for width in (0xff, 0xffff):
            if value < width:
                yield ('mask-width@%d' % start,
                       replace(text, start, end, '& 0x%xu' % (width ^ value)))


def op_range(text, span):
    """Write a two-sided comparison as the one-comparison range idiom.

    ``x >= 1 && x <= 32`` compiles to a subtract, a compare and two conditional
    moves; ``(unsigned)(x - 1) < 32`` compiles to the same shape with the other
    compare bound, which is the difference this operator exists to try.
    """
    masked = mask(text)
    pattern = re.compile(r'\b([A-Za-z_]\w*)\s*>=\s*(0[xX][0-9a-fA-F]+|\d+)[uU]?\s*&&\s*'
                         r'\1\s*<=\s*(0[xX][0-9a-fA-F]+|\d+)[uU]?\b')
    for match in pattern.finditer(masked, span[2], span[3]):
        name = match.group(1)
        low, high = int(match.group(2), 0), int(match.group(3), 0)
        if high < low:
            continue
        yield ('range@%d' % match.start(),
               replace(text, match.start(), match.end(),
                       '(unsigned int)(%s - %du) < %du' % (name, low, high - low + 1)))
