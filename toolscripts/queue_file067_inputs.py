import hashlib
import json
from pathlib import Path, PurePosixPath
import sys


def identity(path):
    data = Path(path).read_bytes()
    return {'bytes': len(data), 'sha256': hashlib.sha256(data).hexdigest()}


def checked(path, row):
    if identity(path) != {key: row[key] for key in ['bytes', 'sha256']}:
        raise ValueError('Public067 declared input identity differs: ' + str(path))
    return Path(path)


def relative(value):
    path = PurePosixPath(value)
    if path.is_absolute() or '\\' in value or ':' in value or any(part in ['.', '..'] for part in path.parts):
        raise ValueError('Public067 relative path escaped its declared namespace')
    return Path(*path.parts)


def materialize(root, public_root, intake, output):
    if output.exists() or not output.is_relative_to(root / 'work') or output == root / 'work':
        raise ValueError('Public067 needs a new exclusive workspace output')
    output.mkdir(parents=True)
    manifest = json.loads((intake / 'manifest.json').read_text())
    checked(root / manifest['frozenReady']['path'], manifest['frozenReady'])
    for group, directory in [('support', 'code'), ('productionAndFixtures', 'source')]:
        for row in manifest[group]:
            provider = root if row['existingPublicReference'] else public_root
            path = checked(provider / relative(row['proposedPublicPath']), row)
            destination = output / directory / relative(row['snapshot'] if group == 'support' else row['logicalPath'])
            destination.parent.mkdir(parents=True, exist_ok=True)
            destination.write_bytes(path.read_bytes())
    for row in manifest['metadataSnapshots'] + manifest['expectedObservations']:
        path = checked(intake / relative(row['snapshot']), row)
        destination = output / 'metadata' / relative(row['snapshot'])
        destination.parent.mkdir(parents=True, exist_ok=True)
        destination.write_bytes(path.read_bytes())
    manifest['adapterFiles'] = []
    for name, provider in [('effect_file066_public_guard.py', root), ('effect_file066_public_inputs.py', root)]:
        source = provider / 'toolscripts' / name
        destination = output / 'adapter' / name
        destination.parent.mkdir(exist_ok=True)
        destination.write_bytes(source.read_bytes())
        manifest['adapterFiles'].append({'name': name, **identity(source)})
    for source in sorted((public_root / 'toolscripts').glob('queue_file067_*.py')):
        destination = output / 'adapter' / source.name
        destination.parent.mkdir(exist_ok=True)
        destination.write_bytes(source.read_bytes())
        manifest['adapterFiles'].append({'name': source.name, **identity(source)})
    (output / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    bind_seed(output, manifest)
    return manifest


def bind_seed(output, manifest):
    row = next(row for row in manifest['metadataSnapshots'] if row['snapshot'] == 'dependency-selection-seed.json')
    seed = json.loads(checked(output / 'metadata' / row['snapshot'], row).read_text())
    expected = {row['logicalPath']: row for row in manifest['productionAndFixtures']
        if row['compilationRole'] == 'translation-unit' and set(row['targets']) & {'arm', 'windows', 'a64'}
        and not row['logicalPath'].endswith('native_effect065_resource_runtime.c')}
    if {row['path'] for row in seed['sources']} != set(expected):
        raise ValueError('Public067 dependency-selection source roster differs')
    for item in seed['sources']:
        if any(item[key] != expected[item['path']][key] for key in ['bytes', 'sha256']):
            raise ValueError('Public067 dependency-selection source bytes differ')
    if seed['artifacts'] != manifest['originalBuildArtifacts']:
        raise ValueError('Public067 dependency-selection artifact identities differ')
    return {'selectedCTranslationUnits': len(expected), 'seedSha256': row['sha256'], 'oldArtifactsRead': False}


def verify(root, output, manifest, mode):
    bind_seed(output, manifest)
    identities = {}
    for group, directory in [('support', 'code'), ('productionAndFixtures', 'source')]:
        for row in manifest[group]:
            path = output / directory / relative(row['snapshot'] if group == 'support' else row['logicalPath'])
            checked(path, row)
            identities[str(path)] = row['sha256']
    for row in manifest['metadataSnapshots'] + manifest['expectedObservations']:
        path = checked(output / 'metadata' / relative(row['snapshot']), row)
        identities[str(path)] = row['sha256']
    for row in manifest['adapterFiles']:
        path = checked(output / 'adapter' / row['name'], row)
        identities[str(path)] = row['sha256']
    for row in manifest['referenceMetadata'] + ([manifest['frozenReady']]) + (manifest['originalInputs'] if mode == 'original' else []):
        checked(root / row['path'], row)
        identities[str(root / row['path'])] = row['sha256']
    bases = {'project': root, 'python-base': Path(sys.base_prefix), 'absolute': Path()}
    for row in manifest['runtimeFiles']:
        path = checked(bases[row['scope']] / row['path'], row)
        identities[str(path)] = row['sha256']
    return identities


def bind_builder(root, output, builder):
    from effect_file066_public_inputs import bind_builder as previous
    return previous(root, output, builder)
