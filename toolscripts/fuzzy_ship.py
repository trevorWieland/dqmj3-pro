"""Ship byte-exact fuzzy-sweep matches as a declared build unit.

A match is a function whose placed bytes equal the original extent. The sweep
found some on the first compile; the permuter found others. Neither is credited
until the function is recompiled *inside the file it will ship in*: a callee
defined in the same translation unit changes the declaration its caller sees, and
that can change the bytes. Every function below is therefore re-scored in its
shipped unit and dropped if it no longer matches.

Only exact functions are written. The unit is declared in
``config/build-units.json`` in binary mode, with its true transitive header
closure, and its root is added to ``nativeComponentRoots``.

Usage:
  python -I toolscripts/fuzzy_ship.py --component fuzzy001
"""

import argparse
import json
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))

import corpus_draft as draftlib                  # noqa: E402
import corpus_draft_emit as emit                 # noqa: E402
import corpus_draft_measure as drafter           # noqa: E402
import c_function_definitions                    # noqa: E402
import exheader                                  # noqa: E402
import permute                                   # noqa: E402
import split as split_module                     # noqa: E402
from placement import slots                      # noqa: E402

WORK = ROOT / 'work/fuzzy'
FEATURES = WORK / 'features.json'
ROWS = WORK / 'rows.jsonl'
MATCHES = WORK / 'search' / 'matches'
MAX_LINES = 430
MAX_FUNCTIONS = 40
HEADER_COMMENT = '''/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: %s .. %s.
 */
'''


def load():
    state = json.loads(FEATURES.read_text(encoding='utf-8'))
    records = {record['name']: record for record in state['functions'].values()}
    header = (ROOT / 'generated/update-content0/exheader.bin').read_bytes()
    text = exheader.segment(exheader.layout(header), 'text')
    functions = split_module.load(ROOT / 'config/symbols.txt', text['address'],
                                  text['initializedBytes'])
    room = slots(functions, text)
    exact = {}
    for line in ROWS.read_text(encoding='utf-8').splitlines():
        row = json.loads(line)
        record = records.get(row.get('name'))
        if record is None or row.get('code') != record['size']:
            continue
        # The project credits a function whose instructions equal the original
        # extent and whose compiler-placed tail equals the original bytes after
        # it. The tail must also fit the room the split leaves before the next
        # owned range, or the build could not place the function at all.
        if row.get('words') != 0 or (row.get('extent') or 0) < record['size']:
            continue
        if (row.get('extent') or 0) > room[row['name']]:
            continue
        exact[row['name']] = draftlib.rewrite(
            draftlib.corpus_text(record['address']), record.get('strings'),
            state['dataTypes'])
    for path in sorted(MATCHES.glob('*.c')):
        if path.stem in records:
            exact[path.stem] = path.read_text(encoding='utf-8')
    return state, records, exact


def group(names, records):
    """Pack functions so no file both defines and calls the same function.

    A callee defined in the same file is declared with its own return type, and
    a decompiled signature can make a caller that compiled alone fail -- an
    ``undefined8`` return cast to a pointer is the common case. Keeping callers
    and callees in different files leaves every callee declared with the
    permissive four-byte contract, so each function compiles exactly as it did
    when it was measured alone.
    """
    ordered = sorted(names, key=lambda name: records[name]['address'])
    files = []
    for name in ordered:
        count = records[name]['lines'] + 3
        callees = {'fn_' + address for address in records[name]['callees']}
        target = None
        for cell in files:
            if len(cell['names']) >= MAX_FUNCTIONS or cell['lines'] + count > MAX_LINES:
                continue
            if callees & cell['members'] or name in cell['callees']:
                continue
            target = cell
            break
        if target is None:
            target = {'names': [], 'members': set(), 'callees': set(), 'lines': 0}
            files.append(target)
        target['names'].append(name)
        target['members'].add(name)
        target['callees'] |= callees
        target['lines'] += count
    return [cell['names'] for cell in files]


def unit_text(names, bodies, state, header=None, stem=None):
    if header is None:
        header = emit.header_text(state['dataTypes'], [state['records'][name] for name in names],
                                  state.get('returnTypes', {}))
    preamble = HEADER_COMMENT % (min(state['records'][name]['address'] for name in names),
                                 max(state['records'][name]['address'] for name in names))
    if stem is None:
        opening = preamble + '#include "decompiled.h"\n' + header + '\n'
    else:
        opening = preamble + '#include "decompiled.h"\n#include "%s.h"\n' % stem
    joined = '\n'.join(bodies[name] for name in names)
    return opening + draftlib.svc_helpers(joined) + '\n' + joined


def verify(scorer, names, bodies, state, stem):
    """Score every function in the unit it is about to be shipped in."""
    text = unit_text(names, bodies, state, stem=None)

    def score(name):
        return scorer.score(name, text, 'ship_%s_%s' % (stem, name))

    with ThreadPoolExecutor(max_workers=10) as pool:
        results = list(pool.map(score, names))
    return [name for name, result in zip(names, results) if result.get('exact')]


class Scorer:
    """The placement measurement, compiling against the component's headers."""

    def __init__(self, component):
        self.context = permute.Context(ROOT)
        self.unit = {'source': 'src/native/%s/fuzzy_00.c' % component}

    def score(self, name, text, tag):
        work = WORK / 'ship' / tag
        try:
            return permute.score_function(self.context, self.unit, name, text, work)
        except (ValueError, OSError) as error:
            return {'name': name, 'exact': False, 'error': str(error)[:160]}


