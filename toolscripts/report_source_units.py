import hashlib
import json
from pathlib import Path
import re
CONFIG = 'config/objdiff-source-units.json'

def verify_refinement(expected, actual):
    index = 0
    actual = sorted(actual)
    for start, size in sorted(expected):
        cursor, end = (start, start + size)
        if size <= 0:
            raise ValueError('Original accounting partition has an empty interval')
        while cursor < end:
            if index >= len(actual):
                raise ValueError('Object ownership drops original accounting bytes')
            low, extent = actual[index]
            if low != cursor or extent <= 0 or low + extent > end:
                raise ValueError('Object ownership crosses or overlaps an original accounting interval')
            cursor += extent
            index += 1
    if index != len(actual):
        raise ValueError('Object ownership adds original accounting bytes')

def load(root, census, accepted):
    path = root / CONFIG
    if not path.exists():
        return ([], None)
    raw = path.read_bytes()
    config = json.loads(raw)
    if config.get('schemaVersion') != 1 or config.get('version') != 'update-content0':
        raise ValueError('Unsupported source-directed report units')
    canonical = {row['address']: row for row in census['functions']}
    admitted = {row['address'] for row in accepted}
    seen = set()
    result = []
    for unit in config['units']:
        symbol = unit['symbol']
        if not re.fullmatch('fn_[0-9a-f]{8}', symbol) or symbol in seen:
            raise ValueError('Duplicated or invalid source-directed symbol')
        seen.add(symbol)
        address = int(symbol[3:], 16)
        function = canonical.get(address)
        if function is None or address in admitted or len(function['ranges']) != 1:
            raise ValueError('Source-directed unit needs one complete unmatched canonical range')
        span = function['ranges'][0]
        if span['start'] != address or span['endExclusive'] - address != function['textBodyBytes']:
            raise ValueError('Source-directed function body extent differs')
        if any((address < entry < span['endExclusive'] for entry in canonical)):
            raise ValueError('Source-directed range contains another canonical entry')
        if any((max(address, row['address']) < min(span['endExclusive'], row['address'] + row['instructionBytes']) for row in accepted)):
            raise ValueError('Source-directed range overlaps exact source')
        source_path = unit['sourcePath']
        source = root / source_path
        if not re.fullmatch('(?:source/squirrel-wave\\d{3}|src/native/wave\\d{3}(?:-[a-z][a-z0-9-]*)?)/[A-Za-z0-9_./-]+\\.c', source_path) or '..' in Path(source_path).parts or source.is_symlink() or (not source.resolve().is_relative_to(root.resolve())):
            raise ValueError('Source-directed file escapes reviewed source roots')
        data = source.read_bytes()
        if hashlib.sha256(data).hexdigest() != unit['sourceSha256']:
            raise ValueError('Source-directed file identity differs')
        name = unit['sourceName']
        if not re.fullmatch('[A-Za-z_]\\w*', name) or not re.search('\\b' + re.escape(name) + '\\s*\\([^)]*\\)\\s*\\{', data.decode('utf-8')):
            raise ValueError('Source-directed file lacks its reviewed definition')
        evidence = unit['independentReplay']
        evidence_path = root / evidence['path']
        if not evidence['path'].startswith('evidence/verification/') or '..' in Path(evidence['path']).parts or evidence_path.is_symlink() or (not evidence_path.resolve().is_relative_to(root.resolve())):
            raise ValueError('Source-directed replay reference escapes reviewed evidence')
        proof = evidence_path.read_bytes()
        if hashlib.sha256(proof).hexdigest() != evidence['sha256'] or not json.loads(proof).get('completeUnmodifiedBatchReplayPassed'):
            raise ValueError('Source-directed unit lacks independent replay')
        result.append({**unit, 'address': address, 'mode': function['mode'], 'instructionBytes': function['textBodyBytes'], 'name': source_path.removesuffix('.c')})
    return (result, {'path': CONFIG, 'sha256': hashlib.sha256(raw).hexdigest()})
