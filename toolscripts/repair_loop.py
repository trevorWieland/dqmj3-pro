"""Close the gap between a decompiled draft and byte-exact source, iteratively.

The corpus drafter measures a decompiled body once and keeps it only if the
first compile happens to equal the original. That is why the 128-511 byte band
converts at 0.6 %: the decompiler's C is correct but shaped differently from
what armcc was given. This module turns the measurement into feedback. It drafts
one function, compiles and places it, classifies the difference, chooses the
source rewrites most likely to remove that class, compiles the resulting
candidates, and repeats until the bytes agree or a compile budget runs out.

Nothing here fits an instruction, patches an object or reads the original bytes
into the candidate. Every step is ordinary C compiled by the measured profile;
the original image is only ever the thing the compiled bytes are compared to.

The loop is:
    draft -> compile -> score -> classify difference -> choose repairs -> repeat

The difference classes and the transformations they select are in
``repair_diff.REPAIRS``; the new transformations this band needed -- temporary
introduction and removal, a cast base held in a pointer local, compound-statement
splitting, wider reordering, the guarded-assignment form of a bare ``if`` and
cast-width re-inference -- are in ``repair_ops``. The corpus draft is the
starting point, so a function the decompiler already got right costs one compile.
"""

import argparse
import hashlib
import re
import json
import sys
import threading
import time
import zlib
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(Path(__file__).resolve().parent))

import corpus_draft as draftlib                     # noqa: E402
import corpus_draft_emit                             # noqa: E402
import c_function_definitions                        # noqa: E402
import permute                                       # noqa: E402
import repair_diff                                   # noqa: E402
import repair_ops                                    # noqa: E402
from permute_text import function_span, mask, match_pair, replace as splice_text   # noqa: E402


class Book:
    """The decompilation corpus, indexed by the split's function name."""

    def __init__(self, root):
        self.root = Path(root)
        self.state = json.loads((self.root / 'work/drafter/features.json')
                                .read_text(encoding='utf-8'))
        self.records = {record['name']: record for record in self.state['functions'].values()}
        self.data_types = self.state['dataTypes']
        self.return_types = self.state.get('returnTypes', {})
        self.measured = measured_names(self.root)

    def record(self, name):
        return self.records[name]

    def text(self, name):
        """One function's draft translation unit, self-contained."""
        record = self.records[name]
        body = draftlib.rewrite(draftlib.corpus_text(record['address']),
                                record.get('strings'), self.data_types)
        header = corpus_draft_emit.header_text(self.data_types, [record],
                                               self.return_types)
        return '%s\n%s\n%s\n' % (header, draftlib.svc_helpers(body), body)

    def select(self, shape, minimum, maximum, limit=0, names=None):
        """A bounded, deterministic population from the requested band."""
        if names is not None:
            wanted = set(names)
            chosen = [record for name, record in self.records.items() if name in wanted]
        else:
            chosen = [record for name, record in self.records.items()
                      if name not in self.measured and shape_ok(record, shape)
                      and minimum <= record['size'] <= maximum]
        chosen.sort(key=lambda record: record['address'])
        if limit and len(chosen) > limit:
            # Address order is systematic, not random: take a stable hash order
            # so the sample is reproducible and not biased to the low image.
            chosen = sorted(chosen, key=lambda record: hashlib.sha256(
                record['name'].encode('ascii')).hexdigest())[:limit]
            chosen.sort(key=lambda record: record['address'])
        return chosen


OUTPUT_COMPONENTS = ('src/native/wave084-repair/',)


def measured_names(root):
    """Split functions any configured source already defines; a draft would duplicate.

    The build report credits functions that match, but a function can be defined
    by the source and still be uncredited -- a draft that lost exactness when its
    group was recompiled, for example. Scanning the configured sources for
    definitions is the set that must not be drafted again.
    """
    config = json.loads((Path(root) / 'config/build-units.json').read_text(encoding='utf-8'))
    definitions = set()
    for unit in config['units']:
        if unit['source'].startswith(OUTPUT_COMPONENTS):
            continue
        path = Path(root) / unit['source']
        definitions |= c_function_definitions.definitions(
            path.read_text(encoding='utf-8', errors='replace'))
    return definitions


