"""Fetch, verify and identify the pinned armcc 4.1 build 1454 distribution.

armcc is proprietary ARM software. It is not committed: only this module, the
archive URL, its SHA256 and the digests of the extracted members live in the
repository. The archive is the public one hosted by the decomp.me compilers
project; an operator is expected to use it only where entitled to use ARM
Compiler. The build pins exactly one build (4.1 b1454), the best-evidenced
original compiler for this image.

The check is the same shape as the pinned Clang bootstrap: verify what is on
disk byte for byte, and only download when something is missing and network use
is allowed. A different armcc build, a modified header, or an extra file in the
header tree all fail verification rather than silently changing the compiler
identity behind a measurement.
"""

import argparse
import hashlib
import json
import os
import platform
import sys
import time
import urllib.error
import urllib.request
import zipfile
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
LOCK = 'tools.lock.json'
CACHE = 'tools/downloads/armcc.zip'
RETRIES = 3


def digest(path):
    with Path(path).open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def distribution(root):
    lock = json.loads((Path(root) / LOCK).read_text(encoding='utf-8'))
    dist = lock.get('armccDistribution')
    if not dist or not dist.get('url') or not dist.get('sha256'):
        raise RuntimeError('tools.lock.json has no pinned armcc distribution')
    return dist


def manifest(include_root):
    """A stable digest of the header tree: relative path and file digest each."""
    lines = []
    for path in sorted(item for item in Path(include_root).rglob('*') if item.is_file()):
        lines.append(path.relative_to(include_root).as_posix() + ' ' + digest(path))
    return '\n'.join(lines) + '\n'


def inspect(root, dist):
    """Compare the installed compiler with its pin; return what is missing."""
    target = Path(root) / dist['targetRoot']
    executable = target / dist['members']['bin/armcc.exe']['path']
    include_root = target / dist['members']['include']['path']
    problems = []
    if not executable.is_file():
        problems.append('missing ' + executable.relative_to(root).as_posix())
    else:
        row = dist['members']['bin/armcc.exe']
        if executable.stat().st_size != row['bytes'] or digest(executable) != row['sha256']:
            problems.append('armcc executable differs from the pinned build')
    if not include_root.is_dir():
        problems.append('missing ' + include_root.relative_to(root).as_posix())
    else:
        rows = sorted(item for item in include_root.rglob('*') if item.is_file())
        row = dist['members']['include']
        if len(rows) != row['files']:
            problems.append('armcc header count differs from the pinned build')
        elif sum(item.stat().st_size for item in rows) != row['bytes']:
            problems.append('armcc header bytes differ from the pinned build')
        elif hashlib.sha256(manifest(include_root).encode('utf-8')).hexdigest() != row['manifestSha256']:
            problems.append('armcc header tree differs from the pinned build')
    return problems


def verify(root, dist, require=True):
    problems = inspect(root, dist)
    if problems and require:
        raise RuntimeError('; '.join(problems) + ' (run python setup_tools.py)')
    return {'status': 'failed' if problems else 'verified', 'problems': problems,
            'targetRoot': dist['targetRoot'],
            'executable': dist['targetRoot'] + '/' + dist['members']['bin/armcc.exe']['path'],
            'executableSha256': dist['members']['bin/armcc.exe']['sha256'],
            'headerFiles': dist['members']['include']['files'],
            'headerManifestSha256': dist['members']['include']['manifestSha256'],
            'license': dist['license']}


def fetch(url, path, expected_bytes, expected_sha256):
    path = Path(path)
    path.parent.mkdir(parents=True, exist_ok=True)
    if path.exists() and path.stat().st_size == expected_bytes and digest(path) == expected_sha256:
        return False
    partial = path.with_suffix(path.suffix + '.download')
    for attempt in range(RETRIES):
        try:
            request = urllib.request.Request(url, headers={'Cache-Control': 'no-cache',
                                                           'User-Agent': 'dqmj3-pro-armcc-bootstrap'})
            with urllib.request.urlopen(request, timeout=120) as response, partial.open('wb') as output:
                while block := response.read(1024 * 1024):
                    output.write(block)
            break
        except (urllib.error.URLError, TimeoutError, ConnectionError):
            partial.unlink(missing_ok=True)
            if attempt == RETRIES - 1:
                raise
            time.sleep(2 ** (attempt + 1))
    if partial.stat().st_size != expected_bytes or digest(partial) != expected_sha256:
        partial.unlink(missing_ok=True)
        raise RuntimeError('armcc archive size or hash mismatch')
    partial.replace(path)
    return True


def extract(archive, root, dist):
    """Materialize the pinned members only, refusing any escaped archive path."""
    target = Path(root) / dist['targetRoot']
    prefix = dist['archivePrefix']
    wanted = {'bin/armcc.exe'}
    include_prefix = 'include/'
    written = 0
    with zipfile.ZipFile(archive) as source:
        names = source.namelist()
        for name in names:
            if not name.startswith(prefix) or name.endswith('/'):
                continue
            relative = name[len(prefix):]
            if relative != 'bin/armcc.exe' and not relative.startswith(include_prefix):
                continue
            if relative.startswith('/') or '..' in Path(relative).parts:
                raise RuntimeError('armcc archive member escapes its root: ' + name)
            destination = target / relative
            destination.parent.mkdir(parents=True, exist_ok=True)
            destination.write_bytes(source.read(name))
            written += 1
    if written != dist['members']['include']['files'] + 1:
        raise RuntimeError('armcc archive did not contain the pinned member set')
    return written


def ensure(root, allow_download=True, report=False):
    """Make the pinned compiler present and verified, downloading if allowed."""
    dist = distribution(root)
    problems = inspect(root, dist)
    downloaded = False
    if problems:
        if not allow_download:
            raise RuntimeError('; '.join(problems) + ' and downloading is disabled')
        if os.name != 'nt' or platform.machine().lower() not in ('amd64', 'x86_64'):
            raise RuntimeError('The pinned armcc bootstrap requires a Windows x64 host')
        archive = Path(root) / CACHE
        downloaded = fetch(dist['url'], archive, dist['bytes'], dist['sha256'])
        extract(archive, root, dist)
    result = verify(root, dist)
    result.update({'archiveSha256': dist['sha256'], 'archiveBytes': dist['bytes'],
                   'downloadedThisRun': downloaded, 'provenance': dist['provenance']})
    if report:
        print(json.dumps(result, indent=2))
    return result


def main():
    parser = argparse.ArgumentParser(description='Materialize and verify the pinned armcc compiler.')
    parser.add_argument('--verify', action='store_true', help='never download')
    args = parser.parse_args()
    try:
        result = ensure(ROOT, allow_download=not args.verify, report=True)
    except (OSError, RuntimeError, ValueError, KeyError, zipfile.BadZipFile) as error:
        print(json.dumps({'status': 'failed', 'error': str(error)}))
        return 1
    return 0 if result['status'] == 'verified' else 1


if __name__ == '__main__':
    sys.exit(main())
