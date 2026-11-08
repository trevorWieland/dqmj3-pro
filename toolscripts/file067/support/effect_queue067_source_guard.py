import os
from pathlib import Path
import sys


class SourceGuard067:
    def __init__(self, source_root, output, tools, python_root):
        self.source_root = Path(source_root).absolute()
        self.output = Path(output).absolute()
        self.tools = Path(tools).absolute()
        self.python_root = Path(python_root).absolute()
        self.workspace = self.tools.parent.parent
        self.blocked = []

    def check(self, event, value):
        if not isinstance(value, (str, bytes, os.PathLike)):
            return
        path = Path(os.path.abspath(os.path.normpath(os.fsdecode(value))))
        historical = path.is_relative_to(self.workspace / 'work') and not path.is_relative_to(self.output)
        undeclared = path.is_relative_to(self.source_root / 'work')
        external = not any(path.is_relative_to(root) for root in [self.output, self.tools.parent, self.python_root])
        if historical or undeclared or external:
            self.blocked.append({'event': event, 'path': str(path)})
            raise PermissionError('Source-only queue attempted a historical/undeclared input')

    def install(self):
        def audit(event, args):
            if event in ['open', 'os.listdir', 'os.scandir'] and args:
                self.check(event, args[0])
        sys.addaudithook(audit)
        for name in ['stat', 'lstat']:
            previous = getattr(os, name)
            def checked(path, *args, _previous=previous, _name=name, **kwargs):
                self.check('os.' + _name, path)
                return _previous(path, *args, **kwargs)
            setattr(os, name, checked)

