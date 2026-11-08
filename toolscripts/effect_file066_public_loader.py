import hashlib
import importlib.abc
import importlib.util
import sys
from pathlib import Path


class FreshSources(importlib.abc.MetaPathFinder, importlib.abc.Loader):
    def __init__(self, root, output, manifest, guard):
        self.root, self.output, self.guard = Path(root), Path(output), guard
        self.rows = {Path(row['logicalPath']).stem: row for row in manifest['support']}
        self.loaded = []
        if any(name in sys.modules for name in self.rows):
            raise ValueError('Qualification child already cached a selected tool module')

    def find_spec(self, fullname, path=None, target=None):
        if fullname not in self.rows:
            return None
        return importlib.util.spec_from_loader(fullname, self, origin=str(self.file(fullname)))

    def file(self, name):
        return self.output / 'code' / self.rows[name]['snapshot']

    def create_module(self, spec):
        return None

    def exec_module(self, module):
        row = self.rows[module.__name__]
        path = self.file(module.__name__)
        raw = path.read_bytes()
        if len(raw) != row['bytes'] or hashlib.sha256(raw).hexdigest() != row['sha256']:
            raise ValueError('Selected public tool snapshot changed')
        module.__file__ = str(self.root / row['logicalPath'])
        module.__cached__ = None
        exec(compile(raw, str(path), 'exec'), module.__dict__)
        if self.guard.mode != 'original' and module.__name__ == 'native_wave013_file_owner_reference_image':
            module.ReferenceImage = self.guard.block_original_constructor(module.ReferenceImage)
        self.loaded.append({'module': module.__name__, 'actualSource': str(path), 'publicDestination': row['proposedPublicPath'],
            'rootAnchorOnly': module.__file__, 'bytes': row['bytes'], 'sha256': row['sha256'], 'bytecodeCacheUsed': False})

    def install(self):
        sys.meta_path.insert(0, self)
