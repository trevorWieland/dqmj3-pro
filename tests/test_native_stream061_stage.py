import hashlib
import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
import native_stream061_stage as stage


class Stream061StageTests(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory()
        self.addCleanup(self.temporary.cleanup)
        self.root = Path(self.temporary.name)
        self.public = self.root / 'evidence/lanes/native-stream061/stage-v1'
        self.public.mkdir(parents=True)
        source = self.root / 'src/native/wave061/asset061.c'
        source.parent.mkdir(parents=True)
        source.write_bytes(b'int candidate;\n')
        self.patcher = patch.object(stage, 'ROOT', self.root)
        self.patcher.start()
        self.addCleanup(self.patcher.stop)
        origin = self.public / 'origin.json'
        origin.write_bytes(b'{}\n')
        record = stage.pin(source)
        self.manifest = dict(publicFrozenOrigin=stage.pin(origin), files=[dict(
            publicInput=record, privateFrozen=dict(record), byteIdentical=True,
            stagedRelativePath=f'source/part{index}.c') for index in range(22)])
        self.save()

    def save(self):
        (self.public / 'stage-inputs.json').write_text(json.dumps(self.manifest), encoding='utf-8')

    def test_public_contract_reads_only_small_declared_files(self):
        lane, records = stage.contract('061')
        self.assertEqual(len(records), 22)
        self.assertFalse(lane.exists())

    def test_destination_traversal_rejected(self):
        self.manifest['files'][0]['stagedRelativePath'] = '../../outside.c'
        self.save()
        with self.assertRaises(ValueError): stage.contract('061')

    def test_duplicate_destination_rejected(self):
        self.manifest['files'][1]['stagedRelativePath'] = self.manifest['files'][0]['stagedRelativePath']
        self.save()
        with self.assertRaises(ValueError): stage.contract('061')

    def test_changed_public_source_rejected(self):
        source = self.root / self.manifest['files'][0]['publicInput']['path']
        source.write_bytes(b'int changed;\n')
        with self.assertRaises(ValueError): stage.contract('061')

    def test_existing_private_lane_is_never_overwritten(self):
        lane = self.root / 'work/native-stream061'
        lane.mkdir(parents=True)
        sentinel = lane / 'ready.json'
        sentinel.write_bytes(b'preserve frozen receipt')
        expected = hashlib.sha256(sentinel.read_bytes()).hexdigest()
        base = self.root / 'work/new-bootstrap'
        with patch.object(stage, 'contracts', return_value=[(lane, [])]), patch.object(stage, 'BASE', base):
            with self.assertRaises(ValueError): stage.prepare()
        self.assertFalse(base.exists())
        self.assertEqual(hashlib.sha256(sentinel.read_bytes()).hexdigest(), expected)


if __name__ == '__main__':
    unittest.main()
