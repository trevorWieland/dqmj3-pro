import hashlib
import json
from pathlib import Path

MANIFEST = 'evidence/lanes/native-sdk062/public-inputs-v1'
STAGES = ('context', 'arbiter', 'object', 'startup')


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def checked(root, row):
    path = (root / row['path']).resolve()
    if (not path.is_relative_to(root.resolve()) or not path.is_file()
            or path.stat().st_size != row['bytes'] or digest(path) != row['sha256']):
        raise ValueError('Public SDK input changed or escaped: ' + row['path'])
    return path


def load(root):
    folder = root / MANIFEST
    sources, support, reference = [json.loads((folder / name).read_bytes())
        for name in ('source-manifest.json', 'support-manifest.json', 'reference-manifest.json')]
    files = sources['files']
    if (len(files) != 31 or len({Path(row['path']).name for row in files}) != 31
            or sum(row['role'] == 'production-algorithm' for row in files) != 19
            or sum(row['role'] == 'header' for row in files) != 6
            or sum(row['role'] == 'qualification-fixture' for row in files) != 5
            or sum(row['role'] == 'cpu-model' for row in files) != 1
            or sources['includeDirectory'] != 'src/native/wave062-sdk/include'):
        raise ValueError('Public SDK source roster differs')
    for row in files:
        qualification = row['role'] in ('qualification-fixture', 'cpu-model')
        prefix = 'toolscripts/fixtures/sdk062/' if qualification else 'src/native/wave062-sdk/'
        if not row['path'].startswith(prefix) or row['lane'] not in STAGES:
            raise ValueError('SDK production and qualification paths differ')
    stage_lanes = dict(context={'context'}, arbiter={'context', 'arbiter'},
        object={'context', 'object'}, startup={'context', 'object', 'startup'})
    for stage, count in zip(STAGES, (6, 9, 12, 22), strict=True):
        selected = sources['stages'][stage]
        known = {row['path'] for row in files if row['path'].endswith('.c')
                 and row['lane'] in stage_lanes[stage]}
        if len(selected) != count or len(set(selected)) != count or set(selected) != known:
            raise ValueError('SDK stage source closure differs: ' + stage)
    for row in support['files']:
        if not row['path'].startswith('toolscripts/sdk062/') or not row['path'].endswith('.py'):
            raise ValueError('SDK support roster escaped')
    for row in files + support['files'] + reference['files']:
        checked(root, row)
    return dict(sources=sources, support=support, reference=reference)


def materialize(root, output):
    root, output = root.resolve(), output.resolve()
    if not output.is_relative_to(root / 'work') or output == root / 'work' or output.exists():
        raise ValueError('SDK replay needs a new owned project work directory')
    inputs = load(root)
    destinations = []
    for row in inputs['sources']['files']:
        destinations.append((row, Path(row['lane']) / 'source' / Path(row['path']).name))
    for row in inputs['support']['files']:
        destinations.append((row, Path(row['path']).relative_to('toolscripts/sdk062')))
    for row in inputs['reference']['files']:
        destinations.append((row, Path(row['lane']) / Path(row['path']).name))
    if len({str(relative) for _, relative in destinations}) != len(destinations):
        raise ValueError('SDK snapshot destinations collide')
    for row, relative in destinations:
        destination = (output / relative).resolve()
        if not destination.is_relative_to(output):
            raise ValueError('SDK snapshot destination escaped')
        destination.parent.mkdir(parents=True, exist_ok=True)
        destination.write_bytes(checked(root, row).read_bytes())
    receipt = dict(status='tiny-public-own-source-snapshot-created', copiedFiles=len(destinations),
        copiedBytes=sum(row['bytes'] for row, _ in destinations), sourceCreditGranted=0,
        originalArchivesToolsRuntimeTreesOrGameImagesCopied=False)
    (output / 'source-copy.json').write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
    return inputs


def selection(root, inputs):
    return {Path(row['path']).name: checked(root, row) for row in inputs['sources']['files']
            if row['path'].endswith('.c')}


def merged_overrides(selected, overrides, output):
    result = dict(selected)
    for name, value in (overrides or {}).items():
        path = Path(value).resolve()
        if (name not in selected or path.name != name or not path.is_file()
                or not path.is_relative_to(output.resolve())):
            raise ValueError('SDK control source escaped declared own-source output')
        result[name] = path
    return result


def remap_includes(argv, allowed, public_headers):
    result, index, included = [], 0, False
    approved = {Path(path).resolve() for path in allowed}
    while index < len(argv):
        if str(argv[index]) != '-I':
            result.append(argv[index])
            index += 1
            continue
        if index + 1 == len(argv) or Path(argv[index + 1]).resolve() not in approved:
            raise ValueError('SDK compiler requested an undeclared include directory')
        if not included:
            result += ['-I', public_headers]
            included = True
        index += 2
    return result
