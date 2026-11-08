import importlib.util
import json
from pathlib import Path
import sys
import tempfile
import unittest


TOOLS = Path(__file__).resolve().parents[1] / 'toolscripts'
sys.path.insert(0, str(TOOLS))
import queue_file067_inputs as inputs
from queue_file067_guard import Guard


class PublicQueueTransportTests(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory()
        self.root = Path(self.temporary.name).resolve()
        self.output = self.root / 'work/current'
        self.output.mkdir(parents=True)
        self.manifest = {'runtimeFiles': [], 'support': [], 'productionAndFixtures': [], 'referenceMetadata': [],
            'frozenReady': {'path': 'ready.json'}, 'originalInputs': []}

    def tearDown(self):
        self.temporary.cleanup()

    def guard(self, mode='source', mappings=None):
        return Guard(self.root, self.output, mode, mappings or {}, self.manifest)

    def test_relative_input_cannot_escape(self):
        for value in ['../outside', '/absolute', 'C:/absolute', 'bad\\member']:
            with self.subTest(value=value), self.assertRaises(ValueError):
                inputs.relative(value)

    def test_content_check_accepts_enriched_pin_without_losing_metadata(self):
        path = self.output / 'file.txt'
        path.write_text('source bytes')
        row = {**inputs.identity(path), 'role': 'fixture', 'path': 'file.txt'}
        self.assertEqual(inputs.checked(path, row), path)
        self.assertEqual(row['role'], 'fixture')

    def test_changed_content_is_rejected(self):
        path = self.output / 'file.txt'
        path.write_text('first')
        row = inputs.identity(path)
        path.write_text('other')
        with self.assertRaisesRegex(ValueError, 'identity differs'):
            inputs.checked(path, row)

    def test_every_historical_operation_stays_in_rejection_ledger(self):
        guard = self.guard()
        for operation in ['open', 'stat-request', 'lstat-request', 'os.listdir', 'os.scandir', 'resolve-request']:
            with self.assertRaises(ValueError):
                guard.location(self.root / 'work/old/absent.bin', operation)
        self.assertEqual(len(guard.rejected), 6)
        with self.assertRaises(ValueError):
            guard.assert_clean()

    def test_current_output_prefix_is_not_a_sibling_allowlist(self):
        guard = self.guard()
        self.assertEqual(guard.location(self.output / 'owned.bin', 'open'), self.output / 'owned.bin')
        with self.assertRaises(ValueError):
            guard.location(self.root / 'work/current-other/old.bin', 'open')

    def test_generated_original_reads_are_blocked_in_source(self):
        guard = self.guard()
        with self.assertRaises(ValueError):
            guard.location(self.root / 'generated/update-content0/code.bin', 'open')
        self.assertEqual(len(guard.rejected), 1)

    def test_exact_metadata_mapping_is_declared_without_history_read(self):
        legacy = self.root / 'work/frozen/metadata.json'
        selected = self.output / 'metadata/selected.json'
        guard = self.guard(mappings={legacy: selected})
        self.assertEqual(guard.location(legacy, 'open'), guard.path(selected))
        self.assertEqual(len(guard.metadata_requests), 1)
        self.assertEqual(guard.rejected, [])

    def test_tool_directory_does_not_allow_arbitrary_native_library(self):
        guard = self.guard()
        with self.assertRaises(ValueError):
            guard.location(self.root / 'tools/clang-21/unapproved.dll', 'ctypes.dlopen')

    def test_only_fresh_component_library_name_is_allowed_in_output(self):
        guard = self.guard()
        guard.location(self.output / 'build/windows/effect_resource.dll', 'ctypes.dlopen')
        with self.assertRaises(ValueError):
            guard.location(self.output / 'build/windows/unknown.dll', 'ctypes.dlopen')

    def test_original_constructor_rejection_persists_if_caught(self):
        guard = self.guard()
        class Original:
            pass
        blocked = guard.block_original_constructor(Original)
        with self.assertRaises(ValueError):
            blocked()
        self.assertEqual(len(guard.original_instances), 1)
        with self.assertRaises(ValueError):
            guard.assert_clean()

    def test_source_copy_cannot_read_its_historical_work(self):
        guard = self.guard()
        guard.additional_forbidden_roots = [guard.path(self.output / 'tiny/source/work')]
        with self.assertRaises(ValueError):
            guard.location(self.output / 'tiny/source/work/absent.bin', 'open')


if __name__ == '__main__':
    unittest.main()
