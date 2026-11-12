"""Normalise the stock objdiff report into the ByteMatch progress report.

Stock objdiff sums code symbols, so its denominator is smaller than the
initialized text segment it was handed. This module verifies every unit's
target and base objects against ``config/symbols.txt`` and the user's code
image, replaces each unit's code denominator with the bytes its target object
really holds, and recomputes the counters from those exhaustive units.

Matching credit is checked independently of the CLI. A function is credited only
when the placed instruction bytes equal the original instruction bytes and the
data the compiler placed after them -- a literal pool, a switch table, embedded
string literals -- equals the original bytes at the same address. A function
whose instructions match but whose data does not is reported as measured and
unmatched, never as credited, and the CLI is refused if it credited one.

A function's identity is the address the split gives it, not the spelling of its
symbol: the source may name a definition what it does. Every unit record is
therefore checked against the split by address, and the report's virtual address
comes from that record, never from the name.

The measured objects carry no relocations: the placement link resolved every
call to the address the split gives its target. Credit therefore means byte
equality, and nothing else.
"""

import argparse
import hashlib
import json
import math
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import elf_objects
import exheader
import split as split_module


ROOT = Path(__file__).resolve().parents[1]
COUNTS = ('total_code', 'matched_code', 'total_data', 'matched_data', 'total_functions',
          'matched_functions', 'complete_code', 'complete_data', 'total_units', 'complete_units')
PERCENTAGES = {'matched_code_percent': ('matched_code', 'total_code'),
               'matched_data_percent': ('matched_data', 'total_data'),
               'matched_functions_percent': ('matched_functions', 'total_functions'),
               'complete_code_percent': ('complete_code', 'total_code'),
               'complete_data_percent': ('complete_data', 'total_data')}