def shape_ok(record, shape):
    if shape == 'clean':
        return (not record['warned'] and not record['indirect'] and not record['data']
                and not record['hasStrings'] and not record['labels']
                and not record['switch'] and not record['goto'])
    if shape == 'clean+control':
        return (not record['warned'] and not record['indirect'] and not record['data']
                and not record['hasStrings'])
    if shape == 'all':
        return not record['warned']
    return True


class Scorer:
    """Score one candidate function with the project's own measurement."""

    def __init__(self, root, jobs=8):
        self.root = Path(root)
        self.jobs = jobs
        self.context = permute.Context(self.root)
        self.work = self.root / 'work/repair'
        self.header = self.work / 'tus' / 'decompiled.h'
        self.header.parent.mkdir(parents=True, exist_ok=True)
        self.header.write_text(draftlib.SHIM, encoding='utf-8')
        self.compiles = 0
        self.lock = threading.Lock()

    def note_compile(self):
        with self.lock:
            self.compiles += 1

    def score(self, name, text, tag):
        """Compile, place and compare one candidate; never raises on a draft."""
        work = self.work / 'candidates' / tag
        work.mkdir(parents=True, exist_ok=True)
        source = work / 'candidate.c'
        source.write_text(text, encoding='utf-8')
        started = time.time()
        obj = work / 'candidate.o'
        unit = {'source': str(source)}
        if permute.compile_object(self.context, unit, source, obj,
                                  include=[self.header.parent]) is None:
            self.note_compile()
            return {'name': name, 'exact': False, 'class': 'compile-failed',
                    'error': 'compile failed', 'seconds': time.time() - started,
                    'words': 1 << 20, 'sizeDelta': 1 << 20, 'extentDelta': 1 << 20,
                    'firstOffset': 1 << 30}
        try:
            compiled, code = permute.place_function(self.context, work, obj, name,
                                                    fallback=False)
        except (ValueError, OSError) as error:
            self.note_compile()
            return {'name': name, 'exact': False, 'class': 'placement-failed',
                    'error': str(error)[:160], 'seconds': time.time() - started,
                    'words': 1 << 20, 'sizeDelta': 1 << 20, 'extentDelta': 1 << 20,
                    'firstOffset': 1 << 30}
        self.note_compile()
        result = permute.compare(self.context, name, compiled, code)
        symbol, original = self.context.original(name, len(compiled))
        difference = repair_diff.classify(symbol, original, compiled, code)
        difference.update({key: result[key] for key in
                           ('name', 'address', 'mode', 'size', 'code', 'extent', 'exact',
                            'fits', 'words', 'first', 'sizeDelta', 'extentDelta')})
        difference['seconds'] = time.time() - started
        return difference


def function_and_spans(text, name):
    """The definition text and the spans the mutators need.

    The permuter's ``function_span`` wants the return type on the same line as
    the name, and a decompiled draft sometimes puts it on the line above. The
    fallback finds the definition by its brace pair and joins that one line
    break for the mutation engine; the outer span still covers the original
    text, so a mutant is spliced back without shifting anything.
    """
    try:
        outer = function_span(text, name)
        return text[outer[0]:outer[1]], outer, function_span(text[outer[0]:outer[1]], name)
    except KeyError:
        pass
    masked = mask(text)
    match = re.search(r'\b' + re.escape(name) + r'\s*\(', masked)
    if match is None:
        raise KeyError('no definition of ' + name)
    opening = masked.index('(', match.start())
    closing = match_pair(masked, opening)
    position = closing + 1
    while position < len(masked) and masked[position].isspace():
        position += 1
    if position >= len(masked) or masked[position] != '{':
        raise KeyError('no definition of ' + name)
    end = match_pair(masked, position)
    start = max(masked.rfind(';', 0, match.start()),
                masked.rfind('}', 0, match.start()), -1) + 1
    outer = (start, end + 1, position + 1, end)
    definition = text[start:end + 1]
    joined = re.sub(r'(\b[A-Za-z_]\w*[\w \t\*]*)\s*\n\s*(?='
                    + re.escape(name) + r'\s*\()', r'\1 ', definition, count=1)
    return joined, outer, function_span(joined, name)


