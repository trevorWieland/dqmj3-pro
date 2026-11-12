"""Draft, compile and measure corpus functions at scale.

Usage:
  python work/drafter/run.py --prep                 build the feature cache
  python work/drafter/run.py --shape clean --out work/drafter/runs/clean

The pipeline is deliberately the same measurement the project already uses: the
same compiler profile, the same per-function object split, the same selection
screen and the same placement link, imported from ``toolscripts``. The only
difference is that the verdict is read from the placed image here instead of
through objdiff, so a few thousand draft functions can be screened in minutes
rather than through a full ``build.py`` run per attempt.

A function counts only when the compiler's placed extent has exactly the split's
size and its bytes equal the original ones.
"""

import argparse
import json
import re
import shutil
import sys
import time
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
sys.path.insert(0, str(Path(__file__).resolve().parent))

import absolute_symbols                  # noqa: E402
import elf_objects                       # noqa: E402
import exheader                          # noqa: E402
import image_link                        # noqa: E402
import objdiff_objects as oo             # noqa: E402
import armcc_object                      # noqa: E402
import split as split_module             # noqa: E402
from placement import place, slots       # noqa: E402

import corpus_draft as draftlib                          # noqa: E402

WORK = ROOT / 'work/drafter'
CACHE = WORK / 'features.json'
IMAGE = ROOT / 'generated/update-content0/code.bin'
HEADER = ROOT / 'generated/update-content0/exheader.bin'


def load_context():
    layout = exheader.layout(HEADER.read_bytes())
    text = exheader.segment(layout, 'text')
    functions = split_module.load(ROOT / 'config/symbols.txt', text['address'],
                                  text['initializedBytes'])
    content = IMAGE.read_bytes()
    return {'layout': layout, 'text': text, 'functions': functions, 'content': content,
            'origin': text['codeBinOffset'] - text['address'],
            'constants': absolute_symbols.load(ROOT)}


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


HARD_INDIRECT = re.compile(r'\(\s*\*\s*(?:\(\s*)?code\s*\*\*?')
LABEL = re.compile(r'\bLAB_[0-9a-f]{4,8}\b')


def select(state, shape, limit, minimum, maximum, order):
    records = state['functions']
    def keep(record):
        if shape == 'clean':
            return (not record['warned'] and not record['indirect'] and not record['data']
                    and not record['hasStrings'] and not record['labels']
                    and not record['switch'] and not record['goto'])
        if shape == 'clean+control':
            return (not record['warned'] and not record['indirect'] and not record['data']
                    and not record['hasStrings'])
        if shape == 'ptr':
            return not record['warned'] and not record['indirect'] and not record['switch']
        if shape == 'data':
            return (record['data'] and not record['warned'] and not record['indirect']
                    and not record['switch'] and not record['hasStrings'])
        if shape == 'all':
            return not record['warned']
        raise SystemExit('unknown shape ' + shape)
    chosen = [record for record in records.values()
              if keep(record) and minimum <= record['size'] <= maximum]
    if order == 'bytes':
        chosen.sort(key=lambda record: (-record['size'], record['address']))
    else:
        chosen.sort(key=lambda record: record['address'])
    return chosen[:limit] if limit else chosen


SHIM = None


def header_text(data_types, records):
    lines = ['#include "decompiled.h"', '',
             '/* Declarations for what these functions call and address. A callee is',
             ' * declared with an empty parameter list: the decompiler\'s per-function',
             ' * signature is its own hypothesis and frequently disagrees with the',
             ' * argument count at a call site, and an empty list states exactly the',
             ' * contract the split provides -- a name with an address. */']
    callees = sorted({name for record in records for name in record['callees']})
    for index in range(0, len(callees), 6):
        lines.append(' '.join('extern undefined4 fn_%s();' % name for name in callees[index:index + 6]))
    data = sorted({name for record in records for name in record['data']})
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


def emit_unit(directory, label, records, data_types):
    body = [header_text(data_types, records)]
    for record in records:
        body.append(draftlib.rewrite(draftlib.corpus_text(record['address'])))
    path = directory / (label + '.c')
    path.write_text('\n'.join(body), encoding='utf-8')
    return path


