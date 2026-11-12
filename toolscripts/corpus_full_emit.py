"""Emit every decompiled corpus function as plain C under ``src/native``.

The corpus under ``work/corpus`` holds one decompiled body per function of the
measured image. This module turns those bodies into ordinary translation units:
it applies the mechanical rewrites that make decompiler output compile (see
``corpus_draft``), declares the callees and data each unit mentions, groups the
bodies so incompatible declarations never share a file, and compiles every unit
before keeping it. A function that cannot be compiled is not written; it is
reported with the compiler's own reason. Nothing in the tree is hidden behind a
status label: a function is either source that compiles, or visibly absent and
listed.

No byte, instruction or match fact is recorded here. This is a source emitter;
``build.py`` decides what matches.
"""

import argparse
import json
import re
import subprocess
import sys
import time
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))

import corpus_draft as draftlib            # noqa: E402
import corpus_full_shape as shape         # noqa: E402
from corpus_draft_shim import SHIM        # noqa: E402

CACHE = ROOT / 'work/full'
CLANG = ROOT / 'tools/clang-21/clang.exe'
ARMCC = ROOT / 'tools/armcc-4.1-b1454/bin/armcc.exe'
PREINCLUDE = ROOT / 'config/armcc-4.1-b1454-preinclude.h'
ARMCC_INCLUDE = ROOT / 'tools/armcc-4.1-b1454/include'
CLANG_FLAGS = ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-mfloat-abi=soft',
               '-std=c11', '-O2', '-ffreestanding', '-fno-builtin', '-ffunction-sections',
               '-fdata-sections', '-Wall', '-Wextra', '-Werror', '-fno-color-diagnostics',
               '-fno-caret-diagnostics']
ARMCC_FLAGS = ['--cpu=MPCore', '--apcs=/interwork', '--c99', '-O3', '-Otime', '-c', '--gnu',
               '--split_sections', '--preinclude', str(PREINCLUDE), '-I', str(ARMCC_INCLUDE)]
FUNC_CALL = re.compile(r'\b(func_0x[0-9a-f]+)\b')
CALLEE = re.compile(r'\b(?:thunk_)?(?:FUN|fn)_([0-9a-f]{8})\b')
LABEL_USE = re.compile(r'\bgoto\s+([A-Za-z_]\w*)')
LABEL_DEF = re.compile(r'(?m)^\s*([A-Za-z_]\w*):')
THUNK = re.compile(r'\bthunk_FUN_([0-9a-f]{8})\b')
THUNK_DEF = re.compile(r'(?m)^([^\n]*?)\bthunk_FUN_[0-9a-f]{8}(\s*\()')
ARRAY_DECL = re.compile(r'\b([A-Za-z_]\w*)\s*\[\s*\d+\s*\]\s*;')
ARRAY_FIELD = re.compile(r'\b([A-Za-z_]\w*)\._(\d+)_(\d+)_')
ARRAY_ASSIGN = re.compile(r'(?m)^([ \t]*)([A-Za-z_]\w*)\._(\d+)_(\d+)_[ \t]*=[ \t]*(.+);')

TEXTS = json.loads((ROOT / 'work/drafter/corpus-text.json').read_text(encoding='utf-8'))
TYPES = json.loads((CACHE / 'types.json').read_text(encoding='utf-8'))
STRINGS = json.loads((CACHE / 'strings.json').read_text(encoding='utf-8'))
DATA_TYPES, RETURNS = TYPES['dataTypes'], TYPES['returnTypes']


def records(existing):
    """One record per corpus function that existing source does not define."""
    result = []
    for address in sorted(TEXTS):
        name = 'fn_' + address
        if name in existing:
            continue
        text = TEXTS[address]
        strings = STRINGS.get(address, {})
        result.append({
            'address': address, 'name': name, 'text': text,
            'lines': text.count('\n') + 1,
            'strings': strings,
            'callees': sorted({item for item in CALLEE.findall(text) if item != address}),
            'funcCalls': sorted(set(FUNC_CALL.findall(text))),
            'data': sorted(set(shape.DATA.findall(text))),
            'stringData': sorted({'DAT_%08x' % addresses[0] for addresses in strings.values()}),
            'usage': shape.usage_kinds(text),
            'returns': shape.return_type(text),
            'valueCalls': shape.value_callees(text),
            'isThunk': bool(THUNK_DEF.search(text)),
            'extra': [],
        })
    return result


def names_of(record):
    return sorted(set(record['data']) | set(record['stringData']))


