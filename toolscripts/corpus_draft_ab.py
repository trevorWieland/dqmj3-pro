"""A/B the draft compile-failure count: main's rules against this branch's.

The number a declaration fix is worth is not how many functions *can* compile; it
is how many the measured compiler rejected before and after, over the same
functions and the same unit grouping. This runs both arms:

* ``legacy`` reproduces what ``corpus_draft*.py`` did on main -- every callee
  declared ``undefined4``, no three-byte typedefs, no byte-field, address-of or
  supervisor-call respelling, and CONCAT31 carrying CONCAT13's formula;
* ``branch`` uses :func:`corpus_draft.rewrite` and the per-unit declarations.

Both arms compile with the measured profile and bisect a failing unit down to the
one function that does not compile, exactly as the measuring run does.

    python toolscripts/corpus_draft_ab.py

Results are written to ``work/drafter/ab-<arm>.json``; the two lists are the
functions each arm could not compile.
"""

import json
import shutil
import sys
import time
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))

import corpus_draft as draftlib                          # noqa: E402
import corpus_draft_emit as emit                         # noqa: E402
import corpus_draft_measure as drafter                   # noqa: E402

# The two spellings main got wrong, restored so the comparison is against what
# the merged tool actually did rather than a guess at it.
LEGACY_SHIM = (draftlib.SHIM
               .replace('typedef unsigned int       uint3;\ntypedef int                int3;\n', '')
               + '\n#undef CONCAT31\n'
                 '#define CONCAT31(a, b) (((unsigned int)(unsigned char)(a) << 24) | '
                 '((unsigned int)(b) & 0xffffff))\n')


def legacy_rewrite(text):
    """Main's rewrite: rename FUN_ to fn_ and nothing else."""
    text = draftlib.THUNK.sub(lambda match: 'thunk_fn_' + match.group(1), text)
    return draftlib.FUNCTION.sub(lambda match: 'fn_' + match.group(1), text)


def legacy_header(records, data_types):
    """Main's header: every callee returns undefined4, no return types repeated."""
    lines = ['#include "decompiled.h"', '']
    callees = sorted({name for record in records for name in record['callees']})
    for index in range(0, len(callees), 6):
        lines.append(' '.join('extern undefined4 fn_%s();' % name
                              for name in callees[index:index + 6]))
    data = sorted({name for record in records for name in draftlib.data_names(record)})
    for index in range(0, len(data), 5):
        lines.append(' '.join('extern unsigned char %s[];' % name
                              if data_types.get(name, '').endswith('[]')
                              else 'extern undefined4 %s;' % name
                              for name in data[index:index + 5]))
    return '\n'.join(lines) + '\n'


def groups_of(state):
    """The selection and unit grouping the measuring run uses."""
    chosen = drafter.select(state, 'clean+control', 0, 4, 4096, 'address')
    groups, current, budget = [], [], 0
    for record in chosen:
        current.append(record)
        budget += record['lines'] + 4
        if len(current) >= 60 or budget > 4000:
            groups.append(current)
            current, budget = [], 0
    if current:
        groups.append(current)
    return chosen, groups


def run_arm(state, count):
    """Compile every unit of one arm and return the functions that failed."""
    chosen, groups = groups_of(state)
    out = ROOT / ('work/drafter/runs/ab-' + count)
    tus = out / 'tus'
    if out.exists():
        shutil.rmtree(out)
    tus.mkdir(parents=True)
    if count == 'legacy':
        (tus / 'decompiled.h').write_text(LEGACY_SHIM, encoding='utf-8')
        header = lambda records: legacy_header(records, state['dataTypes'])
        rewrite = legacy_rewrite
    else:
        (tus / 'decompiled.h').write_text(draftlib.SHIM, encoding='utf-8')
        header = lambda records: emit.header_text(state['dataTypes'], records,
                                                  state.get('returnTypes'))
        rewrite = lambda text: draftlib.rewrite(text, None, state['dataTypes'])

    started = time.time()
    failures = {}

    def compile_group(item):
        index, group = item
        bodies = [rewrite(draftlib.corpus_text(record['address'])) for record in group]
        path = tus / ('ab%04d.c' % index)
        path.write_text(header(group) + '\n'.join(bodies), encoding='utf-8')
        _, _, error = drafter.compile_one((ROOT, path, None))
        return group, error

    pending = list(enumerate(groups))
    with ThreadPoolExecutor(max_workers=12) as pool:
        while pending:
            following = []
            for group, error in pool.map(compile_group, pending):
                if error is None:
                    continue
                if len(group) == 1:
                    failures[group[0]['address']] = error
                    continue
                half = len(group) // 2
                following.append((len(following), group[:half]))
                following.append((len(following), group[half:]))
            pending = following
    print('%s: %d functions, %d compile failures, %.1fs'
          % (count, len(chosen), len(failures), time.time() - started))
    (ROOT / ('work/drafter/ab-%s.json' % count)).write_text(
        json.dumps(sorted(failures), indent=0) + '\n', encoding='utf-8')
    return set(failures)


def main():
    state = json.loads(drafter.CACHE.read_text(encoding='utf-8'))
    legacy = run_arm(state, 'legacy')
    branch = run_arm(state, 'branch')
    print('fixed: %d functions that main could not compile now compile'
          % len(legacy - branch))
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
