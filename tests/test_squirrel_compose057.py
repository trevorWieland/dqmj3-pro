import hashlib
import json
import shutil
import sys
import tempfile
import unittest
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]
WORK=ROOT/'work/squirrel-compose057'
sys.path.insert(0,str(ROOT/'toolscripts'))
from squirrel_compose057_verify import verify_pin,verify_tree


class ProofIdentityTests(unittest.TestCase):
    def setUp(self):
        WORK.mkdir(parents=True,exist_ok=True)
        self.root=Path(tempfile.mkdtemp(prefix='verify-small-',dir=WORK)).resolve()
        if not self.root.is_relative_to(WORK.resolve()):raise ValueError('Test folder escaped owned work')
        (self.root/'a.bin').write_bytes(b'proof057')
        self.record={'path':'a.bin','bytes':8,'sha256':hashlib.sha256(b'proof057').hexdigest()}

    def tearDown(self):
        if not self.root.is_relative_to(WORK.resolve()):raise ValueError('Refusing unexpected test cleanup')
        shutil.rmtree(self.root)

    def test_enriched_identity(self):verify_pin(self.root,dict(self.record,role='caller-evidence'))

    def test_changed_same_size_bytes(self):
        (self.root/'a.bin').write_bytes(b'wrong057')
        with self.assertRaises(ValueError):verify_pin(self.root,self.record)

    def test_changed_size(self):
        with self.assertRaises(ValueError):verify_pin(self.root,dict(self.record,bytes=9))

    def test_changed_existing_path(self):
        (self.root/'b.bin').write_bytes(b'wrong057')
        with self.assertRaises(ValueError):verify_pin(self.root,dict(self.record,path='b.bin'))

    def test_parent_escape(self):
        with self.assertRaises(ValueError):verify_pin(self.root,dict(self.record,path='../a.bin'))

    def test_absolute_path(self):
        with self.assertRaises(ValueError):verify_pin(self.root,dict(self.record,path=str(self.root/'a.bin')))

    def test_recursive_enriched_identity(self):
        self.assertEqual(verify_tree(self.root,{'evidence':[dict(self.record,kind='metadata')]}),1)

    def test_relocated_c_and_binding_bytes(self):
        record=json.loads((ROOT/'evidence/lanes/squirrel-compose057/stage-v1/relocation.json').read_text())
        for row in record['relocations']:
            if row['byteIdentical']:
                self.assertEqual(hashlib.sha256((ROOT/row['public']['path']).read_bytes()).hexdigest(),row['original']['sha256'])


if __name__=='__main__':unittest.main()
