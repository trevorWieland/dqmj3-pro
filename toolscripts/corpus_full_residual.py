"""Write the residual document for the full-corpus source tree.

The emitter writes a unit only after both compilers accept it. This script turns
its report into a list of every function that is therefore absent from
``src/native``, with the split's own mode and size and the compiler's reason.
It also names the one function the corpus itself could not decompile, so the
denominator is accounted for in one place.
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
REPORT = ROOT / 'work/full/emit-report.json'
SYMBOLS = ROOT / 'config/symbols.txt'
OUTPUT = ROOT / 'docs/2026-11-12-corpus-residual.md'
DECOMPILER_FAILURE = '004ddab0'


def symbols():
    table = {}
    for line in SYMBOLS.read_text(encoding='utf-8').splitlines():
        match = re.match(r'^([0-9a-f]{8}) (arm|thumb) ([1-9][0-9]*) (fn_[0-9a-f]{8})$', line)
        if match:
            table[match.group(4)] = (match.group(1), match.group(2), int(match.group(3)))
    return table


def reason_class(reason):
    if '500-physical-line' in reason or 'source-file limit' in reason:
        return 'body longer than the 500-physical-line source-file limit'
    if 'float' in reason and 'pointer' in reason:
        return 'the decompiler cast a floating-point value to a pointer'
    if 'not assignable' in reason or 'expression is not assignable' in reason:
        return 'the decompiler wrote a byte-field of an array object as if it were a scalar'
    if 'undeclared identifier' in reason:
        return 'the decompiler referenced a name it never declared'
    if 'conflicting types' in reason:
        return 'two decompiled declarations of one symbol disagree'
    if 'incompatible' in reason and 'redefinition' in reason:
        return 'the decompiler emitted two incompatible definitions'
    return 'the C compilers reject the decompiled body'


def main():
    report = json.loads(REPORT.read_text(encoding='utf-8'))
    table = symbols()
    absent = list(report['absent'])
    if DECOMPILER_FAILURE not in {row['address'] for row in absent}:
        absent.append({'address': DECOMPILER_FAILURE, 'name': 'fn_' + DECOMPILER_FAILURE,
                       'reason': 'the decompiler process died; the corpus holds only '
                                 'disassembly for this function'})
    absent.sort(key=lambda row: row['address'])
    classes = {}
    for row in absent:
        row['class'] = reason_class(row['reason'])
        classes[row['class']] = classes.get(row['class'], 0) + 1
    total = len(table)
    emitted = report['functions']
    present = total - len(absent)
    lines = [
        '# Full-corpus source: the functions that are not in the tree',
        '',
        'Every function of the measured native split is either present as plain C',
        'under `src/native` or listed here. There is no third state and no marker:',
        'a function that cannot be compiled is not written, so its absence is',
        'visible in the tree and answered for in this document.',
        '',
        '| count | |',
        '| ---: | --- |',
        '| %d | functions in the measured split |' % total,
        '| %d | present as plain C |' % present,
        '| %d | emitted by this pipeline (the rest are earlier hand-written source) |' % emitted,
        '| %d | absent, listed below |' % len(absent),
        '',
        'Absent by reason:',
        '',
    ]
    for key, count in sorted(classes.items(), key=lambda row: -row[1]):
        lines.append('* %d: %s' % (count, key))
    lines += ['', '## The absent functions', '',
              '| address | mode | bytes | reason |', '| --- | --- | ---: | --- |']
    for row in absent:
        address, mode, size = table.get(row['name'], ('?', '?', 0))
        reason = row['reason'].replace('|', '\\|')
        if len(reason) > 400:
            reason = reason[:397] + '...'
        lines.append('| `%s` | %s | %d | %s |' % (address, mode, size, reason))
    lines += ['', 'The split also holds two functions that the corpus does not:',
              '`fn_0072ae0c` and `fn_0072b3c4`. Both are present in the tree through',
              'the zlib 1.2.5 vendor adapter, which renames its upstream entry points',
              'to the split names; no corpus record exists for them.', '',
              'The compiler reasons above are the first diagnostic each function',
              'received after the declaration classes in `corpus_full_emit.py` were',
              'exhausted. They are not similarity scores and no byte comparison is',
              'involved: the function was not written because a compiler rejected it.', '']
    OUTPUT.write_text('\n'.join(lines), encoding='utf-8')
    print(json.dumps({'total': total, 'present': present, 'emitted': emitted,
                      'absent': len(absent), 'classes': classes}, indent=1))


if __name__ == '__main__':
    sys.exit(main())
