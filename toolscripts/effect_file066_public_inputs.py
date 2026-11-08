import hashlib
import json
import re
import sys
from pathlib import Path, PurePosixPath


def identity(path):
    raw = Path(path).read_bytes()
    return {'bytes': len(raw), 'sha256': hashlib.sha256(raw).hexdigest()}


def checked(path, row):
    if identity(path) != {key: row[key] for key in ('bytes', 'sha256')}:
        raise ValueError('Declared public input identity differs: ' + str(path))
    return Path(path)


def relative(value):
    path = PurePosixPath(value)
    if path.is_absolute() or '\\' in value or ':' in value or any(part in ('.', '..') for part in path.parts):
        raise ValueError('Public intake relative path escaped its declared namespace')
    return Path(*path.parts)


def validate(manifest):
    rows = manifest['productionAndFixtures']
    if len(rows) != 68 or len({row['logicalPath'] for row in rows}) != 68:
        raise ValueError('Frozen066 source roster differs')
    for role, count in [('production-algorithm', 30), ('header', 29), ('qualification-fixture', 9)]:
        if sum(row['role'] == role for row in rows) != count:
            raise ValueError('Production/header/qualification roles differ')
    known = {row['logicalPath'] for row in rows}
    for row in rows:
        relative(row['logicalPath'])
        if not set(row['quotedIncludes']) <= known:
            raise ValueError('Quoted include escaped the declared source closure')
    for profile, count in [('arm', 31), ('windows', 32), ('a64', 31)]:
        if sum(profile in row['targets'] for row in rows) != count:
            raise ValueError('Public066 allowed compilation target roster differs')
    for row in manifest['support']:
        relative(row['snapshot'])
        relative(row['logicalPath'])
    for row in manifest['metadataSnapshots']:
        relative(row['legacyRequest'])
        if relative(row['snapshot']).name != row['snapshot']:
            raise ValueError('Metadata snapshot must be one declared file')


def bind_seed(output, manifest):
    selected = next(row for row in manifest['metadataSnapshots'] if row['snapshot'] == 'dependency-selection-seed.json')
    seed = json.loads(checked(output / 'metadata' / selected['snapshot'], selected).read_bytes())
    sources = {row['logicalPath']: row for row in manifest['productionAndFixtures'] if row['compilationRole'] == 'translation-unit'
        and row['logicalPath'] != 'toolscripts/native_effect065_resource_runtime.c'}
    if {row['path'] for row in seed['sources']} != set(sources):
        raise ValueError('Frozen dependency-selection build.json source set differs')
    for row in seed['sources']:
        if any(row[key] != sources[row['path']][key] for key in ('bytes', 'sha256')):
            raise ValueError('Seed source bytes differ from public C/H roles')
    for profile, row in seed['artifacts'].items():
        actual = manifest['originalBuildArtifacts'][profile]
        pairs = list(zip(row['objects'], actual['objects'], strict=True)) + [(row['linked'], actual['linked'])]
        if any((a['bytes'], a['sha256']) != (b['bytes'], b['sha256']) for a, b in pairs):
            raise ValueError('Seed artifact identity differs from frozen stage baseline')
    return dict(snapshot=selected['snapshot'], sha256=selected['sha256'], selectedCTranslationUnits=len(sources),
        previousArtifactsRead=False, roleAndSourceIdentityBound=True)


def materialize(root, draft, output):
    root, draft, output = map(Path, (root, draft, output))
    if output.exists() or not output.resolve().is_relative_to(root.resolve() / 'work'):
        raise ValueError('Use a new owned replay output')
    output.mkdir(parents=True)
    manifest = json.loads((draft / 'metadata/manifest.json').read_bytes())
    validate(manifest)
    for row in manifest['support']:
        source = checked(draft / 'payload' / row['snapshot'], row)
        destination = output / 'code' / row['snapshot']
        destination.parent.mkdir(parents=True, exist_ok=True)
        destination.write_bytes(source.read_bytes())
    for row in manifest['productionAndFixtures']:
        source = draft / 'payload' / row['snapshot'] if 'snapshot' in row else root / row['path']
        checked(source, row)
        destination = output / 'source' / row['logicalPath']
        destination.parent.mkdir(parents=True, exist_ok=True)
        destination.write_bytes(source.read_bytes())
    for row in manifest['metadataSnapshots']:
        source = checked(draft / 'metadata' / row['snapshot'], row)
        destination = output / 'metadata' / row['snapshot']
        destination.parent.mkdir(exist_ok=True)
        destination.write_bytes(source.read_bytes())
    manifest['adapterFiles'] = []
    for path in sorted((draft / 'payload').glob('effect_file066_public_*.py')):
        destination = output / 'adapter' / path.name
        destination.parent.mkdir(exist_ok=True)
        destination.write_bytes(path.read_bytes())
        manifest['adapterFiles'].append(dict(name=path.name, **identity(path)))
    (output / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    (output / 'seed-binding.json').write_text(json.dumps(bind_seed(output, manifest), indent=2) + '\n')
    return manifest


def verify(root, output, manifest, original=False):
    validate(manifest)
    bind_seed(output, manifest)
    result = {}
    for row in manifest.get('adapterFiles', []):
        path = checked(output / 'adapter' / row['name'], row)
        result[str(path)] = row['sha256']
    for row in manifest['support']:
        path = checked(output / 'code' / row['snapshot'], row)
        result[str(path)] = row['sha256']
    for row in manifest['productionAndFixtures']:
        path = checked(output / 'source' / row['logicalPath'], row)
        result[str(path)] = row['sha256']
    for row in manifest['metadataSnapshots']:
        path = checked(output / 'metadata' / row['snapshot'], row)
        result[str(path)] = row['sha256']
    for row in manifest['referenceMetadata'] + (manifest['originalInputs'] if original else []):
        path = checked(root / row['path'], row)
        result[str(path)] = row['sha256']
    bases = {'project': root, 'python-base': Path(sys.base_prefix), 'absolute': Path()}
    for row in manifest.get('runtimeFiles', []):
        path = checked(bases[row['scope']] / row['path'], row)
        result[str(path)] = row['sha256']
    return result


def bind_builder(root, output, builder):
    original = builder.build
    source_root = output / 'source'

    def build(folder, overrides=None, source_root=source_root):
        remapped = {}
        for old, new in (overrides or {}).items():
            relative = Path(old).resolve().relative_to(root.resolve())
            if not Path(new).resolve().is_relative_to(output.resolve()):
                raise ValueError('Returning control source escaped current replay output')
            remapped[source_root / relative] = new
        return original(folder, remapped, source_root=source_root)

    builder.build = build
    return build
