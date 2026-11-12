"""Ship the byte-exact drafts as source, and declare them in the build manifest.

Only a function whose compiled bytes equal the original extent survives this
step. Everything else stays in ``work/drafter/runs/*/results.json`` as a
statistic: a draft that does not match earns nothing and would only clutter the
tree, so it is never written under ``src/``.

The shipped unit is a small C file of functions that share a declaration header:

  src/native/draft001/decompiled.h   the decompiler's own type vocabulary
  src/native/draft001/symbols.h      one declaration per callee and data object
  src/native/draft001/<range>.c      the function bodies, callers before callees

A file is recompiled here before it is declared; a unit that does not compile is
split until every file does, so the manifest never names a file the build cannot
use.
"""

import argparse
import json
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
sys.path.insert(0, str(Path(__file__).resolve().parent))

import corpus_draft as draftlib                          # noqa: E402
import objdiff_objects as oo             # noqa: E402
import corpus_draft_measure as drafter                    # noqa: E402
from corpus_draft_emit import header_text                 # noqa: E402

HEADER_COMMENT = '''/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see docs/2026-11-11-corpus-drafting.md), compiled with
 * the measured original compiler profile (armcc 4.1 build 1454, --cpu=MPCore
 * --apcs=/interwork --c99 -O3 -Otime) and kept only because its placed bytes
 * equal the original extent byte for byte. Nothing here is fitted: a single
 * differing byte would have kept the function out of this file.
 *
 * Address range of this file's functions: %s .. %s.
 * Decompiler pseudo-types are explained in decompiled.h; every name these
 * functions call or address is declared in this unit's own header, because the
 * declaration a draft needs depends on what the unit itself defines.
 */
'''


def load(run):
    verdicts = json.loads((Path(run) / 'results.json').read_text(encoding='utf-8'))
    state = json.loads((ROOT / 'work/drafter/features.json').read_text(encoding='utf-8'))
    return verdicts, state


def resolvable(record, data_types):
    """A shipped function may only address data the build can place by name."""
    for name in draftlib.data_names(record):
        if drafter.re.fullmatch(r'_?DAT_[0-9a-f]{8}', name) is None:
            return False
        if name not in data_types:
            return False
    return True


def group(records, limit_lines, limit_functions):
    groups, current, lines = [], [], 0
    for record in records:
        current.append(record)
        lines += record['lines'] + 3
        if lines > limit_lines or len(current) >= limit_functions:
            groups.append(current)
            current, lines = [], 0
    if current:
        groups.append(current)
    return groups


def write_unit(directory, label, records, data_types, return_types=None):
    """Write one unit and the declarations only this unit needs.

    Each unit gets its own declaration header rather than one shared by the
    component. The contract a draft needs is per translation unit: a callee that
    is defined here is declared with the return type its definition states, while
    the same function called from another unit is declared permissively. One
    shared header cannot say both, and armcc rejects the unit where they meet.
    """
    header = directory / (label + '.h')
    header.write_text(header_text(data_types, records, return_types), encoding='utf-8')
    first, last = records[0]['address'], records[-1]['address']
    bodies = [draftlib.rewrite(draftlib.corpus_text(record['address']),
                               record.get('strings'), data_types) for record in records]
    body = [HEADER_COMMENT % (first, last),
            '#include "decompiled.h"', '#include "%s.h"' % label,
            draftlib.svc_helpers('\n'.join(bodies)), '']
    body.extend(bodies)
    path = directory / (label + '.c')
    path.write_text('\n'.join(body), encoding='utf-8')
    return path


# The three targets whose source build the census check performs, with the flags
# ``toolscripts/compile_sources.py`` uses. A shipped unit is only declared when it
# also compiles there: the build is judged by that check as much as by armcc.
CLANG_TARGETS = [
    ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-mfloat-abi=soft'],
    ['--target=x86_64-pc-windows-msvc'],
    ['--target=aarch64-linux-android29', '-fPIC'],
]
CLANG_FLAGS = ['-std=c11', '-O2', '-ffreestanding', '-fno-builtin', '-ffunction-sections',
               '-fdata-sections', '-Wall', '-Wextra', '-Werror', '-fno-color-diagnostics',
               '-fno-caret-diagnostics']


def clang_compiles(path, work):
    """Whether the census compiler accepts this unit, on every target it builds."""
    for index, target in enumerate(CLANG_TARGETS):
        object_path = work / ('%s.clang%d.o' % (path.stem, index))
        argv = [str(ROOT / 'tools/clang-21/clang.exe'), *target, *CLANG_FLAGS,
                '-c', str(path), '-o', str(object_path)]
        done = subprocess.run(argv, cwd=ROOT, capture_output=True, text=True,
                              encoding='utf-8', errors='replace', timeout=120)
        if done.returncode:
            return False, done.stderr.strip().splitlines()[:3]
    return True, []


def compiles(path, work=None):
    """Compile one shipped unit exactly as the build will."""
    _, functions, error = drafter.compile_one((ROOT, path, None))
    if not functions or error is not None:
        return False, [error]
    if work is not None:
        return clang_compiles(path, work)
    return True, []


def verify(directory, label, records, data_types, return_types=None, work=None, depth=0):
    """Write a unit and split it until every file compiles and is accepted."""
    path = write_unit(directory, label, records, data_types, return_types)
    accepted, detail = compiles(path, work)
    if accepted:
        return [(path, records)]
    path.unlink(missing_ok=True)
    (directory / (label + '.h')).unlink(missing_ok=True)
    if len(records) == 1 or depth > 10:
        return []
    half = len(records) // 2
    return (verify(directory, label + 'a', records[:half], data_types, return_types, work, depth + 1)
            + verify(directory, label + 'b', records[half:], data_types, return_types, work, depth + 1))


