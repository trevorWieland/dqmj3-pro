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
from corpus_draft_emit import emit_unit                  # noqa: E402
from corpus_draft_refs import _Referenced

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


def select(state, shape, limit, minimum, maximum, order, sample=None):
    records = state['functions']
    if sample is not None:
        # A sample run names the functions to measure, so the population is exact.
        wanted = set(json.loads(Path(sample).read_text(encoding='utf-8')))
        chosen = [record for record in records.values() if record['name'] in wanted]
        missing = wanted - {record['name'] for record in chosen}
        if missing:
            raise SystemExit('sample names missing from the cache: ' + ', '.join(sorted(missing)))
        return sorted(chosen, key=lambda record: record['address'])
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
        if shape == 'string':
            return (record['hasStrings'] and not record['data'] and not record['warned']
                    and not record['indirect'])
        if shape == 'svc':
            # The whole reopened class: every function whose decompiled body
            # contains a supervisor call, whatever else it also carries. The
            # other shapes filter out data, literals and control flow, and doing
            # that here would hide exactly the failure classes this run measures.
            return record.get('svc', False)
        if shape == 'all':
            return not record['warned']
        if shape == 'multirange':
            # A function that owns a range outside its contiguous extent.
            return bool(record.get('extras'))
        raise SystemExit('unknown shape ' + shape)
    chosen = [record for record in records.values()
              if keep(record) and minimum <= record['size'] <= maximum]
    if order == 'bytes':
        chosen.sort(key=lambda record: (-record['size'], record['address']))
    else:
        chosen.sort(key=lambda record: record['address'])
    return chosen[:limit] if limit else chosen


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
    by_address = {record['address']: record for record in records}
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
            if callee in by_address and callee != name[3:]:
                best = max(best, 1 + visit('fn_' + callee, stack))
        stack.discard(name)
        depth[name] = best
        return best

    for record in records:
        visit(record['name'], set())
    # Deepest first: a function that calls another has the greater depth, and it
    # has to be compiled before the callee's definition appears, so its call is
    # checked against the permissive declaration rather than the definition.
    return sorted(records, key=lambda record: (-depth.get(record['name'], 0), record['address']))


def compile_one(args):
    root, source, header, forced = args
    target = source.with_suffix('.o')
    profile = oo.profile_for(root, {'source': source.name}, forced)
    raw = target.with_name(target.name + '.armcc.o')
    try:
        oo.run(oo.compiler_argv(root, {'source': source.name}, source, raw,
                                forced_profile=forced), source.with_suffix('.log'))
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


PLACEMENT_CHUNK = 192


def place_all(combined, placed, functions, constants, out, references=None):
    """Place the measured functions and read back their bytes.

    Functions are placed at absolute addresses that do not depend on each other,
    so the set can be linked in chunks: a function left out of one link is an
    absolute symbol defined at its original address, which is the address a call
    in another chunk resolves to anyway. Chunking bounds the work a single
    overlapping extent can cause -- one bad function would otherwise re-link
    thousands of sections on every bisection step -- and it keeps the failure
    local to the function that caused it.
    """
    sections, refused = {}, set()
    references = references or {}
    by_name = {symbol.name: symbol for symbol in functions.symbols}
    constants = dict(constants)

    def attempt(names):
        if not names:
            return
        # The script places a section for every name it is given, so the chunk's
        # own functions come first and the names their code refers to follow: a
        # placed function that nothing calls would otherwise get no section at
        # all, and its bytes could not be read back.
        wanted = set(names) | {name for placed_name in names
                              for name in references.get(placed_name, ())}
        symbols = [by_name[name] for name in sorted(wanted) if name in by_name]
        subset = [(name, constants[name]) for name in sorted(wanted) if name in constants]
        try:
            image, _ = place(ROOT, out, [combined], sorted(names), _Referenced(symbols), subset)
        except ValueError as error:
            if len(names) == 1:
                refused.add(names[0])
                (out / 'placement-failures.txt').open('a', encoding='utf-8').write(
                    '%s %s\n' % (names[0], str(error)[:160]))
                return
            half = len(names) // 2
            attempt(names[:half])
            attempt(names[half:])
            return
        sections.update(elf_objects.placed_sections(image)['sections'])

    ordered = sorted(placed)
    (out / 'placement-failures.txt').unlink(missing_ok=True)
    for start in range(0, len(ordered), PLACEMENT_CHUNK):
        attempt(ordered[start:start + PLACEMENT_CHUNK])
    return sections, refused


def measure(args):
    state = json.loads(CACHE.read_text(encoding='utf-8'))
    context = load_context()
    functions, content, origin = context['functions'], context['content'], context['origin']
    chosen = select(state, args.shape, args.limit, args.minimum, args.maximum, args.order,
                    args.sample)
    out = ROOT / args.out
    tus = out / 'tus'
    data_types = state['dataTypes']
    return_types = state.get('returnTypes', {})
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
                paths = [emit_unit(tus, label, group, data_types, return_types)
                         for label, group in pending]
                compiled = list(pool.map(compile_one, [(ROOT, path, None, args.profile)
                                                       for path in paths]))
                following = []
                for (label, group), (_, table, error) in zip(pending, compiled):
                    if error is None:
                        results.update(table)
                        kept[label] = group
                        continue
                    if len(group) == 1:
                        # A unit of one function that does not compile is a fact
                        # about the decompiled text. Splitting it further would
                        # only re-queue it, so it is reported instead.
                        errors[group[0]['name']] = error
                        continue
                    half = len(group) // 2
                    counter[0] += 1
                    following.append(('%s_%d' % (label, counter[0]), group[:half]))
                    following.append(('%s_%d' % (label, counter[0] + 1), group[half:]))
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
                                     object=tus / (label + '.o'),
                                     profile=args.profile or oo.profiles(ROOT)['default'])
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
        sections, refused = place_all(combined, placed_all, functions, constants, out,
                                      {name: results[name]['references'] for name in placed_all})
        for name in refused:
            reasons[name] = 'the placement link cannot place this extent'
    else:
        sections = {}
    verdicts = []
    for record in chosen:
        name = record['name']
        symbol = functions.by_name[name]
        row = {'name': name, 'address': record['address'], 'size': symbol.size,
               'ownedBytes': record.get('ownedBytes', symbol.size),
               'extras': len(record.get('extras') or []),
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
            original = content[origin + symbol.address:origin + symbol.address + len(data)]
            differing = [index for index in range(min(len(data), len(original)))
                         if data[index] != original[index]]
            row['verdict'] = ('exact' if len(data) == symbol.size
                              and data == content[origin + symbol.address:
                                                  origin + symbol.address + len(data)]
                              else 'differs')
            row['compiled'] = len(data)
            # The remaining difference, as a fact: first offset and count.
            row['firstDifference'] = differing[0] if differing else None
            row['differingBytes'] = len(differing)
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
    parser.add_argument('--sample', help='JSON list of function names to measure exactly')
    parser.add_argument('--batch', type=int, default=60)
    parser.add_argument('--lines', type=int, default=4000)
    parser.add_argument('--jobs', type=int, default=12)
    parser.add_argument('--profile', default=None, help='force one declared compiler profile')
    parser.add_argument('--profiles-config', default='config/compiler-profiles.json')
    parser.add_argument('--out', default='work/drafter/run')
    args = parser.parse_args(argv[1:])
    oo.PROFILE_CONFIG = args.profiles_config
    return draftlib.prep() if args.prep else measure(args)


if __name__ == '__main__':
    raise SystemExit(main(sys.argv))











