import builtins
import ctypes
import io
import os
import sys
from pathlib import Path


class Guard:
    def __init__(self, root, output, mode, mappings, manifest=None):
        self.root = self.path(root)
        self.output = self.path(output)
        self.work = self.path(Path(root) / 'work')
        self.generated = self.path(Path(root) / 'generated')
        self.mode = mode
        self.mappings = {self.path(old): self.path(new) for old, new in mappings.items()}
        self.rejected = []
        self.reads = set()
        self.metadata_requests = []
        self.original_instances = []
        self.libraries = set()
        self.optional_runtime_requests = []
        self.snapshot_targets = set(self.mappings.values())
        self.immutable = set(self.snapshot_targets)
        self.allowed = set()
        if manifest is not None:
            self.immutable.update(self.path(Path(output) / 'source' / row['logicalPath']) for row in manifest['productionAndFixtures'])
            self.immutable.update(self.path(Path(output) / 'code' / row['snapshot']) for row in manifest['support'])
            self.immutable.update(self.path(Path(output) / 'adapter' / row['name']) for row in manifest.get('adapterFiles', []))
            self.immutable.add(self.path(Path(output) / 'manifest.json'))
            for category in ('productionAndFixtures', 'referenceMetadata'):
                self.allowed.update(self.path(Path(root) / row['path']) for row in manifest[category])
            self.allowed.add(self.path(Path(root) / manifest['frozenReady']['path']))
            if mode == 'original':
                self.allowed.update(self.path(Path(root) / row['path']) for row in manifest['originalInputs'])
        self.runtime_roots = [self.path(Path(root) / 'tools/python'), self.path(Path(root) / 'tools/clang-21'),
            self.path(sys.base_prefix), self.path(Path(os.environ.get('SystemRoot', 'C:/Windows')) / 'System32')]

    @staticmethod
    def path(value):
        return os.path.normcase(os.path.abspath(os.fsdecode(value)))

    @staticmethod
    def within(path, folder):
        return path == folder or path.startswith(folder + os.sep)

    def deny(self, operation, path):
        self.rejected.append({'operation': operation, 'path': path})
        raise ValueError('Forbidden historical/original access: ' + operation + ' ' + path)

    def location(self, value, operation):
        if isinstance(value, int) or value is None:
            return value
        path = self.path(value)
        if path in self.mappings:
            target = self.mappings[path]
            self.metadata_requests.append({'operation': operation, 'requested': path, 'snapshot': target})
            return target
        if self.within(path, self.work) and not self.within(path, self.output):
            self.deny(operation, path)
        if self.mode != 'original' and self.within(path, self.generated):
            self.deny(operation, path)
        if operation in ('stat-request', 'lstat-request') and self.within(self.output, path):
            return value
        if (self.within(path, self.root) and not self.within(path, self.output) and path not in self.allowed
                and not any(self.within(path, folder) for folder in self.runtime_roots)
                and operation not in ('stat-request', 'lstat-request')):
            self.deny(operation + '-undeclared-project-input', path)
        return value

    def install(self):
        old_open, old_io = builtins.open, io.open
        old_stat, old_lstat = os.stat, os.lstat

        def opened(file, *args, **kwargs):
            return old_open(self.location(file, 'open-request'), *args, **kwargs)

        def io_opened(file, *args, **kwargs):
            return old_io(self.location(file, 'io-open-request'), *args, **kwargs)

        def stat(path, *args, **kwargs):
            return old_stat(self.location(path, 'stat-request'), *args, **kwargs)

        def lstat(path, *args, **kwargs):
            return old_lstat(self.location(path, 'lstat-request'), *args, **kwargs)

        builtins.open, io.open, os.stat, os.lstat = opened, io_opened, stat, lstat
        old_library = ctypes.cdll.LoadLibrary

        def load_library(name):
            optional = {'libwinpthread-1.dll', 'libgcc_s_seh-1.dll', 'libgcc_s_dw2-1.dll'}
            if os.path.basename(str(name)) == str(name) and str(name).lower() in optional:
                path = Path(self.root) / 'tools/python/Lib/site-packages/unicorn/lib' / str(name)
                exists = path.is_file()
                self.optional_runtime_requests.append({'name': str(name), 'candidate': str(path), 'present': exists,
                    'globalLibrarySearchAllowed': False})
                if not exists:
                    raise OSError('Optional Unicorn support DLL absent from the selected package')
                return old_library(str(path))
            return old_library(name)

        ctypes.cdll.LoadLibrary = load_library

        def audit(event, args):
            if event not in ('open', 'os.listdir', 'os.scandir', 'ctypes.dlopen') or not args or not isinstance(args[0], (str, bytes)):
                return
            value = os.fsdecode(args[0])
            if event == 'ctypes.dlopen' and os.path.basename(value) == value:
                if value.lower() not in {'kernel32', 'kernel32.dll', 'kernelbase', 'kernelbase.dll',
                        'ntdll', 'ntdll.dll', 'api-ms-win-core-synch-l1-2-0.dll'}:
                    self.deny('undeclared-named-library', value)
                self.libraries.add(value)
                return
            path = self.path(value)
            self.location(path, event)
            if event == 'open' and path in self.immutable:
                mode, flags = args[1:3]
                if (isinstance(mode, str) and any(letter in mode for letter in 'wax+')) or flags & (os.O_WRONLY | os.O_RDWR | os.O_CREAT | os.O_TRUNC | os.O_APPEND):
                    self.deny('immutable-metadata-write', path)
            if event == 'ctypes.dlopen':
                self.libraries.add(path)
            else:
                self.reads.add(path)

        sys.addaudithook(audit)

    def block_original_constructor(self, original):
        guard = self

        class ForbiddenOriginalImage:
            def __init__(self, *args, **kwargs):
                guard.original_instances.append(original.__module__ + '.' + original.__name__)
                raise ValueError('Source-only child attempted to instantiate an original image')

        return ForbiddenOriginalImage

    def assert_clean(self):
        if self.rejected or self.original_instances:
            raise ValueError('Replay attempted a forbidden read/original instance, including a caught attempt')

    def receipt(self):
        return {'readPaths': sorted(self.reads), 'metadataRequests': self.metadata_requests,
            'requestedLibraries': sorted(self.libraries), 'forbiddenAccessAttempts': self.rejected,
            'optionalRuntimeLibraryRequests': self.optional_runtime_requests,
            'originalImageConstructorAttempts': self.original_instances}
