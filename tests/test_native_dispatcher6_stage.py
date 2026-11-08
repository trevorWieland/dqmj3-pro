import copy
import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'toolscripts'))
import native_dispatcher6_stage as stage


class Dispatcher6StageTests(unittest.TestCase):
    def setUp(self):
        temporary=tempfile.TemporaryDirectory();self.addCleanup(temporary.cleanup)
        self.root=Path(temporary.name).resolve();self.lane=self.root/'work/native-state055'
        self.public=self.root/'evidence/dispatcher';self.public.mkdir(parents=True)
        self.base=self.root/'work/dispatcher-public';source=self.root/'candidate.c';source.write_bytes(b'int candidate;\n')
        for module,key,value in [(stage,'ROOT',self.root),(stage,'LANE',self.lane),
                (stage,'BASE',self.base),(stage,'PUBLIC',self.public),(stage.common,'ROOT',self.root)]:
            patcher=patch.object(module,key,value);patcher.start();self.addCleanup(patcher.stop)
        record=stage.common.pin(source);rows=[];frozen=[]
        for index in range(54):
            prior=dict(record,path='work/native-state055/source/part'+str(index)+'.c')
            rows.append(dict(privateFrozen=prior,publicInput=record,stagedPath=prior['path'],byteIdentical=True));frozen.append(prior)
        origin=self.public/'origin.json';origin.write_text(json.dumps(dict(files=frozen)))
        self.value=dict(files=rows,publicFrozenOrigin=stage.common.pin(origin));self.save()

    def save(self):(self.public/'stage-inputs.json').write_text(json.dumps(self.value))

    def test_minimal_fresh_stage_preserves_all54_frozen_source_inputs(self):
        stage.prepare();stage.common.verify(stage.contract())
        result=json.loads((self.base/'staged-inputs.json').read_bytes())
        self.assertEqual(result['declaredInputs'],54);self.assertFalse(result['repositoryToolsOrOriginalArchivesCopied'])

    def test_existing_private_lane_never_overwritten(self):
        self.lane.mkdir(parents=True);sentinel=self.lane/'ready.json';sentinel.write_bytes(b'preserve')
        with self.assertRaises(ValueError):stage.prepare()
        self.assertEqual(sentinel.read_bytes(),b'preserve');self.assertFalse(self.base.exists())

    def test_staged_path_escape_rejected(self):
        self.value['files'][0]['stagedPath']='../outside.c';self.save()
        with self.assertRaises(ValueError):stage.contract()

    def test_private_input_cannot_target_another_work_lane(self):
        self.value['files'][0]['stagedPath']='work/other-lane/part.c';self.save()
        with self.assertRaises(ValueError):stage.contract()

    def test_duplicate_destination_rejected(self):
        self.value['files'][1]['stagedPath']=self.value['files'][0]['stagedPath'];self.save()
        with self.assertRaises(ValueError):stage.contract()

    def test_unfrozen_source_cannot_be_promoted_by_rehashing(self):
        self.value['files'][0]['privateFrozen']['sha256']='0'*64;self.save()
        with self.assertRaises(ValueError):stage.contract()

    def test_changed_public_source_rejected(self):
        (self.root/'candidate.c').write_bytes(b'changed')
        with self.assertRaises(ValueError):stage.contract()

    def test_incomplete_roster_rejected(self):
        self.value['files'].pop();self.save()
        with self.assertRaises(ValueError):stage.contract()


if __name__=='__main__':unittest.main()
