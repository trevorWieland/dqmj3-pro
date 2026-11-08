import ctypes
import importlib.metadata
import json
from pathlib import Path
import sys

import public_sdk062_inputs as inputs


def verify(root):
    manifest = json.loads((root / inputs.MANIFEST / 'runtime-manifest.json').read_bytes())
    bases = {'project': root.resolve(), 'python-base': Path(sys.base_prefix).resolve()}
    result = {}
    for row in manifest['files']:
        base = bases[row['scope']]
        path = (base / row['path']).resolve()
        if (not path.is_relative_to(base) or not path.is_file() or path.stat().st_size != row['bytes']
                or inputs.digest(path) != row['sha256']):
            raise ValueError('SDK runtime/tool/original input changed: ' + row['path'])
        result[str(path)] = row['sha256']
    for path in {Path(sys.executable), Path(sys._base_executable),
                 Path(sys.base_prefix) / 'python313.dll'}:
        result[str(path.resolve())] = inputs.digest(path)
    return result


def windows_images():
    kernel = ctypes.WinDLL('kernel32', use_last_error=True)
    function = kernel.GetModuleFileNameW
    function.argtypes, function.restype = [ctypes.c_void_p, ctypes.c_wchar_p, ctypes.c_uint32], ctypes.c_uint32
    result = []
    for name in ('kernel32', 'kernelbase', 'ntdll', 'api-ms-win-core-synch-l1-2-0.dll'):
        library = ctypes.WinDLL(name, use_last_error=True)
        buffer = ctypes.create_unicode_buffer(32768)
        size = function(library._handle, buffer, len(buffer))
        if not 0 < size < len(buffer):
            raise OSError(ctypes.get_last_error())
        path = Path(buffer.value).resolve()
        result.append(dict(request=name, actualImage=str(path), bytes=path.stat().st_size,
                           sha256=inputs.digest(path)))
    return result


def identity():
    import unicorn
    return dict(python=sys.version, unicornPackageVersion=importlib.metadata.version('unicorn'),
        unicornPythonVersion=unicorn.__version__, unicornNativeVersion=list(unicorn.uc_version()),
        windowsActualImages=windows_images())