def read(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def digest(path):
    with Path(path).open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def number(value):
    if isinstance(value, bool) or not isinstance(value, (str, int)):
        raise ValueError('Report counters must be nonnegative integers')
    if isinstance(value, str) and not re.fullmatch(r'0|[1-9][0-9]*', value):
        raise ValueError('Invalid integer counter encoding')
    result = int(value)
    if result < 0 or result > 2 ** 53 - 1:
        raise ValueError('Counter is outside exact JSON arithmetic range')
    return result


def counters(measures):
    return {key: number(measures.get(key, 0)) for key in COUNTS}


def percentage(value):
    if isinstance(value, bool) or not isinstance(value, (int, float)) or not math.isfinite(value) or not 0 <= value <= 100:
        raise ValueError('Invalid numeric match percentage')
    return float(value)


def measures(values, fuzzy):
    result = {key: str(value) if key.endswith(('code', 'data')) else value for key, value in values.items()}
    for name, (numerator, denominator) in PERCENTAGES.items():
        result[name] = values[numerator] * 100 / values[denominator] if values[denominator] else 100.0
    if not math.isfinite(fuzzy) or not 0 <= fuzzy <= 100:
        raise ValueError('Invalid fuzzy percentage')
    result['fuzzy_match_percent'] = fuzzy
    return result


def partition(rows, start, size):
    cursor = start
    for row in sorted(rows, key=lambda item: item['address']):
        if not row['size'] or row['address'] != cursor:
            raise ValueError('Original sections leave a gap or overlap in the loaded segment')
        cursor += row['size']
    if cursor != start + size:
        raise ValueError('Original sections do not cover the declared loaded segment')


def aligned(rows):
    """Sum section extents the way objdiff does.

    objdiff merges the object's sections into one .text record and rounds each
    section up to four bytes on the way, so its section accounting can exceed
    the exact byte counts the split declares.
    """
    return sum((row['size'] + 3) // 4 * 4 for row in rows)


def image_bytes(image, text, address, size):
    offset = text['codeBinOffset'] + address - text['address']
    return image[offset:offset + size]


def source_unit(unit, functions, image, text, placement):
    """Check one source file's objects against the split and the code image."""
    if unit['name'] != unit['source_path'][:-2] or not unit['source_path'].startswith('src/'):
        raise ValueError('Unit name must follow its source path: ' + unit['name'])
    target = elf_objects.read(unit['target'])
    base = elf_objects.read(unit['base'])
    names = [function['name'] for function in unit['functions']]
    if not names or len(names) != len(set(names)):
        raise ValueError('Unit repeats or omits a function: ' + unit['name'])
    if any(value['kind'] != 'code' for value in base['sections'].values()):
        raise ValueError('Compiled source contains data the split cannot place: ' + unit['name'])
    rejected = unit.get('rejected') or {}
    dropped = set(unit.get('unrepresentable', []))
    if set(rejected) != dropped:
        raise ValueError('A reported rejection is not the function it explains: ' + unit['name'])
    if set(base['functions']) != set(names) - dropped:
        raise ValueError('Base object does not define the measured functions it claims: ' + unit['name'])
    matched, relocated, sections = set(), set(), []
    for function in unit['functions']:
        symbol = functions.by_address.get(function['address'])
        if symbol is None or symbol.name != function['name']:
            raise ValueError('Unit reports a name and address the split does not bind: '
                             + function['name'])
        if (function['address'], function['size'], function['mode']) != (symbol.address, symbol.size, symbol.mode):
            raise ValueError('Unit disagrees with the split on ' + symbol.name)
        section = '.text.original_%08x' % symbol.address
        found = target['sections'].get(section)
        if found is None or found['kind'] != 'code' or found['size'] != symbol.size:
            raise ValueError('Original function section is missing or wrong: ' + section)
        original = image_bytes(image, text, symbol.address, symbol.size)
        if found['data'] != original:
            raise ValueError('Original function bytes differ from the code image: ' + symbol.name)
        placed = target['functions'].get(symbol.name)
        if placed is None or placed['offset'] or placed['size'] != symbol.size or placed['mode'] != symbol.mode:
            raise ValueError('Original function symbol does not describe its section: ' + symbol.name)
        sections.append({'address': symbol.address, 'size': symbol.size, 'kind': 'code'})
        implementation = base['functions'].get(symbol.name)
        if implementation is None:
            if function['name'] not in dropped:
                raise ValueError('A measured function has no base function: ' + symbol.name)
            check_rejection(function, base, image, text, functions, rejected[symbol.name], placement)
            continue
        if function['name'] in dropped:
            raise ValueError('A rejected function still has a base function: ' + symbol.name)
        if implementation['relocations']:
            raise ValueError('A measured function kept a relocation: ' + symbol.name)
        if implementation['size'] != function['compiledBytes']:
            raise ValueError('Recorded compiled extent disagrees with the base object: ' + symbol.name)
        if implementation['extent'] != function['extent']:
            raise ValueError('Recorded section extent disagrees with the base object: ' + symbol.name)
        if implementation['size'] != symbol.size:
            # The instruction extents differ, so there is nothing to compare and
            # the CLI cannot credit it; that is a reconstruction difference.
            continue
        instructions = image_bytes(image, text, symbol.address, symbol.size)
        data = image_bytes(image, text, symbol.address + symbol.size, implementation['extent'] - symbol.size)
        if implementation['data'] == instructions and implementation['tail'] == data:
            matched.add(symbol.name)
        elif implementation['data'] == instructions:
            raise ValueError('Instructions match but the data after them does not: ' + symbol.name)
    return {'name': unit['name'], 'source_path': unit['source_path'],
            'compilerProfile': unit.get('compilerProfile'),
            'code': sum(row['size'] for row in sections), 'data': 0,
            'functions': {function['name']: {'size': function['size'],
                                             'address': function['address']}
                          for function in unit['functions']},
            'matched': matched, 'relocated': relocated, 'sections': sections,
            'aligned_code': aligned(sections), 'aligned_data': 0,
            'section_names': set(target['sections'])}


def check_rejection(function, base, image, text, functions, reason, placement):
    """Check a reported rejection against what the objects and the split say.

    The reasons a measured function cannot be compared are: a reference the
    split gives no address to, an extent the link could not place, and data after
    the instructions that differs from the original. The first is checked against
    the split, the second against the split's own room, and the third against the
    placement image, so an unreported loss of measurement shows up here.
    """
    symbol = functions.by_name[function['name']]
    if reason.startswith('references symbols outside the split:'):
        names = [name.strip() for name in reason.split(':', 1)[1].split(',')]
        if any(name in functions.by_name for name in names):
            raise ValueError('A function was rejected for naming a split symbol: ' + function['name'])
        return
    if reason == 'references original data the split does not place':
        return
    if reason.startswith('the compiled extent runs past the original range'):
        if function['extent'] <= function['size']:
            raise ValueError('A function fits its own range and was still refused: ' + function['name'])
        return
    if reason.startswith('the data the compiler placed after the instructions'):
        section = placement['sections'].get(function['name'])
        if section is None:
            raise ValueError('A rejected function was never placed: ' + function['name'])
        instructions = image_bytes(image, text, symbol.address, symbol.size)
        data = image_bytes(image, text, symbol.address + symbol.size,
                           function['extent'] - symbol.size)
        if section['data'] != instructions + data:
            raise ValueError('Data was called different although the placed bytes match: '
                             + function['name'])
        return
    raise ValueError('Unknown rejection reason for %s: %s' % (function['name'], reason))


def retained_unit(unit, functions, image, layout, text):
    """Check the unit that keeps every original byte source does not implement."""
    target = elf_objects.read(unit['target'])
    base = elf_objects.read(unit['base'])
    if base['sections'] or base['functions']:
        raise ValueError('The retained unit base must be an empty compilation')
    declared = {row['name']: row for row in unit['retainedFunctions']}
    if set(declared) != set(target['functions']):
        raise ValueError('Retained unit symbols disagree with its own manifest')
    sections, records = [], []
    for name, section in target['sections'].items():
        if section['kind'] != 'code':
            continue
        address = int(name.rsplit('_', 1)[1], 16)
        if section['data'] != image_bytes(image, text, address, section['size']):
            raise ValueError('Retained original text differs from the code image at 0x%08x' % address)
        sections.append({'address': address, 'size': section['size'], 'kind': 'code'})
    for name, function in target['functions'].items():
        row = declared[name]
        if (function['size'], function['mode']) != (row['size'], row['mode']):
            raise ValueError('Retained function symbol disagrees with its manifest: ' + name)
        if function['data'] != image_bytes(image, text, row['address'], row['size']):
            raise ValueError('Retained function bytes differ from the code image: ' + name)
        records.append({'address': row['address'], 'size': row['size'], 'kind': 'code'})
    data = 0
    for name, section in target['sections'].items():
        if section['kind'] == 'code':
            continue
        data += section['size']
        if name == '.bss.original':
            if section['kind'] != 'bss' or section['size'] != layout['bssBytes']:
                raise ValueError('Retained BSS section is unexpected')
            continue
        segment = [row for row in layout['segments'] if '.' + row['name'] + '.original' == name]
        if len(segment) != 1 or section['size'] != segment[0]['initializedBytes']:
            raise ValueError('Retained %s section does not match the ExHeader extent' % name)
        offset = segment[0]['codeBinOffset']
        if section['data'] != image[offset:offset + section['size']]:
            raise ValueError('Retained %s bytes differ from the code image' % name)
    if sections != sorted(sections, key=lambda row: row['address']):
        sections.sort(key=lambda row: row['address'])
    return {'name': unit['name'], 'source_path': unit['source_path'],
            'code': sum(row['size'] for row in sections), 'data': data,
            'functions': {name: {'size': row['size'], 'address': row['address']}
                          for name, row in declared.items()},
            'matched': set(), 'relocated': set(), 'sections': sections,
            'aligned_code': aligned(sections),
            'aligned_data': aligned([{'size': section['size']} for name, section in target['sections'].items()
                                      if section['kind'] != 'code']),
            'section_names': set(target['sections'])}


def verify(root, mapping):
    """Rebuild the measurement facts from the split, the image and the objects."""
    if mapping.get('schemaVersion') != 2 or mapping.get('version') != 'update-content0':
        raise ValueError('Unsupported object map')
    split_path = root / mapping['split']['path']
    image_path = root / mapping['image']['path']
    header_path = root / mapping['exheader']['path']
    if digest(split_path) != mapping['split']['sha256']:
        raise ValueError('The split changed after object production')
    if digest(image_path) != mapping['image']['sha256']:
        raise ValueError('The code image changed after object production')
    if digest(header_path) != mapping['exheader']['sha256']:
        raise ValueError('The ExHeader changed after object production')
    layout = exheader.layout(header_path.read_bytes())
    text = exheader.segment(layout, 'text')
    if layout != mapping['layout'] or text != mapping['text']:
        raise ValueError('The ExHeader layout changed after object production')
    image = image_path.read_bytes()
    functions = split_module.load(split_path, text['address'], text['initializedBytes'])
    if len(functions) != mapping['split']['functionCount']:
        raise ValueError('Split function count changed after object production')
    placement = elf_objects.placed_sections(root / mapping['placement']['image'])
    if digest(root / mapping['placement']['image']) != mapping['placement']['sha256']:
        raise ValueError('The placement image changed after object production')
    units = {}
    for unit in mapping['units']:
        if unit['name'] in units:
            raise ValueError('Duplicate unit: ' + unit['name'])
        for side in ('target', 'base'):
            if digest(unit[side]) != unit[side + 'Sha256']:
                raise ValueError('Reporting object changed after construction: ' + unit[side])
        if unit['source_path'] == 'src/native':
            units[unit['name']] = retained_unit(unit, functions, image, layout, text)
        else:
            units[unit['name']] = source_unit(unit, functions, image, text, placement)
    covered = sorted((row for unit in units.values() for row in unit['sections']),
                     key=lambda row: row['address'])
    partition(covered, text['address'], text['initializedBytes'])
    declared, matched_symbols = set(), set()
    matched_bytes = 0
    for unit in units.values():
        declared |= set(unit['functions'])
        for name in unit['matched']:
            matched_bytes += unit['functions'][name]['size']
        matched_symbols |= unit['matched']
    if declared != set(functions.by_name):
        raise ValueError('Reporting objects omit split functions or invent additional ones')
    retained = units[[name for name, unit in units.items() if unit['source_path'] == 'src/native'][0]]
    measured = declared - set(retained['functions'])
    for unit in units.values():
        if unit is retained:
            continue
        for name in unit['functions']:
            symbol = functions.by_name[name]
            if {'address': symbol.address, 'size': symbol.size, 'kind': 'code'} not in unit['sections']:
                raise ValueError('Source unit does not own exactly the split extent of ' + name)
    if set(retained['functions']) != set(functions.by_name) - measured:
        raise ValueError('The retained unit does not hold exactly the functions source leaves')
    return units, matched_symbols, matched_bytes


def normalize(report, units, matched, matched_bytes, compilers=None):
    """Replace the stock denominator with the verified original bytes."""
    if report.get('version') != 2 or report.get('categories'):
        raise ValueError('Expected objdiff schema 2 without invented progress categories')
    result = {'version': 2, 'units': []}
    if compilers is not None:
        result['compilers'] = compilers
    raw_units = report['units']
    if len(raw_units) != len(units) or {unit['name'] for unit in raw_units} != set(units):
        raise ValueError('Raw CLI report omits or duplicates configured units')
    totals, raw_totals = dict.fromkeys(COUNTS, 0), dict.fromkeys(COUNTS, 0)
    fuzzy_sum = 0.0
    for unit in raw_units:
        expected = units[unit['name']]
        metadata = unit.get('metadata', {})
        if metadata.get('source_path') != expected['source_path'] or metadata.get('complete') is not False:
            raise ValueError('Raw report source/completion metadata differs from configuration')
        functions = unit.get('functions', [])
        names = [item['name'] for item in functions]
        if len(names) != len(set(names)) or set(names) != set(expected['functions']):
            raise ValueError('CLI function records disagree with actual native symbols')
        values = counters(unit['measures'])
        if values['total_units'] != 1:
            raise ValueError('Each raw CLI unit must count exactly once')
        for key, value in values.items():
            raw_totals[key] += value
        public_functions = []
        credited = {item['name'] for item in functions if float(item.get('fuzzy_match_percent', 0)) == 100}
        for item in functions:
            if number(item['size']) != expected['functions'][item['name']]['size']:
                raise ValueError('CLI function extent disagrees with the original ELF')
            percentage(item.get('fuzzy_match_percent', 0))
            public_functions.append({'name': item['name'], 'size': str(number(item['size'])),
                                     'fuzzy_match_percent': 100.0 if item['name'] in credited else 0.0,
                                     'metadata': {'virtual_address':
                                                  str(expected['functions'][item['name']]['address'])}})
        public_sections = []
        section_code, section_data = 0, 0
        for section in unit.get('sections', []):
            name = section['name']
            if name not in expected['section_names'] | {'.text', '.rodata', '.data', '.bss'}:
                raise ValueError('CLI section is outside the verified object schema')
            percent = percentage(section.get('fuzzy_match_percent', 0))
            extent = number(section.get('size', 0))
            if name == '.text' or name.startswith('.text.'):
                section_code += extent
            else:
                section_data += extent
            public_sections.append({'name': name, 'size': str(extent),
                                    'fuzzy_match_percent': percent, 'metadata': {}})
        if (section_code, section_data) != (expected['aligned_code'], expected['aligned_data']):
            raise ValueError('CLI section accounting differs from the verified original sections')
        if not expected['matched'] <= credited:
            raise ValueError('CLI withheld credit from bytes that are byte-identical')
        if credited - expected['relocated'] - expected['matched']:
            raise ValueError('CLI granted credit without byte equality or relocations')
        credited_bytes = sum(number(item['size']) for item in functions if item['name'] in credited)
        byte_identical = sum(expected['functions'][name]['size'] for name in expected['matched'])
        relocated_credit = sum(expected['functions'][name]['size'] for name in credited & expected['relocated'])
        if credited_bytes != byte_identical + relocated_credit:
            raise ValueError('CLI credit counters differ from the credited identities')
        if (credited_bytes, len(credited)) != (values['matched_code'], values['matched_functions']):
            raise ValueError('CLI credit counters differ from the credited identities')
        if values['total_code'] != sum(number(item['size']) for item in functions) or values['total_functions'] != len(functions):
            raise ValueError('Raw CLI counters do not agree with real symbol records')
        if values['total_data'] != expected['data'] or values['matched_data'] or any(
                values[key] for key in ('complete_code', 'complete_data', 'complete_units')):
            raise ValueError('Unsupported data or link completion credit')
        values['total_code'] = expected['code']
        values['total_units'] = 1
        fuzzy_weight = sum(float(item.get('fuzzy_match_percent', 0)) * number(item['size']) for item in functions)
        result['units'].append({'name': unit['name'],
                                'measures': measures(values, fuzzy_weight / values['total_code'] if values['total_code'] else 100.0),
                                'sections': public_sections, 'functions': public_functions,
                                'metadata': {'source_path': expected['source_path'],
                                             'compilerProfile': expected.get('compilerProfile'),
                                             'complete': False}})
        for key, value in values.items():
            totals[key] += value
        fuzzy_sum += fuzzy_weight
    if counters(report['measures']) != raw_totals:
        raise ValueError('Raw top-level counters differ from the complete unit sum')
    if totals['matched_code'] < matched_bytes or totals['matched_functions'] < len(matched):
        raise ValueError('Normalised totals withheld credit from byte-identical functions')
    result['measures'] = measures(totals, fuzzy_sum / totals['total_code'] if totals['total_code'] else 100.0)
    return result


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--object-map', default='build/update-content0/objects/object-map.json')
    parser.add_argument('--input', default='build/update-content0/report.raw.json')
    parser.add_argument('--output', default='build/update-content0/report.json')
    args = parser.parse_args()
    try:
        mapping = read(ROOT / args.object_map)
        units, matched, matched_bytes = verify(ROOT, mapping)
        result = normalize(read(ROOT / args.input), units, matched, matched_bytes)
    except (OSError, ValueError, KeyError) as error:
        print('Report normalisation failed: ' + str(error), file=sys.stderr)
        return 1
    output = ROOT / args.output
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(result, separators=(',', ':')) + '\n', encoding='utf-8')
    print(json.dumps({'report': args.output, 'measures': result['measures'],
                      'scope': 'Complete initialized native text; byte-identical source functions'}))
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
