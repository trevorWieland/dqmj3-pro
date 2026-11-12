"""Ship only the byte-exact functions a repair run produced, as a build unit.

A repair run writes one candidate translation unit per exact match under
``<run>/matches/``. Those candidates were compiled alone; a shipped unit
compiles several functions together, and the declaration a callee needs changes
when its definition is in the same file. This module therefore rebuilds the
unit, re-scores every function *inside the shipped file* with the same measured
profile and placement link, drops any function that no longer matches, and only
then writes the source and declares it in ``config/build-units.json``.

Nothing is credited because it matched in the run: it is credited because it
matches after shipping, which is the project's own rule.
"""

import argparse
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(Path(__file__).resolve().parent))

import c_function_definitions                      # noqa: E402
import corpus_draft as draftlib                    # noqa: E402
import corpus_draft_emit                            # noqa: E402
import repair_loop                                  # noqa: E402
from permute_text import function_span              # noqa: E402

MAX_LINES = 430
MAX_FUNCTIONS = 40


def match_texts(runs):
    """Every exact function a run wrote, as (name, function body text)."""
    found = {}
    for run in runs:
        directory = Path(run) / 'matches'
        if not directory.is_dir():
            continue
        for path in sorted(directory.glob('*.c')):
            name = path.stem
            text = path.read_text(encoding='utf-8')
            try:
                span = function_span(text, name)
            except KeyError:
                continue
            found.setdefault(name, text[span[0]:span[1]])
    return found


def exact_from_calibration(path):
    """Functions a base-draft scan already measured exact, with their draft body."""
    names = []
    document = Path(path)
    if document.is_file():
        for row in json.loads(document.read_text(encoding='utf-8')):
            if row.get('class') == 'exact':
                names.append(row['name'])
    return names


def group(bodies, records):
    """Split functions into files that stay well inside the line limit."""
    order = sorted(bodies, key=lambda name: records[name]['address'])
    files, current, lines = [], [], 0
    for name in order:
        body_lines = bodies[name].count('\n') + 3
        if current and (lines + body_lines > MAX_LINES or len(current) >= MAX_FUNCTIONS):
            files.append(current)
            current, lines = [], 0
        current.append(name)
        lines += body_lines
    if current:
        files.append(current)
    return files


def unit_text(names, bodies, records, data_types, return_types, header_name=None,
              header=None, include_line=False):
    """The translation unit: header, declarations, then the function bodies.

    A candidate is verified with its header text inline, which is exactly what
    the include would supply in the shipped file; the shipped file itself keeps
    the header separate and includes it.
    """
    if header is None:
        header = corpus_draft_emit.header_text(
            data_types, [records[name] for name in names], return_types)
    preamble = ('/* Byte-exact functions recovered by the draft-repair loop.\n'
                ' * Compiled with the measured original profile; each function below was\n'
                ' * re-scored in this exact unit and kept only when its placed bytes equal\n'
                ' * the original extent byte for byte. */\n')
    if include_line:
        opening = preamble + '#include "decompiled.h"\n#include "%s"\n' % header_name
    else:
        opening = preamble + '#include "decompiled.h"\n' + header + '\n'
    joined = '\n'.join(bodies[name] for name in names)
    return opening + draftlib.svc_helpers(joined) + '\n' + joined


def verify(scorer, names, bodies, records, data_types, return_types, header_name, stage):
    """Re-score every function in the unit it is about to be shipped in."""
    text = unit_text(names, bodies, records, data_types, return_types, header_name)
    keep = []
    for name in names:
        result = scorer.score(name, text, '%s_%s' % (stage, name))
        if result.get('exact'):
            keep.append(name)
    return keep


def source_definitions(component):
    """Every function name any configured source other than this unit defines."""
    config = json.loads((ROOT / 'config/build-units.json').read_text(encoding='utf-8'))
    definitions = set()
    prefix = 'src/native/%s/' % component
    for unit in config['units']:
        if unit['source'].startswith(prefix):
            continue
        definitions |= c_function_definitions.definitions(
            (ROOT / unit['source']).read_text(encoding='utf-8', errors='replace'))
    return definitions


