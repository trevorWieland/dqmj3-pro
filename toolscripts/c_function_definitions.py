import re

LITERALS = re.compile(r'//[^\n]*|/\*.*?\*/|"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'', re.S)
IDENTIFIER = re.compile(r'\b([A-Za-z_][A-Za-z0-9_]*)\s*\(')
CONTROL = {'if', 'for', 'while', 'switch', 'sizeof', '_Alignof', '_Atomic'}


def balanced(text, start, opening, closing):
    depth = 0
    for index in range(start, len(text)):
        if text[index] == opening:
            depth += 1
        elif text[index] == closing:
            depth -= 1
            if depth == 0:
                return index
    return None


def definitions(source):
    text = LITERALS.sub(lambda match: re.sub(r'[^\n]', ' ', match[0]), source)
    lines, continuation = [], False
    for line in text.splitlines(keepends=True):
        directive = continuation or line.lstrip().startswith('#')
        lines.append(re.sub(r'[^\n]', ' ', line) if directive else line)
        continuation = directive and line.rstrip('\r\n').endswith('\\')
    text = ''.join(lines)
    found, cursor = set(), 0
    while match := IDENTIFIER.search(text, cursor):
        name = match[1]
        opening = text.find('(', match.start())
        closing = balanced(text, opening, '(', ')')
        if closing is None:
            break
        after = closing + 1
        while after < len(text) and text[after].isspace():
            after += 1
        if name not in CONTROL and after < len(text) and text[after] == '{':
            end = balanced(text, after, '{', '}')
            if end is None:
                break
            found.add(name)
            cursor = end + 1
        else:
            cursor = closing + 1
    return found


def has_definition(source, name):
    return name in definitions(source)
