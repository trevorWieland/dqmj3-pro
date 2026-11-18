"""Summarise the fuzzy sweep and the permuter conversion table.

The two numbers the sweep exists to produce are the population's fuzzy
distribution and the share of each band the permuter closes. Both are computed
here from the cached artifacts only: ``rows.jsonl`` (one row per corpus draft)
and ``search/results/*.json`` (one row per attempted near miss).

Usage:
  python -I toolscripts/fuzzy_report.py
"""

import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))

import exheader                                  # noqa: E402
import split as split_module                     # noqa: E402
from placement import slots                      # noqa: E402

WORK = ROOT / 'work/fuzzy'
ROWS = WORK / 'rows.jsonl'
RESULTS = WORK / 'search' / 'results'
COMPONENT = 'fuzzy001'
BANDS = ('<32', '32-127', '128-511', '>=512')


def band(size):
    return '<32' if size < 32 else '32-127' if size < 128 else '128-511' if size < 512 else '>=512'


def room_table():
    header = (ROOT / 'generated/update-content0/exheader.bin').read_bytes()
    text = exheader.segment(exheader.layout(header), 'text')
    functions = split_module.load(ROOT / 'config/symbols.txt', text['address'],
                                  text['initializedBytes'])
    return slots(functions, text)


def prior_definitions():
    """Functions configured source defined before this component was shipped."""
    config = json.loads((ROOT / 'config/build-units.json').read_text(encoding='utf-8'))
    import c_function_definitions as c
    definitions = set()
    for unit in config['units']:
        if unit['source'].startswith('src/native/%s/' % COMPONENT):
            continue
        path = ROOT / unit['source']
        if path.is_file():
            definitions |= c.definitions(path.read_text(encoding='utf-8', errors='replace'))
    for path in (ROOT / 'src/native').rglob('*.c'):
        if path.relative_to(ROOT).as_posix().startswith('src/native/%s/' % COMPONENT):
            continue
        definitions |= c.definitions(path.read_text(encoding='utf-8', errors='replace'))
    return definitions


def credited(row, room):
    """The project's credit rule: matching instructions, matching tail, and fits."""
    return (row.get('status') in ('measured', 'exact')
            and row.get('code') == row.get('size')
            and row.get('words') == 0
            and (row.get('extent') or 0) >= row['size']
            and (row.get('extent') or 0) <= room[row['name']])


def main():
    rows = [json.loads(line) for line in ROWS.read_text(encoding='utf-8').splitlines()]
    room = room_table()
    prior = prior_definitions()
    measured = [row for row in rows if row.get('status') in ('measured', 'exact')]
    actionable = [row for row in measured if row['name'] not in prior]
    matched = [row for row in actionable if credited(row, room)]
    report = {
        'corpusFunctions': len(rows),
        'measured': len(measured),
        'exactNew': len(matched),
        'exactNewBytes': sum(row['size'] for row in matched),
        'status': {},
        'thresholds': {},
        'actionableThresholds': {},
        'bands': {},
        'conversion': {},
        'compilesPerMatch': None}
    for row in rows:
        report['status'][row.get('status')] = report['status'].get(row.get('status'), 0) + 1
    for threshold in (99, 95, 90, 75, 50):
        report['thresholds'][str(threshold)] = sum(
            1 for row in measured if (row.get('fuzzy') or 0) >= threshold)
        report['actionableThresholds'][str(threshold)] = sum(
            1 for row in actionable if (row.get('fuzzy') or 0) >= threshold)
    for name in BANDS:
        cells = [row for row in actionable if band(row['size']) == name]
        report['bands'][name] = {
            'n': len(cells), 'bytes': sum(row['size'] for row in cells),
            'exact': sum(1 for row in cells if credited(row, room)),
            'exactBytes': sum(row['size'] for row in cells if credited(row, room))}
    results = [json.loads(path.read_text(encoding='utf-8'))
               for path in sorted(RESULTS.glob('*.json'))] if RESULTS.is_dir() else []
    bands = (('99-100', 99.0, 101.0), ('98-99', 98.0, 99.0),
             ('95-98', 95.0, 98.0), ('90-95', 90.0, 95.0))
    for label, low, high in bands:
        cells = [row for row in results if low <= (row.get('fuzzy0') or 0) < high]
        exact = [row for row in cells if row.get('exact')]
        report['conversion'][label] = {
            'attempted': len(cells), 'exact': len(exact),
            'bytes': sum(row['size'] for row in exact),
            'compiles': sum(row.get('compiles') or 0 for row in cells)}
    report['conversion']['total'] = {
        'attempted': len(results),
        'exact': sum(1 for row in results if row.get('exact')),
        'bytes': sum(row['size'] for row in results if row.get('exact')),
        'compiles': sum(row.get('compiles') or 0 for row in results)}
    compiles = count_compiles()
    matches = report['exactNew'] + report['conversion']['total']['exact']
    report['compiles'] = compiles
    report['compilesPerMatch'] = round((compiles + report['conversion']['total']['compiles'])
                                       / matches, 1) if matches else None
    (WORK / 'report.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(report, indent=1))
    return 0


def count_compiles():
    """Every draft compile attempt the bisecting compiler run made."""
    directory = WORK / 'tus'
    return len(list(directory.glob('*.c'))) if directory.is_dir() else 0


if __name__ == '__main__':
    sys.exit(main())
