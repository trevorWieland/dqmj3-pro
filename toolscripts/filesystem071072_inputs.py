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
        raise ValueError('Filesystem071072 declared relative path escaped')
    return Path(*path.parts)


def checked(path, row):
    if identity(path) != {key: row[key] for key in ['bytes', 'sha256']}:
        raise ValueError('Filesystem071072 declared input hash differs: ' + str(path))
    return path


def bind(target, manifest):
    declared = {row['logicalPath']: row for row in manifest['productionAndFixtures']}
    if len(declared) != 106: raise ValueError('Combined selected C/H closure differs')
    for logical, row in declared.items():
        if any(name not in declared for name in row['quotedIncludes']): raise ValueError('Combined quoted include escaped selected closure')
    seed = json.loads((target / 'metadata/combined/build-seed.json').read_text())
    if any(row['exitCode'] for row in seed['commands']): raise ValueError('Failed combined seed compiler command')
    for row in seed['sources']:
        logical = next((name for name in declared if row['path'].endswith('/' + name)), None)
        if logical is None or any(row[key] != declared[logical][key] for key in ['bytes', 'sha256']): raise ValueError('Combined seed source-role/hash differs')
    return {'selectedCHeaderInputs': 106, 'legacyCanonicalHeadersUnmodified': True, 'oldBuildArtifactsRead': False}


def write(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n')


def materialize(root, public, intake, output):
    if output.exists() or not output.is_relative_to(root / 'work') or output == root / 'work':
        raise ValueError('Filesystem071072 requires a fresh exclusive workspace')
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
    adapters += sorted((public / 'toolscripts').glob('filesystem071072_*.py'))
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


def pins(root, output, target, manifest, original=False, compiler=False):
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
        if not compiler and row.get('scope') == 'project' and row['path'].startswith('tools/clang-21/'):
            continue
        path = checked(bases[row['scope']] / row['path'], row)
        result[str(path)] = identity(path)
    return result


def artifact_pins(target, mode, family, control, manifest):
    if mode not in ['source', 'control']: return {}
    directory = target / 'controls' / family / control / 'build' if mode == 'control' else target / 'build-combined'
    recipe_path = directory / 'build.json'
    recipe = json.loads(recipe_path.read_text())
    expected = recipe['artifacts'] if mode == 'control' else json.loads((target / 'metadata/combined/build-seed.json').read_text())['artifacts']
    result = {str(recipe_path): identity(recipe_path)}
    if mode == 'control':
        mutation = json.loads((target / 'metadata' / family / 'controls.json').read_text())[control]
        source = directory.parent / 'source'
        for row in manifest['productionAndFixtures']:
            expected_source = mutation if row['logicalPath'] == mutation['file'] else row
            path = checked(source / relative(row['logicalPath']), expected_source)
            result[str(path)] = identity(path)
    for profile, artifacts in expected.items():
        for row in artifacts['objects'] + [artifacts['linked']]:
            path = checked(directory / profile / Path(row['path']).name, row)
            result[str(path)] = identity(path)
    if len(result) != (252 if mode == 'control' else 146): raise ValueError('Combined selected build/artifact roster incomplete')
    return result


def compare(recipe, expected):
    rows = []
    for profile, actual in recipe['artifacts'].items():
        old = expected[profile]
        for left, right in zip(old['objects'] + [old['linked']], actual['objects'] + [actual['linked']], strict=True):
            if any(left[key] != right[key] for key in ['bytes', 'sha256']):
                raise ValueError('Filesystem071072 compiler artifact differs')
            rows.append({'profile': profile, **{key: right[key] for key in ['bytes', 'sha256']}})
    if len(rows) != 145: raise ValueError('Filesystem071072 artifact closure incomplete')
    return rows
