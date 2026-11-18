"""Fuzzy-match every corpus draft against its original extent, over the population.

The project's own progress report states a ``fuzzy_match_percent`` for every
function it measures. That number has always been an output of a build; this
module makes it the *selection* signal: it compiles every decompiled corpus
draft with the measured armcc profile, places the compiled bytes at the address
the split gives the function, and has the pinned objdiff CLI score the function
against the original bytes. The result is the population's fuzzy distribution,
not a sample of it.

Nothing is fitted and nothing is credited here. A row is ``exact`` only when the
placed bytes equal the original extent byte for byte; every other row is a
measurement, including the fuzzy percentage.

Usage:
  python -I toolscripts/fuzzy_sweep.py --prep
  python -I toolscripts/fuzzy_sweep.py --run --jobs 12
  python -I toolscripts/fuzzy_sweep.py --summary
"""

import argparse
import json
import re
import sys
import time
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))

import absolute_symbols                          # noqa: E402
import corpus_draft as draftlib                  # noqa: E402
import corpus_draft_measure as drafter           # noqa: E402
import elf_objects                               # noqa: E402
import exheader                                  # noqa: E402
import objdiff_objects as oo                     # noqa: E402
import split as split_module                     # noqa: E402
from corpus_draft_emit import emit_unit          # noqa: E402
from corpus_draft_refs import _Referenced        # noqa: E402
from elftools.elf.elffile import ELFFile         # noqa: E402
from placement import carve, place, slots        # noqa: E402

WORK = ROOT / 'work/fuzzy'
FEATURES = WORK / 'features.json'
COMPILED = WORK / 'compiled.json'
ROWS = WORK / 'rows.jsonl'
OBJDIFF = ROOT / 'tools/objdiff-3.8.3/objdiff-cli.exe'
IMAGE = ROOT / 'generated/update-content0/code.bin'
HEADER = ROOT / 'generated/update-content0/exheader.bin'
SHAPE_KEYS = ('warned', 'indirect', 'data', 'hasStrings', 'labels', 'switch', 'goto')


def band(size):
    return '<32' if size < 32 else '32-127' if size < 128 else '128-511' if size < 512 else '>=512'


def shape(record):
    if record['warned']:
        return 'warned'
    if record['indirect']:
        return 'indirect'
    if record['data']:
        return 'data'
    if record['hasStrings']:
        return 'string'
    if record['labels'] or record['switch'] or record['goto']:
        return 'control'
    return 'clean'


def prep():
    """One pass over all 26,990 corpus functions: facts a draft needs to compile."""
    split = draftlib.load_split()
    usage, records, returns, missing = {}, {}, {}, []
    for path in sorted((draftlib.CORPUS / 'c').glob('*.c')):
        address = path.stem
        text = draftlib.corpus_text(address)
        if text is None:
            continue
        returns[address] = draftlib.return_type(text)
        symbol = split.by_name.get('fn_' + address)
        if symbol is None:
            missing.append(address)
            continue
        callees, data = draftlib.dependencies(text, address)
        for name, kinds in draftlib.usage_kinds(text).items():
            row = usage.setdefault(name, {'pointer': 0, 'lvalue': 0, 'address': 0})
            for key in row:
                row[key] += kinds[key]
        strings = draftlib.string_addresses(draftlib.corpus_json(address) or {}) \
            if '"' in text else {}
        string_data = sorted({'DAT_%08x' % addresses[0] for addresses in strings.values()})
        for name in string_data:
            usage.setdefault(name, {'pointer': 0, 'lvalue': 0, 'address': 0})['address'] += 1
        records[address] = {
            'address': address, 'name': symbol.name, 'size': symbol.size,
            'band': band(symbol.size), 'mode': symbol.mode,
            'warned': '/* WARNING' in text,
            'indirect': bool(draftlib.HARD_INDIRECT.search(text)),
            'labels': len(draftlib.LABEL.findall(text)),
            'switch': 'switch (' in text or 'switch(' in text,
            'goto': bool(re.search(r'\bgoto\b', text)),
            'hasStrings': '"' in text,
            'svc': bool(draftlib.SVC.search(text)),
            'callees': callees, 'data': data,
            'strings': strings, 'stringData': string_data,
            'lines': text.count('\n'),
            'extras': [[extra, size] for extra, size in symbol.extras],
            'ownedBytes': symbol.size + sum(size for _, size in symbol.extras)}
    types = {}
    for name, kinds in usage.items():
        if kinds['pointer']:
            types[name] = 'unsigned char *'
        elif kinds['lvalue']:
            types[name] = 'undefined4'
        else:
            types[name] = 'unsigned char[]'
    WORK.mkdir(parents=True, exist_ok=True)
    FEATURES.write_text(json.dumps({'functions': records, 'dataTypes': types,
                                    'returnTypes': returns}, indent=0) + '\n',
                        encoding='utf-8')
    print(json.dumps({'functions': len(records), 'missingFromSplit': len(missing),
                      'dataSymbols': len(types),
                      'bands': {name: sum(1 for record in records.values()
                                         if record['band'] == name)
                                for name in ('<32', '32-127', '128-511', '>=512')}},
                     indent=1))
    return 0


