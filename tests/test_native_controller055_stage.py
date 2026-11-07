import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
import native_controller055_stage as stage


class Controller055StageTests(unittest.TestCase):
    def setUp(self):
        temporary = tempfile.TemporaryDirectory()
        self.addCleanup(temporary.cleanup)
        self.root = Path(temporary.name)
        self.public = self.root / 'evidence/lanes/native-state055/controller-v5-public'
        self.lane = self.root / 'work/native-state055'
        self.public.mkdir(parents=True)
        source = self.root / 'src/native/wave055/controller-v5/candidate.c'
        source.parent.mkdir(parents=True)
        source.write_bytes(b'int candidate;\n')
        patcher = patch.multiple(stage, ROOT=self.root, PUBLIC=self.public, LANE=self.lane,
                                 STAGE=self.lane / 'controller-v5', BASE=self.root / 'work/bootstrap')
        patcher.start()
        self.addCleanup(patcher.stop)
        origin = self.public / 'origin.json'
        record = stage.pin(source)
        origin.write_text(json.dumps(dict(files=[record])), encoding='utf-8')
        self.manifest = dict(publicFrozenOrigin=stage.pin(origin), files=[dict(
            publicInput=record, privateFrozen=dict(record), byteIdentical=True,
            stagedRelativePath=f'controller-v5/source/part{index}.c') for index in range(62)])
        self.save()

    def save(self):
        (self.public / 'stage-inputs.json').write_text(json.dumps(self.manifest), encoding='utf-8')

    def test_public_contract_is_read_only(self):
        self.assertEqual(len(stage.contract()), 62)
        self.assertFalse(self.lane.exists())

    def test_destination_traversal_rejected(self):
        self.manifest['files'][0]['stagedRelativePath'] = '../../outside.c'
        self.save()
        with self.assertRaises(ValueError): stage.contract()

    def test_duplicate_destination_rejected(self):
        self.manifest['files'][1]['stagedRelativePath'] = self.manifest['files'][0]['stagedRelativePath']
        self.save()
        with self.assertRaises(ValueError): stage.contract()

    def test_changed_public_source_rejected(self):
        (self.root / self.manifest['files'][0]['publicInput']['path']).write_bytes(b'changed')
        with self.assertRaises(ValueError): stage.contract()

    def test_unfrozen_input_cannot_be_added_by_relabeling(self):
        self.manifest['files'][0]['privateFrozen']['path'] = 'work/unfrozen.c'
        self.save()
        with self.assertRaises(ValueError): stage.contract()

    def test_existing_private_lane_is_preserved(self):
        self.lane.mkdir(parents=True)
        sentinel = self.lane / 'ready.json'
        sentinel.write_bytes(b'frozen')
        with self.assertRaises(ValueError): stage.prepare()
        self.assertEqual(sentinel.read_bytes(), b'frozen')
        self.assertFalse(stage.BASE.exists())

    def test_prepare_copies_only_declared_source_bytes(self):
        stage.prepare()
        records = stage.contract()
        stage.verify(records)
        self.assertEqual(len(list(self.lane.rglob('*.c'))), 62)
        self.assertFalse((self.lane / 'tools').exists())

    def test_staged_mutation_is_rejected(self):
        stage.prepare()
        records = stage.contract()
        records[0][1].write_bytes(b'changed')
        with self.assertRaises(ValueError): stage.verify(records)


if __name__ == '__main__':
    unittest.main()
