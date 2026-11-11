"""Pattern-directed synthesis of small native functions, advertised and measured.

Three steps, each of which can be run alone:

``census``   disassemble every retained function of the split inside a size
             limit, classify its complete instruction extent, and report the
             families and refusals. Nothing is written to the source tree.
``emit``     write canonical C for the classified shapes, grouped by family.
``oracle``   compile the emitted files with the active compiler profile, compare
             every function against its original bytes, and keep only exact
             matches. A function that does not match is deleted from the source,
             not credited and not kept as a draft; the reason is recorded so the
             next pass can tell which families are worth extending.
``manifest`` declare the emitted files in ``config/build-units.json``, editing
             that file as text so its mixed line endings survive.

Byte equality is the only acceptance test. The comparison is the build's own:
same profile, same argument vectors, same armcc split, same original extents.
"""

import argparse
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import armcc_object
import elf_objects
import exheader
import native_synth_emit as emitter
import native_synth_shapes as shapes
import objdiff_objects
import split as split_module

VERSION = 'update-content0'
SOURCE_ROOT = 'src/native'
WORK = ROOT / 'work/synth'


def read_json(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def write_json(path, value):
    Path(path).parent.mkdir(parents=True, exist_ok=True)
    Path(path).write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def image_and_split(root):
    """The measured code image, its ExHeader extents and the committed split."""
    header = root / 'generated' / VERSION / 'exheader.bin'
    image = root / 'generated' / VERSION / 'code.bin'
    if not header.is_file() or not image.is_file():
        raise SystemExit('Missing generated/%s; run: python build.py --image PATH' % VERSION)
    layout = exheader.layout(header.read_bytes())
    text = exheader.segment(layout, 'text')
    functions = split_module.load(root / 'config/symbols.txt', text['address'],
                                  text['initializedBytes'])
    return {'layout': layout, 'text': text, 'functions': functions,
            'bytes': image.read_bytes(), 'image': image}


def original(image, symbol):
    """The original bytes of one function's complete instruction extent."""
    text = image['text']
    offset = text['codeBinOffset'] + symbol.address - text['address']
    return image['bytes'][offset:offset + symbol.size]


def tail(image, symbol, length):
    """The original bytes a compiler may place after one function's instructions."""
    text = image['text']
    offset = text['codeBinOffset'] + symbol.address + symbol.size - text['address']
    return image['bytes'][offset:offset + length]


def word_reader(image):
    """Read a 32-bit word of the original image at an absolute address."""
    text = image['text']
    origin = text['codeBinOffset'] - text['address']

    def read(address):
        offset = origin + address
        if offset < 0 or offset + 4 > len(image['bytes']):
            return None
        return int.from_bytes(image['bytes'][offset:offset + 4], 'little')
    return read


def retained(root, image):
    """The functions the synthesiser may work on.

    That is every function the last build left to the original image, plus the
    functions this component already implements: a synthesised function stays a
    candidate so the oracle can re-verify it against the image on every run
    instead of trusting an earlier verdict.
    """
    path = root / 'build' / VERSION / 'objects/object-map.json'
    if not path.is_file():
        raise SystemExit('Missing %s; run: python build.py --image PATH' % path)
    prefix = emitter.COMPONENT + '/'
    names = set()
    for unit in read_json(path)['units']:
        if unit['source_path'] == SOURCE_ROOT:
            names.update(row['name'] for row in unit['retainedFunctions'])
        elif unit['source_path'].startswith(prefix):
            names.update(row['name'] for row in unit['functions'])
    return names


def census(root, limit, below=None):
    """Classify every retained function under the size limit."""
    image = image_and_split(root)
    names = retained(root, image)
    targets = [symbol for symbol in image['functions'].symbols
               if symbol.name in names and symbol.size < limit
               and (below is None or symbol.size >= below)]
    classified, refused = [], []
    read_word = word_reader(image)
    for symbol in targets:
        if symbol.mode != 'arm':
            refused.append(shapes.Rejected(symbol.name, 'thumb mode'))
            continue
        result = shapes.classify(symbol, original(image, symbol), read_word)
        if isinstance(result, shapes.Rejected):
            refused.append(result)
        else:
            classified.append(result)
    return {'targets': targets, 'classified': classified, 'refused': refused, 'image': image}


def report_census(result):
    families, family_bytes, reasons = {}, {}, {}
    for shape in result['classified']:
        families[shape.family] = families.get(shape.family, 0) + 1
        family_bytes[shape.family] = family_bytes.get(shape.family, 0) + shape.size
    for rejected in result['refused']:
        reasons[rejected.reason] = reasons.get(rejected.reason, 0) + 1
    print('retained under limit: %d   classified: %d (%d bytes)   refused: %d'
          % (len(result['targets']), len(result['classified']),
             sum(family_bytes.values()), len(result['refused'])))
    for family, count in sorted(families.items(), key=lambda item: -item[1]):
        print('  %-24s %5d  %7d bytes' % (family, count, family_bytes[family]))
    print('refusals:')
    for reason, count in sorted(reasons.items(), key=lambda item: -item[1]):
        print('  %-56s %6d' % (reason, count))


def compile_unit(root, source, output):
    """Compile one emitted file exactly as the build would, then split it."""
    relative = source.relative_to(root).as_posix()
    unit = {'source': relative, 'headers': [emitter.COMPONENT + '/' + emitter.TYPES_HEADER],
            'role': 'recovered-and-candidate-native'}
    profile = objdiff_objects.profile_for(root, unit)
    output.mkdir(parents=True, exist_ok=True)
    target = output / (source.stem + '.o')
    log = output / (source.stem + '.log')
    if profile.get('postprocess') == 'armcc-split':
        raw = output / (source.stem + '.armcc.o')
        objdiff_objects.run(objdiff_objects.compiler_argv(root, unit, source, raw), log)
        armcc_object.split(raw, target)
    else:
        objdiff_objects.run(objdiff_objects.compiler_argv(root, unit, source, target), log)
    return target


def verdicts(root, result, output):
    """Compile every emitted file and compare each function with its original.

    Both halves of the compiler output are compared: the instructions must equal
    the split's code extent and the data the compiler placed after them must
    equal the bytes at the same address in the original image. A pool that
    differs disqualifies the function even when every instruction matches.
    """
    image = result['image']
    by_name = {shape.name: shape for shape in result['classified']}
    order = {symbol.name: index for index, symbol in enumerate(image['functions'].symbols)}
    symbols = image['functions'].symbols
    compiled, rows = {}, []
    for source in sorted((root / emitter.COMPONENT).glob('*.c')):
        target = compile_unit(root, source, output)
        defined = elf_objects.read(target)['functions']
        for name, function in defined.items():
            shape = by_name.get(name)
            symbol = image['functions'].by_name.get(name)
            if shape is None or symbol is None:
                rows.append({'name': name, 'file': source.name, 'family': None,
                             'verdict': 'not a classified function'})
                continue
            after = symbols[order[name] + 1].address if order[name] + 1 < len(symbols) else None
            expected_tail = tail(image, symbol, function['extent'] - function['size'])
            if function['relocations']:
                verdict = 'relocations'
            elif function['size'] != symbol.size:
                verdict = 'size %d != %d' % (function['size'], symbol.size)
            elif after is not None and symbol.address + function['extent'] > after:
                verdict = 'extent runs past the original range'
            elif function['data'] != original(image, symbol):
                verdict = 'instructions differ'
            elif function['tail'] != expected_tail:
                verdict = 'data after the instructions differs'
            else:
                verdict = 'match'
            compiled[name] = verdict == 'match'
            rows.append({'name': name, 'file': source.name, 'family': shape.family,
                         'size': symbol.size, 'extent': function['extent'], 'verdict': verdict})
    missing = sorted(set(by_name) - set(compiled))
    for name in missing:
        rows.append({'name': name, 'file': None, 'family': by_name[name].family,
                     'verdict': 'not compiled'})
        compiled[name] = False
    return compiled, rows


def report_oracle(rows):
    families, matches = {}, {}
    for row in rows:
        family = row['family'] or 'unclassified'
        families[family] = families.get(family, 0) + 1
        if row['verdict'] == 'match':
            matches[family] = matches.get(family, 0) + 1
    total = len(rows)
    kept = sum(matches.values())
    print('oracle: %d candidates, %d matched, %d rejected' % (total, kept, total - kept))
    for family in sorted(families):
        matched = matches.get(family, 0)
        print('  %-24s %5d cand  %5d match  %5.1f%%'
              % (family, families[family], matched, 100.0 * matched / families[family]))


def prune(root, result, compiled):
    """Re-emit only the shapes that matched, so no draft survives in the tree."""
    kept = [shape for shape in result['classified'] if compiled.get(shape.name)]
    written = emitter.write(root, kept)
    for path in (root / emitter.COMPONENT).glob('*.c'):
        if path.relative_to(root).as_posix() not in written:
            path.unlink()
    return kept, written


def _unit_block(source):
    return ('    {\n'
            '      "source": "%s",\n'
            '      "headers": [\n'
            '        "%s"\n'
            '      ],\n'
            '      "role": "recovered-and-candidate-native"\n'
            '    }' % (source, emitter.COMPONENT + '/' + emitter.TYPES_HEADER))


def update_manifest(root, written):
    """Declare the emitted units in the explicit build manifest.

    The manifest is edited as text, not re-serialised: it is a large hand-kept
    file with mixed line endings, and a JSON round trip would rewrite all of it.
    Only the emitting component's entries are touched, so re-running the
    synthesiser leaves the rest of the file byte for byte.
    """
    manifest = root / 'config/build-units.json'
    text = manifest.read_bytes().decode('utf-8')
    prefix = emitter.COMPONENT + '/'
    sources = sorted(name for name in written if name.endswith('.c'))
    blocks = [_unit_block(source) for source in sources]
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
    if '"nativeComponentRoots"' in updated and prefix.rstrip('/') not in updated.split('"nativeComponentRoots"')[1]:
        root_start = updated.index('"nativeComponentRoots": [')
        root_close = re.search(r'\n  \]', updated[root_start:])
        position = root_start + root_close.start()
        updated = (updated[:position] + ',\n    "' + emitter.COMPONENT + '"'
                   + updated[position:])
    data = json.loads(updated)
    declared = [unit['source'] for unit in data['units']]
    if sorted(declared) != sorted(set(declared)) or set(sources) - set(declared):
        raise SystemExit('manifest edit produced inconsistent units')
    manifest.write_bytes(updated.encode('utf-8'))
    return sources


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('step', choices=['census', 'emit', 'oracle', 'manifest'])
    parser.add_argument('--limit', type=int, default=128)
    parser.add_argument('--below', type=int, default=None)
    parser.add_argument('--output', default='work/synth/objects')
    args = parser.parse_args()

    WORK.mkdir(parents=True, exist_ok=True)
    result = census(ROOT, args.limit, args.below)
    if args.step == 'census':
        report_census(result)
        write_json(WORK / 'census.json', {
            'limit': args.limit, 'below': args.below,
            'targets': len(result['targets']),
            'families': _family_counts(result['classified']),
            'refusals': _reason_counts(result['refused']),
            'shapes': [shape.as_dict() for shape in result['classified']],
            'refused': [row.as_dict() for row in result['refused']]})
        return 0
    if args.step == 'emit':
        written = emitter.write(ROOT, result['classified'])
        print('emitted %d files: %s' % (len(written), ', '.join(written)))
        return 0
    if args.step == 'manifest':
        sources = update_manifest(ROOT, sorted(
            path.relative_to(ROOT).as_posix() for path in (ROOT / emitter.COMPONENT).glob('*.c')))
        print('declared %d units in config/build-units.json' % len(sources))
        return 0
    report_census(result)
    emitter.write(ROOT, result['classified'])
    compiled, rows = verdicts(ROOT, result, ROOT / args.output)
    report_oracle(rows)
    rejected = [row for row in rows if row['verdict'] != 'match']
    kept, written = prune(ROOT, result, compiled)
    write_json(WORK / 'oracle.json', {'compiled': rows, 'kept': len(kept),
                                      'files': written, 'rejected': rejected})
    print('kept %d functions in %d files; rejected %d recorded in work/synth/oracle.json'
          % (len(kept), len(written), len(rejected)))
    return 0


def _current(root):
    """The emitting files already on disk, as relative paths."""
    return [path.relative_to(root).as_posix()
            for path in sorted((root / emitter.COMPONENT).glob('*'))]


def _family_counts(classified):
    counts = {}
    for shape in classified:
        counts[shape.family] = counts.get(shape.family, 0) + 1
    return counts


def _reason_counts(refused):
    counts = {}
    for row in refused:
        counts[row.reason] = counts.get(row.reason, 0) + 1
    return counts


if __name__ == '__main__':
    raise SystemExit(main())