def groups_of(records, batch, lines):
    ordered = drafter.order_group(records)
    groups, current, budget = [], [], 0
    for record in ordered:
        current.append(record)
        budget += record['lines'] + 4
        if len(current) >= batch or budget > lines:
            groups.append(current)
            current, budget = [], 0
    if current:
        groups.append(current)
    return groups


def compile_all(state, jobs, batch, lines):
    """Compile every draft, bisecting a failing unit down to the draft at fault."""
    records = [record for record in state['functions'].values() if record['size'] >= 4]
    out = WORK / 'tus'
    if out.exists():
        import shutil
        shutil.rmtree(out)
    out.mkdir(parents=True, exist_ok=True)
    (out / 'decompiled.h').write_text(draftlib.SHIM, encoding='utf-8')
    pending = [('draft%05d' % index, group)
               for index, group in enumerate(groups_of(records, batch, lines))]
    data_types, return_types = state['dataTypes'], state.get('returnTypes', {})
    results, errors, kept = {}, {}, {}
    counter = [0]
    rounds = [0]
    started = time.time()
    with ThreadPoolExecutor(max_workers=jobs) as pool:
        while pending:
            rounds[0] += 1
            paths = [emit_unit(out, label, group, data_types, return_types)
                     for label, group in pending]
            compiled = list(pool.map(drafter.compile_one,
                                     [(ROOT, path, None) for path in paths]))
            following = []
            for (label, group), (_, table, error) in zip(pending, compiled):
                if error is None:
                    results.update(table)
                    kept[label] = group
                    continue
                if len(group) == 1:
                    errors[group[0]['name']] = error
                    continue
                half = len(group) // 2
                counter[0] += 1
                following.append(('%s_%d' % (label, counter[0]), group[:half]))
                following.append(('%s_%d' % (label, counter[0] + 1), group[half:]))
            pending = following
            if rounds[0] <= 3 or rounds[0] % 5 == 0 or not pending:
                print('  round %d: %d units, %d functions, %d failures, %.1fs'
                      % (rounds[0], len(kept), len(results), len(errors),
                         time.time() - started))
    compact = {name: {'size': value['size'], 'extent': value['extent'],
                      'relocations': {str(key): kind for key, kind in value['relocations'].items()},
                      'references': sorted(value['references'])}
               for name, value in results.items()}
    COMPILED.write_text(json.dumps({'functions': compact, 'errors': errors,
                                    'units': {label: [r['name'] for r in group]
                                              for label, group in kept.items()}},
                                   indent=0) + '\n', encoding='utf-8')
    print('compiled %d units / %d drafts in %.1fs; %d failed'
          % (len(kept), len(records), time.time() - started, len(errors)))
    return kept, compact, errors


def combine(kept):
    """Fold every compiled unit object into one relocatable object."""
    response = WORK / 'objects.rsp'
    paths = [WORK / 'tus' / (label + '.o') for label in sorted(kept)]
    response.write_text('\n'.join(path.as_posix() for path in paths) + '\n', encoding='utf-8')
    combined = WORK / 'placement.combined.o'
    oo.run([ROOT / oo.LLD, '-r', '-m', 'armelf', '--build-id=none',
            '@' + response.as_posix(), '-o', combined], WORK / 'combine.log')
    return combined


