"""Carve the target and base objects for one measured source unit.

The target object holds the original instruction bytes the split gives each
function of the unit. The base object holds the whole extent the placement link
produced for the same functions: their instructions plus whatever data the
compiler put after them, with each function symbol at the instruction size. The
instruction extent decides whether the two can be compared; the data is compared
with the original bytes at the same address before any credit is possible.

Carving is separate from object production because it is a byte operation on
the user's image and on the placed image, not a compiler decision.
"""

import bisect
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import elf_objects
import exheader
import split as split_module
from placement import ASSEMBLE, CLANG, carve, digest, empty_base, run


def source_unit(root, output, image, source, known, measured, text, screen, placement, room):
    """One source file: original instructions for its functions, placed bytes for its base."""
    label = source.replace('/', '--')[:-2]
    commands = []
    origin = text['codeBinOffset'] - text['address']
    spans, symbols, records = [], {}, []
    base_spans, base_symbols, base_labels = [], {}, []
    reasons = dict(screen['reasons'])
    for index, name in enumerate(screen['names']):
        symbol = known[name]
        spans.append((symbol.address, symbol.size, origin + symbol.address))
        symbols[index] = [(name, 0, symbol.size, symbol.mode)]
        code = screen['code'][name]
        extent = screen['extents'][name]
        if name not in set(screen['placed']) and name not in reasons:
            reasons[name] = 'the compiled extent runs past the original range the split leaves'
        records.append({'name': name, 'address': symbol.address, 'size': symbol.size,
                        'mode': symbol.mode, 'compiledBytes': code, 'extent': extent})
    with Path(image).open('rb') as stream:
        for name in screen['placed']:
            symbol = known[name]
            section, function = placement['sections'].get(name), placement['functions'].get(name)
            if section is None or function is None:
                raise ValueError('The placement link did not place a measured function: ' + name)
            data, extent = section['data'], len(section['data'])
            code = function['size']
            if extent != screen['extents'][name] or code != screen['code'][name]:
                raise ValueError('Placing %s changed the size the compiler emitted' % name)
            stream.seek(origin + symbol.address)
            original = stream.read(extent)
            if code == symbol.size and data[:code] == original[:code]:
                if data[code:] != original[code:]:
                    reasons[name] = ('the data the compiler placed after the instructions '
                                     'differs from the original bytes')
                    continue
            base_index = len(base_spans)
            base_spans.append((symbol.address, extent, section['offset']))
            base_labels.append('.text.' + name)
            base_symbols[base_index] = [(name, 0, code, symbol.mode)]
    target, command = carve(root, output, label, image, spans, symbols)
    commands.append(command)
    if base_spans:
        base, command = carve(root, output, label, root / placement['image'], base_spans,
                              base_symbols, suffix='placed', labels=base_labels)
        commands.append(command)
    else:
        base = empty_base(root, output, label)
    return {'name': source[:-2], 'source_path': source,
            'compilerProfile': measured[screen['names'][0]]['profile'],
            'target': target.relative_to(root).as_posix(), 'targetSha256': digest(target),
            'base': base.relative_to(root).as_posix(), 'baseSha256': digest(base),
            'targetCodeBytes': sum(known[name].size for name in screen['names']),
            'unrepresentable': sorted(reasons), 'rejected': reasons,
            'placed': list(screen['placed']),
            'linkObject': screen['object'].relative_to(root).as_posix(),
            'dataSections': screen['data'],
            'functions': records}, commands


def retained_unit(root, output, image, functions, measured, layout, text, commands):
    """Every original text byte source does not implement, plus all original data."""
    gaps = split_module.complement([(functions.by_name[name].address,
                                     functions.by_name[name].size) for name in measured],
                                   text['address'], text['initializedBytes'])
    starts = [address for address, _ in gaps]
    retained = [symbol for symbol in functions.symbols if symbol.name not in measured]
    symbols = {}
    for symbol in retained:
        index = bisect.bisect_right(starts, symbol.address) - 1
        if index < 0 or symbol.end() > gaps[index][0] + gaps[index][1]:
            raise ValueError('Retained function %s does not fit one original range' % symbol.name)
        symbols.setdefault(index, []).append((symbol.name, symbol.address - gaps[index][0],
                                             symbol.size, symbol.mode))
    spans = [(address, size, text['codeBinOffset'] + address - text['address'])
             for address, size in gaps]
    data = exheader.segment(layout, 'data')
    data_spans = [('.' + row['name'] + '.original', row['address'], row['initializedBytes'],
                   row['codeBinOffset'], 'data')
                  for row in layout['segments'] if row['name'] != 'text']
    data_spans.append(('.bss.original', data['address'] + data['initializedBytes'],
                       layout['bssBytes'], None, 'bss'))
    target, command = carve(root, output, 'unreconstructed', image, spans, symbols, data_spans)
    commands.append(command)
    empty = output / 'no_reconstructed_source.c'
    empty.write_text('typedef unsigned ObjdiffNoReconstructedSource;\n', encoding='utf-8')
    base = output / 'unreconstructed.base.o'
    commands.append(run([root / CLANG, *ASSEMBLE, '-c', empty, '-o', base],
                        output / 'unreconstructed.empty.log'))
    return {'name': 'src/native', 'source_path': 'src/native',
            'target': target.relative_to(root).as_posix(), 'targetSha256': digest(target),
            'base': base.relative_to(root).as_posix(), 'baseSha256': digest(base),
            'targetCodeBytes': sum(size for _, size in gaps), 'functions': [],
            'retainedFunctions': [{'name': function.name, 'address': function.address,
                                   'size': function.size, 'mode': function.mode}
                                  for function in retained]}
