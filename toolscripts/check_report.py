"""Build the progress report and check it against independent measurements.

The report is only worth publishing if its numbers agree with documents that
were produced independently: the ExHeader denominator, the image link's byte
comparison, and the split's function count. This is the check CI and a local
``run_checks.py`` run use; it needs the user's original image, like build.py.
"""

import json
import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
VERSION = 'update-content0'
BUILD = ROOT / 'build' / VERSION


def read(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def main():
    sys.path.insert(0, str(ROOT))
    sys.path.insert(0, str(ROOT / 'toolscripts'))
    import build
    import exheader

    if build.main() not in (0, 2):
        return 1
    report = read(BUILD / 'report.json')
    link = read(BUILD / 'link.json')
    mapping = read(BUILD / 'objects/object-map.json')
    project = read(ROOT / 'objdiff.json')
    layout = exheader.layout((ROOT / 'generated' / VERSION / 'exheader.bin').read_bytes())
    text = exheader.segment(layout, 'text')
    measures = report['measures']

    problems = []
    if int(measures['total_code']) != text['initializedBytes']:
        problems.append('total_code %s != initialized text %d' % (measures['total_code'], text['initializedBytes']))
    if int(measures['matched_code']) != link['matchingBytes']:
        problems.append('matched_code %s != image link matching bytes %d'
                        % (measures['matched_code'], link['matchingBytes']))
    if int(measures['matched_functions']) != link['matchingFunctions']:
        problems.append('matched_functions %s != image link matching functions %d'
                        % (measures['matched_functions'], link['matchingFunctions']))
    if int(measures['total_functions']) != mapping['split']['functionCount']:
        problems.append('total_functions %s != split functions %d'
                        % (measures['total_functions'], mapping['split']['functionCount']))
    if int(measures['total_units']) != len(project['units']) or len(report['units']) != len(project['units']):
        problems.append('unit counts disagree between the report and the objdiff project')
    if link['sourceFunctions'] + link['retainedFunctions'] != mapping['split']['functionCount']:
        problems.append('the image link does not account for every split function exactly once')
    recorded = {(row['id'], row['sha256']) for row in report.get('compilers', [])}
    produced = {(row['id'], row['sha256']) for row in mapping.get('compilers', [])}
    if not recorded:
        problems.append('the report records no compiler identity')
    if recorded != produced:
        problems.append('the report compiler identity differs from the objects it measured')
    expected_units = {unit['name']: unit for unit in mapping['units']}
    for unit in report['units']:
        expected = expected_units.get(unit['name'])
        if expected is None:
            problems.append('the report names a unit the objects do not: ' + unit['name'])
        elif unit['metadata'].get('compilerProfile') != expected.get('compilerProfile'):
            problems.append('unit %s records a different compiler profile' % unit['name'])
    for problem in problems:
        print(problem)
    print('report: total_code=%s matched_code=%s matched_functions=%s units=%s'
          % (measures['total_code'], measures['matched_code'], measures['matched_functions'],
             measures['total_units']))
    print('compiler: ' + ', '.join('%s %s' % (row['id'], row['sha256'][:12])
                                   for row in report.get('compilers', [])))
    print('link:   source=%d matched=%d retained=%d identical=%s complete=%s'
          % (link['sourceFunctions'], link['matchingFunctions'], link['retainedFunctions'],
             link['imageIdentical'], link['complete']))
    return 1 if problems else 0


if __name__ == '__main__':
    raise SystemExit(main())