def unit_types(records_in_unit, force=None):
    """The declaration each data symbol needs in this unit.

    A pointer name accepts every use except a bare read compared with an integer;
    an array name accepts address arithmetic, subscripts and dereference but not a
    direct store; a scalar accepts only bare reads. The colouring has already kept
    incompatible uses out of the same unit.
    """
    usage = {}
    for record in records_in_unit:
        for name, kinds in record['usage'].items():
            row = usage.setdefault(name, {'value': 0, 'pointer': 0, 'lvalue': 0,
                                          'address': 0, 'subscript': 0, 'code': 0})
            for key in row:
                row[key] += kinds[key]
        for name in record['stringData']:
            row = usage.setdefault(name, {'value': 0, 'pointer': 0, 'lvalue': 0,
                                          'address': 0, 'subscript': 0, 'code': 0})
            row['address'] += 1
    result = {}
    for name, kinds in usage.items():
        if force:
            result[name] = force
        elif kinds['code']:
            result[name] = 'code *'
        elif kinds['pointer'] or kinds['subscript'] or kinds['code']:
            result[name] = 'unsigned char *'
        else:
            result[name] = 'undefined4'
    return result


def declaration(name, kind):
    if kind == 'code *':
        return 'extern code *%s;' % name
    if kind == 'unsigned char *':
        return 'extern unsigned char *%s;' % name
    if kind == 'unsigned char[]':
        return 'extern unsigned char %s[1];' % name
    return 'extern undefined4 %s;' % name


def callee_type(name, defined, returns):
    if name in defined:
        return defined[name]
    spelled = returns.get(name, 'undefined4')
    return 'undefined4' if spelled.strip() == 'void' else spelled


def header_text(records_in_unit, types):
    defined = {record['address']: record['returns'] for record in records_in_unit}
    callees = sorted({name for record in records_in_unit for name in record['callees']})
    funcs = sorted({name for record in records_in_unit for name in record['funcCalls']})
    labels = sorted({label for record in records_in_unit
                     for label in shape.address_labels(record['text'])})
    lines = ['#include "decompiled.h"', '',
             '/* Names these functions call and address, declared with the type this',
             ' * unit gives them. A callee keeps an empty parameter list: the split',
             ' * gives every function an address and the decompiler inferred each',
             ' * signature from the callee body, so an empty list is the only contract',
             ' * that holds at every call site. */']
    for index in range(0, len(callees), 6):
        lines.append(' '.join('extern %s fn_%s();'
                              % (callee_type(name, defined, RETURNS), name)
                              for name in callees[index:index + 6]))
    for name in funcs:
        lines.append('extern undefined4 %s();' % name)
    for label in labels:
        lines.append('/* The decompiler took the address of a label outside its own '
                     'function. A file-scope identifier gives that expression a value. */')
        lines.append('static void %s(void) { }' % label)
    data = sorted({name for record in records_in_unit for name in names_of(record)})
    if data:
        lines += ['', '/* Data these functions address. A name carries the image address',
                  ' * it must have, so a reference resolves to the original object. */']
        for index in range(0, len(data), 4):
            lines.append(' '.join(declaration(name, types.get(name, 'undefined4'))
                                  for name in data[index:index + 4]))
    return '\n'.join(lines) + '\n'


def fix_array_fields(text):
    """Express a decompiler byte-field on an array local as the byte access it is."""
    arrays = set(ARRAY_DECL.findall(text))
    if not arrays:
        return text

    def assign(match):
        indent, name, offset, size, value = (match.group(1), match.group(2),
                                             int(match.group(3)), int(match.group(4)),
                                             match.group(5))
        if name not in arrays or size > 4:
            return match.group(0)
        target = '(*(unsigned int *)((unsigned char *)%s + %d))' % (name, offset)
        mask = (1 << (8 * size)) - 1
        return '%s%s = (%s & ~0x%x) | ((%s) & 0x%x);' % (indent, target, target, mask,
                                                         value, mask)

    def read(match):
        name, offset, size = match.group(1), int(match.group(2)), int(match.group(3))
        if name not in arrays or size > 4:
            return match.group(0)
        value = '(*(unsigned int *)((unsigned char *)%s + %d))' % (name, offset)
        return value if size == 4 else '(%s & 0x%x)' % (value, (1 << (8 * size)) - 1)

    text = ARRAY_ASSIGN.sub(assign, text)
    return ARRAY_FIELD.sub(read, text)


