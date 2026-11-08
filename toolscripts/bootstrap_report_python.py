import argparse
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import subprocess
import sys
import zipfile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import bootstrap_report_tools as downloads

ROOT = Path(__file__).resolve().parents[1]


def members(archive):
    result, folded = {}, set()
    for row in archive.infolist():
        if not row.filename.startswith('tools/') or row.is_dir():
            continue
        name = row.filename.removeprefix('tools/')
        path = PurePosixPath(name)
        if (not name or path.is_absolute() or '..' in path.parts or '\\' in name or ':' in name
                or name.casefold() in folded or row.external_attr >> 16 & 0o170000 == 0o120000):
            raise ValueError('Unsafe or duplicate frozen Python archive member')
        folded.add(name.casefold())
        result[name] = row
    if not {'python.exe', 'python313.dll', 'Lib/venv/__init__.py'} <= result.keys():
        raise ValueError('Frozen Python runtime closure missing')
    return result


def verify_files(folder, archive, selected):
    for name, row in selected.items():
        path = (folder / name).resolve()
        if not path.is_relative_to(folder.resolve()) or path.is_symlink() or not path.is_file():
            raise ValueError('Frozen Python runtime file missing or escaped')
        raw = archive.read(row)
        if path.stat().st_size != len(raw) or downloads.compiler.digest(path) != hashlib.sha256(raw).hexdigest():
            raise ValueError('Frozen Python runtime file differs: ' + name)


def bootstrap(root, verify_only=False):
    root = root.resolve()
    if os.name != 'nt':
        raise ValueError('Frozen CI report Python requires Windows')
    config = json.loads((root / 'config/report-python-runtime.json').read_bytes())
    lock = json.loads((root / 'tools.lock.json').read_bytes())
    if (config['schemaVersion'] != 1 or config['pythonVersion'] != lock['python']
            or config['pythonVersion'] != '3.13.5' or config['platform'] != 'windows-x64'
            or config['archive']['url'] != 'https://api.nuget.org/v3-flatcontainer/python/3.13.5/python.3.13.5.nupkg'
            or config['runtimeRoot'] != 'tools/ci-python-3.13.5'):
        raise ValueError('Frozen report runtime identity differs')
    cache = downloads.compiler.contained(root, config['cachePath'])
    downloads.fetch(config['archive']['url'], cache, config['archive']['sha256'], verify_only)
    if cache.stat().st_size != config['archive']['bytes'] or downloads.compiler.digest(cache, 'sha512') != config['archive']['sha512']:
        raise ValueError('Frozen report runtime archive size/hash differs')
    destination = downloads.compiler.contained(root, config['runtimeRoot'])
    with zipfile.ZipFile(cache) as archive:
        selected = members(archive)
        if len(selected) != config['toolsMemberCount']:
            raise ValueError('Frozen runtime member count differs')
        if not destination.exists():
            if verify_only:
                raise ValueError('Frozen report Python runtime absent')
            stage = root / 'work/report-python-runtime-stage-v1'
            stage.mkdir(parents=True, exist_ok=False)
            for name, row in selected.items():
                path = stage / name
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_bytes(archive.read(row))
            verify_files(stage, archive, selected)
            if (not stage.resolve().is_relative_to(root.resolve() / 'work')
                    or not destination.resolve().is_relative_to(root.resolve() / 'tools') or destination.exists()):
                raise ValueError('Runtime publication escaped project-local roots')
            destination.parent.mkdir(parents=True, exist_ok=True)
            stage.rename(destination)
        verify_files(destination, archive, selected)
    python = destination / 'python.exe'
    for row in [config['executable'], config['pythonDll']]:
        path = destination / row['path']
        if path.stat().st_size != row['bytes'] or downloads.compiler.digest(path) != row['sha256']:
            raise ValueError('Frozen Python executable/DLL identity differs')
    probe = subprocess.run([str(python), '-I', '-S', '-B', '-c',
        'import json,platform,struct,ensurepip,venv;print(json.dumps(dict(version=platform.python_version(),pointerBytes=struct.calcsize("P"))))'],
        check=True, capture_output=True, text=True, encoding='utf-8')
    identity = json.loads(probe.stdout)
    if identity != dict(version='3.13.5', pointerBytes=8):
        raise ValueError('Project-local Python version/architecture differs')
    return dict(status='frozen-project-local-report-python-verified', runtime=config['runtimeRoot'],
                archiveSha256=config['archive']['sha256'], verifiedRuntimeFiles=len(selected),
                identity=identity, globalInstallationChanged=False, originalInputsRead=False)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--verify', action='store_true')
    args = parser.parse_args()
    print(json.dumps(bootstrap(ROOT, args.verify)))
