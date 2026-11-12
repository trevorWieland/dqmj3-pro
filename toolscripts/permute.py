"""Score one candidate C function against its original extent, byte for byte.

The measurement this project already has compares a whole source unit at once,
which is the right shape for a build report and the wrong shape for a search: a
search asks the same question hundreds of times about one function while it
changes. This module is that question.

It uses the same inputs and the same compiler command line as the build -- the
unit's declared compiler profile, the preinclude, the include scope, the
``armcc-split`` rewrite, then the placement link that gives every split function
its original address -- and it compares only the function it was asked about. A
candidate is placed with its compiled bytes at its original address on top of a
linker script that defines every other split symbol as an absolute address, so a
``bl`` encodes what the original encodes and a mismatch is the source's, not the
relocation's.

The score is the truth the build would report: a function matches only when the
instructions it compiled to, the data the compiler placed after them, and their
combined extent all equal the original bytes at that address. A near miss is
reported as the number of differing 32-bit words, the first differing offset and
the extent delta, which is what a search needs to tell a promising mutant from a
hopeless one.

Nothing here decides what a candidate means; it only reports what the measured
compiler produced and how far it is from the original.
"""

import argparse
import json
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import absolute_symbols
import armcc_object
import data_symbols
import elf_objects
import exheader
import split as split_module
from objdiff_objects import compiler_argv, configured_sources, preinclude_for
from placement import place, read_json, run

ROOT = Path(__file__).resolve().parents[1]
VERSION = 'update-content0'
CANONICAL_SOURCE = 'config/build-units.json'
SPLIT = 'config/symbols.txt'


def try_run(argv, log):
    """Run a command and return False instead of raising, for a search."""
    import subprocess
    result = subprocess.run([str(item) for item in argv], capture_output=True, timeout=300)
    log = Path(log)
    log.parent.mkdir(parents=True, exist_ok=True)
    log.write_bytes(result.stdout + result.stderr)
    return result.returncode == 0


class Context:
    """The original image, its split, and the compiler configuration."""

    def __init__(self, root):
        self.root = Path(root)
        generated = self.root / 'generated' / VERSION
        self.image = (generated / 'code.bin').read_bytes()
        header = (generated / 'exheader.bin').read_bytes()
        self.layout = exheader.layout(header)
        self.text = exheader.segment(self.layout, 'text')
        self.functions = split_module.load(self.root / SPLIT, self.text['address'],
                                          self.text['initializedBytes'])
        self.constants = absolute_symbols.definitions(absolute_symbols.load(self.root))
        self.origin = self.text['codeBinOffset'] - self.text['address']
        config = read_json(self.root / CANONICAL_SOURCE)
        self.units = {unit['source']: unit for unit in config['units']}
        self.excluded = {row['source'] for row in config.get('excludedSources', [])}

    def original(self, name, extent=None):
        """The original bytes at a function's address, at least its primary extent.

        A function's compiled section may carry data after its instructions --
        a literal pool armcc placed inline -- and the project compares those
        bytes against the original bytes at the same address. Asking for only
        the primary extent would call a pool that is exactly the original pool
        a mismatch, so the slice follows the compiled extent.
        """
        symbol = self.functions.by_name[name]
        start = self.origin + symbol.address
        length = symbol.size if extent is None else max(symbol.size, extent)
        return symbol, self.image[start:start + length]

    def slot(self, name):
        """The bytes a function owns before the next original range starts."""
        symbol = self.functions.by_name[name]
        starts = sorted({row.address for row in self.functions.symbols}
                        | {address for address, _ in self.functions.extra_ranges()})
        import bisect
        index = bisect.bisect_right(starts, symbol.address)
        limit = (starts[index] if index < len(starts) else
                 self.text['address'] + self.text['initializedBytes'])
        return limit - symbol.address

    def unit_for(self, source):
        unit = self.units.get(source)
        if unit is None:
            raise ValueError('Source is not a configured build unit: ' + source)
        return unit


def compile_object(context, unit, source, output, include=()):
    """Compile one candidate with the profile's own command line and split it.

    A candidate is written outside the source tree, so the directory its unit
    lives in is added to the quote-include scope; a unit's own headers are
    reached by the same names at the same depth as in the build.
    """
    source, output = Path(source), Path(output)
    output.parent.mkdir(parents=True, exist_ok=True)
    raw = output.with_name(output.name + '.armcc.o')
    argv = compiler_argv(context.root, unit, source, raw)
    extra = []
    for directory in include:
        extra += ['-I', str(directory)]
    position = len(argv) - 2 if argv[-2] == '-o' else len(argv)
    argv[position:position] = extra
    if not try_run(argv, output.with_name(output.name + '.log')):
        return None
    try:
        armcc_object.split(raw, output)
    except ValueError as error:
        (output.with_name(output.name + '.log')).write_text(
            'split failed: %s\n' % error, encoding='utf-8')
        return None
    return output


