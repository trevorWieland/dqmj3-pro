"""Acquire the user's own original image and extract the code image and ExHeader.

Nothing is downloaded and nothing derived from the original is committed. The
CIA lives under ``inputs/`` and its product under ``generated/``; both are
gitignored. The input identity comes from ``project.json``: if the file the user
supplies is not the measured update CIA, the build stops before doing anything
with it.
"""

import hashlib
import json
import lzma
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import exheader
import inventory


ROOT = Path(__file__).resolve().parents[1]
VERSION = 'update-content0'
CHUNK = 1024 * 1024


class InputError(ValueError):
    """The supplied original image is not the measured input."""


def digest(path):
    with Path(path).open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def read_json(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def contained(root, value):
    """Resolve a repository-relative path, refusing to leave the repository."""
    relative = Path(value)
    if relative.is_absolute() or '..' in relative.parts:
        raise InputError('Expected a repository-relative path: ' + value)
    path = Path(root) / relative
    if not path.resolve().is_relative_to(Path(root).resolve()):
        raise InputError('Path escapes the repository: ' + value)
    return path


def verify(path, expected, size=None):
    if not Path(path).is_file():
        raise InputError('Missing input: ' + str(path))
    if digest(path) != expected:
        raise InputError('Input identity mismatch: ' + str(path))
    if size is not None and Path(path).stat().st_size != size:
        raise InputError('Input size mismatch: ' + str(path))


def materialize(root, private):
    """Reassemble the pinned CIAs from the owner's ordered XZ parts."""
    project = read_json(Path(root) / 'project.json')
    manifest = read_json(Path(private) / 'inputs-manifest.json')
    expected = {Path(project['inputs'][label]).name: (project['inputs'][label], project[label + 'CiaSha256'])
                for label in ('base', 'update')}
    if manifest.get('schemaVersion') != 1 or {row['path'] for row in manifest.get('files', [])} != set(expected):
        raise InputError('The private manifest does not identify exactly the two measured CIA inputs')
    for row in manifest['files']:
        relative, wanted = expected[row['path']]
        if row.get('compression') != 'xz' or row.get('sha256') != wanted or row.get('bytes', 0) <= 0:
            raise InputError('Private manifest differs from the pinned input contract')
        target = contained(root, relative)
        if target.exists():
            verify(target, wanted, row['bytes'])
            continue
        parts = []
        for part in row['parts']:
            if Path(part['path']).name != part['path'] or part.get('bytes', 0) <= 0:
                raise InputError('Invalid private input part')
            source = contained(private, part['path'])
            verify(source, part['sha256'], part['bytes'])
            parts.append(source)
        decompress(parts, target, row)
    return [contained(root, project['inputs'][label]) for label in ('base', 'update')]


def decompress(parts, target, row):
    target.parent.mkdir(parents=True, exist_ok=True)
    temporary = target.with_suffix('.download')
    decoder = lzma.LZMADecompressor(format=lzma.FORMAT_XZ)
    total = 0
    with temporary.open('wb') as output:
        for part in parts:
            with part.open('rb') as stream:
                while block := stream.read(CHUNK):
                    if decoder.eof:
                        raise InputError('Trailing data after the compressed CIA')
                    decoded = decoder.decompress(block, max_length=CHUNK)
                    while True:
                        total += len(decoded)
                        if total > row['bytes']:
                            raise InputError('Decompressed input exceeds its measured extent')
                        output.write(decoded)
                        if decoder.needs_input or decoder.eof:
                            break
                        decoded = decoder.decompress(b'', max_length=CHUNK)
        if not decoder.eof or decoder.unused_data:
            raise InputError('Truncated or trailing compressed input')
    verify(temporary, row['sha256'], row['bytes'])
    temporary.replace(target)


def locate(root, image):
    """The update CIA the user wants to build from."""
    project = read_json(Path(root) / 'project.json')
    path = Path(image) if image else Path(root) / project['inputs']['update']
    if not path.is_file():
        raise InputError('No original image at %s\n'
                         'Pass your own decrypted update CIA with --image PATH' % path)
    expected = project['updateCiaSha256']
    if digest(path) != expected:
        raise InputError('This is not the measured update image of DQMJ3 Professional.\n'
                         '  expected sha256 %s\n  supplied sha256 %s\n'
                         'The build refuses to measure a different ROM.' % (expected, digest(path)))
    return path


def extract(root, cia, intake):
    """Extract code.bin and exheader.bin, checking the container's own hashes."""
    root = Path(root)
    inventory.ROOT = root
    data = inventory.inspect_cia(Path(cia), 'update', out=intake, romfs=False)
    content = data['contents'][0]['ncch']
    if not content.get('codeSha256'):
        raise InputError('The update image carries no readable code content')
    if any(not entry['hashMatches'] for entry in content['exefsFiles']):
        raise InputError('The image ExeFS hashes disagree with its own headers')
    generated = root / 'generated' / VERSION
    code, header = generated / 'code.bin', generated / 'exheader.bin'
    layout = exheader.layout(header.read_bytes())
    if code.stat().st_size != layout['pageAlignedCodeBytes']:
        raise InputError('The extracted code size disagrees with the ExHeader page extent')
    text = exheader.segment(layout, 'text')
    if text['initializedBytes'] <= 0 or exheader.segment(layout, 'data')['initializedBytes'] <= 0:
        raise InputError('The ExHeader declares an empty code segment')
    return {'cia': Path(cia).resolve(), 'ciaSha256': data['sha256'],
            'code': code, 'codeSha256': content['codeSha256'], 'codeBytes': code.stat().st_size,
            'exheader': header, 'exheaderSha256': content['exheaderSha256'], 'layout': layout}


def acquire(root, image=None, private=None):
    """Materialize (optional), locate and extract the measured original image."""
    Path(root, 'generated').mkdir(exist_ok=True)
    if private:
        materialize(Path(root).resolve(), Path(private).resolve())
    cia = locate(Path(root).resolve(), image)
    intake = Path(root) / 'work' / 'intake'
    intake.mkdir(parents=True, exist_ok=True)
    return extract(Path(root).resolve(), cia, intake)
