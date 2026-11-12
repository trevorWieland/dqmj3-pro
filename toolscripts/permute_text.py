"""Read a function's text the way a permutation search needs to see it.

This is the lexical half of the source-permutation method: it finds a function
definition inside its translation unit, splits its blocks into statements,
summarises what each statement reads and writes so a reorder can be tried
safely, and gives the operators offsets they can rewrite. It is deliberately
textual. The corpus these functions come from is machine-shaped C, and every
rewrite is checked by compiling it, so a mis-parse costs one compile rather than
a wrong answer. Nothing here decides what a program means.
"""

import re


KEYWORDS = set('''auto break case char const continue default do double else enum extern
float for goto if inline int long register restrict return short signed sizeof static
struct switch typedef union unsigned void volatile while _Bool bool true false'''.split())
TYPES = set('''char short int long float double void unsigned signed struct union enum
const static volatile register'''.split())

OPERATOR_FLIP = {'==': '!=', '!=': '==', '<': '>=', '>=': '<', '>': '<=', '<=': '>',
                 '&&': '||', '||': '&&'}


def mask(text):
    """The same text with comments and literals blanked, offsets unchanged."""
    out = list(text)
    index, length = 0, len(text)
    while index < length:
        if text.startswith('//', index):
            end = text.find('\n', index)
            end = length if end < 0 else end
            for position in range(index, end):
                out[position] = ' '
            index = end
        elif text.startswith('/*', index):
            end = text.find('*/', index + 2)
            end = length if end < 0 else end + 2
            for position in range(index, end):
                out[position] = '\n' if text[position] == '\n' else ' '
            index = end
        elif text[index] in '"\'':
            quote, position = text[index], index + 1
            while position < length:
                if text[position] == '\\':
                    position += 2
                    continue
                if text[position] == quote:
                    position += 1
                    break
                position += 1
            for offset in range(index, position):
                out[offset] = ' '
            index = position
        else:
            index += 1
    return ''.join(out)


def match_pair(masked, opening):
    """The index of the closer that matches the opener at ``opening``."""
    pairs = {'(': ')', '[': ']', '{': '}'}
    opener = masked[opening]
    closer = pairs[opener]
    depth = 0
    for index in range(opening, len(masked)):
        if masked[index] == opener:
            depth += 1
        elif masked[index] == closer:
            depth -= 1
            if depth == 0:
                return index
    raise ValueError('unbalanced %s' % opener)


def function_span(text, name):
    """The definition of ``name`` in ``text``: (start, end, body start, body end)."""
    masked = mask(text)
    pattern = re.compile(r'\b' + re.escape(name) + r'\s*\(')
    for match in pattern.finditer(masked):
        before = text[:match.start()].rstrip()
        if before.endswith('.') or before.endswith('->'):
            continue
        line_start = text.rfind('\n', 0, match.start()) + 1
        cut = max(before.rfind('}'), before.rfind(';'))
        start = max(line_start, cut + 1)
        prefix = text[start:match.start()].strip()
        if not prefix or '=' in prefix or '#' in prefix:
            continue
        opening = masked.index('(', match.start())
        closing = match_pair(masked, opening)
        position = closing + 1
        while position < len(masked) and masked[position].isspace():
            position += 1
        if position >= len(masked) or masked[position] != '{':
            continue
        end = match_pair(masked, position)
        return start, end + 1, position + 1, end
    raise KeyError('no definition of ' + name)


def statements(masked, start, end):
    """The top-level statements of a block interior, as (start, end) offsets."""
    result, index, statement = [], start, start
    depth = 0
    while index < end:
        character = masked[index]
        if character in '([{':
            depth += 1
        elif character in ')]}':
            depth -= 1
            if depth == 0 and character == '}':
                word = first_word(masked, statement, index)
                following = following_word(masked, index + 1, end)
                if word == 'do' and following == 'while':
                    index += 1
                    continue
                if following == 'else':
                    index += 1
                    continue
                result.append((statement, index + 1))
                statement = skip_space(masked, index + 1, end)
        elif character == ';' and depth == 0:
            result.append((statement, index + 1))
            statement = skip_space(masked, index + 1, end)
            index = statement
            continue
        index += 1
    if masked[statement:end].strip():
        result.append((statement, end))
    return result


def skip_space(masked, index, end):
    while index < end and masked[index].isspace():
        index += 1
    return index


