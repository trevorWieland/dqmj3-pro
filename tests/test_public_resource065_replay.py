import hashlib
import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
import public_resource065_replay as replay


class PublicResourceInputTests(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory()
        self.addCleanup(self.temporary.cleanup)
        self.root = Path(self.temporary.name).resolve()
        self.source = self.root / 'src/native/wave065-resource/resource.c'
        self.source.parent.mkdir(parents=True)
        self.source.write_bytes(b'int resource(void) { return 1; }\n')
        raw = self.source.read_bytes()
        self.row = dict(path=self.source.relative_to(self.root).as_posix(), bytes=len(raw), sha256=hashlib.sha256(raw).hexdigest())
        self.value = dict(schemaVersion=1, files=[self.row], resourceSourcePaths=[self.row['path']])
        self.manifest = self.root / 'inputs.json'
        self.addCleanup(patch.stopall)
        patch.object(replay, 'ROOT', self.root).start()
        patch.object(replay, 'MANIFEST', self.manifest).start()

    def check(self):
        self.manifest.write_text(json.dumps(self.value))
        return replay.contract()

    def test_changed_production_source_is_rejected(self):
        self.check()
        self.source.write_bytes(b'int resource(void) { return 0; }\n')
        with self.assertRaisesRegex(ValueError, 'input changed'):
            replay.contract()

    def test_undeclared_production_unit_is_rejected(self):
        self.source.with_name('hidden.c').write_bytes(b'void hidden(void) {}')
        with self.assertRaisesRegex(ValueError, 'source membership'):
            self.check()

    def test_duplicate_input_does_not_satisfy_unique_closure(self):
        self.value['files'].append(dict(self.row))
        with self.assertRaisesRegex(ValueError, 'unique membership'):
            self.check()

    def test_shared_and_successor_folder_inputs_have_stable_string_order(self):
        header = self.root / 'src/native/wave065/shared.h'
        header.parent.mkdir()
        header.write_bytes(b'typedef unsigned Word;\n')
        raw = header.read_bytes()
        row = dict(path=header.relative_to(self.root).as_posix(), bytes=len(raw), sha256=hashlib.sha256(raw).hexdigest())
        self.value['files'].append(row)
        self.value['files'].sort(key=lambda item: item['path'])
        self.assertEqual(self.check(), self.value)

    def test_escaped_input_is_rejected_before_reading(self):
        self.row['path'] = '../outside.c'
        with self.assertRaisesRegex(ValueError, 'input changed'):
            self.check()

    def test_caught_audit_attempt_cannot_be_a_passing_receipt(self):
        with self.assertRaisesRegex(ValueError, 'Blocked historical-work'):
            replay.unchanged(None, None, None, ['historical-work-input'])


if __name__ == '__main__':
    unittest.main()
