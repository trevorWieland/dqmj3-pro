"""Turn raw Ghidra corpus C into compilable translation units, and measure them.

The corpus under ``work/corpus`` is unmodified decompiler output: it uses Ghidra
pseudo-types (``undefined4``), decompiler intrinsics (``CONCAT44``), function
names that do not exist in the split (``FUN_00100000``) and data symbols for
which no declaration exists (``DAT_0085abbc``). This module performs exactly the
mechanical rewrite that makes such a function compilable without changing what
it computes:

* ``FUN_<address>``  -> ``fn_<address>``, the split's canonical name, and the
  same rename on every call so the linker resolves calls against the split;
* ``DAT_<address>`` and string literals become references to absolute data
  symbols whose name carries the address they must have (see
  ``toolscripts/data_symbols.py``);
* every other name the function mentions but does not define -- a callee or a
  data object -- gets a declaration in the unit's generated header.

Nothing here fabricates a byte: a draft is kept only when the compiler's own
output equals the original extent, which ``run.py`` decides by comparing the
placed image with the user's code image.
"""

import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CORPUS = ROOT / 'work/corpus'
sys.path.insert(0, str(ROOT / 'toolscripts'))

import elf_objects                      # noqa: E402
import split as split_module            # noqa: E402
from corpus_draft_shim import SHIM       # noqa: E402,F401  every unit includes it

FUNCTION = re.compile(r'\bFUN_([0-9a-f]{8})\b')
THUNK = re.compile(r'\bthunk_FUN_([0-9a-f]{8})\b')
DATA = re.compile(r'\b(s_[0-9a-zA-Z_]*|[A-Za-z]*UNK_[0-9a-zA-Z_]*|PTR_[0-9a-zA-Z_]*|'
                  r'(?:DAT|_DAT)_[0-9a-f]{8})\b')
DAT_ADDRESS = re.compile(r'^_?DAT_([0-9a-f]{8})$')
STRING = re.compile(r'"(?:[^"\\\n]|\\.)*"')

# Types are declared once, in this header, so every draft unit agrees on them.


def load_split():
    return split_module.load(ROOT / 'config/symbols.txt', 0x00100000, 0x7b9810 - 0x00100000)


TEXTS = None
TEXT_CACHE = ROOT / 'work/drafter/corpus-text.json'


def corpus_text(address):
    """One decompiled function, from the single-file text cache when present.

    The corpus is 26,572 small files. Reading them one at a time costs more than
    every other step of the pipeline put together on this machine, so the
    drafting run reads the concatenated cache once instead.
    """
    global TEXTS
    if TEXTS is None:
        if TEXT_CACHE.is_file():
            TEXTS = json.loads(TEXT_CACHE.read_text(encoding='utf-8'))
        else:
            TEXTS = {}
    if address in TEXTS:
        return TEXTS[address]
    path = CORPUS / 'c' / (address + '.c')
    return path.read_text(encoding='utf-8', errors='replace') if path.is_file() else None


def corpus_json(address):
    path = CORPUS / 'functions' / (address + '.json')
    return json.loads(path.read_text(encoding='utf-8')) if path.is_file() else None


def string_addresses(record):
    """The exact image addresses the original used for each string literal.

    Ghidra records every reference it followed, including a string it passed as
    a parameter: the ``excerpt`` is the literal and ``to`` is its address. That
    is the mapping a draft needs to turn ``"text"`` back into a reference to the
    original bytes instead of embedding a second copy.
    """
    found = {}
    for reference in record.get('references', []):
        excerpt = reference.get('excerpt')
        if not excerpt or not excerpt.startswith('"') or reference['access'] not in ('PARAM', 'READ'):
            continue
        try:
            text = json.loads(excerpt)
        except (ValueError, TypeError):
            continue
        found.setdefault(text, []).append(int(reference['to'], 16))
    return {text: sorted(set(addresses)) for text, addresses in found.items()}


