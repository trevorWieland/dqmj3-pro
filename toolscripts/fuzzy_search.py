"""Attack the top of the measured fuzzy distribution with the source permuter.

The sweep in ``fuzzy_sweep`` ranks every corpus draft by the objdiff percentage
the project's own report uses. This module turns that ranking into work: it takes
the functions that are already close, compiles their drafts as one standalone
unit, and spends a per-function compile budget on the 19 ordinary C rewrites in
``permute_ops`` until a candidate places byte-exactly or the budget ends.

Only an exact placed extent is written to ``matches/``. A function that improves
without closing is recorded with its best score, which is the honest result and
the input to the next decision.

Usage:
  python -I toolscripts/fuzzy_search.py --minimum 95 --budget 96 --limit 200
  python -I toolscripts/fuzzy_search.py --summary
"""

import argparse
import json
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))

import corpus_draft as draftlib                  # noqa: E402
import corpus_draft_emit as emit                 # noqa: E402
import c_function_definitions                    # noqa: E402
import permute                                   # noqa: E402
import permute_search                            # noqa: E402

WORK = ROOT / 'work/fuzzy'
FEATURES = WORK / 'features.json'
ROWS = WORK / 'rows.jsonl'
SEARCH = WORK / 'search'
UNITS = SEARCH / 'units'
RESULTS = SEARCH / 'results'
MATCHES = SEARCH / 'matches'
DEFINED = WORK / 'defined.json'
COMPONENT = 'fuzzy001'


def measured_names():
    """Every split function a configured source already defines."""
    if DEFINED.is_file():
        return set(json.loads(DEFINED.read_text(encoding='utf-8')))
    config = json.loads((ROOT / 'config/build-units.json').read_text(encoding='utf-8'))
    definitions = set()
    for unit in config['units']:
        path = ROOT / unit['source']
        if path.is_file():
            definitions |= c_function_definitions.definitions(
                path.read_text(encoding='utf-8', errors='replace'))
    DEFINED.write_text(json.dumps(sorted(definitions)) + '\n', encoding='utf-8')
    return definitions


def unit_text(record, data_types, return_types):
    body = draftlib.rewrite(draftlib.corpus_text(record['address']),
                            record.get('strings'), data_types)
    header = emit.header_text(data_types, [record], return_types)
    return '%s\n%s\n%s\n' % (header, draftlib.svc_helpers(body), body)


def load_rows():
    rows = [json.loads(line) for line in ROWS.read_text(encoding='utf-8').splitlines()]
    return {row['name']: row for row in rows}


def candidates(minimum, limit, names=None):
    """Measured, not-yet-defined drafts at or above the fuzzy floor, best first."""
    state = json.loads(FEATURES.read_text(encoding='utf-8'))
    records = {record['name']: record for record in state['functions'].values()}
    rows = load_rows()
    defined = measured_names()
    wanted = set(names) if names else None
    chosen = []
    for name, row in rows.items():
        if name in defined or row.get('status') not in ('measured', 'exact'):
            continue
        if wanted is not None and name not in wanted:
            continue
        fuzzy = row.get('fuzzy')
        if fuzzy is None or fuzzy < minimum:
            continue
        if name not in records:
            continue
        chosen.append((fuzzy, records[name]))
    chosen.sort(key=lambda item: (-item[0], item[1]['size'], item[1]['name']))
    return chosen[:limit] if limit else chosen


def run_one(name, record, context, state, budget, beam, depth, jobs, fuzzy0):
    """Search one draft and write only a byte-exact function body as a match."""
    text = unit_text(record, state['dataTypes'], state.get('returnTypes', {}))
    UNITS.mkdir(parents=True, exist_ok=True)
    (UNITS / 'decompiled.h').write_text(draftlib.SHIM, encoding='utf-8')
    source = UNITS / (name + '.c')
    source.write_text(text, encoding='utf-8')
    unit = {'source': source.relative_to(ROOT).as_posix()}
    started = time.time()
    try:
        result = permute_search.search(context, unit, name, budget, beam, depth, jobs,
                                       SEARCH / 'work' / name, text)
    except (ValueError, OSError, KeyError) as error:
        return {'name': name, 'exact': False, 'error': str(error)[:200],
                'fuzzy0': fuzzy0, 'seconds': time.time() - started}
    best = result.get('best') or {}
    row = {'name': name, 'exact': bool(result.get('exact')),
           'fuzzy0': fuzzy0, 'compiles': result.get('compiles'),
           'seconds': round(result.get('seconds', time.time() - started), 1),
           'matches': result.get('matches'), 'labels': best.get('labels'),
           'words': best.get('words'), 'first': best.get('first'),
           'extentDelta': best.get('extentDelta'), 'size': record['size']}
    if result.get('exact') and best.get('mutant'):
        MATCHES.mkdir(parents=True, exist_ok=True)
        (MATCHES / (name + '.c')).write_text(best['mutant'], encoding='utf-8')
    return row


