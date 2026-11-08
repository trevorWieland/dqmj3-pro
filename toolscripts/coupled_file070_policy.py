import atexit
import hashlib
import importlib.abc
import importlib.util
import json
import os
from pathlib import Path
import sys

from queue_file067_guard import Guard as Previous


class SearchPaths(list):
    def __init__(self, previous, guard):
        super().__init__(previous)
        self.guard = guard

    def insert(self, index, value):
        path = self.guard.path(value)
        if path in self.guard.virtual_search_roots:
            self.guard.virtual_searches.append(path)
            return
        if self.guard.within(path, self.guard.work) and not self.guard.within(path, self.guard.output):
            self.guard.deny('undeclared-import-search-root', path)
        super().insert(index, value)


class Guard(Previous):
    def __init__(self, root, output, target, anchor, family, original, manifest, journal):
        mappings = {anchor / row['logicalPath']: target / 'code' / row['snapshot'] for row in manifest['support']}
        mappings.update({anchor / row['legacyRequest']: target / 'metadata' / row['snapshot'] for row in manifest['metadataSnapshots'] if 'legacyRequest' in row})
        mappings[target / 'frozen-source-guard.py'] = target / 'metadata/frozen-source-guard.py'
        mappings[target / 'source-oracle.json'] = target / 'metadata' / family / 'source-oracle.json'
        cpu = next(row for row in manifest['support'] if row['module'] == 'source_cpu')
        mappings[target / 'source_cpu.py'] = target / 'code' / cpu['snapshot']
        super().__init__(root, output, 'original' if original else 'source', mappings, manifest)
        self.virtual_search_roots = {self.path(anchor / value) for value in manifest['virtualSearchRoots']}
        self.virtual_searches = []
        self.logical_anchors.update(self.path(anchor / row['logicalPath']) for row in manifest['support'])
        self.logical_anchors.add(self.path(anchor))
        self.additional_forbidden_roots += [self.path(target / 'source' / value) for value in ['work', 'generated']]
        if target != output:
            self.additional_forbidden_roots += [self.path(output / value) for value in ['code', 'source', 'metadata']]
        self.journal = journal
        self.sequence, self.chain = 0, '0' * 64
        self.terminal_written = False
        self.generated_libraries = set()

    def emit(self, value):
        row = {'sequence': self.sequence, 'previousSHA256': self.chain, **value}
        raw = json.dumps(row, sort_keys=True).encode()
        self.chain = hashlib.sha256(raw).hexdigest()
        self.journal.write(raw.decode() + '\n')
        self.journal.flush()
        os.fsync(self.journal.fileno())
        self.sequence += 1

    def deny(self, operation, path):
        self.emit({'event': 'rejected-access', 'operation': operation, 'path': path})
        return super().deny(operation, path)

    def location(self, value, operation):
        if self.terminal_written:
            self.emit({'event': 'after-terminal-access', 'operation': operation, 'path': str(value)})
        if value is not None and not isinstance(value, int):
            path = self.path(value)
            if operation == 'ctypes.dlopen' and self.within(path, self.output) and path not in self.generated_libraries:
                self.deny('undeclared-generated-native-library', path)
            if path in self.mappings:
                target = self.mappings[path]
                self.metadata_requests.append({'operation': operation, 'requested': path, 'snapshot': target})
                return super().location(target, operation)
        return super().location(value, operation)

    def install(self):
        super().install()
        sys.path = SearchPaths(sys.path, self)

    def terminal(self, verify):
        def close():
            try:
                verify()
                self.assert_clean()
                status = 'clean'
            except Exception as error:
                status = 'failed:' + str(error)
            self.emit({'event': 'terminal-after-run', 'status': status, 'audit': self.receipt()})
            self.terminal_written = True
        atexit.register(close)

    def block_original_constructor(self, original):
        guard = self
        class ForbiddenOriginalImage:
            def __init__(self, *args, **kwargs):
                name = original.__module__ + '.' + original.__name__
                guard.emit({'event': 'rejected-original-constructor', 'constructor': name})
                guard.original_instances.append(name)
                raise ValueError('Source-only child attempted original construction')
        return ForbiddenOriginalImage

    def receipt(self):
        return {**super().receipt(), 'virtualImportSearchRoots': self.virtual_searches}


class FreshSources(importlib.abc.MetaPathFinder, importlib.abc.Loader):
    def __init__(self, anchor, target, manifest, guard):
        self.anchor, self.target, self.guard = anchor, target, guard
        self.rows = {row['module']: row for row in manifest['support']}
        self.by_path = {guard.path(anchor / row['logicalPath']): row for row in manifest['support']}
        self.loaded = []
        if any(name in sys.modules or 'toolscripts.' + name in sys.modules for name in self.rows):
            raise ValueError('Coupled070 declared module cached before fresh loader')

    def find_spec(self, fullname, path=None, target=None):
        name = fullname.removeprefix('toolscripts.')
        if name not in self.rows: return None
        return self.spec(fullname, self.rows[name])

    def spec(self, name, row):
        spec = importlib.util.spec_from_loader(name, self, origin=str(self.target / 'code' / row['snapshot']))
        spec.loader_state = row
        return spec

    def create_module(self, spec):
        return None

    def exec_module(self, module):
        row = module.__spec__.loader_state
        path = self.target / 'code' / row['snapshot']
        raw = path.read_bytes()
        if (len(raw), hashlib.sha256(raw).hexdigest()) != (row['bytes'], row['sha256']):
            raise ValueError('Coupled070 fresh helper hash differs')
        module.__file__, module.__cached__ = str(self.anchor / row['logicalPath']), None
        exec(compile(raw, str(path), 'exec'), module.__dict__)
        if self.guard.mode != 'original' and row['module'] == 'native_wave013_file_owner_reference_image':
            module.ReferenceImage = self.guard.block_original_constructor(module.ReferenceImage)
        self.loaded.append({'module': module.__name__, 'actualSource': str(path), 'rootAnchorOnly': module.__file__,
            'bytes': row['bytes'], 'sha256': row['sha256'], 'bytecodeCacheUsed': False})

    def install(self):
        previous = importlib.util.spec_from_file_location
        def declared(name, location=None, *args, **kwargs):
            row = self.by_path.get(self.guard.path(location)) if location is not None else None
            return self.spec(name, row) if row else previous(name, location, *args, **kwargs)
        importlib.util.spec_from_file_location = declared
        sys.meta_path.insert(0, self)