def order_group(records):
    """Order a unit so a caller is compiled before the callee it may define.

    A function's decompiled signature is its own hypothesis and may disagree with
    the argument count a caller uses. That is harmless while the callee is only
    declared -- an empty parameter list accepts any call -- but a call placed
    after the callee's definition is checked against it and fails. Emitting
    callers first keeps the whole unit on the permissive declaration. A cycle
    cannot be ordered; those units are isolated by bisection instead.
    """
    by_name = {record['name']: record for record in records}
    depth = {}

    def visit(name, stack):
        if name in depth:
            return depth[name]
        if name in stack:
            return 0
        record = by_name.get(name)
        if record is None:
            return 0
        stack.add(name)
        best = 0
        for callee in record['callees']:
            if callee in by_name and callee != name[3:]:
                best = max(best, 1 + visit('fn_' + callee, stack))
        stack.discard(name)
        depth[name] = best
        return best

    for record in records:
        visit(record['name'], set())
    return sorted(records, key=lambda record: (depth.get(record['name'], 0), record['address']))


def compile_one(args):
    root, source, header = args
    target = source.with_suffix('.o')
    profile = oo.profile_for(root, {'source': source.name})
    raw = target.with_name(target.name + '.armcc.o')
    try:
        oo.run(oo.compiler_argv(root, {'source': source.name}, source, raw), source.with_suffix('.log'))
        armcc_object.split(raw, target)
        functions = elf_objects.read(target)['functions']
        return source.stem, {name: value for name, value in functions.items()}, None
    except (ValueError, OSError) as error:
        log = source.with_suffix('.log')
        detail = ''
        if log.is_file():
            for line in log.read_text(encoding='utf-8', errors='replace').splitlines():
                if 'Error' in line:
                    detail = line.strip()[:160]
                    break
        return source.stem, None, detail or str(error)[:160]


def place_all(combined, placed, functions, constants, out):
    """Place the measured functions and read back their bytes.

    One link of nine thousand functions at fixed addresses can trip over a
    section whose compiled extent overlaps the next function's; the offending
    function is then a placement fact, not a measurement. Halving the set until
    the link succeeds isolates such a function instead of losing the whole run.
    """
    sections, refused = {}, set()

    def attempt(names):
        if not names:
            return
        try:
            image, _ = place(ROOT, out, [combined], sorted(names), functions, constants)
        except ValueError:
            if len(names) == 1:
                refused.add(names[0])
                return
            half = len(names) // 2
            attempt(names[:half])
            attempt(names[half:])
            return
        sections.update(elf_objects.placed_sections(image)['sections'])

    attempt(list(placed))
    return sections, refused


