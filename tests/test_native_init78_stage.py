import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
import native_init78_stage as stage


class Initialization78StageTests(unittest.TestCase):
    def setUp(self):
        temporary = tempfile.TemporaryDirectory()
        self.addCleanup(temporary.cleanup)
        self.root = Path(temporary.name).resolve()
        self.lane = self.root / 'work/native-state055'
        self.public = self.root / 'evidence/initialization'
        self.public.mkdir(parents=True)
        self.base = self.root / 'work/init78-public'
        source = self.root / 'toolscripts/candidate.c'
        source.parent.mkdir()
        source.write_bytes(b'int candidate;\n')
        self.source = source
        for module, key, value in [(stage, 'ROOT', self.root), (stage, 'LANE', self.lane),
                (stage, 'BASE', self.base), (stage, 'PUBLIC', self.public), (stage.common, 'ROOT', self.root)]:
            patcher = patch.object(module, key, value)
            patcher.start()
            self.addCleanup(patcher.stop)
        record = stage.common.pin(source)
        rows, frozen = [], []
        for index in range(56):
            before = dict(record, path='work/native-state055/source/part' + str(index) + '.c')
            rows.append(dict(privateFrozen=before, publicInput=record, stagedPath=before['path'], byteIdentical=True))
            frozen.append(before)
        origins = []
        for index, files in enumerate([frozen, []]):
            path = self.public / ('origin' + str(index) + '.json')
            path.write_text(json.dumps(dict(files=files)))
            public_pin = stage.common.pin(path)
            origins.append(dict(publicInput=public_pin,
                privateFrozen=dict(public_pin, path='work/native-state055/ready' + str(index) + '.json')))
        self.value = dict(files=rows, frozenOrigins=origins)
        self.save()

    def save(self):
        (self.public / 'stage-inputs.json').write_text(json.dumps(self.value))

    def test_fresh_minimal_stage_preserves_all56_inputs(self):
        stage.prepare()
        stage.common.verify(stage.contract())
        result = json.loads((self.base / 'staged-inputs.json').read_bytes())
        self.assertEqual(result['declaredInputs'], 56)
        self.assertFalse(result['repositoryToolsOrOriginalArchivesCopied'])

    def test_existing_private_lane_is_never_overwritten(self):
        self.lane.mkdir(parents=True)
        sentinel = self.lane / 'ready.json'
        sentinel.write_bytes(b'preserve')
        with self.assertRaises(ValueError):
            stage.prepare()
        self.assertEqual(sentinel.read_bytes(), b'preserve')
        self.assertFalse(self.base.exists())

    def test_staged_escape_rejected(self):
        self.value['files'][0]['stagedPath'] = '../outside.c'
        self.save()
        with self.assertRaises(ValueError):
            stage.contract()

    def test_duplicate_destination_rejected(self):
        self.value['files'][1]['stagedPath'] = self.value['files'][0]['stagedPath']
        self.save()
        with self.assertRaises(ValueError):
            stage.contract()

    def test_rehashed_unfrozen_source_rejected(self):
        self.value['files'][0]['privateFrozen']['sha256'] = '0' * 64
        self.save()
        with self.assertRaises(ValueError):
            stage.contract()

    def test_changed_public_source_rejected(self):
        self.source.write_bytes(b'changed')
        with self.assertRaises(ValueError):
            stage.contract()

    def test_changed_origin_rejected(self):
        (self.public / 'origin0.json').write_bytes(b'changed')
        with self.assertRaises(ValueError):
            stage.contract()

    def test_incomplete_roster_rejected(self):
        self.value['files'].pop()
        self.save()
        with self.assertRaises(ValueError):
            stage.contract()

    def test_staging_path_must_preserve_frozen_topology(self):
        self.value['files'][0]['stagedPath'] = 'work/native-state055/renamed.c'
        self.save()
        with self.assertRaises(ValueError):
            stage.contract()


if __name__ == '__main__':
    unittest.main()