def data_usage(text):
    """How each named data symbol is used, which decides its declaration type.

    A decompiled ``DAT_<address>`` is the *address* of the object: pointer
    arithmetic on it is unscaled and the code often casts it to a pointer type.
    A few globals are written directly (``DAT_x = 0``), and those must be
    declared as an object of the stored width. The two uses need different C
    declarations, so the usage across the whole corpus picks one.
    """
    return {
        'lvalue': bool(re.search(r'\b_?DAT_[0-9a-f]{8}\s*(?:[+\-*/%&|^]?=|[-+]{2})', text)),
        'address': bool(re.search(r'&\s*_?DAT_[0-9a-f]{8}', text)),
        'arithmetic': bool(re.search(r'_?DAT_[0-9a-f]{8}\s*[+\-]|'
                                     r'\*[^=]*\b_?DAT_[0-9a-f]{8}\b|\b_?DAT_[0-9a-f]{8}\s*\[',
                                     text)),
    }


FIELD = re.compile(r'\b([A-Za-z_]\w*)\._(\d+)_(\d+)_\b')
FIELD_ASSIGN = re.compile(r'^([ \t]*)([A-Za-z_]\w*)\._(\d+)_(\d+)_[ \t]*=[ \t]*(.+);[ \t]*$', re.M)
ADDRESS = re.compile(r'&(_?DAT_[0-9a-f]{8})\b')
SVC = re.compile(r'\b(?:software_interrupt|SupervisorCall)\(\s*(0x[0-9a-fA-F]+|[0-9]+)\s*\)')
SVC_NAME = re.compile(r'\bsvc_0x[0-9a-f]+\b')


def svc_helpers(text):
    """Static helpers that stand in for the ARM ``svc`` instruction.

    Ghidra prints the supervisor call as a function call. armcc 4.1 has no
    intrinsic for it -- ``__svc`` is a function qualifier, not a call, and the
    embedded assembler does not substitute a macro argument -- but the embedded
    assembler does take a literal, and a static function holding only that
    instruction is inlined away at -O3. Each distinct number in a unit therefore
    gets one helper, and the call site becomes a call that compiles to the one
    instruction the original has.

    The assembler is guarded because the same header is compiled by clang for the
    source census, where the body is simply empty; the census checks that the
    source compiles, not what it computes.
    """
    lines = []
    for name in sorted(set(SVC_NAME.findall(text))):
        lines += ['static void %s(void)' % name, '{',
                  '#if defined(__CC_ARM) || defined(__ARMCC_VERSION)',
                  '  __asm { svc #%s }' % name[len('svc_'):], '#endif', '}', '']
    return '\n'.join(lines)


def field_shape(offset, size):
    """The cast, shift, mask and full width of one decompiler byte-field."""
    wide = offset + size > 4
    cast = 'unsigned long long' if wide else 'unsigned int'
    mask = (1 << (8 * size)) - 1
    return cast, 8 * offset, mask, 8 if wide else 4


def field_value(name, offset, size):
    """One decompiler byte-field read, spelled as the shift and mask it is.

    Ghidra prints ``x._1_3_`` for the three bytes of ``x`` starting at byte one.
    It is a bit-field read of a scalar the decompiler could not type; the
    spelling below shifts and masks exactly those bytes, so the value is the
    same and the compiler sees an ordinary integer expression.
    """
    cast, shift, mask, width = field_shape(offset, size)
    value = '((%s)(%s)' % (cast, name)
    if shift:
        value += ' >> %d' % shift
    value += ')'
    if size < width:
        value += ' & 0x%x' % mask
    return value


def field_assignment(match):
    """One decompiler byte-field write, spelled as the read-modify-write it is.

    ``x._1_3_ = v`` sets the three bytes of ``x`` that start at byte one and
    leaves the rest alone, which is a mask and an or in C. Writing the same
    operation out keeps the store width out of the draft's hands: the compiler
    emits the same bytes whichever way it chooses to reach the field.
    """
    indent, name, offset, size, value = match.group(1), match.group(2), \
        int(match.group(3)), int(match.group(4)), match.group(5)
    cast, shift, mask, width = field_shape(offset, size)
    cleared = '~((%s)0x%x << %d)' % (cast, mask, shift)
    placed = '((%s)(%s) & 0x%x)' % (cast, value, mask)
    if shift:
        placed = '(%s << %d)' % (placed, shift)
    return '%s%s = (%s & %s) | %s;' % (indent, name, name, cleared, placed)