def restricted_symbols(context, obj, names):
    """The split symbols this object can name, plus the ones being placed.

    The placement link only has to know the addresses of the symbols a candidate
    actually references; defining all twenty-seven thousand functions in the
    script costs more in linker and ELF-reading time than the compile it is
    scoring. The full split stays the fallback when a restricted link fails.
    """
    import types
    read = elf_objects.read(obj)
    references = set(names)
    for name in names:
        references |= set(read['functions'][name]['references'])
    keep = [symbol for symbol in context.functions.symbols if symbol.name in references]
    return types.SimpleNamespace(symbols=keep)


def place_functions(context, output, obj, names, fallback=True):
    """Link compiled functions at their original addresses and read their bytes.

    ``fallback`` retries with the whole split symbol table when the restricted
    one leaves a reference unresolved. A corpus draft that names a symbol the
    split cannot place fails either way, so a caller measuring thousands of them
    turns the retry off rather than paying for a twenty-seven-thousand-symbol
    link and ELF read on every unresolvable draft.
    """
    output = Path(output)
    data = data_symbols.definitions(data_symbols.undefined([obj]), context.layout)
    definitions = context.constants + data
    attempts = (restricted_symbols(context, obj, names), context.functions) if fallback \
        else (restricted_symbols(context, obj, names),)
    last = None
    for table in attempts:
        try:
            image, _ = place(context.root, output, [obj], list(names), table, definitions)
            return elf_objects.placed_sections(image)
        except (ValueError, OSError) as error:
            last = error
    raise ValueError('The placement link did not place %s: %s' % (', '.join(names), last))


def place_function(context, output, obj, name, fallback=True):
    """Link one compiled function at its original address and read its bytes."""
    placement = place_functions(context, output, obj, [name], fallback)
    section, function = placement['sections'].get(name), placement['functions'].get(name)
    if section is None or function is None:
        raise ValueError('The placement link did not place ' + name)
    return section['data'], function['size']


def compare(context, name, compiled, code):
    """How far the compiled bytes are from the original extent at that address.

    ``code`` is the instruction size the compiler's symbol states; ``compiled``
    is the whole section, instructions plus any data the compiler placed after
    them. Both are compared against the original bytes at the same address
    because that is what the project's measurement compares.
    """
    symbol, original = context.original(name, len(compiled))
    extent = len(compiled)
    width = max(len(original), extent)
    padded_target = original + b'\x00' * (width - len(original))
    padded_base = compiled + b'\x00' * (width - len(compiled))
    differing = []
    for offset in range(0, width, 4):
        if padded_base[offset:offset + 4] != padded_target[offset:offset + 4]:
            differing.append(offset)
    bytes_equal = extent >= symbol.size and original[:extent] == compiled
    exact = (code == symbol.size and bytes_equal)
    return {'name': name, 'address': '0x%08x' % symbol.address, 'mode': symbol.mode,
            'size': symbol.size, 'code': code, 'extent': extent, 'exact': exact,
            'fits': extent <= context.slot(name),
            'words': len(differing), 'first': differing[0] if differing else None,
            'differing': differing[:16],
            'sizeDelta': code - symbol.size, 'extentDelta': extent - symbol.size,
            'bytesEqual': bytes_equal}


def score_function(context, unit, name, text, work, fallback=True):
    """Compile this candidate text as the unit and score one function in it."""
    work = Path(work)
    work.mkdir(parents=True, exist_ok=True)
    source = work / 'candidate.c'
    source.write_text(text, encoding='utf-8')
    obj = work / 'candidate.o'
    started = time.time()
    includes = [(context.root / unit['source']).parent, context.root]
    if compile_object(context, unit, source, obj, includes) is None:
        return {'name': name, 'exact': False, 'error': 'compile failed', 'seconds': time.time() - started}
    compiled, code = place_function(context, work, obj, name, fallback)
    result = compare(context, name, compiled, code)
    result['seconds'] = time.time() - started
    return result


