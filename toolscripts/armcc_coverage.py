"""Measure which of the reconstructed native sources compile with armcc.

For every ``src/native/*.c`` file this runs the pinned armcc profile twice: once
with the profile's compatibility preinclude and once without it. The two runs
answer different questions.

* Without the preinclude the source is compiled in armcc's own dialect. A file
  that succeeds there is written in a dialect armcc understands.
* With the preinclude it is compiled exactly as the build compiles it. The
  difference is the set of files that need the translation layer, and the
  failures are the files a source change would have to address.

A failure is reported with the first compiler diagnostic that names a blocking
construct, so the output is a work item rather than a pass rate alone. The tool
only measures; it never edits a source file.

Output is a JSON receipt plus a printed table. The tracked documentation records
the measured numbers from a specific run; this tool is how they are reproduced.
"""

import argparse
import json
import re
import subprocess
import sys
import tempfile
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
SOURCE_ROOT = 'src/native'
TIMEOUT = 120
DIAGNOSTIC = re.compile(r'Error:\s*#\d+:\s*(.*)')


def read_json(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def first_error(text):
    for line in text.splitlines():
        match = DIAGNOSTIC.search(line)
        if match:
            return match.group(1).strip()
    lines = [line.strip() for line in text.splitlines() if line.strip()]
    return lines[-1] if lines else 'unknown error'


def classify(message):
    """Name the blocking construct, not just the diagnostic text."""
    if 'identifier "u" is undefined' in message or '"u" is undefined' in message:
        return 'C11 u"" UTF-16 string literal (armcc has no character-literal prefix)'
    if 'expected an identifier' in message:
        return 'anonymous struct/union member (C11; armcc needs --gnu)'
    if 'has no field' in message:
        return 'field is not declared in the armcc configuration (often __SIZEOF_POINTER__)'
    if '_Static_assert' in message or 'static assertion' in message:
        return 'C11 _Static_assert'
    if '_Alignas' in message or '_Alignof' in message:
        return 'C11 alignment specifier'
    if '_Atomic' in message or '__c11_atomic' in message or '__atomic_' in message:
        return 'C11 atomics builtin'
    if '__builtin_' in message:
        return 'Clang builtin'
    return message[:160]


def source_units(root):
    """Every native source, with the build unit when configuration has one."""
    config = read_json(root / 'config/build-units.json')
    units = {unit['source']: unit for unit in config['units']}
    excluded = {row['source'] for row in config.get('excludedSources', [])}
    rows = []
    for path in sorted((root / SOURCE_ROOT).rglob('*.c')):
        relative = path.relative_to(root).as_posix()
        rows.append({'source': relative, 'unit': units.get(relative, {'source': relative}),
                     'configured': relative in units, 'excluded': relative in excluded})
    return rows


def compile_source(root, module, unit, source, output, compat):
    target = output / (source.replace('/', '--') + ('.compat.o' if compat else '.plain.o'))
    argv = module.compiler_argv(root, unit, root / source, target,
                                forced_profile='armcc-4.1-b1454', compat=compat)
    with tempfile.TemporaryDirectory(dir=output) as folder:
        log = Path(folder) / 'compiler.log'
        done = subprocess.run([str(item) for item in argv], capture_output=True, text=True,
                              timeout=TIMEOUT)
        log.write_text((done.stdout or '') + (done.stderr or ''), encoding='utf-8')
    return done.returncode == 0, first_error((done.stdout or '') + (done.stderr or ''))


def measure(root, output):
    sys.path.insert(0, str(Path(root) / 'toolscripts'))
    import objdiff_objects
    output.mkdir(parents=True, exist_ok=True)
    rows = source_units(root)
    results = []
    for index, row in enumerate(rows, 1):
        plain_ok, plain_error = compile_source(root, objdiff_objects, row['unit'],
                                               row['source'], output, False)
        compat_ok, compat_error = compile_source(root, objdiff_objects, row['unit'],
                                                 row['source'], output, True)
        row.update({'plain': 'ok' if plain_ok else 'fail',
                    'compat': 'ok' if compat_ok else 'fail'})
        if not plain_ok:
            row['plainBlocker'] = classify(plain_error)
        if not compat_ok:
            row['compatBlocker'] = classify(compat_error)
        results.append(row)
        print('%3d/%d %-58s plain=%-4s compat=%-4s %s'
              % (index, len(rows), row['source'][len(SOURCE_ROOT) + 1:], row['plain'],
                 row['compat'], row.get('compatBlocker', '')), flush=True)
    blockers = {}
    for row in results:
        if row['compat'] != 'ok':
            blockers[row['compatBlocker']] = blockers.get(row['compatBlocker'], 0) + 1
    summary = {'schemaVersion': 1, 'compilerProfile': 'armcc-4.1-b1454',
               'total': len(results),
               'plainOk': sum(row['plain'] == 'ok' for row in results),
               'compatOk': sum(row['compat'] == 'ok' for row in results),
               'needPreinclude': sum(row['plain'] != 'ok' and row['compat'] == 'ok' for row in results),
               'cannotCompile': sum(row['compat'] != 'ok' for row in results),
               'blockers': blockers, 'sources': results}
    (output / 'coverage.json').write_text(json.dumps(summary, indent=2) + '\n', encoding='utf-8')
    return summary


def main():
    parser = argparse.ArgumentParser(description='Measure armcc compile coverage of src/native.')
    parser.add_argument('--output', default='work/armcc-coverage')
    args = parser.parse_args()
    summary = measure(ROOT, ROOT / args.output)
    print(json.dumps({key: summary[key] for key in
                      ('total', 'plainOk', 'needPreinclude', 'compatOk', 'cannotCompile', 'blockers')}))
    # A source that cannot compile is the measurement, not a tool failure.
    return 0


if __name__ == '__main__':
    sys.exit(main())