def run(minimum, budget, beam, depth, jobs, limit, minutes, names):
    chosen = candidates(minimum, limit, names)
    RESULTS.mkdir(parents=True, exist_ok=True)
    state = json.loads(FEATURES.read_text(encoding='utf-8'))
    context = permute.Context(ROOT)
    print('candidates: %d functions at >= %.1f%%' % (len(chosen), minimum))
    deadline = time.time() + minutes * 60 if minutes else None
    done = matched = compiles = 0
    started = time.time()
    for fuzzy0, record in chosen:
        if deadline is not None and time.time() > deadline:
            print('clock reached after %d functions' % done)
            break
        name = record['name']
        path = RESULTS / (name + '.json')
        if path.is_file():
            previous = json.loads(path.read_text(encoding='utf-8'))
            done += 1
            matched += bool(previous.get('exact'))
            compiles += previous.get('compiles') or 0
            continue
        row = run_one(name, record, context, state, budget, beam, depth, jobs, fuzzy0)
        path.write_text(json.dumps(row, indent=1) + '\n', encoding='utf-8')
        done += 1
        matched += bool(row['exact'])
        compiles += row.get('compiles') or 0
        if done % 10 == 0 or row['exact']:
            print('  %d/%d %s fuzzy0=%.2f exact=%s compiles=%s %.1fs'
                  % (done, len(chosen), name, fuzzy0, row['exact'],
                     row.get('compiles'), time.time() - started))
    summary()
    return 0


def summary():
    rows = [json.loads(path.read_text(encoding='utf-8'))
            for path in sorted(RESULTS.glob('*.json'))]
    exact = [row for row in rows if row.get('exact')]
    report = {'attempted': len(rows), 'exact': len(exact),
              'exactBytes': sum(row['size'] for row in exact),
              'compiles': sum(row.get('compiles') or 0 for row in rows),
              'seconds': round(sum(row.get('seconds') or 0 for row in rows), 1)}
    report['compilesPerMatch'] = (report['compiles'] / len(exact)) if exact else None
    by_band = {}
    for row in rows:
        fuzzy = row.get('fuzzy0') or 0
        key = ('>=99' if fuzzy >= 99 else '95-99' if fuzzy >= 95 else '90-95' if fuzzy >= 90
               else '75-90' if fuzzy >= 75 else '50-75' if fuzzy >= 50 else '<50')
        cell = by_band.setdefault(key, {'attempted': 0, 'exact': 0, 'bytes': 0})
        cell['attempted'] += 1
        cell['exact'] += bool(row.get('exact'))
        cell['bytes'] += row['size'] if row.get('exact') else 0
    report['byBand'] = by_band
    print(json.dumps(report, indent=1))
    (SEARCH / 'summary.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument('--minimum', type=float, default=95.0)
    parser.add_argument('--budget', type=int, default=96)
    parser.add_argument('--beam', type=int, default=6)
    parser.add_argument('--depth', type=int, default=2)
    parser.add_argument('--jobs', type=int, default=10)
    parser.add_argument('--limit', type=int, default=0)
    parser.add_argument('--minutes', type=float, default=0)
    parser.add_argument('--functions', help='JSON list of function names to search')
    parser.add_argument('--summary', action='store_true')
    arguments = parser.parse_args(argv)
    if arguments.summary:
        summary()
        return 0
    names = json.loads(Path(arguments.functions).read_text()) if arguments.functions else None
    return run(arguments.minimum, arguments.budget, arguments.beam, arguments.depth,
               arguments.jobs, arguments.limit, arguments.minutes, names)


if __name__ == '__main__':
    sys.exit(main())