def unit_block(source, headers):
    quoted = ',\n'.join('        "%s"' % header for header in headers)
    return ('    {\n'
            '      "source": "%s",\n'
            '      "headers": [\n%s\n      ],\n'
            '      "role": "corpus-draft-byte-exact"\n'
            '    }' % (source, quoted))


def unit_headers(component, source):
    """The transitive header closure of one written unit."""
    stem = Path(source).stem
    return ['src/native/%s/decompiled.h' % component,
            'src/native/%s/%s.h' % (component, stem)]


def update_manifest(component, units):
    """Declare the emitted units without rewriting the rest of the manifest."""
    manifest = ROOT / 'config/build-units.json'
    text = manifest.read_bytes().decode('utf-8')
    prefix = 'src/native/' + component + '/'
    sources = [source for source, _ in units]
    blocks = [unit_block(source, headers) for source, headers in units]
    start = text.index('"units": [')
    body_start = text.index('\n', start) + 1
    close = re.search(r'\n  \],', text[body_start:])
    if close is None:
        raise SystemExit('config/build-units.json has no units array end')
    close_start = body_start + close.start()
    body = text[body_start:close_start]
    body = re.sub(r'\r?\n    \{\r?\n      "source": "'
                  + re.escape(prefix) + r'[^"]+",.*?\r?\n    \},?', '', body, flags=re.S)
    body = body.rstrip()
    if body.endswith(','):
        body = body[:-1]
    updated = text[:body_start] + body + ',\n' + ',\n'.join(blocks) + text[close_start:]
    data = json.loads(updated)
    declared = [unit['source'] for unit in data['units']]
    if sorted(declared) != sorted(set(declared)) or set(sources) - set(declared):
        raise SystemExit('manifest edit produced inconsistent units')
    if '"nativeComponentRoots"' in updated:
        root_start = updated.index('"nativeComponentRoots": [')
        root_close = re.search(r'\n  \]', updated[root_start:])
        position = root_start + root_close.start()
        roots = json.loads(updated).get('nativeComponentRoots', [])
        entry = 'src/native/' + component
        roots = [root for root in roots if root not in (component, entry)] + [entry]
        replacement = ('"nativeComponentRoots": [\n'
                       + ',\n'.join('    "%s"' % root for root in roots))
        updated = updated[:root_start] + replacement + updated[position:]
    manifest.write_bytes(updated.encode('utf-8'))
    return sources


def main(argv):
    parser = argparse.ArgumentParser()
    parser.add_argument('--run', default='work/drafter/runs/all001')
    parser.add_argument('--component', default='draft001')
    parser.add_argument('--lines', type=int, default=420)
    parser.add_argument('--functions', type=int, default=40)
    parser.add_argument('--declare', action='store_true')
    parser.add_argument('--declare-only', action='store_true')
    args = parser.parse_args(argv[1:])
    verdicts, state = load(args.run)
    data_types = state['dataTypes']
    return_types = state.get('returnTypes', {})
    records = {record['address']: record for record in state['functions'].values()}
    exact = []
    for row in verdicts:
        if row['verdict'] != 'exact':
            continue
        record = records.get(row['address'])
        if record is None or not resolvable(record, data_types):
            continue
        exact.append(record)
    exact.sort(key=lambda record: record['address'])
    directory = ROOT / 'src/native' / args.component
    if args.declare_only:
        sources = sorted(path.relative_to(ROOT).as_posix()
                         for path in directory.glob('*.c'))
        units = [(source, unit_headers(args.component, source)) for source in sources]
        update_manifest(args.component, units)
        print('declared %d units in config/build-units.json' % len(sources))
        return 0
    directory.mkdir(parents=True, exist_ok=True)
    (directory / 'decompiled.h').write_text(draftlib.SHIM, encoding='utf-8')
    work = ROOT / 'work/drafter/ship-tus'
    work.mkdir(parents=True, exist_ok=True)
    kept, files = [], []
    for index, chunk in enumerate(group(exact, args.lines, args.functions)):
        label = '%08x_%08x' % (int(chunk[0]['address'], 16), int(chunk[-1]['address'], 16))
        for path, records_in_file in verify(directory, label, drafter.order_group(chunk),
                                            data_types, return_types, work):
            kept.extend(records_in_file)
            files.append(path)
    # The verification compile writes its objects and logs beside the source.
    # They are measurement outputs, not source: the source tree keeps only the
    # unit and its header.
    for pattern in ('*.o', '*.o.armcc.o', '*.log'):
        for artifact in directory.glob(pattern):
            artifact.unlink(missing_ok=True)
    sources = sorted(path.relative_to(ROOT).as_posix() for path in files)
    result = {'component': args.component, 'files': len(sources),
              'functions': len(kept),
              'bytes': sum(int(record['size']) for record in kept)}
    (ROOT / 'work/drafter/ship-report.json').write_text(json.dumps(result, indent=2) + '\n',
                                                        encoding='utf-8')
    print(json.dumps(result, indent=2))
    if args.declare:
        units = [(source, unit_headers(args.component, source)) for source in sources]
        update_manifest(args.component, units)
        print('declared %d units in config/build-units.json' % len(sources))
    return 0


if __name__ == '__main__':
    raise SystemExit(main(sys.argv))



