import os
from pathlib import Path

from effect_file066_public_guard import Guard as Predecessor


class Guard(Predecessor):
    def __init__(self, root, output, mode, mappings, manifest):
        super().__init__(root, output, mode, mappings, manifest)
        self.runtime_libraries = {self.path(Path(root) / row['path']) for row in manifest['runtimeFiles']
            if row.get('scope') == 'project' and row['path'].lower().endswith(('.dll', '.pyd'))}
        self.logical_anchors = {self.path(Path(root) / row['logicalPath']) for row in manifest['support']}
        self.logical_anchors.add(self.root)
        self.anchor_resolutions = []
        self.additional_forbidden_roots = []

    def location(self, value, operation):
        if value is not None and not isinstance(value, int):
            lexical = self.path(value)
            if any(self.within(lexical, folder) for folder in self.additional_forbidden_roots):
                self.deny(operation + '-copied-historical-input', lexical)
        result = super().location(value, operation)
        if isinstance(result, int) or result is None:
            return result
        path = self.path(result)
        if operation == 'ctypes.dlopen':
            generated = self.within(path, self.output) and os.path.basename(path).lower() == 'effect_resource.dll'
            if path not in self.runtime_libraries and not generated:
                self.deny('undeclared-absolute-native-library', path)
        if not self.within(path, self.root) and not any(self.within(path, folder) for folder in self.runtime_roots):
            self.deny(operation + '-undeclared-external-input', path)
        return result

    def install(self):
        super().install()
        previous = Path.resolve

        def resolve(path, *args, **kwargs):
            lexical = self.path(path)
            if lexical in self.logical_anchors:
                self.anchor_resolutions.append({'logicalAnchor': lexical, 'actualFileRead': False})
                return Path(lexical)
            mapped = self.location(path, 'resolve-request')
            return previous(Path(mapped), *args, **kwargs)

        Path.resolve = resolve

    def receipt(self):
        return {**super().receipt(), 'logicalAnchorResolutions': self.anchor_resolutions}