def rewrite(text, strings=None, data_types=None):
    """Rename and de-literal one decompiled function so it can be compiled."""
    text = THUNK.sub(lambda m: 'thunk_fn_' + m.group(1), text)
    text = FUNCTION.sub(lambda m: 'fn_' + m.group(1), text)
    if strings:
        def replace(match):
            literal = match.group(0)
            try:
                value = json.loads(literal)
            except ValueError:
                return literal
            addresses = strings.get(value)
            if not addresses:
                return literal
            return '(char *)&DAT_%08x' % addresses[0]
        text = STRING.sub(replace, text)
    # The decompiler writes `&DAT_x` for the address of a data object. Declared
    # as an array -- which is how a name used for its address is declared -- the
    # same address is the array itself, and `&` would make it a pointer to the
    # array, a type nothing here accepts.
    if data_types:
        def dereference(match):
            name = match.group(1)
            return name if data_types.get(name, '').endswith('[]') else match.group(0)
        text = ADDRESS.sub(dereference, text)
    text = FIELD_ASSIGN.sub(field_assignment, text)
    text = FIELD.sub(lambda m: field_value(m.group(1), int(m.group(2)), int(m.group(3))), text)
    text = SVC.sub(lambda m: 'svc_%#x()' % int(m.group(1), 0), text)
    return text


CACHE = ROOT / 'work/drafter/features.json'
HARD_INDIRECT = re.compile(r'\(\s*\*\s*(?:\(\s*)?code\s*\*\*?')
LABEL = re.compile(r'\bLAB_[0-9a-f]{4,8}\b')


def band(size):
    return '<32' if size < 32 else '32-127' if size < 128 else '128-511' if size < 512 else '>=512'


def measured_names():
    """Functions the current source already defines, so drafts never duplicate."""
    report = ROOT / 'build/update-content0/report.json'
    if not report.is_file():
        raise SystemExit('run build.py first: ' + str(report))
    document = json.loads(report.read_text(encoding='utf-8'))
    names = set()
    for unit in document['units']:
        if unit['name'] == 'src/native':
            continue  # the retained unit lists every unimplemented original function
        for function in unit.get('functions', []):
            names.add(function['name'])
    return names


def data_names(record):
    """Every data symbol a draft of this function will mention.

    The corpus's own ``DAT_`` references, plus one symbol per string literal when
    the rewrite is given the literal's original address. Both are declared the
    same way and both must resolve for the draft to be measurable.
    """
    return sorted(set(record.get('data', [])) | set(record.get('stringData', [])))


def prep():
    """One pass over the corpus: the facts that decide whether a draft can match."""
    split = load_split()
    measured = measured_names()
    records, usage, texts, returns = {}, {}, {}, {}
    for path in sorted((CORPUS / 'c').glob('*.c')):
        address = path.stem
        text = path.read_text(encoding='utf-8', errors='replace')
        texts[address] = text
        returns[address] = return_type(text)
        symbol = split.by_name.get('fn_' + address)
        if symbol is None or symbol.name in measured or symbol.extras:
            continue
        callees, data = dependencies(text, address)
        for name, kinds in usage_kinds(text).items():
            row = usage.setdefault(name, {'pointer': 0, 'lvalue': 0, 'address': 0})
            for key in row:
                row[key] += kinds[key]
        # A literal is only rewritable to its original address when the function
        # carries no other reason to be excluded, but the map costs nothing here
        # and keeps the rewrite decision in one place.
        strings = string_addresses(corpus_json(address) or {}) if '"' in text else {}
        string_data = sorted({'DAT_%08x' % addresses[0] for addresses in strings.values()})
        for name in string_data:
            usage.setdefault(name, {'pointer': 0, 'lvalue': 0, 'address': 1})
        records[address] = {
            'address': address, 'name': symbol.name, 'size': symbol.size,
            'band': band(symbol.size), 'mode': symbol.mode,
            'warned': '/* WARNING' in text,
            'indirect': bool(HARD_INDIRECT.search(text)),
            'labels': len(LABEL.findall(text)),
            'switch': 'switch (' in text or 'switch(' in text,
            'goto': bool(re.search(r'\bgoto\b', text)),
            'hasStrings': '"' in text,
            'svc': bool(SVC.search(text)),
            'callees': callees, 'data': data,
            'strings': strings, 'stringData': string_data,
            'lines': text.count('\n'),
        }
    # One file of corpus text. The corpus is 26,572 small files and reading them
    # one at a time costs more than the rest of a drafting run put together, so
    # the pass that is already reading them writes the cache every later stage
    # reads. It holds decompiler output only, and lives under the gitignored
    # work/ tree.
    TEXT_CACHE.parent.mkdir(parents=True, exist_ok=True)
    TEXT_CACHE.write_text(json.dumps(texts), encoding='utf-8')
    # A declaration type per data symbol, decided by how the corpus uses it.
    types = {}
    for name, kinds in usage.items():
        if kinds['pointer']:
            types[name] = 'unsigned char *'
        elif kinds['lvalue']:
            types[name] = 'undefined4'
        else:
            types[name] = 'unsigned char[]'
    CACHE.write_text(json.dumps({'functions': records, 'dataTypes': types,
                                 'returnTypes': returns}, indent=0) + '\n',
                     encoding='utf-8')
    shapes = {}
    for record in records.values():
        key = ('warned' if record['warned'] else 'indirect' if record['indirect']
               else 'data' if record['data'] else 'string' if record['hasStrings']
               else 'control' if record['labels'] or record['switch'] or record['goto']
               else 'clean')
        row = shapes.setdefault(key, {'count': 0, 'bytes': 0})
        row['count'] += 1
        row['bytes'] += record['size']
        row[record['band']] = row.get(record['band'], 0) + 1
    print(json.dumps({'functions': len(records), 'dataSymbols': len(types),
                      'shapes': shapes}, indent=2))
    return 0