def rank(result):
    """The search's ordering: get the extent right, then the words, then go deep."""
    if result.get('error'):
        return (99, 99, 1 << 30)
    return (abs(result['sizeDelta']) + abs(result['extentDelta']),
            result['words'], result['first'] if result['first'] is not None else 1 << 30)


def scan_unit(context, output, unit, label):
    """Compile one configured unit and score every split function it defines."""
    source = context.root / unit['source']
    obj = Path(output) / (label + '.o')
    if compile_object(context, unit, source, obj) is None:
        return [{'source': unit['source'], 'error': 'compile failed'}]
    read = elf_objects.read(obj)['functions']
    names = [name for name in read if name in context.functions.by_name]
    if not names:
        return []
    names.sort(key=lambda name: context.functions.by_name[name].address)
    rows = []
    placeable = [name for name in names if read[name]['size'] <= context.slot(name)]
    sections, failed = {}, {}
    if placeable:
        try:
            placement = place_functions(context, output, obj, placeable)
            for name in placeable:
                sections[name] = (placement['sections'][name], placement['functions'][name])
        except (ValueError, OSError) as error:
            # One unresolvable reference fails a whole-unit link. The build
            # drops that function and scores its neighbours, so a scan does the
            # same: retry one function at a time and keep the ones that place.
            for name in placeable:
                try:
                    one = place_functions(context, output, obj, [name])
                    sections[name] = (one['sections'][name], one['functions'][name])
                except (ValueError, OSError):
                    failed[name] = str(error)
    for name in placeable:
        if name in sections:
            section, function = sections[name]
            row = compare(context, name, section['data'], function['size'])
        else:
            row = {'name': name, 'address': '0x%08x' % context.functions.by_name[name].address,
                   'size': context.functions.by_name[name].size, 'exact': False, 'fits': True,
                   'words': 1 << 20, 'first': 0, 'sizeDelta': 1 << 20, 'extentDelta': 1 << 20,
                   'error': 'placement refused: ' + failed.get(name, '')[:80]}
        row['source'] = unit['source']
        rows.append(row)
    for name in names:
        if name in set(placeable):
            continue
        symbol = context.functions.by_name[name]
        rows.append({'name': name, 'source': unit['source'], 'address': '0x%08x' % symbol.address,
                     'size': symbol.size, 'exact': False, 'fits': False,
                     'words': 1 << 20, 'first': 0, 'sizeDelta': 1 << 20, 'extentDelta': 1 << 20})
    return rows


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument('--root', default=str(ROOT))
    parser.add_argument('--work', default='work/permute/score')
    parser.add_argument('--scan', action='store_true', help='score every configured unit')
    parser.add_argument('--source', help='score one configured unit source')
    parser.add_argument('--function', help='with --source, score only this function')
    parser.add_argument('--text', help='with --source and --function, candidate file to score')
    parser.add_argument('--json', help='write scan rows here')
    parser.add_argument('--limit', type=int, default=0, help='stop after this many units')
    arguments = parser.parse_args(argv)
    context = Context(arguments.root)
    output = Path(arguments.root) / arguments.work
    output.mkdir(parents=True, exist_ok=True)
    if arguments.scan:
        units = configured_sources(context.root)
        rows, started = [], time.time()
        for index, unit in enumerate(units):
            if arguments.limit and index >= arguments.limit:
                break
            label = unit['source'].replace('/', '--')[:-2]
            try:
                rows.extend(scan_unit(context, output, unit, label))
            except (ValueError, OSError) as error:
                rows.append({'source': unit['source'], 'error': str(error)})
        seconds = time.time() - started
        destination = Path(arguments.json) if arguments.json else output / 'scan.jsonl'
        destination.write_text(''.join(json.dumps(row) + '\n' for row in rows), encoding='utf-8')
        near = [row for row in rows if not row.get('exact') and not row.get('error')
                and row.get('words', 99) <= 3]
        print('units=%d functions=%d near=%d seconds=%.1f -> %s'
              % (len(units), len(rows), len(near), seconds, destination))
        return 0
    if arguments.source and arguments.function:
        unit = context.unit_for(arguments.source)
        if arguments.text:
            text = Path(arguments.text).read_text(encoding='utf-8')
        else:
            text = (context.root / arguments.source).read_text(encoding='utf-8')
        result = score_function(context, unit, arguments.function, text, output / arguments.function)
        print(json.dumps(result, indent=1))
        return 0 if result.get('exact') else 1
    parser.error('choose --scan or --source with --function')
    return 2


if __name__ == '__main__':
    sys.exit(main())
