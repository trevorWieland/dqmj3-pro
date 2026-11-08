import os
from pathlib import Path
import sys

from queue_file067_guard import Guard as Predecessor


class SearchPaths(list):
    def __init__(self, previous, guard, virtual):
        super().__init__(previous)
        self.guard, self.virtual = guard, virtual

    def insert(self, index, value):
        path = self.guard.path(value)
        if path in self.virtual:
            self.guard.virtual_searches.append({'logicalSearchRoot': path, 'physicalDirectorySearched': False})
            return
        if self.guard.within(path, self.guard.work) and not self.guard.within(path, self.guard.output):
            self.guard.deny('undeclared-import-search-root', path)
        super().insert(index, value)


class Guard(Predecessor):
    def __init__(self, root, output, mode, mappings, manifest, anchor):
        super().__init__(root, output, mode, mappings, manifest)
        self.anchor = Path(anchor)
        self.virtual_searches = []
        self.virtual = {self.path(self.anchor / value) for value in manifest['virtualSearchRoots']}
        self.logical_anchors.update(self.path(self.anchor / row['logicalPath']) for row in manifest['support'])
        self.logical_anchors.add(self.path(self.anchor))
        self.additional_forbidden_roots = [self.path(self.anchor / name) for name in ['work', 'generated']] if anchor != root else []
        self.immutable.update(self.path(output / 'metadata' / row['snapshot']) for row in manifest['metadataSnapshots'])
        self.immutable.add(self.path(output / 'original-v2/report.json'))

    def install(self):
        super().install()
        sys.path = SearchPaths(sys.path, self, self.virtual)

    def receipt(self):
        return {**super().receipt(), 'virtualImportSearchRoots': self.virtual_searches}
