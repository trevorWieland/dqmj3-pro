import argparse
import hashlib
import json
import platform
import shutil
import subprocess
import sys
import urllib.request
import venv
import zipfile
from pathlib import Path


ROOT = Path(__file__).resolve().parent


def digest(path):
    with path.open('rb') as f:
        return hashlib.file_digest(f, 'sha256').hexdigest()


def download(url, path, expected):
    path.parent.mkdir(parents=True, exist_ok=True)
    if not path.exists() or digest(path) != expected:
        temporary = path.with_suffix(path.suffix + '.partial')
        urllib.request.urlretrieve(url, temporary)
        if digest(temporary) != expected:
            raise ValueError('Download hash mismatch: ' + str(path))
        temporary.replace(path)


def research_prefixes(lock):
    return (lock['formalAuditRuntime']['ghidraRoot'],)


def host_prefixes():
    return ('tools/android-r30-minimal/', 'tools/app-shell-jdk25/',
            'tools/app-shell-sdk36/', 'tools/android-platform-tools-37.0.1/')


def grouped(lock):
    research = research_prefixes(lock)
    host = host_prefixes()
    own, host_files, study = [], [], []
    for item in lock['files']:
        path = item['path']
        if any(path.startswith(prefix) for prefix in research):
            study.append(item)
        elif any(path.startswith(prefix) for prefix in host):
            host_files.append(item)
        else:
            own.append(item)
    return own, host_files, study


def verify(lock, research=False, host=False):
    failures = []
    own, host_files, study = grouped(lock)
    checked = [*own, *lock['nativeLibraries']]
    if host:
        checked.extend(host_files)
    if research:
        checked.extend(study)
    for item in checked:
        path = ROOT / item['path']
        if not path.is_file() or digest(path) != item['sha256']:
            failures.append(item['path'])
    for item in lock['wheels']:
        path = ROOT / 'tools/wheels' / item['filename']
        if not path.is_file() or digest(path) != item['sha256']:
            failures.append(path.relative_to(ROOT).as_posix())
    if platform.python_version() != lock['python']:
        failures.append('Python version: expected ' + lock['python'])
    if digest(Path(sys.executable)) != lock['pythonExecutableSha256']:
        failures.append('Python executable hash differs from pinned runtime')
    print(json.dumps({'status': 'failed' if failures else 'passed', 'failures': failures,
                      'checked': len(checked), 'hostChecked': host, 'researchChecked': research,
                      'skipped': {'host targets (--host)': len(host_files),
                                  'research (--research)': len(study)}}, indent=2))
    return not failures


def verify_own(lock):
    failures = []
    own = grouped(lock)[0]
    for item in [*own, *lock['nativeLibraries']]:
        path = ROOT / item['path']
        if not path.is_file() or digest(path) != item['sha256']:
            failures.append(item['path'])
    for item in lock['wheels']:
        path = ROOT / 'tools/wheels' / item['filename']
        if not path.is_file() or digest(path) != item['sha256']:
            failures.append(path.relative_to(ROOT).as_posix())
    return failures


