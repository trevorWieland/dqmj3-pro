import argparse
import copy
import difflib
import hashlib
import json
from pathlib import Path
import re
import subprocess


HEADER = 'include/bytematch_names.h'


def identity(path, data):
    return dict(path=path, bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def extended(previous, current):
    if not previous or not current.startswith(previous):
        raise ValueError('Source-name refresh requires an unchanged header prefix')
    pattern = rb'^#define\s+(fn_[0-9a-f]{8})\s+([A-Za-z_][A-Za-z0-9_]*)\s*$'
    if any(line.strip() and re.fullmatch(pattern, line) is None
           for data in [previous, current] for line in data.splitlines()):
        raise ValueError('Source-name header contains unsupported directives or text')
    old = re.findall(pattern, previous, re.M)
    new = re.findall(pattern, current, re.M)
    if not old or len({name for name, _ in new}) != len(new) or new[:len(old)] != old:
        raise ValueError('Source-name mappings were changed or duplicated')
    return len(old), len(new)


def rewrite(packet, previous, current):
    result = copy.deepcopy(packet)
    changed = 0
    rows = [row['symbolNames'] for row in result['functions'] if 'symbolNames' in row]
    rows += result.get('headers', []) + result.get('sourceDependencies', [])
    for row in rows:
        if row.get('path') != HEADER or row == current:
            continue
        if row != previous:
            raise ValueError('Functional alias pin differs from both reviewed headers')
        row.update(current)
        changed += 1
    return result, changed


def json_bytes(path, value):
    raw = path.read_bytes().decode('utf-8')
    before = raw.splitlines(keepends=True)
    normalized = (json.dumps(json.loads(raw), indent=2) + '\n').splitlines(keepends=True)
    after = (json.dumps(value, indent=2) + '\n').splitlines(keepends=True)
    if [s.rstrip('\r\n') for s in before] != [s.rstrip('\r\n') for s in normalized]:
        raise ValueError('Unexpected proof JSON formatting')
    parts = []
    for tag, a, b, c, d in difflib.SequenceMatcher(a=normalized, b=after, autojunk=False).get_opcodes():
        parts.extend(before[a:b] if tag == 'equal' else after[c:d])
    return ''.join(parts).encode('utf-8')


def refresh(root, revision, output):
    root = root.resolve()
    previous = subprocess.check_output(['git', '-C', str(root), 'show', revision + ':' + HEADER])
    current = (root / HEADER).read_bytes()
    counts = extended(previous, current)
    old_pin, new_pin = identity(HEADER, previous), identity(HEADER, current)
    config = json.loads((root / 'config/build-units.json').read_text(encoding='utf-8'))
    if any(HEADER in unit['headers'] for unit in config['units']):
        raise ValueError('Metadata header participates in public source compilation')
    for folder in ['source', 'src/native']:
        for path in (root / folder).rglob('*'):
            if path.suffix in ['.c', '.h'] and re.search(r'#\s*include[^\n]*bytematch_names', path.read_text(encoding='utf-8')):
                raise ValueError('Metadata header participates in authored C includes')
    registry_path = root / 'config/functional-functions.json'
    registry = json.loads(registry_path.read_text(encoding='utf-8'))
    before_registry = identity(registry_path.relative_to(root).as_posix(), registry_path.read_bytes())
    pending = {}
    for row in registry['functions']:
        pin = row['packet']
        path = (root / pin['path']).resolve()
        if not path.is_relative_to(root / 'evidence'):
            raise ValueError('Active proof lies outside the evidence tree')
        raw = path.read_bytes()
        actual = identity(pin['path'], raw)
        if (not {'path', 'sha256'} <= set(pin) or set(pin) - set(actual)
                or any(actual[key] != value for key, value in pin.items())):
            raise ValueError('Active functional packet changed before metadata refresh')
        if pin['path'] not in pending:
            packet, count = rewrite(json.loads(raw), old_pin, new_pin)
            if count and not path.is_relative_to(root / 'evidence/functional'):
                raise ValueError('Frozen lane packets cannot be rewritten by alias refresh')
            pending[pin['path']] = dict(path=path, before=pin.copy(), packet=packet, count=count)
    changed = [item for item in pending.values() if item['count']]
    if changed and output.exists():
        raise ValueError('Preserve the previous refresh receipt before another mutation')
    for item in changed:
        item['serialized'] = json_bytes(item['path'], item['packet'])
        actual = identity(item['before']['path'], item['serialized'])
        item['after'] = {key: actual[key] for key in item['before']}
    for row in registry['functions']:
        item = pending[row['packet']['path']]
        if item['count']:
            row['packet'] = item['after']
    if changed:
        serialized_registry = json_bytes(registry_path, registry)
        for item in changed:
            item['path'].write_bytes(item['serialized'])
        registry_path.write_bytes(serialized_registry)
        receipt = dict(schemaVersion=1, status='append-only-source-link-metadata-pins-refreshed',
                       previousHeaderRevision=revision, previousHeader=old_pin, currentHeader=new_pin,
                       previousMappings=counts[0], currentMappings=counts[1], runtimeSourceChanged=False,
                       metadataHeaderUsedByCompiledC=False, validatorChanged=False,
                       registryBefore=before_registry,
                       registryAfter=identity(before_registry['path'], registry_path.read_bytes()),
                       packets=[dict(before=item['before'], after=item['after'], aliasPins=item['count']) for item in changed])
        output.parent.mkdir(parents=True, exist_ok=True)
        output.write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
    return dict(packets=len(changed), aliasPins=sum(item['count'] for item in changed), mappings=counts[1])


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--previous-header-revision', required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    print(json.dumps(refresh(Path(__file__).resolve().parents[1], args.previous_header_revision, args.output.resolve())))
