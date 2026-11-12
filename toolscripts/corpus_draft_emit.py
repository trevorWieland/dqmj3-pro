"""Emit one draft translation unit and the declarations it needs.

The contract a draft needs is per translation unit: a callee that is
defined in the unit is declared with the return type its definition
states, while the same function called from another unit is declared
permissively. A single shared header cannot say both.
"""

from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]

import corpus_draft as draftlib


def declaration_type(name, defined, return_types):
    """The return type to declare a callee with.

    A type the corpus spelled is repeated, because the caller's code depends on
    it: a 64-bit result declared as four bytes would be truncated. ``void`` is
    the one type that cannot be repeated everywhere -- a caller that uses the
    result could not compile -- so it is only kept where the callee is defined in
    this unit and the declaration has to agree with the definition.
    """
    spelled = return_types.get(name, 'undefined4')
    if spelled.strip() == 'void':
        return 'void' if name in defined else 'undefined4'
    return spelled


def header_text(data_types, records, return_types=None):
    return_types = return_types or {}
    defined = {record['address'] for record in records}
    lines = ['#include "decompiled.h"', '',
             '/* Declarations for what these functions call and address. A callee is',
             ' * declared with an empty parameter list: the decompiler\'s per-function',
             ' * signature is its own hypothesis and frequently disagrees with the',
             ' * argument count at a call site, and an empty list states exactly the',
             ' * contract the split provides -- a name with an address. Its return type',
             ' * is repeated when the corpus states a usable one, because the caller\'s',
             ' * arithmetic and this unit\'s own definitions both depend on it. */']
    callees = sorted({name for record in records for name in record['callees']})
    for index in range(0, len(callees), 6):
        lines.append(' '.join('extern %s fn_%s();'
                              % (declaration_type(name, defined, return_types), name)
                              for name in callees[index:index + 6]))
    data = sorted({name for record in records for name in draftlib.data_names(record)})
    if data:
        lines += ['', '/* Data the functions address. A name carries the image address it',
                  ' * must have, so the link defines it there and the bytes the compiler',
                  ' * emits for the reference are the original bytes. */']
        for index in range(0, len(data), 5):
            group = []
            for name in data[index:index + 5]:
                kind = data_types.get(name, 'undefined4')
                if kind.endswith('[]'):
                    group.append('extern unsigned char %s[];' % name)
                elif kind.endswith('*'):
                    group.append('extern unsigned char *%s;' % name)
                else:
                    group.append('extern undefined4 %s;' % name)
            lines.append(' '.join(group))
    return '\n'.join(lines) + '\n'


def emit_unit(directory, label, records, data_types, return_types=None):
    bodies = [draftlib.rewrite(draftlib.corpus_text(record['address']),
                               record.get('strings'), data_types) for record in records]
    body = [header_text(data_types, records, return_types), draftlib.svc_helpers('\n'.join(bodies))]
    body.extend(bodies)
    path = directory / (label + '.c')
    path.write_text('\n'.join(body), encoding='utf-8')
    return path
