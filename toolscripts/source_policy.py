import hashlib
import io
import json
import re
import tokenize
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
EXTENSIONS = {'.py', '.c', '.cpp', '.cc', '.cxx', '.h', '.hpp', '.java', '.def', '.ld'}
THIRD_PARTY_SEGMENTS = ('third_party', 'upstream')


def third_party(path):
    return any(part in THIRD_PARTY_SEGMENTS for part in path.parts)


def has_c_comment(text):
    token = re.compile(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|//|/\*', re.DOTALL)
    return any(match.group() in ('//', '/*') for match in token.finditer(text))


def validate_source(path):
    text = path.read_text(encoding='utf-8')
    if len(text.splitlines()) > 500:
        raise ValueError('Authored source exceeds 500 physical lines: ' + str(path))
    return hashlib.sha256(path.read_bytes()).hexdigest()


def policy():
    imported = {}
    manifest = ROOT / 'source/squirrel-wave001/upstream-manifest.json'
    if manifest.is_file():
        descriptor = json.loads(manifest.read_text())
        if descriptor.get('importUnmodified') is not True:
            raise ValueError('Third-party source exemption requires an unchanged import')
        base = (manifest.parent / 'upstream').resolve()
        for record in descriptor['files']:
            path = (manifest.parent / record['path']).resolve(strict=True)
            if not path.is_relative_to(base) or hashlib.sha256(path.read_bytes()).hexdigest() != record['sha256']:
                raise ValueError('Third-party source differs from its immutable import')
            imported[path] = record['sha256']
        if set(imported) != {path.resolve() for path in base.rglob('*') if path.is_file()}:
            raise ValueError('Third-party import has missing or unregistered files')
    files = [path for folder in ['toolscripts', 'tests', 'src', 'platform', 'source']
             for path in (ROOT / folder).rglob('*') if path.suffix in EXTENSIONS]
    files.extend(ROOT.glob('*.py'))
    result = {path.relative_to(ROOT).as_posix(): value for path, value in imported.items()}
    result.update({path.relative_to(ROOT).as_posix(): validate_source(path)
                   for path in sorted(files)
                   if path.resolve() not in imported and not third_party(path)})
    return result
