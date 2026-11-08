import hashlib
import importlib.abc
import importlib.util
from pathlib import Path
import sys


class FreshSources(importlib.abc.MetaPathFinder, importlib.abc.Loader):
    def __init__(self, root, output, manifest, guard):
        self.root, self.output, self.guard = root, output, guard
        self.rows = {Path(r['logicalPath']).stem: r for r in manifest['support']}
        self.loaded = []
        if any(name in sys.modules for name in self.rows):
            raise ValueError('Shader017 selected helper was cached before fresh import')

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
        raw = self.file(module.__name__).read_bytes()
        if (len(raw), hashlib.sha256(raw).hexdigest()) != (row['bytes'], row['sha256']):
            raise ValueError('Shader017 fresh helper snapshot differs')
        module.__file__, module.__cached__ = str(self.root / row['logicalPath']), None
        exec(compile(raw, str(self.file(module.__name__)), 'exec'), module.__dict__)
        if module.__name__ == 'native_wave014_oracle':
            module.original_image = lambda: self.guard.deny('original-image-constructor', module.__name__)
        if module.__name__ == 'shader17_oracle_components':
            original_machine = module.Machine

            def machine(platform, original=False):
                if original:
                    self.guard.deny('original-CPU-execution', 'shader17_oracle_components.Machine')
                return original_machine(platform, original)

            module.Machine = machine
        self.loaded.append({'module': module.__name__, 'bytes': row['bytes'], 'sha256': row['sha256'], 'bytecodeCacheUsed': False})

    def install(self):
        sys.meta_path.insert(0, self)
