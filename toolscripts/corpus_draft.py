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

FUNCTION = re.compile(r'\bFUN_([0-9a-f]{8})\b')
THUNK = re.compile(r'\bthunk_FUN_([0-9a-f]{8})\b')
DATA = re.compile(r'\b(s_[0-9a-zA-Z_]*|[A-Za-z]*UNK_[0-9a-zA-Z_]*|PTR_[0-9a-zA-Z_]*|'
                  r'(?:DAT|_DAT)_[0-9a-f]{8})\b')
DAT_ADDRESS = re.compile(r'^_?DAT_([0-9a-f]{8})$')
STRING = re.compile(r'"(?:[^"\\\n]|\\.)*"')

# Types are declared once, in this header, so every draft unit agrees on them.
SHIM = r'''/* Ghidra decompiler types, spelled so the measured compiler accepts them.
 *
 * The decompiler names a value by its width when it cannot recover a type:
 * undefined1 is one byte, undefined4 is four. They are aliases for the C types
 * of that width, so declaring them changes spelling only, never layout or
 * arithmetic. `code` is a callable with unspecified arguments, which is what
 * Ghidra's `code *` means at every indirect call site in this corpus.
 */
#ifndef DQMJ3_DRAFT_DECOMPILED_H
#define DQMJ3_DRAFT_DECOMPILED_H

typedef unsigned char      undefined;
typedef unsigned char      undefined1;
typedef unsigned short     undefined2;
typedef unsigned int       undefined3;
typedef unsigned int       undefined4;
typedef unsigned int       undefined5;
typedef unsigned int       undefined6;
typedef unsigned int       undefined7;
typedef unsigned long long undefined8;
typedef unsigned char      uchar;
typedef unsigned short     ushort;
typedef unsigned int       uint;
typedef unsigned char      byte;
typedef unsigned long long ulonglong;
typedef long long          longlong;
typedef unsigned short     wchar16;
typedef unsigned int       wchar32;
typedef int                code();

/* The decompiler uses `bool` for a value it proved to be 0 or 1. */
typedef _Bool bool;
#define true 1
#define false 0

/* The decompiler emits these when it cannot follow control flow. */
extern void halt_baddata(void);
extern void halt_badinst(void);

/* Bit-field extraction, concatenation and carry helpers the decompiler emits
 * for sub-word and 64-bit operations. Each is a pure spelling of an operation
 * the compiler already performs; none changes a value. */
#define CONCAT44(hi, lo) (((unsigned long long)(unsigned int)(hi) << 32) | (unsigned int)(lo))
#define CONCAT31(a, b)   (((unsigned int)(unsigned char)(a) << 24) | ((unsigned int)(b) & 0xffffff))
#define CONCAT22(a, b)   (((unsigned int)(unsigned short)(a) << 16) | (unsigned int)(unsigned short)(b))
#define CONCAT13(a, b)   (((unsigned int)(unsigned char)(a) << 24) | ((unsigned int)(b) & 0xffffff))
#define CONCAT11(a, b)   (((unsigned int)(unsigned char)(a) << 8) | (unsigned int)(unsigned char)(b))
#define SUB41(v, n)      ((unsigned char)((unsigned int)(v) >> (8 * (n))))
#define SUB42(v, n)      ((unsigned short)((unsigned int)(v) >> (8 * (n))))
#define SUB81(v, n)      ((unsigned char)((unsigned long long)(v) >> (8 * (n))))
#define ZEXT14(v)        ((unsigned short)(unsigned char)(v))
#define ZEXT24(v)        ((unsigned int)(unsigned short)(v))
#define ZEXT12(v)        ((unsigned short)(unsigned char)(v))
#define SEXT14(v)        ((short)(signed char)(v))
#define SEXT24(v)        ((int)(short)(v))
#define SEXT12(v)        ((short)(signed char)(v))
#define SEXT34(v)        ((long long)(int)(v))
#define CARRY4(a, b)     ((unsigned int)((unsigned long long)(a) + (unsigned long long)(b) > 0xffffffffULL))
#define SBORROW4(a, b)   ((int)((long long)(a) - (long long)(b) < -2147483648LL))

/* A software interrupt: Ghidra prints the ARM `swi` as a call, and names the
 * supervisor-call form the same way. Both are the one instruction. */
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
#define software_interrupt(n) __svc(n)
#define SupervisorCall(n)     __svc(n)
#else
static void software_interrupt(int number) { (void)number; }
#endif

#endif
'''


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


def rewrite(text, strings=None):
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
    return text


def dependencies(text, address):
    """What a function mentions: callees and data it does not define.

    The same function is scanned before and after the rename, because the corpus
    names a callee ``FUN_<address>`` and the draft calls it ``fn_<address>``.
    """
    callees = {name for name in re.findall(r'\b(?:thunk_)?(?:FUN|fn)_([0-9a-f]{8})\b', text)
               if name != address}
    data = sorted(set(DATA.findall(text)))
    return sorted(callees), data


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
        else:
            row['address'] += 1
    return kinds


