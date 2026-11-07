import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
import native_asset062_stage as stage


class Asset062StageTests(unittest.TestCase):
    def setUp(self):
        temporary = tempfile.TemporaryDirectory()
        self.addCleanup(temporary.cleanup)
        self.root = Path(temporary.name)
        self.public = self.root / 'evidence/lanes/native-asset062/stage-v1'
        self.lane = self.root / 'work/native-asset062'
        self.base = self.root / 'work/bootstrap'
        self.public.mkdir(parents=True)
        for target, name, value in [(stage, 'ROOT', self.root), (stage, 'PUBLIC', self.public),
                (stage, 'LANE', self.lane), (stage, 'BASE', self.base),
                (stage.predecessor, 'ROOT', self.root)]:
            patcher = patch.object(target, name, value)
            patcher.start()
            self.addCleanup(patcher.stop)
        old = self.root / 'evidence/lanes/native-stream061/stage-v1'
        old.mkdir(parents=True)
        origin = old / 'origin.json'
        origin.write_bytes(b'preserved61')
        (old / 'stage-inputs.json').write_text(json.dumps(dict(publicFrozenOrigin=stage.pin(origin))))
        patcher = patch.object(stage.predecessor, 'contracts', side_effect=lambda: [
            (self.root / 'work/native-stream059', []), (self.root / 'work/native-stream061', [])])
        patcher.start()
        self.addCleanup(patcher.stop)
        source = self.root / 'src/native/wave062/records062.c'
        source.parent.mkdir(parents=True)
        source.write_bytes(b'int candidate;\n')
        origin = self.public / 'origin.json'
        origin.write_bytes(b'preserved62')
        record = stage.pin(source)
        self.manifest = dict(publicFrozenOrigin=stage.pin(origin), files=[dict(
            publicInput=record, privateFrozen=dict(record), byteIdentical=True,
            stagedRelativePath=f'source/part{index}.c') for index in range(45)])
        self.save()

    def save(self):
        (self.public / 'stage-inputs.json').write_text(json.dumps(self.manifest), encoding='utf-8')

    def test_public_small_source_roster_and_frozen61_receipt(self):
        groups = stage.contracts()
        self.assertEqual([len(records) for lane, records in groups], [0, 1, 45])
        self.assertFalse(self.lane.exists())
        self.assertEqual(groups[1][1][0][1].name, 'ready.json')

    def test_destination_escape_rejected(self):
        self.manifest['files'][0]['stagedRelativePath'] = '../../outside.c'
        self.save()
        with self.assertRaises(ValueError): stage.contracts()

    def test_duplicate_destination_rejected(self):
        self.manifest['files'][1]['stagedRelativePath'] = self.manifest['files'][0]['stagedRelativePath']
        self.save()
        with self.assertRaises(ValueError): stage.contracts()

    def test_changed_public_source_rejected(self):
        source = self.root / self.manifest['files'][0]['publicInput']['path']
        source.write_bytes(b'changed')
        with self.assertRaises(ValueError): stage.contracts()

    def test_changed_frozen_origin_rejected(self):
        (self.public / 'origin.json').write_bytes(b'changed')
        with self.assertRaises(ValueError): stage.contracts()

    def test_incomplete_roster_rejected(self):
        self.manifest['files'].pop()
        self.save()
        with self.assertRaises(ValueError): stage.contracts()

    def test_existing_private_lane_is_preserved(self):
        self.lane.mkdir(parents=True)
        sentinel = self.lane / 'ready.json'
        sentinel.write_bytes(b'private frozen receipt')
        with self.assertRaises(ValueError): stage.prepare()
        self.assertEqual(sentinel.read_bytes(), b'private frozen receipt')
        self.assertFalse(self.base.exists())

    def test_fresh_stage_retains_source_and_receipt_bytes(self):
        stage.prepare()
        for lane, records in stage.contracts():
            stage.verify(records)
        receipt = self.root / 'work/native-stream061/ready.json'
        self.assertEqual(receipt.read_bytes(), b'preserved61')
        output = json.loads((self.base / 'staged-inputs.json').read_text())
        self.assertEqual(len(output['files']), 46)
        self.assertFalse(output['repositoryToolsOrOriginalInputsCopied'])


if __name__ == '__main__':
    unittest.main()
