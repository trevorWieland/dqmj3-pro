import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'toolscripts'))
import native_sdk063_stage as stage


class Sdk063StageTests(unittest.TestCase):
    def setUp(self):
        temporary=tempfile.TemporaryDirectory();self.addCleanup(temporary.cleanup)
        self.root=Path(temporary.name);self.lane=self.root/'work/native-sdk063';self.base=self.root/'work/public'
        self.manifest=self.root/'stage-inputs.json';self.source=self.root/'source.c';self.source.write_bytes(b'int candidate;\n')
        for module,key,value in [(stage,'ROOT',self.root),(stage,'LANE',self.lane),(stage,'BASE',self.base),
                (stage,'MANIFEST',self.manifest),(stage.common,'ROOT',self.root)]:
            patcher=patch.object(module,key,value);patcher.start();self.addCleanup(patcher.stop)
        self.data=dict(files=[dict(publicInput=stage.common.pin(self.source),stagedRelativePath='source/part'+str(i)+'.c')for i in range(5)])
        self.save()

    def save(self):self.manifest.write_text(json.dumps(self.data))

    def test_fresh_source_only_stage_retains_exact_declared_inputs(self):
        stage.prepare();stage.common.verify(stage.contract())
        value=json.loads((self.base/'staged-inputs.json').read_bytes())
        self.assertEqual(value['copiedInputs'],5);self.assertFalse(value['repositoryToolsOrOriginalArchivesCopied'])

    def test_existing_frozen_lane_preserved(self):
        self.lane.mkdir(parents=True);sentinel=self.lane/'ready.json';sentinel.write_bytes(b'preserve')
        with self.assertRaises(ValueError):stage.prepare()
        self.assertEqual(sentinel.read_bytes(),b'preserve');self.assertFalse(self.base.exists())

    def test_changed_public_source_rejected(self):
        self.source.write_bytes(b'changed')
        with self.assertRaises(ValueError):stage.contract()

    def test_path_escape_rejected(self):
        self.data['files'][0]['stagedRelativePath']='../../outside.c';self.save()
        with self.assertRaises(ValueError):stage.contract()

    def test_duplicate_destination_rejected(self):
        self.data['files'][1]['stagedRelativePath']=self.data['files'][0]['stagedRelativePath'];self.save()
        with self.assertRaises(ValueError):stage.contract()

    def test_missing_declared_source_rejected(self):
        self.data['files'].pop();self.save()
        with self.assertRaises(ValueError):stage.contract()


if __name__=='__main__':unittest.main()
