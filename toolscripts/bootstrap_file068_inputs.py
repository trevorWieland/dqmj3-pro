import hashlib
import json
from pathlib import Path, PurePosixPath
import shutil
import sys


def identity(path):
    data = Path(path).read_bytes()
    return {'bytes': len(data), 'sha256': hashlib.sha256(data).hexdigest()}


def checked(path, row):
    if identity(path) != {key: row[key] for key in ['bytes', 'sha256']}:
        raise ValueError('Public068 declared input identity differs: ' + str(path))
    return Path(path)


def relative(value):
    path = PurePosixPath(value)
    if path.is_absolute() or ':' in value or '\\' in value or any(part in ['.', '..'] for part in path.parts):
        raise ValueError('Public068 relative input escaped its namespace')
    return Path(*path.parts)


def bind_seed(output, manifest):
    selected = next(row for row in manifest['metadataSnapshots'] if row['snapshot'] == 'bootstrap-source-seed.json')
    seed = json.loads(checked(output / 'metadata' / selected['snapshot'], selected).read_text())
    expected = {row['logicalPath']: row for row in manifest['productionAndFixtures']
        if row['compilationRole'] == 'translation-unit' and row['logicalPath'] != 'toolscripts/native_effect065_resource_runtime.c'}
    actual = {row['path'].removeprefix(manifest['sourceSeedPrefix']): row for row in seed['sources']}
    if set(actual) != set(expected):
        raise ValueError('Public068 source selection roster differs')
    for name, row in actual.items():
        if any(row[key] != expected[name][key] for key in ['bytes', 'sha256']):
            raise ValueError('Public068 selected translation-unit bytes differ')
    if seed['artifacts'] != manifest['originalBuildArtifacts']:
        raise ValueError('Public068 source seed artifact fingerprints differ')
    packet_row = next(row for row in manifest['metadataSnapshots'] if row['snapshot'] == 'bounded-source-packet.json')
    packet = json.loads(checked(output / 'metadata' / packet_row['snapshot'], packet_row).read_text())
    original = {row['logicalPath']: row for row in packet['selectedCHeaderClosure']}
    for row in manifest['productionAndFixtures']:
        if any(row[key] != original[row['logicalPath']][key] for key in ['bytes', 'sha256', 'quotedIncludes']):
            raise ValueError('Public068 frozen source role or include identity differs')
    return {'selectedTranslationUnits': len(expected), 'oldArtifactsRead': False, 'sourceSeedSHA256': selected['sha256']}


def materialize(root, public, intake, output):
    if output.exists() or not output.is_relative_to(root / 'work') or output == root / 'work':
        raise ValueError('Public068 requires a fresh exclusive workspace output')
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
    expected = output / 'original-v2/report.json'
    expected.parent.mkdir()
    shutil.copyfile(output / 'metadata/observed-original.json', expected)
    manifest['adapterFiles'] = []
    for row in manifest['baseAdapters']:
        source = checked(root / relative(row['proposedPublicPath']), row)
        destination = output / 'adapter' / row['name']
        destination.parent.mkdir(exist_ok=True)
        shutil.copyfile(source, destination)
        manifest['adapterFiles'].append({'name': row['name'], **identity(source)})
    for source in sorted((public / 'toolscripts').glob('bootstrap_file068_*.py')):
        destination = output / 'adapter' / source.name
        shutil.copyfile(source, destination)
        manifest['adapterFiles'].append({'name': source.name, **identity(source)})
    (output / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    bind_seed(output, manifest)
    return manifest


def tiny_copy(output, manifest):
    target = output / 'tiny'
    if target.exists():
        raise ValueError('Preserve public068 tiny input tree')
    for group, directory in [('support', 'code'), ('productionAndFixtures', 'source')]:
        for row in manifest[group]:
            logical = relative(row['snapshot'] if group == 'support' else row['logicalPath'])
            destination = target / directory / logical
            destination.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(checked(output / directory / logical, row), destination)
    destination = target / 'original-v2/report.json'
    destination.parent.mkdir()
    shutil.copyfile(output / 'metadata/observed-original.json', destination)
    return target


def verify(root, output, manifest, mode):
    bind_seed(output, manifest)
    target = output / 'tiny' if mode.startswith('tiny') else output
    pins = {}
    for group, directory in [('support', 'code'), ('productionAndFixtures', 'source')]:
        for row in manifest[group]:
            path = checked(target / directory / relative(row['snapshot'] if group == 'support' else row['logicalPath']), row)
            pins[str(path)] = row['sha256']
    for row in manifest['metadataSnapshots']:
        path = checked(output / 'metadata' / relative(row['snapshot']), row)
        pins[str(path)] = row['sha256']
    observed = next(row for row in manifest['metadataSnapshots'] if row['snapshot'] == 'observed-original.json')
    path = checked(target / 'original-v2/report.json', observed)
    pins[str(path)] = observed['sha256']
    for row in manifest['adapterFiles']:
        path = checked(output / 'adapter' / row['name'], row)
        pins[str(path)] = row['sha256']
    for row in manifest['referenceMetadata'] + (manifest['originalInputs'] if mode == 'original' else []):
        path = checked(root / relative(row['path']), row)
        pins[str(path)] = row['sha256']
    bases = {'project': root, 'python-base': Path(sys.base_prefix), 'absolute': Path()}
    for row in manifest['runtimeFiles']:
        path = checked(bases[row['scope']] / row['path'], row)
        pins[str(path)] = row['sha256']
    builds = []
    if mode in ['source', 'original', 'controls-build']:
        builds.append((output / 'build', manifest['originalBuildArtifacts']))
    elif mode == 'tiny':
        builds.append((output / 'tiny/build', manifest['originalBuildArtifacts']))
    elif mode == 'control':
        expected = json.loads((output / 'metadata/control-build-identities.json').read_text())['artifacts']
        builds += [(output / 'controls' / name / 'build', value) for name, value in expected.items()]
    for directory, expected in builds:
        for profile, artifacts in expected.items():
            for row in artifacts['objects'] + [artifacts['linked']]:
                path = checked(directory / profile / Path(row['path']).name, row)
                pins[str(path)] = row['sha256']
    return pins