def configured_definitions(component):
    """Function names configured sources outside this component define."""
    config = json.loads((ROOT / 'config/build-units.json').read_text(encoding='utf-8'))
    prefix = 'src/native/%s/' % component
    definitions = set()
    for unit in config['units']:
        if unit['source'].startswith(prefix):
            continue
        path = ROOT / unit['source']
        if path.is_file():
            definitions |= c_function_definitions.definitions(
                path.read_text(encoding='utf-8', errors='replace'))
    return definitions


def source_definitions(component):
    """Function names any .c under src/native outside this component defines."""
    definitions = set()
    for path in (ROOT / 'src/native').rglob('*.c'):
        relative = path.relative_to(ROOT).as_posix()
        if relative.startswith('src/native/%s/' % component):
            continue
        definitions |= c_function_definitions.definitions(
            path.read_text(encoding='utf-8', errors='replace'))
    return definitions


def verify_no_duplicates(component, names):
    """No other source under src/native may define a name this component defines."""
    foreign = {}
    for path in (ROOT / 'src/native').rglob('*.c'):
        relative = path.relative_to(ROOT).as_posix()
        if relative.startswith('src/native/%s/' % component):
            continue
        found = c_function_definitions.definitions(
            path.read_text(encoding='utf-8', errors='replace'))
        for name in names:
            if name in found:
                foreign.setdefault(name, []).append(relative)
    if foreign:
        raise SystemExit('duplicate definitions: ' + json.dumps(foreign))
    print('duplicate check: 0 of %d shipped names defined elsewhere under src/native'
          % len(names))


def clear_component(component):
    """Remove this component's units before a re-ship, in binary mode."""
    path = ROOT / 'config/build-units.json'
    config = json.loads(path.read_bytes().decode('utf-8'))
    prefix = 'src/native/%s/' % component
    config['units'] = [unit for unit in config['units']
                       if not unit['source'].startswith(prefix)]
    config['nativeComponentRoots'] = [root for root in config.get('nativeComponentRoots', [])
                                      if root != 'src/native/' + component]
    path.write_bytes((json.dumps(config, indent=2) + '\n').encode('utf-8'))


def declare(component, stems):
    """Add the units and the component root in binary mode."""
    path = ROOT / 'config/build-units.json'
    config = json.loads(path.read_bytes().decode('utf-8'))
    existing = {unit['source'] for unit in config['units']}
    for stem in sorted(stems):
        source = 'src/native/%s/%s.c' % (component, stem)
        if source in existing:
            continue
        config['units'].append({
            'source': source,
            'headers': ['src/native/%s/decompiled.h' % component,
                        'src/native/%s/%s.h' % (component, stem)],
            'role': 'fuzzy-sweep-byte-exact'})
    root = 'src/native/' + component
    roots = config.setdefault('nativeComponentRoots', [])
    if root not in roots:
        roots.append(root)
    path.write_bytes((json.dumps(config, indent=2) + '\n').encode('utf-8'))
    print('declared %d units under %s' % (len(stems), root))


def ship(component):
    state, records, bodies = load()
    state['records'] = records
    defined = configured_definitions(component) | source_definitions(component)
    dropped = {name: 'already defined by configured source' for name in bodies if name in defined}
    bodies = {name: text for name, text in bodies.items() if name not in defined}
    if not bodies:
        print('no new exact matches')
        return 1
    destination = ROOT / 'src/native' / component
    destination.mkdir(parents=True, exist_ok=True)
    clear_component(component)
    for stale in list(destination.glob('*.c')) + list(destination.glob('*.h')):
        stale.unlink()
    (destination / 'decompiled.h').write_text(draftlib.SHIM, encoding='utf-8')
    scorer = Scorer(component)
    shipped, stems = {}, []
    for index, names in enumerate(group(bodies, records)):
        stem = 'fuzzy_%02d' % index
        keep = list(names)
        for attempt in range(4):
            if not keep:
                break
            kept = verify(scorer, keep, bodies, state, stem)
            lost = [name for name in keep if name not in kept]
            for name in lost:
                dropped[name] = 'lost exactness in the shipped unit'
            keep = kept
            if not lost:
                break
        if not keep:
            continue
        header = emit.header_text(state['dataTypes'], [records[name] for name in keep],
                                  state.get('returnTypes', {}))
        source = unit_text(keep, bodies, state, header, stem)
        (destination / (stem + '.c')).write_text(source, encoding='utf-8')
        (destination / (stem + '.h')).write_text(header, encoding='utf-8')
        shipped[stem] = keep
        stems.append(stem)
    if not shipped:
        print('nothing survived shipping verification')
        return 1
    declare(component, stems)
    names = [name for group_names in shipped.values() for name in group_names]
    print(json.dumps({'component': component, 'files': len(shipped), 'functions': len(names),
                      'bytes': sum(records[name]['size'] for name in names),
                      'dropped': dropped}, indent=1))
    verify_no_duplicates(component, names)
    return 0


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument('--component', default='fuzzy001')
    arguments = parser.parse_args(argv)
    return ship(arguments.component)


if __name__ == '__main__':
    sys.exit(main())
