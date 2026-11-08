import builtins
import ctypes
import io
import os
from pathlib import Path
import sys


class Guard:
    def __init__(self, root, output, manifest):
        self.root, self.output = self.path(root), self.path(output)
        self.manifest = manifest
        self.rejected, self.requests, self.reads, self.library_requests = [], [], set(), []
        self.provider_active = False
        self.original = self.path(root / manifest['privateAssetContainer']['path'])
        self.allowed = {self.path(root / r['path']) for r in manifest['privateObservations'] + manifest['runtimeFiles']}
        self.mapping = {self.path(root / r['logicalPath']): self.path(output / 'source' / r['logicalPath']) for r in manifest['productionAndFixtures']}
        self.mapping.update({self.path(root / r['logicalPath']): self.path(output / 'code' / r['snapshot']) for r in manifest['support']})
        self.anchors = {self.root, *[self.path(root / r['logicalPath']) for r in manifest['support']]}
        self.immutable = set(self.mapping.values()) | self.allowed
        self.runtime = [self.path(Path(sys.base_prefix)), self.path(root / 'tools/python'), self.path(root / 'tools/clang-21')]
        self.directories = {self.root}
        for name in self.allowed | self.immutable:
            self.directories.update(self.path(p) for p in Path(name).parents)
        self.old_open, self.old_io, self.old_stat, self.old_lstat = builtins.open, io.open, os.stat, os.lstat
        self.original_open_requests = 0

    @staticmethod
    def path(value):
        return os.path.normcase(os.path.abspath(os.fsdecode(value)))

    @staticmethod
    def within(path, parent):
        return path == parent or path.startswith(parent + os.sep)

    def deny(self, operation, value):
        self.rejected.append({'operation': operation, 'path': str(value)})
        raise ValueError('Shader017 forbidden input or construction: ' + operation)

    def location(self, value, operation):
        if value is None or isinstance(value, int):
            return value
        path = self.path(value)
        self.requests.append({'operation': operation, 'path': path})
        if path == self.original:
            if not self.provider_active or operation not in ['open', 'open-request', 'io-open-request']:
                self.deny(operation + '-unrestricted-original-image', path)
            self.original_open_requests += operation == 'open'
            return value
        if path in self.mapping:
            return self.mapping[path]
        if self.within(path, self.output):
            return value
        if path in self.allowed:
            return value
        if any(self.within(path, p) for p in self.runtime):
            return value
        if operation in ['stat', 'lstat', 'resolve'] and path in self.directories:
            return value
        self.deny(operation + '-undeclared-input', path)

    def install(self):
        def opened(file, *args, **kwargs):
            return self.old_open(self.location(file, 'open-request'), *args, **kwargs)

        def io_opened(file, *args, **kwargs):
            return self.old_io(self.location(file, 'io-open-request'), *args, **kwargs)

        def stat(path, *args, **kwargs):
            return self.old_stat(self.location(path, 'stat'), *args, **kwargs)

        def lstat(path, *args, **kwargs):
            return self.old_lstat(self.location(path, 'lstat'), *args, **kwargs)

        previous_resolve = Path.resolve

        def resolve(path, *args, **kwargs):
            lexical = self.path(path)
            if lexical in self.anchors:
                self.requests.append({'operation': 'resolve-anchor', 'path': lexical})
                return Path(lexical)
            return previous_resolve(Path(self.location(path, 'resolve')), *args, **kwargs)

        builtins.open, io.open, os.stat, os.lstat, Path.resolve = opened, io_opened, stat, lstat, resolve
        previous_library = ctypes.cdll.LoadLibrary

        def library(name):
            optional = ['libwinpthread-1.dll', 'libgcc_s_seh-1.dll', 'libgcc_s_dw2-1.dll']
            if str(name).lower() in optional:
                candidate = Path(self.root) / 'tools/python/Lib/site-packages/unicorn/lib' / str(name)
                if not candidate.is_file():
                    raise OSError('Optional package-local Unicorn library is absent')
                return previous_library(str(candidate))
            return previous_library(name)

        ctypes.cdll.LoadLibrary = library

        def audit(event, args):
            if event not in ['open', 'os.listdir', 'os.scandir', 'ctypes.dlopen'] or not args or not isinstance(args[0], (str, bytes)):
                return
            name = os.fsdecode(args[0])
            if event == 'ctypes.dlopen':
                systems = ['kernel32', 'kernel32.dll', 'kernelbase', 'kernelbase.dll', 'ntdll', 'ntdll.dll', 'api-ms-win-core-synch-l1-2-0.dll']
                if os.path.basename(name) == name:
                    if name.lower() not in systems:
                        self.deny('undeclared-named-library', name)
                else:
                    path = self.path(name)
                    runtime = path in self.allowed and path.endswith(('.dll', '.pyd'))
                    generated = self.within(path, self.output) and Path(path).name == 'shader-owner17.dll'
                    if not runtime and not generated:
                        self.deny('undeclared-absolute-library', path)
                self.library_requests.append(name)
                return
            mapped = self.location(name, event)
            path = self.path(mapped)
            if event == 'open':
                mode, flags = args[1:3]
                if path in self.immutable and ((isinstance(mode, str) and any(c in mode for c in 'wax+')) or flags & (os.O_WRONLY | os.O_RDWR | os.O_CREAT | os.O_TRUNC | os.O_APPEND)):
                    self.deny('immutable-input-write', path)
                self.reads.add(path)

        sys.addaudithook(audit)

    def assert_clean(self):
        if self.rejected:
            raise ValueError('Shader017 persistent caught-attempt rejection')

    def receipt(self):
        counts = {}
        for row in self.requests:
            counts[row['operation']] = counts.get(row['operation'], 0) + 1
        return {'forbiddenAttempts': self.rejected, 'accessCounts': counts, 'readPaths': sorted(self.reads),
                'nativeLibraries': self.library_requests, 'boundedProviderContainerOpens': self.original_open_requests}
