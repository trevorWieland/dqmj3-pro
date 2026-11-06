import hashlib
import importlib.metadata
import json
import platform
import subprocess
import sys
import urllib.request
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    import capstone
    import unicorn

    wheels = []
    for path in sorted((ROOT / 'tools/wheels').glob('*.whl')):
        name, version = path.name.split('-')[:2]
        with urllib.request.urlopen(f'https://pypi.org/pypi/{name}/{version}/json') as response:
            metadata = json.load(response)
        entry = next(x for x in metadata['urls'] if x['filename'] == path.name)
        actual = digest(path)
        if entry['digests']['sha256'] != actual:
            raise ValueError('PyPI wheel hash mismatch: ' + path.name)
        wheels.append({'name': name, 'version': version, 'filename': path.name,
                       'sha256': actual, 'url': entry['url']})
    pins = []
    for folder in ['clang-21', 'ctrtool-1.3.0', 'objdiff-3.8.3']:
        for path in sorted((ROOT / 'tools' / folder).glob('*')):
            if path.is_file():
                pins.append({'path': path.relative_to(ROOT).as_posix(),
                             'size': path.stat().st_size, 'sha256': digest(path)})
    runtime_files = []
    for package in ['capstone', 'unicorn', 'Cryptodome']:
        for path in sorted((ROOT / 'tools/python/Lib/site-packages' / package).rglob('*.dll')):
            runtime_files.append({'path': path.relative_to(ROOT).as_posix(),
                                  'size': path.stat().st_size, 'sha256': digest(path)})
    result = {'schemaVersion': 1, 'observedDate': '2026-11-06',
              'python': platform.python_version(), 'pythonExecutableSha256': digest(Path(sys.executable)),
              'wheels': wheels, 'files': pins, 'nativeLibraries': runtime_files,
              'runtimeVersions': {'capstoneMetadata': importlib.metadata.version('capstone'),
                                  'capstoneNative': list(capstone.cs_version()),
                                  'unicornMetadata': importlib.metadata.version('unicorn'),
                                  'unicornNative': list(unicorn.uc_version())},
              'ctrtoolArchive': {'url': 'https://github.com/3DSGuy/Project_CTR/releases/download/ctrtool-v1.3.0/ctrtool-v1.3.0-win_x64.zip',
                                 'sha256': '8031dff3be72d0adb250fae1f969f27627e12a89ebc6dd074a15a75f87ddc949'},
              'objdiffDistribution': {'url': 'https://github.com/encounter/objdiff/releases/download/v3.8.3/objdiff-cli-windows-x86_64.exe',
                                      'sha256': 'dd12dfb5e9e94a7f6c949a37e1815963cf2cffe4c87b4999b7ebc8c15b398a1f'},
              'clangProvenance': {'distribution': 'Android NDK r30, minimal local copy',
                                  'matchingCompilerEstablished': False,
                                  'version': subprocess.check_output([str(ROOT / 'tools/clang-21/clang.exe'), '--version'], text=True).splitlines()[0],
                                  'source': 'https://android.googlesource.com/toolchain/llvm-project/+/9f872551d3c681d06fd303b36f16ed5c274735eb'},
              'compilerProfile': {'originalCompilerFamily': None, 'originalCompilerVersion': None,
                                  'status': 'unidentified; clang is an infrastructure/behavior compiler'}}
    (ROOT / 'tools.lock.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({'lockedWheels': len(wheels), 'lockedToolFiles': len(pins),
                      'runtimeVersions': result['runtimeVersions']}, indent=2))


if __name__ == '__main__':
    main()
