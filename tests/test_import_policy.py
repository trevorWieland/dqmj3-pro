import hashlib
import json
import sys
import tempfile
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import source_policy


class ImmutableImportPolicy(unittest.TestCase):
    def setUp(self):
        self.directory = tempfile.TemporaryDirectory(dir=ROOT / 'work')
        self.addCleanup(self.directory.cleanup)
        self.root = Path(self.directory.name)
        self.previous = source_policy.ROOT
        self.addCleanup(setattr, source_policy, 'ROOT', self.previous)
        source_policy.ROOT = self.root
        self.base = self.root / 'source/squirrel-wave001'
        self.imported = self.base / 'upstream/old.cpp'
        self.imported.parent.mkdir(parents=True)
        self.imported.write_text('// unchanged historical source\n' * 501)
        manifest = {'importUnmodified': True, 'files': [{'path': 'upstream/old.cpp',
            'sha256': hashlib.sha256(self.imported.read_bytes()).hexdigest()}]}
        (self.base / 'upstream-manifest.json').write_text(json.dumps(manifest))

    def test_unchanged_import_is_hashed_without_reformatting(self):
        result = source_policy.policy()
        self.assertEqual(result['source/squirrel-wave001/upstream/old.cpp'],
                         hashlib.sha256(self.imported.read_bytes()).hexdigest())

    def test_changed_import_fails_closed(self):
        self.imported.write_text('int changed;\n')
        with self.assertRaises(ValueError):
            source_policy.policy()

    def test_unregistered_import_file_fails_closed(self):
        (self.imported.parent / 'unexpected.txt').write_text('unregistered')
        with self.assertRaises(ValueError):
            source_policy.policy()


if __name__ == '__main__':
    unittest.main()