def context():
    layout = exheader.layout(HEADER.read_bytes())
    text = exheader.segment(layout, 'text')
    functions = split_module.load(ROOT / 'config/symbols.txt', text['address'],
                                  text['initializedBytes'])
    content = IMAGE.read_bytes()
    return {'layout': layout, 'text': text, 'functions': functions, 'content': content,
            'origin': text['codeBinOffset'] - text['address'],
            'constants': absolute_symbols.definitions(absolute_symbols.load(ROOT))}


def exact_row(name, symbol, code, data, content, origin):
    original = content[origin + symbol.address:origin + symbol.address + len(data)]
    differing = [index for index in range(0, min(len(data), len(original)), 4)
                 if data[index:index + 4] != original[index:index + 4]]
    return {'exact': len(data) == symbol.size and data == original[:symbol.size],
            'code': code, 'extent': len(data),
            'words': len(differing), 'first': differing[0] if differing else None}


def objdiff_fuzzy(root, output, tag, target, base):
    """The pinned CLI's per-function fuzzy percentage for one carved unit."""
    project = output / 'project'
    project.mkdir(parents=True, exist_ok=True)
    document = {'min_version': '3.8.3', 'custom_make': None,
                'build_target': False, 'build_base': False,
                'units': [{'name': tag, 'target_path': str(target), 'base_path': str(base),
                           'metadata': {'source_path': 'work/fuzzy/' + tag, 'complete': False}}]}
    (project / 'objdiff.json').write_text(json.dumps(document), encoding='utf-8')
    raw = project / 'report.json'
    oo.run([OBJDIFF, 'report', 'generate', '-p', project, '-o', raw], project / 'objdiff.log')
    report = json.loads(raw.read_text(encoding='utf-8'))
    unit = report['units'][0]
    return {row['name']: row.get('fuzzy_match_percent') for row in unit.get('functions', [])}


def read_placed(image, names):
    """Only the placed output sections, without walking 27,000 absolute symbols.

    ``elf_objects.placed_sections`` also reads the symbol table, and the
    placement script defines every split function as an absolute symbol. That
    costs 1.7 s per chunk; the measurement already knows each compiled symbol's
    size, so it only needs the section bytes and their image offsets.
    """
    wanted = set(names)
    result = {}
    with Path(image).open('rb') as handle:
        elf = ELFFile(handle)
        for section in elf.iter_sections():
            if section.name not in wanted or not section['sh_size']:
                continue
            if not section['sh_flags'] & 2:
                continue
            result[section.name] = {'size': section['sh_size'],
                                    'offset': section['sh_offset'],
                                    'data': section.data()}
    return result


