import argparse
import hashlib
import json
import re
import sys
from pathlib import Path


sys.path.insert(0, str(Path(__file__).resolve().parent))
import ci_native_build as ci
import native_provider_inventory as native_census_overlay
from bootstrap_public_compiler import contained


ROOT = Path(__file__).resolve().parents[1]
CONFIG = 'config/functional-functions.json'
CENSUS = 'evidence/lanes/native-inventory-completion/seeded/update-census.json'


def checked(root, item):
    path = contained(root, item['path'])
    if not path.is_file() or hashlib.sha256(path.read_bytes()).hexdigest() != item['sha256']:
        raise ValueError('Reviewed functional input changed: ' + item['path'])
    return path


def repository_definitions(root):
    found = {}
    pattern = re.compile(r'\b([A-Za-z_][A-Za-z0-9_]*)\s*\([^)]*\)\s*\{')
    for folder in ('src/native', 'source'):
        base = root / folder
        if not base.exists():
            continue
        for path in base.rglob('*'):
            if path.suffix.lower() not in ('.c', '.cpp', '.cc', '.cxx', '.h', '.hpp', '.hh', '.hxx') or not path.is_file():
                continue
            resolved = path.resolve()
            if not resolved.is_relative_to(root.resolve()) or path.stat().st_size > 4 * 1024 * 1024:
                raise ValueError('Repository source index contains an unsupported source path')
            for match in pattern.finditer(path.read_text(encoding='utf-8', errors='replace')):
                found.setdefault(match[1], set()).add(resolved)
    return found


