from pathlib import Path
import sys
import tempfile
import unittest


TOOLS = Path(__file__).resolve().parents[1] / 'toolscripts'
sys.path.insert(0, str(TOOLS))
import bootstrap_file068_inputs as inputs
from bootstrap_file068_guard import Guard, SearchPaths


class PublicBootstrapTransportTests(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory()
        self.root = Path(self.temporary.name).resolve()
        self.output = self.root / 'work/current'
        self.output.mkdir(parents=True)
        self.manifest = {'runtimeFiles': [], 'support': [], 'productionAndFixtures': [],
            'referenceMetadata': [], 'originalInputs': [], 'frozenReady': {'path': 'ready.json'},
            'metadataSnapshots': [], 'virtualSearchRoots': ['work/logical-source']}

    def tearDown(self):
        self.temporary.cleanup()

    def guard(self, mappings=None, anchor=None):
        return Guard(self.root, self.output, 'source', mappings or {}, self.manifest, anchor or self.root)

    def test_relative_paths_cannot_escape(self):
        for value in ['../outside', '/absolute', 'C:/absolute', 'bad\\member']:
            with self.subTest(value=value), self.assertRaises(ValueError):
                inputs.relative(value)

    def test_enriched_identity_pin_is_preserved(self):
        path = self.output / 'input.c'
        path.write_text('ordinary source')
        row = {**inputs.identity(path), 'role': 'qualification'}
        self.assertEqual(inputs.checked(path, row), path)
        self.assertEqual(row['role'], 'qualification')

    def test_mutated_source_bytes_are_rejected(self):
        path = self.output / 'input.c'
        path.write_text('old')
        row = inputs.identity(path)
        path.write_text('new')
        with self.assertRaises(ValueError):
            inputs.checked(path, row)

    def test_caught_historical_operations_leave_persistent_attempts(self):
        guard = self.guard()
        for operation in ['open', 'stat-request', 'lstat-request', 'os.listdir', 'os.scandir', 'resolve-request']:
            with self.assertRaises(ValueError):
                guard.location(self.root / 'work/old/absent', operation)
        self.assertEqual(len(guard.rejected), 6)
        with self.assertRaises(ValueError):
            guard.assert_clean()

    def test_output_prefix_does_not_admit_siblings(self):
        guard = self.guard()
        with self.assertRaises(ValueError):
            guard.location(self.root / 'work/current-other/file', 'open')

    def test_declared_virtual_import_path_never_searches_a_directory(self):
        guard = self.guard()
        logical = self.root / 'work/logical-source'
        paths = SearchPaths(['existing'], guard, guard.virtual)
        paths.insert(0, str(logical))
        self.assertEqual(paths, ['existing'])
        self.assertFalse(logical.exists())
        self.assertEqual(guard.virtual_searches[0]['physicalDirectorySearched'], False)

    def test_undeclared_historical_import_path_is_terminal(self):
        guard = self.guard()
        paths = SearchPaths([], guard, guard.virtual)
        with self.assertRaises(ValueError):
            paths.insert(0, str(self.root / 'work/unlisted'))
        with self.assertRaises(ValueError):
            guard.assert_clean()

    def test_exact_metadata_mapping_does_not_allow_other_history(self):
        legacy = self.root / 'work/old/selected.json'
        selected = self.output / 'metadata/selected.json'
        guard = self.guard({legacy: selected})
        self.assertEqual(guard.location(legacy, 'open'), guard.path(selected))
        with self.assertRaises(ValueError):
            guard.location(legacy.parent / 'other.json', 'open')

    def test_generated_original_image_is_blocked(self):
        with self.assertRaises(ValueError):
            self.guard().location(self.root / 'generated/update-content0/code.bin', 'open')

    def test_tool_directory_is_not_a_native_library_allowlist(self):
        with self.assertRaises(ValueError):
            self.guard().location(self.root / 'tools/clang-21/unapproved.dll', 'ctypes.dlopen')

    def test_only_fresh_component_library_name_is_allowed(self):
        guard = self.guard()
        guard.location(self.output / 'build/windows/effect_resource.dll', 'ctypes.dlopen')
        with self.assertRaises(ValueError):
            guard.location(self.output / 'build/windows/other.dll', 'ctypes.dlopen')

    def test_caught_original_constructor_still_fails_cleanliness(self):
        guard = self.guard()
        class Original:
            pass
        blocked = guard.block_original_constructor(Original)
        with self.assertRaises(ValueError):
            blocked()
        with self.assertRaises(ValueError):
            guard.assert_clean()

    def test_tiny_logical_work_tree_is_not_readable_output(self):
        anchor = self.output / 'tiny/source'
        guard = self.guard(anchor=anchor)
        with self.assertRaises(ValueError):
            guard.location(anchor / 'work/history.json', 'stat-request')


if __name__ == '__main__':
    unittest.main()