def install(lock, clang_source, android_source=None, ghidra_source=None):
    if platform.python_version() != lock['python']:
        raise ValueError('Use pinned Python ' + lock['python'])
    py = ROOT / 'tools/python/Scripts/python.exe'
    if not py.exists():
        venv.create(ROOT / 'tools/python', with_pip=True)
    for item in lock['wheels']:
        download(item['url'], ROOT / 'tools/wheels' / item['filename'], item['sha256'])
    subprocess.run([str(py), '-m', 'pip', 'install', '--no-index', '--find-links',
                    str(ROOT / 'tools/wheels'), *[f"{x['name']}=={x['version']}" for x in lock['wheels']]],
                   check=True)
    for item in lock['files']:
        if 'source' not in item:
            continue
        source = (ROOT / item['source']).resolve()
        destination = (ROOT / item['path']).resolve()
        if not source.is_relative_to(ROOT) or not destination.is_relative_to(ROOT / 'tools'):
            raise ValueError('Pinned tool materialization escaped the project')
        if not source.is_file() or digest(source) != item['sha256']:
            raise ValueError('Pinned tool materialization source differs')
        if destination.exists() and digest(destination) != item['sha256']:
            raise ValueError('Existing materialized tool differs')
        if not destination.exists():
            destination.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(source, destination)
    archive = lock['ctrtoolArchive']
    path = ROOT / 'tools/ctrtool-v1.3.0-win_x64.zip'
    download(archive['url'], path, archive['sha256'])
    dest = ROOT / 'tools/ctrtool-1.3.0'
    dest.mkdir(parents=True, exist_ok=True)
    with zipfile.ZipFile(path) as z:
        member = next(x for x in z.namelist() if Path(x).name == 'ctrtool.exe')
        (dest / 'ctrtool.exe').write_bytes(z.read(member))
    objdiff = lock['objdiffDistribution']
    download(objdiff['url'], ROOT / 'tools/objdiff-3.8.3/objdiff-cli.exe', objdiff['sha256'])
    if clang_source:
        for item in lock['files']:
            if item['path'].startswith('tools/clang-21/'):
                source = clang_source / Path(item['path']).name
                if not source.is_file() or digest(source) != item['sha256']:
                    raise ValueError('Clang source file missing or hash differs: ' + str(source))
                destination = ROOT / item['path']
                destination.parent.mkdir(parents=True, exist_ok=True)
                if source.resolve() != destination.resolve():
                    shutil.copyfile(source, destination)
    if android_source:
        prefix = Path('tools/android-r30-minimal')
        for item in lock['files']:
            relative = Path(item['path'])
            if relative.is_relative_to(prefix):
                source = android_source / relative.relative_to(prefix)
                destination = ROOT / relative
                if not source.is_file() or digest(source) != item['sha256']:
                    raise ValueError('Android source input missing or stale: ' + str(source))
                destination.parent.mkdir(parents=True, exist_ok=True)
                if source.resolve() != destination.resolve():
                    shutil.copyfile(source, destination)
    if ghidra_source:
        prefix = Path(lock['formalAuditRuntime']['ghidraRoot'])
        for item in lock['files']:
            relative = Path(item['path'])
            if relative.is_relative_to(prefix):
                source = ghidra_source / relative.relative_to(prefix)
                destination = ROOT / relative
                if not source.is_file() or digest(source) != item['sha256']:
                    raise ValueError('Ghidra source input missing or stale: ' + str(source))
                destination.parent.mkdir(parents=True, exist_ok=True)
                if source.resolve() != destination.resolve():
                    shutil.copyfile(source, destination)
    own, later, study = grouped(lock)
    missing = verify_own(lock)
    print(json.dumps({'status': 'failed' if missing else 'passed',
                      'stage': 'public tools, wheels, ctrtool and objdiff',
                      'failures': missing,
                      'next': 'run toolscripts/bootstrap_public_compiler.py for clang, '
                              'then setup_tools.py --verify to check the whole build toolchain',
                      'deferred': {'android and app shell': len(later),
                                   'research (ghidra, pass --research)': len(study)}},
                     indent=2))
    return not missing


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--verify', action='store_true')
    parser.add_argument('--research', action='store_true',
                        help='also verify the research toolchain (Ghidra), which no build needs')
    parser.add_argument('--host', action='store_true',
                        help='also verify the Android host-target toolchain, which the game build does not need')
    parser.add_argument('--clang-source', type=Path)
    parser.add_argument('--android-source', type=Path)
    parser.add_argument('--ghidra-source', type=Path)
    args = parser.parse_args()
    lock = json.loads((ROOT / 'tools.lock.json').read_text(encoding='utf-8'))
    if args.verify:
        ok = verify(lock, research=args.research, host=args.host)
    else:
        ok = install(lock, args.clang_source, args.android_source, args.ghidra_source)
    raise SystemExit(0 if ok else 1)


if __name__ == '__main__':
    main()