def generate(root, report, registry):
    if registry['schemaVersion'] != 1 or registry['version'] != 'update-content0':
        raise ValueError('Unsupported reviewed functional registry')
    inventory = ci.read(root / 'evidence/inventory/update-content0.json')
    if registry['moduleSha256'] != inventory['codeSha256'] or registry['programId'] != inventory['programId']:
        raise ValueError('Functional registry identifies another original module')
    if registry['census']['path'] != CENSUS:
        raise ValueError('Unsupported reviewed functional census')
    census = ci.read(checked(root, registry['census']))
    census, unused_overlays = native_census_overlay.compose(root, census)
    canonical = {row['address']: row for row in census['functions']}
    if (census['codeSha256'] != registry['moduleSha256']
            or len(canonical) != census['functionCount'] or len(canonical) != len(census['functions'])):
        raise ValueError('Functional census identity or entry count differs')
    admitted = {row['symbol'] for row in ci.accepted_functions(root)}
    reported = {}
    for unit in report['units']:
        for function in unit.get('functions', []):
            if function['name'] in reported:
                raise ValueError('Report function ownership is ambiguous')
            reported[function['name']] = (unit, function)
    emitted, names, definitions = [], set(), None
    for item in registry['functions']:
        name = item['name']
        if not re.fullmatch(r'fn_[0-9a-f]{8}', name) or name in names or name in admitted:
            raise ValueError('Functional name is invalid, duplicated, or already admitted as exact')
        confidence = item['confidence']
        if confidence not in ('high', 'medium', 'low'):
            raise ValueError('Unsupported functional confidence')
        lookup = item.get('sourceLookup', 'unit')
        if lookup not in ('unit', 'repository-function-index'):
            raise ValueError('Unsupported reviewed source lookup policy')
        packet = ci.read(checked(root, item['packet']))
        if packet['moduleSha256'] != registry['moduleSha256'] or packet['acceptedSourceCreditGranted'] != 0:
            raise ValueError('Functional proof has another module or claims source admission')
        selected = [row for row in packet['functions'] if row['symbol'] == name]
        if len(selected) != 1:
            raise ValueError('Functional proof omits a unique reviewed function')
        proof = selected[0]
        identity = proof['canonicalIdentity']
        address = int(name[3:], 16)
        original = canonical.get(address)
        if (original is None or identity['address'] != address or identity['mode'] not in ('ARM', 'Thumb')
                or identity['mode'] != original['mode']
                or identity['programId'] != registry['programId']
                or identity['moduleSha256'] != registry['moduleSha256']):
            raise ValueError('Functional canonical identity differs')
        if proof['originalInstructionBytes'] != original['textBodyBytes']:
            raise ValueError('Functional proof omits part of the canonical function body')
        entry_ranges = [part for part in original['ranges'] if part['start'] <= address < part['endExclusive']]
        if len(entry_ranges) != 1:
            raise ValueError('Functional entry has no unique canonical range')
        entry_bytes = entry_ranges[0]['endExclusive'] - address
        if entry_bytes != proof['originalInstructionBytes']:
            if (proof.get('originalInstructionRanges') != original['ranges']
                    or proof.get('reportEntryBytes') != entry_bytes):
                raise ValueError('Fragmented functional proof needs complete ranges and explicit report entry extent')
        if 'originalInstructionRanges' in proof:
            declared = proof['originalInstructionRanges']
            keys = ('start', 'endExclusive', 'bytes')
            if (not isinstance(declared, list) or any(not isinstance(part, dict)
                    or not all(key in part for key in keys) for part in declared)
                    or [tuple(part[key] for key in keys) for part in declared]
                    != [tuple(part[key] for key in keys) for part in original['ranges']]):
                raise ValueError('Explicit functional ranges differ from the canonical body')
        if 'reportEntryBytes' in proof and proof['reportEntryBytes'] != entry_bytes:
            raise ValueError('Explicit functional entry extent differs from the canonical body')
        if proof['exactObjectSpan'] is not False or proof['exactLinkedSpan'] is not False:
            raise ValueError('An exact candidate requires separate source admission')
        if proof['functionalConfidence'] != confidence or proof['behavior']['allPassed'] is not True:
            raise ValueError('Reviewed confidence or bounded behavior proof differs')
        source = checked(root, proof['source'])
        for header in packet.get('headers', []):
            checked(root, header)
        for dependency in packet.get('sourceDependencies', []):
            checked(root, dependency)
        source_name = proof.get('sourceName', name)
        if not re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', source_name):
            raise ValueError('Reviewed source name is invalid')
        if source.suffix != '.c' or not re.search(r'\b' + re.escape(source_name) + r'\s*\([^)]*\)\s*\{', source.read_text()):
            raise ValueError('Reviewed source lacks the reported C definition')
        if source_name != name:
            alias = proof.get('symbolNames')
            if not alias or alias['path'] != 'include/bytematch_names.h':
                raise ValueError('Renamed source lacks its reviewed names header')
            header = checked(root, alias)
            targets = re.findall(r'^#define\s+' + re.escape(name) + r'\s+([A-Za-z_][A-Za-z0-9_]*)\s*$', header.read_text(), re.M)
            if targets != [source_name]:
                raise ValueError('Reviewed source alias is absent or ambiguous')
            if definitions is None:
                definitions = repository_definitions(root)
            explicit_file = (lookup == 'unit' and name in reported
                and reported[name][0]['metadata']['source_path'] == proof['source']['path'])
            if (definitions.get(name) and not explicit_file) or definitions.get(source_name) != {source.resolve()}:
                raise ValueError('Renamed source index has a canonical conflict or lacks a unique reviewed definition')
        if name not in reported:
            raise ValueError('Functional name is absent from this report')
        unit, function = reported[name]
        owner = contained(root, unit['metadata']['source_path'])
        if not (source == owner or owner.is_dir() and source.is_relative_to(owner)):
            if lookup != 'repository-function-index':
                raise ValueError('Report source ownership cannot expose the functional C definition')
            if definitions is None:
                definitions = repository_definitions(root)
            if definitions.get(source_name) != {source.resolve()}:
                raise ValueError('Repository function index lacks a unique reviewed C definition')
        if (int(function['size']) != entry_bytes
                or int(function['metadata']['virtual_address']) != address):
            raise ValueError('Functional original report extent differs')
        emitted.append({'name': name, 'confidence': confidence})
        names.add(name)
    return {'functions': sorted(emitted, key=lambda row: row['name'])}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--report', type=Path, default=ROOT / 'build/update-content0/report.json')
    parser.add_argument('--output', type=Path, default=ROOT / 'build/update-content0/functional.json')
    args = parser.parse_args()
    target = args.output.resolve()
    if not target.is_relative_to(ROOT / 'build/update-content0') or target.name != 'functional.json':
        raise ValueError('Functional companion must stay beside the update progress report')
    result = generate(ROOT, ci.read(args.report), ci.read(ROOT / CONFIG))
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps({'functionalFunctions': len(result['functions']), 'matchingSourceCreditGranted': 0}))


if __name__ == '__main__':
    main()
