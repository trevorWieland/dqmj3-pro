import hashlib
import importlib.abc
import importlib.util
import sys
from pathlib import Path


class FreshSources(importlib.abc.MetaPathFinder, importlib.abc.Loader):
    def __init__(self, root, output, manifest, guard, actual_root=None):
        self.root, self.output, self.guard = Path(root), Path(output), guard
        self.actual_root = Path(actual_root) if actual_root else self.output / 'code'
        self.rows = {Path(row['logicalPath']).stem: row for row in manifest['support']}
        self.loaded = []
        if any(name in sys.modules or 'toolscripts.' + name in sys.modules for name in self.rows):
            raise ValueError('Selected067 qualification module was cached before fresh imports')

    def find_spec(self, fullname, path=None, target=None):
        key = fullname.removeprefix('toolscripts.')
        if key not in self.rows:
            return None
        return importlib.util.spec_from_loader(fullname, self, origin=str(self.file(key)))

    def file(self, key):
        return self.actual_root / self.rows[key]['snapshot']

    def create_module(self, spec):
        return None

    def exec_module(self, module):
        key = module.__name__.removeprefix('toolscripts.')
        row = self.rows[key]
        path = self.file(key)
        raw = path.read_bytes()
        if (len(raw), hashlib.sha256(raw).hexdigest()) != (row['bytes'], row['sha256']):
            raise ValueError('Fresh067 public helper bytes differ')
        module.__file__ = str(self.root / row['logicalPath'])
        module.__cached__ = None
        exec(compile(raw, str(path), 'exec'), module.__dict__)
        if self.guard.mode != 'original' and key == 'native_wave013_file_owner_reference_image':
            module.ReferenceImage = self.guard.block_original_constructor(module.ReferenceImage)
        self.loaded.append({'module': module.__name__, 'actualSource': str(path), 'rootAnchorOnly': module.__file__,
            'bytes': row['bytes'], 'sha256': row['sha256'], 'bytecodeCacheUsed': False})

    def install(self):
        sys.meta_path.insert(0, self)
