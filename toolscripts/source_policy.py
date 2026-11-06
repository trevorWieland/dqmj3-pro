import hashlib
import io
import re
import tokenize
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
EXTENSIONS = {'.py', '.c', '.cpp', '.cc', '.cxx', '.h', '.hpp', '.java', '.def', '.ld'}


def has_c_comment(text):
    token = re.compile(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|//|/\*', re.DOTALL)
    return any(match.group() in ('//', '/*') for match in token.finditer(text))


def validate_source(path):
    text = path.read_text(encoding='utf-8')
    if len(text.splitlines()) > 500:
        raise ValueError('Authored source exceeds 500 physical lines: ' + str(path))
    if path.suffix == '.py':
        if any(token.type == tokenize.COMMENT for token in tokenize.generate_tokens(io.StringIO(text).readline)):
            raise ValueError('Authored Python comments violate source policy: ' + str(path))
    elif has_c_comment(text):
        raise ValueError('Authored native comments violate source policy: ' + str(path))
    return hashlib.sha256(path.read_bytes()).hexdigest()


def policy():
    files = [path for folder in ['toolscripts', 'tests', 'src', 'platform']
             for path in (ROOT / folder).rglob('*') if path.suffix in EXTENSIONS]
    files.extend(ROOT.glob('*.py'))
    return {path.relative_to(ROOT).as_posix(): validate_source(path) for path in sorted(files)}