def candidates(name, text, difference):
    """The mutants to compile next, class-ordered, for one candidate text."""
    definition, span, local = function_and_spans(text, name)
    produced = []
    for label, mutant in repair_ops.mutations(definition, local):
        produced.append((label, splice_text(text, span[0], span[1], mutant)))
    return repair_diff.order_mutations(produced, difference)


def repair_rank(result):
    """Ordering for the beam: right extent first, then words, then offset."""
    if result.get('class') in ('compile-failed', 'placement-failed'):
        return (9, 1 << 30, 1 << 30, 1 << 30)
    extent_wrong = 1 if (result.get('sizeDelta') or result.get('extentDelta')) else 0
    return (extent_wrong, abs(result.get('sizeDelta', 0)) + abs(result.get('extentDelta', 0)),
            result.get('words', 1 << 20), result.get('firstOffset') or 1 << 30)


REACH_SIZE_DELTA = 8
REACH_EXTENT_DELTA = 8
REACH_WORDS = 40


def reachable(base):
    """Whether a source repair of depth three could plausibly close this gap.

    A permutation changes which register holds a value or which of two adjacent
    statements runs first; it does not add the hundred bytes a structurally
    different body compiles to. Spending the repair budget on a draft whose
    compiled extent is far from the original would only make the cost per match
    look worse than the method is. Such a draft is reported with its difference
    class instead, which is the honest result: the method's reach was exhausted
    at the draft.
    """
    if base.get('exact'):
        return True
    if base.get('class') in ('compile-failed', 'placement-failed'):
        return False
    if not base.get('fits', True):
        return False
    if abs(base.get('sizeDelta') or 0) > REACH_SIZE_DELTA:
        return False
    if abs(base.get('extentDelta') or 0) > REACH_EXTENT_DELTA:
        return False
    if base.get('words', 1 << 20) > REACH_WORDS:
        return False
    return True


def tag_of(name, label, generation):
    digest = zlib.crc32(('%s|%s|%d' % (name, label, generation)).encode('utf-8'))
    return '%s_%08x' % (name, digest & 0xffffffff)


def allocate(budget, depth, level):
    """Compiles granted to each depth: deep levels keep a share of the budget."""
    if depth <= 1:
        return budget
    shares = {0: 0.5, 1: 0.3, 2: 0.2}
    return max(4, int(budget * shares.get(min(level, 2), 0.2)))


