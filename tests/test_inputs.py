import hashlib
import importlib.util
import json
import lzma
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location('inputs_module', ROOT / 'toolscripts/inputs.py')
INPUTS = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(INPUTS)


def sha(data):
    return hashlib.sha256(data).hexdigest()


class LocateTests(unittest.TestCase):
    def setUp(self):
        directory = tempfile.TemporaryDirectory(dir=ROOT / 'work')
        self.addCleanup(directory.cleanup)
        self.root = Path(directory.name)
        self.image = self.root / 'their_own.cia'
        self.image.write_bytes(b'not the measured image')
        (self.root / 'project.json').write_text(json.dumps({
            'inputs': {'base': 'inputs/base.cia', 'update': 'inputs/update.cia'},
            'baseCiaSha256': '0' * 64,
            'updateCiaSha256': '1' * 64,
        }), encoding='utf-8')

    def test_a_different_image_is_refused_before_it_is_used(self):
        with self.assertRaisesRegex(INPUTS.InputError, 'not the measured update image'):
            INPUTS.locate(self.root, self.image)

    def test_the_measured_image_is_accepted(self):
        expected = sha(self.image.read_bytes())
        (self.root / 'project.json').write_text(json.dumps({
            'inputs': {'base': 'inputs/base.cia', 'update': 'inputs/update.cia'},
            'baseCiaSha256': '0' * 64, 'updateCiaSha256': expected}), encoding='utf-8')
        self.assertEqual(INPUTS.locate(self.root, self.image), self.image)

    def test_a_missing_image_names_the_argument(self):
        with self.assertRaisesRegex(INPUTS.InputError, '--image'):
            INPUTS.locate(self.root, self.root / 'absent.cia')

    def test_paths_may_not_leave_the_repository(self):
        self.assertEqual(INPUTS.contained(self.root, 'inputs/x.cia'), self.root / 'inputs/x.cia')
        for value in ('../escape.cia', 'inputs/../../escape.cia', str(self.image)):
            with self.assertRaises(INPUTS.InputError):
                INPUTS.contained(self.root, value)


class MaterializeTests(unittest.TestCase):
    def setUp(self):
        directory = tempfile.TemporaryDirectory(dir=ROOT / 'work')
        self.addCleanup(directory.cleanup)
        self.root = Path(directory.name)
        self.private = self.root / 'private'
        self.private.mkdir()
        self.update = b'measured update content' * 64
        self.base = b'measured base content' * 32
        rows = []
        for name, data, target in (('update.part', self.update, 'DQMJ3P_Update.cia'),
                                   ('base.part', self.base, 'DQMJ3P.cia')):
            path = self.private / name
            path.write_bytes(lzma.compress(data))
            rows.append({'path': target, 'compression': 'xz', 'sha256': sha(data), 'bytes': len(data),
                         'parts': [{'path': name, 'bytes': path.stat().st_size, 'sha256': sha(path.read_bytes())}]})
        (self.private / 'inputs-manifest.json').write_text(
            json.dumps({'schemaVersion': 1, 'files': rows}), encoding='utf-8')
        (self.root / 'project.json').write_text(json.dumps({
            'inputs': {'base': 'inputs/DQMJ3P.cia', 'update': 'inputs/DQMJ3P_Update.cia'},
            'baseCiaSha256': sha(self.base), 'updateCiaSha256': sha(self.update)}), encoding='utf-8')

    def test_parts_are_decompressed_and_checked(self):
        rows = INPUTS.materialize(self.root, self.private)
        self.assertEqual(len(rows), 2)
        self.assertEqual((self.root / 'inputs/DQMJ3P_Update.cia').read_bytes(), self.update)
        self.assertEqual((self.root / 'inputs/DQMJ3P.cia').read_bytes(), self.base)

    def test_a_changed_part_is_refused(self):
        manifest = json.loads((self.private / 'inputs-manifest.json').read_text(encoding='utf-8'))
        manifest['files'][0]['parts'][0]['sha256'] = '2' * 64
        (self.private / 'inputs-manifest.json').write_text(json.dumps(manifest), encoding='utf-8')
        with self.assertRaisesRegex(INPUTS.InputError, 'identity mismatch'):
            INPUTS.materialize(self.root, self.private)

    def test_the_manifest_must_name_the_two_measured_inputs(self):
        manifest = json.loads((self.private / 'inputs-manifest.json').read_text(encoding='utf-8'))
        manifest['files'] = manifest['files'][:1]
        (self.private / 'inputs-manifest.json').write_text(json.dumps(manifest), encoding='utf-8')
        with self.assertRaisesRegex(INPUTS.InputError, 'exactly the two measured'):
            INPUTS.materialize(self.root, self.private)


if __name__ == '__main__':
    unittest.main()