def attempt(ctx, names, tag, output, placed_names, constants, data_types):
    """Place one chunk, or split it until the chunk that will not place is isolated."""
    results = []
    directory = output / ('place_' + tag)
    directory.mkdir(parents=True, exist_ok=True)
    by_name = ctx['functions'].by_name
    wanted = set(names)
    for name in names:
        wanted |= set(placed_names[name]['references'])
    symbols = [by_name[name] for name in sorted(wanted) if name in by_name]
    subset = [(name, constants[name]) for name in sorted(wanted) if name in constants]
    try:
        image, _ = place(ROOT, directory, [ctx['combined']], sorted(names),
                         _Referenced(symbols), subset)
        sections = read_placed(image, names)
    except (ValueError, OSError) as error:
        if len(names) == 1:
            return [{'name': names[0], 'status': 'unplaced', 'reason': str(error)[:200]}]
        half = len(names) // 2
        return (attempt(ctx, names[:half], tag + 'a', output, placed_names, constants, data_types)
                + attempt(ctx, names[half:], tag + 'b', output, placed_names,
                          constants, data_types))
    sections = read_placed(image, names)
    incomplete = [name for name in names if name not in sections]
    changed = [name for name in names if name in sections
               and sections[name]['size'] != placed_names[name]['extent']]
    if incomplete or (changed and len(names) > 1):
        # A missing section or one the link padded (a synthesised interworking
        # thunk lands in the same output section) cannot share a chunk: the
        # padding would overlap the next function's original address.
        if len(names) == 1:
            return [{'name': names[0], 'status': 'unplaced',
                     'reason': 'placement section changed size or went missing'}]
        half = len(names) // 2
        return (attempt(ctx, names[:half], tag + 'a', output, placed_names, constants, data_types)
                + attempt(ctx, names[half:], tag + 'b', output, placed_names,
                          constants, data_types))
    keep = [name for name in names if name in sections]
    if not keep:
        return [{'name': name, 'status': 'unplaced', 'reason': 'no placed section'}
                for name in names]
    spans, symbols_map = [], {}
    for index, name in enumerate(keep):
        symbol = by_name[name]
        spans.append((symbol.address, symbol.size, ctx['origin'] + symbol.address))
        symbols_map[index] = [(name, 0, symbol.size, symbol.mode)]
    target, _ = carve(ROOT, directory, 'fz_' + tag, IMAGE, spans, symbols_map)
    base_spans, base_symbols, base_labels = [], {}, []
    for index, name in enumerate(keep):
        symbol, section = by_name[name], sections[name]
        base_spans.append((symbol.address, section['size'], section['offset']))
        base_symbols[index] = [(name, 0, placed_names[name]['size'], symbol.mode)]
        base_labels.append('.text.' + name)
    base, _ = carve(ROOT, directory, 'fz_' + tag, image, base_spans, base_symbols,
                    suffix='placed', labels=base_labels)
    try:
        fuzzy = objdiff_fuzzy(ROOT, directory, tag, target, base)
    except (ValueError, OSError, KeyError, IndexError) as error:
        fuzzy = {}
        (directory / 'objdiff-failure.txt').write_text(str(error), encoding='utf-8')
    for name in keep:
        symbol, section = by_name[name], sections[name]
        row = {'name': name, 'status': 'measured', 'address': '0x%08x' % symbol.address,
               'size': symbol.size, 'fuzzy': fuzzy.get(name)}
        row.update(exact_row(name, symbol, placed_names[name]['size'], section['data'],
                             ctx['content'], ctx['origin']))
        if row['exact']:
            row['status'] = 'exact'
        results.append(row)
    for name in names:
        if name not in keep:
            results.append({'name': name, 'status': 'unplaced', 'reason': 'not in placement'})
    return results