def run_function(scorer, book, record, budget, beam, depth, out=None):
    """The iterative repair loop for one function, bounded by compile count."""
    name = record['name']
    started = time.time()
    base_text = book.text(name)
    rows = []
    base = scorer.score(name, base_text, tag_of(name, 'base', 0))
    base['mutant'] = base_text
    base['labels'] = []
    rows.append(base)
    if base.get('exact'):
        return {'name': name, 'exact': True, 'compiles': 1,
                'seconds': time.time() - started, 'labels': [], 'best': base,
                'startClass': 'exact', 'generated': 0, 'reachable': True}
    start_class = base['class']
    if not reachable(base):
        return {'name': name, 'exact': False, 'compiles': 1,
                'seconds': time.time() - started, 'labels': [], 'best': base,
                'startClass': start_class, 'generated': 0, 'reachable': False}
    frontier = [(base_text, [], base)]
    seen = {base_text}
    spent = 1
    generated = 0
    for level in range(depth):
        remaining = budget - spent
        if remaining <= 0:
            break
        grant = min(remaining, allocate(budget, depth, level))
        batch = []
        for text, labels, difference in frontier:
            for label, mutant in candidates(name, text, difference):
                if mutant in seen:
                    continue
                if len(batch) >= grant:
                    break
                seen.add(mutant)
                batch.append((mutant, labels + [label]))
            if len(batch) >= grant:
                break
        generated += len(batch)
        if not batch:
            break
        scored = []
        for mutant, labels in batch:
            result = scorer.score(name, mutant,
                                  tag_of(name, labels[-1] if labels else 'x',
                                          zlib.crc32(mutant.encode())))
            result['mutant'] = mutant
            result['labels'] = labels
            rows.append(result)
            scored.append(result)
            if result.get('exact'):
                if out is not None:
                    save_rows(out, name, rows)
                return {'name': name, 'exact': True, 'compiles': spent + len(scored),
                        'seconds': time.time() - started, 'labels': labels,
                        'best': result, 'startClass': start_class,
                        'generated': generated, 'reachable': True}
        spent += len(scored)
        scored.sort(key=repair_rank)
        frontier = [(result['mutant'], result['labels'], result) for result in scored[:beam]
                    if result.get('class') not in ('compile-failed', 'placement-failed')]
        if not frontier:
            break
    if out is not None:
        save_rows(out, name, rows)
    best = min(rows, key=repair_rank)
    return {'name': name, 'exact': False, 'compiles': spent,
            'seconds': time.time() - started, 'labels': best.get('labels', []),
            'best': best, 'startClass': start_class, 'generated': generated,
            'reachable': True}


def save_rows(out, name, rows):
    """One JSONL per function: what every candidate scored, for the analysis."""
    directory = Path(out) / 'rows'
    directory.mkdir(parents=True, exist_ok=True)
    with (directory / (name + '.jsonl')).open('w', encoding='utf-8') as handle:
        for row in rows:
            handle.write(json.dumps({key: row.get(key) for key in
                                     ('class', 'words', 'sizeDelta', 'extentDelta',
                                      'firstOffset', 'labels', 'detail', 'error')}) + '\n')


