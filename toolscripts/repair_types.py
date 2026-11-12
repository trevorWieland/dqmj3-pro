"""Type re-inference as a source rewrite: cast, parameter and local types.

The decompiler names a value by width when it cannot recover a type, so the
draft says ``*(undefined4 *)`` where the original may have loaded a byte, and
``int`` where the original compared unsigned. These operators try the adjacent
spellings at one site each. They are not declarations of truth: a candidate is
kept only when the measured compiler places bytes equal to the original, so a
wrong type loses a compile and never becomes source.

Two shapes are singled out because they are the commonest measured difference in
the 128-511 byte band. ``narrow-read`` rewrites a field read spelled as an
``int`` array slot into the cast dereference its store target already uses, which
changes a word load into the byte or halfword load the original has.
``value-cast`` changes the signedness of a value cast, which selects ``ldrsb``
against ``ldrb`` and the signed against the unsigned branch.
"""

import re

from permute_text import blocks, mask, match_pair, replace, statements


def declaration(body):
    """Whether a statement text begins a declaration."""
    return bool(re.match(
        r'\s*(?:(?:const|static|volatile|unsigned|signed)\s+)*'
        r'(?:struct\s+\w+|long\s+long|long|short|char|int|float|double|void|'
        r'[A-Za-z_]\w*)\s+[A-Za-z_*]', mask(body)))


CAST_WIDTH = {
    'undefined4': ('undefined1', 'undefined2', 'int', 'uint'),
    'undefined1': ('undefined4', 'undefined2', 'char', 'uchar'),
    'undefined2': ('undefined4', 'undefined1', 'short', 'ushort'),
    'int': ('uint', 'undefined4', 'undefined1', 'short'),
    'uint': ('int', 'undefined4', 'undefined1', 'ushort'),
    'char': ('uchar', 'undefined1', 'short'),
    'uchar': ('char', 'undefined1', 'ushort'),
    'short': ('ushort', 'int', 'undefined2'),
    'ushort': ('short', 'uint', 'undefined2'),
    'byte': ('undefined4', 'undefined1', 'ushort'),
    'ushort3': ('undefined4',),
}

CAST_SITE = re.compile(r'\(\s*([A-Za-z_]\w*)\s*\*\s*\)')


def op_cast_width(text, span):
    """Change one pointer cast's pointee type, which changes load width/sign.

    A decompiled ``*(undefined4 *)`` may stand for a byte, a halfword or a
    signed word; the decompiler had no type and chose four unsigned bytes. The
    original's ``ldrb``, ``ldrsb`` or ``ldrh`` says which. Trying the adjacent
    spellings at each cast site is type re-inference by measurement: a candidate
    is only kept when every byte, including the load width, agrees.
    """
    masked = mask(text)
    for match in CAST_SITE.finditer(masked, span[2], span[3]):
        kind = match.group(1)
        for replacement in CAST_WIDTH.get(kind, ()):
            yield ('cast-size@%d' % match.start(),
                   replace(text, match.start(), match.end(),
                           '(%s *)' % replacement))


TYPE_VARIANTS = {
    'undefined4': ('int', 'uint'),
    'int': ('uint', 'undefined4'),
    'uint': ('int', 'undefined4'),
    'undefined1': ('char', 'uchar'),
    'char': ('uchar', 'undefined1'),
    'uchar': ('char', 'undefined1'),
    'undefined2': ('short', 'ushort'),
    'short': ('ushort', 'undefined2'),
    'ushort': ('short', 'undefined2'),
    'byte': ('undefined1', 'uchar'),
}

VALUE_CAST = re.compile(r'\(\s*([A-Za-z_]\w*)\s*\)\s*')


