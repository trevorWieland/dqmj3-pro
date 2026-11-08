import hashlib
import json
from pathlib import Path, PurePosixPath
import shutil
import sys


def identity(path):
    raw = path.read_bytes()
    return {'bytes': len(raw), 'sha256': hashlib.sha256(raw).hexdigest()}


def relative(value):
    path = PurePosixPath(value)
    if path.is_absolute() or ':' in value or '\\' in value or any(part in ['.', '..'] for part in path.parts):
        raise ValueError('Coupled070 declared relative path escaped')
    return Path(*path.parts)


def checked(path, row):
    if identity(path) != {key: row[key] for key in ['bytes', 'sha256']}:
        raise ValueError('Coupled070 declared input hash differs: ' + str(path))
    return path


def bind(target, manifest):
    declared = {row['logicalPath']: row for row in manifest['productionAndFixtures']}
    if len(declared) != 93: raise ValueError('Coupled070 source closure roster differs')
    for family, count in [('sdk', 91), ('branch', 93)]:
        packet = json.loads((target / 'metadata' / family / 'bounded-source-packet.json').read_text())
        frozen = {row['logicalPath']: row for row in packet['selectedCHeaderClosure']}
        if len(frozen) != count: raise ValueError('Coupled070 frozen source closure differs')
        for name, row in frozen.items():
            if any(declared[name][key] != row[key] for key in ['bytes', 'sha256', 'quotedIncludes']):
                raise ValueError('Coupled070 source role/include/hash binding differs')
        seed = json.loads((target / 'metadata' / family / 'build-seed.json').read_text())
        if any(command['exitCode'] for command in seed['commands']):
            raise ValueError('Coupled070 frozen build had failed command')
        prefix = 'work/native-file069-device-destructor-v1/source-v2/' if family == 'sdk' else 'work/native-file070-branches-v1/source-v2/'
        for row in seed['sources']:
            logical = row['path'].removeprefix(prefix)
            if logical not in frozen or any(row[key] != declared[logical][key] for key in ['bytes', 'sha256']):
                raise ValueError('Coupled070 frozen translation-unit selection differs')
    return {'sdkCHeaderInputs': 91, 'coupledCHeaderInputs': 93, 'oldArtifactsRead': False}


def write(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n')


def materialize(root, public, intake, output):
    if output.exists() or not output.is_relative_to(root / 'work') or output == root / 'work':
        raise ValueError('Coupled070 requires a fresh exclusive workspace')
    output.mkdir(parents=True)
    manifest = json.loads((intake / 'manifest.json').read_text())
    for group, directory in [('support', 'code'), ('productionAndFixtures', 'source')]:
        for row in manifest[group]:
            provider = root if row['existingPublicReference'] else public
            source = checked(provider / relative(row['proposedPublicPath']), row)
            destination = output / directory / relative(row['snapshot'] if group == 'support' else row['logicalPath'])
            destination.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(source, destination)
    for row in manifest['metadataSnapshots']:
        destination = output / 'metadata' / relative(row['snapshot'])
        destination.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(checked(intake / relative(row['snapshot']), row), destination)
    manifest['adapterFiles'] = []
    adapters = [checked(root / relative(row['proposedPublicPath']), row) for row in manifest['baseAdapters']]
    adapters += sorted((public / 'toolscripts').glob('coupled_file070_*.py'))
    for source in adapters:
        destination = output / 'adapter' / source.name
        destination.parent.mkdir(exist_ok=True)
        shutil.copyfile(source, destination)
        manifest['adapterFiles'].append({'name': source.name, **identity(source)})
    write(output / 'manifest.json', manifest)
    bind(output, manifest)
    return manifest


def tiny_copy(output, manifest):
    target = output / 'tiny'
    if target.exists(): raise ValueError('Preserve selected-input copy')
    for group, directory in [('support', 'code'), ('productionAndFixtures', 'source'), ('metadataSnapshots', 'metadata')]:
        for row in manifest[group]:
            logical = relative(row['logicalPath'] if group == 'productionAndFixtures' else row['snapshot'])
            destination = target / directory / logical
            destination.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(checked(output / directory / logical, row), destination)
    return target


def pins(root, output, target, manifest, original=False):
    bind(target, manifest)
    result = {str(output / 'manifest.json'): identity(output / 'manifest.json')}
    for group, directory in [('support', 'code'), ('productionAndFixtures', 'source'), ('metadataSnapshots', 'metadata')]:
        for row in manifest[group]:
            logical = relative(row['logicalPath'] if group == 'productionAndFixtures' else row['snapshot'])
            path = checked(target / directory / logical, row)
            result[str(path)] = identity(path)
    for row in manifest['adapterFiles']:
        path = checked(output / 'adapter' / row['name'], row)
        result[str(path)] = identity(path)
    for row in manifest['referenceMetadata'] + (manifest['originalInputs'] if original else []):
        path = checked(root / relative(row['path']), row)
        result[str(path)] = identity(path)
    bases = {'project': root, 'python-base': Path(sys.base_prefix), 'absolute': Path()}
    for row in manifest['runtimeFiles']:
        path = checked(bases[row['scope']] / row['path'], row)
        result[str(path)] = identity(path)
    return result


def artifact_pins(target, mode, family, control):
    if mode not in ['source', 'control', 'original']: return {}
    selected = 'branch' if mode == 'original' else family
    if mode == 'control':
        row = json.loads((target / 'metadata' / selected / 'controls.json').read_text())[control]
        directory, expected = target / 'controls' / selected / control / 'build', row['artifacts']
    else:
        directory = target / ('build-' + selected)
        expected = json.loads((target / 'metadata' / selected / 'build-seed.json').read_text())['artifacts']
    result = {}
    for profile, artifacts in expected.items():
        for row in artifacts['objects'] + [artifacts['linked']]:
            path = checked(directory / profile / Path(row['path']).name, row)
            result[str(path)] = identity(path)
    if len(result) != 133: raise ValueError('Coupled070 selected artifact roster differs')
    return result


def compare(recipe, expected):
    rows = []
    for profile, actual in recipe['artifacts'].items():
        old = expected[profile]
        for left, right in zip(old['objects'] + [old['linked']], actual['objects'] + [actual['linked']], strict=True):
            if any(left[key] != right[key] for key in ['bytes', 'sha256']):
                raise ValueError('Coupled070 compiler artifact differs')
            rows.append({'profile': profile, **{key: right[key] for key in ['bytes', 'sha256']}})
    if len(rows) != 133: raise ValueError('Coupled070 artifact closure incomplete')
    return rows