def fix_labels(text):
    """Give a goto whose label the decompiler truncated the label it names."""
    used = set(LABEL_USE.findall(text))
    defined = set(LABEL_DEF.findall(text))
    missing = sorted(used - defined)
    if not missing:
        return text
    tail = ''
    for label in missing:
        candidates = sorted({name for name in re.findall(r'\b[A-Za-z_]\w*\b', text)
                             if name.startswith(label) and name != label})
        if len(candidates) == 1 and LABEL_DEF.search(text) and \
                re.search(r'(?m)^\s*%s:' % re.escape(candidates[0]), text):
            text = re.sub(r'\bgoto\s+%s\b' % re.escape(label), 'goto ' + candidates[0], text)
        else:
            tail += '%s: ;\n' % label
    if tail:
        close = text.rfind('}')
        text = text[:close] + tail + text[close:]
    return text


def body_text(record, types):
    text = record['text']
    if record['isThunk']:
        # A thunk record's split symbol is its own address; the decompiler named
        # the body after the function the jump reaches. Name the definition after
        # the split symbol and leave the call through the target name.
        text = THUNK_DEF.sub(lambda match: '%sfn_%s%s' % (match.group(1), record['address'],
                                                         match.group(2)), text, count=1)
    text = THUNK.sub(lambda match: 'fn_' + match.group(1), text)
    text = fix_array_fields(text)
    text = draftlib.rewrite(text, record['strings'], types)
    text = fix_labels(text)
    for line in record['extra']:
        text = line + '\n' + text
    return text


def unit_text(records_in_unit, label, types):
    bodies = [body_text(record, types) for record in records_in_unit]
    svc = draftlib.svc_helpers('\n'.join(bodies))
    return '\n'.join(['#include "%s.h"' % label, '', svc] + bodies) + '\n'


def compact(text):
    return '\n'.join(line for line in text.splitlines() if line.strip()) + '\n'


def write_unit(directory, label, records_in_unit, types, compact_body=False):
    header = directory / (label + '.h')
    header.write_text(header_text(records_in_unit, types), encoding='utf-8')
    source = directory / (label + '.c')
    text = unit_text(records_in_unit, label, types)
    if compact_body:
        text = compact(text)
    source.write_text(text, encoding='utf-8')
    return source, header


def compile_unit(source, header):
    """Compile one emitted unit with both compilers the build uses."""
    artifacts = [source.with_suffix('.clang.o'), source.with_suffix('.armcc.o')]
    for argv, name in (
            ([str(CLANG), *CLANG_FLAGS, '-I', str(source.parent), '-c', str(source),
              '-o', str(artifacts[0])], 'clang'),
            ([str(ARMCC), *ARMCC_FLAGS, '-I', str(source.parent), str(source),
              '-o', str(artifacts[1])], 'armcc')):
        done = subprocess.run(argv, capture_output=True, text=True, encoding='utf-8',
                              errors='replace', timeout=90)
        if done.returncode:
            errors = [line for line in (done.stderr + done.stdout).splitlines()
                      if 'error' in line.lower()]
            return False, name + ': ' + (' | '.join(errors[:3])[:600]
                                         or 'exit %d' % done.returncode)
    for path in artifacts:
        path.unlink(missing_ok=True)
    return True, ''


def label_for(group):
    addresses = [int(record['address'], 16) for record in group]
    return '%08x_%08x' % (min(addresses), max(addresses))


def try_group(directory, label, group):
    """Write one candidate unit and compile it; return its verdict."""
    ordered = shape.order(group)
    types = unit_types(ordered)
    source, header = write_unit(directory, label, ordered, types)
    lines = source.read_text(encoding='utf-8').count('\n')
    header_lines = header.read_text(encoding='utf-8').count('\n')
    if lines > 500 or header_lines > 500:
        return label, False, 'source-file limit'
    accepted, error = compile_unit(source, header)
    return label, accepted, error


def check_groups(groups, directory, jobs):
    """Emit and compile groups; split failures until every written unit compiles."""
    results, singles = [], []
    pending = [(group, label_for(group)) for group in groups]
    while pending:
        with ThreadPoolExecutor(max_workers=jobs) as pool:
            outcomes = list(pool.map(
                lambda item: (item[0], item[1]) + try_group(directory, item[1], item[0])[1:],
                pending))
        pending = []
        for group, label, accepted, error in outcomes:
            if accepted:
                results.append((group, label))
                continue
            for path in (directory / (label + '.c'), directory / (label + '.h'),
                         directory / (label + '.clang.o'), directory / (label + '.armcc.o')):
                path.unlink(missing_ok=True)
            if len(group) == 1:
                singles.append((group[0], error))
                continue
            half = len(group) // 2
            pending.append((group[:half], label + 'a'))
            pending.append((group[half:], label + 'b'))
        print('  kept %d units, %d singles, %d pending' %
              (len(results), len(singles), len(pending)), flush=True)
    return results, singles