def measure(args):
    state = json.loads(CACHE.read_text(encoding='utf-8'))
    context = load_context()
    functions, content, origin = context['functions'], context['content'], context['origin']
    chosen = select(state, args.shape, args.limit, args.minimum, args.maximum, args.order)
    out = ROOT / args.out
    tus = out / 'tus'
    data_types = state['dataTypes']
    groups, current, budget = [], [], 0
    for record in chosen:
        current.append(record)
        budget += record['lines'] + 4
        if len(current) >= args.batch or budget > args.lines:
            groups.append(current)
            current, budget = [], 0
    if current:
        groups.append(current)
    checkpoint = out / 'compiled.json'
    if args.reuse and checkpoint.is_file():
        # Compiling is the expensive half; the placement and verdicts are cheap
        # enough to redo from the recorded compiler output.
        blob = json.loads(checkpoint.read_text(encoding='utf-8'))
        results = {name: {'size': row['size'], 'extent': row['extent'],
                          'relocations': {int(key): kind for key, kind in row['relocations'].items()},
                          'references': set(row['references'])}
                   for name, row in blob['functions'].items()}
        errors = dict(blob['errors'])
        by_name = {record['name']: record for record in chosen}
        kept = {label: [by_name[name] for name in names if name in by_name]
                for label, names in blob['units'].items()}
        groups = list(kept.values())
        print('reused %d compiled functions from %s' % (len(results), checkpoint.name))
    else:
        if out.exists():
            shutil.rmtree(out, ignore_errors=True)
        tus.mkdir(parents=True, exist_ok=True)
        (tus / 'decompiled.h').write_text(draftlib.SHIM, encoding='utf-8')
        # Compile, and on failure split the unit in half until the offending
        # function is isolated. A unit is only as good as its worst function, so
        # isolation keeps one decompiler artefact from hiding fifty drafts.
        started = time.time()
        results, errors, kept = {}, {}, {}
        counter = [0]
        pending = [('draft%04d' % index, order_group(group))
                   for index, group in enumerate(groups)]
        with ThreadPoolExecutor(max_workers=args.jobs) as pool:
            while pending:
                paths = [emit_unit(tus, label, group, data_types) for label, group in pending]
                compiled = list(pool.map(compile_one, [(ROOT, path, None) for path in paths]))
                following = []
                for (label, group), (_, table, error) in zip(pending, compiled):
                    if error is None:
                        results.update(table)
                        kept[label] = group
                    elif len(group) > 1:
                        half = len(group) // 2
                    counter[0] += 1
                    following.append(('%s_%d' % (label, counter[0]), group[:half]))
                    following.append(('%s_%d' % (label, counter[0] + 1), group[half:]))
                else:
                    errors[group[0]['name']] = error
            pending = following
        compact = {name: {'size': value['size'], 'extent': value['extent'],
                          'relocations': {str(key): kind
                                          for key, kind in value['relocations'].items()},
                          'references': sorted(value['references'])}
                   for name, value in results.items()}
        checkpoint.write_text(json.dumps({'functions': compact, 'errors': errors,
                                          'units': {label: [r['name'] for r in group]
                                                    for label, group in kept.items()}},
                                         indent=0) + '\n', encoding='utf-8')
        print('compiled %d units holding %d functions in %.1fs; %d functions failed to compile'
              % (len(kept), len(results), time.time() - started, len(errors)))
        for name, error in list(errors.items())[:8]:
            print('  FAIL', name, error)
    groups, labels = [kept[label] for label in sorted(kept)], sorted(kept)
    # The same screens the project build uses, with the declared data symbols
    # additionally resolved at the addresses their names carry.
    known = dict(functions.by_name)
    known.update({name: None for name in context['constants']})
    extra = []
    for name in data_types:
        match = re.fullmatch(r'_?DAT_([0-9a-f]{8})', name)
        if match:
            known[name] = None
            extra.append((name, int(match.group(1), 16)))
    definitions = {}
    by_source = {}
    for label, group in zip(labels, groups):
        source = tus / (label + '.c')
        names = [record['name'] for record in group if record['name'] in results]
        if not names:
            continue
        for name in names:
            definitions[name] = dict(results[name], source=str(source.relative_to(ROOT)),
                                     object=tus / (label + '.o'), profile='armcc-4.1-b1454')
            by_source.setdefault(label, []).append(name)
    room = slots(functions, context['text'])
    placed_all, screen, reasons = [], {}, {}
    objects = []
    for label, group in zip(labels, groups):
        names = [record['name'] for record in group if record['name'] in results]
        if not names:
            continue
        source = tus / (label + '.c')
        objects.append(tus / (label + '.o'))
        placed = []
        for name in names:
            function = results[name]
            reason = None
            if 0 in function['relocations']:
                reason = 'references original data the split does not place'
            else:
                outside = sorted(reference for reference in function['references']
                                 if reference not in known)
                if outside:
                    reason = 'references symbols outside the split: ' + ', '.join(outside)
            if reason is None and function['extent'] > room[name]:
                reason = 'the compiled extent runs past the original range the split leaves'
            if reason is None:
                placed.append(name)
            else:
                reasons[name] = reason
        screen[label] = {'names': names, 'placed': placed,
                         'extents': {name: results[name]['extent'] for name in names}}
        placed_all.extend(placed)
    constants = list(absolute_symbols.definitions(context['constants'])) + extra
    if placed_all:
        # Thousands of unit objects do not fit one Windows command line, so they
        # are folded into one relocatable object first, through a response file.
        response = out / 'placement.rsp'
        response.write_text('\n'.join(item.as_posix() for item in objects) + '\n',
                            encoding='utf-8')
        combined = out / 'placement.combined.o'
        oo.run([ROOT / oo.LLD, '-r', '-m', 'armelf', '--build-id=none', '@' + response.as_posix(),
                '-o', combined], out / 'placement.combine.log')
        sections, refused = place_all(combined, placed_all, functions, constants, out)
        for name in refused:
            reasons[name] = 'the placement link cannot place this extent'
    else:
        sections = {}
    verdicts = []
    for record in chosen:
        name = record['name']
        symbol = functions.by_name[name]
        row = {'name': name, 'address': record['address'], 'size': symbol.size,
               'band': record['band'], 'shape': ('data' if record['data'] else 'string'
                                                if record['hasStrings'] else 'control'
                                                if record['labels'] or record['switch']
                                                or record['goto'] else 'clean'),
               'callees': len(record['callees']), 'strings': record['hasStrings'],
               'labels': record['labels']}
        table = sections.get(name)
        if name not in results:
            row['verdict'] = 'compile-failed'
        elif table is None:
            row['verdict'] = 'unrepresentable'
            row['reason'] = reasons.get(name, 'not placed')
        else:
            data = table['data']
            row['verdict'] = ('exact' if len(data) == symbol.size
                              and data == content[origin + symbol.address:
                                                  origin + symbol.address + len(data)]
                              else 'differs')
            row['compiled'] = len(data)
        verdicts.append(row)
    out.mkdir(parents=True, exist_ok=True)
    (out / 'results.json').write_text(json.dumps(verdicts, indent=0) + '\n', encoding='utf-8')
    summary(verdicts)
    return 0