def write_summary(out, document):
    out.mkdir(parents=True, exist_ok=True)
    (out / 'summary.json').write_text(json.dumps(document, indent=1) + '\n',
                                      encoding='utf-8')


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument('--root', default=str(ROOT))
    parser.add_argument('--shape', default='clean')
    parser.add_argument('--minimum', type=int, default=128)
    parser.add_argument('--maximum', type=int, default=511)
    parser.add_argument('--sample', type=int, default=400)
    parser.add_argument('--budget', type=int, default=64, help='compiles per function')
    parser.add_argument('--beam', type=int, default=6)
    parser.add_argument('--depth', type=int, default=3)
    parser.add_argument('--jobs', type=int, default=8)
    parser.add_argument('--out', default='work/repair/run')
    parser.add_argument('--calibrate', action='store_true',
                        help='score the draft only and write the difference classes')
    parser.add_argument('--functions', help='JSON list of function names')
    arguments = parser.parse_args(argv)
    root = Path(arguments.root)
    book = Book(root)
    names = json.loads(Path(arguments.functions).read_text()) if arguments.functions else None
    chosen = book.select(arguments.shape, arguments.minimum, arguments.maximum,
                         arguments.sample, names)
    scorer = Scorer(root, arguments.jobs)
    out = root / arguments.out
    out.mkdir(parents=True, exist_ok=True)
    print('sample: %d functions, %d bytes, band %d-%d, shape %s'
          % (len(chosen), sum(record['size'] for record in chosen),
             arguments.minimum, arguments.maximum, arguments.shape))
    started = time.time()
    if arguments.calibrate:
        def calibrate(record):
            result = scorer.score(record['name'], book.text(record['name']),
                                  tag_of(record['name'], 'calibrate', 0))
            return {'name': record['name'], 'size': record['size'],
                    'class': result['class'], 'words': result.get('words'),
                    'sizeDelta': result.get('sizeDelta'),
                    'extentDelta': result.get('extentDelta'),
                    'firstOffset': result.get('firstOffset'),
                    'detail': result.get('detail'), 'error': result.get('error')}
        with ThreadPoolExecutor(max_workers=arguments.jobs) as pool:
            rows = list(pool.map(calibrate, chosen))
        (out / 'calibration.json').write_text(json.dumps(rows, indent=0) + '\n',
                                              encoding='utf-8')
        counts = {}
        for row in rows:
            counts[row['class']] = counts.get(row['class'], 0) + 1
        print(json.dumps({'classes': counts, 'compiles': scorer.compiles,
                          'seconds': round(time.time() - started, 1)}, indent=1))
        return 0
    summary = {'sample': len(chosen), 'bytes': sum(r['size'] for r in chosen),
               'band': [arguments.minimum, arguments.maximum], 'shape': arguments.shape,
               'budget': arguments.budget, 'beam': arguments.beam, 'depth': arguments.depth,
               'functions': []}
    done = [0]
    exact = [0]

    def work(record):
        result = run_function(scorer, book, record, arguments.budget,
                              arguments.beam, arguments.depth, out)
        row = {'name': record['name'], 'size': record['size'], 'exact': result['exact'],
               'compiles': result['compiles'], 'seconds': round(result['seconds'], 3),
               'startClass': result['startClass'], 'reachable': result['reachable'],
               'labels': result['labels'],
               'bestClass': result['best'].get('class'),
               'bestWords': result['best'].get('words'),
               'bestSizeDelta': result['best'].get('sizeDelta'),
               'generated': result['generated']}
        if result['exact']:
            matches = out / 'matches'
            matches.mkdir(exist_ok=True)
            (matches / (record['name'] + '.c')).write_text(result['best']['mutant'],
                                                          encoding='utf-8')
        with scorer.lock:
            done[0] += 1
            exact[0] += 1 if result['exact'] else 0
            if done[0] % 25 == 0:
                print('%d/%d exact=%d compiles=%d elapsed=%.1fs'
                      % (done[0], len(chosen), exact[0], scorer.compiles,
                         time.time() - started), flush=True)
        return row

    completed = []
    with ThreadPoolExecutor(max_workers=arguments.jobs) as pool:
        futures = {pool.submit(work, record): record for record in chosen}
        for future in as_completed(futures):
            try:
                completed.append(future.result())
            except Exception as error:      # a crashed loop is a reported fact
                record = futures[future]
                completed.append({'name': record['name'], 'size': record['size'],
                                  'exact': False, 'compiles': 1, 'seconds': 0,
                                  'startClass': 'loop-error', 'reachable': False,
                                  'labels': [], 'bestClass': 'loop-error',
                                  'bestWords': None, 'bestSizeDelta': None,
                                  'generated': 0, 'error': str(error)[:200]})
    summary['functions'] = sorted(completed, key=lambda row: row['name'])
    summary['compiles'] = scorer.compiles
    summary['seconds'] = round(time.time() - started, 1)
    summary['reachable'] = sum(1 for row in completed if row.get('reachable'))
    summary['exactFunctions'] = [row['name'] for row in completed if row['exact']]
    summary['exactBytes'] = sum(row['size'] for row in completed if row['exact'])
    summary['compileCostPerMatch'] = (scorer.compiles / len(summary['exactFunctions'])
                                      if summary['exactFunctions'] else None)
    triaged = {}
    for row in completed:
        if not row.get('reachable'):
            triaged[row['startClass']] = triaged.get(row['startClass'], 0) + 1
    summary['triaged'] = triaged
    write_summary(out, summary)
    exact = [row for row in completed if row['exact']]
    print(json.dumps({'sample': len(chosen), 'exact': len(exact),
                      'bytes': sum(row['size'] for row in exact),
                      'reachable': summary['reachable'],
                      'compiles': scorer.compiles,
                      'seconds': summary['seconds'],
                      'compileCost': summary['compileCostPerMatch'],
                      'triaged': triaged}, indent=1))
    return 0


if __name__ == '__main__':
    sys.exit(main())