def run(jobs, batch, lines, limit, reuse):
    state = json.loads(FEATURES.read_text(encoding='utf-8'))
    if reuse and COMPILED.is_file():
        blob = json.loads(COMPILED.read_text(encoding='utf-8'))
        kept, compiled, errors = blob['units'], blob['functions'], blob['errors']
        print('reused %d compiled functions from %s' % (len(compiled), COMPILED.name))
    else:
        kept, compiled, errors = compile_all(state, jobs, batch, lines)
    ctx = context()
    ctx['combined'] = combine(kept)
    functions, constants = ctx['functions'], ctx['constants']
    compiled = {name: value for name, value in compiled.items()
                if name in functions.by_name}
    room = slots(functions, ctx['text'])
    known = dict(functions.by_name)
    constant_map = {name: address for name, address in constants}
    for name in state['dataTypes']:
        match = re.fullmatch(r'_?DAT_([0-9a-f]{8})', name)
        if match:
            constant_map[name] = int(match.group(1), 16)
    known.update({name: None for name in constant_map})
    placed, reasons, wide = {}, {}, []
    for name, value in compiled.items():
        if 0 in value['relocations']:
            reasons[name] = 'references original data the split does not place'
        else:
            outside = sorted(ref for ref in value['references'] if ref not in known)
            if outside:
                reasons[name] = 'references symbols outside the split: ' + ', '.join(outside)[:160]
        if name in reasons:
            continue
        if value['extent'] <= room[name]:
            placed[name] = value
        else:
            # The compiled extent runs past the next original range, so it cannot
            # share a placement image with that function. Placed alone it still
            # sits at its original address and every call resolves through an
            # absolute symbol, which is the same byte the function would have in
            # a build that could fit it. Its fuzzy distance is measurable even
            # though a build would refuse the extent.
            wide.append(name)
            placed[name] = value
    print('placeable %d of %d compiled; %d unrepresentable; %d wide placed alone'
          % (len(placed), len(compiled), len(reasons), len(wide)))
    ordered = sorted((name for name in placed if name not in set(wide)),
                     key=lambda name: functions.by_name[name].address)
    chunks = [ordered[start:start + 192] for start in range(0, len(ordered), 192)]
    chunks += [[name] for name in sorted(wide, key=lambda name: functions.by_name[name].address)]
    if limit:
        chunks = chunks[:limit]
    rows, started = [], time.time()
    done = 0
    ROWS.unlink(missing_ok=True)
    with ThreadPoolExecutor(max_workers=jobs) as pool:
        futures = [pool.submit(attempt, ctx, chunk, 'c%04d' % index, WORK / 'units',
                               placed, constant_map, state['dataTypes'])
                   for index, chunk in enumerate(chunks)]
        for future in futures:
            rows.extend(future.result())
            done += 1
            if done % 20 == 0:
                print('  placed %d/%d chunks, %.1fs' % (done, len(chunks), time.time() - started))
    known_names = set(compiled) | set(reasons)
    for name, message in errors.items():
        rows.append({'name': name, 'status': 'compile-failed', 'reason': message[:200]})
    for name, reason in reasons.items():
        rows.append({'name': name, 'status': 'unrepresented', 'reason': reason})
    for name in functions.by_name:
        if name not in known_names:
            rows.append({'name': name, 'status': 'not-in-corpus'})
    with ROWS.open('w', encoding='utf-8') as handle:
        for row in sorted(rows, key=lambda item: item['name']):
            handle.write(json.dumps(row) + '\n')
    summary(rows)
    return 0


def summary(rows=None):
    if rows is None:
        rows = [json.loads(line) for line in ROWS.read_text(encoding='utf-8').splitlines()]
    measured = [row for row in rows if row.get('status') in ('measured', 'exact')]
    exact = [row for row in rows if row.get('status') == 'exact']
    report = {'rows': len(rows), 'measured': len(measured), 'exact': len(exact),
              'exactBytes': sum(row['size'] for row in exact),
              'status': {}}
    for row in rows:
        report['status'][row['status']] = report['status'].get(row['status'], 0) + 1
    thresholds = (99, 95, 90, 75, 50)
    report['thresholds'] = {str(value): sum(1 for row in measured
                                            if (row.get('fuzzy') or 0) >= value)
                            for value in thresholds}
    bands = ('<32', '32-127', '128-511', '>=512')
    report['bands'] = {}
    for name in bands:
        cell = {'n': 0, 'exact': 0, 'bytes': 0}
        for row in measured:
            if band(row['size']) != name:
                continue
            cell['n'] += 1
            cell['bytes'] += row['size']
            cell['exact'] += row['status'] == 'exact'
        report['bands'][name] = cell
    print(json.dumps(report, indent=1))
    (WORK / 'summary.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
    return report


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument('--prep', action='store_true')
    parser.add_argument('--run', action='store_true')
    parser.add_argument('--summary', action='store_true')
    parser.add_argument('--jobs', type=int, default=12)
    parser.add_argument('--batch', type=int, default=60)
    parser.add_argument('--lines', type=int, default=4000)
    parser.add_argument('--limit', type=int, default=0, help='only this many placement chunks')
    parser.add_argument('--reuse', action='store_true', help='reuse compiled.json if present')
    arguments = parser.parse_args(argv)
    if arguments.prep:
        return prep()
    if arguments.run:
        return run(arguments.jobs, arguments.batch, arguments.lines, arguments.limit,
                   arguments.reuse)
    if arguments.summary:
        summary()
        return 0
    parser.error('choose --prep, --run or --summary')
    return 2


if __name__ == '__main__':
    sys.exit(main())
