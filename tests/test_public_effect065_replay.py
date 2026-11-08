import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'toolscripts'))
import public_effect065_replay as replay


class PublicEffectReplayTests(unittest.TestCase):
    def setUp(self):
        temporary = tempfile.TemporaryDirectory()
        self.addCleanup(temporary.cleanup)
        self.root = Path(temporary.name).resolve()
        self.public = self.root / 'evidence/effect-public'
        self.public.mkdir(parents=True)
        self.output = self.root / 'work/effect-proof'
        for module, key, value in [(replay, 'ROOT', self.root), (replay, 'PUBLIC', self.public),
                (replay, 'OUTPUT', self.output), (replay, 'GUARD', self.root / 'work/input-guard.json'),
                (replay.common, 'ROOT', self.root)]:
            patcher = patch.object(module, key, value)
            patcher.start()
            self.addCleanup(patcher.stop)
        tools = [self.create('toolscripts/native_effect065_part' + str(i) + '.py') for i in range(18)]
        metadata = self.create('toolscripts/native_effect065_intake.py')
        sources = [self.create('src/native/wave065/part' + str(i) + '.h') for i in range(27)]
        origin = dict(files=tools + sources[:12] + [dict(sources[0], path='work/private' + str(i)) for i in range(2)])
        dependencies = sources[12:] + sources[:3]
        a, b = self.public / 'origin.json', self.public / 'dependencies.json'
        a.write_text(json.dumps(origin))
        b.write_text(json.dumps(dependencies))
        self.value = dict(files=sorted(tools + sources + [metadata], key=lambda row: row['path']),
            stageCapturedTools=sorted(row['path'] for row in tools + [metadata]),
            frozenOrigin=replay.common.pin(a), sourceDependencies=replay.common.pin(b), postSealMetadataInput=metadata)
        self.save()

    def create(self, name):
        path = self.root / name
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_bytes(b'fixture\n')
        return replay.common.pin(path)

    def save(self):
        (self.public / 'input-manifest.json').write_text(json.dumps(self.value))

    def test_complete_exact_public_inputs_pass(self):
        self.assertEqual(len(replay.contract()), 46)

    def test_mutable_successor_tool_cannot_enter_stage_capture(self):
        self.create('toolscripts/native_effect065_resource_mutable.py')
        with self.assertRaises(ValueError):
            replay.contract()

    def test_existing_output_is_preserved(self):
        self.output.mkdir(parents=True)
        sentinel = self.output / 'keep'
        sentinel.write_bytes(b'preserve')
        with self.assertRaises(ValueError):
            replay.proof()
        self.assertEqual(sentinel.read_bytes(), b'preserve')

    def test_source_mutation_rejected(self):
        (self.root / self.value['files'][0]['path']).write_bytes(b'changed')
        with self.assertRaises(ValueError):
            replay.contract()

    def test_frozen_origin_mutation_rejected(self):
        (self.public / 'origin.json').write_bytes(b'changed')
        with self.assertRaises(ValueError):
            replay.contract()

    def test_duplicate_input_rejected(self):
        self.value['files'][1] = self.value['files'][0]
        self.save()
        with self.assertRaises(ValueError):
            replay.contract()

    def test_public_path_escape_rejected(self):
        self.value['files'][0] = dict(self.value['files'][0], path='../outside')
        self.save()
        with self.assertRaises(ValueError):
            replay.contract()

    def test_private_work_input_cannot_be_published_as_source(self):
        self.value['files'][0] = self.create('work/private0')
        self.save()
        with self.assertRaises(ValueError):
            replay.contract()

    def test_incomplete_source_roster_rejected(self):
        self.value['files'].pop()
        self.save()
        with self.assertRaises(ValueError):
            replay.contract()


if __name__ == '__main__':
    unittest.main()