def first_word(masked, start, end):
    match = re.match(r'\s*([A-Za-z_]\w*)', masked[start:end])
    return match.group(1) if match else ''


def following_word(masked, index, end):
    match = re.match(r'\s*([A-Za-z_]\w*)', masked[index:end])
    return match.group(1) if match else ''


def blocks(masked, start, end):
    """Every brace-block interior inside a function body, without nesting order."""
    result, index = [], start
    while index < end:
        if masked[index] == '{':
            close = match_pair(masked, index)
            result.append((index + 1, close))
            index += 1
            continue
        index += 1
    return result


def identifiers(text):
    return {name for name in re.findall(r'[A-Za-z_]\w*', mask(text)) if name not in KEYWORDS}


def effects(statement):
    """A rough (reads, writes) summary of one statement.

    Over-approximating reads only makes the search more conservative about
    reordering, which is the safe direction: a missed reorder costs a candidate,
    a wrong one costs a compile.
    """
    clean = mask(statement)
    names = identifiers(statement)
    writes = set(re.findall(r'\b(\w+)\s*(?:\[[^\]]*\]\s*)?(?:<<=|>>=|\+=|-=|\*=|/=|%=|&=|\|=|\^=|=)(?!=)', clean))
    writes |= set(re.findall(r'(?:\+\+|--)\s*(\w+)', clean))
    writes |= set(re.findall(r'\b(\w+)\s*(?:\+\+|--)', clean))
    declaration = re.match(r'\s*(?:const\s+|static\s+|volatile\s+|unsigned\s+|signed\s+)*'
                           r'(?:long\s+long|long|short|char|int|float|double|void|struct\s+\w+|[A-Za-z_]\w*)\s+'
                           r'([A-Za-z_*][^;]*);\s*$', clean)
    if declaration:
        for declarator in declaration.group(1).split(','):
            name = re.search(r'(\w+)\s*(?:\[[^\]]*\])?\s*(?:=|$)', declarator)
            if name:
                writes.add(name.group(1))
    return names - writes, writes


def swappable(left, right):
    """Whether two adjacent statements can exchange places without interference."""
    left_reads, left_writes = effects(left)
    right_reads, right_writes = effects(right)
    return not (left_writes & (right_reads | right_writes)) and not (right_writes & left_reads)


def replace(text, start, end, value):
    return text[:start] + value + text[end:]


def negate(condition):
    """A condition's textual opposite, preferring an operator flip to a ``!``."""
    stripped = condition.strip()
    for operator, opposite in OPERATOR_FLIP.items():
        match = re.match(r'^(.*?)\s*' + re.escape(operator) + r'\s*(.*)$', stripped)
        if match and match.group(1).strip() and match.group(2).strip():
            return '%s %s %s' % (match.group(1), opposite, match.group(2))
    if stripped.startswith('!') and not stripped.startswith('!='):
        return stripped[1:].strip()
    return '!(%s)' % stripped


def ternary_sites(masked, start, end):
    """Offsets of top-level conditional operators in a statement range."""
    sites, index = [], start
    while index < end:
        if masked[index] == '?':
            sites.append(index)
        index += 1
    return sites


def conditional(text, masked, start, end):
    """Split one ternary: (condition, consequence, alternative, condition start)."""
    question = masked.find('?', start, end)
    if question < 0:
        return None
    depth = 0
    colon = -1
    for index in range(question + 1, end):
        if masked[index] == '?':
            depth += 1
        elif masked[index] == ':':
            if depth == 0:
                colon = index
                break
            depth -= 1
    if colon < 0:
        return None
    stop = masked.find(';', colon, end)
    stop = end if stop < 0 else stop
    head = text[start:question]
    boundary = 0
    for match in re.finditer(r'(?<![=!<>])=(?!=)', head):
        boundary = match.end()
    for token in ('return', '(', ',', '{'):
        position = head.rfind(token)
        if position >= 0:
            boundary = max(boundary, position + len(token))
    while start + boundary < question and text[start + boundary].isspace():
        boundary += 1
    return text[start + boundary:question], text[question + 1:colon], text[colon + 1:stop], start + boundary


def block_text(text, span):
    return text[span[0]:span[1]]


# --- transformations -------------------------------------------------------
#
# Each yields (label, mutated function text). They are deliberately textual:
# the language these functions are written in is a narrow, machine-shaped C and
# every mutation is checked by compiling it, so a rewrite that does not parse
# costs one compile rather than a wrong result.


