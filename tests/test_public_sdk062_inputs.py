import json
from pathlib import Path
import shutil
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import public_sdk062_inputs as inputs


class PublicSdkInputsTests(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory(prefix='sdk062-input-tests-', dir=ROOT / 'work')
        self.root = Path(self.temporary.name).resolve()
        self.assertTrue(self.root.is_relative_to((ROOT / 'work').resolve()))
        self.addCleanup(self.temporary.cleanup)
        folder = self.root / inputs.MANIFEST
        folder.mkdir(parents=True)
        self.selected = inputs.load(ROOT)
        for name in ('source-manifest.json', 'support-manifest.json', 'reference-manifest.json'):
            shutil.copyfile(ROOT / inputs.MANIFEST / name, folder / name)
        for category in ('sources', 'support', 'reference'):
            for row in self.selected[category]['files']:
                destination = self.root / row['path']
                destination.parent.mkdir(parents=True, exist_ok=True)
                shutil.copyfile(ROOT / row['path'], destination)

    def change_manifest(self, operation):
        path = self.root / inputs.MANIFEST / 'source-manifest.json'
        value = json.loads(path.read_bytes())
        operation(value)
        path.write_text(json.dumps(value), encoding='utf-8')

    def test_changed_source_bytes_are_rejected(self):
        row = self.selected['sources']['files'][0]
        path = self.root / row['path']
        data = path.read_bytes()
        path.write_bytes(bytes([data[0] ^ 1]) + data[1:])
        with self.assertRaisesRegex(ValueError, 'input changed'):
            inputs.load(self.root)

    def test_qualification_cannot_enter_production(self):
        def forge(value):
            row = next(row for row in value['files'] if row['role'] == 'qualification-fixture')
            row['path'] = 'src/native/wave062-sdk/context/' + Path(row['path']).name
        self.change_manifest(forge)
        with self.assertRaisesRegex(ValueError, 'qualification paths'):
            inputs.load(self.root)

    def test_correct_size_stage_with_wrong_dependency_is_rejected(self):
        def substitute(value):
            value['stages']['context'][0] = value['stages']['startup'][-1]
        self.change_manifest(substitute)
        with self.assertRaisesRegex(ValueError, 'stage source closure'):
            inputs.load(self.root)

    def test_escaping_source_path_is_rejected(self):
        row = dict(self.selected['sources']['files'][0], path='../outside.c')
        with self.assertRaisesRegex(ValueError, 'escaped'):
            inputs.checked(self.root, row)

    def test_tiny_snapshot_retains_each_exact_source_byte(self):
        output = self.root / 'work/tiny-snapshot'
        inputs.materialize(self.root, output)
        for row in self.selected['sources']['files']:
            destination = output / row['lane'] / 'source' / Path(row['path']).name
            self.assertEqual(destination.read_bytes(), (self.root / row['path']).read_bytes())
        self.assertFalse((output / 'generated').exists())
        self.assertFalse((output / 'tools').exists())
        with self.assertRaisesRegex(ValueError, 'new owned'):
            inputs.materialize(self.root, output)

    def test_mutant_source_takes_precedence_over_public_baseline(self):
        selected = inputs.selection(self.root, self.selected)
        name = next(iter(selected))
        output = self.root / 'work/control'
        output.mkdir(parents=True)
        mutant = output / name
        mutant.write_text('void deliberately_wrong_source(void) {}\n', encoding='utf-8')
        merged = inputs.merged_overrides(selected, {name: mutant}, output)
        self.assertEqual(merged[name], mutant.resolve())
        self.assertEqual({k: v for k, v in merged.items() if k != name},
                         {k: v for k, v in selected.items() if k != name})

    def test_control_cannot_resolve_to_other_work(self):
        selected = inputs.selection(self.root, self.selected)
        name = next(iter(selected))
        with self.assertRaisesRegex(ValueError, 'control source escaped'):
            inputs.merged_overrides(selected, {name: selected[name]}, self.root / 'work/control')

    def test_header_remapping_preserves_flags_and_outputs(self):
        first, second = self.root / 'old-one', self.root / 'old-two'
        headers = self.root / 'public/include'
        argv = ['clang', '--target=x86_64-pc-windows-msvc', '-mno-incremental-linker-compatible',
                '-I', first, '-I', second, '-c', 'mutant.c', '-o', 'raw.o']
        self.assertEqual(inputs.remap_includes(argv, [first, second], headers),
            argv[:3] + ['-I', headers, '-c', 'mutant.c', '-o', 'raw.o'])
        with self.assertRaisesRegex(ValueError, 'undeclared include'):
            inputs.remap_includes(argv, [first], headers)


if __name__ == '__main__':
    unittest.main()