def dependencies(text, address):
    """What a function mentions: callees and data it does not define.

    The same function is scanned before and after the rename, because the corpus
    names a callee ``FUN_<address>`` and the draft calls it ``fn_<address>``.
    """
    callees = {name for name in re.findall(r'\b(?:thunk_)?(?:FUN|fn)_([0-9a-f]{8})\b', text)
               if name != address}
    data = sorted(set(DATA.findall(text)))
    return sorted(callees), data


DEFINITION = re.compile(r'^([A-Za-z_][A-Za-z0-9_ \t\*]*?)\b(?:thunk_)?FUN_([0-9a-f]{8})\s*\(', re.M)


def return_type(text):
    """The return type the decompiler spelled for a function.

    A declaration of a callee must agree with the callee's own definition on the
    return type, or the compiler rejects the defining unit: ``extern
    undefined4 fn_x();`` followed by ``void fn_x(int p)`` is a conflicting
    declaration, which armcc reports as error #147. The parameter list stays
    empty, which is compatible with every definition and accepts the argument
    count each call site uses; only the return type has to be recovered, and the
    corpus states it on the definition's own first line.
    """
    match = DEFINITION.search(text)
    return ' '.join(match.group(1).split()) if match else 'undefined4'


def usage_kinds(text):
    """Classify how each data symbol in one function is used, in one pass.

    Ghidra writes three different things with the same ``DAT_<address>`` name,
    and each needs a different C declaration to keep the code the compiler emits
    identical to the original:

    * ``*DAT_x`` reads through a pointer the object holds, so the name is a
      pointer variable (``extern unsigned char *DAT_x;``);
    * ``DAT_x = v`` writes the object itself, so the name is a scalar
      (``extern undefined4 DAT_x;``);
    * ``&DAT_x`` and ``DAT_x + n`` use the object's address, so the name is an
      array, which decays to that address with no scaling
      (``extern unsigned char DAT_x[];``).

    The declaration a draft emits is chosen from the usage across the corpus,
    because a symbol is used consistently and a unit that declares it wrongly
    would not compile at all.
    """
    kinds = {}
    for match in DATA.finditer(text):
        name = match.group(0)
        before = text[match.start() - 1] if match.start() else ' '
        after = text[match.end():match.end() + 3].lstrip(' ')
        row = kinds.setdefault(name, {'pointer': 0, 'lvalue': 0, 'address': 0})
        if before == '&':
            row['address'] += 1
            continue
        if before == '*' and text[max(0, match.start() - 2):match.start()] != '(*':
            row['pointer'] += 1
            continue
        if re.match(r'(?:[+\-*/%&|^]?=|[-+]{2})', after):
            row['lvalue'] += 1
            continue
        # A name on the right of a binary operator is read as an integer: the
        # decompiler writes binary operators with spaces and the unary address-of
        # without one, so a trailing operator in the prefix is the only case that
        # needs a value type rather than an address.
        if text[:match.start()].rstrip().endswith(('&', '|', '^', '*', '/', '%',
                                                   '==', '!=', '<=', '>=')):
            row['lvalue'] += 1
        else:
            row['address'] += 1
    return kinds



