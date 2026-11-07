import importlib.util
import json
from pathlib import Path
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location('compile_sources_include_tests', ROOT / 'toolscripts/compile_sources.py')
BUILD = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(BUILD)
SCRATCH = ROOT / 'work/source-compile-ci/include-tests'
SCRATCH.mkdir(parents=True, exist_ok=True)


class IncludeDirectoryTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory(dir=SCRATCH)
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name).resolve()
        self.source = self.root / 'src/native/wave001'
        self.first = self.root / 'src/native/first'
        self.second = self.root / 'src/native/second'
        for path in [self.source, self.first, self.second, self.root / 'config']:
            path.mkdir(parents=True)
        (self.source / 'unit.c').write_text('#include "types.h"\nWord function(void) { return 1; }\n')
        (self.first / 'types.h').write_text('#include "width.h"\n')
        (self.first / 'width.h').write_text('typedef unsigned int Word;\n')
        (self.second / 'types.h').write_text('typedef unsigned int Word;\n')
        self.unit = dict(source='src/native/wave001/unit.c',
                         headers=['src/native/first/types.h', 'src/native/first/width.h'],
                         role='candidate-native', includeDirectories=['src/native/first', 'src/native/second'])
        self.config = dict(schemaVersion=1, scope=dict(root='src/native', waves=['wave001']),
                           units=[self.unit], excludedSources=[])

    def load(self):
        (self.root / BUILD.CONFIG).write_text(json.dumps(self.config))
        return BUILD.read_config(self.root)

    def test_ordered_search_and_transitive_local_headers(self):
        self.assertEqual(self.load()['units'][0]['headers'], self.unit['headers'])

    def test_reordering_changes_required_header_identity(self):
        self.unit['includeDirectories'].reverse()
        with self.assertRaisesRegex(RuntimeError, 'Explicit header dependency'):
            self.load()

    def test_local_header_precedes_declared_search_directories(self):
        (self.source / 'types.h').write_text('typedef unsigned int Word;\n')
        self.unit['headers'] = ['src/native/wave001/types.h']
        self.assertEqual(self.load()['units'][0]['headers'], self.unit['headers'])

    def test_undeclared_transitive_header_is_rejected(self):
        self.unit['headers'] = ['src/native/first/types.h']
        with self.assertRaisesRegex(RuntimeError, 'Explicit header dependency'):
            self.load()

    def test_nonlist_and_duplicate_directories_are_rejected(self):
        for value in ['src/native/first', [1], ['src/native/first', 'src/native/first']]:
            with self.subTest(value=value), self.assertRaises((RuntimeError, ValueError)):
                self.unit['includeDirectories'] = value
                self.load()

    def test_missing_and_non_source_directories_are_rejected(self):
        (self.root / 'work/headers').mkdir(parents=True)
        for value in ['src/native/missing', 'work/headers', '../outside']:
            with self.subTest(value=value), self.assertRaises((RuntimeError, ValueError)):
                self.unit['includeDirectories'] = [value]
                self.load()

    def test_undeclared_component_directory_is_rejected(self):
        folder = self.root / 'source/squirrel-wave002'
        folder.mkdir(parents=True)
        self.unit['includeDirectories'] = ['source/squirrel-wave002']
        with self.assertRaisesRegex(RuntimeError, 'reviewed source trees'):
            self.load()

    def test_header_cannot_escape_reviewed_source_trees(self):
        (self.first / 'types.h').write_text('#include "../../../secret.h"\n')
        with self.assertRaisesRegex(RuntimeError, 'dependency escapes'):
            self.load()

    def test_missing_header_is_not_taken_from_machine_environment(self):
        self.unit['includeDirectories'] = []
        with self.assertRaisesRegex(RuntimeError, 'Missing literal source header'):
            self.load()


if __name__ == '__main__':
    unittest.main()
