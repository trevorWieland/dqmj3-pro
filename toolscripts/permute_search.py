"""Search small source permutations for the one that compiles byte-exactly.

The failures this project measures are not wrong algorithms. They are the same
algorithm written with a declaration two statements earlier, a member expression
where the original held a pointer in a local, a ternary whose arms are the other
way round, or an addition whose operands armcc scheduled differently. A human
finds those by reading the diff and guessing at armcc's habits; this module
guesses systematically and lets the measured compiler decide.

The search is a breadth-first beam over single operators and then over pairs of
them, ordered by the byte score ``permute`` reports. Every candidate is written
out and compiled with the unit's measured profile; only a candidate whose placed
bytes equal the original extent is a result. There is no instruction fitting, no
assembly and no object patching anywhere in the loop.
"""

import argparse
import json
import sys
import time
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import permute
from permute_ops import mutations
from permute_text import function_span, replace


def evaluate(context, unit, name, file_text, fn_text, span, work):
    """Score one mutated function in its unit and report how far it is."""
    import zlib
    whole = replace(file_text, span[0], span[1], fn_text)
    label = 'm%08x' % (zlib.crc32(fn_text.encode('utf-8')) & 0xffffffff)
    result = permute.score_function(context, unit, name, whole, Path(work) / label)
    result['mutant'] = fn_text
    return result


def search(context, unit, name, budget=400, beam=6, depth=2, jobs=8, work=None,
           file_text=None):
    """Beam-search single and paired permutations of one function.

    The first level tries every operator once. The second tries every operator
    on each of the best few first-level mutants, which is where the fixes that
    need two coordinated rewrites live. A function that matches stops the search.
    """
    source = context.root / unit['source']
    file_text = file_text if file_text is not None else source.read_text(encoding='utf-8')
    span = function_span(file_text, name)
    work = Path(work or (context.root / 'work/permute/search' / name))
    work.mkdir(parents=True, exist_ok=True)
    started = time.time()
    cache, compiles = {}, 0
    base = permute.score_function(context, unit, name, file_text, work / 'base')
    compiles += 1
    results = [base]
    if base.get('exact'):
        return summarise(name, results, compiles, time.time() - started)
    original = file_text[span[0]:span[1]]
    local = function_span(original, name)
    frontier = [(original, [])]
    for level in range(depth):
        batch = []
        for mutant, labels in frontier:
            for label, changed in mutations(mutant, local):
                if changed in cache:
                    continue
                cache[changed] = True
                batch.append((changed, labels + [label]))
                if len(batch) + compiles >= budget:
                    break
            if len(batch) + compiles >= budget:
                break
        if not batch:
            break
        with ThreadPoolExecutor(max_workers=jobs) as pool:
            scored = list(pool.map(lambda item: evaluate(context, unit, name, file_text,
                                                         item[0], span, work), batch))
        compiles += len(scored)
        for result, (mutant, labels) in zip(scored, batch):
            result['labels'] = labels
            results.append(result)
            if result.get('exact'):
                return summarise(name, results, compiles, time.time() - started)
        scored.sort(key=permute.rank)
        frontier = [(result['mutant'], result['labels']) for result in scored[:beam]]
    return summarise(name, results, compiles, time.time() - started)


def summarise(name, results, compiles, seconds):
    """The search's own account of what it tried and what it found."""
    matches = [result for result in results if result.get('exact')]
    best = min(results, key=permute.rank)
    return {'name': name, 'compiles': compiles, 'seconds': seconds,
            'matches': len(matches),
            'best': {key: best.get(key) for key in ('name', 'size', 'words', 'first', 'extentDelta',
                                                    'labels', 'mutant')},
            'exact': bool(matches)}


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument('--root', default=str(permute.ROOT))
    parser.add_argument('--source', required=True, help='the unit the function lives in')
    parser.add_argument('--function', required=True)
    parser.add_argument('--budget', type=int, default=400)
    parser.add_argument('--beam', type=int, default=6)
    parser.add_argument('--depth', type=int, default=2)
    parser.add_argument('--jobs', type=int, default=8)
    parser.add_argument('--json', help='write the search summary here')
    arguments = parser.parse_args(argv)
    context = permute.Context(arguments.root)
    unit = context.unit_for(arguments.source)
    result = search(context, unit, arguments.function, arguments.budget, arguments.beam,
                    arguments.depth, arguments.jobs)
    text = json.dumps({key: value for key, value in result.items() if key != 'best'},
                      indent=1)
    print(text)
    print(json.dumps(result['best'], indent=1))
    if arguments.json:
        Path(arguments.json).write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    return 0 if result['exact'] else 1


if __name__ == '__main__':
    sys.exit(main())