def summary(verdicts):
    def table(key):
        rows = {}
        for row in verdicts:
            cell = rows.setdefault(row[key], {'n': 0, 'compiled': 0, 'exact': 0, 'bytes': 0,
                                              'exactBytes': 0, 'unrep': 0, 'cfail': 0})
            cell['n'] += 1
            cell['bytes'] += row['size']
            if row['verdict'] != 'compile-failed':
                cell['compiled'] += 1
            if row['verdict'] == 'exact':
                cell['exact'] += 1
                cell['exactBytes'] += row['size']
            if row['verdict'] == 'unrepresentable':
                cell['unrep'] += 1
            if row['verdict'] == 'compile-failed':
                cell['cfail'] += 1
        print('\n%s:' % key)
        print('  %-10s %6s %8s %8s %8s %10s %10s' %
              (key, 'n', 'compiled', 'exact', 'rate', 'bytes', 'exactBytes'))
        for name in sorted(rows):
            cell = rows[name]
            print('  %-10s %6d %8d %8d %7.2f%% %10d %10d'
                  % (name, cell['n'], cell['compiled'], cell['exact'],
                     100.0 * cell['exact'] / max(cell['n'], 1), cell['bytes'], cell['exactBytes']))
    table('shape')
    table('band')
    exact = [row for row in verdicts if row['verdict'] == 'exact']
    print('\ntotal: %d processed, %d exact, %d bytes exact (%.2f%% of processed bytes)'
          % (len(verdicts), len(exact), sum(row['size'] for row in exact),
             100.0 * sum(row['size'] for row in exact) / max(sum(row['size'] for row in verdicts), 1)))


def main(argv):
    parser = argparse.ArgumentParser()
    parser.add_argument('--prep', action='store_true')
    parser.add_argument('--reuse', action='store_true')
    parser.add_argument('--shape', default='clean')
    parser.add_argument('--limit', type=int, default=0)
    parser.add_argument('--minimum', type=int, default=4)
    parser.add_argument('--maximum', type=int, default=4096)
    parser.add_argument('--order', default='bytes', choices=('bytes', 'address'))
    parser.add_argument('--batch', type=int, default=60)
    parser.add_argument('--lines', type=int, default=4000)
    parser.add_argument('--jobs', type=int, default=12)
    parser.add_argument('--out', default='work/drafter/run')
    args = parser.parse_args(argv[1:])
    return draftlib.prep() if args.prep else measure(args)


if __name__ == '__main__':
    raise SystemExit(main(sys.argv))