def repair_single(directory, record):
    """Emit one function alone, trying the declaration classes that can compile it."""
    variants = [None, 'code *', 'unsigned char *', 'unsigned char[]', 'undefined4']
    last = ''
    for index, force in enumerate(variants):
        label = 'single_' + record['address'] + ('' if index == 0 else '_%d' % index)
        types = unit_types([record], force=force)
        source, header = write_unit(directory, label, [record], types)
        if source.read_text(encoding='utf-8').count('\n') > 500:
            source, header = write_unit(directory, label, [record], types, compact_body=True)
        if source.read_text(encoding='utf-8').count('\n') > 500:
            last = ('the function body exceeds the 500-physical-line source-file limit')
            for path in (source, header):
                path.unlink(missing_ok=True)
            continue
        accepted, error = compile_unit(source, header)
        if accepted:
            return label, True, ''
        last = error
        for path in (source, header, source.with_suffix('.clang.o'),
                     source.with_suffix('.armcc.o')):
            path.unlink(missing_ok=True)
    # A name the decompiler used but never declared can still be declared here.
    for _ in range(3):
        names = sorted(set(re.findall(r"use of undeclared identifier '([A-Za-z_]\w*)'", last)))
        fresh = [name for name in names if 'extern undefined4 %s;' % name not in record['extra']]
        if not fresh:
            break
        for name in fresh:
            line = ('extern undefined4 %s();' % name if re.search(r'\b%s\s*\(' % re.escape(name),
                                                                  record['text'])
                    else 'extern undefined4 %s;' % name)
            record['extra'].append(line)
        label = 'single_' + record['address'] + '_r'
        types = unit_types([record])
        source, header = write_unit(directory, label, [record], types)
        accepted, error = compile_unit(source, header)
        if accepted:
            return label, True, ''
        last = error
        for path in (source, header, source.with_suffix('.clang.o'),
                     source.with_suffix('.armcc.o')):
            path.unlink(missing_ok=True)
    return '', False, last


def main(argv):
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', default='src/native/decompiled')
    parser.add_argument('--existing', default='work/full/existing.json')
    parser.add_argument('--lines', type=int, default=430)
    parser.add_argument('--jobs', type=int, default=12)
    parser.add_argument('--report', default='work/full/emit-report.json')
    args = parser.parse_args(argv[1:])
    directory = ROOT / args.output
    directory.mkdir(parents=True, exist_ok=True)
    for stale in list(directory.glob('*.c')) + list(directory.glob('*.h')) + \
            list(directory.glob('*.o')):
        stale.unlink()
    (directory / 'decompiled.h').write_text(SHIM, encoding='utf-8')
    existing = set(json.loads((ROOT / args.existing).read_text(encoding='utf-8')))
    started = time.time()
    items = records(existing)
    print('emitting %d corpus functions (%d already defined by source)'
          % (len(items), len(TEXTS) - len(items)), flush=True)
    groups = []
    for colour in shape.color(items):
        groups.extend(shape.pack(sorted(colour, key=lambda record: record['address']),
                                 args.lines))
    print('grouped into %d candidate units' % len(groups), flush=True)
    results, singles = check_groups(groups, directory, args.jobs)
    kept, absent = [], []
    for record, _ in singles:
        label, accepted, error = repair_single(directory, record)
        if accepted:
            kept.append((label, record))
        else:
            absent.append({'address': record['address'], 'name': record['name'],
                           'reason': error})
    emitted = [record for group, _ in results for record in group] + [r for _, r in kept]
    # Only a unit both compilers accepted is source. Every scratch file, a
    # rejected attempt or a compacted variant that still missed the file limit,
    # is deleted here so the directory and the manifest agree exactly.
    kept_labels = {label for _, label in results} | {label for label, _ in kept}
    for path in list(directory.glob('*.c')) + list(directory.glob('*.h')) + \
            list(directory.glob('*.o')):
        if path.suffix == '.o' or path.stem not in kept_labels:
            path.unlink()
    files = sorted(path.relative_to(ROOT).as_posix() for path in directory.glob('*.c'))
    report = {'functions': len(emitted), 'units': len(files), 'absent': absent,
              'seconds': round(time.time() - started, 1)}
    (ROOT / args.report).write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({'functions': len(emitted), 'units': len(files),
                      'absent': len(absent), 'seconds': report['seconds']}, indent=2))
    for row in absent[:25]:
        print('absent', row['address'], row['reason'][:180])
    return 0


if __name__ == '__main__':
    raise SystemExit(main(sys.argv))
