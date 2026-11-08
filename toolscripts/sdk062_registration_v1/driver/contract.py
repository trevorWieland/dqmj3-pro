import hashlib
from pathlib import Path
import json


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def load(root, inputs, path):
    value = json.loads(path.read_text())
    if value['version'] != 1:
        raise ValueError('unsupported registration source map')
    prefixes = dict(production='src/native/wave062-registration/',
                    qualification='toolscripts/fixtures/sdk062_registration_v1/',
                    support='toolscripts/sdk062_registration_v1/',
                    driver='toolscripts/sdk062_registration_v1/driver/')
    files, seen = [], set()
    for row in value['files']:
        target = Path(row['target'])
        if target.is_absolute() or '..' in target.parts or row['target'] in seen:
            raise ValueError('invalid/duplicate registration input path')
        if row['role'] not in prefixes or not target.as_posix().startswith(prefixes[row['role']]):
            raise ValueError('registration input role/path mismatch')
        seen.add(row['target'])
        source = (inputs/target).resolve()
        source.relative_to(inputs.resolve())
        if source.stat().st_size != row['bytes'] or digest(source) != row['sha256']:
            raise ValueError('registration public source drift: '+str(source))
        files.append((row,source))
    production = {Path(row['target']).name for row,path in files if row['role'] == 'production'}
    expected = {'registry062ad.h','lookup062ad.c','register062ad.c','remove062ad.c',
                'lifetime062ad.c','bindings062ad.c'}
    if production != expected or sum(row['role']=='qualification' for row,path in files) != 2:
        raise ValueError('production/qualification selection incomplete')
    support = {Path(row['target']).name for row,path in files if row['role']=='support'}
    drivers = {Path(row['target']).name for row,path in files if row['role']=='driver'}
    if support != {'registry_build062ad.py','registry_model062ad.py','registry_proof062ad.py',
                   'registry_observer062ad.py','registry_qualify062ad.py',
                   'registry_controls062ad.py','test_registry062ad.py'} or drivers != {'contract.py','reference.py','run.py','launch.py'}:
        raise ValueError('registration support/driver selection incomplete')
    for row in value['readOnlyHelpers']:
        source = root/row['path']
        if source.stat().st_size != row['bytes'] or digest(source) != row['sha256']:
            raise ValueError('read-only registration dependency drift: '+str(source))
    return value, files