def ship(runs, component, calibration):
    book = repair_loop.Book(ROOT)
    scorer = repair_loop.Scorer(ROOT, jobs=4)
    bodies = match_texts(runs)
    for name in exact_from_calibration(calibration):
        if name not in bodies and name in book.records:
            text = book.text(name)
            span = function_span(text, name)
            bodies[name] = text[span[0]:span[1]]
    defined = source_definitions(component)
    duplicates = {name: 'already defined by configured source' for name in bodies
                  if name in defined}
    bodies = {name: text for name, text in bodies.items() if name not in defined}
    if not bodies:
        print('no new exact candidates in ' + ', '.join(str(run) for run in runs))
        return 1
    print('candidates: %d functions from %s' % (len(bodies),
                                                ', '.join(str(run) for run in runs)))
    files = group(bodies, book.records)
    destination = ROOT / 'src/native' / component
    destination.mkdir(parents=True, exist_ok=True)
    for stale in list(destination.glob('repair_*.c')) + list(destination.glob('repair_*.h')):
        stale.unlink()
    (destination / 'decompiled.h').write_text(draftlib.SHIM, encoding='utf-8')
    shipped, dropped = {}, {}
    for index, names in enumerate(files):
        header_name = 'repair_%02d.h' % index
        keep = list(names)
        for attempt in range(4):
            kept = verify(scorer, keep, bodies, book.records, book.data_types,
                          book.return_types, header_name, 'ship%02d_%d' % (index, attempt))
            lost = [name for name in keep if name not in kept]
            keep = kept
            for name in lost:
                dropped[name] = 'lost exactness in the shipped unit'
            if not lost:
                break
        if not keep:
            continue
        header = corpus_draft_emit.header_text(book.data_types,
                                               [book.records[name] for name in keep],
                                               book.return_types)
        source = unit_text(keep, bodies, book.records, book.data_types,
                           book.return_types, header_name, header, include_line=True)
        stem = 'repair_%02d' % index
        (destination / (stem + '.c')).write_text(source, encoding='utf-8')
        (destination / (stem + '.h')).write_text(header, encoding='utf-8')
        shipped[stem] = keep
    dropped.update(duplicates)
    if not shipped:
        print('nothing survived shipping verification')
        return 1
    declare(component, shipped)
    names = [name for group_names in shipped.values() for name in group_names]
    exact_bytes = sum(book.records[name]['size'] for name in names)
    print(json.dumps({'component': component, 'files': len(shipped),
                      'functions': len(names), 'bytes': exact_bytes,
                      'dropped': dropped}, indent=1))
    verify_no_duplicates(component, names)
    return 0


def verify_no_duplicates(component, names):
    """No other configured source may define a name this unit defines."""
    root = ROOT / 'src/native'
    foreign = {}
    for path in root.rglob('*.c'):
        relative = path.relative_to(ROOT).as_posix()
        if relative.startswith('src/native/%s/' % component):
            continue
        found = c_function_definitions.definitions(path.read_text(encoding='utf-8',
                                                                  errors='replace'))
        for name in names:
            if name in found:
                foreign.setdefault(name, []).append(relative)
    if foreign:
        raise SystemExit('duplicate definitions: ' + json.dumps(foreign))
    print('duplicate check: 0 of %d shipped names defined elsewhere' % len(names))


def declare(component, shipped):
    """Add the units and the wave to config/build-units.json, in binary mode."""
    path = ROOT / 'config/build-units.json'
    with path.open('rb') as handle:
        config = json.loads(handle.read().decode('utf-8'))
    if component not in config['scope']['waves']:
        config['scope']['waves'].append(component)
    existing = {unit['source'] for unit in config['units']}
    for stem in sorted(shipped):
        source = 'src/native/%s/%s.c' % (component, stem)
        if source in existing:
            continue
        config['units'].append({
            'source': source,
            'headers': ['src/native/%s/decompiled.h' % component,
                        'src/native/%s/%s.h' % (component, stem)],
            'role': 'repair-loop-byte-exact'})
    payload = json.dumps(config, indent=2) + '\n'
    with path.open('wb') as handle:
        handle.write(payload.encode('utf-8'))
    print('declared %d units in %s' % (len(shipped), component))


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument('--run', action='append', default=[],
                        help='a repair run directory; repeatable')
    parser.add_argument('--calibration', default='work/repair/calband/calibration.json')
    parser.add_argument('--component', default='wave084-repair')
    arguments = parser.parse_args(argv)
    return ship(arguments.run, arguments.component, arguments.calibration)


if __name__ == '__main__':
    sys.exit(main())
