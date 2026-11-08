import argparse
import hashlib
import io
import json
import math
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from configure_objdiff import contained
import native_teardown_inventory as native_census_overlay


ROOT = Path(__file__).resolve().parents[1]
COUNTS = ('total_code', 'matched_code', 'total_data', 'matched_data', 'total_functions',
          'matched_functions', 'complete_code', 'complete_data', 'total_units', 'complete_units')
PERCENTAGES = {'matched_code_percent': ('matched_code', 'total_code'),
               'matched_data_percent': ('matched_data', 'total_data'),
               'matched_functions_percent': ('matched_functions', 'total_functions'),
               'complete_code_percent': ('complete_code', 'total_code'),
               'complete_data_percent': ('complete_data', 'total_data')}


def digest(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


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
        address, extent = number(row['address']), number(row['size'])
        if not extent or address != cursor:
            raise ValueError('Reference sections leave a gap or overlap in the loaded segment')
        cursor += extent
    if cursor != start + size:
        raise ValueError('Reference sections do not cover the declared loaded segment')


def object_sections(path):
    from elftools.elf.elffile import ELFFile
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    if elf.elfclass != 32 or not elf.little_endian or elf['e_machine'] != 'EM_ARM':
        raise ValueError('Expected a genuine little-endian ARM32 ELF')
    sections = {}
    for section in elf.iter_sections():
        if section['sh_flags'] & 2 and section['sh_size']:
            if section.name in sections:
                raise ValueError('Duplicate allocated section name')
            kind = 'code' if section['sh_flags'] & 4 else 'bss' if section['sh_type'] == 'SHT_NOBITS' else 'data'
            sections[section.name] = {'size': section['sh_size'], 'kind': kind,
                                      'data': None if kind == 'bss' else section.data()}
    table = elf.get_section_by_name('.symtab')
    if table is None:
        raise ValueError('Missing native symbol table')
    functions = {}
    for symbol in table.iter_symbols():
        if symbol['st_info']['type'] != 'STT_FUNC' or not symbol['st_size']:
            continue
        if not isinstance(symbol['st_shndx'], int):
            raise ValueError('Function is not section-defined')
        section = elf.get_section(symbol['st_shndx'])
        if not section['sh_flags'] & 4 or not re.fullmatch(r'fn_[0-9a-f]{8}', symbol.name):
            raise ValueError('Unexpected function identity in reporting object')
        if symbol.name in functions:
            raise ValueError('Duplicate native function symbol')
        offset = (symbol['st_value'] & ~1) - section['sh_addr']
        size = symbol['st_size']
        if offset < 0 or offset + size > section['sh_size']:
            raise ValueError('Function extends outside its actual section')
        functions[symbol.name] = {'size': size, 'data': sections[section.name]['data'][offset:offset + size],
                                  'section': section.name, 'offset': offset,
                                  'mode': 'Thumb' if symbol['st_value'] & 1 else 'ARM'}
    return sections, functions


def verify_objects(root, mapping):
    from ci_native_build import LANES, accepted_functions, native_path
    if mapping.get('schemaVersion') != 1 or mapping.get('version') != 'update-content0':
        raise ValueError('Unsupported original/source object map')
    for lane in LANES:
        packet = read(root / 'evidence/lanes' / lane / 'packet.json')
        for record in packet.get('sourceInputs', packet.get('sources', [])) + packet.get('headers', []):
            if digest(native_path(root, record['path'])) != record['sha256']:
                raise ValueError('Frozen source or quoted header changed since accepted compilation')
    layout = read(root / 'evidence/inventory/update-content0.json')
    image_path = root / 'generated/update-content0/code.bin'
    if mapping['moduleSha256'] != layout['codeSha256'] or digest(image_path) != layout['codeSha256']:
        raise ValueError('Original image identity differs from measured loader mapping')
    image = image_path.read_bytes()
    census_pin = mapping['census']
    census_path = contained(root, census_pin['path'])
    if digest(census_path) != census_pin['sha256']:
        raise ValueError('Discovered entry census changed after object construction')
    census = read(census_path)
    census, overlays = native_census_overlay.compose(root, census)
    if (mapping.get('censusOverlays', []) != overlays
            or overlays and mapping.get('discoveredFunctionEntries') != census['functionCount']):
        raise ValueError('Reporting objects differ from reviewed supplemental inventory')
    if census['codeSha256'] != layout['codeSha256'] or census['functionCount'] != len(census['functions']):
        raise ValueError('Discovered entries belong to another measured image')
    known_entries = {'fn_' + format(row['address'], '08x'): row for row in census['functions']}
    if len(known_entries) != len(census['functions']):
        raise ValueError('Discovered canonical entries are duplicated')
    accepted = accepted_functions(root)
    import report_source_units
    source_routes, source_routes_pin = report_source_units.load(root, census, accepted)
    if mapping.get("sourceUnits") != source_routes_pin:
        raise ValueError("Source-directed report configuration changed after object construction")
    routes = {row["name"]: row for row in source_routes}
    seen_routes = set()
    ledger = {row['symbol']: row for row in accepted}
    mapped, originals, credited = {}, [], set()
    for unit in mapping['units']:
        if unit['name'] in mapped or unit.get('complete') is not False:
            raise ValueError('Duplicate unit or unsupported unit-completion claim')
        source = contained(root, unit['source_path'])
        route = routes.get(unit['name'])
        if route:
            if (unit['source_path'] != route['sourcePath'] or unit.get('sourceRouting') != route
                    or unit.get('acceptedSymbols') or unit.get('expected_matched_code') != 0
                    or unit.get('expected_matched_functions') != 0):
                raise ValueError('Source-directed unit changes source ownership or exact matching credit')
            seen_routes.add(unit['name'])
        elif not source.exists() or not (unit['source_path'] == 'src/native' or unit['source_path'].startswith('src/native/')):
            raise ValueError('Report source must be an existing public source path')
        if unit['name'] != (unit['source_path'] if source.is_dir() else source.relative_to(root).with_suffix('').as_posix()):
            raise ValueError('Report grouping must follow the actual public source hierarchy')
        for side in ('target', 'base'):
            path = contained(root, unit[side + '_path'])
            if digest(path) != unit[side + '_sha256']:
                raise ValueError('Reporting object changed after construction')
        target, functions = object_sections(contained(root, unit['target_path']))
        base, implementations = object_sections(contained(root, unit['base_path']))
        references = unit['original_ranges']
        by_section = {row['section']: row for row in references}
        if {row['section'] for row in references} != set(target) or len(references) != len(target):
            raise ValueError('Every allocated reference section must have exactly one original range')
        for row in references:
            section = target[row['section']]
            if not re.fullmatch(r'\.text\.original_[0-9a-f]{8}|\.(?:rodata|data|bss)\.original', row['section']):
                raise ValueError('Reference section name is outside the fixed generated schema')
            if section['size'] != row['size'] or section['kind'] != row['kind']:
                raise ValueError('Reference section differs from declared original ownership')
            if row['kind'] != 'bss':
                segment = next((item for item in layout['layout']['segments']
                                if item['address'] <= row['address']
                                and row['address'] + row['size'] <= item['address'] + item['initializedBytes']), None)
                if segment is None:
                    raise ValueError('Reference section escapes initialized segment bounds')
                if row['kind'] != ('code' if segment['name'] == 'text' else 'data'):
                    raise ValueError('Reference section changes the original loader segment role')
                offset = segment['codeBinOffset'] + row['address'] - segment['address']
                if section['data'] != image[offset:offset + row['size']]:
                    raise ValueError('Reference object differs from original input bytes')
            originals.append(row)
        for name, function in functions.items():
            reference = by_section[function['section']]
            entry = known_entries.get(name)
            actual_address = reference['address'] + function['offset']
            if entry is None or actual_address != entry['address'] or function['mode'] != entry['mode']:
                raise ValueError('Reference symbol is not the actual discovered canonical entry')
        if route and (set(functions) != {route['symbol']} or implementations):
            raise ValueError('Source-directed unit contains extra symbols or reconstructed bytes')
        if any(item['kind'] != 'code' for item in base.values()):
            raise ValueError('Current accepted source has no data or BSS credit')
        if sum(item['size'] for item in base.values()) != sum(item['size'] for item in implementations.values()):
            raise ValueError('Source base contains uncredited or overlapping executable material')
        for name, function in implementations.items():
            row = ledger.get(name)
            if row is None or name in credited or row['sourcePath'] != unit['source_path']:
                raise ValueError('Source base contains an unaccepted, duplicate or misattributed function')
            if digest(source) != row['sourceSha256'] or function['size'] != row['instructionBytes']:
                raise ValueError('Accepted source hash or function extent changed')
            if hashlib.sha256(function['data']).hexdigest() != row['originalSpanSha256']:
                raise ValueError('Source base does not match its accepted original span')
            target_function = functions.get(name)
            if target_function is None or any(target_function[key] != function[key] for key in ('size', 'data', 'mode')):
                raise ValueError('Accepted target/base function bytes differ')
            credited.add(name)
        code = sum(item['size'] for item in target.values() if item['kind'] == 'code')
        data = sum(item['size'] for item in target.values() if item['kind'] != 'code')
        expected_code = sum(item['size'] for item in implementations.values())
        if (unit['expected_matched_code'], unit['expected_matched_functions']) != (expected_code, len(implementations)):
            raise ValueError('Object-map credit claim disagrees with actual source objects')
        mapped[unit['name']] = {'code': code, 'data': data, 'functions': functions,
                                 'matched_code': expected_code, 'matched_functions': len(implementations),
                                 'matched_symbols': set(implementations),
                                 'source_path': unit['source_path'], 'section_names': set(target)}
    if credited != set(ledger):
        raise ValueError('Object mapping omits an accepted source function')
    if seen_routes != set(routes):
        raise ValueError('Source-directed report unit is missing')
    for segment in layout['layout']['segments']:
        kind = 'code' if segment['name'] == 'text' else 'data'
        rows = [row for row in originals if row['kind'] == kind and segment['address'] <= row['address']
                < segment['address'] + segment['initializedBytes']]
        partition(rows, segment['address'], segment['initializedBytes'])
    data = next(item for item in layout['layout']['segments'] if item['name'] == 'data')
    partition([row for row in originals if row['kind'] == 'bss'],
              data['address'] + data['initializedBytes'], layout['layout']['bssBytes'])
    if len({name for unit in mapped.values() for name in unit['functions']}) != sum(len(unit['functions']) for unit in mapped.values()):
        raise ValueError('A discovered function entry appears in multiple units')
    if {name for unit in mapped.values() for name in unit['functions']} != set(known_entries):
        raise ValueError('Reporting objects omit discovered entries or invent additional functions')
    return mapped


def normalize(report, mapped):
    if report.get('version') != 2 or report.get('categories'):
        raise ValueError('Expected objdiff schema 2 without invented progress categories')
    result = {'version': 2, 'units': []}
    units = report['units']
    if len(units) != len(mapped) or {unit['name'] for unit in units} != set(mapped):
        raise ValueError('Raw CLI report omits or duplicates configured units')
    totals = dict.fromkeys(COUNTS, 0)
    raw_totals = dict.fromkeys(COUNTS, 0)
    fuzzy_sum = 0.0
    for unit in units:
        expected = mapped[unit['name']]
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
        for item in functions:
            if number(item['size']) != expected['functions'][item['name']]['size']:
                raise ValueError('CLI function extent disagrees with original ELF')
            percent = percentage(item.get('fuzzy_match_percent', 0))
            if percent != (100.0 if item['name'] in expected['matched_symbols'] else 0.0):
                raise ValueError('Partial or false matching credit is unsupported by these source objects')
            public_functions.append({'name': item['name'], 'size': str(number(item['size'])),
                                     'fuzzy_match_percent': percent,
                                     'metadata': {'virtual_address': str(int(item['name'][3:], 16))}})
        public_sections = []
        section_code, section_data, section_matched_data = 0, 0, 0
        for section in unit.get('sections', []):
            name = section['name']
            allowed = expected.get('section_names', set()) | {'.text', '.rodata', '.data', '.bss'}
            if name not in allowed:
                raise ValueError('CLI section is outside the verified object schema')
            percent = percentage(section.get('fuzzy_match_percent', 0))
            extent = number(section.get('size', 0))
            if name == '.text' or name.startswith('.text.'):
                section_code += extent
            else:
                section_data += extent
                section_matched_data += extent if percent == 100 else 0
            public_sections.append({'name': name, 'size': str(extent),
                                    'fuzzy_match_percent': percent, 'metadata': {}})
        if (section_code, section_data, section_matched_data) != (expected['code'], expected['data'], 0):
            raise ValueError('CLI section accounting differs from actual allocated original sections')
        matched = [item for item in functions if float(item.get('fuzzy_match_percent', 0)) == 100]
        if {item['name'] for item in matched} != expected['matched_symbols']:
            raise ValueError('Raw CLI matched identities differ from accepted source functions')
        if (sum(number(item['size']) for item in matched), len(matched)) != (expected['matched_code'], expected['matched_functions']):
            raise ValueError('Raw CLI matches differ from accepted genuine source')
        if (values['matched_code'], values['matched_functions']) != (expected['matched_code'], expected['matched_functions']):
            raise ValueError('CLI credit counters differ from verified object matching')
        if values['total_code'] != sum(number(item['size']) for item in functions) or values['total_functions'] != len(functions):
            raise ValueError('Raw CLI counters do not agree with real symbol records')
        if values['total_data'] != expected['data'] or values['matched_data'] or any(values[key] for key in ('complete_code', 'complete_data', 'complete_units')):
            raise ValueError('Unsupported data/link completion credit')
        values['total_code'] = expected['code']
        values['total_units'] = 1
        fuzzy_weight = sum(float(item.get('fuzzy_match_percent', 0)) * number(item['size']) for item in functions)
        result['units'].append({'name': unit['name'],
                                'measures': measures(values, fuzzy_weight / values['total_code'] if values['total_code'] else 100.0),
                                'sections': public_sections, 'functions': public_functions,
                                'metadata': {'source_path': expected['source_path'], 'complete': False}})
        for key, value in values.items():
            totals[key] += value
        fuzzy_sum += fuzzy_weight
    if counters(report['measures']) != raw_totals:
        raise ValueError('Raw top-level counters differ from the complete unit sum')
    result['measures'] = measures(totals, fuzzy_sum / totals['total_code'] if totals['total_code'] else 100.0)
    return result


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--object-map', default='build/update-content0/objects/object-map.json')
    parser.add_argument('--input', default='build/update-content0/report.raw.json')
    parser.add_argument('--output', default='build/update-content0/report.json')
    args = parser.parse_args()
    mapping = read(contained(ROOT, args.object_map))
    mapped = verify_objects(ROOT, mapping)
    result = normalize(read(contained(ROOT, args.input)), mapped)
    output = contained(ROOT, args.output)
    if not output.resolve().is_relative_to((ROOT / 'build').resolve()):
        raise ValueError('Public report must remain under build/')
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(result, separators=(',', ':')) + '\n', encoding='utf-8')
    print(json.dumps({'report': args.output, 'measures': result['measures'],
                      'scope': 'Complete initialized native text; discovered canonical function entries'}))


if __name__ == '__main__':
    main()
