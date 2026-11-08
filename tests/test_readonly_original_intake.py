import hashlib
import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'toolscripts'))
import ci_native_build as build
import inventory


class ReadOnlyOriginalIntakeTests(unittest.TestCase):
    def setUp(self):
        self.temporary=tempfile.TemporaryDirectory()
        self.addCleanup(self.temporary.cleanup)
        self.root=Path(self.temporary.name)/'replay'
        self.owner=Path(self.temporary.name)/'owner'
        self.root.mkdir();self.owner.mkdir()
        project=dict(inputs={})
        for label in ['base','update']:
            relative='inputs/archive/game/'+label+'.cia'
            original=self.owner/relative;original.parent.mkdir(parents=True,exist_ok=True)
            original.write_bytes(('synthetic immutable archive '+label).encode())
            project['inputs'][label]=relative
            project[label+'CiaSha256']=hashlib.sha256(original.read_bytes()).hexdigest()
            code=('newly extracted '+label).encode();exheader=bytes(2048)
            p=self.root/'evidence/inventory'/(label+'-content0.json')
            p.parent.mkdir(parents=True,exist_ok=True)
            p.write_text(json.dumps(dict(codeSha256=hashlib.sha256(code).hexdigest(),
                exheaderSha256=hashlib.sha256(exheader).hexdigest())))
        (self.root/'project.json').write_text(json.dumps(project))
        self.project=project;self.seen=[]

    def inspect(self,source,label):
        self.assertTrue(source.samefile(self.owner/self.project['inputs'][label]))
        self.seen.append(label)
        output=inventory.ROOT/'generated'/(label+'-content0');output.mkdir(parents=True)
        (output/'code.bin').write_bytes(('newly extracted '+label).encode())
        (output/'exheader.bin').write_bytes(bytes(2048))
        return dict(sha256=self.project[label+'CiaSha256'],titleId=label,titleVersionRaw=0)

    def test_fresh_extraction_uses_owner_inputs_without_archive_copy(self):
        before={p:p.read_bytes()for p in self.owner.rglob('*.cia')}
        previous=inventory.ROOT
        with patch.object(inventory,'inspect_cia',side_effect=self.inspect):
            result=build.extract_inputs(self.root,self.root/'work/intake',source_root=self.owner)
        self.assertEqual(self.seen,['base','update']);self.assertEqual(set(result),{'base','update'})
        self.assertFalse((self.root/'inputs').exists())
        self.assertEqual({p:p.read_bytes()for p in before},before)
        self.assertEqual(inventory.ROOT,previous)
        self.assertEqual((self.root/'generated/update-content0/code.bin').read_bytes(),b'newly extracted update')

    def test_changed_owner_input_rejected_before_extractor(self):
        (self.owner/self.project['inputs']['base']).write_bytes(b'wrong original')
        with patch.object(inventory,'inspect_cia')as inspect:
            with self.assertRaisesRegex(RuntimeError,'identity mismatch'):
                build.extract_inputs(self.root,self.root/'work/intake',source_root=self.owner)
        inspect.assert_not_called()

    def test_extractor_changing_input_cannot_pass_after_read(self):
        def corrupt(source,label):
            result=self.inspect(source,label);source.write_bytes(b'changed during extraction');return result
        with patch.object(inventory,'inspect_cia',side_effect=corrupt):
            with self.assertRaisesRegex(RuntimeError,'identity mismatch'):
                build.extract_inputs(self.root,self.root/'work/intake',source_root=self.owner)
        self.assertFalse((self.root/'generated').exists())

    def test_failed_extractor_restores_inventory_root(self):
        previous=inventory.ROOT
        with patch.object(inventory,'inspect_cia',side_effect=RuntimeError('extractor failed')):
            with self.assertRaisesRegex(RuntimeError,'extractor failed'):
                build.extract_inputs(self.root,self.root/'work/intake',source_root=self.owner)
        self.assertEqual(inventory.ROOT,previous)

    def test_corrupt_fresh_code_cannot_replace_valid_final_copy(self):
        def corrupt(source,label):
            result=self.inspect(source,label)
            (inventory.ROOT/'generated'/f'{label}-content0'/'code.bin').write_bytes(b'wrong extracted code')
            return result
        with patch.object(inventory,'inspect_cia',side_effect=corrupt):
            with self.assertRaisesRegex(RuntimeError,'identity mismatch'):
                build.extract_inputs(self.root,self.root/'work/intake',source_root=self.owner)
        self.assertFalse((self.root/'generated').exists())


if __name__=='__main__':
    unittest.main()