def op_value_cast(text, span):
    """Change a value cast's signedness, which selects ldrsb/ldrb and ble/bhi.

    The decompiler writes ``(char)x`` for a byte it cannot type. Reading it as
    unsigned changes the extension armcc emits and the branch it takes after the
    comparison, which is often the only difference left in a small function.
    """
    masked = mask(text)
    for match in VALUE_CAST.finditer(masked, span[2], span[3]):
        kind = match.group(1)
        if not TYPE_VARIANTS.get(kind) or kind in ('void', 'code', 'struct'):
            continue
        follower = masked[match.end():match.end() + 3].lstrip()
        if follower.startswith('*') or follower.startswith('='):
            continue
        for replacement in TYPE_VARIANTS[kind]:
            yield ('value-cast@%d' % match.start(),
                   replace(text, match.start(), match.end(),
                           '(%s)' % replacement))


NARROW_STORE = re.compile(
    r'\*\s*\(\s*([A-Za-z_]\w*)\s*\*\s*\)\s*'
    r'\(\s*([A-Za-z_]\w*)\s*([+\-])\s*(0[xX][0-9a-fA-F]+|\d+)\s*\)\s*=')
CAST_INDEX = re.compile(
    r'\(\s*([A-Za-z_]\w*)\s*\)\s*([A-Za-z_]\w*)\s*'
    r'\[\s*(0[xX][0-9a-fA-F]+|\d+)\s*\]')


def op_narrow_read(text, span):
    """Read a field at the width it is stored, not through an int array slot.

    Ghidra often spells a narrow field as ``param_1[100]`` when ``param_1`` is an
    ``int *``: the load is a word, the store target is a byte, and the source
    truncates after loading. The original loaded the byte. Rewriting the read as
    the same cast dereference the store uses changes the load width and nothing
    else, which is exactly the ``ldr`` vs ``ldrb`` difference the score reports.
    """
    masked = mask(text)
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        for start, end in statements(masked, opening, closing):
            statement = masked[start:end]
            store = NARROW_STORE.search(statement)
            if store is None:
                continue
            kind, base = store.group(1), store.group(2)
            direction, offset = store.group(3), store.group(4)
            target = '*(%s *)(%s %s %s)' % (kind, base, direction, offset)
            expected = int(offset, 0) * 4
            if direction == '-':
                expected = -expected
            for read in CAST_INDEX.finditer(statement):
                if read.group(2) != base:
                    continue
                if int(read.group(3), 0) not in (expected, expected // 4):
                    continue
                yield ('narrow-read@%d' % (start + read.start()),
                       replace(text, start + read.start(), start + read.end(), target))
            # The same read without a cast: the store's own width is the type.
            for read in re.finditer(r'\b%s\s*\[\s*(0[xX][0-9a-fA-F]+|\d+)\s*\]'
                                    % re.escape(base), statement):
                if int(read.group(1), 0) not in (expected, expected // 4):
                    continue
                if statement[max(0, read.start() - 1):read.start()] == ')':
                    continue
                yield ('narrow-read@%d' % (start + read.start()),
                       replace(text, start + read.start(), start + read.end(), target))


PARAMETER = re.compile(r'\b([A-Za-z_]\w*)\b')


def op_param_type(text, span):
    """Change one parameter's declared signedness or width."""
    masked = mask(text)
    signature = masked[:span[2] - 1]
    opening = signature.rfind('(')
    if opening < 0:
        return
    closing = match_pair(masked, opening)
    for match in PARAMETER.finditer(masked, opening + 1, closing):
        kind = match.group(1)
        for replacement in TYPE_VARIANTS.get(kind, ()):
            yield ('param-type@%d' % match.start(),
                   replace(text, match.start(), match.end(), replacement))


def op_local_type(text, span):
    """Change one local declaration's signedness."""
    masked = mask(text)
    pattern = re.compile(r'\b([A-Za-z_]\w*)\b(\s+[A-Za-z_*])')
    for opening, closing in blocks(masked, span[2] - 1, span[3]):
        for start, end in statements(masked, opening, closing):
            if not declaration(masked[start:end]):
                continue
            for match in pattern.finditer(masked, start, end):
                kind = match.group(1)
                for replacement in TYPE_VARIANTS.get(kind, ()):
                    yield ('local-type@%d' % match.start(),
                           replace(text, match.start(), match.end(1), replacement))


NEW_OPERATORS = (op_cast_width, op_param_type, op_local_type, op_narrow_read,
                 op_value_cast)
